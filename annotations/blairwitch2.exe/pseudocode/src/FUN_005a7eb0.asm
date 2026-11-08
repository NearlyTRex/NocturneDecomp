; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a7eb0(void)
;
;
; Called Functions:
;   FUN_005a7f50
;   FUN_005b8d8c
;
; *****************************************************************************

section .text

    PUSH 0x2000                         ; 005a7eb0
        ;   Label: FUN_005a7eb0
    PUSH 0x26687b0                      ; 005a7eb5
    CALL FUN_005a7f50                   ; 005a7eba
        ;   XREF to: 005a7f50 (UNCONDITIONAL_CALL)  ; undefined FUN_005a7f50()
    ADD ESP,0x8                         ; 005a7ebf
    PUSH 0x61ebec                       ; 005a7ec2
    CALL FUN_005b8d8c                   ; 005a7ec7
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined FUN_005b8d8c()
    ADD ESP,0x4                         ; 005a7ecc
    RET                                 ; 005a7ecf

