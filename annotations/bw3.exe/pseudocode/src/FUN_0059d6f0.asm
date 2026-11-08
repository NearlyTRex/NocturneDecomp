; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0059d6f0(void)
;
;
; Called Functions:
;   FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x1c5bc10                      ; 0059d6f0
        ;   Label: FUN_0059d6f0
    PUSH 0x2                            ; 0059d6f5
    PUSH 0x607478                       ; 0059d6f7
    PUSH 0x59d720                       ; 0059d6fc
    PUSH 0x5d9e99                       ; 0059d701
    PUSH 0x2d24cb8                      ; 0059d706
    CALL FUN_0040c3a0                   ; 0059d70b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c3a0()
    ADD ESP,0x18                        ; 0059d710
    RET                                 ; 0059d713

