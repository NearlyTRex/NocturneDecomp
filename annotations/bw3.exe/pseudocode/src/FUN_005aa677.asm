; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005aa677(void)
;
;
; Called Functions:
;   FUN_005aa50c
;
; *****************************************************************************

section .text

    ADD ESP,0x2c                        ; 005aa677
        ;   Label: FUN_005aa677
    INT 0x6                             ; 005aa67a
    FSTP extended double ptr [ESP]      ; 005aa67c
        ;   Label: LAB_005aa67c
    FSTP extended double ptr [ESP + 0xc] ; 005aa67f
    CALL FUN_005aa50c                   ; 005aa683
        ;   XREF to: 005aa50c (UNCONDITIONAL_CALL)  ; undefined FUN_005aa50c()
    FLD extended double ptr [ESP + 0xc] ; 005aa688
    FXCH                                ; 005aa68c
    ADD ESP,0x2c                        ; 005aa68e
    RET                                 ; 005aa691

