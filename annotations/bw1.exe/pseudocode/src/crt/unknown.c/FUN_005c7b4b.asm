; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c7b4b(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005c769c
;
; *****************************************************************************

section .text

    FXCH ST6                            ; 005c7b4b
        ;   Label: crt_unknown.c_FUN_005c7b4b
    FSTP extended double ptr [ESP + 0xc] ; 005c7b4d
    FXCH ST5                            ; 005c7b51
    FLD ST0                             ; 005c7b53
    FSTP extended double ptr [ESP]      ; 005c7b55
    FSTP extended double ptr [ESP + 0x20] ; 005c7b58
    CALL crt_unknown.c_FUN_005c769c     ; 005c7b5c
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c769c()
    FXCH ST5                            ; 005c7b61
    FLD extended double ptr [ESP + 0x20] ; 005c7b63
    ADD ESP,0x2c                        ; 005c7b67
    RET                                 ; 005c7b6a

