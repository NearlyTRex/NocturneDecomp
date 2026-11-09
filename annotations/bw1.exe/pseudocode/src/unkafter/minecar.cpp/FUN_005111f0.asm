; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_minecar_cpp_FUN_005111f0(float param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005e8b63
;   undefined4 DAT_01d22528
;
; *****************************************************************************

section .text

    FLD float ptr [ESP + 0x4]           ; 005111f0
        ;   Label: unkafter_minecar.cpp_FUN_005111f0
    FMUL float ptr [0x005e8b63]         ; 005111f4 | DAT_005e8b63
    FSTP float ptr [0x01d22528]         ; 005111fa | DAT_01d22528
    RET                                 ; 00511200

