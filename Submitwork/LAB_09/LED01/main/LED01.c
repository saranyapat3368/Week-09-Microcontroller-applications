#include <stdio.h>
#include "driver/gpio.h"


void app_main(void)
{
    gpio_set_direction(2, GPIO_MODE_OUTPUT):
    gpio_set_level(2,1);

    while (1)
    {
        vTaskDelay(pdMS_TO_TICK(1000));
    }
    


}
