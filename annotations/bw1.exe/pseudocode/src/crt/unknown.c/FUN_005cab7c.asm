; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005cab7c(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005cadb4 at 005cae18
;
; Called Functions:
;   crt_unknown.c_FUN_005caa60
;
; *****************************************************************************

section .text

    PUSH 0x2c9f920                      ; 005cab7c
        ;   Label: crt_unknown.c_FUN_005cab7c
    CALL crt_unknown.c_FUN_005caa60     ; 005cab81
        ;   XREF to: 005caa60 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005caa60()
    ADD ESP,0x4                         ; 005cab86
    RET                                 ; 005cab89

