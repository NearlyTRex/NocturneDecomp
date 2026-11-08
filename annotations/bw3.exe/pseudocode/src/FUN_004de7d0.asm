; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004de7d0(void)
;
;
; Called Functions:
;   FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7df978                       ; 004de7d0
        ;   Label: FUN_004de7d0
    PUSH 0x3                            ; 004de7d5
    PUSH 0x60026c                       ; 004de7d7
    PUSH 0x4de800                       ; 004de7dc
    PUSH 0x5c6695                       ; 004de7e1
    PUSH 0x1d70a3c                      ; 004de7e6
    CALL FUN_0040c3a0                   ; 004de7eb
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c3a0()
    ADD ESP,0x18                        ; 004de7f0
    RET                                 ; 004de7f3

