; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_ckptutil_c_setLineClippingDisabled_FUN_00437c30(void)
;
;
; Referenced Globals:
;   undefined4 DAT_007e3e84
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00437c30
        ;   Label: cockpit_ckptutil.c_setLineClippingDisabled_FUN_00437c30
    MOV [0x007e3e84],EAX                ; 00437c34 | DAT_007e3e84
    RET                                 ; 00437c39

