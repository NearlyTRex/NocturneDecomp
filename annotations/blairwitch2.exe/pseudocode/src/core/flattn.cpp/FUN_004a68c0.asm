; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flattn_cpp_FUN_004a68c0(undefined4 *param_1)
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

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a68c0
        ;   Label: core_flattn.cpp_FUN_004a68c0
    FLD float ptr [EAX]                 ; 004a68c4
    FLD float ptr [EAX + 0x4]           ; 004a68c6
    FLD float ptr [EAX + 0x8]           ; 004a68c9
    FLD float ptr [EAX + 0xc]           ; 004a68cc
    FLD float ptr [EAX + 0x10]          ; 004a68cf
    FLD float ptr [EAX + 0x14]          ; 004a68d2
    FLD float ptr [EAX + 0x18]          ; 004a68d5
    FXCH ST5                            ; 004a68d8
    FSTP float ptr [0x01caf5c8]         ; 004a68da | DAT_01caf5c8
    FLD float ptr [EAX + 0x1c]          ; 004a68e0
    FXCH ST4                            ; 004a68e3
    FSTP float ptr [0x01caf5d4]         ; 004a68e5 | DAT_01caf5d4
    FLD float ptr [EAX + 0x20]          ; 004a68eb
    FXCH ST3                            ; 004a68ee
    FSTP float ptr [0x01caf5c0]         ; 004a68f0 | DAT_01caf5c0
    FXCH                                ; 004a68f6
    FSTP float ptr [0x01caf5cc]         ; 004a68f8 | DAT_01caf5cc
    FSTP float ptr [0x01caf5d8]         ; 004a68fe | DAT_01caf5d8
    FXCH ST2                            ; 004a6904
    FSTP float ptr [0x01caf5c4]         ; 004a6906 | DAT_01caf5c4
    FSTP float ptr [0x01caf5d0]         ; 004a690c | DAT_01caf5d0
    FSTP float ptr [0x01caf5dc]         ; 004a6912 | DAT_01caf5dc
    XOR EDX,EDX                         ; 004a6918
    FSTP float ptr [0x01caf5bc]         ; 004a691a | DAT_01caf5bc
    MOV dword ptr [0x01caf5e0],EDX      ; 004a6920 | DAT_01caf5e0
    MOV dword ptr [0x01caf5e4],EDX      ; 004a6926 | DAT_01caf5e4
    MOV dword ptr [0x01caf5e8],EDX      ; 004a692c | DAT_01caf5e8
    RET                                 ; 004a6932

