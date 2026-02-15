; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_setDefaultTextColor_FUN_004ce230(int text_color)
;
; Parameters:
; int              Stack[0x4]:4   text_color
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120 at 004891c4
;
; Referenced Globals:
;   int g_DefaultTextColor
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ce230
        ;   Label: engine_font.cpp_setDefaultTextColor_FUN_004ce230
    MOV [0x02d7b424],EAX                ; 004ce234 | g_DefaultTextColor
    RET                                 ; 004ce239

