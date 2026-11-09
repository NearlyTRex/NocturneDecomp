; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_parseDamageType_FUN_00489270(char *type_name,int *out_type_id)
;
; Parameters:
; char *           Stack[0x4]:4   type_name
; int *            Stack[0x8]:4   out_type_id
;
; XREF[1]:
;   core_event.cpp_FUN_00489670 at 0048b73d
;
; Referenced Globals:
;   TerminatedCString s_generic_005d2fc5
;   TerminatedCString s_bullet_005d2fcd
;   undefined4 DAT_005d2fd4
;   TerminatedCString s_Blade_005d2fd9
;   TerminatedCString s_Stake_005d2fdf
;   undefined4 DAT_005d2fe5
;   TerminatedCString s_electrocute_005d2fe9
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00489270
        ;   Label: core_event.cpp_parseDamageType_FUN_00489270
    PUSH ESI                            ; 00489271
    MOV ESI,dword ptr [ESP + 0xc]       ; 00489272
    MOV EBX,dword ptr [ESP + 0x10]      ; 00489276
    PUSH 0x5d2fc5                       ; 0048927a | = "generic"
    PUSH ESI                            ; 0048927f
    CALL crt_string.c__stricmp_FUN_005b8130 ; 00489280
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 00489285
    TEST EAX,EAX                        ; 00489288
    JNZ 0x0048929a                      ; 0048928a
        ;   XREF to: 0048929a (CONDITIONAL_JUMP)  ; LAB_0048929a
    MOV dword ptr [EBX],0x64            ; 0048928c
    MOV EAX,0x1                         ; 00489292
    POP ESI                             ; 00489297
    POP EBX                             ; 00489298
    RET                                 ; 00489299
    PUSH 0x5d2fcd                       ; 0048929a | = "bullet"
        ;   Label: LAB_0048929a
    PUSH ESI                            ; 0048929f
    CALL crt_string.c__stricmp_FUN_005b8130 ; 004892a0
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 004892a5
    TEST EAX,EAX                        ; 004892a8
    JNZ 0x004892ba                      ; 004892aa
        ;   XREF to: 004892ba (CONDITIONAL_JUMP)  ; LAB_004892ba
    MOV dword ptr [EBX],0x65            ; 004892ac
    MOV EAX,0x1                         ; 004892b2
    POP ESI                             ; 004892b7
    POP EBX                             ; 004892b8
    RET                                 ; 004892b9
    PUSH 0x5d2fd4                       ; 004892ba | DAT_005d2fd4
        ;   Label: LAB_004892ba
    PUSH ESI                            ; 004892bf
    CALL crt_string.c__stricmp_FUN_005b8130 ; 004892c0
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 004892c5
    TEST EAX,EAX                        ; 004892c8
    JNZ 0x004892da                      ; 004892ca
        ;   XREF to: 004892da (CONDITIONAL_JUMP)  ; LAB_004892da
    MOV dword ptr [EBX],0x66            ; 004892cc
    MOV EAX,0x1                         ; 004892d2
    POP ESI                             ; 004892d7
    POP EBX                             ; 004892d8
    RET                                 ; 004892d9
    PUSH 0x5d2fd9                       ; 004892da | = "Blade"
        ;   Label: LAB_004892da
    PUSH ESI                            ; 004892df
    CALL crt_string.c__stricmp_FUN_005b8130 ; 004892e0
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 004892e5
    TEST EAX,EAX                        ; 004892e8
    JNZ 0x004892fa                      ; 004892ea
        ;   XREF to: 004892fa (CONDITIONAL_JUMP)  ; LAB_004892fa
    MOV dword ptr [EBX],0x67            ; 004892ec
    MOV EAX,0x1                         ; 004892f2
    POP ESI                             ; 004892f7
    POP EBX                             ; 004892f8
    RET                                 ; 004892f9
    PUSH 0x5d2fdf                       ; 004892fa | = "Stake"
        ;   Label: LAB_004892fa
    PUSH ESI                            ; 004892ff
    CALL crt_string.c__stricmp_FUN_005b8130 ; 00489300
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 00489305
    TEST EAX,EAX                        ; 00489308
    JNZ 0x0048931a                      ; 0048930a
        ;   XREF to: 0048931a (CONDITIONAL_JUMP)  ; LAB_0048931a
    MOV dword ptr [EBX],0x68            ; 0048930c
    MOV EAX,0x1                         ; 00489312
    POP ESI                             ; 00489317
    POP EBX                             ; 00489318
    RET                                 ; 00489319
    PUSH 0x5d2fe5                       ; 0048931a | DAT_005d2fe5
        ;   Label: LAB_0048931a
    PUSH ESI                            ; 0048931f
    CALL crt_string.c__stricmp_FUN_005b8130 ; 00489320
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 00489325
    TEST EAX,EAX                        ; 00489328
    JNZ 0x0048933a                      ; 0048932a
        ;   XREF to: 0048933a (CONDITIONAL_JUMP)  ; LAB_0048933a
    MOV dword ptr [EBX],0x69            ; 0048932c
    MOV EAX,0x1                         ; 00489332
    POP ESI                             ; 00489337
    POP EBX                             ; 00489338
    RET                                 ; 00489339
    PUSH 0x5d2fe9                       ; 0048933a | = "electrocute"
        ;   Label: LAB_0048933a
    PUSH ESI                            ; 0048933f
    CALL crt_string.c__stricmp_FUN_005b8130 ; 00489340
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 00489345
    TEST EAX,EAX                        ; 00489348
    JNZ 0x0048935a                      ; 0048934a
        ;   XREF to: 0048935a (CONDITIONAL_JUMP)  ; LAB_0048935a
    MOV dword ptr [EBX],0x6a            ; 0048934c
    MOV EAX,0x1                         ; 00489352
    POP ESI                             ; 00489357
    POP EBX                             ; 00489358
    RET                                 ; 00489359
    XOR EAX,EAX                         ; 0048935a
        ;   Label: LAB_0048935a
    POP ESI                             ; 0048935c
    POP EBX                             ; 0048935d
    RET                                 ; 0048935e

