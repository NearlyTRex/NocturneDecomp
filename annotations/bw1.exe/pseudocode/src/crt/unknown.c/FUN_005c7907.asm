; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c7907(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005c769c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005c7907
        ;   Label: crt_unknown.c_FUN_005c7907
    FXCH                                ; 005c790b
    FSTP extended double ptr [ESP]      ; 005c790d
    CALL crt_unknown.c_FUN_005c769c     ; 005c7910
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c769c()
    FXCH                                ; 005c7915
    ADD ESP,0x2c                        ; 005c7917
    RET                                 ; 005c791a

