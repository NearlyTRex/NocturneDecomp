; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e1440(void)
;
;
; Called Functions:
;   FUN_0044dc10
;   FUN_004e1470
;   FUN_005b8d8c
;
; *****************************************************************************

section .text

    PUSH 0x1d03000                      ; 004e1440
        ;   Label: FUN_004e1440
    CALL FUN_004e1470                   ; 004e1445
        ;   XREF to: 004e1470 (UNCONDITIONAL_CALL)  ; undefined FUN_004e1470()
    ADD ESP,0x4                         ; 004e144a
    PUSH 0x1d03130                      ; 004e144d
    CALL FUN_0044dc10                   ; 004e1452
        ;   XREF to: 0044dc10 (UNCONDITIONAL_CALL)  ; undefined FUN_0044dc10()
    ADD ESP,0x4                         ; 004e1457
    PUSH 0x617e00                       ; 004e145a
    CALL FUN_005b8d8c                   ; 004e145f
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined FUN_005b8d8c()
    ADD ESP,0x4                         ; 004e1464
    RET                                 ; 004e1467

