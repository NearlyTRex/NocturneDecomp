; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_giveHeroWeapon_FUN_004dd870(char *p1)
;
; Parameters:
; char *           Stack[0x4]:4   p1
;
; XREF[2]:
;   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 at 004deec0
;   core_game.cpp_checkCheatAndGiveWeapon_FUN_004dd9d0 at 004dda3c
;
; Referenced Globals:
;   TerminatedCString s_core_game_cpp_0062b995
;   TerminatedCString s_giveHeroWeapon_This_is_n_0062b9a6
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CHero*[4] g_HeroActors
;   int g_LocalHeroIndex
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   CDemonMission g_CDemonMissionInstance
;   undefined4 g_CWeaponClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_createActorByName_FUN_0040c430
;   core_inv.cpp_CInventory_addItem_FUN_004fd600
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_mission.cpp_CDemonMission_generateActorName_FUN_00524700
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dd870
        ;   Label: core_game.cpp_giveHeroWeapon_FUN_004dd870
    PUSH ESI                            ; 004dd871
    PUSH EDI                            ; 004dd872
    PUSH EBP                            ; 004dd873
    MOV EDX,dword ptr [ESP + 0x14]      ; 004dd874
    PUSH EDX                            ; 004dd878
    CALL core_actor.cpp_createActorByName_FUN_0040c430 ; 004dd879
        ;   XREF to: 0040c430 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_createActorByName_FUN_0040c430(char * class_name)
    ADD ESP,0x4                         ; 004dd87e
    PUSH EAX                            ; 004dd881
    MOV ECX,dword ptr [0x0067d550]      ; 004dd882 | g_CDemonMissionInstance | g_CDemonMissionPtr
    PUSH ECX                            ; 004dd888 | g_CDemonMissionInstance
    MOV EBX,EAX                         ; 004dd889
    MOV ESI,EAX                         ; 004dd88b
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_00524700 ; 004dd88d
        ;   XREF to: 00524700 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_00524700(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004dd892
    MOV EAX,dword ptr [EBX + 0x154]     ; 004dd895
    PUSH EBX                            ; 004dd89b
    CALL dword ptr [EAX]                ; 004dd89c
    ADD ESP,0x4                         ; 004dd89e
    MOV EDI,dword ptr [0x03f95d78]      ; 004dd8a1 | g_CWeaponClassInfo.name_hash
    PUSH EDI                            ; 004dd8a7
    PUSH EBX                            ; 004dd8a8
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004dd8a9
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004dd8ae
    MOV EBX,EAX                         ; 004dd8b1
    TEST EAX,EAX                        ; 004dd8b3
    JZ 0x004dd901                       ; 004dd8b5
        ;   XREF to: 004dd901 (CONDITIONAL_JUMP)  ; LAB_004dd901
    MOV dword ptr [EBX + 0x568],0x1f4   ; 004dd8b7
        ;   Label: LAB_004dd8b7
    MOV EBX,dword ptr [0x02db87d0]      ; 004dd8c1 | g_LocalHeroIndex
    MOV EDX,dword ptr [EBX*0x4 + 0x2db87c0] ; 004dd8c7 | g_HeroActors
    PUSH EDX                            ; 004dd8ce
    MOV EAX,dword ptr [ESI + 0x154]     ; 004dd8cf
    PUSH ESI                            ; 004dd8d5
    CALL dword ptr [EAX + 0x80]         ; 004dd8d6
    ADD ESP,0x8                         ; 004dd8dc
    MOV EAX,[0x02db87d0]                ; 004dd8df | g_LocalHeroIndex
    PUSH 0x1                            ; 004dd8e4
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004dd8e6 | g_HeroActors
    PUSH ESI                            ; 004dd8ed
    ADD EAX,0x1f738                     ; 004dd8ee
    PUSH EAX                            ; 004dd8f3
    CALL core_inv.cpp_CInventory_addItem_FUN_004fd600 ; 004dd8f4
        ;   XREF to: 004fd600 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_CInventory_addItem_FUN_004fd600(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    ADD ESP,0xc                         ; 004dd8f9
    POP EBP                             ; 004dd8fc
    POP EDI                             ; 004dd8fd
    POP ESI                             ; 004dd8fe
    POP EBX                             ; 004dd8ff
    RET                                 ; 004dd900
    MOV EBP,0x62b995                    ; 004dd901 | = "..\\core\\game.cpp"
        ;   Label: LAB_004dd901
    MOV EAX,0xa14                       ; 004dd906
    PUSH 0x62b9a6                       ; 004dd90b | = "giveHeroWeapon - This is not a weapon"
    MOV dword ptr [0x02f0ca48],EBP      ; 004dd910 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 004dd916 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004dd91b
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004dd920
    JMP 0x004dd8b7                      ; 004dd923
        ;   XREF to: 004dd8b7 (UNCONDITIONAL_JUMP)  ; LAB_004dd8b7

