; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_script_cpp_getActor_FUN_005594e0(char *actor_specifier,uint expected_class_hash,CDemonActorType *expected_class)
;
; Parameters:
; char *           Stack[0x4]:4   actor_specifier
; uint             Stack[0x8]:4   expected_class_hash
; CDemonActorType * Stack[0xc]:4   expected_class
;
; XREF[3]:
;   core_script.cpp_CCmdParse_getCharacterByParamIndex_FUN_005627f0 at 0056284e
;   core_script.cpp_CScript_getDialogDuration_FUN_0055ff00 at 0055ff3e
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055bc6f
;
; Referenced Globals:
;   TerminatedCString s_Must_specify_actor_name_00641566
;   undefined4 s_ust_specify_actor_name_00641567
;   undefined4 s_st_specify_actor_name_00641568
;   undefined4 s_t_specify_actor_name_00641569
;   TerminatedCString s_Actor_variable_s_not_def_0064157e
;   TerminatedCString s_anon_006415c4
;   TerminatedCString s_Can_t_use_actor_specifie_006415c6
;   TerminatedCString s_Hero_doesn_t_exist_006415f4
;   TerminatedCString s_Actor_s_does_not_exist_0064160b
;   TerminatedCString s_Actor_s_is_of_type_s_thi_00641626
;   CEventList* g_CEventListPtr = 02d05310
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CNetGame* g_CNetGamePtr = 02f7c740
;   CEventList g_CEventListInstance
;   CHero*[4] g_HeroActors
;   ... and 8 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
;   core_actor.cpp_isOfClassHash_FUN_0040c760
;   core_event.cpp_CEventList_getActorByVarName_FUN_004b0b80
;   core_mission.cpp_CDemonMission_findActorByName_FUN_00524030
;   core_script.cpp_validateActorVariableName_FUN_00559220
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   crt_string.c__stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005594e0
        ;   Label: core_script.cpp_getActor_FUN_005594e0
    PUSH ESI                            ; 005594e1
    PUSH EDI                            ; 005594e2
    PUSH EBP                            ; 005594e3
    MOV EBX,dword ptr [ESP + 0x14]      ; 005594e4
    XOR EDX,EDX                         ; 005594e8
    MOV dword ptr [0x0310f4ac],EDX      ; 005594ea | g_ActorLookedUpByVariable
    TEST EBX,EBX                        ; 005594f0
    JZ 0x00559515                       ; 005594f2
        ;   XREF to: 00559515 (CONDITIONAL_JUMP)  ; LAB_00559515
    MOV AH,byte ptr [EBX]               ; 005594f4
    TEST AH,AH                          ; 005594f6
    JZ 0x00559515                       ; 005594f8
        ;   XREF to: 00559515 (CONDITIONAL_JUMP)  ; LAB_00559515
    CMP AH,0x40                         ; 005594fa
    JNZ 0x00559597                      ; 005594fd
        ;   XREF to: 00559597 (CONDITIONAL_JUMP)  ; LAB_00559597
    PUSH EBX                            ; 00559503
    CALL core_script.cpp_validateActorVariableName_FUN_00559220 ; 00559504
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; int core_script.cpp_validateActorVariableName_FUN_00559220(char * variable_name)
    ADD ESP,0x4                         ; 00559509
    TEST EAX,EAX                        ; 0055950c
    JNZ 0x00559540                      ; 0055950e
        ;   XREF to: 00559540 (CONDITIONAL_JUMP)  ; LAB_00559540
    POP EBP                             ; 00559510
    POP EDI                             ; 00559511
    POP ESI                             ; 00559512
    POP EBX                             ; 00559513
    RET                                 ; 00559514
    MOV ESI,0x641566                    ; 00559515 | = "Must specify actor name"
        ;   Label: LAB_00559515
    MOV EDI,0x310eca0                   ; 0055951a | g_ScriptErrorBuffer
    PUSH EDI                            ; 0055951f | g_ScriptErrorBuffer
    MOV AL,byte ptr [ESI]               ; 00559520 | = "Must specify actor name" | s_st_specify_actor_name_00641568
        ;   Label: LAB_00559520
    MOV byte ptr [EDI],AL               ; 00559522 | g_ScriptErrorBuffer | g_ScriptErrorBuffer+2
    CMP AL,0x0                          ; 00559524
    JZ 0x00559538                       ; 00559526
        ;   XREF to: 00559538 (CONDITIONAL_JUMP)  ; LAB_00559538
    MOV AL,byte ptr [ESI + 0x1]         ; 00559528 | s_ust_specify_actor_name_00641567 | s_t_specify_actor_name_00641569
    ADD ESI,0x2                         ; 0055952b
    MOV byte ptr [EDI + 0x1],AL         ; 0055952e | g_ScriptErrorBuffer+1 | g_ScriptErrorBuffer+3
    ADD EDI,0x2                         ; 00559531
    CMP AL,0x0                          ; 00559534
    JNZ 0x00559520                      ; 00559536
        ;   XREF to: 00559520 (CONDITIONAL_JUMP)  ; LAB_00559520
    POP EDI                             ; 00559538
        ;   Label: LAB_00559538
    XOR EAX,EAX                         ; 00559539
    POP EBP                             ; 0055953b
    POP EDI                             ; 0055953c
    POP ESI                             ; 0055953d
    POP EBX                             ; 0055953e
    RET                                 ; 0055953f
    PUSH EBX                            ; 00559540
        ;   Label: LAB_00559540
    MOV EAX,[0x006793d0]                ; 00559541 | g_CEventListInstance | g_CEventListPtr
    MOV EBP,0x1                         ; 00559546
    PUSH EAX                            ; 0055954b | g_CEventListInstance
    MOV dword ptr [0x0310f4ac],EBP      ; 0055954c | g_ActorLookedUpByVariable
    CALL core_event.cpp_CEventList_getActorByVarName_FUN_004b0b80 ; 00559552
        ;   XREF to: 004b0b80 (UNCONDITIONAL_CALL)  ; CDemonActor * core_event.cpp_CEventList_getActorByVarName_FUN_004b0b80(CEventList * this_ptr, char * name)
    ADD ESP,0x8                         ; 00559557
    MOV ESI,EAX                         ; 0055955a
    TEST EAX,EAX                        ; 0055955c
    JZ 0x0055957d                       ; 0055955e
        ;   XREF to: 0055957d (CONDITIONAL_JUMP)  ; LAB_0055957d
    MOV EDX,dword ptr [ESP + 0x18]      ; 00559560
        ;   Label: LAB_00559560
    PUSH EDX                            ; 00559564
    PUSH ESI                            ; 00559565
    CALL core_actor.cpp_isOfClassHash_FUN_0040c760 ; 00559566
        ;   XREF to: 0040c760 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClassHash_FUN_0040c760(CDemonActor * actor_ptr, uint class_name_hash) | g_CNetGameInstance
    ADD ESP,0x8                         ; 0055956b
    TEST EAX,EAX                        ; 0055956e
    JZ 0x00559635                       ; 00559570
        ;   XREF to: 00559635 (CONDITIONAL_JUMP)  ; LAB_00559635
    MOV EAX,ESI                         ; 00559576
    POP EBP                             ; 00559578
    POP EDI                             ; 00559579
    POP ESI                             ; 0055957a
    POP EBX                             ; 0055957b
    RET                                 ; 0055957c
    PUSH EBX                            ; 0055957d
        ;   Label: LAB_0055957d
    PUSH 0x64157e                       ; 0055957e | = "Actor variable %s not defined, or doe..."
    PUSH 0x310eca0                      ; 00559583 | g_ScriptErrorBuffer
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00559588
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0055958d
    XOR EAX,EAX                         ; 00559590
    POP EBP                             ; 00559592
    POP EDI                             ; 00559593
    POP ESI                             ; 00559594
    POP EBX                             ; 00559595
    RET                                 ; 00559596
    PUSH 0x6415c4                       ; 00559597 | = "$"
        ;   Label: LAB_00559597
    PUSH EBX                            ; 0055959c
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 0055959d
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005595a2
    TEST EAX,EAX                        ; 005595a5
    JNZ 0x00559601                      ; 005595a7
        ;   XREF to: 00559601 (CONDITIONAL_JUMP)  ; LAB_00559601
    MOV EAX,[0x00680a00]                ; 005595a9 | g_CNetGameInstance | g_CNetGamePtr
    CMP dword ptr [EAX],0x0             ; 005595ae | g_CNetGameInstance
    JNZ 0x005595e8                      ; 005595b1
        ;   XREF to: 005595e8 (CONDITIONAL_JUMP)  ; LAB_005595e8
    MOV ESI,dword ptr [0x02db87d0]      ; 005595b3 | g_LocalHeroIndex
    MOV ESI,dword ptr [ESI*0x4 + 0x2db87c0] ; 005595b9 | g_HeroActors
    TEST ESI,ESI                        ; 005595c0
    JNZ 0x00559560                      ; 005595c2
        ;   XREF to: 00559560 (CONDITIONAL_JUMP)  ; LAB_00559560
    PUSH 0x6415f4                       ; 005595c4 | = "Hero doesn't exist!!?!"
    MOV EDI,0x1                         ; 005595c9
    PUSH 0x310eca0                      ; 005595ce | g_ScriptErrorBuffer
    MOV dword ptr [0x0310f4ac],EDI      ; 005595d3 | g_ActorLookedUpByVariable
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005595d9
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 005595de
    XOR EAX,EAX                         ; 005595e1
    POP EBP                             ; 005595e3
    POP EDI                             ; 005595e4
    POP ESI                             ; 005595e5
    POP EBX                             ; 005595e6
    RET                                 ; 005595e7
    PUSH 0x6415c6                       ; 005595e8 | = "Can't use '$' actor specifier in mult..."
        ;   Label: LAB_005595e8
    PUSH 0x310eca0                      ; 005595ed | g_ScriptErrorBuffer
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005595f2
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 005595f7
    XOR EAX,EAX                         ; 005595fa
    POP EBP                             ; 005595fc
    POP EDI                             ; 005595fd
    POP ESI                             ; 005595fe
    POP EBX                             ; 005595ff
    RET                                 ; 00559600
    PUSH EBX                            ; 00559601
        ;   Label: LAB_00559601
    MOV ECX,dword ptr [0x0067d550]      ; 00559602 | g_CDemonMissionInstance | g_CDemonMissionPtr
    PUSH ECX                            ; 00559608 | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_findActorByName_FUN_00524030 ; 00559609
        ;   XREF to: 00524030 (UNCONDITIONAL_CALL)  ; CDemonActor * core_mission.cpp_CDemonMission_findActorByName_FUN_00524030(CDemonMission * this_ptr, char * name)
    ADD ESP,0x8                         ; 0055960e
    MOV ESI,EAX                         ; 00559611
    TEST EAX,EAX                        ; 00559613
    JNZ 0x00559560                      ; 00559615
        ;   XREF to: 00559560 (CONDITIONAL_JUMP)  ; LAB_00559560
    PUSH EBX                            ; 0055961b
    PUSH 0x64160b                       ; 0055961c | = "Actor \"%s\" does not exist."
    PUSH 0x310eca0                      ; 00559621 | g_ScriptErrorBuffer
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00559626
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0055962b
    XOR EAX,EAX                         ; 0055962e
    POP EBP                             ; 00559630
    POP EDI                             ; 00559631
    POP ESI                             ; 00559632
    POP EBX                             ; 00559633
    RET                                 ; 00559634
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00559635
        ;   Label: LAB_00559635
    PUSH ECX                            ; 00559639
    PUSH ESI                            ; 0055963a
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90 ; 0055963b
        ;   XREF to: 00408b90 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00559640
    PUSH EAX                            ; 00559643
    PUSH EBX                            ; 00559644
    PUSH 0x641626                       ; 00559645 | = "Actor \"%s\" is of type %s, this comm..."
    PUSH 0x310eca0                      ; 0055964a | g_ScriptErrorBuffer
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0055964f
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x14                        ; 00559654
    XOR EAX,EAX                         ; 00559657
    POP EBP                             ; 00559659
    POP EDI                             ; 0055965a
    POP ESI                             ; 0055965b
    POP EBX                             ; 0055965c
    RET                                 ; 0055965d

