; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWeather * __cdecl core_weather_cpp_CWeather_ctor_FUN_005ae170(CWeather *this_ptr)
;
; Parameters:
; CWeather *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_weather.cpp_staticInit_FUN_005ae140 at 005ae145
;
; Called Functions:
;   core_weather.cpp_CWeather_setWeatherType_FUN_005aefc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ae170
        ;   Label: core_weather.cpp_CWeather_ctor_FUN_005ae170
    MOV EBX,dword ptr [ESP + 0x8]       ; 005ae171
    PUSH 0x0                            ; 005ae175
    PUSH EBX                            ; 005ae177
    CALL core_weather.cpp_CWeather_setWeatherType_FUN_005aefc0 ; 005ae178
        ;   XREF to: 005aefc0 (UNCONDITIONAL_CALL)  ; void core_weather.cpp_CWeather_setWeatherType_FUN_005aefc0(CWeather * this_ptr, EWeatherType type)
    ADD ESP,0x8                         ; 005ae17d
    MOV EAX,EBX                         ; 005ae180
    POP EBX                             ; 005ae182
    RET                                 ; 005ae183

