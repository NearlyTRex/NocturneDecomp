; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_setLineClippingDisabled_FUN_0042f320(int disabled)
;
; Parameters:
; int              Stack[0x4]:4   disabled
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawAntiAliasedLine_FUN_00467290 at 004672e3
;
; Referenced Globals:
;   int g_LineClippingDisabled = 0x1
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0042f320
        ;   Label: cockpit_ckptutil.c_setLineClippingDisabled_FUN_0042f320
    MOV [0x00609b30],EAX                ; 0042f324 | g_LineClippingDisabled
    RET                                 ; 0042f329

