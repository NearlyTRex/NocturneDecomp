; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005ad524(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005af800
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 005ad524
        ;   Label: crt_unknown.c_FUN_005ad524
    CALL crt_unknown.c_FUN_005af800     ; 005ad526
        ;   XREF to: 005af800 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005af800()
    ADD ESP,0x4                         ; 005ad52b
    RET                                 ; 005ad52e

