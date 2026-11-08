; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004960f0(void)
;
;
; Called Functions:
;   FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7df978                       ; 004960f0
        ;   Label: FUN_004960f0
    PUSH 0x2                            ; 004960f5
    PUSH 0x5fc4b8                       ; 004960f7
    PUSH 0x496140                       ; 004960fc
    PUSH 0x5c03c3                       ; 00496101
    PUSH 0x1c735dc                      ; 00496106
    CALL FUN_0040c3a0                   ; 0049610b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c3a0()
    ADD ESP,0x18                        ; 00496110
    PUSH 0x1548bc4                      ; 00496113
    PUSH 0x2                            ; 00496118
    PUSH 0x5fc4bc                       ; 0049611a
    PUSH 0x496430                       ; 0049611f
    PUSH 0x5c03cd                       ; 00496124
    PUSH 0x1c73618                      ; 00496129
    CALL FUN_0040c3a0                   ; 0049612e
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c3a0()
    ADD ESP,0x18                        ; 00496133
    RET                                 ; 00496136

