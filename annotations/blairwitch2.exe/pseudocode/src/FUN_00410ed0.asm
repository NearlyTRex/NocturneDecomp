; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00410ed0(void)
;
;
; Called Functions:
;   FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x7bbff8                       ; 00410ed0
        ;   Label: FUN_00410ed0
    PUSH 0x4                            ; 00410ed5
    PUSH 0x609864                       ; 00410ed7
    PUSH 0x410fa0                       ; 00410edc
    PUSH 0x5cb656                       ; 00410ee1
    PUSH 0x7bc710                       ; 00410ee6
    CALL FUN_0040c450                   ; 00410eeb
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x18                        ; 00410ef0
    RET                                 ; 00410ef3

