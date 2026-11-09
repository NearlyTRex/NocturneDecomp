; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bc5ad(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005bc597 at 005bc5a7
;
; Called Functions:
;   crt_unknown.c_FUN_005bc5c4
;
; *****************************************************************************

section .text

    MOV ECX,0x64                        ; 005bc5ad
        ;   Label: crt_unknown.c_FUN_005bc5ad
    SUB EDX,EDX                         ; 005bc5b2
    CMP EAX,ECX                         ; 005bc5b4
    XCHG EAX,EDX                        ; 005bc5b6
    JC 0x005bc5bd                       ; 005bc5b7
        ;   XREF to: 005bc5bd (CONDITIONAL_JUMP)  ; LAB_005bc5bd
    XCHG EAX,EDX                        ; 005bc5b9
    DIV CX                              ; 005bc5ba
    PUSH EDX                            ; 005bc5bd
        ;   Label: LAB_005bc5bd
    CALL crt_unknown.c_FUN_005bc5c4     ; 005bc5be
        ;   XREF to: 005bc5c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bc5c4()
    POP EAX                             ; 005bc5c3

