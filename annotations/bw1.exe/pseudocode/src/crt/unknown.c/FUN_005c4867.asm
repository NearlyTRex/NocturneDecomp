; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c4867(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c4558 at 005c4860
;
; Called Functions:
;   crt_unknown.c_FUN_005c487d
;
; *****************************************************************************

section .text

    MOV ECX,0x2710                      ; 005c4867
        ;   Label: crt_unknown.c_FUN_005c4867
    SUB EDX,EDX                         ; 005c486c
    CMP EAX,ECX                         ; 005c486e
    XCHG EAX,EDX                        ; 005c4870
    JC 0x005c4876                       ; 005c4871
        ;   XREF to: 005c4876 (CONDITIONAL_JUMP)  ; LAB_005c4876
    XCHG EAX,EDX                        ; 005c4873
    DIV ECX                             ; 005c4874
    PUSH EDX                            ; 005c4876
        ;   Label: LAB_005c4876
    CALL crt_unknown.c_FUN_005c487d     ; 005c4877
        ;   XREF to: 005c487d (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c487d()
    POP EAX                             ; 005c487c

