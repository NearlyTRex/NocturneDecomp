; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00558c40(void)
;
;
; Called Functions:
;   FUN_00480d20
;   FUN_0055a0e0
;   FUN_005b7f5f
;   FUN_005b8d8c
;
; *****************************************************************************

section .text

    PUSH 0x264b290                      ; 00558c40
        ;   Label: FUN_00558c40
    CALL FUN_0055a0e0                   ; 00558c45
        ;   XREF to: 0055a0e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055a0e0()
    ADD ESP,0x4                         ; 00558c4a
    PUSH 0x264b450                      ; 00558c4d
    CALL FUN_00480d20                   ; 00558c52
        ;   XREF to: 00480d20 (UNCONDITIONAL_CALL)  ; undefined FUN_00480d20()
    ADD ESP,0x4                         ; 00558c57
    PUSH 0x61c050                       ; 00558c5a
    CALL FUN_005b8d8c                   ; 00558c5f
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined FUN_005b8d8c()
    ADD ESP,0x4                         ; 00558c64
    PUSH 0x5fbdc0                       ; 00558c67
    PUSH 0xa                            ; 00558c6c
    PUSH 0x264bae4                      ; 00558c6e
    CALL FUN_005b7f5f                   ; 00558c73
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined FUN_005b7f5f()
    ADD ESP,0xc                         ; 00558c78
    RET                                 ; 00558c7b

