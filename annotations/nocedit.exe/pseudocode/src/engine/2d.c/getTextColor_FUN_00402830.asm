; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int engine_2d.c_getTextColor_FUN_00402830(void)
;
;
; XREF[2]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120 at 004893b4
;   shape_design.c_showFacetPartEditor_FUN_0045f1d0 at 0045f2c3
;
; Referenced Globals:
;   int g_CurrentTextColor = 0xf8
;
; *****************************************************************************

section .text

    MOV EAX,[0x0066df78]                ; 00402830 | int g_CurrentTextColor
        ;   Label: engine_2d.c_getTextColor_FUN_00402830
    RET                                 ; 00402835

