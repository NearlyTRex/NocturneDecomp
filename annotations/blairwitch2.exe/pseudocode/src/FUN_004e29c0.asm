; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e29c0(void)
;
;
; Called Functions:
;   FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x2661f00                      ; 004e29c0
        ;   Label: FUN_004e29c0
    PUSH 0x1                            ; 004e29c5
    PUSH 0x617e50                       ; 004e29c7
    PUSH 0x4e29f0                       ; 004e29cc
    PUSH 0x5dbff2                       ; 004e29d1
    PUSH 0x1d03528                      ; 004e29d6
    CALL FUN_0040c450                   ; 004e29db
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x18                        ; 004e29e0
    RET                                 ; 004e29e3

