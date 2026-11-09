; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_flattn_cpp_FUN_004a69c0(float *param_1,float *param_2)
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
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004a69c0
        ;   Label: unkafter_flattn.cpp_FUN_004a69c0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004a69c4
    FLD float ptr [EAX + 0x4]           ; 004a69c8
    FMUL float ptr [0x01caf5c0]         ; 004a69cb | DAT_01caf5c0
    FLD float ptr [EAX]                 ; 004a69d1
    FMUL float ptr [0x01caf5bc]         ; 004a69d3 | DAT_01caf5bc
    FADDP                               ; 004a69d9
    FLD float ptr [EAX + 0x8]           ; 004a69db
    FMUL float ptr [0x01caf5c4]         ; 004a69de | DAT_01caf5c4
    FADDP                               ; 004a69e4
    FSTP float ptr [EDX]                ; 004a69e6
    FLD float ptr [EAX + 0x4]           ; 004a69e8
    FMUL float ptr [0x01caf5cc]         ; 004a69eb | DAT_01caf5cc
    FLD float ptr [EAX]                 ; 004a69f1
    FMUL float ptr [0x01caf5c8]         ; 004a69f3 | DAT_01caf5c8
    FADDP                               ; 004a69f9
    FLD float ptr [EAX + 0x8]           ; 004a69fb
    FMUL float ptr [0x01caf5d0]         ; 004a69fe | DAT_01caf5d0
    FADDP                               ; 004a6a04
    FSTP float ptr [EDX + 0x4]          ; 004a6a06
    FLD float ptr [EAX + 0x4]           ; 004a6a09
    FMUL float ptr [0x01caf5d8]         ; 004a6a0c | DAT_01caf5d8
    FLD float ptr [EAX]                 ; 004a6a12
    FMUL float ptr [0x01caf5d4]         ; 004a6a14 | DAT_01caf5d4
    FADDP                               ; 004a6a1a
    FLD float ptr [EAX + 0x8]           ; 004a6a1c
    FMUL float ptr [0x01caf5dc]         ; 004a6a1f | DAT_01caf5dc
    FADDP                               ; 004a6a25
    FSTP float ptr [EDX + 0x8]          ; 004a6a27
    RET                                 ; 004a6a2a

