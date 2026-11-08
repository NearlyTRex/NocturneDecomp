; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040f600(void)
;
;
; Called Functions:
;   FUN_0040c450
;   FUN_0044fc80
;
; *****************************************************************************

section .text

    PUSH 0x1cedf18                      ; 0040f600
        ;   Label: FUN_0040f600
    PUSH 0x2                            ; 0040f605
    PUSH 0x60980c                       ; 0040f607
    PUSH 0x40f660                       ; 0040f60c
    PUSH 0x5cb3ff                       ; 0040f611
    PUSH 0x7bc4e0                       ; 0040f616
    CALL FUN_0040c450                   ; 0040f61b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x18                        ; 0040f620
    PUSH 0x7bc51c                       ; 0040f623
    CALL FUN_0044fc80                   ; 0040f628
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fc80()
    ADD ESP,0x4                         ; 0040f62d
    PUSH 0x2661f00                      ; 0040f630
    PUSH 0x1                            ; 0040f635
    PUSH 0x609828                       ; 0040f637
    PUSH 0x4108b0                       ; 0040f63c
    PUSH 0x5cb406                       ; 0040f641
    PUSH 0x7bc698                       ; 0040f646
    CALL FUN_0040c450                   ; 0040f64b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x18                        ; 0040f650
    RET                                 ; 0040f653

