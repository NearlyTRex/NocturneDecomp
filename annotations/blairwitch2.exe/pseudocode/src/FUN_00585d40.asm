; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00585d40(void)
;
;
; Called Functions:
;   FUN_00585db0
;   FUN_005b8d8c
;
; *****************************************************************************

section .text

    PUSH 0x2653790                      ; 00585d40
        ;   Label: FUN_00585d40
    CALL FUN_00585db0                   ; 00585d45
        ;   XREF to: 00585db0 (UNCONDITIONAL_CALL)  ; undefined FUN_00585db0()
    ADD ESP,0x4                         ; 00585d4a
    PUSH 0x61e510                       ; 00585d4d
    CALL FUN_005b8d8c                   ; 00585d52
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined FUN_005b8d8c()
    ADD ESP,0x4                         ; 00585d57
    RET                                 ; 00585d5a

