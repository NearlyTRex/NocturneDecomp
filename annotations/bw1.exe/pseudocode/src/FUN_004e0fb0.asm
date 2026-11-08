; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e0fb0(void)
;
;
; Called Functions:
;   FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c2ff8                       ; 004e0fb0
        ;   Label: FUN_004e0fb0
    PUSH 0x6                            ; 004e0fb5
    PUSH 0x61dc44                       ; 004e0fb7
    PUSH 0x4e0fe0                       ; 004e0fbc
    PUSH 0x5e3e2c                       ; 004e0fc1
    PUSH 0x1cd0dc4                      ; 004e0fc6
    CALL FUN_0040c160                   ; 004e0fcb
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c160()
    ADD ESP,0x18                        ; 004e0fd0
    RET                                 ; 004e0fd3

