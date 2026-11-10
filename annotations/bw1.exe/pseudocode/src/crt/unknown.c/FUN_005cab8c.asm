; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005cab8c(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005cadb4 at 005cae22
;
; Called Functions:
;   crt_unknown.c_FUN_005caac4
;
; *****************************************************************************

section .text

    PUSH 0x2c9f920                      ; 005cab8c
        ;   Label: crt_unknown.c_FUN_005cab8c
    CALL crt_unknown.c_FUN_005caac4     ; 005cab91
        ;   XREF to: 005caac4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005caac4()
    ADD ESP,0x4                         ; 005cab96
    RET                                 ; 005cab99

