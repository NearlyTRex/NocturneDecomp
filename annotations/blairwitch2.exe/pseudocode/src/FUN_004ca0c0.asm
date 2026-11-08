; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ca0c0(void)
;
;
; Called Functions:
;   FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x7bbff8                       ; 004ca0c0
        ;   Label: FUN_004ca0c0
    PUSH 0x4                            ; 004ca0c5
    PUSH 0x6179e4                       ; 004ca0c7
    PUSH 0x4ca0f0                       ; 004ca0cc
    PUSH 0x5d95a8                       ; 004ca0d1
    PUSH 0x1cedd4c                      ; 004ca0d6
    CALL FUN_0040c450                   ; 004ca0db
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x18                        ; 004ca0e0
    RET                                 ; 004ca0e3

