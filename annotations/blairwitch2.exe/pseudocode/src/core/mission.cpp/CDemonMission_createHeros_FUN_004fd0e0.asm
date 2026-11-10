; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_mission_cpp_CDemonMission_createHeros_FUN_004fd0e0(CDemonMission *this_ptr,CCharacter *existing_hero)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; CCharacter *     Stack[0x8]:4   existing_hero
;
; XREF[3]:
;   core_game.cpp_FUN_004bc840 at 004bca33
;   core_mission.cpp_CDemonMission_run_FUN_004fcb00 at 004fcc61
;   core_netgame.cpp_CNetGame_runLobby_FUN_0050cf50 at 0050d579
;
; Referenced Globals:
;   TerminatedCString s_core_mission_cpp_005de9f5
;   TerminatedCString s_CDemonMission_createHero_005dea09
;   TerminatedCString s_CHeroPlaceholder_005dea4c
;   CGame* g_CGamePtr = 01cb6900
;   CNetGame* g_CNetGamePtr = 01d34cb0
;   undefined4 g_CGameInstance.field164_0xd4
;   undefined4 g_CGameInstance.field168_0xd8
;   undefined4 DAT_01cedee0
;   undefined4 DAT_01cedef4
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   CNetGame g_CNetGameInstance
;   undefined4 g_CNetGameInstance.player_count
;   undefined4 g_CNetGameInstance.players+0x18
;   undefined4 g_CNetGameInstance.local_player_index
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c840
;   core_main.c_FUN_004e4500
;   core_mission.cpp_CDemonMission_buildSetActorList_FUN_004fc4c0
;   core_mission.cpp_CDemonMission_createOneHero_FUN_004fcf70
;   core_mission.cpp_CDemonMission_removeActor_FUN_004fc570
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fd0e0
        ;   Label: core_mission.cpp_CDemonMission_createHeros_FUN_004fd0e0
    PUSH ESI                            ; 004fd0e1
    PUSH EDI                            ; 004fd0e2
    PUSH EBP                            ; 004fd0e3
    MOV EBP,dword ptr [ESP + 0x14]      ; 004fd0e4
    XOR EBX,EBX                         ; 004fd0e8
    ADD EBX,0x4                         ; 004fd0ea
        ;   Label: LAB_004fd0ea
    XOR EDX,EDX                         ; 004fd0ed
    MOV dword ptr [EBX + 0x1cedee0],EDX ; 004fd0ef
    CMP EBX,0x10                        ; 004fd0f5
    JNZ 0x004fd0ea                      ; 004fd0f8
        ;   XREF to: 004fd0ea (CONDITIONAL_JUMP)  ; LAB_004fd0ea
    MOV EAX,[0x0061b120]                ; 004fd0fa | g_CNetGamePtr
    MOV ECX,dword ptr [EAX]             ; 004fd0ff | g_CNetGameInstance
    TEST ECX,ECX                        ; 004fd101
    JZ 0x004fd1f0                       ; 004fd103
        ;   XREF to: 004fd1f0 (CONDITIONAL_JUMP)  ; LAB_004fd1f0
    MOV EAX,dword ptr [EAX + 0x1c]      ; 004fd109 | g_CNetGameInstance.player_count
    MOV [0x01cedee0],EAX                ; 004fd10c | DAT_01cedee0
    CMP EAX,0x4                         ; 004fd111
    JGE 0x004fd243                      ; 004fd114
        ;   XREF to: 004fd243 (CONDITIONAL_JUMP)  ; LAB_004fd243
    MOV EAX,[0x01cedee0]                ; 004fd11a | DAT_01cedee0
        ;   Label: LAB_004fd11a
    XOR EDI,EDI                         ; 004fd11f
    TEST EAX,EAX                        ; 004fd121
    JLE 0x004fd181                      ; 004fd123
        ;   XREF to: 004fd181 (CONDITIONAL_JUMP)  ; LAB_004fd181
    XOR EBX,EBX                         ; 004fd125
    XOR ESI,ESI                         ; 004fd127
    MOV EAX,[0x0061b120]                ; 004fd129 | g_CNetGamePtr
        ;   Label: LAB_004fd129
    PUSH 0x0                            ; 004fd12e
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x34] ; 004fd130
    PUSH EDX                            ; 004fd134
    PUSH EDI                            ; 004fd135
    PUSH EBP                            ; 004fd136
    CALL core_mission.cpp_CDemonMission_createOneHero_FUN_004fcf70 ; 004fd137
        ;   XREF to: 004fcf70 (UNCONDITIONAL_CALL)  ; int core_mission.cpp_CDemonMission_createOneHero_FUN_004fcf70(CDemonMission * this_ptr, int index, int hero_type, CCharacter * existing_actor)
    ADD ESP,0x10                        ; 004fd13c
    TEST EAX,EAX                        ; 004fd13f
    JZ 0x004fd1eb                       ; 004fd141
        ;   XREF to: 004fd1eb (CONDITIONAL_JUMP)  ; LAB_004fd1eb
    MOV EAX,dword ptr [EBX + 0x1cedee4] ; 004fd147
    MOV dword ptr [EAX + 0x10a64],0x1   ; 004fd14d
    MOV EAX,[0x0061b120]                ; 004fd157 | g_CNetGamePtr
    ADD EBX,0x4                         ; 004fd15c
    LEA EDX,[EAX + ESI*0x1]             ; 004fd15f
    MOV EAX,dword ptr [EBX + 0x1cedee0] ; 004fd162
    MOV EDX,dword ptr [EDX + 0x38]      ; 004fd168 | g_CNetGameInstance.players+0x18
    INC EDI                             ; 004fd16b
    MOV dword ptr [EAX + 0x24378],EDX   ; 004fd16c
    MOV EAX,[0x01cedee0]                ; 004fd172 | DAT_01cedee0
    ADD ESI,0x80                        ; 004fd177
    CMP EDI,EAX                         ; 004fd17d
    JL 0x004fd129                       ; 004fd17f
        ;   XREF to: 004fd129 (CONDITIONAL_JUMP)  ; LAB_004fd129
    MOV EAX,[0x0061b120]                ; 004fd181 | g_CNetGamePtr
        ;   Label: LAB_004fd181
    MOV EAX,dword ptr [EAX + 0x124]     ; 004fd186 | g_CNetGameInstance.local_player_index
    MOV [0x01cedef4],EAX                ; 004fd18c | DAT_01cedef4
    MOV EAX,[0x01cedef4]                ; 004fd191 | DAT_01cedef4
        ;   Label: LAB_004fd191
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004fd196
    MOV dword ptr [EAX + 0x10a64],0x0   ; 004fd19d
    MOV EBX,dword ptr [EBP + 0x1114]    ; 004fd1a7
    TEST EBX,EBX                        ; 004fd1ad
    JZ 0x004fd1dd                       ; 004fd1af
        ;   XREF to: 004fd1dd (CONDITIONAL_JUMP)  ; LAB_004fd1dd
    PUSH 0x5dea4c                       ; 004fd1b1 | = "CHeroPlaceholder"
        ;   Label: LAB_004fd1b1
    PUSH EBX                            ; 004fd1b6
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004fd1b7
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004fd1bc
    TEST EAX,EAX                        ; 004fd1bf
    JZ 0x004fd26b                       ; 004fd1c1
        ;   XREF to: 004fd26b (CONDITIONAL_JUMP)  ; LAB_004fd26b
    PUSH 0x1                            ; 004fd1c7
    PUSH EBX                            ; 004fd1c9
    PUSH EBP                            ; 004fd1ca
    CALL core_mission.cpp_CDemonMission_removeActor_FUN_004fc570 ; 004fd1cb
        ;   XREF to: 004fc570 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_removeActor_FUN_004fc570(CDemonMission * this_ptr, CDemonActor * actor, int should_delete)
    ADD ESP,0xc                         ; 004fd1d0
    MOV EBX,dword ptr [EBP + 0x1114]    ; 004fd1d3
    TEST EBX,EBX                        ; 004fd1d9
        ;   Label: LAB_004fd1d9
    JNZ 0x004fd1b1                      ; 004fd1db
        ;   XREF to: 004fd1b1 (CONDITIONAL_JUMP)  ; LAB_004fd1b1
    PUSH EBP                            ; 004fd1dd
        ;   Label: LAB_004fd1dd
    CALL core_mission.cpp_CDemonMission_buildSetActorList_FUN_004fc4c0 ; 004fd1de
        ;   XREF to: 004fc4c0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_buildSetActorList_FUN_004fc4c0(CDemonMission * this_ptr)
    MOV EAX,0x1                         ; 004fd1e3
    ADD ESP,0x4                         ; 004fd1e8
    POP EBP                             ; 004fd1eb
        ;   Label: LAB_004fd1eb
    POP EDI                             ; 004fd1ec
    POP ESI                             ; 004fd1ed
    POP EBX                             ; 004fd1ee
    RET                                 ; 004fd1ef
    MOV EBX,dword ptr [ESP + 0x18]      ; 004fd1f0
        ;   Label: LAB_004fd1f0
    MOV EAX,[0x00616494]                ; 004fd1f4 | g_CGamePtr
    PUSH EBX                            ; 004fd1f9
    MOV ESI,dword ptr [EAX + 0xd4]      ; 004fd1fa | g_CGameInstance.field164_0xd4
    PUSH ESI                            ; 004fd200
    PUSH ECX                            ; 004fd201
    MOV EDX,0x1                         ; 004fd202
    PUSH EBP                            ; 004fd207
    MOV dword ptr [0x01cedef4],ECX      ; 004fd208 | DAT_01cedef4
    MOV dword ptr [0x01cedee0],EDX      ; 004fd20e | DAT_01cedee0
    CALL core_mission.cpp_CDemonMission_createOneHero_FUN_004fcf70 ; 004fd214
        ;   XREF to: 004fcf70 (UNCONDITIONAL_CALL)  ; int core_mission.cpp_CDemonMission_createOneHero_FUN_004fcf70(CDemonMission * this_ptr, int index, int hero_type, CCharacter * existing_actor)
    ADD ESP,0x10                        ; 004fd219
    TEST EAX,EAX                        ; 004fd21c
    JZ 0x004fd1eb                       ; 004fd21e
        ;   XREF to: 004fd1eb (CONDITIONAL_JUMP)  ; LAB_004fd1eb
    MOV EAX,[0x01cedef4]                ; 004fd220 | DAT_01cedef4
    MOV EDX,dword ptr [0x00616494]      ; 004fd225 | g_CGamePtr
    MOV EBX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004fd22b
    MOV EAX,dword ptr [EDX + 0xd8]      ; 004fd232 | g_CGameInstance.field168_0xd8
    MOV dword ptr [EBX + 0x24378],EAX   ; 004fd238
    JMP 0x004fd191                      ; 004fd23e
        ;   XREF to: 004fd191 (UNCONDITIONAL_JUMP)  ; LAB_004fd191
    MOV ESI,0x5de9f5                    ; 004fd243 | = "..\\core\\mission.cpp"
        ;   Label: LAB_004fd243
    MOV EDI,0x688                       ; 004fd248
    PUSH 0x5dea09                       ; 004fd24d | = "CDemonMission::createHeros - too many..."
    MOV dword ptr [0x01d046a0],ESI      ; 004fd252 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 004fd258 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004fd25e
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004fd263
    JMP 0x004fd11a                      ; 004fd266
        ;   XREF to: 004fd11a (UNCONDITIONAL_JUMP)  ; LAB_004fd11a
    MOV EBX,dword ptr [EBX + 0x14c]     ; 004fd26b
        ;   Label: LAB_004fd26b
    JMP 0x004fd1d9                      ; 004fd271
        ;   XREF to: 004fd1d9 (UNCONDITIONAL_JUMP)  ; LAB_004fd1d9

