; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a76d7(void)
;
;
; XREF[1]:
;   FUN_005a73c8 at 005a76d0
;
; Called Functions:
;   FUN_005a76ed
;
; *****************************************************************************

section .text

    MOV ECX,0x2710                      ; 005a76d7
        ;   Label: FUN_005a76d7
    SUB EDX,EDX                         ; 005a76dc
    CMP EAX,ECX                         ; 005a76de
    XCHG EAX,EDX                        ; 005a76e0
    JC 0x005a76e6                       ; 005a76e1
        ;   XREF to: 005a76e6 (CONDITIONAL_JUMP)  ; LAB_005a76e6
    XCHG EAX,EDX                        ; 005a76e3
    DIV ECX                             ; 005a76e4
    PUSH EDX                            ; 005a76e6
        ;   Label: LAB_005a76e6
    CALL FUN_005a76ed                   ; 005a76e7
        ;   XREF to: 005a76ed (UNCONDITIONAL_CALL)  ; undefined FUN_005a76ed()
    POP EAX                             ; 005a76ec

