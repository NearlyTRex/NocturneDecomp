; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; BOOL crt_unknown_c_FUN_005adbf8(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005adc24 at 005adccf
;
; Called Functions:
;   crt_unknown.c_FUN_005adba4
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 005adbf8
        ;   Label: crt_unknown.c_FUN_005adbf8
    CALL crt_unknown.c_FUN_005adba4     ; 005adbfa
        ;   XREF to: 005adba4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005adba4()
    ADD ESP,0x4                         ; 005adbff
    MOV EAX,EAX                         ; 005adc02

