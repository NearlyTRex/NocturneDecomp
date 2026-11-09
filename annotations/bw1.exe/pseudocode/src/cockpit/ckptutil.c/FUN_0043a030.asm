; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_ckptutil_c_FUN_0043a030(undefined4 param_1)
;
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawAntiAliasedLine_FUN_0047f7a0 at 0047f7f3
;
; Referenced Globals:
;   undefined4 DAT_00610d40
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0043a030
        ;   Label: cockpit_ckptutil.c_FUN_0043a030
    MOV [0x00610d40],EAX                ; 0043a034 | DAT_00610d40
    RET                                 ; 0043a039

