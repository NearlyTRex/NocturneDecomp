; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005aa67c(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005aa50c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 005aa67c
        ;   Label: crt_unknown.c_FUN_005aa67c
    FSTP extended double ptr [ESP + 0xc] ; 005aa67f
    CALL crt_unknown.c_FUN_005aa50c     ; 005aa683
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aa50c()
    FLD extended double ptr [ESP + 0xc] ; 005aa688
    FXCH                                ; 005aa68c
    ADD ESP,0x2c                        ; 005aa68e
    RET                                 ; 005aa691

