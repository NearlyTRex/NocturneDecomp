; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041bc90(void)
;
;
; Called Functions:
;   FUN_0040c450
;   FUN_005b7f5f
;   FUN_005b8d8c
;
; *****************************************************************************

section .text

    PUSH 0x7bbff8                       ; 0041bc90
        ;   Label: FUN_0041bc90
    PUSH 0x10                           ; 0041bc95
    PUSH 0x60995c                       ; 0041bc97
    PUSH 0x41bd00                       ; 0041bc9c
    PUSH 0x5cc4e9                       ; 0041bca1
    PUSH 0x7bc9b0                       ; 0041bca6
    CALL FUN_0040c450                   ; 0041bcab
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x18                        ; 0041bcb0
    PUSH 0x5f3c00                       ; 0041bcb3
    PUSH 0x8                            ; 0041bcb8
    PUSH 0x7bc9ec                       ; 0041bcba
    CALL FUN_005b7f5f                   ; 0041bcbf
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined FUN_005b7f5f()
    ADD ESP,0xc                         ; 0041bcc4
    PUSH 0x60994c                       ; 0041bcc7
    CALL FUN_005b8d8c                   ; 0041bccc
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined FUN_005b8d8c()
    ADD ESP,0x4                         ; 0041bcd1
    PUSH 0x7bc9b0                       ; 0041bcd4
    PUSH 0x2                            ; 0041bcd9
    PUSH 0x609960                       ; 0041bcdb
    PUSH 0x41cf30                       ; 0041bce0
    PUSH 0x5cc4f3                       ; 0041bce5
    PUSH 0x7bcc4c                       ; 0041bcea
    CALL FUN_0040c450                   ; 0041bcef
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x18                        ; 0041bcf4
    RET                                 ; 0041bcf7

