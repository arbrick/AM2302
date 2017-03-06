# AM2302

A Particle library for AM2302

To compile the example you can use `particle compile examples/usage` command in [Particle CLI](https://docs.particle.io/guide/tools-and-features/cli#update-your-device-remotely) or use the [Desktop IDE](https://docs.particle.io/guide/tools-and-features/dev/#compiling-code).

## Usage

Connect the AM2302 hardware (see the [Documentation](#Documentation) section for more info), add the AM2302 library to your project and reference this example:

NOTE: This is an example and will not compile. See the "[usage](./examples/usage)" folder for a more in depth example.

```cpp
AM2302 sensor(DATA_PIN);

void setup() {}

void loop() {
  sensor.sample()

  if (sensor.dataIsGood()){
    temp = sensor.getTemp();
    humidity = sensor.getHumidity();
  } else {
    // ERROR
  }
}
```

See the [examples](examples) folder for more details.

## Documentation

Datasheet: [AM2302 (via Adafruit)](https://www.adafruit.com/datasheets/Digital%20humidity%20and%20temperature%20sensor%20AM2302.pdf)

## Contributing

Feel free to fork and PR against this repo!

Documentation on how to create and test libraries can be found on the [particle website](https://docs.particle.io/guide/tools-and-features/cli/photon/#contributing-libraries)

## LICENSE
Copyright 2017 Alex Brick

Licensed under the MIT license
