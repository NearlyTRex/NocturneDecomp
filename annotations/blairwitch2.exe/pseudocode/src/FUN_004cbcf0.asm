; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cbcf0(void)
;
;
; Called Functions:
;   FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x2661f00                      ; 004cbcf0
        ;   Label: FUN_004cbcf0
    PUSH 0x1                            ; 004cbcf5
    PUSH 0x617a1c                       ; 004cbcf7
    PUSH 0x4cbd20                       ; 004cbcfc
    PUSH 0x5d97ae                       ; 004cbd01
    PUSH 0x1cedde4                      ; 004cbd06
    CALL FUN_0040c450                   ; 004cbd0b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x18                        ; 004cbd10
    RET                                 ; 004cbd13

