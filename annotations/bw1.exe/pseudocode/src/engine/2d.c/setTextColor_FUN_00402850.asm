; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_setTextColor_FUN_00402850(int color)
;
; Parameters:
; int              Stack[0x4]:4   color
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00480480 at 00480729
;
; Referenced Globals:
;   int g_CurrentTextColor = 0xf8
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00402850
        ;   Label: engine_2d.c_setTextColor_FUN_00402850
    MOV [0x006104a0],EAX                ; 00402854 | g_CurrentTextColor
    RET                                 ; 00402859

