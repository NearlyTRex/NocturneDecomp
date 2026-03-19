; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_event_cpp_resolveActorByName_FUN_004aa400(char *name,uint class_hash,char *class_name)
;
; Parameters:
; char *           Stack[0x4]:4   name
; uint             Stack[0x8]:4   class_hash
; char *           Stack[0xc]:4   class_name
;
; XREF[3]:
;   core_event.cpp_CEventList_evaluateAtom_FUN_004ae140 at 004af765
;   core_event.cpp_CEventList_executeCommand_FUN_004aacc0 at 004ad941
;   core_event.cpp_parseVectorLocation_FUN_004aa530 at 004aa5ce
;
; Referenced Globals:
;   TerminatedCString s_Must_specify_actor_name_0062444c
;   undefined4 s_ust_specify_actor_name_0062444d
;   undefined4 s_st_specify_actor_name_0062444e
;   undefined4 s_t_specify_actor_name_0062444f
;   TerminatedCString s_anon_00624464
;   TerminatedCString s_Can_t_use_actor_specifie_00624466
;   TerminatedCString s_Actor_s_does_not_exist_00624494
;   TerminatedCString s_Actor_s_is_of_type_s_thi_006244af
;   CDemonActor* g_ActorNameSentinel = 0fffffff
;   CEventList* g_CEventListPtr = 02d05310
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CNetGame* g_CNetGamePtr = 02f7c740
;   CEventList g_CEventListInstance
;   char[256] g_EventErrorMessageBuffer
;   undefined4 g_EventErrorMessageBuffer+1
;   ... and 6 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
;   core_actor.cpp_isOfClassHash_FUN_0040c760
;   core_event.cpp_CEventList_getActorByVarName_FUN_004b0b80
;   core_mission.cpp_CDemonMission_findActorByName_FUN_00524030
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   crt_string.c__stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aa400
        ;   Label: core_event.cpp_resolveActorByName_FUN_004aa400
    PUSH ESI                            ; 004aa401
    PUSH EDI                            ; 004aa402
    PUSH EBP                            ; 004aa403
    MOV EBX,dword ptr [ESP + 0x14]      ; 004aa404
    TEST EBX,EBX                        ; 004aa408
    JZ 0x004aa437                       ; 004aa40a
        ;   XREF to: 004aa437 (CONDITIONAL_JUMP)  ; LAB_004aa437
    MOV AH,byte ptr [EBX]               ; 004aa40c
    TEST AH,AH                          ; 004aa40e
    JZ 0x004aa437                       ; 004aa410
        ;   XREF to: 004aa437 (CONDITIONAL_JUMP)  ; LAB_004aa437
    CMP AH,0x40                         ; 004aa412
    JNZ 0x004aa462                      ; 004aa415
        ;   XREF to: 004aa462 (CONDITIONAL_JUMP)  ; LAB_004aa462
    PUSH EBX                            ; 004aa417
    MOV ESI,dword ptr [0x006793d0]      ; 004aa418 | g_CEventListPtr
    PUSH ESI                            ; 004aa41e | g_CEventListInstance
    CALL core_event.cpp_CEventList_getActorByVarName_FUN_004b0b80 ; 004aa41f
        ;   XREF to: 004b0b80 (UNCONDITIONAL_CALL)  ; CDemonActor * core_event.cpp_CEventList_getActorByVarName_FUN_004b0b80(CEventList * this_ptr, char * name)
    ADD ESP,0x8                         ; 004aa424
    MOV ESI,EAX                         ; 004aa427
    TEST EAX,EAX                        ; 004aa429
    JNZ 0x004aa48f                      ; 004aa42b
        ;   XREF to: 004aa48f (CONDITIONAL_JUMP)  ; LAB_004aa48f
    MOV EAX,[0x0065d95c]                ; 004aa42d | g_ActorNameSentinel
        ;   Label: LAB_004aa42d
    POP EBP                             ; 004aa432
    POP EDI                             ; 004aa433
    POP ESI                             ; 004aa434
    POP EBX                             ; 004aa435
    RET                                 ; 004aa436
    MOV ESI,0x62444c                    ; 004aa437 | = "Must specify actor name"
        ;   Label: LAB_004aa437
    MOV EDI,0x2d0a460                   ; 004aa43c | g_EventErrorMessageBuffer
    PUSH EDI                            ; 004aa441 | g_EventErrorMessageBuffer
    MOV AL,byte ptr [ESI]               ; 004aa442 | = "Must specify actor name" | s_st_specify_actor_name_0062444e
        ;   Label: LAB_004aa442
    MOV byte ptr [EDI],AL               ; 004aa444 | g_EventErrorMessageBuffer | g_EventErrorMessageBuffer+2
    CMP AL,0x0                          ; 004aa446
    JZ 0x004aa45a                       ; 004aa448
        ;   XREF to: 004aa45a (CONDITIONAL_JUMP)  ; LAB_004aa45a
    MOV AL,byte ptr [ESI + 0x1]         ; 004aa44a | s_ust_specify_actor_name_0062444d | s_t_specify_actor_name_0062444f
    ADD ESI,0x2                         ; 004aa44d
    MOV byte ptr [EDI + 0x1],AL         ; 004aa450 | g_EventErrorMessageBuffer+1 | g_EventErrorMessageBuffer+3
    ADD EDI,0x2                         ; 004aa453
    CMP AL,0x0                          ; 004aa456
    JNZ 0x004aa442                      ; 004aa458
        ;   XREF to: 004aa442 (CONDITIONAL_JUMP)  ; LAB_004aa442
    POP EDI                             ; 004aa45a
        ;   Label: LAB_004aa45a
    XOR EAX,EAX                         ; 004aa45b
    POP EBP                             ; 004aa45d
    POP EDI                             ; 004aa45e
    POP ESI                             ; 004aa45f
    POP EBX                             ; 004aa460
    RET                                 ; 004aa461
    PUSH 0x624464                       ; 004aa462 | = "$"
        ;   Label: LAB_004aa462
    PUSH EBX                            ; 004aa467
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004aa468
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004aa46d
    TEST EAX,EAX                        ; 004aa470
    JNZ 0x004aa4cd                      ; 004aa472
        ;   XREF to: 004aa4cd (CONDITIONAL_JUMP)  ; LAB_004aa4cd
    MOV EAX,[0x00680a00]                ; 004aa474 | g_CNetGameInstance | g_CNetGamePtr
    CMP dword ptr [EAX],0x0             ; 004aa479 | g_CNetGameInstance
    JNZ 0x004aa4b4                      ; 004aa47c
        ;   XREF to: 004aa4b4 (CONDITIONAL_JUMP)  ; LAB_004aa4b4
    MOV ESI,dword ptr [0x02db87d0]      ; 004aa47e | g_LocalHeroIndex
    MOV ESI,dword ptr [ESI*0x4 + 0x2db87c0] ; 004aa484 | g_HeroActors
    TEST ESI,ESI                        ; 004aa48b
    JZ 0x004aa42d                       ; 004aa48d
        ;   XREF to: 004aa42d (CONDITIONAL_JUMP)  ; LAB_004aa42d
    MOV EDI,dword ptr [ESP + 0x18]      ; 004aa48f
        ;   Label: LAB_004aa48f
    PUSH EDI                            ; 004aa493
    PUSH ESI                            ; 004aa494
    CALL core_actor.cpp_isOfClassHash_FUN_0040c760 ; 004aa495
        ;   XREF to: 0040c760 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClassHash_FUN_0040c760(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004aa49a
    TEST EAX,EAX                        ; 004aa49d
    JNZ 0x004aa526                      ; 004aa49f
        ;   XREF to: 004aa526 (CONDITIONAL_JUMP)  ; LAB_004aa526
    CMP byte ptr [EBX],0x40             ; 004aa4a5
    JNZ 0x004aa4fd                      ; 004aa4a8
        ;   XREF to: 004aa4fd (CONDITIONAL_JUMP)  ; LAB_004aa4fd
    MOV EAX,[0x0065d95c]                ; 004aa4aa | g_ActorNameSentinel
    POP EBP                             ; 004aa4af
    POP EDI                             ; 004aa4b0
    POP ESI                             ; 004aa4b1
    POP EBX                             ; 004aa4b2
    RET                                 ; 004aa4b3
    PUSH 0x624466                       ; 004aa4b4 | = "Can't use '$' actor specifier in mult..."
        ;   Label: LAB_004aa4b4
    PUSH 0x2d0a460                      ; 004aa4b9 | g_EventErrorMessageBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004aa4be
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 004aa4c3
    XOR EAX,EAX                         ; 004aa4c6
    POP EBP                             ; 004aa4c8
    POP EDI                             ; 004aa4c9
    POP ESI                             ; 004aa4ca
    POP EBX                             ; 004aa4cb
    RET                                 ; 004aa4cc
    PUSH EBX                            ; 004aa4cd
        ;   Label: LAB_004aa4cd
    MOV EDX,dword ptr [0x0067d550]      ; 004aa4ce | g_CDemonMissionInstance | g_CDemonMissionPtr
    PUSH EDX                            ; 004aa4d4 | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_findActorByName_FUN_00524030 ; 004aa4d5
        ;   XREF to: 00524030 (UNCONDITIONAL_CALL)  ; CDemonActor * core_mission.cpp_CDemonMission_findActorByName_FUN_00524030(CDemonMission * this_ptr, char * name)
    ADD ESP,0x8                         ; 004aa4da
    MOV ESI,EAX                         ; 004aa4dd
    TEST EAX,EAX                        ; 004aa4df
    JNZ 0x004aa48f                      ; 004aa4e1
        ;   XREF to: 004aa48f (CONDITIONAL_JUMP)  ; LAB_004aa48f
    PUSH EBX                            ; 004aa4e3
    PUSH 0x624494                       ; 004aa4e4 | = "Actor \"%s\" does not exist."
    PUSH 0x2d0a460                      ; 004aa4e9 | g_EventErrorMessageBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004aa4ee
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
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
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90 ; 004aa503
        ;   XREF to: 00408b90 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004aa508
    PUSH EAX                            ; 004aa50b
    PUSH EBX                            ; 004aa50c
    PUSH 0x6244af                       ; 004aa50d | = "Actor \"%s\" is of type %s, this comm..."
    PUSH 0x2d0a460                      ; 004aa512 | g_EventErrorMessageBuffer
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004aa517
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
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

