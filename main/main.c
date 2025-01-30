#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

#define LED_PIN GPIO_NUM_2 // Pino do LED integrado no ESP32

void app_main(void) {
    // Configurar o pino do LED como saída
    gpio_config_t io_conf = {};
    io_conf.intr_type = GPIO_INTR_DISABLE;
    io_conf.mode = GPIO_MODE_OUTPUT;
    io_conf.pin_bit_mask = (1ULL << LED_PIN);
    io_conf.pull_down_en = GPIO_PULLDOWN_DISABLE;
    io_conf.pull_up_en = GPIO_PULLUP_DISABLE;
    gpio_config(&io_conf);
    
    for (int i = 0; i < 3; i++) {
        gpio_set_level(LED_PIN, 1); // Liga o LED
        vTaskDelay(pdMS_TO_TICKS(1000)); // Espera 1 segundo
        gpio_set_level(LED_PIN, 0); // Desliga o LED
        vTaskDelay(pdMS_TO_TICKS(1000)); // Espera 1 segundo
        gpio_set_level(LED_PIN, 0); // Liga o LED
    }

for (int i = 0; i < 3; i++) {
        gpio_set_level(LED_PIN, 1); // Liga o LED
        vTaskDelay(pdMS_TO_TICKS(3000)); // Espera 1 segundo
        gpio_set_level(LED_PIN, 0); // Desliga o LED
        vTaskDelay(pdMS_TO_TICKS(1000)); // Espera 1 segundo
        gpio_set_level(LED_PIN, 0); // Liga o LED
    }

for (int i = 0; i < 3; i++) {
        gpio_set_level(LED_PIN, 1); // Liga o LED
        vTaskDelay(pdMS_TO_TICKS(1000)); // Espera 1 segundo
        gpio_set_level(LED_PIN, 0); // Desliga o LED
        vTaskDelay(pdMS_TO_TICKS(1000)); // Espera 1 segundo
        gpio_set_level(LED_PIN, 0); // Liga o LED
    }
}
// Desenvolvido por Joâo santana