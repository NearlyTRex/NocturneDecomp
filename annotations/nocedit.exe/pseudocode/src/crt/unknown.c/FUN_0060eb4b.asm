; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_unknown.c_FUN_0060eb4b()
;
;
; XREF[1]:
;   crt_unknown.c_FUN_0060dcf6 at 0060dcfe
;
; Called Functions:
;   crt_unknown.c_FUN_0060fa80
;
; *****************************************************************************

section .text

    MOV EAX,0x83                        ; 0060eb4b
        ;   Label: crt_unknown.c_FUN_0060eb4b
    CALL crt_unknown.c_FUN_0060fa80     ; 0060eb50
        ;   XREF to: 0060fa80 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0060fa80()
    JMP 0x0060eb68                      ; 0060eb55
        ;   XREF to: 0060eb68 (UNCONDITIONAL_JUMP)  ; LAB_0060eb68

