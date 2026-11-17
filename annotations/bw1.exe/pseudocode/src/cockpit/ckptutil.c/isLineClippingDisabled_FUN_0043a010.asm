; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl cockpit_ckptutil_c_isLineClippingDisabled_FUN_0043a010(void)
;
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawAntiAliasedLine_FUN_0047f7a0 at 0047f7ea
;
; Referenced Globals:
;   int g_INT_00610d40 = 0x1
;
; *****************************************************************************

section .text

    MOV EAX,[0x00610d40]                ; 0043a010 | g_INT_00610d40
        ;   Label: cockpit_ckptutil.c_isLineClippingDisabled_FUN_0043a010
    RET                                 ; 0043a015

