; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f2460(float param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005ddadc
;   undefined4 DAT_01d098c8
;
; *****************************************************************************

section .text

    FLD float ptr [ESP + 0x4]           ; 004f2460
        ;   Label: engine_mini3d.cpp_FUN_004f2460
    FMUL float ptr [0x005ddadc]         ; 004f2464 | DAT_005ddadc
    FSTP float ptr [0x01d098c8]         ; 004f246a | DAT_01d098c8
    RET                                 ; 004f2470

