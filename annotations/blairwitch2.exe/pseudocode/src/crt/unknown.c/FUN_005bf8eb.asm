; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bf8eb(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005bf3dc
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005bf8eb
        ;   Label: crt_unknown.c_FUN_005bf8eb
    FXCH ST6                            ; 005bf8ef
    FLD ST0                             ; 005bf8f1
    FSTP extended double ptr [ESP]      ; 005bf8f3
    FSTP extended double ptr [ESP + 0x20] ; 005bf8f6
    CALL crt_unknown.c_FUN_005bf3dc     ; 005bf8fa
        ;   XREF to: 005bf3dc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bf3dc()
    FXCH ST6                            ; 005bf8ff
    FLD extended double ptr [ESP + 0x20] ; 005bf901
    FXCH ST7                            ; 005bf905
    ADD ESP,0x2c                        ; 005bf907
    RET                                 ; 005bf90a

