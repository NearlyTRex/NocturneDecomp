; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005430c0(void)
;
;
; Called Functions:
;   FUN_0049a620
;   FUN_005436d0
;   FUN_005c1093
;
; *****************************************************************************

section .text

    PUSH 0x1e818c0                      ; 005430c0
        ;   Label: FUN_005430c0
    CALL FUN_0049a620                   ; 005430c5
        ;   XREF to: 0049a620 (UNCONDITIONAL_CALL)  ; undefined FUN_0049a620()
    ADD ESP,0x4                         ; 005430ca
    PUSH 0x622ab0                       ; 005430cd
    CALL FUN_005c1093                   ; 005430d2
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1093()
    ADD ESP,0x4                         ; 005430d7
    PUSH 0x1e81c80                      ; 005430da
    CALL FUN_005436d0                   ; 005430df
        ;   XREF to: 005436d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005436d0()
    ADD ESP,0x4                         ; 005430e4
    PUSH 0x622ac0                       ; 005430e7
    CALL FUN_005c1093                   ; 005430ec
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1093()
    ADD ESP,0x4                         ; 005430f1
    RET                                 ; 005430f4

