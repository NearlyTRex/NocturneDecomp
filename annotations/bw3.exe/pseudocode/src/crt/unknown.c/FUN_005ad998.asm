; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005ad998(uint param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005adc24 at 005adc2d
;
; Called Functions:
;   crt_unknown.c_FUN_005ad934
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005ad998
        ;   Label: crt_unknown.c_FUN_005ad998
    AND EAX,0xf                         ; 005ad99c
    SHL EAX,0x4                         ; 005ad99f
    ADD EAX,0x2d25a70                   ; 005ad9a2
    PUSH EAX                            ; 005ad9a7
    CALL crt_unknown.c_FUN_005ad934     ; 005ad9a8
        ;   XREF to: 005ad934 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ad934()
    ADD ESP,0x4                         ; 005ad9ad
    RET                                 ; 005ad9b0

