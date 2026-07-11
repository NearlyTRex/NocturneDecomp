; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056a6ad(void)
;
;
; XREF[1]:
;   FUN_0056a697 at 0056a6a7
;
; Called Functions:
;   FUN_0056a6c4
;
; *****************************************************************************

section .text

    MOV ECX,0x64                        ; 0056a6ad
        ;   Label: FUN_0056a6ad
    SUB EDX,EDX                         ; 0056a6b2
    CMP EAX,ECX                         ; 0056a6b4
    XCHG EAX,EDX                        ; 0056a6b6
    JC 0x0056a6bd                       ; 0056a6b7
        ;   XREF to: 0056a6bd (CONDITIONAL_JUMP)  ; LAB_0056a6bd
    XCHG EAX,EDX                        ; 0056a6b9
    DIV CX                              ; 0056a6ba
    PUSH EDX                            ; 0056a6bd
        ;   Label: LAB_0056a6bd
    CALL FUN_0056a6c4                   ; 0056a6be
        ;   XREF to: 0056a6c4 (UNCONDITIONAL_CALL)  ; undefined FUN_0056a6c4()
    POP EAX                             ; 0056a6c3

