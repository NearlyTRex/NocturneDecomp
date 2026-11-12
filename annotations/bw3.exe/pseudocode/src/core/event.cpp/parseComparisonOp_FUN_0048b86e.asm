; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_parseComparisonOp_FUN_0048b86e(char *str)
;
; Parameters:
; char *           Stack[0x4]:4   str
;
; Called Functions:
;   crt_string.c__strcmp_FUN_005a3d00
;
; *****************************************************************************

section .text

    MOV EAX,EAX                         ; 0048b86e
        ;   Label: core_event.cpp_parseComparisonOp_FUN_0048b86e
    PUSH EBX                            ; 0048b870
    MOV EBX,dword ptr [ESP + 0x8]       ; 0048b871
    PUSH 0x5bddb8                       ; 0048b875
    PUSH EBX                            ; 0048b87a
    CALL crt_string.c__strcmp_FUN_005a3d00 ; 0048b87b
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005a3d00(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048b880
    TEST EAX,EAX                        ; 0048b883
    JNZ 0x0048b889                      ; 0048b885
        ;   XREF to: 0048b889 (CONDITIONAL_JUMP)  ; LAB_0048b889
    POP EBX                             ; 0048b887
    RET                                 ; 0048b888
    PUSH 0x5bddba                       ; 0048b889
        ;   Label: LAB_0048b889
    PUSH EBX                            ; 0048b88e
    CALL crt_string.c__strcmp_FUN_005a3d00 ; 0048b88f
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005a3d00(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048b894
    TEST EAX,EAX                        ; 0048b897
    JNZ 0x0048b8a2                      ; 0048b899
        ;   XREF to: 0048b8a2 (CONDITIONAL_JUMP)  ; LAB_0048b8a2
    MOV EAX,0x1                         ; 0048b89b
    POP EBX                             ; 0048b8a0
    RET                                 ; 0048b8a1
    PUSH 0x5bddbd                       ; 0048b8a2
        ;   Label: LAB_0048b8a2
    PUSH EBX                            ; 0048b8a7
    CALL crt_string.c__strcmp_FUN_005a3d00 ; 0048b8a8
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005a3d00(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048b8ad
    TEST EAX,EAX                        ; 0048b8b0
    JNZ 0x0048b8bb                      ; 0048b8b2
        ;   XREF to: 0048b8bb (CONDITIONAL_JUMP)  ; LAB_0048b8bb
    MOV EAX,0x2                         ; 0048b8b4
    POP EBX                             ; 0048b8b9
    RET                                 ; 0048b8ba
    PUSH 0x5bddc0                       ; 0048b8bb
        ;   Label: LAB_0048b8bb
    PUSH EBX                            ; 0048b8c0
    CALL crt_string.c__strcmp_FUN_005a3d00 ; 0048b8c1
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005a3d00(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048b8c6
    TEST EAX,EAX                        ; 0048b8c9
    JNZ 0x0048b8d4                      ; 0048b8cb
        ;   XREF to: 0048b8d4 (CONDITIONAL_JUMP)  ; LAB_0048b8d4
    MOV EAX,0x3                         ; 0048b8cd
    POP EBX                             ; 0048b8d2
    RET                                 ; 0048b8d3
    PUSH 0x5bddc3                       ; 0048b8d4
        ;   Label: LAB_0048b8d4
    PUSH EBX                            ; 0048b8d9
    CALL crt_string.c__strcmp_FUN_005a3d00 ; 0048b8da
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005a3d00(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048b8df
    TEST EAX,EAX                        ; 0048b8e2
    JNZ 0x0048b8ed                      ; 0048b8e4
        ;   XREF to: 0048b8ed (CONDITIONAL_JUMP)  ; LAB_0048b8ed
    MOV EAX,0x5                         ; 0048b8e6
    POP EBX                             ; 0048b8eb
    RET                                 ; 0048b8ec
    PUSH 0x5bddc5                       ; 0048b8ed
        ;   Label: LAB_0048b8ed
    PUSH EBX                            ; 0048b8f2
    CALL crt_string.c__strcmp_FUN_005a3d00 ; 0048b8f3
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005a3d00(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048b8f8
    TEST EAX,EAX                        ; 0048b8fb
    JNZ 0x0048b906                      ; 0048b8fd
        ;   XREF to: 0048b906 (CONDITIONAL_JUMP)  ; LAB_0048b906
    MOV EAX,0x4                         ; 0048b8ff
    POP EBX                             ; 0048b904
    RET                                 ; 0048b905
    MOV EAX,0x6                         ; 0048b906
        ;   Label: LAB_0048b906
    POP EBX                             ; 0048b90b
    RET                                 ; 0048b90c

