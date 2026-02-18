#pragma once

// Function prototypes for core/weather.cpp
// Generated from Ghidra function signatures

// Original: core_weather.cpp_staticInit_FUN_005eeaa0
// Address: 005eeaa0
void __cdecl staticInit(void);

// Original: core_weather.cpp_CWeather_ctor_FUN_005eead0
// Address: 005eead0
CWeather * __cdecl CWeather::ctor(CWeather *this_ptr);

// Original: core_weather.cpp_CWeather_update_FUN_005eeaf0
// Address: 005eeaf0
void __cdecl CWeather::update(CWeather *this_ptr);

// Original: core_weather.cpp_CWeather_createLightningStrike_FUN_005eeeb0
// Address: 005eeeb0
void __cdecl CWeather::createLightningStrike(CWeather *this_ptr,float flash_timer,int play_sound);

// Original: core_weather.cpp_CWeather_createThunder_FUN_005ef140
// Address: 005ef140
void __cdecl CWeather::createThunder(CWeather *this_ptr);

// Original: core_weather.cpp_CWeather_renderParticles_FUN_005ef190
// Address: 005ef190
void __cdecl CWeather::renderParticles(CWeather *this_ptr);

// Original: core_weather.cpp_CWeather_setWeatherType_FUN_005ef8c0
// Address: 005ef8c0
void __cdecl CWeather::setWeatherType(CWeather *this_ptr,int type);

// Original: core_weather.cpp_CWeather_setOriginAndRotation_FUN_005ef940
// Address: 005ef940
void __cdecl CWeather::setOriginAndRotation(CWeather *this_ptr,CVector3f *direction,CVector3f *rotation);

// Original: core_weather.cpp_CWeather_dtor_FUN_005efb40
// Address: 005efb40
CWeather * __cdecl CWeather::dtor(CWeather *this_ptr,uint flags);

// Original: core_weather.cpp_CVector3f_arrdtor_FUN_005efb50
// Address: 005efb50
CVector3f * __cdecl CVector3f::arrdtor(CVector3f *objs,uint flags);
