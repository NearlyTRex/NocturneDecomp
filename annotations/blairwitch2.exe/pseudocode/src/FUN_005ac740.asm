; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ac740(void)
;
;
; Called Functions:
;   FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x7bc9b0                       ; 005ac740
        ;   Label: FUN_005ac740
    PUSH 0x1                            ; 005ac745
    PUSH 0x61ecdc                       ; 005ac747
    PUSH 0x5ac770                       ; 005ac74c
    PUSH 0x5f0e8b                       ; 005ac751
    PUSH 0x266895c                      ; 005ac756
    CALL FUN_0040c450                   ; 005ac75b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x18                        ; 005ac760
    RET                                 ; 005ac763

