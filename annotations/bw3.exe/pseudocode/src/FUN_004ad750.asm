; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ad750(void)
;
;
; Called Functions:
;   FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7df978                       ; 004ad750
        ;   Label: FUN_004ad750
    PUSH 0x3                            ; 004ad755
    PUSH 0x5fe8c4                       ; 004ad757
    PUSH 0x4ad780                       ; 004ad75c
    PUSH 0x5c1c09                       ; 004ad761
    PUSH 0x1d1a0e0                      ; 004ad766
    CALL FUN_0040c3a0                   ; 004ad76b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c3a0()
    ADD ESP,0x18                        ; 004ad770
    RET                                 ; 004ad773

