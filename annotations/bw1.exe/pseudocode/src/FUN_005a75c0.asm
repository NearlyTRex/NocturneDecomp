; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a75c0(void)
;
;
; Called Functions:
;   FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c2ff8                       ; 005a75c0
        ;   Label: FUN_005a75c0
    PUSH 0x3                            ; 005a75c5
    PUSH 0x625c44                       ; 005a75c7
    PUSH 0x5a75f0                       ; 005a75cc
    PUSH 0x5f8f7b                       ; 005a75d1
    PUSH 0x2c8af34                      ; 005a75d6
    CALL FUN_0040c160                   ; 005a75db
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c160()
    ADD ESP,0x18                        ; 005a75e0
    RET                                 ; 005a75e3

