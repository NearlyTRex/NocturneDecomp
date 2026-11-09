; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_flattn_cpp_FUN_004a6940(float *param_1,float *param_2)
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

    MOV EDX,dword ptr [ESP + 0x4]       ; 004a6940
        ;   Label: unkafter_flattn.cpp_FUN_004a6940
    MOV EAX,dword ptr [ESP + 0x8]       ; 004a6944
    FLD float ptr [EAX + 0x4]           ; 004a6948
    FMUL float ptr [0x01caf5c0]         ; 004a694b | DAT_01caf5c0
    FLD float ptr [EAX]                 ; 004a6951
    FMUL float ptr [0x01caf5bc]         ; 004a6953 | DAT_01caf5bc
    FADDP                               ; 004a6959
    FLD float ptr [EAX + 0x8]           ; 004a695b
    FMUL float ptr [0x01caf5c4]         ; 004a695e | DAT_01caf5c4
    FADDP                               ; 004a6964
    FADD float ptr [0x01caf5e0]         ; 004a6966 | DAT_01caf5e0
    FSTP float ptr [EDX]                ; 004a696c
    FLD float ptr [EAX + 0x4]           ; 004a696e
    FMUL float ptr [0x01caf5cc]         ; 004a6971 | DAT_01caf5cc
    FLD float ptr [EAX]                 ; 004a6977
    FMUL float ptr [0x01caf5c8]         ; 004a6979 | DAT_01caf5c8
    FADDP                               ; 004a697f
    FLD float ptr [EAX + 0x8]           ; 004a6981
    FMUL float ptr [0x01caf5d0]         ; 004a6984 | DAT_01caf5d0
    FADDP                               ; 004a698a
    FADD float ptr [0x01caf5e4]         ; 004a698c | DAT_01caf5e4
    FSTP float ptr [EDX + 0x4]          ; 004a6992
    FLD float ptr [EAX + 0x4]           ; 004a6995
    FMUL float ptr [0x01caf5d8]         ; 004a6998 | DAT_01caf5d8
    FLD float ptr [EAX]                 ; 004a699e
    FMUL float ptr [0x01caf5d4]         ; 004a69a0 | DAT_01caf5d4
    FADDP                               ; 004a69a6
    FLD float ptr [EAX + 0x8]           ; 004a69a8
    FMUL float ptr [0x01caf5dc]         ; 004a69ab | DAT_01caf5dc
    FADDP                               ; 004a69b1
    FADD float ptr [0x01caf5e8]         ; 004a69b3 | DAT_01caf5e8
    FSTP float ptr [EDX + 0x8]          ; 004a69b9
    RET                                 ; 004a69bc

