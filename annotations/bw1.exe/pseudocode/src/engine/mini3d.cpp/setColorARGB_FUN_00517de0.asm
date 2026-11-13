; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_setColorARGB_FUN_00517de0(uint argb)
;
; Parameters:
; uint             Stack[0x4]:4   argb
;
; Referenced Globals:
;   undefined4 DAT_005e903b
;   undefined4 DAT_01c50948
;   undefined4 DAT_01d224c0
;   undefined4 DAT_01d22548
;   undefined4 DAT_01d2254c
;   undefined4 DAT_01d22550
;   undefined4 DAT_01d25f38
;   undefined4 DAT_01d25f3c
;   undefined4 DAT_01d25f40
;   undefined4 DAT_01d25f44
;   undefined4 DAT_02c83448
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00517de0
        ;   Label: engine_mini3d.cpp_setColorARGB_FUN_00517de0
    SUB ESP,0x8                         ; 00517de1
    MOV EBX,dword ptr [ESP + 0x10]      ; 00517de4
    MOV EAX,EBX                         ; 00517de8
    SHR EAX,0x10                        ; 00517dea
    AND EAX,0xff                        ; 00517ded
    MOV dword ptr [ESP + 0x4],EAX       ; 00517df2
    MOV EAX,EBX                         ; 00517df6
    FILD dword ptr [ESP + 0x4]          ; 00517df8
    SHR EAX,0x8                         ; 00517dfc
    FLD float ptr [0x005e903b]          ; 00517dff | DAT_005e903b
    FXCH                                ; 00517e05
    FMUL ST1                            ; 00517e07
    AND EAX,0xff                        ; 00517e09
    MOV dword ptr [ESP + 0x4],EAX       ; 00517e0e
    MOV EAX,EBX                         ; 00517e12
    FILD dword ptr [ESP + 0x4]          ; 00517e14
    AND EAX,0xff                        ; 00517e18
    FMUL ST2                            ; 00517e1d
    MOV dword ptr [ESP + 0x4],EAX       ; 00517e1f
    MOV EAX,EBX                         ; 00517e23
    FILD dword ptr [ESP + 0x4]          ; 00517e25
    SHR EAX,0x18                        ; 00517e29
    FMUL ST3                            ; 00517e2c
    AND EAX,0xff                        ; 00517e2e
    MOV dword ptr [ESP + 0x4],EAX       ; 00517e33
    FILD dword ptr [ESP + 0x4]          ; 00517e37
    FMULP ST4                           ; 00517e3b
    FLD float ptr [0x01d224c0]          ; 00517e3d | DAT_01d224c0
    FXCH ST3                            ; 00517e43
    FSTP float ptr [0x01d25f38]         ; 00517e45 | DAT_01d25f38
    FXCH                                ; 00517e4b
    FSTP float ptr [0x01d25f3c]         ; 00517e4d | DAT_01d25f3c
    FSTP float ptr [0x01d25f40]         ; 00517e53 | DAT_01d25f40
    FXCH                                ; 00517e59
    FSTP float ptr [ESP]                ; 00517e5b
    FCOMP float ptr [ESP]               ; 00517e5e
    FNSTSW AX                           ; 00517e61
    SAHF                                ; 00517e63
    JZ 0x00517e81                       ; 00517e64
        ;   XREF to: 00517e81 (CONDITIONAL_JUMP)  ; LAB_00517e81
    MOV EAX,dword ptr [ESP]             ; 00517e66
    MOV EDX,dword ptr [0x02c83448]      ; 00517e69 | DAT_02c83448
    MOV [0x01d224c0],EAX                ; 00517e6f | DAT_01d224c0
    TEST EDX,EDX                        ; 00517e74
    JZ 0x00517e81                       ; 00517e76
        ;   XREF to: 00517e81 (CONDITIONAL_JUMP)  ; LAB_00517e81
    CMP dword ptr [0x01c50948],0x0      ; 00517e78 | DAT_01c50948
    JNZ 0x00517e8c                      ; 00517e7f
        ;   XREF to: 00517e8c (CONDITIONAL_JUMP)  ; LAB_00517e8c
    MOV dword ptr [0x01d25f44],EBX      ; 00517e81 | DAT_01d25f44
        ;   Label: LAB_00517e81
    ADD ESP,0x8                         ; 00517e87
    POP EBX                             ; 00517e8a
    RET                                 ; 00517e8b
    PUSH EAX                            ; 00517e8c
        ;   Label: LAB_00517e8c
    PUSH dword ptr [0x01d22550]         ; 00517e8d | DAT_01d22550
    PUSH dword ptr [0x01d2254c]         ; 00517e93 | DAT_01d2254c
    PUSH dword ptr [0x01d22548]         ; 00517e99 | DAT_01d22548
    CALL dword ptr [0x02c83448]         ; 00517e9f | DAT_02c83448
    ADD ESP,0x10                        ; 00517ea5
    MOV dword ptr [0x01d25f44],EBX      ; 00517ea8 | DAT_01d25f44
    ADD ESP,0x8                         ; 00517eae
    POP EBX                             ; 00517eb1
    RET                                 ; 00517eb2

