; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00599cb0(void)
;
;
; Called Functions:
;   FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c2ff8                       ; 00599cb0
        ;   Label: FUN_00599cb0
    PUSH 0x1                            ; 00599cb5
    PUSH 0x625a5c                       ; 00599cb7
    PUSH 0x599ce0                       ; 00599cbc
    PUSH 0x5f7ff2                       ; 00599cc1
    PUSH 0x2c8ad94                      ; 00599cc6
    CALL FUN_0040c160                   ; 00599ccb
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c160()
    ADD ESP,0x18                        ; 00599cd0
    RET                                 ; 00599cd3

