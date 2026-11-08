; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040ece0(void)
;
;
; Called Functions:
;   FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7df978                       ; 0040ece0
        ;   Label: FUN_0040ece0
    PUSH 0x4                            ; 0040ece5
    PUSH 0x5f0bdc                       ; 0040ece7
    PUSH 0x40edb0                       ; 0040ecec
    PUSH 0x5b621e                       ; 0040ecf1
    PUSH 0x7dfe54                       ; 0040ecf6
    CALL FUN_0040c3a0                   ; 0040ecfb
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c3a0()
    ADD ESP,0x18                        ; 0040ed00
    RET                                 ; 0040ed03

