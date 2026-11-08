; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00460430(void)
;
;
; Called Functions:
;   FUN_005a30d7
;   FUN_005a3e13
;
; *****************************************************************************

section .text

    PUSH 0x5de580                       ; 00460430
        ;   Label: FUN_00460430
    PUSH 0x100                          ; 00460435
    PUSH 0x1b4b84c                      ; 0046043a
    CALL FUN_005a30d7                   ; 0046043f
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30d7()
    ADD ESP,0xc                         ; 00460444
    PUSH 0x5f2a33                       ; 00460447
    CALL FUN_005a3e13                   ; 0046044c
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3e13()
    ADD ESP,0x4                         ; 00460451
    RET                                 ; 00460454

