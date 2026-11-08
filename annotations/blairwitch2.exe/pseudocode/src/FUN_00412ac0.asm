; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00412ac0(void)
;
;
; Called Functions:
;   FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x1c264a8                      ; 00412ac0
        ;   Label: FUN_00412ac0
    PUSH 0x3                            ; 00412ac5
    PUSH 0x60988c                       ; 00412ac7
    PUSH 0x412af0                       ; 00412acc
    PUSH 0x5cb95e                       ; 00412ad1
    PUSH 0x7bc7e8                       ; 00412ad6
    CALL FUN_0040c450                   ; 00412adb
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x18                        ; 00412ae0
    RET                                 ; 00412ae3

