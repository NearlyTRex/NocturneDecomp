; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e3ad0(void)
;
;
; Called Functions:
;   FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c2ff8                       ; 004e3ad0
        ;   Label: FUN_004e3ad0
    PUSH 0x1                            ; 004e3ad5
    PUSH 0x61dc70                       ; 004e3ad7
    PUSH 0x4e3b00                       ; 004e3adc
    PUSH 0x5e3fec                       ; 004e3ae1
    PUSH 0x1cd0e00                      ; 004e3ae6
    CALL FUN_0040c160                   ; 004e3aeb
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c160()
    ADD ESP,0x18                        ; 004e3af0
    RET                                 ; 004e3af3

