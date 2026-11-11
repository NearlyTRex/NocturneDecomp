; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_mission_cpp_CDemonMission_createHeros_FUN_004f7880(CDemonMission *this_ptr,CCharacter *existing_hero)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; CCharacter *     Stack[0x8]:4   existing_hero
;
; XREF[3]:
;   core_game.cpp_FUN_004be8d0 at 004bead0
;   core_mission.cpp_CDemonMission_run_FUN_004f72a0 at 004f73f9
;   core_netgame.cpp_CNetGame_runLobby_FUN_00505a30 at 00506059
;
; Referenced Globals:
;   TerminatedCString s_core_mission_cpp_005c8d44
;   TerminatedCString s_CDemonMission_createHero_005c8d58
;   TerminatedCString s_CHeroPlaceholder_005c8d9b
;   CGame* g_CGamePtr = 01d2130c
;   CNetGame* g_CNetGamePtr = 01da62f0
;   undefined4 g_CGameInstance.hero_number
;   undefined4 g_CGameInstance.aim_mode
;   undefined4 DAT_01d5ba00
;   undefined4 DAT_01d5ba14
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   CNetGame g_CNetGameInstance
;   undefined4 g_CNetGameInstance.player_count
;   undefined4 g_CNetGameInstance.players[0].aim_mode
;   undefined4 g_CNetGameInstance.local_player_index
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c790
;   core_main.c_FUN_004e4330
;   core_mission.cpp_CDemonMission_buildSetActorList_FUN_004f6bf0
;   core_mission.cpp_CDemonMission_createOneHero_FUN_004f7710
;   core_mission.cpp_CDemonMission_removeActor_FUN_004f6ca0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f7880
        ;   Label: core_mission.cpp_CDemonMission_createHeros_FUN_004f7880
    PUSH ESI                            ; 004f7881
    PUSH EDI                            ; 004f7882
    PUSH EBP                            ; 004f7883
    MOV EBP,dword ptr [ESP + 0x14]      ; 004f7884
    XOR EBX,EBX                         ; 004f7888
    ADD EBX,0x4                         ; 004f788a
        ;   Label: LAB_004f788a
    XOR EDX,EDX                         ; 004f788d
    MOV dword ptr [EBX + 0x1d5ba00],EDX ; 004f788f
    CMP EBX,0x10                        ; 004f7895
    JNZ 0x004f788a                      ; 004f7898
        ;   XREF to: 004f788a (CONDITIONAL_JUMP)  ; LAB_004f788a
    MOV EAX,[0x00603450]                ; 004f789a | g_CNetGamePtr
    MOV ECX,dword ptr [EAX]             ; 004f789f | g_CNetGameInstance
    TEST ECX,ECX                        ; 004f78a1
    JZ 0x004f7990                       ; 004f78a3
        ;   XREF to: 004f7990 (CONDITIONAL_JUMP)  ; LAB_004f7990
    MOV EAX,dword ptr [EAX + 0x1c]      ; 004f78a9 | g_CNetGameInstance.player_count
    MOV [0x01d5ba00],EAX                ; 004f78ac | DAT_01d5ba00
    CMP EAX,0x4                         ; 004f78b1
    JGE 0x004f79e3                      ; 004f78b4
        ;   XREF to: 004f79e3 (CONDITIONAL_JUMP)  ; LAB_004f79e3
    MOV EAX,[0x01d5ba00]                ; 004f78ba | DAT_01d5ba00
        ;   Label: LAB_004f78ba
    XOR EDI,EDI                         ; 004f78bf
    TEST EAX,EAX                        ; 004f78c1
    JLE 0x004f7921                      ; 004f78c3
        ;   XREF to: 004f7921 (CONDITIONAL_JUMP)  ; LAB_004f7921
    XOR EBX,EBX                         ; 004f78c5
    XOR ESI,ESI                         ; 004f78c7
    MOV EAX,[0x00603450]                ; 004f78c9 | g_CNetGamePtr
        ;   Label: LAB_004f78c9
    PUSH 0x0                            ; 004f78ce
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x34] ; 004f78d0
    PUSH EDX                            ; 004f78d4
    PUSH EDI                            ; 004f78d5
    PUSH EBP                            ; 004f78d6
    CALL core_mission.cpp_CDemonMission_createOneHero_FUN_004f7710 ; 004f78d7
        ;   XREF to: 004f7710 (UNCONDITIONAL_CALL)  ; int core_mission.cpp_CDemonMission_createOneHero_FUN_004f7710(CDemonMission * this_ptr, int index, int hero_type, CCharacter * existing_actor)
    ADD ESP,0x10                        ; 004f78dc
    TEST EAX,EAX                        ; 004f78df
    JZ 0x004f798b                       ; 004f78e1
        ;   XREF to: 004f798b (CONDITIONAL_JUMP)  ; LAB_004f798b
    MOV EAX,dword ptr [EBX + 0x1d5ba04] ; 004f78e7
    MOV dword ptr [EAX + 0xcdd0],0x1    ; 004f78ed
    MOV EAX,[0x00603450]                ; 004f78f7 | g_CNetGamePtr
    ADD EBX,0x4                         ; 004f78fc
    LEA EDX,[EAX + ESI*0x1]             ; 004f78ff
    MOV EAX,dword ptr [EBX + 0x1d5ba00] ; 004f7902
    MOV EDX,dword ptr [EDX + 0x38]      ; 004f7908 | g_CNetGameInstance.players[0].aim_mode
    INC EDI                             ; 004f790b
    MOV dword ptr [EAX + 0x206e4],EDX   ; 004f790c
    MOV EAX,[0x01d5ba00]                ; 004f7912 | DAT_01d5ba00
    ADD ESI,0x80                        ; 004f7917
    CMP EDI,EAX                         ; 004f791d
    JL 0x004f78c9                       ; 004f791f
        ;   XREF to: 004f78c9 (CONDITIONAL_JUMP)  ; LAB_004f78c9
    MOV EAX,[0x00603450]                ; 004f7921 | g_CNetGamePtr
        ;   Label: LAB_004f7921
    MOV EAX,dword ptr [EAX + 0x124]     ; 004f7926 | g_CNetGameInstance.local_player_index
    MOV [0x01d5ba14],EAX                ; 004f792c | DAT_01d5ba14
    MOV EAX,[0x01d5ba14]                ; 004f7931 | DAT_01d5ba14
        ;   Label: LAB_004f7931
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004f7936
    MOV dword ptr [EAX + 0xcdd0],0x0    ; 004f793d
    MOV EBX,dword ptr [EBP + 0x143c]    ; 004f7947
    TEST EBX,EBX                        ; 004f794d
    JZ 0x004f797d                       ; 004f794f
        ;   XREF to: 004f797d (CONDITIONAL_JUMP)  ; LAB_004f797d
    PUSH 0x5c8d9b                       ; 004f7951 | = "CHeroPlaceholder"
        ;   Label: LAB_004f7951
    PUSH EBX                            ; 004f7956
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 004f7957
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004f795c
    TEST EAX,EAX                        ; 004f795f
    JZ 0x004f7a0b                       ; 004f7961
        ;   XREF to: 004f7a0b (CONDITIONAL_JUMP)  ; LAB_004f7a0b
    PUSH 0x1                            ; 004f7967
    PUSH EBX                            ; 004f7969
    PUSH EBP                            ; 004f796a
    CALL core_mission.cpp_CDemonMission_removeActor_FUN_004f6ca0 ; 004f796b
        ;   XREF to: 004f6ca0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_removeActor_FUN_004f6ca0(CDemonMission * this_ptr, CDemonActor * actor, int should_delete)
    ADD ESP,0xc                         ; 004f7970
    MOV EBX,dword ptr [EBP + 0x143c]    ; 004f7973
    TEST EBX,EBX                        ; 004f7979
        ;   Label: LAB_004f7979
    JNZ 0x004f7951                      ; 004f797b
        ;   XREF to: 004f7951 (CONDITIONAL_JUMP)  ; LAB_004f7951
    PUSH EBP                            ; 004f797d
        ;   Label: LAB_004f797d
    CALL core_mission.cpp_CDemonMission_buildSetActorList_FUN_004f6bf0 ; 004f797e
        ;   XREF to: 004f6bf0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_buildSetActorList_FUN_004f6bf0(CDemonMission * this_ptr)
    MOV EAX,0x1                         ; 004f7983
    ADD ESP,0x4                         ; 004f7988
    POP EBP                             ; 004f798b
        ;   Label: LAB_004f798b
    POP EDI                             ; 004f798c
    POP ESI                             ; 004f798d
    POP EBX                             ; 004f798e
    RET                                 ; 004f798f
    MOV EBX,dword ptr [ESP + 0x18]      ; 004f7990
        ;   Label: LAB_004f7990
    MOV EAX,[0x005fe9dc]                ; 004f7994 | g_CGamePtr
    PUSH EBX                            ; 004f7999
    MOV ESI,dword ptr [EAX + 0xd8]      ; 004f799a | g_CGameInstance.hero_number
    PUSH ESI                            ; 004f79a0
    PUSH ECX                            ; 004f79a1
    MOV EDX,0x1                         ; 004f79a2
    PUSH EBP                            ; 004f79a7
    MOV dword ptr [0x01d5ba14],ECX      ; 004f79a8 | DAT_01d5ba14
    MOV dword ptr [0x01d5ba00],EDX      ; 004f79ae | DAT_01d5ba00
    CALL core_mission.cpp_CDemonMission_createOneHero_FUN_004f7710 ; 004f79b4
        ;   XREF to: 004f7710 (UNCONDITIONAL_CALL)  ; int core_mission.cpp_CDemonMission_createOneHero_FUN_004f7710(CDemonMission * this_ptr, int index, int hero_type, CCharacter * existing_actor)
    ADD ESP,0x10                        ; 004f79b9
    TEST EAX,EAX                        ; 004f79bc
    JZ 0x004f798b                       ; 004f79be
        ;   XREF to: 004f798b (CONDITIONAL_JUMP)  ; LAB_004f798b
    MOV EAX,[0x01d5ba14]                ; 004f79c0 | DAT_01d5ba14
    MOV EDX,dword ptr [0x005fe9dc]      ; 004f79c5 | g_CGamePtr
    MOV EBX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004f79cb
    MOV EAX,dword ptr [EDX + 0xdc]      ; 004f79d2 | g_CGameInstance.aim_mode
    MOV dword ptr [EBX + 0x206e4],EAX   ; 004f79d8
    JMP 0x004f7931                      ; 004f79de
        ;   XREF to: 004f7931 (UNCONDITIONAL_JUMP)  ; LAB_004f7931
    MOV ESI,0x5c8d44                    ; 004f79e3 | = "..\\core\\mission.cpp"
        ;   Label: LAB_004f79e3
    MOV EDI,0x69a                       ; 004f79e8
    PUSH 0x5c8d58                       ; 004f79ed | = "CDemonMission::createHeros - too many..."
    MOV dword ptr [0x01d71de0],ESI      ; 004f79f2 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 004f79f8 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004f79fe
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004f7a03
    JMP 0x004f78ba                      ; 004f7a06
        ;   XREF to: 004f78ba (UNCONDITIONAL_JUMP)  ; LAB_004f78ba
    MOV EBX,dword ptr [EBX + 0x14c]     ; 004f7a0b
        ;   Label: LAB_004f7a0b
    JMP 0x004f7979                      ; 004f7a11
        ;   XREF to: 004f7979 (UNCONDITIONAL_JUMP)  ; LAB_004f7979

