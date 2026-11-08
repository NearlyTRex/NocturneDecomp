; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005aa5a0(void)
;
;
; Called Functions:
;   FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x2668460                      ; 005aa5a0
        ;   Label: FUN_005aa5a0
    PUSH 0x1                            ; 005aa5a5
    PUSH 0x61ecbc                       ; 005aa5a7
    PUSH 0x5aa5d0                       ; 005aa5ac
    PUSH 0x5f0aee                       ; 005aa5b1
    PUSH 0x26688e4                      ; 005aa5b6
    CALL FUN_0040c450                   ; 005aa5bb
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x18                        ; 005aa5c0
    RET                                 ; 005aa5c3

