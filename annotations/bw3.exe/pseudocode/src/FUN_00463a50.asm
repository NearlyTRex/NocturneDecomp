; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00463a50(void)
;
;
; Called Functions:
;   FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7df978                       ; 00463a50
        ;   Label: FUN_00463a50
    PUSH 0xd                            ; 00463a55
    PUSH 0x5f2abc                       ; 00463a57
    PUSH 0x463a80                       ; 00463a5c
    PUSH 0x5bbcc3                       ; 00463a61
    PUSH 0x1b85140                      ; 00463a66
    CALL FUN_0040c3a0                   ; 00463a6b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c3a0()
    ADD ESP,0x18                        ; 00463a70
    RET                                 ; 00463a73

