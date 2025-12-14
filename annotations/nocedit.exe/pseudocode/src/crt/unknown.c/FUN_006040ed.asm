; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_unknown.c_FUN_006040ed()
;
;
; XREF[1]:
;   crt_unknown.c_FUN_006040d7 at 006040e7
;
; Called Functions:
;   crt_unknown.c_FUN_00604104
;
; *****************************************************************************

section .text

    MOV ECX,0x64                        ; 006040ed
        ;   Label: crt_unknown.c_FUN_006040ed
    SUB EDX,EDX                         ; 006040f2
    CMP EAX,ECX                         ; 006040f4
    XCHG EAX,EDX                        ; 006040f6
    JC 0x006040fd                       ; 006040f7
        ;   XREF to: 006040fd (CONDITIONAL_JUMP)  ; LAB_006040fd
    XCHG EAX,EDX                        ; 006040f9
    DIV CX                              ; 006040fa
    PUSH EDX                            ; 006040fd
        ;   Label: LAB_006040fd
    CALL crt_unknown.c_FUN_00604104     ; 006040fe
        ;   XREF to: 00604104 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00604104()
    POP EAX                             ; 00604103

