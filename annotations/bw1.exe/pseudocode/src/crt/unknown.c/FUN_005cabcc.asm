; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005cabcc(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005cadb4 at 005cae04
;
; Called Functions:
;   crt_unknown.c_FUN_005caac4
;
; *****************************************************************************

section .text

    PUSH 0x2c9ff40                      ; 005cabcc
        ;   Label: crt_unknown.c_FUN_005cabcc
    CALL crt_unknown.c_FUN_005caac4     ; 005cabd1
        ;   XREF to: 005caac4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005caac4()
    ADD ESP,0x4                         ; 005cabd6
    RET                                 ; 005cabd9

