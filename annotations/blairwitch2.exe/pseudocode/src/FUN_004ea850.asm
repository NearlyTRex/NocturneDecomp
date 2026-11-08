; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ea850(void)
;
;
; Called Functions:
;   FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x2661f00                      ; 004ea850
        ;   Label: FUN_004ea850
    PUSH 0x7                            ; 004ea855
    PUSH 0x617f54                       ; 004ea857
    PUSH 0x4ea880                       ; 004ea85c
    PUSH 0x5dc90e                       ; 004ea861
    PUSH 0x1d05544                      ; 004ea866
    CALL FUN_0040c450                   ; 004ea86b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x18                        ; 004ea870
    RET                                 ; 004ea873

