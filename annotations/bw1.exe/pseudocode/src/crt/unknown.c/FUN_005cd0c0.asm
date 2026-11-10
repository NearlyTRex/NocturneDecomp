; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005cd0c0(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005cb928 at 005cb96b
;
; Referenced Globals:
;   undefined4 DAT_00626adc
;
; Called Functions:
;   crt_unknown.c_FUN_005cd04c
;
; *****************************************************************************

section .text

    CALL crt_unknown.c_FUN_005cd04c     ; 005cd0c0
        ;   XREF to: 005cd04c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cd04c()
        ;   Label: crt_unknown.c_FUN_005cd0c0
    MOV EAX,[0x00626adc]                ; 005cd0c5 | DAT_00626adc
    RET                                 ; 005cd0ca

