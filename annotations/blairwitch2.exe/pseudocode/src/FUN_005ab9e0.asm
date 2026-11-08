; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ab9e0(void)
;
;
; Called Functions:
;   FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x2668460                      ; 005ab9e0
        ;   Label: FUN_005ab9e0
    PUSH 0x2                            ; 005ab9e5
    PUSH 0x61eccc                       ; 005ab9e7
    PUSH 0x5aba10                       ; 005ab9ec
    PUSH 0x5f0cbe                       ; 005ab9f1
    PUSH 0x2668920                      ; 005ab9f6
    CALL FUN_0040c450                   ; 005ab9fb
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x18                        ; 005aba00
    RET                                 ; 005aba03

