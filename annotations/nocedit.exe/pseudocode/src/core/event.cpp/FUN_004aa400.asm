; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_event.cpp_FUN_004aa400()
;
;
; XREF[3]:
;   core_event.cpp_CEventList_FUN_004aacc0 at 004ad941
;   core_event.cpp_CEventList_FUN_004ae140 at 004af765
;   core_event.cpp_FUN_004aa530 at 004aa5ce
;
; Referenced Globals:
;   TerminatedCString s_Must_specify_actor_name_0062444c
;   undefined4 s_ust_specify_actor_name_0062444d
;   undefined4 s_t_specify_actor_name_0062444f
;   TerminatedCString s_anon_00624464
;   TerminatedCString s_Can_t_use_actor_specifie_00624466
;   TerminatedCString s_Actor_s_does_not_exist_00624494
;   TerminatedCString s_Actor_s_is_of_type_s_thi_006244af
;   undefined4 DAT_0065d95c
;   CEventList* g_CEventListPtr = 02d05310
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CNetGame* g_CNetGameInstance = 02f7c740
;   CEventList g_CEventListInstance
;   undefined1 DAT_02d0a460
;   undefined1 DAT_02d0a461
;   undefined1 DAT_02d0a462
;   ... and 5 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
;   core_actor.cpp_isOfClassHash_FUN_0040c760
;   core_event.cpp_CEventList_FUN_004b0b80
;   core_mission.cpp_CDemonMission_FUN_00524030
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   crt_string.c_stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aa400
        ;   Label: core_event.cpp_FUN_004aa400
    PUSH ESI                            ; 004aa401
    PUSH EDI                            ; 004aa402
    PUSH EBP                            ; 004aa403
    MOV EBX,dword ptr [ESP + 0x14]      ; 004aa404
    TEST EBX,EBX                        ; 004aa408
    JZ 0x004aa437                       ; 004aa40a | LAB_004aa437
        ;   XREF to: 004aa437 (CONDITIONAL_JUMP)
    MOV AH,byte ptr [EBX]               ; 004aa40c
    TEST AH,AH                          ; 004aa40e
    JZ 0x004aa437                       ; 004aa410 | LAB_004aa437
        ;   XREF to: 004aa437 (CONDITIONAL_JUMP)
    CMP AH,0x40                         ; 004aa412
    JNZ 0x004aa462                      ; 004aa415 | LAB_004aa462
        ;   XREF to: 004aa462 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 004aa417
    MOV ESI,dword ptr [0x006793d0]      ; 004aa418 | CEventList * g_CEventListPtr
    PUSH ESI                            ; 004aa41e | CEventList g_CEventListInstance
    CALL core_event.cpp_CEventList_FUN_004b0b80 ; 004aa41f | int core_event.cpp_CEventList_FUN_004b0b80(CEventList * this_ptr)
        ;   XREF to: 004b0b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004aa424
    MOV ESI,EAX                         ; 004aa427
    TEST EAX,EAX                        ; 004aa429
    JNZ 0x004aa48f                      ; 004aa42b | LAB_004aa48f
        ;   XREF to: 004aa48f (CONDITIONAL_JUMP)
    MOV EAX,[0x0065d95c]                ; 004aa42d | undefined4 DAT_0065d95c
        ;   Label: LAB_004aa42d
    POP EBP                             ; 004aa432
    POP EDI                             ; 004aa433
    POP ESI                             ; 004aa434
    POP EBX                             ; 004aa435
    RET                                 ; 004aa436
    MOV ESI,0x62444c                    ; 004aa437 | = "Must specify actor name" | s_Must_specify_actor_name_0062444c = Must specify actor name
        ;   Label: LAB_004aa437
    MOV EDI,0x2d0a460                   ; 004aa43c | undefined1 DAT_02d0a460
    PUSH EDI                            ; 004aa441 | undefined1 DAT_02d0a460
    MOV AL,byte ptr [ESI]               ; 004aa442 | = "Must specify actor name" | s_Must_specify_actor_name_0062444c = Must specify actor name
        ;   Label: LAB_004aa442
    MOV byte ptr [EDI],AL               ; 004aa444 | undefined1 DAT_02d0a460 | DAT_02d0a462
    CMP AL,0x0                          ; 004aa446
    JZ 0x004aa45a                       ; 004aa448 | LAB_004aa45a
        ;   XREF to: 004aa45a (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 004aa44a | s_ust_specify_actor_name_0062444d
    ADD ESI,0x2                         ; 004aa44d
    MOV byte ptr [EDI + 0x1],AL         ; 004aa450 | undefined1 DAT_02d0a461 | DAT_02d0a463
    ADD EDI,0x2                         ; 004aa453
    CMP AL,0x0                          ; 004aa456
    JNZ 0x004aa442                      ; 004aa458 | LAB_004aa442
        ;   XREF to: 004aa442 (CONDITIONAL_JUMP)
    POP EDI                             ; 004aa45a
        ;   Label: LAB_004aa45a
    XOR EAX,EAX                         ; 004aa45b
    POP EBP                             ; 004aa45d
    POP EDI                             ; 004aa45e
    POP ESI                             ; 004aa45f
    POP EBX                             ; 004aa460
    RET                                 ; 004aa461
    PUSH 0x624464                       ; 004aa462 | = "$" | s_anon_00624464 = $
        ;   Label: LAB_004aa462
    PUSH EBX                            ; 004aa467
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004aa468 | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004aa46d
    TEST EAX,EAX                        ; 004aa470
    JNZ 0x004aa4cd                      ; 004aa472 | LAB_004aa4cd
        ;   XREF to: 004aa4cd (CONDITIONAL_JUMP)
    MOV EAX,[0x00680a00]                ; 004aa474 | undefined4 DAT_02f7c740 | CNetGame * g_CNetGameInstance
    CMP dword ptr [EAX],0x0             ; 004aa479 | undefined4 DAT_02f7c740
    JNZ 0x004aa4b4                      ; 004aa47c | LAB_004aa4b4
        ;   XREF to: 004aa4b4 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [0x02db87d0]      ; 004aa47e | int g_LocalHeroIndex
    MOV ESI,dword ptr [ESI*0x4 + 0x2db87c0] ; 004aa484 | CHero *[4] g_HeroActors
    TEST ESI,ESI                        ; 004aa48b
    JZ 0x004aa42d                       ; 004aa48d | LAB_004aa42d
        ;   XREF to: 004aa42d (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESP + 0x18]      ; 004aa48f
        ;   Label: LAB_004aa48f
    PUSH EDI                            ; 004aa493
    PUSH ESI                            ; 004aa494
    CALL core_actor.cpp_isOfClassHash_FUN_0040c760 ; 004aa495 | int core_actor.cpp_isOfClassHash_FUN_0040c760(CDemonActor * actor_ptr, uint class_name_hash)
        ;   XREF to: 0040c760 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004aa49a
    TEST EAX,EAX                        ; 004aa49d
    JNZ 0x004aa526                      ; 004aa49f | LAB_004aa526
        ;   XREF to: 004aa526 (CONDITIONAL_JUMP)
    CMP byte ptr [EBX],0x40             ; 004aa4a5
    JNZ 0x004aa4fd                      ; 004aa4a8 | LAB_004aa4fd
        ;   XREF to: 004aa4fd (CONDITIONAL_JUMP)
    MOV EAX,[0x0065d95c]                ; 004aa4aa | undefined4 DAT_0065d95c
    POP EBP                             ; 004aa4af
    POP EDI                             ; 004aa4b0
    POP ESI                             ; 004aa4b1
    POP EBX                             ; 004aa4b2
    RET                                 ; 004aa4b3
    PUSH 0x624466                       ; 004aa4b4 | = "Can't use '$' actor specifier in mult..." | s_Can_t_use_actor_specifie_00624466 = Can't use '$' actor specifier in multi-player
        ;   Label: LAB_004aa4b4
    PUSH 0x2d0a460                      ; 004aa4b9 | undefined1 DAT_02d0a460
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004aa4be | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004aa4c3
    XOR EAX,EAX                         ; 004aa4c6
    POP EBP                             ; 004aa4c8
    POP EDI                             ; 004aa4c9
    POP ESI                             ; 004aa4ca
    POP EBX                             ; 004aa4cb
    RET                                 ; 004aa4cc
    PUSH EBX                            ; 004aa4cd
        ;   Label: LAB_004aa4cd
    MOV EDX,dword ptr [0x0067d550]      ; 004aa4ce | CDemonMission g_CDemonMissionInstance | CDemonMission * g_CDemonMissionPtr
    PUSH EDX                            ; 004aa4d4 | CDemonMission g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_FUN_00524030 ; 004aa4d5 | char * core_mission.cpp_CDemonMission_FUN_00524030(CDemonMission * this_ptr)
        ;   XREF to: 00524030 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004aa4da
    MOV ESI,EAX                         ; 004aa4dd
    TEST EAX,EAX                        ; 004aa4df
    JNZ 0x004aa48f                      ; 004aa4e1 | LAB_004aa48f
        ;   XREF to: 004aa48f (CONDITIONAL_JUMP)
    PUSH EBX                            ; 004aa4e3
    PUSH 0x624494                       ; 004aa4e4 | = "Actor \"%s\" does not exist." | s_Actor_s_does_not_exist_00624494 = Actor "%s" does not exist.
    PUSH 0x2d0a460                      ; 004aa4e9 | undefined1 DAT_02d0a460
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004aa4ee | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004aa4f3
    XOR EAX,EAX                         ; 004aa4f6
    POP EBP                             ; 004aa4f8
    POP EDI                             ; 004aa4f9
    POP ESI                             ; 004aa4fa
    POP EBX                             ; 004aa4fb
    RET                                 ; 004aa4fc
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004aa4fd
        ;   Label: LAB_004aa4fd
    PUSH EBP                            ; 004aa501
    PUSH ESI                            ; 004aa502
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90 ; 004aa503 | char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90(CDemonActor * this_ptr)
        ;   XREF to: 00408b90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004aa508
    PUSH EAX                            ; 004aa50b
    PUSH EBX                            ; 004aa50c
    PUSH 0x6244af                       ; 004aa50d | = "Actor \"%s\" is of type %s, this comm..." | s_Actor_s_is_of_type_s_thi_006244af = Actor "%s" is of type %s, this command requires an actor of type %s.
    PUSH 0x2d0a460                      ; 004aa512 | undefined1 DAT_02d0a460
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004aa517 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004aa51c
    XOR EAX,EAX                         ; 004aa51f
    POP EBP                             ; 004aa521
    POP EDI                             ; 004aa522
    POP ESI                             ; 004aa523
    POP EBX                             ; 004aa524
    RET                                 ; 004aa525
    MOV EAX,ESI                         ; 004aa526
        ;   Label: LAB_004aa526
    POP EBP                             ; 004aa528
    POP EDI                             ; 004aa529
    POP ESI                             ; 004aa52a
    POP EBX                             ; 004aa52b
    RET                                 ; 004aa52c

