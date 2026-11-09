; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005a93b0(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005accf0 at 005accf8
;
; Called Functions:
;   crt_unknown.c_FUN_005a93bc
;
; *****************************************************************************

section .text

    PUSH -0x1                           ; 005a93b0
        ;   Label: crt_unknown.c_FUN_005a93b0
    CALL crt_unknown.c_FUN_005a93bc     ; 005a93b2
        ;   XREF to: 005a93bc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a93bc()
    ADD ESP,0x4                         ; 005a93b7
    RET                                 ; 005a93ba

