; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWeather * __cdecl core_weather_cpp_CWeather_ctor_FUN_0058a640(CWeather *this_ptr)
;
; Parameters:
; CWeather *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_weather.cpp_staticInit_FUN_0058a610 at 0058a615
;
; Called Functions:
;   core_weather.cpp_CWeather_setWeatherType_FUN_0058b470
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058a640
        ;   Label: core_weather.cpp_CWeather_ctor_FUN_0058a640
    MOV EBX,dword ptr [ESP + 0x8]       ; 0058a641
    PUSH 0x0                            ; 0058a645
    PUSH EBX                            ; 0058a647
    CALL core_weather.cpp_CWeather_setWeatherType_FUN_0058b470 ; 0058a648
        ;   XREF to: 0058b470 (UNCONDITIONAL_CALL)  ; void core_weather.cpp_CWeather_setWeatherType_FUN_0058b470(CWeather * this_ptr, EWeatherType type)
    ADD ESP,0x8                         ; 0058a64d
    MOV EAX,EBX                         ; 0058a650
    POP EBX                             ; 0058a652
    RET                                 ; 0058a653

