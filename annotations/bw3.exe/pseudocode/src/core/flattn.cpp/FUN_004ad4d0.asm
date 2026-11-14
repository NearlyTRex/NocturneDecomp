; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flattn_cpp_FUN_004ad4d0(undefined4 *param_1)
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

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ad4d0
        ;   Label: core_flattn.cpp_FUN_004ad4d0
    FLD float ptr [EAX]                 ; 004ad4d4
    FLD float ptr [EAX + 0x4]           ; 004ad4d6
    FLD float ptr [EAX + 0x8]           ; 004ad4d9
    FLD float ptr [EAX + 0xc]           ; 004ad4dc
    FLD float ptr [EAX + 0x10]          ; 004ad4df
    FLD float ptr [EAX + 0x14]          ; 004ad4e2
    FLD float ptr [EAX + 0x18]          ; 004ad4e5
    FXCH ST5                            ; 004ad4e8
    FSTP float ptr [0x01d1a0b0]         ; 004ad4ea | DAT_01d1a0b0
    FLD float ptr [EAX + 0x1c]          ; 004ad4f0
    FXCH ST4                            ; 004ad4f3
    FSTP float ptr [0x01d1a0b4]         ; 004ad4f5 | DAT_01d1a0b4
    FLD float ptr [EAX + 0x20]          ; 004ad4fb
    FXCH ST3                            ; 004ad4fe
    FSTP float ptr [0x01d1a0b8]         ; 004ad500 | DAT_01d1a0b8
    FXCH                                ; 004ad506
    FSTP float ptr [0x01d1a0bc]         ; 004ad508 | DAT_01d1a0bc
    FSTP float ptr [0x01d1a0c0]         ; 004ad50e | DAT_01d1a0c0
    FXCH ST2                            ; 004ad514
    FSTP float ptr [0x01d1a0c4]         ; 004ad516 | DAT_01d1a0c4
    FSTP float ptr [0x01d1a0c8]         ; 004ad51c | DAT_01d1a0c8
    FSTP float ptr [0x01d1a0cc]         ; 004ad522 | DAT_01d1a0cc
    XOR EDX,EDX                         ; 004ad528
    FSTP float ptr [0x01d1a0ac]         ; 004ad52a | DAT_01d1a0ac
    MOV dword ptr [0x01d1a0d0],EDX      ; 004ad530 | DAT_01d1a0d0
    MOV dword ptr [0x01d1a0d4],EDX      ; 004ad536 | DAT_01d1a0d4
    MOV dword ptr [0x01d1a0d8],EDX      ; 004ad53c | DAT_01d1a0d8
    RET                                 ; 004ad542

