; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c7827(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005c769c
;
; *****************************************************************************

section .text

    FXCH                                ; 005c7827
        ;   Label: crt_unknown.c_FUN_005c7827
    FSTP extended double ptr [ESP + 0xc] ; 005c7829
    FLD ST0                             ; 005c782d
    FSTP extended double ptr [ESP]      ; 005c782f
    FSTP extended double ptr [ESP + 0x20] ; 005c7832
    CALL crt_unknown.c_FUN_005c769c     ; 005c7836
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c769c()
    FLD extended double ptr [ESP + 0x20] ; 005c783b
    ADD ESP,0x2c                        ; 005c783f
    RET                                 ; 005c7842

