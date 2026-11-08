; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a1ae0(void)
;
;
; Called Functions:
;   FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x2668460                      ; 005a1ae0
        ;   Label: FUN_005a1ae0
    PUSH 0x1                            ; 005a1ae5
    PUSH 0x61eaec                       ; 005a1ae7
    PUSH 0x5a1b10                       ; 005a1aec
    PUSH 0x5efd47                       ; 005a1af1
    PUSH 0x26684d8                      ; 005a1af6
    CALL FUN_0040c450                   ; 005a1afb
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x18                        ; 005a1b00
    RET                                 ; 005a1b03

