; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_ckptutil_c_setLineClippingDisabled_FUN_0043a020(void)
;
;
; Referenced Globals:
;   undefined4 DAT_007c7550
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0043a020
        ;   Label: cockpit_ckptutil.c_setLineClippingDisabled_FUN_0043a020
    MOV [0x007c7550],EAX                ; 0043a024 | DAT_007c7550
    RET                                 ; 0043a029

