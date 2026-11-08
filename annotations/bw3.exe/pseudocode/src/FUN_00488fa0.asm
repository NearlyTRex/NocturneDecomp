; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00488fa0(void)
;
;
; Called Functions:
;   FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7e2cb4                       ; 00488fa0
        ;   Label: FUN_00488fa0
    PUSH 0xe                            ; 00488fa5
    PUSH 0x5fba00                       ; 00488fa7
    PUSH 0x0                            ; 00488fac
    PUSH 0x5bdb77                       ; 00488fae
    PUSH 0x1c5bc10                      ; 00488fb3
    CALL FUN_0040c3a0                   ; 00488fb8
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c3a0()
    ADD ESP,0x18                        ; 00488fbd
    RET                                 ; 00488fc0

