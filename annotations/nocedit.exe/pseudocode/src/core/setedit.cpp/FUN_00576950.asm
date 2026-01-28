; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_setedit_cpp_FUN_00576950(void)
;
;
; Referenced Globals:
;   TerminatedCString s_d_006465a5
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   crt_stdlib.c_atoi_FUN_005ffef0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00576950
        ;   Label: core_setedit.cpp_FUN_00576950
    PUSH EDI                            ; 00576951
    MOV EBX,dword ptr [ESP + 0xc]       ; 00576952
    MOV EDI,EBX                         ; 00576956
    SUB ECX,ECX                         ; 00576958
    DEC ECX                             ; 0057695a
    XOR EAX,EAX                         ; 0057695b
    SCASB.REPNE ES:EDI                  ; 0057695d
    NOT ECX                             ; 0057695f
    DEC ECX                             ; 00576961
    LEA EDX,[ECX + -0x1]                ; 00576962
    TEST EDX,EDX                        ; 00576965
    JLE 0x0057697e                      ; 00576967
        ;   XREF to: 0057697e (CONDITIONAL_JUMP)  ; LAB_0057697e
    LEA EAX,[EDX + EBX*0x1]             ; 00576969
    MOV CL,byte ptr [EAX]               ; 0057696c
        ;   Label: LAB_0057696c
    CMP CL,0x30                         ; 0057696e
    JC 0x0057697e                       ; 00576971
        ;   XREF to: 0057697e (CONDITIONAL_JUMP)  ; LAB_0057697e
    CMP CL,0x39                         ; 00576973
    JA 0x0057697e                       ; 00576976
        ;   XREF to: 0057697e (CONDITIONAL_JUMP)  ; LAB_0057697e
    DEC EDX                             ; 00576978
    DEC EAX                             ; 00576979
    TEST EDX,EDX                        ; 0057697a
    JG 0x0057696c                       ; 0057697c
        ;   XREF to: 0057696c (CONDITIONAL_JUMP)  ; LAB_0057696c
    INC EDX                             ; 0057697e
        ;   Label: LAB_0057697e
    ADD EBX,EDX                         ; 0057697f
    PUSH EBX                            ; 00576981
    CALL crt_stdlib.c_atoi_FUN_005ffef0 ; 00576982
        ;   XREF to: 005ffef0 (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_atoi_FUN_005ffef0(char * string_ptr)
    ADD ESP,0x4                         ; 00576987
    INC EAX                             ; 0057698a
    PUSH EAX                            ; 0057698b
    PUSH 0x6465a5                       ; 0057698c | = "%d"
    PUSH EBX                            ; 00576991
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00576992
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00576997
    POP EDI                             ; 0057699a
    POP EBX                             ; 0057699b
    RET                                 ; 0057699c

