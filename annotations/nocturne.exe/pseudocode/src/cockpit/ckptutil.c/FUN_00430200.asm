; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_ckptutil_c_FUN_00430200(void)
;
;
; XREF[1]:
;   cockpit_drawsurf.cpp_FUN_0045ca50 at 0045caa3
;
; Referenced Globals:
;   undefined4 DAT_005ad280
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00430200
        ;   Label: cockpit_ckptutil.c_FUN_00430200
    MOV [0x005ad280],EAX                ; 00430204 | DAT_005ad280
    RET                                 ; 00430209

