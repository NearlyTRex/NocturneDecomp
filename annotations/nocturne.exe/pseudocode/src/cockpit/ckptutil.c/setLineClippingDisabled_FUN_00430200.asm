; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_setLineClippingDisabled_FUN_00430200(int disabled)
;
; Parameters:
; int              Stack[0x4]:4   disabled
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawAntiAliasedLine_FUN_0045ca50 at 0045caa3
;
; Referenced Globals:
;   undefined4 DAT_005ad280
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00430200
        ;   Label: cockpit_ckptutil.c_setLineClippingDisabled_FUN_00430200
    MOV [0x005ad280],EAX                ; 00430204 | DAT_005ad280
    RET                                 ; 00430209

