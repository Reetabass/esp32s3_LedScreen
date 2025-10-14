idf_component_register(
    SRCS
        "ssd1306_128x64_i2c.cpp"
        "Adafruit_I2CDevice.cpp"
        "Adafruit_SPIDevice.cpp"
        "glcdfont.c"
        "Adafruit_GFX.cpp"
        "Adafruit_SSD1306.cpp"
        "main.cpp"

    INCLUDE_DIRS
        "include"
    REQUIRES
        arduino-esp32


                     
)