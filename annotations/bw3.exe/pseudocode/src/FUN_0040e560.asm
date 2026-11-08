; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040e560(void)
;
;
; Called Functions:
;   FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7df978                       ; 0040e560
        ;   Label: FUN_0040e560
    PUSH 0x4                            ; 0040e565
    PUSH 0x5f0bb4                       ; 0040e567
    PUSH 0x40e590                       ; 0040e56c
    PUSH 0x5b6133                       ; 0040e571
    PUSH 0x7dfddc                       ; 0040e576
    CALL FUN_0040c3a0                   ; 0040e57b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c3a0()
    ADD ESP,0x18                        ; 0040e580
    RET                                 ; 0040e583

