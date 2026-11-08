; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00527bb0(void)
;
;
; Called Functions:
;   FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x2d0c118                      ; 00527bb0
        ;   Label: FUN_00527bb0
    PUSH 0x1                            ; 00527bb5
    PUSH 0x6039a4                       ; 00527bb7
    PUSH 0x527be0                       ; 00527bbc
    PUSH 0x5cdae1                       ; 00527bc1
    PUSH 0x1ed37c4                      ; 00527bc6
    CALL FUN_0040c3a0                   ; 00527bcb
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c3a0()
    ADD ESP,0x18                        ; 00527bd0
    RET                                 ; 00527bd3

