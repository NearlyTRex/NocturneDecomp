#pragma once

// Function prototypes for core/weather.cpp
// Generated from Ghidra function signatures

// Original: core_weather.cpp_CWeather_ctor_FUN_00554960
// Address: 00554960
undefined4 CWeather::ctor(undefined4 param_1);

// Original: core_weather.cpp_CWeather_update_FUN_00554980
// Address: 00554980
void __cdecl CWeather::update(int *param_1);

// Original: core_weather.cpp_CWeather_createLightningStrike_FUN_00554d40
// Address: 00554d40
void __cdecl CWeather::createLightningStrike(int param_1,undefined4 param_2,int param_3);

// Original: core_weather.cpp_CWeather_createThunder_FUN_00554fd0
// Address: 00554fd0
void __cdecl CWeather::createThunder(int param_1);

// Original: core_weather.cpp_CWeather_renderParticles_FUN_00555020
// Address: 00555020
void __cdecl CWeather::renderParticles(int *param_1);

// Original: core_weather.cpp_CWeather_setWeatherType_FUN_00555750
// Address: 00555750
void __cdecl CWeather::setWeatherType(int *param_1,int param_2);

// Original: core_weather.cpp_CWeather_setOriginAndRotation_FUN_005557d0
// Address: 005557d0
void CWeather::setOriginAndRotation(int *param_1,float *param_2,int *param_3);

// Original: core_weather.cpp_CWeather_dtor_FUN_005559d0
// Address: 005559d0
undefined4 CWeather::dtor(undefined4 param_1);
