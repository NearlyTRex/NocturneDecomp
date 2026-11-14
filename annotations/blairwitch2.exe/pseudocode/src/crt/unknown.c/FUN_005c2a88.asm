; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; BOOL crt_unknown_c_FUN_005c2a88(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c2ab4 at 005c2b5f
;
; Called Functions:
;   crt_unknown.c_FUN_005c2a34
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 005c2a88
        ;   Label: crt_unknown.c_FUN_005c2a88
    CALL crt_unknown.c_FUN_005c2a34     ; 005c2a8a
        ;   XREF to: 005c2a34 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c2a34()
    ADD ESP,0x4                         ; 005c2a8f
    MOV EAX,EAX                         ; 005c2a92

