; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a4a70(void)
;
;
; Called Functions:
;   FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x2d0c118                      ; 004a4a70
        ;   Label: FUN_004a4a70
    PUSH 0x1                            ; 004a4a75
    PUSH 0x5fde58                       ; 004a4a77
    PUSH 0x4a4aa0                       ; 004a4a7c
    PUSH 0x5c0aed                       ; 004a4a81
    PUSH 0x1d0ceb0                      ; 004a4a86
    CALL FUN_0040c3a0                   ; 004a4a8b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c3a0()
    ADD ESP,0x18                        ; 004a4a90
    RET                                 ; 004a4a93

