; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005cabdc(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005cadb4 at 005cae6f
;
; Called Functions:
;   crt_unknown.c_FUN_005caa60
;
; *****************************************************************************

section .text

    PUSH 0x2c9ff50                      ; 005cabdc
        ;   Label: crt_unknown.c_FUN_005cabdc
    CALL crt_unknown.c_FUN_005caa60     ; 005cabe1
        ;   XREF to: 005caa60 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005caa60()
    ADD ESP,0x4                         ; 005cabe6
    RET                                 ; 005cabe9

