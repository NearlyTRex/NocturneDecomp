; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0053fdc0(void)
;
;
; Called Functions:
;   FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x2661f00                      ; 0053fdc0
        ;   Label: FUN_0053fdc0
    PUSH 0x1                            ; 0053fdc5
    PUSH 0x61bbac                       ; 0053fdc7
    PUSH 0x53fdf0                       ; 0053fdcc
    PUSH 0x5e6839                       ; 0053fdd1
    PUSH 0x20b19dc                      ; 0053fdd6
    CALL FUN_0040c450                   ; 0053fddb
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x18                        ; 0053fde0
    RET                                 ; 0053fde3

