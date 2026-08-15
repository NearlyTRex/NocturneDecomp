#pragma once

// Function prototypes for core/weather.cpp
// Generated from Ghidra function signatures

// Original: core_weather.cpp_staticInit_FUN_00554930
// Address: 00554930
void __cdecl staticInit(void);

// Original: core_weather.cpp_CWeather_ctor_FUN_00554960
// Address: 00554960
CWeather * __cdecl CWeather::ctor(CWeather *this_ptr);

// Original: core_weather.cpp_CWeather_update_FUN_00554980
// Address: 00554980
void __cdecl CWeather::update(CWeather *this_ptr);

// Original: core_weather.cpp_CWeather_createLightningStrike_FUN_00554d40
// Address: 00554d40
void __cdecl CWeather::createLightningStrike(CWeather *this_ptr,float flash_timer,int play_sound);

// Original: core_weather.cpp_CWeather_createThunder_FUN_00554fd0
// Address: 00554fd0
void __cdecl CWeather::createThunder(CWeather *this_ptr);

// Original: core_weather.cpp_CWeather_renderParticles_FUN_00555020
// Address: 00555020
void __cdecl CWeather::renderParticles(CWeather *this_ptr);

// Original: core_weather.cpp_CWeather_setWeatherType_FUN_00555750
// Address: 00555750
void __cdecl CWeather::setWeatherType(CWeather *this_ptr,EWeatherType type);

// Original: core_weather.cpp_CWeather_setOriginAndRotation_FUN_005557d0
// Address: 005557d0
void __cdecl CWeather::setOriginAndRotation(CWeather *this_ptr,CVector3f *direction,CVector3f *rotation);

// Original: core_weather.cpp_CWeather_dtor_FUN_005559d0
// Address: 005559d0
CWeather * __cdecl CWeather::dtor(CWeather *this_ptr,uint flags);

// Original: core_weather.cpp_CVector3f_arrdtor200_FUN_005559e0
// Address: 005559e0
CVector3f * __cdecl CVector3f::arrdtor200(CVector3f *this_ptr,uint flags);
