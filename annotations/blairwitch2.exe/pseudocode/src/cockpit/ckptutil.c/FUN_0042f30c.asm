; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_ckptutil_c_FUN_0042f30c(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_007bee2c
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 0042f30c
        ;   Label: cockpit_ckptutil.c_FUN_0042f30c
    MOV EAX,dword ptr [ESP + 0x4]       ; 0042f310
    MOV [0x007bee2c],EAX                ; 0042f314 | DAT_007bee2c
    RET                                 ; 0042f319

