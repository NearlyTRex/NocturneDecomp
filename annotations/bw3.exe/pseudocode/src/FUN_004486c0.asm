; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004486c0(void)
;
;
; Called Functions:
;   FUN_00441310
;   FUN_005a30d7
;   FUN_005a3e13
;
; *****************************************************************************

section .text

    PUSH 0x5db0f0                       ; 004486c0
        ;   Label: FUN_004486c0
    PUSH 0x12d40                        ; 004486c5
    PUSH 0xa38388                       ; 004486ca
    CALL FUN_005a30d7                   ; 004486cf
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30d7()
    ADD ESP,0xc                         ; 004486d4
    PUSH 0x6                            ; 004486d7
    PUSH 0x10000                        ; 004486d9
    PUSH 0x135da78                      ; 004486de
    CALL FUN_00441310                   ; 004486e3
        ;   XREF to: 00441310 (UNCONDITIONAL_CALL)  ; undefined FUN_00441310()
    ADD ESP,0xc                         ; 004486e8
    PUSH 0x5f17c8                       ; 004486eb
    CALL FUN_005a3e13                   ; 004486f0
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3e13()
    ADD ESP,0x4                         ; 004486f5
    RET                                 ; 004486f8

