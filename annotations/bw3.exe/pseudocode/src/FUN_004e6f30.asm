; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e6f30(void)
;
;
; Called Functions:
;   FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x2d0c118                      ; 004e6f30
        ;   Label: FUN_004e6f30
    PUSH 0x7                            ; 004e6f35
    PUSH 0x600344                       ; 004e6f37
    PUSH 0x4e6f60                       ; 004e6f3c
    PUSH 0x5c704a                       ; 004e6f41
    PUSH 0x1d72bd0                      ; 004e6f46
    CALL FUN_0040c3a0                   ; 004e6f4b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c3a0()
    ADD ESP,0x18                        ; 004e6f50
    RET                                 ; 004e6f53

