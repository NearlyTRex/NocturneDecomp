; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c780c(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005c769c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 005c780c
        ;   Label: crt_unknown.c_FUN_005c780c
    FSTP extended double ptr [ESP + 0xc] ; 005c780f
    CALL crt_unknown.c_FUN_005c769c     ; 005c7813
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c769c()
    FLD extended double ptr [ESP + 0xc] ; 005c7818
    FXCH                                ; 005c781c
    ADD ESP,0x2c                        ; 005c781e
    RET                                 ; 005c7821

