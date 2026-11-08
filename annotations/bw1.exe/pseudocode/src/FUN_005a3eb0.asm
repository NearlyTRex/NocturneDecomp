; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a3eb0(void)
;
;
; Called Functions:
;   FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x1c3f668                      ; 005a3eb0
        ;   Label: FUN_005a3eb0
    PUSH 0x5                            ; 005a3eb5
    PUSH 0x625c18                       ; 005a3eb7
    PUSH 0x5a3ee0                       ; 005a3ebc
    PUSH 0x5f8b90                       ; 005a3ec1
    PUSH 0x2c8aeb0                      ; 005a3ec6
    CALL FUN_0040c160                   ; 005a3ecb
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c160()
    ADD ESP,0x18                        ; 005a3ed0
    RET                                 ; 005a3ed3

