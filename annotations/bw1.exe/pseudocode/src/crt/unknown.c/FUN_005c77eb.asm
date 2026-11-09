; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c77eb(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005c769c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005c77eb
        ;   Label: crt_unknown.c_FUN_005c77eb
    FLD ST0                             ; 005c77ef
    FSTP extended double ptr [ESP]      ; 005c77f1
    FSTP extended double ptr [ESP + 0x20] ; 005c77f4
    CALL crt_unknown.c_FUN_005c769c     ; 005c77f8
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c769c()
    FLD extended double ptr [ESP + 0x20] ; 005c77fd
    FXCH                                ; 005c7801
    ADD ESP,0x2c                        ; 005c7803
    RET                                 ; 005c7806

