; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005caaec(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005cadb4 at 005cadcc
;
; Called Functions:
;   crt_unknown.c_FUN_005caa60
;
; *****************************************************************************

section .text

    PUSH 0x2c9f800                      ; 005caaec
        ;   Label: crt_unknown.c_FUN_005caaec
    CALL crt_unknown.c_FUN_005caa60     ; 005caaf1
        ;   XREF to: 005caa60 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005caa60()
    ADD ESP,0x4                         ; 005caaf6
    RET                                 ; 005caaf9

