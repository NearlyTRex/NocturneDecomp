; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flattn_cpp_FUN_004ad5e0(undefined4 *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01d1a0ac
;   undefined4 DAT_01d1a0b0
;   undefined4 DAT_01d1a0b4
;   undefined4 DAT_01d1a0b8
;   undefined4 DAT_01d1a0bc
;   undefined4 DAT_01d1a0c0
;   undefined4 DAT_01d1a0c4
;   undefined4 DAT_01d1a0c8
;   undefined4 DAT_01d1a0cc
;   undefined4 DAT_01d1a0d0
;   undefined4 DAT_01d1a0d4
;   undefined4 DAT_01d1a0d8
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ad5e0
        ;   Label: core_flattn.cpp_FUN_004ad5e0
    FLD float ptr [EAX]                 ; 004ad5e4
    FLD float ptr [EAX + 0x4]           ; 004ad5e6
    FLD float ptr [EAX + 0x8]           ; 004ad5e9
    FLD float ptr [EAX + 0xc]           ; 004ad5ec
    FLD float ptr [EAX + 0x10]          ; 004ad5ef
    FLD float ptr [EAX + 0x14]          ; 004ad5f2
    FLD float ptr [EAX + 0x18]          ; 004ad5f5
    FXCH ST5                            ; 004ad5f8
    FSTP float ptr [0x01d1a0b8]         ; 004ad5fa | DAT_01d1a0b8
    FLD float ptr [EAX + 0x1c]          ; 004ad600
    FXCH ST4                            ; 004ad603
    FSTP float ptr [0x01d1a0c4]         ; 004ad605 | DAT_01d1a0c4
    FLD float ptr [EAX + 0x20]          ; 004ad60b
    FXCH ST3                            ; 004ad60e
    FSTP float ptr [0x01d1a0b0]         ; 004ad610 | DAT_01d1a0b0
    FXCH                                ; 004ad616
    FSTP float ptr [0x01d1a0bc]         ; 004ad618 | DAT_01d1a0bc
    FSTP float ptr [0x01d1a0c8]         ; 004ad61e | DAT_01d1a0c8
    FXCH ST2                            ; 004ad624
    FSTP float ptr [0x01d1a0b4]         ; 004ad626 | DAT_01d1a0b4
    FSTP float ptr [0x01d1a0c0]         ; 004ad62c | DAT_01d1a0c0
    FSTP float ptr [0x01d1a0cc]         ; 004ad632 | DAT_01d1a0cc
    XOR EDX,EDX                         ; 004ad638
    FSTP float ptr [0x01d1a0ac]         ; 004ad63a | DAT_01d1a0ac
    MOV dword ptr [0x01d1a0d0],EDX      ; 004ad640 | DAT_01d1a0d0
    MOV dword ptr [0x01d1a0d4],EDX      ; 004ad646 | DAT_01d1a0d4
    MOV dword ptr [0x01d1a0d8],EDX      ; 004ad64c | DAT_01d1a0d8
    RET                                 ; 004ad652

