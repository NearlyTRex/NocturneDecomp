; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ca6b0(void)
;
;
; Called Functions:
;   FUN_004ca940
;   FUN_005b8d8c
;
; *****************************************************************************

section .text

    PUSH 0x100                          ; 004ca6b0
        ;   Label: FUN_004ca6b0
    PUSH 0x100                          ; 004ca6b5
    PUSH 0x1cedd88                      ; 004ca6ba
    CALL FUN_004ca940                   ; 004ca6bf
        ;   XREF to: 004ca940 (UNCONDITIONAL_CALL)  ; undefined FUN_004ca940()
    ADD ESP,0xc                         ; 004ca6c4
    PUSH 0x6179f8                       ; 004ca6c7
    CALL FUN_005b8d8c                   ; 004ca6cc
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined FUN_005b8d8c()
    ADD ESP,0x4                         ; 004ca6d1
    RET                                 ; 004ca6d4

