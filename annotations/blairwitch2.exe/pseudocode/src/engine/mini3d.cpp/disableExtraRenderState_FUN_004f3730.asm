; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_disableExtraRenderState_FUN_004f3730(void)
;
;
; XREF[1]:
;   engine_font.cpp_CBitFont_flushAccelBatch_FUN_004a97a0 at 004a984d
;
; Referenced Globals:
;   int g_INT_01d09864
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 004f3730
        ;   Label: engine_mini3d.cpp_disableExtraRenderState_FUN_004f3730
    MOV dword ptr [0x01d09864],EDX      ; 004f3732 | g_INT_01d09864
    RET                                 ; 004f3738

