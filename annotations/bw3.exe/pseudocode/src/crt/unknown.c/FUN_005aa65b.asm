; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005aa65b(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005aa50c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005aa65b
        ;   Label: crt_unknown.c_FUN_005aa65b
    FLD ST0                             ; 005aa65f
    FSTP extended double ptr [ESP]      ; 005aa661
    FSTP extended double ptr [ESP + 0x20] ; 005aa664
    CALL crt_unknown.c_FUN_005aa50c     ; 005aa668
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aa50c()
    FLD extended double ptr [ESP + 0x20] ; 005aa66d
    FXCH                                ; 005aa671
    ADD ESP,0x2c                        ; 005aa673
    RET                                 ; 005aa676

