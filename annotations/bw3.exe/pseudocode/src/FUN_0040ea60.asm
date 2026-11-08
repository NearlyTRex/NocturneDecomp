; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040ea60(void)
;
;
; Called Functions:
;   FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7df978                       ; 0040ea60
        ;   Label: FUN_0040ea60
    PUSH 0x2                            ; 0040ea65
    PUSH 0x5f0bc8                       ; 0040ea67
    PUSH 0x40ea90                       ; 0040ea6c
    PUSH 0x5b61d7                       ; 0040ea71
    PUSH 0x7dfe18                       ; 0040ea76
    CALL FUN_0040c3a0                   ; 0040ea7b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c3a0()
    ADD ESP,0x18                        ; 0040ea80
    RET                                 ; 0040ea83

