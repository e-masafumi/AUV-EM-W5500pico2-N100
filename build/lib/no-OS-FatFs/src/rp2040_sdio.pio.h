// -------------------------------------------------- //
// This file is autogenerated by pioasm; do not edit! //
// -------------------------------------------------- //

#pragma once

#if !PICO_NO_HARDWARE
#include "hardware/pio.h"
#endif

#define CLKDIV 4
#define SDIO_CLK_PIN_D0_OFFSET 30

// ------------ //
// sdio_cmd_clk //
// ------------ //

#define sdio_cmd_clk_wrap_target 0
#define sdio_cmd_clk_wrap 17
#define sdio_cmd_clk_pio_version 1

static const uint16_t sdio_cmd_clk_program_instructions[] = {
            //     .wrap_target
    0xb1e3, //  0: mov    osr, null       side 1 [1]
    0xa14d, //  1: mov    y, ~status      side 0 [1]
    0x1161, //  2: jmp    !y, 1           side 1 [1]
    0x6160, //  3: out    null, 32        side 0 [1]
    0x7128, //  4: out    x, 8            side 1 [1]
    0xe101, //  5: set    pins, 1         side 0 [1]
    0xf181, //  6: set    pindirs, 1      side 1 [1]
    0x6101, //  7: out    pins, 1         side 0 [1]
    0x1147, //  8: jmp    x--, 7          side 1 [1]
    0xe180, //  9: set    pindirs, 0      side 0 [1]
    0x7128, // 10: out    x, 8            side 1 [1]
    0xa142, // 11: nop                    side 0 [1]
    0x1131, // 12: jmp    !x, 17          side 1 [1]
    0xa142, // 13: nop                    side 0 [1]
    0x11cd, // 14: jmp    pin, 13         side 1 [1]
    0x4101, // 15: in     pins, 1         side 0 [1]
    0x114f, // 16: jmp    x--, 15         side 1 [1]
    0x8120, // 17: push   block           side 0 [1]
            //     .wrap
};

#if !PICO_NO_HARDWARE
static const struct pio_program sdio_cmd_clk_program = {
    .instructions = sdio_cmd_clk_program_instructions,
    .length = 18,
    .origin = -1,
    .pio_version = sdio_cmd_clk_pio_version,
#if PICO_PIO_VERSION > 0
    .used_gpio_ranges = 0x0
#endif
};

static inline pio_sm_config sdio_cmd_clk_program_get_default_config(uint offset) {
    pio_sm_config c = pio_get_default_sm_config();
    sm_config_set_wrap(&c, offset + sdio_cmd_clk_wrap_target, offset + sdio_cmd_clk_wrap);
    sm_config_set_sideset(&c, 1, false, false);
    return c;
}
#endif

// ------------ //
// sdio_data_rx //
// ------------ //

#define sdio_data_rx_wrap_target 0
#define sdio_data_rx_wrap 4
#define sdio_data_rx_pio_version 1

static const uint16_t sdio_data_rx_program_instructions[] = {
            //     .wrap_target
    0xa022, //  0: mov    x, y
    0x2020, //  1: wait   0 pin, 0
    0x23be, //  2: wait   1 pin, 30              [3]
    0x4204, //  3: in     pins, 4                [2]
    0x0043, //  4: jmp    x--, 3
            //     .wrap
};

#if !PICO_NO_HARDWARE
static const struct pio_program sdio_data_rx_program = {
    .instructions = sdio_data_rx_program_instructions,
    .length = 5,
    .origin = -1,
    .pio_version = sdio_data_rx_pio_version,
#if PICO_PIO_VERSION > 0
    .used_gpio_ranges = 0x0
#endif
};

static inline pio_sm_config sdio_data_rx_program_get_default_config(uint offset) {
    pio_sm_config c = pio_get_default_sm_config();
    sm_config_set_wrap(&c, offset + sdio_data_rx_wrap_target, offset + sdio_data_rx_wrap);
    return c;
}
#endif

// ------------ //
// sdio_data_tx //
// ------------ //

#define sdio_data_tx_wrap_target 5
#define sdio_data_tx_wrap 8
#define sdio_data_tx_pio_version 1

static const uint16_t sdio_data_tx_program_instructions[] = {
    0x203e, //  0: wait   0 pin, 30
    0x24be, //  1: wait   1 pin, 30              [4]
    0x6104, //  2: out    pins, 4                [1]
    0x0142, //  3: jmp    x--, 2                 [1]
    0xe180, //  4: set    pindirs, 0             [1]
            //     .wrap_target
    0x4101, //  5: in     pins, 1                [1]
    0x0185, //  6: jmp    y--, 5                 [1]
    0x21a0, //  7: wait   1 pin, 0               [1]
    0x8120, //  8: push   block                  [1]
            //     .wrap
};

#if !PICO_NO_HARDWARE
static const struct pio_program sdio_data_tx_program = {
    .instructions = sdio_data_tx_program_instructions,
    .length = 9,
    .origin = -1,
    .pio_version = sdio_data_tx_pio_version,
#if PICO_PIO_VERSION > 0
    .used_gpio_ranges = 0x0
#endif
};

static inline pio_sm_config sdio_data_tx_program_get_default_config(uint offset) {
    pio_sm_config c = pio_get_default_sm_config();
    sm_config_set_wrap(&c, offset + sdio_data_tx_wrap_target, offset + sdio_data_tx_wrap);
    return c;
}
#endif

