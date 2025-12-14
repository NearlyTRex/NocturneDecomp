; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int engine_font.cpp_getDefaultTextColor_FUN_004ce220(void)
;
;
; XREF[2]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120 at 004891b4
;   engine_winfont.cpp_CWinFont_setColorAndDrawText_FUN_005f2440 at 005f2669
;
; Referenced Globals:
;   int g_DefaultTextColor
;
; *****************************************************************************

section .text

    MOV EAX,[0x02d7b424]                ; 004ce220 | g_DefaultTextColor
        ;   Label: engine_font.cpp_getDefaultTextColor_FUN_004ce220
    RET                                 ; 004ce225

