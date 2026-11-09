; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveDescription_FUN_0040b350(char *property_description,char *property_name)
;
; Parameters:
; char *           Stack[0x4]:4   property_description
; char *           Stack[0x8]:4   property_name
;
; XREF[9]:
;   core_actor.cpp_archiveClothList_FUN_0040bf20 at 0040bf87
;   core_actor.cpp_archiveFloat_FUN_0040b830 at 0040b863
;   core_actor.cpp_archiveInteger_FUN_0040b8b0 at 0040b8e4
;   core_actor.cpp_archiveLocation_FUN_0040b540 at 0040b580
;   core_actor.cpp_archiveOrientation_FUN_0040b4a0 at 0040b4db
;   core_actor.cpp_archiveQuaternion_FUN_0040b5e0 at 0040b61f
;   core_actor.cpp_archiveRules_FUN_0040c0c0 at 0040c125
;   core_actor.cpp_archiveString_FUN_0040b680 at 0040b734
;   core_actor.cpp_archiveVector_FUN_0040b400 at 0040b43b
;
; Referenced Globals:
;   TerminatedCString s_s_005b5a6b
;   undefined4 DAT_005b5a76
;   undefined4 DAT_007df9b4
;   undefined4 DAT_007df9b8
;   undefined4 DAT_007df9c0
;
; Called Functions:
;   core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0
;   crt_stdio.c_fgetc_FUN_005a32b0
;   crt_unknown.c_FUN_005a3140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040b350
        ;   Label: core_actor.cpp_archiveDescription_FUN_0040b350
    PUSH ESI                            ; 0040b351
    PUSH EDI                            ; 0040b352
    PUSH EBP                            ; 0040b353
    MOV EDI,dword ptr [ESP + 0x14]      ; 0040b354
    MOV ESI,dword ptr [ESP + 0x18]      ; 0040b358
    CMP dword ptr [0x007df9b8],0x1      ; 0040b35c | DAT_007df9b8
    JNZ 0x0040b39a                      ; 0040b363
        ;   XREF to: 0040b39a (CONDITIONAL_JUMP)  ; LAB_0040b39a
    MOV EAX,[0x007df9b4]                ; 0040b365 | DAT_007df9b4
        ;   Label: LAB_0040b365
    PUSH EAX                            ; 0040b36a
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 0040b36b
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005a32b0()
    ADD ESP,0x4                         ; 0040b370
    MOV EBX,EAX                         ; 0040b373
    TEST EAX,EAX                        ; 0040b375
    JL 0x0040b38e                       ; 0040b377
        ;   XREF to: 0040b38e (CONDITIONAL_JUMP)  ; LAB_0040b38e
    CMP EBX,0xa                         ; 0040b379
        ;   Label: LAB_0040b379
    JNZ 0x0040b365                      ; 0040b37c
        ;   XREF to: 0040b365 (CONDITIONAL_JUMP)  ; LAB_0040b365
    MOV EAX,[0x007df9b4]                ; 0040b37e | DAT_007df9b4
    TEST byte ptr [EAX + 0xc],0x20      ; 0040b383
    JNZ 0x0040b3f0                      ; 0040b387
        ;   XREF to: 0040b3f0 (CONDITIONAL_JUMP)  ; LAB_0040b3f0
    POP EBP                             ; 0040b389
    POP EDI                             ; 0040b38a
    POP ESI                             ; 0040b38b
    POP EBX                             ; 0040b38c
    RET                                 ; 0040b38d
    PUSH ESI                            ; 0040b38e
        ;   Label: LAB_0040b38e
    PUSH EDI                            ; 0040b38f
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0 ; 0040b390
        ;   XREF to: 0040b2d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040b395
    JMP 0x0040b379                      ; 0040b398
        ;   XREF to: 0040b379 (UNCONDITIONAL_JUMP)  ; LAB_0040b379
    CMP dword ptr [0x007df9c0],0x0      ; 0040b39a | DAT_007df9c0
        ;   Label: LAB_0040b39a
    JNZ 0x0040b3cc                      ; 0040b3a1
        ;   XREF to: 0040b3cc (CONDITIONAL_JUMP)  ; LAB_0040b3cc
    TEST ESI,ESI                        ; 0040b3a3
    JZ 0x0040b3cc                       ; 0040b3a5
        ;   XREF to: 0040b3cc (CONDITIONAL_JUMP)  ; LAB_0040b3cc
    PUSH ESI                            ; 0040b3a7
    PUSH 0x5b5a6b                       ; 0040b3a8 | = "    // %s\n"
    MOV EBX,dword ptr [0x007df9b4]      ; 0040b3ad | DAT_007df9b4
    PUSH EBX                            ; 0040b3b3
    CALL crt_unknown.c_FUN_005a3140     ; 0040b3b4
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 0040b3b9
    MOV EAX,[0x007df9b4]                ; 0040b3bc | DAT_007df9b4
    TEST byte ptr [EAX + 0xc],0x20      ; 0040b3c1
    JNZ 0x0040b3f0                      ; 0040b3c5
        ;   XREF to: 0040b3f0 (CONDITIONAL_JUMP)  ; LAB_0040b3f0
    POP EBP                             ; 0040b3c7
    POP EDI                             ; 0040b3c8
    POP ESI                             ; 0040b3c9
    POP EBX                             ; 0040b3ca
    RET                                 ; 0040b3cb
    PUSH 0x5b5a76                       ; 0040b3cc | DAT_005b5a76
        ;   Label: LAB_0040b3cc
    MOV EBP,dword ptr [0x007df9b4]      ; 0040b3d1 | DAT_007df9b4
    PUSH EBP                            ; 0040b3d7
    CALL crt_unknown.c_FUN_005a3140     ; 0040b3d8
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x8                         ; 0040b3dd
    MOV EAX,[0x007df9b4]                ; 0040b3e0 | DAT_007df9b4
    TEST byte ptr [EAX + 0xc],0x20      ; 0040b3e5
    JNZ 0x0040b3f0                      ; 0040b3e9
        ;   XREF to: 0040b3f0 (CONDITIONAL_JUMP)  ; LAB_0040b3f0
    POP EBP                             ; 0040b3eb
    POP EDI                             ; 0040b3ec
    POP ESI                             ; 0040b3ed
    POP EBX                             ; 0040b3ee
    RET                                 ; 0040b3ef
    PUSH ESI                            ; 0040b3f0
        ;   Label: LAB_0040b3f0
    PUSH EDI                            ; 0040b3f1
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0 ; 0040b3f2
        ;   XREF to: 0040b2d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040b3f7
    POP EBP                             ; 0040b3fa
    POP EDI                             ; 0040b3fb
    POP ESI                             ; 0040b3fc
    POP EBX                             ; 0040b3fd
    RET                                 ; 0040b3fe

