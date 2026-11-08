; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040e4b0(void)
;
;
; Called Functions:
;   FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x7bbff8                       ; 0040e4b0
        ;   Label: FUN_0040e4b0
    PUSH 0x4                            ; 0040e4b5
    PUSH 0x609794                       ; 0040e4b7
    PUSH 0x40e4e0                       ; 0040e4bc
    PUSH 0x5cb248                       ; 0040e4c1
    PUSH 0x7bc3a8                       ; 0040e4c6
    CALL FUN_0040c450                   ; 0040e4cb
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x18                        ; 0040e4d0
    RET                                 ; 0040e4d3

