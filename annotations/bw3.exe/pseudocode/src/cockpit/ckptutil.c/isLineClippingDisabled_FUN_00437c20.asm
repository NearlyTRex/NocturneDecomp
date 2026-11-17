; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl cockpit_ckptutil_c_isLineClippingDisabled_FUN_00437c20(void)
;
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawAntiAliasedLine_FUN_00468e60 at 00468eaa
;
; Referenced Globals:
;   int g_INT_005f12f0 = 0x1
;
; *****************************************************************************

section .text

    MOV EAX,[0x005f12f0]                ; 00437c20 | g_INT_005f12f0
        ;   Label: cockpit_ckptutil.c_isLineClippingDisabled_FUN_00437c20
    RET                                 ; 00437c25

