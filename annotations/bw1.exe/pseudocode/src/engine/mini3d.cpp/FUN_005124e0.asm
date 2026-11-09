; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_005124e0(void)
;
;
; XREF[1]:
;   engine_font.cpp_FUN_004c2750 at 004c27f3
;
; Referenced Globals:
;   undefined4 DAT_01d224c4
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 005124e0
        ;   Label: engine_mini3d.cpp_FUN_005124e0
    MOV dword ptr [0x01d224c4],EDX      ; 005124e2 | DAT_01d224c4
    RET                                 ; 005124e8

