; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_weather_cpp_CWeather_ctor_FUN_00554960(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00554930 at 00554935
;
; Called Functions:
;   core_weather.cpp_CWeather_setWeatherType_FUN_00555750
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00554960
        ;   Label: core_weather.cpp_CWeather_ctor_FUN_00554960
    MOV EBX,dword ptr [ESP + 0x8]       ; 00554961
    PUSH 0x0                            ; 00554965
    PUSH EBX                            ; 00554967
    CALL core_weather.cpp_CWeather_setWeatherType_FUN_00555750 ; 00554968
        ;   XREF to: 00555750 (UNCONDITIONAL_CALL)  ; undefined core_weather.cpp_CWeather_setWeatherType_FUN_00555750()
    ADD ESP,0x8                         ; 0055496d
    MOV EAX,EBX                         ; 00554970
    POP EBX                             ; 00554972
    RET                                 ; 00554973

