; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_ckptutil_c_setLineClippingDisabled_FUN_00434680(int disabled)
;
; Parameters:
; int              Stack[0x4]:4   disabled
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawAntiAliasedLine_FUN_00488410 at 00488463
;
; Referenced Globals:
;   int g_LineClippingDisabled = 0x1
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00434680
        ;   Label: cockpit_ckptutil.c_setLineClippingDisabled_FUN_00434680
    MOV [0x0066e800],EAX                ; 00434684 | g_LineClippingDisabled
    RET                                 ; 00434689

