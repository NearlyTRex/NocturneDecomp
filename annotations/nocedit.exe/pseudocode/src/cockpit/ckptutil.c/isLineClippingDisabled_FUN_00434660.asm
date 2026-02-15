; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl cockpit_ckptutil_c_isLineClippingDisabled_FUN_00434660(void)
;
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawAntiAliasedLine_FUN_00488410 at 0048845a
;
; Referenced Globals:
;   int g_LineClippingDisabled = 0x1
;
; *****************************************************************************

section .text

    MOV EAX,[0x0066e800]                ; 00434660 | g_LineClippingDisabled
        ;   Label: cockpit_ckptutil.c_isLineClippingDisabled_FUN_00434660
    RET                                 ; 00434665

