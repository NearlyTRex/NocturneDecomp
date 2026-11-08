; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c7807(void)
;
;
; Called Functions:
;   FUN_005c769c
;
; *****************************************************************************

section .text

    ADD ESP,0x2c                        ; 005c7807
        ;   Label: FUN_005c7807
    INT 0x6                             ; 005c780a
    FSTP extended double ptr [ESP]      ; 005c780c
        ;   Label: LAB_005c780c
    FSTP extended double ptr [ESP + 0xc] ; 005c780f
    CALL FUN_005c769c                   ; 005c7813
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined FUN_005c769c()
    FLD extended double ptr [ESP + 0xc] ; 005c7818
    FXCH                                ; 005c781c
    ADD ESP,0x2c                        ; 005c781e
    RET                                 ; 005c7821

