; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveDescription_FUN_0040b400(char *property_description,char *property_name)
;
; Parameters:
; char *           Stack[0x4]:4   property_description
; char *           Stack[0x8]:4   property_name
;
; XREF[9]:
;   core_actor.cpp_archiveClothList_FUN_0040bfd0 at 0040c037
;   core_actor.cpp_archiveFloat_FUN_0040b8e0 at 0040b913
;   core_actor.cpp_archiveInteger_FUN_0040b960 at 0040b994
;   core_actor.cpp_archiveLocation_FUN_0040b5f0 at 0040b630
;   core_actor.cpp_archiveOrientation_FUN_0040b550 at 0040b58b
;   core_actor.cpp_archiveQuaternion_FUN_0040b690 at 0040b6cf
;   core_actor.cpp_archiveRules_FUN_0040c170 at 0040c1d5
;   core_actor.cpp_archiveString_FUN_0040b730 at 0040b7e4
;   core_actor.cpp_archiveVector_FUN_0040b4b0 at 0040b4eb
;
; Referenced Globals:
;   TerminatedCString s_s_005caabc
;   undefined4 DAT_005caac7
;   undefined4 DAT_007bc034
;   undefined4 DAT_007bc038
;   undefined4 DAT_007bc040
;
; Called Functions:
;   core_actor.cpp_handleActorPropertyParseError_FUN_0040b380
;   crt_stdio.c_fgetc_FUN_005b8180
;   crt_unknown.c_FUN_005b8010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040b400
        ;   Label: core_actor.cpp_archiveDescription_FUN_0040b400
    PUSH ESI                            ; 0040b401
    PUSH EDI                            ; 0040b402
    PUSH EBP                            ; 0040b403
    MOV EDI,dword ptr [ESP + 0x14]      ; 0040b404
    MOV ESI,dword ptr [ESP + 0x18]      ; 0040b408
    CMP dword ptr [0x007bc038],0x1      ; 0040b40c | DAT_007bc038
    JNZ 0x0040b44a                      ; 0040b413
        ;   XREF to: 0040b44a (CONDITIONAL_JUMP)  ; LAB_0040b44a
    MOV EAX,[0x007bc034]                ; 0040b415 | DAT_007bc034
        ;   Label: LAB_0040b415
    PUSH EAX                            ; 0040b41a
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 0040b41b
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005b8180()
    ADD ESP,0x4                         ; 0040b420
    MOV EBX,EAX                         ; 0040b423
    TEST EAX,EAX                        ; 0040b425
    JL 0x0040b43e                       ; 0040b427
        ;   XREF to: 0040b43e (CONDITIONAL_JUMP)  ; LAB_0040b43e
    CMP EBX,0xa                         ; 0040b429
        ;   Label: LAB_0040b429
    JNZ 0x0040b415                      ; 0040b42c
        ;   XREF to: 0040b415 (CONDITIONAL_JUMP)  ; LAB_0040b415
    MOV EAX,[0x007bc034]                ; 0040b42e | DAT_007bc034
    TEST byte ptr [EAX + 0xc],0x20      ; 0040b433
    JNZ 0x0040b4a0                      ; 0040b437
        ;   XREF to: 0040b4a0 (CONDITIONAL_JUMP)  ; LAB_0040b4a0
    POP EBP                             ; 0040b439
    POP EDI                             ; 0040b43a
    POP ESI                             ; 0040b43b
    POP EBX                             ; 0040b43c
    RET                                 ; 0040b43d
    PUSH ESI                            ; 0040b43e
        ;   Label: LAB_0040b43e
    PUSH EDI                            ; 0040b43f
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b380 ; 0040b440
        ;   XREF to: 0040b380 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b380(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040b445
    JMP 0x0040b429                      ; 0040b448
        ;   XREF to: 0040b429 (UNCONDITIONAL_JUMP)  ; LAB_0040b429
    CMP dword ptr [0x007bc040],0x0      ; 0040b44a | DAT_007bc040
        ;   Label: LAB_0040b44a
    JNZ 0x0040b47c                      ; 0040b451
        ;   XREF to: 0040b47c (CONDITIONAL_JUMP)  ; LAB_0040b47c
    TEST ESI,ESI                        ; 0040b453
    JZ 0x0040b47c                       ; 0040b455
        ;   XREF to: 0040b47c (CONDITIONAL_JUMP)  ; LAB_0040b47c
    PUSH ESI                            ; 0040b457
    PUSH 0x5caabc                       ; 0040b458 | = "    // %s\n"
    MOV EBX,dword ptr [0x007bc034]      ; 0040b45d | DAT_007bc034
    PUSH EBX                            ; 0040b463
    CALL crt_unknown.c_FUN_005b8010     ; 0040b464
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0xc                         ; 0040b469
    MOV EAX,[0x007bc034]                ; 0040b46c | DAT_007bc034
    TEST byte ptr [EAX + 0xc],0x20      ; 0040b471
    JNZ 0x0040b4a0                      ; 0040b475
        ;   XREF to: 0040b4a0 (CONDITIONAL_JUMP)  ; LAB_0040b4a0
    POP EBP                             ; 0040b477
    POP EDI                             ; 0040b478
    POP ESI                             ; 0040b479
    POP EBX                             ; 0040b47a
    RET                                 ; 0040b47b
    PUSH 0x5caac7                       ; 0040b47c | DAT_005caac7
        ;   Label: LAB_0040b47c
    MOV EBP,dword ptr [0x007bc034]      ; 0040b481 | DAT_007bc034
    PUSH EBP                            ; 0040b487
    CALL crt_unknown.c_FUN_005b8010     ; 0040b488
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x8                         ; 0040b48d
    MOV EAX,[0x007bc034]                ; 0040b490 | DAT_007bc034
    TEST byte ptr [EAX + 0xc],0x20      ; 0040b495
    JNZ 0x0040b4a0                      ; 0040b499
        ;   XREF to: 0040b4a0 (CONDITIONAL_JUMP)  ; LAB_0040b4a0
    POP EBP                             ; 0040b49b
    POP EDI                             ; 0040b49c
    POP ESI                             ; 0040b49d
    POP EBX                             ; 0040b49e
    RET                                 ; 0040b49f
    PUSH ESI                            ; 0040b4a0
        ;   Label: LAB_0040b4a0
    PUSH EDI                            ; 0040b4a1
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b380 ; 0040b4a2
        ;   XREF to: 0040b380 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b380(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040b4a7
    POP EBP                             ; 0040b4aa
    POP EDI                             ; 0040b4ab
    POP ESI                             ; 0040b4ac
    POP EBX                             ; 0040b4ad
    RET                                 ; 0040b4ae

