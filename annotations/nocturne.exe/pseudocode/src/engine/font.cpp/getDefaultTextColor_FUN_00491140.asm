; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_getDefaultTextColor_FUN_00491140(void)
;
;
; XREF[2]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760 at 0045d7f4
;   engine_winfont.cpp_CWinFont_setColorAndDrawText_FUN_005580b0 at 005582d9
;
; Referenced Globals:
;   undefined4 DAT_01c70f70
;
; *****************************************************************************

section .text

    MOV EAX,[0x01c70f70]                ; 00491140 | DAT_01c70f70
        ;   Label: engine_font.cpp_getDefaultTextColor_FUN_00491140
    RET                                 ; 00491145

