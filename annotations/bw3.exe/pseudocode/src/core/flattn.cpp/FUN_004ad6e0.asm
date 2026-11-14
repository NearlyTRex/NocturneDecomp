; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flattn_cpp_FUN_004ad6e0(float *param_1,float *param_2)
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
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004ad6e0
        ;   Label: core_flattn.cpp_FUN_004ad6e0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004ad6e4
    FLD float ptr [EAX + 0x4]           ; 004ad6e8
    FMUL float ptr [0x01d1a0b0]         ; 004ad6eb | DAT_01d1a0b0
    FLD float ptr [EAX]                 ; 004ad6f1
    FMUL float ptr [0x01d1a0ac]         ; 004ad6f3 | DAT_01d1a0ac
    FADDP                               ; 004ad6f9
    FLD float ptr [EAX + 0x8]           ; 004ad6fb
    FMUL float ptr [0x01d1a0b4]         ; 004ad6fe | DAT_01d1a0b4
    FADDP                               ; 004ad704
    FSTP float ptr [EDX]                ; 004ad706
    FLD float ptr [EAX + 0x4]           ; 004ad708
    FMUL float ptr [0x01d1a0bc]         ; 004ad70b | DAT_01d1a0bc
    FLD float ptr [EAX]                 ; 004ad711
    FMUL float ptr [0x01d1a0b8]         ; 004ad713 | DAT_01d1a0b8
    FADDP                               ; 004ad719
    FLD float ptr [EAX + 0x8]           ; 004ad71b
    FMUL float ptr [0x01d1a0c0]         ; 004ad71e | DAT_01d1a0c0
    FADDP                               ; 004ad724
    FSTP float ptr [EDX + 0x4]          ; 004ad726
    FLD float ptr [EAX + 0x4]           ; 004ad729
    FMUL float ptr [0x01d1a0c8]         ; 004ad72c | DAT_01d1a0c8
    FLD float ptr [EAX]                 ; 004ad732
    FMUL float ptr [0x01d1a0c4]         ; 004ad734 | DAT_01d1a0c4
    FADDP                               ; 004ad73a
    FLD float ptr [EAX + 0x8]           ; 004ad73c
    FMUL float ptr [0x01d1a0cc]         ; 004ad73f | DAT_01d1a0cc
    FADDP                               ; 004ad745
    FSTP float ptr [EDX + 0x8]          ; 004ad747
    RET                                 ; 004ad74a

