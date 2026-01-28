; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined4 core_event_cpp_FUN_004aa320(void)
;
;
; Referenced Globals:
;   TerminatedCString s_anon_00624439
;   TerminatedCString s_anon_0062443b
;   TerminatedCString s_anon_0062443e
;   TerminatedCString s_anon_00624441
;   TerminatedCString s_anon_00624444
;   TerminatedCString s_anon_00624446
;
; Called Functions:
;   crt_string.c_strcmp_FUN_005fef20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aa320
        ;   Label: core_event.cpp_FUN_004aa320
    MOV EBX,dword ptr [ESP + 0x8]       ; 004aa321
    PUSH 0x624439                       ; 004aa325 | = "<"
    PUSH EBX                            ; 004aa32a
    CALL crt_string.c_strcmp_FUN_005fef20 ; 004aa32b
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 004aa330
    TEST EAX,EAX                        ; 004aa333
    JNZ 0x004aa339                      ; 004aa335
        ;   XREF to: 004aa339 (CONDITIONAL_JUMP)  ; LAB_004aa339
    POP EBX                             ; 004aa337
    RET                                 ; 004aa338
    PUSH 0x62443b                       ; 004aa339 | = "<="
        ;   Label: LAB_004aa339
    PUSH EBX                            ; 004aa33e
    CALL crt_string.c_strcmp_FUN_005fef20 ; 004aa33f
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 004aa344
    TEST EAX,EAX                        ; 004aa347
    JNZ 0x004aa352                      ; 004aa349
        ;   XREF to: 004aa352 (CONDITIONAL_JUMP)  ; LAB_004aa352
    MOV EAX,0x1                         ; 004aa34b
    POP EBX                             ; 004aa350
    RET                                 ; 004aa351
    PUSH 0x62443e                       ; 004aa352 | = "=="
        ;   Label: LAB_004aa352
    PUSH EBX                            ; 004aa357
    CALL crt_string.c_strcmp_FUN_005fef20 ; 004aa358
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 004aa35d
    TEST EAX,EAX                        ; 004aa360
    JNZ 0x004aa36b                      ; 004aa362
        ;   XREF to: 004aa36b (CONDITIONAL_JUMP)  ; LAB_004aa36b
    MOV EAX,0x2                         ; 004aa364
    POP EBX                             ; 004aa369
    RET                                 ; 004aa36a
    PUSH 0x624441                       ; 004aa36b | = "!="
        ;   Label: LAB_004aa36b
    PUSH EBX                            ; 004aa370
    CALL crt_string.c_strcmp_FUN_005fef20 ; 004aa371
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 004aa376
    TEST EAX,EAX                        ; 004aa379
    JNZ 0x004aa384                      ; 004aa37b
        ;   XREF to: 004aa384 (CONDITIONAL_JUMP)  ; LAB_004aa384
    MOV EAX,0x3                         ; 004aa37d
    POP EBX                             ; 004aa382
    RET                                 ; 004aa383
    PUSH 0x624444                       ; 004aa384 | = ">"
        ;   Label: LAB_004aa384
    PUSH EBX                            ; 004aa389
    CALL crt_string.c_strcmp_FUN_005fef20 ; 004aa38a
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 004aa38f
    TEST EAX,EAX                        ; 004aa392
    JNZ 0x004aa39d                      ; 004aa394
        ;   XREF to: 004aa39d (CONDITIONAL_JUMP)  ; LAB_004aa39d
    MOV EAX,0x5                         ; 004aa396
    POP EBX                             ; 004aa39b
    RET                                 ; 004aa39c
    PUSH 0x624446                       ; 004aa39d | = ">="
        ;   Label: LAB_004aa39d
    PUSH EBX                            ; 004aa3a2
    CALL crt_string.c_strcmp_FUN_005fef20 ; 004aa3a3
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 004aa3a8
    TEST EAX,EAX                        ; 004aa3ab
    JNZ 0x004aa3b6                      ; 004aa3ad
        ;   XREF to: 004aa3b6 (CONDITIONAL_JUMP)  ; LAB_004aa3b6
    MOV EAX,0x4                         ; 004aa3af
    POP EBX                             ; 004aa3b4
    RET                                 ; 004aa3b5
    MOV EAX,0x6                         ; 004aa3b6
        ;   Label: LAB_004aa3b6
    POP EBX                             ; 004aa3bb
    RET                                 ; 004aa3bc

