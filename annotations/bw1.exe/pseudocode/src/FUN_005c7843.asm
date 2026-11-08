; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c7843(void)
;
;
; Called Functions:
;   FUN_005c769c
;
; *****************************************************************************

section .text

    FSTP extended double ptr [ESP]      ; 005c7843
        ;   Label: FUN_005c7843
    FSTP extended double ptr [ESP + 0xc] ; 005c7846
    CALL FUN_005c769c                   ; 005c784a
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined FUN_005c769c()
    ADD ESP,0x2c                        ; 005c784f
    RET                                 ; 005c7852

