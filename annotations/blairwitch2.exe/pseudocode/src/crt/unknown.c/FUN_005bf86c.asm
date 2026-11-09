; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bf86c(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005bf3dc
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 005bf86c
        ;   Label: crt_unknown.c_FUN_005bf86c
    FXCH ST5                            ; 005bf86f
    FSTP extended double ptr [ESP + 0xc] ; 005bf871
    CALL crt_unknown.c_FUN_005bf3dc     ; 005bf875
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bf3dc()
    FXCH ST5                            ; 005bf87a
    FLD extended double ptr [ESP + 0xc] ; 005bf87c
    FXCH ST6                            ; 005bf880
    ADD ESP,0x2c                        ; 005bf882
    RET                                 ; 005bf885

