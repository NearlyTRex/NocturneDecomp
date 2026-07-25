; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056c333(void)
;
;
; Called Functions:
;   FUN_0056be50
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 0056c333
        ;   Label: FUN_0056c333
    FXCH ST5                            ; 0056c337
    FSTP extended double ptr [ESP]      ; 0056c339
    CALL FUN_0056be50                   ; 0056c33c
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; undefined FUN_0056be50()
    FXCH ST5                            ; 0056c341
    FLD extended double ptr [ESP + 0xc] ; 0056c343
    ADD ESP,0x2c                        ; 0056c347
    RET                                 ; 0056c34a

