; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f8ae0(void)
;
;
; Called Functions:
;   FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7e2cb4                       ; 004f8ae0
        ;   Label: FUN_004f8ae0
    PUSH 0x1                            ; 004f8ae5
    PUSH 0x6006a4                       ; 004f8ae7
    PUSH 0x4f8b10                       ; 004f8aec
    PUSH 0x5c9164                       ; 004f8af1
    PUSH 0x1d8836c                      ; 004f8af6
    CALL FUN_0040c3a0                   ; 004f8afb
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c3a0()
    ADD ESP,0x18                        ; 004f8b00
    RET                                 ; 004f8b03

