; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flattn_cpp_FUN_004a6830(undefined4 *param_1,undefined4 *param_2)
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

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a6830
        ;   Label: core_flattn.cpp_FUN_004a6830
    MOV EDX,dword ptr [ESP + 0x8]       ; 004a6834
    FLD float ptr [EAX]                 ; 004a6838
    FLD float ptr [EAX + 0x4]           ; 004a683a
    FLD float ptr [EAX + 0x8]           ; 004a683d
    FLD float ptr [EAX + 0xc]           ; 004a6840
    FLD float ptr [EAX + 0x10]          ; 004a6843
    FLD float ptr [EAX + 0x14]          ; 004a6846
    FLD float ptr [EAX + 0x18]          ; 004a6849
    FXCH ST5                            ; 004a684c
    FSTP float ptr [0x01caf5c0]         ; 004a684e | DAT_01caf5c0
    FLD float ptr [EAX + 0x1c]          ; 004a6854
    FXCH ST4                            ; 004a6857
    FSTP float ptr [0x01caf5c4]         ; 004a6859 | DAT_01caf5c4
    FLD float ptr [EAX + 0x20]          ; 004a685f
    FXCH ST3                            ; 004a6862
    FSTP float ptr [0x01caf5c8]         ; 004a6864 | DAT_01caf5c8
    FLD float ptr [EDX]                 ; 004a686a
    FXCH ST2                            ; 004a686c
    FSTP float ptr [0x01caf5cc]         ; 004a686e | DAT_01caf5cc
    FLD float ptr [EDX + 0x4]           ; 004a6874
    FXCH                                ; 004a6877
    FSTP float ptr [0x01caf5d0]         ; 004a6879 | DAT_01caf5d0
    FLD float ptr [EDX + 0x8]           ; 004a687f
    FXCH ST5                            ; 004a6882
    FSTP float ptr [0x01caf5d4]         ; 004a6884 | DAT_01caf5d4
    FXCH ST3                            ; 004a688a
    FSTP float ptr [0x01caf5d8]         ; 004a688c | DAT_01caf5d8
    FXCH                                ; 004a6892
    FSTP float ptr [0x01caf5dc]         ; 004a6894 | DAT_01caf5dc
    FSTP float ptr [0x01caf5e0]         ; 004a689a | DAT_01caf5e0
    FSTP float ptr [0x01caf5e4]         ; 004a68a0 | DAT_01caf5e4
    FSTP float ptr [0x01caf5e8]         ; 004a68a6 | DAT_01caf5e8
    FSTP float ptr [0x01caf5bc]         ; 004a68ac | DAT_01caf5bc
    RET                                 ; 004a68b2

