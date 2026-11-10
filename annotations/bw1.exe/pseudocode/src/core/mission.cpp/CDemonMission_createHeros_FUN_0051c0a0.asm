; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_mission_cpp_CDemonMission_createHeros_FUN_0051c0a0(CDemonMission *this_ptr,CCharacter *existing_hero)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; CCharacter *     Stack[0x8]:4   existing_hero
;
; XREF[3]:
;   core_game.cpp_FUN_004d7250 at 004d7522
;   core_mission.cpp_CDemonMission_run_FUN_0051bad0 at 0051bc29
;   core_netgame.cpp_CNetGame_runLobby_FUN_0052e120 at 0052e751
;
; Referenced Globals:
;   TerminatedCString s_core_mission_cpp_005e9a42
;   TerminatedCString s_CDemonMission_createHero_005e9a56
;   TerminatedCString s_CHeroPlaceholder_005e9a99
;   CGame* g_CGamePtr = 01ccf390
;   CNetGame* g_CNetGamePtr = 01d51c20
;   undefined4 g_CGameInstance.field164_0xd4
;   undefined4 g_CGameInstance.field168_0xd8
;   undefined4 DAT_01d06aa0
;   undefined4 DAT_01d06ab4
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   CNetGame g_CNetGameInstance
;   undefined4 g_CNetGameInstance.player_count
;   undefined4 g_CNetGameInstance.players+0x18
;   undefined4 g_CNetGameInstance.local_player_index
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c550
;   core_main.c_FUN_005030e0
;   core_mission.cpp_CDemonMission_buildSetActorList_FUN_0051b420
;   core_mission.cpp_CDemonMission_createOneHero_FUN_0051bf30
;   core_mission.cpp_CDemonMission_removeActor_FUN_0051b4d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051c0a0
        ;   Label: core_mission.cpp_CDemonMission_createHeros_FUN_0051c0a0
    PUSH ESI                            ; 0051c0a1
    PUSH EDI                            ; 0051c0a2
    PUSH EBP                            ; 0051c0a3
    MOV EBP,dword ptr [ESP + 0x14]      ; 0051c0a4
    XOR EBX,EBX                         ; 0051c0a8
    ADD EBX,0x4                         ; 0051c0aa
        ;   Label: LAB_0051c0aa
    XOR EDX,EDX                         ; 0051c0ad
    MOV dword ptr [EBX + 0x1d06aa0],EDX ; 0051c0af
    CMP EBX,0x10                        ; 0051c0b5
    JNZ 0x0051c0aa                      ; 0051c0b8
        ;   XREF to: 0051c0aa (CONDITIONAL_JUMP)  ; LAB_0051c0aa
    MOV EAX,[0x00622580]                ; 0051c0ba | g_CNetGamePtr
    MOV ECX,dword ptr [EAX]             ; 0051c0bf | g_CNetGameInstance
    TEST ECX,ECX                        ; 0051c0c1
    JZ 0x0051c1ad                       ; 0051c0c3
        ;   XREF to: 0051c1ad (CONDITIONAL_JUMP)  ; LAB_0051c1ad
    MOV EAX,dword ptr [EAX + 0x1c]      ; 0051c0c9 | g_CNetGameInstance.player_count
    MOV [0x01d06aa0],EAX                ; 0051c0cc | DAT_01d06aa0
    CMP EAX,0x4                         ; 0051c0d1
    JGE 0x0051c200                      ; 0051c0d4
        ;   XREF to: 0051c200 (CONDITIONAL_JUMP)  ; LAB_0051c200
    MOV EAX,[0x01d06aa0]                ; 0051c0da | DAT_01d06aa0
        ;   Label: LAB_0051c0da
    XOR EDI,EDI                         ; 0051c0df
    TEST EAX,EAX                        ; 0051c0e1
    JLE 0x0051c13e                      ; 0051c0e3
        ;   XREF to: 0051c13e (CONDITIONAL_JUMP)  ; LAB_0051c13e
    XOR EBX,EBX                         ; 0051c0e5
    XOR ESI,ESI                         ; 0051c0e7
    MOV EAX,[0x00622580]                ; 0051c0e9 | g_CNetGamePtr
        ;   Label: LAB_0051c0e9
    PUSH 0x0                            ; 0051c0ee
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x34] ; 0051c0f0
    PUSH EDX                            ; 0051c0f4
    PUSH EDI                            ; 0051c0f5
    PUSH EBP                            ; 0051c0f6
    CALL core_mission.cpp_CDemonMission_createOneHero_FUN_0051bf30 ; 0051c0f7
        ;   XREF to: 0051bf30 (UNCONDITIONAL_CALL)  ; int core_mission.cpp_CDemonMission_createOneHero_FUN_0051bf30(CDemonMission * this_ptr, int index, int hero_type, CCharacter * existing_actor)
    ADD ESP,0x10                        ; 0051c0fc
    TEST EAX,EAX                        ; 0051c0ff
    JZ 0x0051c1a8                       ; 0051c101
        ;   XREF to: 0051c1a8 (CONDITIONAL_JUMP)  ; LAB_0051c1a8
    MOV EAX,dword ptr [EBX + 0x1d06aa4] ; 0051c107
    MOV dword ptr [EAX + 0xc1d4],0x1    ; 0051c10d
    MOV EAX,[0x00622580]                ; 0051c117 | g_CNetGamePtr
    ADD EBX,0x4                         ; 0051c11c
    LEA EDX,[EAX + ESI*0x1]             ; 0051c11f
    MOV EAX,dword ptr [EBX + 0x1d06aa0] ; 0051c122
    MOV EDX,dword ptr [EDX + 0x38]      ; 0051c128 | g_CNetGameInstance.players+0x18
    INC EDI                             ; 0051c12b
    MOV dword ptr [EAX + 0x1fae4],EDX   ; 0051c12c
    MOV EAX,[0x01d06aa0]                ; 0051c132 | DAT_01d06aa0
    ADD ESI,0x7c                        ; 0051c137
    CMP EDI,EAX                         ; 0051c13a
    JL 0x0051c0e9                       ; 0051c13c
        ;   XREF to: 0051c0e9 (CONDITIONAL_JUMP)  ; LAB_0051c0e9
    MOV EAX,[0x00622580]                ; 0051c13e | g_CNetGamePtr
        ;   Label: LAB_0051c13e
    MOV EAX,dword ptr [EAX + 0x11c]     ; 0051c143 | g_CNetGameInstance.local_player_index
    MOV [0x01d06ab4],EAX                ; 0051c149 | DAT_01d06ab4
    MOV EAX,[0x01d06ab4]                ; 0051c14e | DAT_01d06ab4
        ;   Label: LAB_0051c14e
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 0051c153
    MOV dword ptr [EAX + 0xc1d4],0x0    ; 0051c15a
    MOV EBX,dword ptr [EBP + 0x1118]    ; 0051c164
    TEST EBX,EBX                        ; 0051c16a
    JZ 0x0051c19a                       ; 0051c16c
        ;   XREF to: 0051c19a (CONDITIONAL_JUMP)  ; LAB_0051c19a
    PUSH 0x5e9a99                       ; 0051c16e | = "CHeroPlaceholder"
        ;   Label: LAB_0051c16e
    PUSH EBX                            ; 0051c173
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 0051c174
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0051c179
    TEST EAX,EAX                        ; 0051c17c
    JZ 0x0051c228                       ; 0051c17e
        ;   XREF to: 0051c228 (CONDITIONAL_JUMP)  ; LAB_0051c228
    PUSH 0x1                            ; 0051c184
    PUSH EBX                            ; 0051c186
    PUSH EBP                            ; 0051c187
    CALL core_mission.cpp_CDemonMission_removeActor_FUN_0051b4d0 ; 0051c188
        ;   XREF to: 0051b4d0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_removeActor_FUN_0051b4d0(CDemonMission * this_ptr, CDemonActor * actor, int should_delete)
    ADD ESP,0xc                         ; 0051c18d
    MOV EBX,dword ptr [EBP + 0x1118]    ; 0051c190
    TEST EBX,EBX                        ; 0051c196
        ;   Label: LAB_0051c196
    JNZ 0x0051c16e                      ; 0051c198
        ;   XREF to: 0051c16e (CONDITIONAL_JUMP)  ; LAB_0051c16e
    PUSH EBP                            ; 0051c19a
        ;   Label: LAB_0051c19a
    CALL core_mission.cpp_CDemonMission_buildSetActorList_FUN_0051b420 ; 0051c19b
        ;   XREF to: 0051b420 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_buildSetActorList_FUN_0051b420(CDemonMission * this_ptr)
    MOV EAX,0x1                         ; 0051c1a0
    ADD ESP,0x4                         ; 0051c1a5
    POP EBP                             ; 0051c1a8
        ;   Label: LAB_0051c1a8
    POP EDI                             ; 0051c1a9
    POP ESI                             ; 0051c1aa
    POP EBX                             ; 0051c1ab
    RET                                 ; 0051c1ac
    MOV EBX,dword ptr [ESP + 0x18]      ; 0051c1ad
        ;   Label: LAB_0051c1ad
    MOV EAX,[0x0061d95c]                ; 0051c1b1 | g_CGamePtr
    PUSH EBX                            ; 0051c1b6
    MOV ESI,dword ptr [EAX + 0xd4]      ; 0051c1b7 | g_CGameInstance.field164_0xd4
    PUSH ESI                            ; 0051c1bd
    PUSH ECX                            ; 0051c1be
    MOV EDX,0x1                         ; 0051c1bf
    PUSH EBP                            ; 0051c1c4
    MOV dword ptr [0x01d06ab4],ECX      ; 0051c1c5 | DAT_01d06ab4
    MOV dword ptr [0x01d06aa0],EDX      ; 0051c1cb | DAT_01d06aa0
    CALL core_mission.cpp_CDemonMission_createOneHero_FUN_0051bf30 ; 0051c1d1
        ;   XREF to: 0051bf30 (UNCONDITIONAL_CALL)  ; int core_mission.cpp_CDemonMission_createOneHero_FUN_0051bf30(CDemonMission * this_ptr, int index, int hero_type, CCharacter * existing_actor)
    ADD ESP,0x10                        ; 0051c1d6
    TEST EAX,EAX                        ; 0051c1d9
    JZ 0x0051c1a8                       ; 0051c1db
        ;   XREF to: 0051c1a8 (CONDITIONAL_JUMP)  ; LAB_0051c1a8
    MOV EAX,[0x01d06ab4]                ; 0051c1dd | DAT_01d06ab4
    MOV EDX,dword ptr [0x0061d95c]      ; 0051c1e2 | g_CGamePtr
    MOV EBX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 0051c1e8
    MOV EAX,dword ptr [EDX + 0xd8]      ; 0051c1ef | g_CGameInstance.field168_0xd8
    MOV dword ptr [EBX + 0x1fae4],EAX   ; 0051c1f5
    JMP 0x0051c14e                      ; 0051c1fb
        ;   XREF to: 0051c14e (UNCONDITIONAL_JUMP)  ; LAB_0051c14e
    MOV ESI,0x5e9a42                    ; 0051c200 | = "..\\core\\mission.cpp"
        ;   Label: LAB_0051c200
    MOV EDI,0x698                       ; 0051c205
    PUSH 0x5e9a56                       ; 0051c20a | = "CDemonMission::createHeros - too many..."
    MOV dword ptr [0x01d1d400],ESI      ; 0051c20f | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 0051c215 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0051c21b
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0051c220
    JMP 0x0051c0da                      ; 0051c223
        ;   XREF to: 0051c0da (UNCONDITIONAL_JUMP)  ; LAB_0051c0da
    MOV EBX,dword ptr [EBX + 0x14c]     ; 0051c228
        ;   Label: LAB_0051c228
    JMP 0x0051c196                      ; 0051c22e
        ;   XREF to: 0051c196 (UNCONDITIONAL_JUMP)  ; LAB_0051c196

