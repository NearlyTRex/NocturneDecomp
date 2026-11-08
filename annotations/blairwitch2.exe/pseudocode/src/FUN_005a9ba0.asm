; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a9ba0(void)
;
;
; Called Functions:
;   FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x2668460                      ; 005a9ba0
        ;   Label: FUN_005a9ba0
    PUSH 0x2                            ; 005a9ba5
    PUSH 0x61eca8                       ; 005a9ba7
    PUSH 0x5a9bd0                       ; 005a9bac
    PUSH 0x5f09e3                       ; 005a9bb1
    PUSH 0x26688a8                      ; 005a9bb6
    CALL FUN_0040c450                   ; 005a9bbb
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x18                        ; 005a9bc0
    RET                                 ; 005a9bc3

