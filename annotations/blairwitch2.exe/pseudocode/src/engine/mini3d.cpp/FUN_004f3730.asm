; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f3730(void)
;
;
; XREF[1]:
;   engine_font.cpp_FUN_004a97a0 at 004a984d
;
; Referenced Globals:
;   undefined4 DAT_01d09864
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 004f3730
        ;   Label: engine_mini3d.cpp_FUN_004f3730
    MOV dword ptr [0x01d09864],EDX      ; 004f3732 | DAT_01d09864
    RET                                 ; 004f3738

