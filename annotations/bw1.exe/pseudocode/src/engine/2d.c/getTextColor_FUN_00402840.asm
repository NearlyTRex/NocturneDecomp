; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_2d_c_getTextColor_FUN_00402840(void)
;
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00480480 at 00480714
;
; Referenced Globals:
;   int g_INT_006104a0 = 0xf8
;
; *****************************************************************************

section .text

    MOV EAX,[0x006104a0]                ; 00402840 | g_INT_006104a0
        ;   Label: engine_2d.c_getTextColor_FUN_00402840
    RET                                 ; 00402845

