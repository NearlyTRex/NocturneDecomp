; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005aa977(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005aa50c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005aa977
        ;   Label: crt_unknown.c_FUN_005aa977
    FXCH ST5                            ; 005aa97b
    FLD ST0                             ; 005aa97d
    FSTP extended double ptr [ESP]      ; 005aa97f
    FSTP extended double ptr [ESP + 0x20] ; 005aa982
    CALL crt_unknown.c_FUN_005aa50c     ; 005aa986
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aa50c()
    FXCH ST5                            ; 005aa98b
    FLD extended double ptr [ESP + 0x20] ; 005aa98d
    FXCH ST6                            ; 005aa991
    ADD ESP,0x2c                        ; 005aa993
    RET                                 ; 005aa996

