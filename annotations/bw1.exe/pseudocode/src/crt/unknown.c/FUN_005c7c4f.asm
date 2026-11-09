; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c7c4f(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c7cd4 at 005c7cf2
;
; Called Functions:
;   crt_unknown.c_FUN_005c769c
;
; *****************************************************************************

section .text

    SUB ESP,0x2c                        ; 005c7c4f
        ;   Label: crt_unknown.c_FUN_005c7c4f
    FSTP extended double ptr [ESP]      ; 005c7c52
    FSTP extended double ptr [ESP + 0xc] ; 005c7c55
    CALL crt_unknown.c_FUN_005c769c     ; 005c7c59
        ;   XREF to: 005c769c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c769c()
    ADD ESP,0x2c                        ; 005c7c5e
    RET                                 ; 005c7c61

