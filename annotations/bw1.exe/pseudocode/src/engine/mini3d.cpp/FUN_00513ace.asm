; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_00513ace(float *param_1,float *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01d224dc
;   undefined4 DAT_01d224e0
;   undefined4 DAT_01d224e4
;   undefined4 DAT_01d224e8
;   undefined4 DAT_01d224ec
;   undefined4 DAT_01d224f0
;   undefined4 DAT_01d224f4
;   undefined4 DAT_01d224f8
;   undefined4 DAT_01d224fc
;   undefined4 DAT_01d22500
;   undefined4 DAT_01d22504
;   undefined4 DAT_01d22508
;   undefined4 DAT_01d2250c
;   undefined4 DAT_01d22510
;   undefined4 DAT_01d22514
;   ... and 1 more
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 00513ace
        ;   Label: engine_mini3d.cpp_FUN_00513ace
    SUB ESP,0xc                         ; 00513ad0
    MOV EAX,dword ptr [ESP + 0x10]      ; 00513ad3
    MOV EDX,dword ptr [ESP + 0x14]      ; 00513ad7
    FLD float ptr [EAX]                 ; 00513adb
    FSUB float ptr [0x01d224e4]         ; 00513add | DAT_01d224e4
    FMUL float ptr [EAX + 0x8]          ; 00513ae3
    FDIV float ptr [0x01d224dc]         ; 00513ae6 | DAT_01d224dc
    FLD float ptr [EAX + 0x4]           ; 00513aec
    FSUB float ptr [0x01d224e8]         ; 00513aef | DAT_01d224e8
    FMUL float ptr [EAX + 0x8]          ; 00513af5
    FLD ST1                             ; 00513af8
    FMUL float ptr [0x01d224ec]         ; 00513afa | DAT_01d224ec
    FLD ST2                             ; 00513b00
    FMUL float ptr [0x01d224f0]         ; 00513b02 | DAT_01d224f0
    FXCH ST3                            ; 00513b08
    FMUL float ptr [0x01d224f4]         ; 00513b0a | DAT_01d224f4
    FXCH ST2                            ; 00513b10
    FDIV float ptr [0x01d224e0]         ; 00513b12 | DAT_01d224e0
    FLD ST0                             ; 00513b18
    FMUL float ptr [0x01d224f8]         ; 00513b1a | DAT_01d224f8
    MOV EAX,dword ptr [EAX + 0x8]       ; 00513b20
    FLD ST1                             ; 00513b23
    FMUL float ptr [0x01d224fc]         ; 00513b25 | DAT_01d224fc
    MOV dword ptr [ESP + 0x8],EAX       ; 00513b2b
    FXCH                                ; 00513b2f
    FADDP ST3,ST0                       ; 00513b31
    FXCH                                ; 00513b33
    FMUL float ptr [0x01d22500]         ; 00513b35 | DAT_01d22500
    FLD float ptr [ESP + 0x8]           ; 00513b3b
    FMUL float ptr [0x01d22504]         ; 00513b3f | DAT_01d22504
    FXCH ST2                            ; 00513b45
    FADDP ST5,ST0                       ; 00513b47
    FADDP ST3,ST0                       ; 00513b49
    FLD float ptr [ESP + 0x8]           ; 00513b4b
    FMUL float ptr [0x01d22508]         ; 00513b4f | DAT_01d22508
    FLD float ptr [ESP + 0x8]           ; 00513b55
    FMUL float ptr [0x01d2250c]         ; 00513b59 | DAT_01d2250c
    FXCH ST2                            ; 00513b5f
    FADDP ST3,ST0                       ; 00513b61
    FADDP ST4,ST0                       ; 00513b63
    FADDP ST2,ST0                       ; 00513b65
    FLD float ptr [0x01d22510]          ; 00513b67 | DAT_01d22510
    FLD float ptr [0x01d22514]          ; 00513b6d | DAT_01d22514
    FLD float ptr [0x01d22518]          ; 00513b73 | DAT_01d22518
    FXCH ST2                            ; 00513b79
    FADDP ST3,ST0                       ; 00513b7b
    FADDP ST4,ST0                       ; 00513b7d
    FADDP ST2,ST0                       ; 00513b7f
    FSTP float ptr [EDX]                ; 00513b81
    FXCH                                ; 00513b83
    FSTP float ptr [EDX + 0x4]          ; 00513b85
    FSTP float ptr [EDX + 0x8]          ; 00513b88
    ADD ESP,0xc                         ; 00513b8b
    RET                                 ; 00513b8e

