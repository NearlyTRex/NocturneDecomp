; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_flattn_cpp_FUN_004ad660(float *param_1,float *param_2)
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

    MOV EDX,dword ptr [ESP + 0x4]       ; 004ad660
        ;   Label: unkafter_flattn.cpp_FUN_004ad660
    MOV EAX,dword ptr [ESP + 0x8]       ; 004ad664
    FLD float ptr [EAX + 0x4]           ; 004ad668
    FMUL float ptr [0x01d1a0b0]         ; 004ad66b | DAT_01d1a0b0
    FLD float ptr [EAX]                 ; 004ad671
    FMUL float ptr [0x01d1a0ac]         ; 004ad673 | DAT_01d1a0ac
    FADDP                               ; 004ad679
    FLD float ptr [EAX + 0x8]           ; 004ad67b
    FMUL float ptr [0x01d1a0b4]         ; 004ad67e | DAT_01d1a0b4
    FADDP                               ; 004ad684
    FADD float ptr [0x01d1a0d0]         ; 004ad686 | DAT_01d1a0d0
    FSTP float ptr [EDX]                ; 004ad68c
    FLD float ptr [EAX + 0x4]           ; 004ad68e
    FMUL float ptr [0x01d1a0bc]         ; 004ad691 | DAT_01d1a0bc
    FLD float ptr [EAX]                 ; 004ad697
    FMUL float ptr [0x01d1a0b8]         ; 004ad699 | DAT_01d1a0b8
    FADDP                               ; 004ad69f
    FLD float ptr [EAX + 0x8]           ; 004ad6a1
    FMUL float ptr [0x01d1a0c0]         ; 004ad6a4 | DAT_01d1a0c0
    FADDP                               ; 004ad6aa
    FADD float ptr [0x01d1a0d4]         ; 004ad6ac | DAT_01d1a0d4
    FSTP float ptr [EDX + 0x4]          ; 004ad6b2
    FLD float ptr [EAX + 0x4]           ; 004ad6b5
    FMUL float ptr [0x01d1a0c8]         ; 004ad6b8 | DAT_01d1a0c8
    FLD float ptr [EAX]                 ; 004ad6be
    FMUL float ptr [0x01d1a0c4]         ; 004ad6c0 | DAT_01d1a0c4
    FADDP                               ; 004ad6c6
    FLD float ptr [EAX + 0x8]           ; 004ad6c8
    FMUL float ptr [0x01d1a0cc]         ; 004ad6cb | DAT_01d1a0cc
    FADDP                               ; 004ad6d1
    FADD float ptr [0x01d1a0d8]         ; 004ad6d3 | DAT_01d1a0d8
    FSTP float ptr [EDX + 0x8]          ; 004ad6d9
    RET                                 ; 004ad6dc

