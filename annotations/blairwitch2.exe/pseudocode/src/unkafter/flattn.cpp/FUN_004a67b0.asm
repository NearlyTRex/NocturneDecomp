; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_flattn_cpp_FUN_004a67b0(undefined4 *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01caf5bc
;   undefined4 DAT_01caf5c0
;   undefined4 DAT_01caf5c4
;   undefined4 DAT_01caf5c8
;   undefined4 DAT_01caf5cc
;   undefined4 DAT_01caf5d0
;   undefined4 DAT_01caf5d4
;   undefined4 DAT_01caf5d8
;   undefined4 DAT_01caf5dc
;   undefined4 DAT_01caf5e0
;   undefined4 DAT_01caf5e4
;   undefined4 DAT_01caf5e8
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a67b0
        ;   Label: unkafter_flattn.cpp_FUN_004a67b0
    FLD float ptr [EAX]                 ; 004a67b4
    FLD float ptr [EAX + 0x4]           ; 004a67b6
    FLD float ptr [EAX + 0x8]           ; 004a67b9
    FLD float ptr [EAX + 0xc]           ; 004a67bc
    FLD float ptr [EAX + 0x10]          ; 004a67bf
    FLD float ptr [EAX + 0x14]          ; 004a67c2
    FLD float ptr [EAX + 0x18]          ; 004a67c5
    FXCH ST5                            ; 004a67c8
    FSTP float ptr [0x01caf5c0]         ; 004a67ca | DAT_01caf5c0
    FLD float ptr [EAX + 0x1c]          ; 004a67d0
    FXCH ST4                            ; 004a67d3
    FSTP float ptr [0x01caf5c4]         ; 004a67d5 | DAT_01caf5c4
    FLD float ptr [EAX + 0x20]          ; 004a67db
    FXCH ST3                            ; 004a67de
    FSTP float ptr [0x01caf5c8]         ; 004a67e0 | DAT_01caf5c8
    FXCH                                ; 004a67e6
    FSTP float ptr [0x01caf5cc]         ; 004a67e8 | DAT_01caf5cc
    FSTP float ptr [0x01caf5d0]         ; 004a67ee | DAT_01caf5d0
    FXCH ST2                            ; 004a67f4
    FSTP float ptr [0x01caf5d4]         ; 004a67f6 | DAT_01caf5d4
    FSTP float ptr [0x01caf5d8]         ; 004a67fc | DAT_01caf5d8
    FSTP float ptr [0x01caf5dc]         ; 004a6802 | DAT_01caf5dc
    XOR EDX,EDX                         ; 004a6808
    FSTP float ptr [0x01caf5bc]         ; 004a680a | DAT_01caf5bc
    MOV dword ptr [0x01caf5e0],EDX      ; 004a6810 | DAT_01caf5e0
    MOV dword ptr [0x01caf5e4],EDX      ; 004a6816 | DAT_01caf5e4
    MOV dword ptr [0x01caf5e8],EDX      ; 004a681c | DAT_01caf5e8
    RET                                 ; 004a6822

