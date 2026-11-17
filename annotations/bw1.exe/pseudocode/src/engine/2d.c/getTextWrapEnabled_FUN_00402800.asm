; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_2d_c_getTextWrapEnabled_FUN_00402800(void)
;
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00480480 at 0048070b
;
; Referenced Globals:
;   int g_TextWrapEnabled = 0x1
;
; *****************************************************************************

section .text

    MOV EAX,[0x0061049c]                ; 00402800 | g_TextWrapEnabled
        ;   Label: engine_2d.c_getTextWrapEnabled_FUN_00402800
    RET                                 ; 00402805

