; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_manpuz.cpp_FUN_005092e0()
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005092e0
        ;   Label: core_manpuz.cpp_FUN_005092e0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005092e4
    FLD float ptr [EDX + 0x1508]        ; 005092e8
    MOV dword ptr [EAX + 0x4],0x0       ; 005092ee
    FCHS                                ; 005092f5
    FSTP float ptr [EAX]                ; 005092f7
    FLD float ptr [EDX + 0x1508]        ; 005092f9
    FCHS                                ; 005092ff
    FSTP float ptr [EAX + 0x8]          ; 00509301
    MOV ECX,dword ptr [EDX + 0x1508]    ; 00509304
    MOV dword ptr [EAX + 0xc],ECX       ; 0050930a
    MOV ECX,dword ptr [EDX + 0x1510]    ; 0050930d
    MOV dword ptr [EAX + 0x10],ECX      ; 00509313
    MOV ECX,dword ptr [EDX + 0x1508]    ; 00509316
    MOV dword ptr [EAX + 0x14],ECX      ; 0050931c
    RET                                 ; 0050931f

