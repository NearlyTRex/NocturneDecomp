; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e0f10(void)
;
;
; Called Functions:
;   FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x2d0c118                      ; 004e0f10
        ;   Label: FUN_004e0f10
    PUSH 0x1                            ; 004e0f15
    PUSH 0x6002d4                       ; 004e0f17
    PUSH 0x4e0f40                       ; 004e0f1c
    PUSH 0x5c69ba                       ; 004e0f21
    PUSH 0x1d70c5c                      ; 004e0f26
    CALL FUN_0040c3a0                   ; 004e0f2b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c3a0()
    ADD ESP,0x18                        ; 004e0f30
    RET                                 ; 004e0f33

