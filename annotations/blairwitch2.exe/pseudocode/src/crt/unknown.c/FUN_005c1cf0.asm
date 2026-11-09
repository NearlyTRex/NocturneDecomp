; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c1cf0(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005c1d0c
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 005c1cf0
        ;   Label: crt_unknown.c_FUN_005c1cf0
    CALL crt_unknown.c_FUN_005c1d0c     ; 005c1cf2
        ;   XREF to: 005c1d0c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c1d0c()
    ADD ESP,0x4                         ; 005c1cf7
    JMP 0x005be848                      ; 005c1cfa
        ;   XREF to: 005be848 (UNCONDITIONAL_JUMP)

