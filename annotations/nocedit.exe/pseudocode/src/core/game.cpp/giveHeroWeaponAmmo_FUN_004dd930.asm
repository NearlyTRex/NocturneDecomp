; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_giveHeroWeaponAmmo_FUN_004dd930(char *p1,EAmmoType p3)
;
; Parameters:
; char *           Stack[0x4]:4   p1
; EAmmoType        Stack[0x8]:4   p3
;
; XREF[1]:
;   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 at 004defa6
;
; Referenced Globals:
;   TerminatedCString s_core_game_cpp_0062b9cc
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CHero*[4] g_HeroActors
;   int g_LocalHeroIndex
;   CDemonMission g_CDemonMissionInstance
;
; Called Functions:
;   core_ammo.cpp_CAmmo_ctor_FUN_00410dc0
;   core_ammo.cpp_CAmmo_FUN_00410fd0
;   core_inv.cpp_CInventory_addItem_FUN_004fd600
;   core_mission.cpp_CDemonMission_generateActorName_FUN_00524700
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dd930
        ;   Label: core_game.cpp_giveHeroWeaponAmmo_FUN_004dd930
    PUSH 0xa1c                          ; 004dd931
    PUSH 0x62b9cc                       ; 004dd936 | = "..\\core\\game.cpp"
    PUSH 0x31c                          ; 004dd93b
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 004dd940
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    MOV EBX,EAX                         ; 004dd945
    ADD ESP,0xc                         ; 004dd947
    TEST EAX,EAX                        ; 004dd94a
    JNZ 0x004dd954                      ; 004dd94c
        ;   XREF to: 004dd954 (CONDITIONAL_JUMP)  ; LAB_004dd954
    TEST EBX,EBX                        ; 004dd94e
    JNZ 0x004dd965                      ; 004dd950
        ;   XREF to: 004dd965 (CONDITIONAL_JUMP)  ; LAB_004dd965
    POP EBX                             ; 004dd952
    RET                                 ; 004dd953
    PUSH EAX                            ; 004dd954
        ;   Label: LAB_004dd954
    CALL core_ammo.cpp_CAmmo_ctor_FUN_00410dc0 ; 004dd955
        ;   XREF to: 00410dc0 (UNCONDITIONAL_CALL)  ; CAmmo * core_ammo.cpp_CAmmo_ctor_FUN_00410dc0(CAmmo * this_ptr)
    MOV EBX,EAX                         ; 004dd95a
    ADD ESP,0x4                         ; 004dd95c
    TEST EBX,EBX                        ; 004dd95f
    JNZ 0x004dd965                      ; 004dd961
        ;   XREF to: 004dd965 (CONDITIONAL_JUMP)  ; LAB_004dd965
    POP EBX                             ; 004dd963
    RET                                 ; 004dd964
    PUSH EBX                            ; 004dd965
        ;   Label: LAB_004dd965
    MOV EDX,dword ptr [0x0067d550]      ; 004dd966 | g_CDemonMissionInstance | g_CDemonMissionPtr
    PUSH EDX                            ; 004dd96c | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_00524700 ; 004dd96d
        ;   XREF to: 00524700 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_00524700(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004dd972
    MOV EAX,dword ptr [EBX + 0x154]     ; 004dd975
    PUSH EBX                            ; 004dd97b
    CALL dword ptr [EAX]                ; 004dd97c
    ADD ESP,0x4                         ; 004dd97e
    MOV ECX,dword ptr [ESP + 0x8]       ; 004dd981
    PUSH ECX                            ; 004dd985
    MOV EAX,dword ptr [ESP + 0x10]      ; 004dd986
    PUSH EBX                            ; 004dd98a
    MOV dword ptr [EBX + 0x318],EAX     ; 004dd98b
    CALL core_ammo.cpp_CAmmo_FUN_00410fd0 ; 004dd991
        ;   XREF to: 00410fd0 (UNCONDITIONAL_CALL)  ; void core_ammo.cpp_CAmmo_FUN_00410fd0(CAmmo * this_ptr, char * weapon_class_name)
    ADD ESP,0x8                         ; 004dd996
    PUSH 0x1                            ; 004dd999
    MOV dword ptr [EBX + 0x314],0x1f4   ; 004dd99b
    PUSH EBX                            ; 004dd9a5
    MOV EBX,dword ptr [0x02db87d0]      ; 004dd9a6 | g_LocalHeroIndex
    MOV EBX,dword ptr [EBX*0x4 + 0x2db87c0] ; 004dd9ac | g_HeroActors
    ADD EBX,0x1f738                     ; 004dd9b3
    PUSH EBX                            ; 004dd9b9
    CALL core_inv.cpp_CInventory_addItem_FUN_004fd600 ; 004dd9ba
        ;   XREF to: 004fd600 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_CInventory_addItem_FUN_004fd600(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    ADD ESP,0xc                         ; 004dd9bf
    POP EBX                             ; 004dd9c2
    RET                                 ; 004dd9c3

