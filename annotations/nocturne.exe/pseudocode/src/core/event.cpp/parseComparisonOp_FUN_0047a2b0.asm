; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_parseComparisonOp_FUN_0047a2b0(char *str)
;
; Parameters:
; char *           Stack[0x4]:4   str
;
; Referenced Globals:
;   TerminatedCString s_anon_0057f3b3
;   TerminatedCString s_anon_0057f3b5
;   TerminatedCString s_anon_0057f3b8
;   TerminatedCString s_anon_0057f3bb
;   TerminatedCString s_anon_0057f3be
;   TerminatedCString s_anon_0057f3c0
;
; Called Functions:
;   crt_string.c__strcmp_FUN_005649c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047a2b0
        ;   Label: core_event.cpp_parseComparisonOp_FUN_0047a2b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0047a2b1
    PUSH 0x57f3b3                       ; 0047a2b5 | = "<"
    PUSH EBX                            ; 0047a2ba
    CALL crt_string.c__strcmp_FUN_005649c0 ; 0047a2bb
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005649c0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0047a2c0
    TEST EAX,EAX                        ; 0047a2c3
    JNZ 0x0047a2c9                      ; 0047a2c5
        ;   XREF to: 0047a2c9 (CONDITIONAL_JUMP)  ; LAB_0047a2c9
    POP EBX                             ; 0047a2c7
    RET                                 ; 0047a2c8
    PUSH 0x57f3b5                       ; 0047a2c9 | = "<="
        ;   Label: LAB_0047a2c9
    PUSH EBX                            ; 0047a2ce
    CALL crt_string.c__strcmp_FUN_005649c0 ; 0047a2cf
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005649c0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0047a2d4
    TEST EAX,EAX                        ; 0047a2d7
    JNZ 0x0047a2e2                      ; 0047a2d9
        ;   XREF to: 0047a2e2 (CONDITIONAL_JUMP)  ; LAB_0047a2e2
    MOV EAX,0x1                         ; 0047a2db
    POP EBX                             ; 0047a2e0
    RET                                 ; 0047a2e1
    PUSH 0x57f3b8                       ; 0047a2e2 | = "=="
        ;   Label: LAB_0047a2e2
    PUSH EBX                            ; 0047a2e7
    CALL crt_string.c__strcmp_FUN_005649c0 ; 0047a2e8
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005649c0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0047a2ed
    TEST EAX,EAX                        ; 0047a2f0
    JNZ 0x0047a2fb                      ; 0047a2f2
        ;   XREF to: 0047a2fb (CONDITIONAL_JUMP)  ; LAB_0047a2fb
    MOV EAX,0x2                         ; 0047a2f4
    POP EBX                             ; 0047a2f9
    RET                                 ; 0047a2fa
    PUSH 0x57f3bb                       ; 0047a2fb | = "!="
        ;   Label: LAB_0047a2fb
    PUSH EBX                            ; 0047a300
    CALL crt_string.c__strcmp_FUN_005649c0 ; 0047a301
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005649c0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0047a306
    TEST EAX,EAX                        ; 0047a309
    JNZ 0x0047a314                      ; 0047a30b
        ;   XREF to: 0047a314 (CONDITIONAL_JUMP)  ; LAB_0047a314
    MOV EAX,0x3                         ; 0047a30d
    POP EBX                             ; 0047a312
    RET                                 ; 0047a313
    PUSH 0x57f3be                       ; 0047a314 | = ">"
        ;   Label: LAB_0047a314
    PUSH EBX                            ; 0047a319
    CALL crt_string.c__strcmp_FUN_005649c0 ; 0047a31a
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005649c0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0047a31f
    TEST EAX,EAX                        ; 0047a322
    JNZ 0x0047a32d                      ; 0047a324
        ;   XREF to: 0047a32d (CONDITIONAL_JUMP)  ; LAB_0047a32d
    MOV EAX,0x5                         ; 0047a326
    POP EBX                             ; 0047a32b
    RET                                 ; 0047a32c
    PUSH 0x57f3c0                       ; 0047a32d | = ">="
        ;   Label: LAB_0047a32d
    PUSH EBX                            ; 0047a332
    CALL crt_string.c__strcmp_FUN_005649c0 ; 0047a333
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005649c0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0047a338
    TEST EAX,EAX                        ; 0047a33b
    JNZ 0x0047a346                      ; 0047a33d
        ;   XREF to: 0047a346 (CONDITIONAL_JUMP)  ; LAB_0047a346
    MOV EAX,0x4                         ; 0047a33f
    POP EBX                             ; 0047a344
    RET                                 ; 0047a345
    MOV EAX,0x6                         ; 0047a346
        ;   Label: LAB_0047a346
    POP EBX                             ; 0047a34b
    RET                                 ; 0047a34c

