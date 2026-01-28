; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void crt_unknown_c_FUN_006040d7(uint param_1,undefined4 param_2,char *unaff_EBX)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_0060403f at 006040d0
;
; Called Functions:
;   crt_unknown.c_FUN_006040ed
;
; *****************************************************************************

section .text

    MOV ECX,0x2710                      ; 006040d7
        ;   Label: crt_unknown.c_FUN_006040d7
    SUB EDX,EDX                         ; 006040dc
    CMP EAX,ECX                         ; 006040de
    XCHG EAX,EDX                        ; 006040e0
    JC 0x006040e6                       ; 006040e1
        ;   XREF to: 006040e6 (CONDITIONAL_JUMP)  ; LAB_006040e6
    XCHG EAX,EDX                        ; 006040e3
    DIV ECX                             ; 006040e4
    PUSH EDX                            ; 006040e6
        ;   Label: LAB_006040e6
    CALL crt_unknown.c_FUN_006040ed     ; 006040e7
        ;   XREF to: 006040ed (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_006040ed()
    POP EAX                             ; 006040ec

