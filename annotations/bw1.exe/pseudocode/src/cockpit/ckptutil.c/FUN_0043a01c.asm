; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_ckptutil_c_FUN_0043a01c(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_007c7550
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 0043a01c
        ;   Label: cockpit_ckptutil.c_FUN_0043a01c
    MOV EAX,dword ptr [ESP + 0x4]       ; 0043a020
    MOV [0x007c7550],EAX                ; 0043a024 | DAT_007c7550
    RET                                 ; 0043a029

