; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_weather_cpp_FUN_0057bd80(int param_1)
;
;
; XREF[1]:
;   core_weather.cpp_staticInit_FUN_0057bd20 at 0057bd25
;
; Called Functions:
;   core_weather.cpp_FUN_0057d050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057bd80
        ;   Label: core_weather.cpp_FUN_0057bd80
    MOV EBX,dword ptr [ESP + 0x8]       ; 0057bd81
    PUSH 0x0                            ; 0057bd85
    PUSH EBX                            ; 0057bd87
    CALL core_weather.cpp_FUN_0057d050  ; 0057bd88
        ;   XREF to: 0057d050 (UNCONDITIONAL_CALL)  ; undefined core_weather.cpp_FUN_0057d050()
    ADD ESP,0x8                         ; 0057bd8d
    MOV EAX,EBX                         ; 0057bd90
    MOV dword ptr [EBX + 0x64],0x0      ; 0057bd92
    POP EBX                             ; 0057bd99
    RET                                 ; 0057bd9a

