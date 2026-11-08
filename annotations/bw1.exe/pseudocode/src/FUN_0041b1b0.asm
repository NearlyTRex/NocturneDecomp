; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041b1b0(void)
;
;
; Called Functions:
;   FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x1c3f668                      ; 0041b1b0
        ;   Label: FUN_0041b1b0
    PUSH 0x5                            ; 0041b1b5
    PUSH 0x610b14                       ; 0041b1b7
    PUSH 0x41b3a0                       ; 0041b1bc
    PUSH 0x5d4531                       ; 0041b1c1
    PUSH 0x7c501c                       ; 0041b1c6
    CALL FUN_0040c160                   ; 0041b1cb
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c160()
    ADD ESP,0x18                        ; 0041b1d0
    RET                                 ; 0041b1d3

