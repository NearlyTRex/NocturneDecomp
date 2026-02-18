; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weather_cpp_staticInit_FUN_005eeaa0(void)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo
;   CWeather g_CWeatherInstance
;   CVector3f[200] g_WeatherParticlePositions
;
; Called Functions:
;   core_weather.cpp_CWeather_ctor_FUN_005eead0
;   crt_memory.c___arrinit_FUN_005fe667
;
; *****************************************************************************

section .text

    PUSH 0x3f95dc0                      ; 005eeaa0 | g_CWeatherInstance
        ;   Label: core_weather.cpp_staticInit_FUN_005eeaa0
    CALL core_weather.cpp_CWeather_ctor_FUN_005eead0 ; 005eeaa5
        ;   XREF to: 005eead0 (UNCONDITIONAL_CALL)  ; CWeather * core_weather.cpp_CWeather_ctor_FUN_005eead0(CWeather * this_ptr)
    ADD ESP,0x4                         ; 005eeaaa
    PUSH 0x6598c0                       ; 005eeaad | g_CVectorTypeInfo
    PUSH 0xc8                           ; 005eeab2
    PUSH 0x3f95df8                      ; 005eeab7 | g_WeatherParticlePositions
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 005eeabc
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 005eeac1
    RET                                 ; 005eeac4

