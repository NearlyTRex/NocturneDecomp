; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d1d00(void)
;
;
; Called Functions:
;   FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7df978                       ; 004d1d00
        ;   Label: FUN_004d1d00
    PUSH 0x4                            ; 004d1d05
    PUSH 0x5fff84                       ; 004d1d07
    PUSH 0x4d1d50                       ; 004d1d0c
    PUSH 0x5c4a5d                       ; 004d1d11
    PUSH 0x1d5b97c                      ; 004d1d16
    CALL FUN_0040c3a0                   ; 004d1d1b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c3a0()
    ADD ESP,0x18                        ; 004d1d20
    PUSH 0x1d5b97c                      ; 004d1d23
    PUSH 0x1                            ; 004d1d28
    PUSH 0x5fff88                       ; 004d1d2a
    PUSH 0x4d2150                       ; 004d1d2f
    PUSH 0x5c4a69                       ; 004d1d34
    PUSH 0x1d5b9b8                      ; 004d1d39
    CALL FUN_0040c3a0                   ; 004d1d3e
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c3a0()
    ADD ESP,0x18                        ; 004d1d43
    RET                                 ; 004d1d46

