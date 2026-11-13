; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_demnfolk_cpp_FUN_004580a0(int param_1,uint param_2)
;
;
; XREF[3]:
;   core_demnfolk.cpp_CDemnfolk_process_FUN_00455080 at 00455e49
;   core_demnfolk.cpp_FUN_00457740 at 00457921
;   core_demnfolk.cpp_FUN_00458140 at 0045814b
;
; Referenced Globals:
;   TerminatedCString s_jeff_dfm_005ba836
;   undefined4 DAT_005ba83f
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005a3260
;   crt_string.c__strnicmp_FUN_005a3f90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004580a0
        ;   Label: core_demnfolk.cpp_FUN_004580a0
    PUSH EBP                            ; 004580a1
    MOV EBP,ESP                         ; 004580a2
    MOV EBX,dword ptr [EBP + 0x10]      ; 004580a4
    CMP EBX,0x2                         ; 004580a7
    JZ 0x004580c6                       ; 004580aa
        ;   XREF to: 004580c6 (CONDITIONAL_JUMP)  ; LAB_004580c6
    MOV EAX,dword ptr [EBP + 0xc]       ; 004580ac
    PUSH 0x5ba836                       ; 004580af | = "jeff.dfm"
    ADD EAX,0x24a8                      ; 004580b4
    PUSH EAX                            ; 004580b9
    CALL crt_string.c__stricmp_FUN_005a3260 ; 004580ba
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 004580bf
    TEST EAX,EAX                        ; 004580c2
    JZ 0x004580f6                       ; 004580c4
        ;   XREF to: 004580f6 (CONDITIONAL_JUMP)  ; LAB_004580f6
    PUSH 0x3                            ; 004580c6
        ;   Label: LAB_004580c6
    MOV EAX,dword ptr [EBP + 0xc]       ; 004580c8
    PUSH 0x5ba83f                       ; 004580cb | DAT_005ba83f
    ADD EAX,0x24a8                      ; 004580d0
    PUSH EAX                            ; 004580d5
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 004580d6
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004580db
    TEST EAX,EAX                        ; 004580de
    JNZ 0x00458118                      ; 004580e0
        ;   XREF to: 00458118 (CONDITIONAL_JUMP)  ; LAB_00458118
    CMP EBX,0x2                         ; 004580e2
    JNC 0x00458100                      ; 004580e5
        ;   XREF to: 00458100 (CONDITIONAL_JUMP)  ; LAB_00458100
    CMP EBX,0x1                         ; 004580e7
    JNZ 0x00458107                      ; 004580ea
        ;   XREF to: 00458107 (CONDITIONAL_JUMP)  ; LAB_00458107
    MOV EBX,0x1                         ; 004580ec
        ;   Label: LAB_004580ec
    MOV EAX,EBX                         ; 004580f1
    POP EBP                             ; 004580f3
    POP EBX                             ; 004580f4
    RET                                 ; 004580f5
    MOV EBX,0xffffffff                  ; 004580f6
        ;   Label: LAB_004580f6
    MOV EAX,EBX                         ; 004580fb
    POP EBP                             ; 004580fd
    POP EBX                             ; 004580fe
    RET                                 ; 004580ff
    JBE 0x004580ec                      ; 00458100
        ;   XREF to: 004580ec (CONDITIONAL_JUMP)  ; LAB_004580ec
        ;   Label: LAB_00458100
    CMP EBX,0x3                         ; 00458102
    JZ 0x004580ec                       ; 00458105
        ;   XREF to: 004580ec (CONDITIONAL_JUMP)  ; LAB_004580ec
    MOV EBX,0xffffffff                  ; 00458107
        ;   Label: LAB_00458107
    MOV EAX,EBX                         ; 0045810c
    POP EBP                             ; 0045810e
    POP EBX                             ; 0045810f
    RET                                 ; 00458110
    XOR EBX,EBX                         ; 00458111
        ;   Label: LAB_00458111
    MOV EAX,EBX                         ; 00458113
    POP EBP                             ; 00458115
    POP EBX                             ; 00458116
    RET                                 ; 00458117
    CMP EBX,0x2                         ; 00458118
        ;   Label: LAB_00458118
    JNC 0x0045812c                      ; 0045811b
        ;   XREF to: 0045812c (CONDITIONAL_JUMP)  ; LAB_0045812c
    CMP EBX,0x1                         ; 0045811d
    JZ 0x004580ec                       ; 00458120
        ;   XREF to: 004580ec (CONDITIONAL_JUMP)  ; LAB_004580ec
    MOV EBX,0xffffffff                  ; 00458122
    MOV EAX,EBX                         ; 00458127
    POP EBP                             ; 00458129
    POP EBX                             ; 0045812a
    RET                                 ; 0045812b
    JBE 0x00458111                      ; 0045812c
        ;   XREF to: 00458111 (CONDITIONAL_JUMP)  ; LAB_00458111
        ;   Label: LAB_0045812c
    CMP EBX,0x3                         ; 0045812e
    JZ 0x004580ec                       ; 00458131
        ;   XREF to: 004580ec (CONDITIONAL_JUMP)  ; LAB_004580ec
    MOV EBX,0xffffffff                  ; 00458133
    MOV EAX,EBX                         ; 00458138
    POP EBP                             ; 0045813a
    POP EBX                             ; 0045813b
    RET                                 ; 0045813c

