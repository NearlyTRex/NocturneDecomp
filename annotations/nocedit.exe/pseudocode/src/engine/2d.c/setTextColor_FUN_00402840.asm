; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_2d.c_setTextColor_FUN_00402840(int color)
;
; Parameters:
; int              Stack[0x4]:4   color
;
; XREF[2]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120 at 00489346
;   shape_design.c_showFacetPartEditor_FUN_0045f1d0 at 0045f2d9
;
; Referenced Globals:
;   int g_CurrentTextColor = 0xf8
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00402840
        ;   Label: engine_2d.c_setTextColor_FUN_00402840
    MOV [0x0066df78],EAX                ; 00402844 | g_CurrentTextColor
    RET                                 ; 00402849

