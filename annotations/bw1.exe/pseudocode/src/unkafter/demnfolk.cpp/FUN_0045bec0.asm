; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_demnfolk_cpp_FUN_0045bec0(int param_1,uint param_2)
;
;
; XREF[3]:
;   core_demnfolk.cpp_CDemnfolk_process_FUN_00459100 at 00459ea9
;   core_demnfolk.cpp_FUN_0045b560 at 0045b741
;   unkafter_demnfolk.cpp_FUN_0045bf60 at 0045bf6b
;
; Referenced Globals:
;   TerminatedCString s_jeff_dfm_005d81b7
;   undefined4 DAT_005d81c0
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005c04e0
;   crt_string.c__strnicmp_FUN_005c1210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045bec0
        ;   Label: unkafter_demnfolk.cpp_FUN_0045bec0
    PUSH EBP                            ; 0045bec1
    MOV EBP,ESP                         ; 0045bec2
    MOV EBX,dword ptr [EBP + 0x10]      ; 0045bec4
    CMP EBX,0x2                         ; 0045bec7
    JZ 0x0045bee6                       ; 0045beca
        ;   XREF to: 0045bee6 (CONDITIONAL_JUMP)  ; LAB_0045bee6
    MOV EAX,dword ptr [EBP + 0xc]       ; 0045becc
    PUSH 0x5d81b7                       ; 0045becf | = "jeff.dfm"
    ADD EAX,0x24a8                      ; 0045bed4
    PUSH EAX                            ; 0045bed9
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0045beda
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0045bedf
    TEST EAX,EAX                        ; 0045bee2
    JZ 0x0045bf16                       ; 0045bee4
        ;   XREF to: 0045bf16 (CONDITIONAL_JUMP)  ; LAB_0045bf16
    PUSH 0x3                            ; 0045bee6
        ;   Label: LAB_0045bee6
    MOV EAX,dword ptr [EBP + 0xc]       ; 0045bee8
    PUSH 0x5d81c0                       ; 0045beeb | DAT_005d81c0
    ADD EAX,0x24a8                      ; 0045bef0
    PUSH EAX                            ; 0045bef5
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 0045bef6
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0045befb
    TEST EAX,EAX                        ; 0045befe
    JNZ 0x0045bf38                      ; 0045bf00
        ;   XREF to: 0045bf38 (CONDITIONAL_JUMP)  ; LAB_0045bf38
    CMP EBX,0x2                         ; 0045bf02
    JNC 0x0045bf20                      ; 0045bf05
        ;   XREF to: 0045bf20 (CONDITIONAL_JUMP)  ; LAB_0045bf20
    CMP EBX,0x1                         ; 0045bf07
    JNZ 0x0045bf27                      ; 0045bf0a
        ;   XREF to: 0045bf27 (CONDITIONAL_JUMP)  ; LAB_0045bf27
    MOV EBX,0x1                         ; 0045bf0c
        ;   Label: LAB_0045bf0c
    MOV EAX,EBX                         ; 0045bf11
    POP EBP                             ; 0045bf13
    POP EBX                             ; 0045bf14
    RET                                 ; 0045bf15
    MOV EBX,0xffffffff                  ; 0045bf16
        ;   Label: LAB_0045bf16
    MOV EAX,EBX                         ; 0045bf1b
    POP EBP                             ; 0045bf1d
    POP EBX                             ; 0045bf1e
    RET                                 ; 0045bf1f
    JBE 0x0045bf0c                      ; 0045bf20
        ;   XREF to: 0045bf0c (CONDITIONAL_JUMP)  ; LAB_0045bf0c
        ;   Label: LAB_0045bf20
    CMP EBX,0x3                         ; 0045bf22
    JZ 0x0045bf0c                       ; 0045bf25
        ;   XREF to: 0045bf0c (CONDITIONAL_JUMP)  ; LAB_0045bf0c
    MOV EBX,0xffffffff                  ; 0045bf27
        ;   Label: LAB_0045bf27
    MOV EAX,EBX                         ; 0045bf2c
    POP EBP                             ; 0045bf2e
    POP EBX                             ; 0045bf2f
    RET                                 ; 0045bf30
    XOR EBX,EBX                         ; 0045bf31
        ;   Label: LAB_0045bf31
    MOV EAX,EBX                         ; 0045bf33
    POP EBP                             ; 0045bf35
    POP EBX                             ; 0045bf36
    RET                                 ; 0045bf37
    CMP EBX,0x2                         ; 0045bf38
        ;   Label: LAB_0045bf38
    JNC 0x0045bf4c                      ; 0045bf3b
        ;   XREF to: 0045bf4c (CONDITIONAL_JUMP)  ; LAB_0045bf4c
    CMP EBX,0x1                         ; 0045bf3d
    JZ 0x0045bf0c                       ; 0045bf40
        ;   XREF to: 0045bf0c (CONDITIONAL_JUMP)  ; LAB_0045bf0c
    MOV EBX,0xffffffff                  ; 0045bf42
    MOV EAX,EBX                         ; 0045bf47
    POP EBP                             ; 0045bf49
    POP EBX                             ; 0045bf4a
    RET                                 ; 0045bf4b
    JBE 0x0045bf31                      ; 0045bf4c
        ;   XREF to: 0045bf31 (CONDITIONAL_JUMP)  ; LAB_0045bf31
        ;   Label: LAB_0045bf4c
    CMP EBX,0x3                         ; 0045bf4e
    JZ 0x0045bf0c                       ; 0045bf51
        ;   XREF to: 0045bf0c (CONDITIONAL_JUMP)  ; LAB_0045bf0c
    MOV EBX,0xffffffff                  ; 0045bf53
    MOV EAX,EBX                         ; 0045bf58
    POP EBP                             ; 0045bf5a
    POP EBX                             ; 0045bf5b
    RET                                 ; 0045bf5c

