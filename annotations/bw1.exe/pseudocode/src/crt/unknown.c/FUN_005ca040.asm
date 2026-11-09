; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005ca040(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005ca05c
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 005ca040
        ;   Label: crt_unknown.c_FUN_005ca040
    CALL crt_unknown.c_FUN_005ca05c     ; 005ca042
        ;   XREF to: 005ca05c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ca05c()
    ADD ESP,0x4                         ; 005ca047
    JMP 0x005c6b18                      ; 005ca04a
        ;   XREF to: 005c6b18 (UNCONDITIONAL_JUMP)

