; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a76ed(void)
;
;
; XREF[1]:
;   FUN_005a76d7 at 005a76e7
;
; Called Functions:
;   FUN_005a7704
;
; *****************************************************************************

section .text

    MOV ECX,0x64                        ; 005a76ed
        ;   Label: FUN_005a76ed
    SUB EDX,EDX                         ; 005a76f2
    CMP EAX,ECX                         ; 005a76f4
    XCHG EAX,EDX                        ; 005a76f6
    JC 0x005a76fd                       ; 005a76f7
        ;   XREF to: 005a76fd (CONDITIONAL_JUMP)  ; LAB_005a76fd
    XCHG EAX,EDX                        ; 005a76f9
    DIV CX                              ; 005a76fa
    PUSH EDX                            ; 005a76fd
        ;   Label: LAB_005a76fd
    CALL FUN_005a7704                   ; 005a76fe
        ;   XREF to: 005a7704 (UNCONDITIONAL_CALL)  ; undefined FUN_005a7704()
    POP EAX                             ; 005a7703

