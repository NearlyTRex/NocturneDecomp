; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_setTextWrapEnabled_FUN_00402810(int enabled)
;
; Parameters:
; int              Stack[0x4]:4   enabled
;
; XREF[2]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00469b40 at 00469d73
;   engine_2d.c_disableTextWrap_FUN_00402830 at 00402832
;
; Referenced Globals:
;   int g_TextWrapEnabled = 0x1
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00402810
        ;   Label: engine_2d.c_setTextWrapEnabled_FUN_00402810
    MOV [0x005f076c],EAX                ; 00402814 | g_TextWrapEnabled
    RET                                 ; 00402819

