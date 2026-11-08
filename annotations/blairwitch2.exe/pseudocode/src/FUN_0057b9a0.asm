; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057b9a0(void)
;
;
; Called Functions:
;   FUN_0057e1c0
;   FUN_005b8d8c
;
; *****************************************************************************

section .text

    PUSH 0x2653654                      ; 0057b9a0
        ;   Label: FUN_0057b9a0
    CALL FUN_0057e1c0                   ; 0057b9a5
        ;   XREF to: 0057e1c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057e1c0()
    ADD ESP,0x4                         ; 0057b9aa
    PUSH 0x61e46c                       ; 0057b9ad
    CALL FUN_005b8d8c                   ; 0057b9b2
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined FUN_005b8d8c()
    ADD ESP,0x4                         ; 0057b9b7
    RET                                 ; 0057b9ba

