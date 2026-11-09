; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_ckptutil_c_FUN_0042f320(undefined4 param_1)
;
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawAntiAliasedLine_FUN_00467290 at 004672e3
;
; Referenced Globals:
;   undefined4 DAT_00609b30
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0042f320
        ;   Label: cockpit_ckptutil.c_FUN_0042f320
    MOV [0x00609b30],EAX                ; 0042f324 | DAT_00609b30
    RET                                 ; 0042f329

