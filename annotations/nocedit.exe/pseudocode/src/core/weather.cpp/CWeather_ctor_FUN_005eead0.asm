; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CWeather * core_weather.cpp_CWeather_ctor_FUN_005eead0(CWeather * this_ptr)
;
; Parameters:
; CWeather *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_weather.cpp_staticInit_FUN_005eeaa0 at 005eeaa5
;
; Called Functions:
;   core_weather.cpp_CWeather_FUN_005ef8c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005eead0
        ;   Label: core_weather.cpp_CWeather_ctor_FUN_005eead0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005eead1
    PUSH 0x0                            ; 005eead5
    PUSH EBX                            ; 005eead7
    CALL core_weather.cpp_CWeather_FUN_005ef8c0 ; 005eead8 | undefined core_weather.cpp_CWeather_FUN_005ef8c0()
        ;   XREF to: 005ef8c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005eeadd
    MOV EAX,EBX                         ; 005eeae0
    POP EBX                             ; 005eeae2
    RET                                 ; 005eeae3

