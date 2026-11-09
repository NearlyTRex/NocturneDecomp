; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_ckptutil_c_FUN_00437c40(undefined4 param_1)
;
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawAntiAliasedLine_FUN_00468e60 at 00468eb3
;
; Referenced Globals:
;   undefined4 DAT_005f12f0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00437c40
        ;   Label: cockpit_ckptutil.c_FUN_00437c40
    MOV [0x005f12f0],EAX                ; 00437c44 | DAT_005f12f0
    RET                                 ; 00437c49

