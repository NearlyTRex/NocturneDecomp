; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056a697(void)
;
;
; XREF[1]:
;   FUN_0056a6dc at 0056a690
;
; Called Functions:
;   FUN_0056a6ad
;
; *****************************************************************************

section .text

    MOV ECX,0x2710                      ; 0056a697
        ;   Label: FUN_0056a697
    SUB EDX,EDX                         ; 0056a69c
    CMP EAX,ECX                         ; 0056a69e
    XCHG EAX,EDX                        ; 0056a6a0
    JC 0x0056a6a6                       ; 0056a6a1
        ;   XREF to: 0056a6a6 (CONDITIONAL_JUMP)  ; LAB_0056a6a6
    XCHG EAX,EDX                        ; 0056a6a3
    DIV ECX                             ; 0056a6a4
    PUSH EDX                            ; 0056a6a6
        ;   Label: LAB_0056a6a6
    CALL FUN_0056a6ad                   ; 0056a6a7
        ;   XREF to: 0056a6ad (UNCONDITIONAL_CALL)  ; undefined FUN_0056a6ad()
    POP EAX                             ; 0056a6ac

