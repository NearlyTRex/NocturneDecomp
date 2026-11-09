; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f3710(void)
;
;
; XREF[1]:
;   engine_font.cpp_FUN_004a97a0 at 004a9813
;
; Referenced Globals:
;   undefined4 DAT_01d09868
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 004f3710
        ;   Label: engine_mini3d.cpp_FUN_004f3710
    MOV dword ptr [0x01d09868],EDX      ; 004f3712 | DAT_01d09868
    RET                                 ; 004f3718

