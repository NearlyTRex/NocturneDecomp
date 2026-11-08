; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0042ab80(void)
;
;
; Called Functions:
;   FUN_0040c3a0
;   FUN_00462500
;
; *****************************************************************************

section .text

    PUSH 0x7e2b34                       ; 0042ab80
        ;   Label: FUN_0042ab80
    CALL FUN_00462500                   ; 0042ab85
        ;   XREF to: 00462500 (UNCONDITIONAL_CALL)  ; undefined FUN_00462500()
    ADD ESP,0x4                         ; 0042ab8a
    PUSH 0x7df978                       ; 0042ab8d
    PUSH 0xe                            ; 0042ab92
    PUSH 0x5f0f48                       ; 0042ab94
    PUSH 0x0                            ; 0042ab99
    PUSH 0x5b7f9e                       ; 0042ab9b
    PUSH 0x7e2cb4                       ; 0042aba0
    CALL FUN_0040c3a0                   ; 0042aba5
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c3a0()
    ADD ESP,0x18                        ; 0042abaa
    RET                                 ; 0042abad

