; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; BOOL crt_unknown_c_FUN_005cad88(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005cadb4 at 005cae5f
;
; Called Functions:
;   crt_unknown.c_FUN_005cad34
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 005cad88
        ;   Label: crt_unknown.c_FUN_005cad88
    CALL crt_unknown.c_FUN_005cad34     ; 005cad8a
        ;   XREF to: 005cad34 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cad34()
    ADD ESP,0x4                         ; 005cad8f
    MOV EAX,EAX                         ; 005cad92

