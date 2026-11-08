; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c7867(void)
;
;
; Called Functions:
;   FUN_005c769c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP + 0xc] ; 005c7867
        ;   Label: FUN_005c7867
    FSTP extended double ptr [ESP]      ; 005c786b
    CALL FUN_005c769c                   ; 005c786e
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined FUN_005c769c()
    ADD ESP,0x2c                        ; 005c7873
    RET                                 ; 005c7876

