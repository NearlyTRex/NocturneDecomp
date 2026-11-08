; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e00a0(void)
;
;
; Called Functions:
;   FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7df978                       ; 004e00a0
        ;   Label: FUN_004e00a0
    PUSH 0x8                            ; 004e00a5
    PUSH 0x6002b0                       ; 004e00a7
    PUSH 0x4e00d0                       ; 004e00ac
    PUSH 0x5c68ca                       ; 004e00b1
    PUSH 0x1d70bfc                      ; 004e00b6
    CALL FUN_0040c3a0                   ; 004e00bb
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c3a0()
    ADD ESP,0x18                        ; 004e00c0
    RET                                 ; 004e00c3

