; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005ad9ec(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005adc24 at 005adc88
;
; Called Functions:
;   crt_unknown.c_FUN_005ad8d0
;
; *****************************************************************************

section .text

    PUSH 0x2d25b70                      ; 005ad9ec
        ;   Label: crt_unknown.c_FUN_005ad9ec
    CALL crt_unknown.c_FUN_005ad8d0     ; 005ad9f1
        ;   XREF to: 005ad8d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ad8d0()
    ADD ESP,0x4                         ; 005ad9f6
    RET                                 ; 005ad9f9

