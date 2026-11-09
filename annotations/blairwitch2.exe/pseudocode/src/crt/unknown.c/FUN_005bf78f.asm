; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bf78f(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005bf3dc
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005bf78f
        ;   Label: crt_unknown.c_FUN_005bf78f
    FXCH ST3                            ; 005bf793
    FSTP extended double ptr [ESP]      ; 005bf795
    CALL crt_unknown.c_FUN_005bf3dc     ; 005bf798
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bf3dc()
    FXCH ST3                            ; 005bf79d
    ADD ESP,0x2c                        ; 005bf79f
    RET                                 ; 005bf7a2

