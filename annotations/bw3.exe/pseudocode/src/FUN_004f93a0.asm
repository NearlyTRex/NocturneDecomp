; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f93a0(void)
;
;
; Called Functions:
;   FUN_0040d2e0
;   FUN_005a30d7
;   FUN_005a3e13
;
; *****************************************************************************

section .text

    PUSH 0x1d883a8                      ; 004f93a0
        ;   Label: FUN_004f93a0
    CALL FUN_0040d2e0                   ; 004f93a5
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d2e0()
    ADD ESP,0x4                         ; 004f93aa
    PUSH 0x6006b8                       ; 004f93ad
    CALL FUN_005a3e13                   ; 004f93b2
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3e13()
    ADD ESP,0x4                         ; 004f93b7
    PUSH 0x5dbf20                       ; 004f93ba
    PUSH 0x1e                           ; 004f93bf
    PUSH 0x1d883bc                      ; 004f93c1
    CALL FUN_005a30d7                   ; 004f93c6
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30d7()
    ADD ESP,0xc                         ; 004f93cb
    PUSH 0x6006c8                       ; 004f93ce
    CALL FUN_005a3e13                   ; 004f93d3
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3e13()
    ADD ESP,0x4                         ; 004f93d8
    PUSH 0x1d88614                      ; 004f93db
    CALL FUN_0040d2e0                   ; 004f93e0
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d2e0()
    ADD ESP,0x4                         ; 004f93e5
    PUSH 0x6006d8                       ; 004f93e8
    CALL FUN_005a3e13                   ; 004f93ed
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3e13()
    ADD ESP,0x4                         ; 004f93f2
    PUSH 0x1d88628                      ; 004f93f5
    CALL FUN_0040d2e0                   ; 004f93fa
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d2e0()
    ADD ESP,0x4                         ; 004f93ff
    PUSH 0x6006e8                       ; 004f9402
    CALL FUN_005a3e13                   ; 004f9407
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3e13()
    ADD ESP,0x4                         ; 004f940c
    RET                                 ; 004f940f

