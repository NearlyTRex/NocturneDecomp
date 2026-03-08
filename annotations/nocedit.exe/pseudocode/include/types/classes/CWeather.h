#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"
#include "types/enums/EWeatherType.h"

// Structure: CWeather
// Ghidra size: 0x38 (56 bytes)
typedef struct CWeather {
    EWeatherType weather_type; // 0x0
    float particle_speed; // 0x4
    CVector3f direction; // 0x8
    CVector3f rotation; // 0x14
    float lightning_countdown; // 0x20
    int lightning_active; // 0x24
    float flash_timer; // 0x28
    float sub_flash_interval; // 0x2c
    float base_ambient; // 0x30
    float max_flash_interval; // 0x34
} CWeather;

