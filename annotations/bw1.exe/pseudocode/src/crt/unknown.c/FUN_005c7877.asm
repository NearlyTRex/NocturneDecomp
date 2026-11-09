; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c7877(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005c769c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005c7877
        ;   Label: crt_unknown.c_FUN_005c7877
    FXCH                                ; 005c787b
    FLD ST0                             ; 005c787d
    FSTP extended double ptr [ESP]      ; 005c787f
    FSTP extended double ptr [ESP + 0x20] ; 005c7882
    CALL crt_unknown.c_FUN_005c769c     ; 005c7886
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c769c()
    FXCH                                ; 005c788b
    FLD extended double ptr [ESP + 0x20] ; 005c788d
    FXCH ST2                            ; 005c7891
    ADD ESP,0x2c                        ; 005c7893
    RET                                 ; 005c7896

