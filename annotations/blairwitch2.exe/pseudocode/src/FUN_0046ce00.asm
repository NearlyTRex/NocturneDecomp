; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046ce00(void)
;
;
; Called Functions:
;   FUN_0040c450
;   FUN_0044fc80
;
; *****************************************************************************

section .text

    PUSH 0x7bbff8                       ; 0046ce00
        ;   Label: FUN_0046ce00
    PUSH 0x6                            ; 0046ce05
    PUSH 0x60d1c8                       ; 0046ce07
    PUSH 0x46ce40                       ; 0046ce0c
    PUSH 0x5d176d                       ; 0046ce11
    PUSH 0x1bd380c                      ; 0046ce16
    CALL FUN_0040c450                   ; 0046ce1b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x18                        ; 0046ce20
    PUSH 0x1bd3848                      ; 0046ce23
    CALL FUN_0044fc80                   ; 0046ce28
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fc80()
    ADD ESP,0x4                         ; 0046ce2d
    RET                                 ; 0046ce30

