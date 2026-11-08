; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00568cd0(void)
;
;
; Called Functions:
;   FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7df978                       ; 00568cd0
        ;   Label: FUN_00568cd0
    PUSH 0x1                            ; 00568cd5
    PUSH 0x6068b4                       ; 00568cd7
    PUSH 0x568d20                       ; 00568cdc
    PUSH 0x5d5d02                       ; 00568ce1
    PUSH 0x2cf62a4                      ; 00568ce6
    CALL FUN_0040c3a0                   ; 00568ceb
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c3a0()
    ADD ESP,0x18                        ; 00568cf0
    PUSH 0x7df978                       ; 00568cf3
    PUSH 0x1                            ; 00568cf8
    PUSH 0x6068b8                       ; 00568cfa
    PUSH 0x568dd0                       ; 00568cff
    PUSH 0x5d5d10                       ; 00568d04
    PUSH 0x2cf62e0                      ; 00568d09
    CALL FUN_0040c3a0                   ; 00568d0e
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c3a0()
    ADD ESP,0x18                        ; 00568d13
    RET                                 ; 00568d16

