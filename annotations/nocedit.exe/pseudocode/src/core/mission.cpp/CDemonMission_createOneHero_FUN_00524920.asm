; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_mission_cpp_CDemonMission_createOneHero_FUN_00524920(CDemonMission *this_ptr,int index,int hero_type,CCharacter *existing_actor)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   index
; int              Stack[0xc]:4   hero_type
; CCharacter *     Stack[0x10]:4   existing_actor
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_mission.cpp_CDemonMission_createHeros_FUN_00524a80 at 00524bb1
;
; Referenced Globals:
;   TerminatedCString s_core_mission_cpp_006393bc
;   TerminatedCString s_CDemonMission_createOneH_006393d0
;   TerminatedCString s_core_mission_cpp_006393ff
;   TerminatedCString s_CDemonMission_createOneH_00639413
;   TerminatedCString s_Can_t_find_hero_placehol_00639448
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CEditorTools g_CEditorToolsInstance
;   int g_HeroCount
;   CHero*[4] g_HeroActors
;   undefined4 g_CHeroPlaceholderClassInfo.name_hash
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   CDemonMission g_CDemonMissionInstance
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_hero.cpp_CHeroPlaceholder_createHero_FUN_004f3d80
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_mission.cpp_CDemonMission_addActorToList_FUN_00523b70
;   core_motion.cpp_CMotionController_jumpToMotion_FUN_0052dde0
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00524920
        ;   Label: core_mission.cpp_CDemonMission_createOneHero_FUN_00524920
    PUSH ESI                            ; 00524921
    PUSH EDI                            ; 00524922
    PUSH EBP                            ; 00524923
    SUB ESP,0x4                         ; 00524924
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00524927
    MOV EBP,dword ptr [ESP + 0x24]      ; 0052492b
    CMP EDI,dword ptr [0x02db87bc]      ; 0052492f | g_HeroCount
    JGE 0x005249b9                      ; 00524935
        ;   XREF to: 005249b9 (CONDITIONAL_JUMP)  ; LAB_005249b9
    CMP dword ptr [EDI*0x4 + 0x2db87c0],0x0 ; 0052493b | g_HeroActors
        ;   Label: LAB_0052493b
    JZ 0x00524967                       ; 00524943
        ;   XREF to: 00524967 (CONDITIONAL_JUMP)  ; LAB_00524967
    MOV EAX,0x6393ff                    ; 00524945 | = "..\\core\\mission.cpp"
    MOV EDX,0x5f2                       ; 0052494a
    PUSH 0x639413                       ; 0052494f | = "CDemonMission::createOneHero - hero a..."
    MOV [0x02f0ca48],EAX                ; 00524954 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 00524959 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0052495f
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00524964
    MOV ESI,dword ptr [ESP + 0x18]      ; 00524967
        ;   Label: LAB_00524967
    XOR ECX,ECX                         ; 0052496b
    MOV ESI,dword ptr [ESI + 0x548]     ; 0052496d
    MOV dword ptr [ESP],ECX             ; 00524973
    TEST ESI,ESI                        ; 00524976
    JZ 0x0052499a                       ; 00524978
        ;   XREF to: 0052499a (CONDITIONAL_JUMP)  ; LAB_0052499a
    MOV EBX,dword ptr [0x02db8848]      ; 0052497a | g_CHeroPlaceholderClassInfo.name_hash
        ;   Label: LAB_0052497a
    PUSH EBX                            ; 00524980
    PUSH ESI                            ; 00524981
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 00524982
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 00524987
    ADD ESP,0x8                         ; 00524989
    TEST EAX,EAX                        ; 0052498c
    JNZ 0x005249e1                      ; 0052498e
        ;   XREF to: 005249e1 (CONDITIONAL_JUMP)  ; LAB_005249e1
    MOV ESI,dword ptr [ESI + 0x14c]     ; 00524990
        ;   Label: LAB_00524990
    TEST ESI,ESI                        ; 00524996
    JNZ 0x0052497a                      ; 00524998
        ;   XREF to: 0052497a (CONDITIONAL_JUMP)  ; LAB_0052497a
    MOV ESI,dword ptr [ESP]             ; 0052499a
        ;   Label: LAB_0052499a
    TEST ESI,ESI                        ; 0052499d
    JZ 0x00524a60                       ; 0052499f
        ;   XREF to: 00524a60 (CONDITIONAL_JUMP)  ; LAB_00524a60
    MOV EAX,0x1                         ; 005249a5
    MOV dword ptr [EDI*0x4 + 0x2db87c0],ESI ; 005249aa | g_HeroActors
    ADD ESP,0x4                         ; 005249b1
    POP EBP                             ; 005249b4
    POP EDI                             ; 005249b5
    POP ESI                             ; 005249b6
    POP EBX                             ; 005249b7
    RET                                 ; 005249b8
    MOV ECX,0x6393bc                    ; 005249b9 | = "..\\core\\mission.cpp"
        ;   Label: LAB_005249b9
    MOV EBX,0x5f1                       ; 005249be
    PUSH 0x6393d0                       ; 005249c3 | = "CDemonMission::createOneHero - too ma..."
    MOV dword ptr [0x02f0ca48],ECX      ; 005249c8 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 005249ce | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005249d4
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005249d9
    JMP 0x0052493b                      ; 005249dc
        ;   XREF to: 0052493b (UNCONDITIONAL_JUMP)  ; LAB_0052493b
    CMP EDI,dword ptr [EAX + 0x158]     ; 005249e1
        ;   Label: LAB_005249e1
    JNZ 0x00524990                      ; 005249e7
        ;   XREF to: 00524990 (CONDITIONAL_JUMP)  ; LAB_00524990
    TEST EBP,EBP                        ; 005249e9
    JZ 0x00524a4d                       ; 005249eb
        ;   XREF to: 00524a4d (CONDITIONAL_JUMP)  ; LAB_00524a4d
    LEA EAX,[EBX + 0x30]                ; 005249ed
    PUSH EAX                            ; 005249f0
    LEA EAX,[EBX + 0x20]                ; 005249f1
    PUSH EAX                            ; 005249f4
    MOV ESI,dword ptr [EBP + 0x154]     ; 005249f5
    PUSH EBP                            ; 005249fb
    MOV dword ptr [ESP + 0xc],EBP       ; 005249fc
    CALL dword ptr [ESI + 0x60]         ; 00524a00
    ADD ESP,0xc                         ; 00524a03
    PUSH 0x0                            ; 00524a06
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00524a08
    PUSH 0x0                            ; 00524a0b
    MOV dword ptr [EBP + 0x2c],EAX      ; 00524a0d
    LEA EAX,[EBP + 0x158]               ; 00524a10
    PUSH EAX                            ; 00524a16
    CALL core_motion.cpp_CMotionController_jumpToMotion_FUN_0052dde0 ; 00524a17
        ;   XREF to: 0052dde0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotion_FUN_0052dde0(CMotionController * this_ptr, int target_motion_index, float target_frame_number)
    ADD ESP,0xc                         ; 00524a1c
    PUSH 0x0                            ; 00524a1f
    PUSH 0x0                            ; 00524a21
    PUSH 0x0                            ; 00524a23
    MOV EAX,dword ptr [EBP + 0x154]     ; 00524a25
    PUSH EBP                            ; 00524a2b
    CALL dword ptr [EAX + 0x144]        ; 00524a2c
    ADD ESP,0x10                        ; 00524a32
    MOV ECX,dword ptr [ESP]             ; 00524a35
        ;   Label: LAB_00524a35
    PUSH ECX                            ; 00524a38
    MOV EBX,dword ptr [0x0067d550]      ; 00524a39 | g_CDemonMissionInstance | g_CDemonMissionPtr
    PUSH EBX                            ; 00524a3f | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_00523b70 ; 00524a40
        ;   XREF to: 00523b70 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_addActorToList_FUN_00523b70(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00524a45
    JMP 0x0052499a                      ; 00524a48
        ;   XREF to: 0052499a (UNCONDITIONAL_JUMP)  ; LAB_0052499a
    MOV EDX,dword ptr [ESP + 0x20]      ; 00524a4d
        ;   Label: LAB_00524a4d
    PUSH EDX                            ; 00524a51
    PUSH EBX                            ; 00524a52
    CALL core_hero.cpp_CHeroPlaceholder_createHero_FUN_004f3d80 ; 00524a53
        ;   XREF to: 004f3d80 (UNCONDITIONAL_CALL)  ; CDemonActor * core_hero.cpp_CHeroPlaceholder_createHero_FUN_004f3d80(CHeroPlaceholder * this_ptr, EHeroType hero_type)
    ADD ESP,0x8                         ; 00524a58
    MOV dword ptr [ESP],EAX             ; 00524a5b
    JMP 0x00524a35                      ; 00524a5e
        ;   XREF to: 00524a35 (UNCONDITIONAL_JUMP)  ; LAB_00524a35
    PUSH EDI                            ; 00524a60
        ;   Label: LAB_00524a60
    PUSH 0x639448                       ; 00524a61 | = "Can't find hero placeholder for hero %d"
    MOV EDI,dword ptr [0x00678a60]      ; 00524a66 | g_CEditorToolsPtr
    PUSH EDI                            ; 00524a6c | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00524a6d
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 00524a72
    XOR EAX,EAX                         ; 00524a75
    ADD ESP,0x4                         ; 00524a77
    POP EBP                             ; 00524a7a
    POP EDI                             ; 00524a7b
    POP ESI                             ; 00524a7c
    POP EBX                             ; 00524a7d
    RET                                 ; 00524a7e

