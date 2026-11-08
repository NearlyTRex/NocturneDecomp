; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e8fc0(void)
;
;
; Called Functions:
;   FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x1d06ad8                      ; 004e8fc0
        ;   Label: FUN_004e8fc0
    PUSH 0x1                            ; 004e8fc5
    PUSH 0x61eef0                       ; 004e8fc7
    PUSH 0x4e8ff0                       ; 004e8fcc
    PUSH 0x5e43ff                       ; 004e8fd1
    PUSH 0x1d06a1c                      ; 004e8fd6
    CALL FUN_0040c160                   ; 004e8fdb
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c160()
    ADD ESP,0x18                        ; 004e8fe0
    RET                                 ; 004e8fe3

