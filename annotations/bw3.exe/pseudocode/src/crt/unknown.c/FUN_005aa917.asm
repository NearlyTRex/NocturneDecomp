; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005aa917(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005aa50c
;
; *****************************************************************************

section .text

    FXCH ST5                            ; 005aa917
        ;   Label: crt_unknown.c_FUN_005aa917
    FSTP extended double ptr [ESP + 0xc] ; 005aa919
    FXCH ST4                            ; 005aa91d
    FLD ST0                             ; 005aa91f
    FSTP extended double ptr [ESP]      ; 005aa921
    FSTP extended double ptr [ESP + 0x20] ; 005aa924
    CALL crt_unknown.c_FUN_005aa50c     ; 005aa928
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aa50c()
    FXCH ST4                            ; 005aa92d
    FLD extended double ptr [ESP + 0x20] ; 005aa92f
    ADD ESP,0x2c                        ; 005aa933
    RET                                 ; 005aa936

