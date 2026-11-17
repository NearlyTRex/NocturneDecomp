; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl cockpit_ckptutil_c_isLineClippingDisabled_FUN_0042f300(void)
;
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawAntiAliasedLine_FUN_00467290 at 004672da
;
; Referenced Globals:
;   int g_INT_00609b30 = 0x1
;
; *****************************************************************************

section .text

    MOV EAX,[0x00609b30]                ; 0042f300 | g_INT_00609b30
        ;   Label: cockpit_ckptutil.c_isLineClippingDisabled_FUN_0042f300
    RET                                 ; 0042f305

