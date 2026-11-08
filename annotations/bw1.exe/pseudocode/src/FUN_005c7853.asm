; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c7853(void)
;
;
; Called Functions:
;   FUN_005c769c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005c7853
        ;   Label: FUN_005c7853
    FSTP extended double ptr [ESP]      ; 005c7857
    CALL FUN_005c769c                   ; 005c785a
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined FUN_005c769c()
    FLD extended double ptr [ESP + 0xc] ; 005c785f
    ADD ESP,0x2c                        ; 005c7863
    RET                                 ; 005c7866

