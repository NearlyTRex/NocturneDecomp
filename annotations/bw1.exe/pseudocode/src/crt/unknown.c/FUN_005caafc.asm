; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005caafc(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005cadb4 at 005cadd1
;
; Called Functions:
;   crt_unknown.c_FUN_005caac4
;
; *****************************************************************************

section .text

    PUSH 0x2c9f800                      ; 005caafc
        ;   Label: crt_unknown.c_FUN_005caafc
    CALL crt_unknown.c_FUN_005caac4     ; 005cab01
        ;   XREF to: 005caac4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005caac4()
    ADD ESP,0x4                         ; 005cab06
    RET                                 ; 005cab09

