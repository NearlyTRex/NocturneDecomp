; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c487d(void)
;
;
; XREF[1]:
;   FUN_005c4867 at 005c4877
;
; Called Functions:
;   FUN_005c4894
;
; *****************************************************************************

section .text

    MOV ECX,0x64                        ; 005c487d
        ;   Label: FUN_005c487d
    SUB EDX,EDX                         ; 005c4882
    CMP EAX,ECX                         ; 005c4884
    XCHG EAX,EDX                        ; 005c4886
    JC 0x005c488d                       ; 005c4887
        ;   XREF to: 005c488d (CONDITIONAL_JUMP)  ; LAB_005c488d
    XCHG EAX,EDX                        ; 005c4889
    DIV CX                              ; 005c488a
    PUSH EDX                            ; 005c488d
        ;   Label: LAB_005c488d
    CALL FUN_005c4894                   ; 005c488e
        ;   XREF to: 005c4894 (UNCONDITIONAL_CALL)  ; undefined FUN_005c4894()
    POP EAX                             ; 005c4893

