; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005286b0(void)
;
;
; Called Functions:
;   FUN_004831c0
;   FUN_00528ce0
;   FUN_005a3e13
;
; *****************************************************************************

section .text

    PUSH 0x1ed7020                      ; 005286b0
        ;   Label: FUN_005286b0
    CALL FUN_004831c0                   ; 005286b5
        ;   XREF to: 004831c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004831c0()
    ADD ESP,0x4                         ; 005286ba
    PUSH 0x6039c0                       ; 005286bd
    CALL FUN_005a3e13                   ; 005286c2
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3e13()
    ADD ESP,0x4                         ; 005286c7
    PUSH 0x1ed73e0                      ; 005286ca
    CALL FUN_00528ce0                   ; 005286cf
        ;   XREF to: 00528ce0 (UNCONDITIONAL_CALL)  ; undefined FUN_00528ce0()
    ADD ESP,0x4                         ; 005286d4
    PUSH 0x6039d0                       ; 005286d7
    CALL FUN_005a3e13                   ; 005286dc
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3e13()
    ADD ESP,0x4                         ; 005286e1
    RET                                 ; 005286e4

