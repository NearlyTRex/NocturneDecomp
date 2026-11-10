; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005cabbc(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005cadb4 at 005cadd6
;
; Called Functions:
;   crt_unknown.c_FUN_005caa60
;
; *****************************************************************************

section .text

    PUSH 0x2c9ff40                      ; 005cabbc
        ;   Label: crt_unknown.c_FUN_005cabbc
    CALL crt_unknown.c_FUN_005caa60     ; 005cabc1
        ;   XREF to: 005caa60 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005caa60()
    ADD ESP,0x4                         ; 005cabc6
    RET                                 ; 005cabc9

