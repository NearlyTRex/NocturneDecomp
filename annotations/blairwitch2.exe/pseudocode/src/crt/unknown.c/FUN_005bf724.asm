; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bf724(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005bf3dc
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 005bf724
        ;   Label: crt_unknown.c_FUN_005bf724
    FXCH ST3                            ; 005bf727
    FSTP extended double ptr [ESP + 0xc] ; 005bf729
    CALL crt_unknown.c_FUN_005bf3dc     ; 005bf72d
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bf3dc()
    FXCH ST3                            ; 005bf732
    FLD extended double ptr [ESP + 0xc] ; 005bf734
    FXCH ST4                            ; 005bf738
    ADD ESP,0x2c                        ; 005bf73a
    RET                                 ; 005bf73d

