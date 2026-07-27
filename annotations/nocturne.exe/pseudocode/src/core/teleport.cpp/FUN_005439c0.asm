; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_teleport_cpp_FUN_005439c0(int param_1,float *param_2)
;
;
; Referenced Globals:
;   double DOUBLE_005964f8 = 0.5
;   double DOUBLE_00596500 = 0.100000000000000
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005439c0
        ;   Label: core_teleport.cpp_FUN_005439c0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005439c4
    FLD float ptr [EDX + 0x150]         ; 005439c8
    FCHS                                ; 005439ce
    FLD double ptr [0x005964f8]         ; 005439d0 | DOUBLE_005964f8
    FXCH                                ; 005439d6
    FMUL ST1                            ; 005439d8
    MOV dword ptr [EAX + 0x4],0xbdcccccd ; 005439da
    FSTP float ptr [EAX]                ; 005439e1
    FLD float ptr [EDX + 0x158]         ; 005439e3
    FCHS                                ; 005439e9
    FMUL ST1                            ; 005439eb
    FSTP float ptr [EAX + 0x8]          ; 005439ed
    FLD float ptr [EDX + 0x150]         ; 005439f0
    FMUL ST1                            ; 005439f6
    FSTP float ptr [EAX + 0xc]          ; 005439f8
    FLD float ptr [EDX + 0x154]         ; 005439fb
    FADD double ptr [0x00596500]        ; 00543a01 | DOUBLE_00596500
    FSTP float ptr [EAX + 0x10]         ; 00543a07
    FMUL float ptr [EDX + 0x158]        ; 00543a0a
    FSTP float ptr [EAX + 0x14]         ; 00543a10
    RET                                 ; 00543a13

