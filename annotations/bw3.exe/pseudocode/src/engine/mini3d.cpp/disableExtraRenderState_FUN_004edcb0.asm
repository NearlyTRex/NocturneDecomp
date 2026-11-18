; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_disableExtraRenderState_FUN_004edcb0(void)
;
;
; XREF[1]:
;   engine_font.cpp_CBitFont_flushAccelBatch_FUN_004b13a0 at 004b1443
;
; Referenced Globals:
;   int g_INT_01d76c44
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 004edcb0
        ;   Label: engine_mini3d.cpp_disableExtraRenderState_FUN_004edcb0
    MOV dword ptr [0x01d76c44],EDX      ; 004edcb2 | g_INT_01d76c44
    RET                                 ; 004edcb8

