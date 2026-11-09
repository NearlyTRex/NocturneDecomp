; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bf5a7(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005bf3dc
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005bf5a7
        ;   Label: crt_unknown.c_FUN_005bf5a7
    FSTP extended double ptr [ESP]      ; 005bf5ab
    CALL crt_unknown.c_FUN_005bf3dc     ; 005bf5ae
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bf3dc()
    ADD ESP,0x2c                        ; 005bf5b3
    RET                                 ; 005bf5b6

