; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005aa912(void)
;
;
; Called Functions:
;   FUN_005aa50c
;
; *****************************************************************************

section .text

    ADD ESP,0x2c                        ; 005aa912
        ;   Label: FUN_005aa912
    INT 0x6                             ; 005aa915
    FXCH ST5                            ; 005aa917
        ;   Label: LAB_005aa917
    FSTP extended double ptr [ESP + 0xc] ; 005aa919
    FXCH ST4                            ; 005aa91d
    FLD ST0                             ; 005aa91f
    FSTP extended double ptr [ESP]      ; 005aa921
    FSTP extended double ptr [ESP + 0x20] ; 005aa924
    CALL FUN_005aa50c                   ; 005aa928
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined FUN_005aa50c()
    FXCH ST4                            ; 005aa92d
    FLD extended double ptr [ESP + 0x20] ; 005aa92f
    ADD ESP,0x2c                        ; 005aa933
    RET                                 ; 005aa936

