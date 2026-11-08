; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005bc597(void)
;
;
; XREF[1]:
;   FUN_005bc288 at 005bc590
;
; Called Functions:
;   FUN_005bc5ad
;
; *****************************************************************************

section .text

    MOV ECX,0x2710                      ; 005bc597
        ;   Label: FUN_005bc597
    SUB EDX,EDX                         ; 005bc59c
    CMP EAX,ECX                         ; 005bc59e
    XCHG EAX,EDX                        ; 005bc5a0
    JC 0x005bc5a6                       ; 005bc5a1
        ;   XREF to: 005bc5a6 (CONDITIONAL_JUMP)  ; LAB_005bc5a6
    XCHG EAX,EDX                        ; 005bc5a3
    DIV ECX                             ; 005bc5a4
    PUSH EDX                            ; 005bc5a6
        ;   Label: LAB_005bc5a6
    CALL FUN_005bc5ad                   ; 005bc5a7
        ;   XREF to: 005bc5ad (UNCONDITIONAL_CALL)  ; undefined FUN_005bc5ad()
    POP EAX                             ; 005bc5ac

