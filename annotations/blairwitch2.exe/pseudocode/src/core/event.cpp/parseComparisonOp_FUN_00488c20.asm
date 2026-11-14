; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_parseComparisonOp_FUN_00488c20(char *str)
;
; Parameters:
; char *           Stack[0x4]:4   str
;
; Called Functions:
;   crt_string.c__strcmp_FUN_005b8c30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00488c20
        ;   Label: core_event.cpp_parseComparisonOp_FUN_00488c20
    MOV EBX,dword ptr [ESP + 0x8]       ; 00488c21
    PUSH 0x5d2e2b                       ; 00488c25
    PUSH EBX                            ; 00488c2a
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 00488c2b
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 00488c30
    TEST EAX,EAX                        ; 00488c33
    JNZ 0x00488c39                      ; 00488c35
        ;   XREF to: 00488c39 (CONDITIONAL_JUMP)  ; LAB_00488c39
    POP EBX                             ; 00488c37
    RET                                 ; 00488c38
    PUSH 0x5d2e2d                       ; 00488c39
        ;   Label: LAB_00488c39
    PUSH EBX                            ; 00488c3e
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 00488c3f
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 00488c44
    TEST EAX,EAX                        ; 00488c47
    JNZ 0x00488c52                      ; 00488c49
        ;   XREF to: 00488c52 (CONDITIONAL_JUMP)  ; LAB_00488c52
    MOV EAX,0x1                         ; 00488c4b
    POP EBX                             ; 00488c50
    RET                                 ; 00488c51
    PUSH 0x5d2e30                       ; 00488c52
        ;   Label: LAB_00488c52
    PUSH EBX                            ; 00488c57
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 00488c58
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 00488c5d
    TEST EAX,EAX                        ; 00488c60
    JNZ 0x00488c6b                      ; 00488c62
        ;   XREF to: 00488c6b (CONDITIONAL_JUMP)  ; LAB_00488c6b
    MOV EAX,0x2                         ; 00488c64
    POP EBX                             ; 00488c69
    RET                                 ; 00488c6a
    PUSH 0x5d2e33                       ; 00488c6b
        ;   Label: LAB_00488c6b
    PUSH EBX                            ; 00488c70
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 00488c71
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 00488c76
    TEST EAX,EAX                        ; 00488c79
    JNZ 0x00488c84                      ; 00488c7b
        ;   XREF to: 00488c84 (CONDITIONAL_JUMP)  ; LAB_00488c84
    MOV EAX,0x3                         ; 00488c7d
    POP EBX                             ; 00488c82
    RET                                 ; 00488c83
    PUSH 0x5d2e36                       ; 00488c84
        ;   Label: LAB_00488c84
    PUSH EBX                            ; 00488c89
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 00488c8a
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 00488c8f
    TEST EAX,EAX                        ; 00488c92
    JNZ 0x00488c9d                      ; 00488c94
        ;   XREF to: 00488c9d (CONDITIONAL_JUMP)  ; LAB_00488c9d
    MOV EAX,0x5                         ; 00488c96
    POP EBX                             ; 00488c9b
    RET                                 ; 00488c9c
    PUSH 0x5d2e38                       ; 00488c9d
        ;   Label: LAB_00488c9d
    PUSH EBX                            ; 00488ca2
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 00488ca3
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 00488ca8
    TEST EAX,EAX                        ; 00488cab
    JNZ 0x00488cb6                      ; 00488cad
        ;   XREF to: 00488cb6 (CONDITIONAL_JUMP)  ; LAB_00488cb6
    MOV EAX,0x4                         ; 00488caf
    POP EBX                             ; 00488cb4
    RET                                 ; 00488cb5
    MOV EAX,0x6                         ; 00488cb6
        ;   Label: LAB_00488cb6
    POP EBX                             ; 00488cbb
    RET                                 ; 00488cbc

