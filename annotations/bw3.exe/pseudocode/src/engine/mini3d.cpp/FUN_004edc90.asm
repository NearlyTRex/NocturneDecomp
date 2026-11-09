; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004edc90(void)
;
;
; XREF[1]:
;   engine_font.cpp_FUN_004b13a0 at 004b1409
;
; Referenced Globals:
;   undefined4 DAT_01d76c48
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 004edc90
        ;   Label: engine_mini3d.cpp_FUN_004edc90
    MOV dword ptr [0x01d76c48],EDX      ; 004edc92 | DAT_01d76c48
    RET                                 ; 004edc98

