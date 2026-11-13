; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_parseComparisonOp_FUN_004a1290(char *str)
;
; Parameters:
; char *           Stack[0x4]:4   str
;
; Called Functions:
;   crt_string.c__strcmp_FUN_005c0f80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a1290
        ;   Label: core_event.cpp_parseComparisonOp_FUN_004a1290
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a1291
    PUSH 0x5dcbc4                       ; 004a1295
    PUSH EBX                            ; 004a129a
    CALL crt_string.c__strcmp_FUN_005c0f80 ; 004a129b
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005c0f80(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a12a0
    TEST EAX,EAX                        ; 004a12a3
    JNZ 0x004a12a9                      ; 004a12a5
        ;   XREF to: 004a12a9 (CONDITIONAL_JUMP)  ; LAB_004a12a9
    POP EBX                             ; 004a12a7
    RET                                 ; 004a12a8
    PUSH 0x5dcbc6                       ; 004a12a9
        ;   Label: LAB_004a12a9
    PUSH EBX                            ; 004a12ae
    CALL crt_string.c__strcmp_FUN_005c0f80 ; 004a12af
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005c0f80(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a12b4
    TEST EAX,EAX                        ; 004a12b7
    JNZ 0x004a12c2                      ; 004a12b9
        ;   XREF to: 004a12c2 (CONDITIONAL_JUMP)  ; LAB_004a12c2
    MOV EAX,0x1                         ; 004a12bb
    POP EBX                             ; 004a12c0
    RET                                 ; 004a12c1
    PUSH 0x5dcbc9                       ; 004a12c2
        ;   Label: LAB_004a12c2
    PUSH EBX                            ; 004a12c7
    CALL crt_string.c__strcmp_FUN_005c0f80 ; 004a12c8
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005c0f80(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a12cd
    TEST EAX,EAX                        ; 004a12d0
    JNZ 0x004a12db                      ; 004a12d2
        ;   XREF to: 004a12db (CONDITIONAL_JUMP)  ; LAB_004a12db
    MOV EAX,0x2                         ; 004a12d4
    POP EBX                             ; 004a12d9
    RET                                 ; 004a12da
    PUSH 0x5dcbcc                       ; 004a12db
        ;   Label: LAB_004a12db
    PUSH EBX                            ; 004a12e0
    CALL crt_string.c__strcmp_FUN_005c0f80 ; 004a12e1
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005c0f80(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a12e6
    TEST EAX,EAX                        ; 004a12e9
    JNZ 0x004a12f4                      ; 004a12eb
        ;   XREF to: 004a12f4 (CONDITIONAL_JUMP)  ; LAB_004a12f4
    MOV EAX,0x3                         ; 004a12ed
    POP EBX                             ; 004a12f2
    RET                                 ; 004a12f3
    PUSH 0x5dcbcf                       ; 004a12f4
        ;   Label: LAB_004a12f4
    PUSH EBX                            ; 004a12f9
    CALL crt_string.c__strcmp_FUN_005c0f80 ; 004a12fa
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005c0f80(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a12ff
    TEST EAX,EAX                        ; 004a1302
    JNZ 0x004a130d                      ; 004a1304
        ;   XREF to: 004a130d (CONDITIONAL_JUMP)  ; LAB_004a130d
    MOV EAX,0x5                         ; 004a1306
    POP EBX                             ; 004a130b
    RET                                 ; 004a130c
    PUSH 0x5dcbd1                       ; 004a130d
        ;   Label: LAB_004a130d
    PUSH EBX                            ; 004a1312
    CALL crt_string.c__strcmp_FUN_005c0f80 ; 004a1313
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005c0f80(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a1318
    TEST EAX,EAX                        ; 004a131b
    JNZ 0x004a1326                      ; 004a131d
        ;   XREF to: 004a1326 (CONDITIONAL_JUMP)  ; LAB_004a1326
    MOV EAX,0x4                         ; 004a131f
    POP EBX                             ; 004a1324
    RET                                 ; 004a1325
    MOV EAX,0x6                         ; 004a1326
        ;   Label: LAB_004a1326
    POP EBX                             ; 004a132b
    RET                                 ; 004a132c

