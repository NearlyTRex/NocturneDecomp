; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_2d_c_getTextWrapEnabled_FUN_00402800(void)
;
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00469b40 at 00469dcb
;
; Referenced Globals:
;   int g_TextWrapEnabled = 0x1
;
; *****************************************************************************

section .text

    MOV EAX,[0x005f076c]                ; 00402800 | g_TextWrapEnabled
        ;   Label: engine_2d.c_getTextWrapEnabled_FUN_00402800
    RET                                 ; 00402805

