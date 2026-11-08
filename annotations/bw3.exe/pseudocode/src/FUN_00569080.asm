; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00569080(void)
;
;
; Called Functions:
;   FUN_005690a0
;   FUN_005a3e13
;
; *****************************************************************************

section .text

    PUSH 0x2cf631c                      ; 00569080
        ;   Label: FUN_00569080
    CALL FUN_005690a0                   ; 00569085
        ;   XREF to: 005690a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005690a0()
    ADD ESP,0x4                         ; 0056908a
    PUSH 0x6068e8                       ; 0056908d
    CALL FUN_005a3e13                   ; 00569092
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3e13()
    ADD ESP,0x4                         ; 00569097
    RET                                 ; 0056909a

