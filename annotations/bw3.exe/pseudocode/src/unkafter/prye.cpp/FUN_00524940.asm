; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_prye_cpp_FUN_00524940(CHero *param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined        Stack[-0x8c]:1  local_8c
; undefined        Stack[-0x80]:1  local_80
; undefined        Stack[-0x74]:1  local_74
; undefined        Stack[-0x68]:1  local_68
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_prye.cpp_FUN_00518cd0 at 00519b8a
;
; Referenced Globals:
;   void* switchdataD_0052486c = 00524e6e
;   void* switchdataD_005248a8 = 00524ed6
;   void* switchdataD_005248cc = 00524f3d
;   void* switchdataD_005248f0 = 005256d7
;   void* switchdataD_00524914 = 0052573c
;   TerminatedCString s_CShotgun_005cd77f
;   TerminatedCString s_CRifle_005cd788
;   TerminatedCString s_UseSPS_005cd78f
;   TerminatedCString s_UseSPS_005cd796
;   TerminatedCString s_CLightActor_005cd79d
;   TerminatedCString s_CTrap_005cd7a9
;   TerminatedCString s_actionPending_d_prye_cpp_005cd7af
;   undefined4 DAT_005cd7d7
;   undefined4 DAT_005cd7df
;   undefined4 DAT_005cd7e7
;   ... and 16 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_isOfClass_FUN_0040c790
;   core_charactr.cpp_CCharacter_advanceLayerAction_FUN_00433580
;   core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_00433ae0
;   core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60
;   core_charactr.cpp_FUN_004319d0
;   core_dynamite.cpp_CDynamite_lightFuse_FUN_0047b1e0
;   core_dynamite.cpp_FUN_0047b230
;   core_event.cpp_CEventList_executeCommands_FUN_0048c150
;   core_hero.cpp_CHero_addCarriedItemToInventory_FUN_004d41a0
;   core_inv.cpp_CInventory_removeItem_FUN_004dbaa0
;   core_inv.cpp_FUN_004dba80
;   core_inv.cpp_FUN_004dcda0
;   core_mission.cpp_CDemonMission_addActorToList_FUN_004f6930
;   ... and 4 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00524940
        ;   Label: unkafter_prye.cpp_FUN_00524940
    PUSH ESI                            ; 00524941
    PUSH EDI                            ; 00524942
    PUSH EBP                            ; 00524943
    MOV EBP,ESP                         ; 00524944
    SUB ESP,0xa0                        ; 00524946
    AND ESP,0xfffffff8                  ; 0052494c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0052494f
    CMP dword ptr [EBX + 0x2f00],0x11   ; 00524952
    JNZ 0x00524971                      ; 00524959
        ;   XREF to: 00524971 (CONDITIONAL_JUMP)  ; LAB_00524971
    MOV ECX,dword ptr [EBX + 0x2628]    ; 0052495b
    TEST ECX,ECX                        ; 00524961
    JNZ 0x00524971                      ; 00524963
        ;   XREF to: 00524971 (CONDITIONAL_JUMP)  ; LAB_00524971
    MOV dword ptr [EBX + 0x2f04],ECX    ; 00524965
    MOV dword ptr [EBX + 0x2f00],ECX    ; 0052496b
    MOV EDI,0xffffffff                  ; 00524971
        ;   Label: LAB_00524971
    MOV EAX,dword ptr [EBX + 0x20ba8]   ; 00524976
    XOR ESI,ESI                         ; 0052497c
    MOV dword ptr [ESP + 0x6c],EDI      ; 0052497e
    MOV dword ptr [ESP + 0x88],ESI      ; 00524982
    TEST EAX,EAX                        ; 00524989
    JZ 0x00524cd0                       ; 0052498b
        ;   XREF to: 00524cd0 (CONDITIONAL_JUMP)  ; LAB_00524cd0
    MOV dword ptr [EBX + 0x20bcc],ESI   ; 00524991
        ;   Label: LAB_00524991
    LEA ESI,[EBX + 0x206e8]             ; 00524997
        ;   Label: LAB_00524997
    PUSH ESI                            ; 0052499d
    CALL core_inv.cpp_FUN_004dcda0      ; 0052499e
        ;   XREF to: 004dcda0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004dcda0()
    ADD ESP,0x4                         ; 005249a3
    PUSH ESI                            ; 005249a6
    CALL core_inv.cpp_FUN_004dcda0      ; 005249a7
        ;   XREF to: 004dcda0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004dcda0()
    ADD ESP,0x4                         ; 005249ac
    XOR EAX,EAX                         ; 005249af
    MOV dword ptr [ESP + 0x74],EAX      ; 005249b1
    MOV dword ptr [ESP + 0x54],ESI      ; 005249b5
    MOV dword ptr [ESP + 0x94],ESI      ; 005249b9
    LEA EAX,[EBX + 0x158]               ; 005249c0
    MOV dword ptr [ESP + 0x58],ESI      ; 005249c6
    MOV dword ptr [ESP + 0x78],EAX      ; 005249ca
    FLD float ptr [EBP + 0x18]          ; 005249ce
        ;   Label: LAB_005249ce
    FLDZ                                ; 005249d1
    FCOMPP                              ; 005249d3
    FNSTSW AX                           ; 005249d5
    SAHF                                ; 005249d7
    JNC 0x00524cc9                      ; 005249d8
        ;   XREF to: 00524cc9 (CONDITIONAL_JUMP)  ; LAB_00524cc9
    MOV EDX,dword ptr [EBX + 0x20b64]   ; 005249de
    CMP EDX,0x1                         ; 005249e4
    JNZ 0x00524d75                      ; 005249e7
        ;   XREF to: 00524d75 (CONDITIONAL_JUMP)  ; LAB_00524d75
    MOV dword ptr [ESP + 0x90],0x3      ; 005249ed
        ;   Label: LAB_005249ed
    MOV EDX,dword ptr [ESP + 0x90]      ; 005249f8
        ;   Label: LAB_005249f8
    MOV EAX,dword ptr [EBX + 0x2f04]    ; 005249ff
    PUSH EDX                            ; 00524a05
    MOV dword ptr [ESP + 0x88],EAX      ; 00524a06
    LEA EAX,[EBP + 0x18]                ; 00524a0d
    PUSH EAX                            ; 00524a10
    PUSH EBX                            ; 00524a11
    CALL core_charactr.cpp_CCharacter_advanceLayerAction_FUN_00433580 ; 00524a12
        ;   XREF to: 00433580 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_advanceLayerAction_FUN_00433580(CCharacter * this_ptr, float * remaining_time, int target_bone_index)
    ADD ESP,0xc                         ; 00524a17
    MOV ECX,dword ptr [EBX + 0x2f00]    ; 00524a1a
    MOV dword ptr [ESP + 0x8c],EAX      ; 00524a20
    IMUL EAX,ECX,0x38                   ; 00524a27
    IMUL ESI,dword ptr [EBX + EAX*0x1 + 0x27f4],0x120 ; 00524a2a
    MOV EAX,dword ptr [ESP + 0x78]      ; 00524a35
    PUSH EAX                            ; 00524a39
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_004fc310 ; 00524a3a
        ;   XREF to: 004fc310 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_004fc310(CMotionController * this_ptr)
    ADD EAX,0x1c28                      ; 00524a3f
    ADD ESI,EAX                         ; 00524a44
    MOV EAX,dword ptr [EBX + 0x2f00]    ; 00524a46
    ADD ESP,0x4                         ; 00524a4c
    CMP EAX,0x10                        ; 00524a4f
    JNC 0x005255c5                      ; 00524a52
        ;   XREF to: 005255c5 (CONDITIONAL_JUMP)  ; LAB_005255c5
    CMP EAX,0xc                         ; 00524a58
    JNC 0x00525644                      ; 00524a5b
        ;   XREF to: 00525644 (CONDITIONAL_JUMP)  ; LAB_00525644
    CMP EAX,0x7                         ; 00524a61
    JNC 0x005256c3                      ; 00524a64
        ;   XREF to: 005256c3 (CONDITIONAL_JUMP)  ; LAB_005256c3
    CMP EAX,0x6                         ; 00524a6a
    JNZ 0x00524a9c                      ; 00524a6d
        ;   XREF to: 00524a9c (CONDITIONAL_JUMP)  ; LAB_00524a9c
    MOV EDI,dword ptr [0x01c5a130]      ; 00524a6f | g_CDynamiteClassInfo.name_hash
    PUSH EDI                            ; 00524a75
    MOV EAX,dword ptr [EBX + 0x20c24]   ; 00524a76
    PUSH EAX                            ; 00524a7c
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00524a7d
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 00524a82
    MOV EDI,EAX                         ; 00524a85
    TEST EAX,EAX                        ; 00524a87
    JZ 0x00524a9c                       ; 00524a89
        ;   XREF to: 00524a9c (CONDITIONAL_JUMP)  ; LAB_00524a9c
    PUSH EAX                            ; 00524a8b
    CALL core_dynamite.cpp_FUN_0047b230 ; 00524a8c
        ;   XREF to: 0047b230 (UNCONDITIONAL_CALL)  ; undefined core_dynamite.cpp_FUN_0047b230()
    ADD ESP,0x4                         ; 00524a91
    TEST EAX,EAX                        ; 00524a94
    JZ 0x00525204                       ; 00524a96
        ;   XREF to: 00525204 (CONDITIONAL_JUMP)  ; LAB_00525204
    CMP dword ptr [ESP + 0x8c],0x0      ; 00524a9c
        ;   Label: LAB_00524a9c
    JL 0x00524cb7                       ; 00524aa4
        ;   XREF to: 00524cb7 (CONDITIONAL_JUMP)  ; LAB_00524cb7
    MOV EDI,dword ptr [ESP + 0x88]      ; 00524aaa
    MOV EAX,dword ptr [EBX + 0x20c24]   ; 00524ab1
    CMP EAX,EDI                         ; 00524ab7
    JZ 0x00524bb7                       ; 00524ab9
        ;   XREF to: 00524bb7 (CONDITIONAL_JUMP)  ; LAB_00524bb7
    TEST EAX,EAX                        ; 00524abf
    JZ 0x00524b24                       ; 00524ac1
        ;   XREF to: 00524b24 (CONDITIONAL_JUMP)  ; LAB_00524b24
    MOV ESI,EAX                         ; 00524ac3
    JNZ 0x0052572a                      ; 00524ac5
        ;   XREF to: 0052572a (CONDITIONAL_JUMP)  ; LAB_0052572a
    CMP EAX,dword ptr [ESP + 0x8c]      ; 00524acb
        ;   Label: LAB_00524acb
    JNZ 0x00524b24                      ; 00524ad2
        ;   XREF to: 00524b24 (CONDITIONAL_JUMP)  ; LAB_00524b24
    PUSH 0x1                            ; 00524ad4
    MOV EAX,dword ptr [EBX + 0x20c24]   ; 00524ad6
    PUSH EAX                            ; 00524adc
    MOV ESI,dword ptr [EAX + 0x154]     ; 00524add
    CALL dword ptr [ESI + 0xdc]         ; 00524ae3
    ADD ESP,0x8                         ; 00524ae9
    MOV ECX,dword ptr [0x02cf61ec]      ; 00524aec | g_CSpsClassInfo.name_hash
    PUSH ECX                            ; 00524af2
    MOV ESI,dword ptr [EBX + 0x20c24]   ; 00524af3
    PUSH ESI                            ; 00524af9
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00524afa
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 00524aff
    TEST EAX,EAX                        ; 00524b02
    JZ 0x00524b1a                       ; 00524b04
        ;   XREF to: 00524b1a (CONDITIONAL_JUMP)  ; LAB_00524b1a
    PUSH 0x5cd78f                       ; 00524b06 | = "UseSPS"
    MOV EDI,dword ptr [0x005fba60]      ; 00524b0b | DAT_005fba60
    PUSH EDI                            ; 00524b11
    CALL core_event.cpp_CEventList_executeCommands_FUN_0048c150 ; 00524b12
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0048c150(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 00524b17
    MOV dword ptr [EBX + 0x20c24],0x0   ; 00524b1a
        ;   Label: LAB_00524b1a
    CMP dword ptr [EBX + 0x20bcc],0x0   ; 00524b24
        ;   Label: LAB_00524b24
    JZ 0x00524bb7                       ; 00524b2b
        ;   XREF to: 00524bb7 (CONDITIONAL_JUMP)  ; LAB_00524bb7
    MOV ESI,dword ptr [ESP + 0x88]      ; 00524b31
    TEST ESI,ESI                        ; 00524b38
    JNZ 0x0052578e                      ; 00524b3a
        ;   XREF to: 0052578e (CONDITIONAL_JUMP)  ; LAB_0052578e
    XOR EAX,EAX                         ; 00524b40
    CMP EAX,dword ptr [ESP + 0x8c]      ; 00524b42
        ;   Label: LAB_00524b42
    JNZ 0x00524bb7                      ; 00524b49
        ;   XREF to: 00524bb7 (CONDITIONAL_JUMP)  ; LAB_00524bb7
    MOV ECX,dword ptr [EBX + 0x20c24]   ; 00524b4b
    TEST ECX,ECX                        ; 00524b51
    JZ 0x00524b67                       ; 00524b53
        ;   XREF to: 00524b67 (CONDITIONAL_JUMP)  ; LAB_00524b67
    PUSH 0x1                            ; 00524b55
    MOV ESI,dword ptr [ECX + 0x154]     ; 00524b57
    PUSH ECX                            ; 00524b5d
    CALL dword ptr [ESI + 0xdc]         ; 00524b5e
    ADD ESP,0x8                         ; 00524b64
    MOV ESI,dword ptr [0x02cf61ec]      ; 00524b67 | g_CSpsClassInfo.name_hash
        ;   Label: LAB_00524b67
    PUSH ESI                            ; 00524b6d
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00524b6e
    PUSH EAX                            ; 00524b75
    MOV dword ptr [EBX + 0x20c24],EAX   ; 00524b76
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00524b7c
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 00524b81
    TEST EAX,EAX                        ; 00524b84
    JZ 0x00524b9b                       ; 00524b86
        ;   XREF to: 00524b9b (CONDITIONAL_JUMP)  ; LAB_00524b9b
    PUSH 0x5cd796                       ; 00524b88 | = "UseSPS"
    MOV EAX,[0x005fba60]                ; 00524b8d | DAT_005fba60
    PUSH EAX                            ; 00524b92
    CALL core_event.cpp_CEventList_executeCommands_FUN_0048c150 ; 00524b93
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0048c150(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 00524b98
    MOV EDX,dword ptr [EBX + 0x20c24]   ; 00524b9b
        ;   Label: LAB_00524b9b
    TEST EDX,EDX                        ; 00524ba1
    JZ 0x00524bb7                       ; 00524ba3
        ;   XREF to: 00524bb7 (CONDITIONAL_JUMP)  ; LAB_00524bb7
    PUSH 0x2                            ; 00524ba5
    MOV ESI,dword ptr [EDX + 0x154]     ; 00524ba7
    PUSH EDX                            ; 00524bad
    CALL dword ptr [ESI + 0xdc]         ; 00524bae
    ADD ESP,0x8                         ; 00524bb4
    MOV ECX,dword ptr [EBX + 0x20b64]   ; 00524bb7
        ;   Label: LAB_00524bb7
    CMP ECX,0x1                         ; 00524bbd
    JNZ 0x005257a0                      ; 00524bc0
        ;   XREF to: 005257a0 (CONDITIONAL_JUMP)  ; LAB_005257a0
    CMP dword ptr [ESP + 0x8c],0x3      ; 00524bc6
    JNZ 0x005257a0                      ; 00524bce
        ;   XREF to: 005257a0 (CONDITIONAL_JUMP)  ; LAB_005257a0
    PUSH ECX                            ; 00524bd4
    PUSH EBX                            ; 00524bd5
    CALL core_hero.cpp_CHero_addCarriedItemToInventory_FUN_004d41a0 ; 00524bd6
        ;   XREF to: 004d41a0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_addCarriedItemToInventory_FUN_004d41a0(CHero * this_ptr, int hand_index)
    ADD ESP,0x8                         ; 00524bdb
    MOV dword ptr [EBX + 0x20b64],0x0   ; 00524bde
        ;   Label: LAB_00524bde
    MOV EDI,dword ptr [EBX + 0x20bac]   ; 00524be8
        ;   Label: LAB_00524be8
    TEST EDI,EDI                        ; 00524bee
    JZ 0x00524c84                       ; 00524bf0
        ;   XREF to: 00524c84 (CONDITIONAL_JUMP)  ; LAB_00524c84
    CMP dword ptr [ESP + 0x8c],0x3      ; 00524bf6
    JNZ 0x00524c84                      ; 00524bfe
        ;   XREF to: 00524c84 (CONDITIONAL_JUMP)  ; LAB_00524c84
    PUSH 0x0                            ; 00524c04
    PUSH EDI                            ; 00524c06
    MOV ECX,dword ptr [ESP + 0x5c]      ; 00524c07
    PUSH ECX                            ; 00524c0b
    CALL core_inv.cpp_CInventory_removeItem_FUN_004dbaa0 ; 00524c0c
        ;   XREF to: 004dbaa0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_removeItem_FUN_004dbaa0(CInventory * this_ptr, CDemonActor * item_to_remove, int should_delete_actor)
    ADD ESP,0xc                         ; 00524c11
    MOV ESI,dword ptr [EBX + 0x20bac]   ; 00524c14
    PUSH ESI                            ; 00524c1a
    MOV EDI,dword ptr [0x00600530]      ; 00524c1b | DAT_00600530
    PUSH EDI                            ; 00524c21 | DAT_01d81080
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_004f6930 ; 00524c22
        ;   XREF to: 004f6930 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_addActorToList_FUN_004f6930(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00524c27
    PUSH 0x0                            ; 00524c2a
    MOV EAX,dword ptr [EBX + 0x20bac]   ; 00524c2c
    PUSH 0x0                            ; 00524c32
    PUSH EAX                            ; 00524c34
    PUSH 0x1                            ; 00524c35
    PUSH EBX                            ; 00524c37
    CALL core_charactr.cpp_FUN_004319d0 ; 00524c38
        ;   XREF to: 004319d0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004319d0()
    ADD ESP,0x14                        ; 00524c3d
    PUSH 0x5cd7a9                       ; 00524c40 | = "CTrap"
    MOV EDX,dword ptr [EBX + 0x20bac]   ; 00524c45
    PUSH EDX                            ; 00524c4b
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 00524c4c
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00524c51
    TEST EAX,EAX                        ; 00524c54
    JZ 0x005258da                       ; 00524c56
        ;   XREF to: 005258da (CONDITIONAL_JUMP)  ; LAB_005258da
    PUSH 0x1                            ; 00524c5c
    PUSH 0x1f                           ; 00524c5e
    MOV EDX,dword ptr [ESP + 0x80]      ; 00524c60
    PUSH EDX                            ; 00524c67
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00524c68
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00524c6d
    MOV dword ptr [EBX + 0x20b64],0x6   ; 00524c70
    MOV dword ptr [EBX + 0x20bac],0x0   ; 00524c7a
        ;   Label: LAB_00524c7a
    CMP dword ptr [EBX + 0x20b64],0x7   ; 00524c84
        ;   Label: LAB_00524c84
    JNZ 0x00524ca6                      ; 00524c8b
        ;   XREF to: 00524ca6 (CONDITIONAL_JUMP)  ; LAB_00524ca6
    MOV ESI,dword ptr [ESP + 0x8c]      ; 00524c8d
    TEST ESI,ESI                        ; 00524c94
    JNZ 0x00525920                      ; 00524c96
        ;   XREF to: 00525920 (CONDITIONAL_JUMP)  ; LAB_00525920
    MOV dword ptr [EBX + 0x20b64],0x0   ; 00524c9c
        ;   Label: LAB_00524c9c
    MOV EAX,dword ptr [ESP + 0x90]      ; 00524ca6
        ;   Label: LAB_00524ca6
    PUSH EAX                            ; 00524cad
    PUSH EBX                            ; 00524cae
    CALL core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_00433ae0 ; 00524caf
        ;   XREF to: 00433ae0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_00433ae0(CCharacter * this_ptr, int layer_action_index)
    ADD ESP,0x8                         ; 00524cb4
    MOV EDX,dword ptr [ESP + 0x74]      ; 00524cb7
        ;   Label: LAB_00524cb7
    INC EDX                             ; 00524cbb
    MOV dword ptr [ESP + 0x74],EDX      ; 00524cbc
    CMP EDX,0x2                         ; 00524cc0
    JL 0x005249ce                       ; 00524cc3
        ;   XREF to: 005249ce (CONDITIONAL_JUMP)  ; LAB_005249ce
    MOV ESP,EBP                         ; 00524cc9
        ;   Label: LAB_00524cc9
    POP EBP                             ; 00524ccb
    POP EDI                             ; 00524ccc
    POP ESI                             ; 00524ccd
    POP EBX                             ; 00524cce
    RET                                 ; 00524ccf
    CMP dword ptr [EBX + 0x20bcc],0x0   ; 00524cd0
        ;   Label: LAB_00524cd0
    JZ 0x00524997                       ; 00524cd7
        ;   XREF to: 00524997 (CONDITIONAL_JUMP)  ; LAB_00524997
    MOV ECX,dword ptr [EBX + 0x2628]    ; 00524cdd
    TEST ECX,ECX                        ; 00524ce3
    JNZ 0x00524d39                      ; 00524ce5
        ;   XREF to: 00524d39 (CONDITIONAL_JUMP)  ; LAB_00524d39
    LEA EAX,[EBX + 0x206e8]             ; 00524ce7
    MOV EAX,dword ptr [EAX + 0x338]     ; 00524ced
    MOV EDX,dword ptr [EBX + 0x25b0]    ; 00524cf3
    MOV dword ptr [ESP + 0x88],EAX      ; 00524cf9
    TEST EDX,EDX                        ; 00524d00
    JZ 0x00524d1a                       ; 00524d02
        ;   XREF to: 00524d1a (CONDITIONAL_JUMP)  ; LAB_00524d1a
    CMP dword ptr [EAX + 0x578],0x2     ; 00524d04
    JNZ 0x00524d1a                      ; 00524d0b
        ;   XREF to: 00524d1a (CONDITIONAL_JUMP)  ; LAB_00524d1a
    MOV EAX,dword ptr [EBX + 0x20c24]   ; 00524d0d
    MOV dword ptr [ESP + 0x88],EAX      ; 00524d13
    MOV ESI,dword ptr [ESP + 0x88]      ; 00524d1a
        ;   Label: LAB_00524d1a
    TEST ESI,ESI                        ; 00524d21
    JNZ 0x00524997                      ; 00524d23
        ;   XREF to: 00524997 (CONDITIONAL_JUMP)  ; LAB_00524997
    CMP dword ptr [ESP + 0x6c],0x0      ; 00524d29
    JGE 0x00524997                      ; 00524d2e
        ;   XREF to: 00524997 (CONDITIONAL_JUMP)  ; LAB_00524997
    JMP 0x00524991                      ; 00524d34
        ;   XREF to: 00524991 (UNCONDITIONAL_JUMP)  ; LAB_00524991
    MOV ESI,dword ptr [0x02d0c150]      ; 00524d39 | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_00524d39
    PUSH ESI                            ; 00524d3f
    PUSH ECX                            ; 00524d40
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00524d41
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 00524d46
    MOV dword ptr [ESP + 0x88],EAX      ; 00524d49
    TEST EAX,EAX                        ; 00524d50
    JNZ 0x00524d1a                      ; 00524d52
        ;   XREF to: 00524d1a (CONDITIONAL_JUMP)  ; LAB_00524d1a
    MOV EAX,dword ptr [EBX + 0x2628]    ; 00524d54
    PUSH EAX                            ; 00524d5a
    MOV ESI,dword ptr [EAX + 0x154]     ; 00524d5b
    CALL dword ptr [ESI + 0x74]         ; 00524d61
    ADD ESP,0x4                         ; 00524d64
    TEST AL,0xb                         ; 00524d67
    JZ 0x00524d1a                       ; 00524d69
        ;   XREF to: 00524d1a (CONDITIONAL_JUMP)  ; LAB_00524d1a
    MOV dword ptr [ESP + 0x6c],0x8      ; 00524d6b
    JMP 0x00524d1a                      ; 00524d73
        ;   XREF to: 00524d1a (UNCONDITIONAL_JUMP)  ; LAB_00524d1a
    CMP EDX,0x8                         ; 00524d75
        ;   Label: LAB_00524d75
    JZ 0x005249ed                       ; 00524d78
        ;   XREF to: 005249ed (CONDITIONAL_JUMP)  ; LAB_005249ed
    CMP EDX,0x9                         ; 00524d7e
    JZ 0x005249ed                       ; 00524d81
        ;   XREF to: 005249ed (CONDITIONAL_JUMP)  ; LAB_005249ed
    MOV EDI,dword ptr [EBX + 0x20bac]   ; 00524d87
    TEST EDI,EDI                        ; 00524d8d
    JNZ 0x005249ed                      ; 00524d8f
        ;   XREF to: 005249ed (CONDITIONAL_JUMP)  ; LAB_005249ed
    CMP EDX,0x2                         ; 00524d95
    JNZ 0x00524da6                      ; 00524d98
        ;   XREF to: 00524da6 (CONDITIONAL_JUMP)  ; LAB_00524da6
    MOV dword ptr [ESP + 0x90],EDI      ; 00524d9a
    JMP 0x005249f8                      ; 00524da1
        ;   XREF to: 005249f8 (UNCONDITIONAL_JUMP)  ; LAB_005249f8
    CMP EDX,0x3                         ; 00524da6
        ;   Label: LAB_00524da6
    JZ 0x00524dc3                       ; 00524da9
        ;   XREF to: 00524dc3 (CONDITIONAL_JUMP)  ; LAB_00524dc3
    MOV ECX,dword ptr [ESP + 0x6c]      ; 00524dab
    TEST ECX,ECX                        ; 00524daf
    JL 0x00524e3d                       ; 00524db1
        ;   XREF to: 00524e3d (CONDITIONAL_JUMP)  ; LAB_00524e3d
    MOV dword ptr [ESP + 0x90],ECX      ; 00524db7
    JMP 0x005249f8                      ; 00524dbe
        ;   XREF to: 005249f8 (UNCONDITIONAL_JUMP)  ; LAB_005249f8
    MOV ESI,0x6                         ; 00524dc3
        ;   Label: LAB_00524dc3
    PUSH ESI                            ; 00524dc8
    PUSH EBX                            ; 00524dc9
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60 ; 00524dca
        ;   XREF to: 00433a60 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60(CCharacter * this_ptr, int state_index)
    MOV dword ptr [ESP + 0xa4],EAX      ; 00524dcf
    MOV dword ptr [ESP + 0x98],ESI      ; 00524dd6
    FLD float ptr [ESP + 0xa4]          ; 00524ddd
    ADD ESP,0x8                         ; 00524de4
    FCOMP double ptr [0x005cd7d7]       ; 00524de7 | DAT_005cd7d7
    FNSTSW AX                           ; 00524ded
    SAHF                                ; 00524def
    JBE 0x005249f8                      ; 00524df0
        ;   XREF to: 005249f8 (CONDITIONAL_JUMP)  ; LAB_005249f8
    FLD float ptr [0x005e350c]          ; 00524df6 | DAT_005e350c
    FMUL float ptr [EBP + 0x18]         ; 00524dfc
    FADD float ptr [EBX + 0x20bdc]      ; 00524dff
    FST float ptr [EBX + 0x20bdc]       ; 00524e05
    FCOMP float ptr [0x005e3510]        ; 00524e0b | DAT_005e3510
    FNSTSW AX                           ; 00524e11
    SAHF                                ; 00524e13
    JA 0x00524e30                       ; 00524e14
        ;   XREF to: 00524e30 (CONDITIONAL_JUMP)  ; LAB_00524e30
    MOV EDI,dword ptr [EBX + 0xcde0]    ; 00524e16
        ;   Label: LAB_00524e16
    TEST EDI,EDI                        ; 00524e1c
    JNZ 0x00524cc9                      ; 00524e1e
        ;   XREF to: 00524cc9 (CONDITIONAL_JUMP)  ; LAB_00524cc9
    MOV dword ptr [ESP + 0x90],EDI      ; 00524e24
    JMP 0x005249f8                      ; 00524e2b
        ;   XREF to: 005249f8 (UNCONDITIONAL_JUMP)  ; LAB_005249f8
    MOV EAX,[0x005e3510]                ; 00524e30 | DAT_005e3510
        ;   Label: LAB_00524e30
    MOV dword ptr [EBX + 0x20bdc],EAX   ; 00524e35
    JMP 0x00524e16                      ; 00524e3b
        ;   XREF to: 00524e16 (UNCONDITIONAL_JUMP)  ; LAB_00524e16
    MOV ESI,dword ptr [ESP + 0x88]      ; 00524e3d
        ;   Label: LAB_00524e3d
    MOV EAX,dword ptr [EBX + 0x20c24]   ; 00524e44
    CMP EAX,ESI                         ; 00524e4a
    JNZ 0x00524ebe                      ; 00524e4c
        ;   XREF to: 00524ebe (CONDITIONAL_JUMP)  ; LAB_00524ebe
    MOV EAX,dword ptr [EBX + 0x20c24]   ; 00524e52
    TEST EAX,EAX                        ; 00524e58
    JZ 0x00524eb0                       ; 00524e5a
        ;   XREF to: 00524eb0 (CONDITIONAL_JUMP)  ; caseD_b
    MOV EAX,dword ptr [EAX + 0x2e0]     ; 00524e5c
    CMP EAX,0xe                         ; 00524e62
    JA 0x00524eb0                       ; 00524e65
        ;   XREF to: 00524eb0 (CONDITIONAL_JUMP)  ; caseD_b
    JMP dword ptr [EAX*0x4 + 0x52486c]  ; 00524e67 | caseD_5 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,0x2                         ; 00524e6e
        ;   Label: caseD_0
    MOV dword ptr [ESP + 0x90],EAX      ; 00524e73
        ;   Label: LAB_00524e73
    JMP 0x005249f8                      ; 00524e7a
        ;   XREF to: 005249f8 (UNCONDITIONAL_JUMP)  ; LAB_005249f8
    MOV EAX,0x4                         ; 00524e7f
        ;   Label: caseD_1
    JMP 0x00524e73                      ; 00524e84
        ;   XREF to: 00524e73 (UNCONDITIONAL_JUMP)  ; LAB_00524e73
    MOV EAX,0xe                         ; 00524e86
        ;   Label: caseD_9
    JMP 0x00524e73                      ; 00524e8b
        ;   XREF to: 00524e73 (UNCONDITIONAL_JUMP)  ; LAB_00524e73
    MOV EAX,0x7                         ; 00524e8d
        ;   Label: caseD_4
    JMP 0x00524e73                      ; 00524e92
        ;   XREF to: 00524e73 (UNCONDITIONAL_JUMP)  ; LAB_00524e73
    MOV EAX,0x5                         ; 00524e94
        ;   Label: caseD_2
    JMP 0x00524e73                      ; 00524e99
        ;   XREF to: 00524e73 (UNCONDITIONAL_JUMP)  ; LAB_00524e73
    MOV EAX,0x8                         ; 00524e9b
        ;   Label: caseD_7
    JMP 0x00524e73                      ; 00524ea0
        ;   XREF to: 00524e73 (UNCONDITIONAL_JUMP)  ; LAB_00524e73
    MOV EAX,0x11                        ; 00524ea2
        ;   Label: caseD_d
    JMP 0x00524e73                      ; 00524ea7
        ;   XREF to: 00524e73 (UNCONDITIONAL_JUMP)  ; LAB_00524e73
    MOV EAX,0x12                        ; 00524ea9
        ;   Label: caseD_e
    JMP 0x00524e73                      ; 00524eae
        ;   XREF to: 00524e73 (UNCONDITIONAL_JUMP)  ; LAB_00524e73
    XOR EAX,EAX                         ; 00524eb0
        ;   Label: caseD_3
    MOV dword ptr [ESP + 0x90],EAX      ; 00524eb2
    JMP 0x005249f8                      ; 00524eb9
        ;   XREF to: 005249f8 (UNCONDITIONAL_JUMP)  ; LAB_005249f8
    TEST EAX,EAX                        ; 00524ebe
        ;   Label: LAB_00524ebe
    JNZ 0x00524f2d                      ; 00524ec0
        ;   XREF to: 00524f2d (CONDITIONAL_JUMP)  ; LAB_00524f2d
    TEST ESI,ESI                        ; 00524ec6
    JNZ 0x00524f1b                      ; 00524ec8
        ;   XREF to: 00524f1b (CONDITIONAL_JUMP)  ; LAB_00524f1b
    MOV dword ptr [ESP + 0x90],EAX      ; 00524eca
        ;   Label: LAB_00524eca
    JMP 0x005249f8                      ; 00524ed1
        ;   XREF to: 005249f8 (UNCONDITIONAL_JUMP)  ; LAB_005249f8
    MOV EAX,0x1                         ; 00524ed6
        ;   Label: caseD_0
    JMP 0x00524eca                      ; 00524edb
        ;   XREF to: 00524eca (UNCONDITIONAL_JUMP)  ; LAB_00524eca
    MOV EAX,[0x01d72c08]                ; 00524edd | g_CMeleeClassInfo.name_hash
        ;   Label: caseD_7
    PUSH EAX                            ; 00524ee2
    PUSH ESI                            ; 00524ee3
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00524ee4
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 00524ee9
    TEST EAX,EAX                        ; 00524eec
    JZ 0x00524f00                       ; 00524eee
        ;   XREF to: 00524f00 (CONDITIONAL_JUMP)  ; LAB_00524f00
    CMP dword ptr [EAX + 0x5a4],0x0     ; 00524ef0
    JZ 0x00524f00                       ; 00524ef7
        ;   XREF to: 00524f00 (CONDITIONAL_JUMP)  ; LAB_00524f00
    MOV EAX,0x3                         ; 00524ef9
    JMP 0x00524eca                      ; 00524efe
        ;   XREF to: 00524eca (UNCONDITIONAL_JUMP)  ; LAB_00524eca
    MOV ECX,dword ptr [0x01d5bae8]      ; 00524f00 | g_CHolycrossClassInfo.name_hash
        ;   Label: LAB_00524f00
    PUSH ECX                            ; 00524f06
    PUSH ESI                            ; 00524f07
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00524f08
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 00524f0d
    TEST EAX,EAX                        ; 00524f10
    JZ 0x00524eca                       ; 00524f12
        ;   XREF to: 00524eca (CONDITIONAL_JUMP)  ; LAB_00524eca
    MOV EAX,0x3                         ; 00524f14
        ;   Label: caseD_1
    JMP 0x00524eca                      ; 00524f19
        ;   XREF to: 00524eca (UNCONDITIONAL_JUMP)  ; LAB_00524eca
    MOV EAX,dword ptr [ESI + 0x2e0]     ; 00524f1b
        ;   Label: LAB_00524f1b
    CMP EAX,0x8                         ; 00524f21
    JA 0x00524f14                       ; 00524f24
        ;   XREF to: 00524f14 (CONDITIONAL_JUMP)  ; caseD_6
    JMP dword ptr [EAX*0x4 + 0x5248a8]  ; 00524f26 | caseD_5 | caseD_6 | caseD_8
        ;   Label: switchD
    MOV ESI,EAX                         ; 00524f2d
        ;   Label: LAB_00524f2d
    JNZ 0x00524f82                      ; 00524f2f
        ;   XREF to: 00524f82 (CONDITIONAL_JUMP)  ; LAB_00524f82
    MOV dword ptr [ESP + 0x90],EAX      ; 00524f31
        ;   Label: LAB_00524f31
    JMP 0x005249f8                      ; 00524f38
        ;   XREF to: 005249f8 (UNCONDITIONAL_JUMP)  ; LAB_005249f8
    MOV EAX,0x1                         ; 00524f3d
        ;   Label: caseD_0
    JMP 0x00524f31                      ; 00524f42
        ;   XREF to: 00524f31 (UNCONDITIONAL_JUMP)  ; LAB_00524f31
    MOV EAX,[0x01d72c08]                ; 00524f44 | g_CMeleeClassInfo.name_hash
        ;   Label: caseD_7
    PUSH EAX                            ; 00524f49
    PUSH ESI                            ; 00524f4a
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00524f4b
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 00524f50
    TEST EAX,EAX                        ; 00524f53
    JZ 0x00524f67                       ; 00524f55
        ;   XREF to: 00524f67 (CONDITIONAL_JUMP)  ; LAB_00524f67
    CMP dword ptr [EAX + 0x5a4],0x0     ; 00524f57
    JZ 0x00524f67                       ; 00524f5e
        ;   XREF to: 00524f67 (CONDITIONAL_JUMP)  ; LAB_00524f67
    MOV EAX,0x3                         ; 00524f60
    JMP 0x00524f31                      ; 00524f65
        ;   XREF to: 00524f31 (UNCONDITIONAL_JUMP)  ; LAB_00524f31
    MOV ECX,dword ptr [0x01d5bae8]      ; 00524f67 | g_CHolycrossClassInfo.name_hash
        ;   Label: LAB_00524f67
    PUSH ECX                            ; 00524f6d
    PUSH ESI                            ; 00524f6e
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00524f6f
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 00524f74
    TEST EAX,EAX                        ; 00524f77
    JZ 0x00524f31                       ; 00524f79
        ;   XREF to: 00524f31 (CONDITIONAL_JUMP)  ; LAB_00524f31
    MOV EAX,0x3                         ; 00524f7b
        ;   Label: caseD_1
    JMP 0x00524f31                      ; 00524f80
        ;   XREF to: 00524f31 (UNCONDITIONAL_JUMP)  ; LAB_00524f31
    MOV EAX,dword ptr [EAX + 0x2e0]     ; 00524f82
        ;   Label: LAB_00524f82
    CMP EAX,0x8                         ; 00524f88
    JA 0x00524f7b                       ; 00524f8b
        ;   XREF to: 00524f7b (CONDITIONAL_JUMP)  ; caseD_6
    JMP dword ptr [EAX*0x4 + 0x5248cc]  ; 00524f8d | caseD_5 | caseD_6 | caseD_8
        ;   Label: switchD
    FLD float ptr [EBX + 0x2f04]        ; 00524f94
        ;   Label: LAB_00524f94
    FCOMP double ptr [0x005cd7d7]       ; 00524f9a | DAT_005cd7d7
    FNSTSW AX                           ; 00524fa0
    SAHF                                ; 00524fa2
    JBE 0x00524a9c                      ; 00524fa3
        ;   XREF to: 00524a9c (CONDITIONAL_JUMP)  ; LAB_00524a9c
    MOV dword ptr [EBX + 0x2f04],0x3f800000 ; 00524fa9
    MOV dword ptr [EBX + 0x2f00],0x1a   ; 00524fb3
    JMP 0x00524a9c                      ; 00524fbd
        ;   XREF to: 00524a9c (UNCONDITIONAL_JUMP)  ; LAB_00524a9c
    CMP dword ptr [EBX + 0x20b64],0xc   ; 00524fc2
        ;   Label: LAB_00524fc2
    JNZ 0x0052501a                      ; 00524fc9
        ;   XREF to: 0052501a (CONDITIONAL_JUMP)  ; LAB_0052501a
    FLD float ptr [EBX + 0x2f04]        ; 00524fcb
    FCOMP double ptr [0x005cd7e7]       ; 00524fd1 | DAT_005cd7e7
    FNSTSW AX                           ; 00524fd7
    SAHF                                ; 00524fd9
    JBE 0x0052501a                      ; 00524fda
        ;   XREF to: 0052501a (CONDITIONAL_JUMP)  ; LAB_0052501a
    MOV EDI,dword ptr [EBX + 0x20c24]   ; 00524fdc
    TEST EDI,EDI                        ; 00524fe2
    JZ 0x00525010                       ; 00524fe4
        ;   XREF to: 00525010 (CONDITIONAL_JUMP)  ; LAB_00525010
    PUSH EDI                            ; 00524fe6
    MOV ESI,dword ptr [EDI + 0x154]     ; 00524fe7
    CALL dword ptr [ESI + 0xe8]         ; 00524fed
    ADD ESP,0x4                         ; 00524ff3
    TEST EAX,EAX                        ; 00524ff6
    JZ 0x00525010                       ; 00524ff8
        ;   XREF to: 00525010 (CONDITIONAL_JUMP)  ; LAB_00525010
    MOV EAX,dword ptr [EBX + 0x20c24]   ; 00524ffa
    PUSH EAX                            ; 00525000
    MOV ESI,dword ptr [EAX + 0x154]     ; 00525001
    CALL dword ptr [ESI + 0xe4]         ; 00525007
    ADD ESP,0x4                         ; 0052500d
    MOV dword ptr [EBX + 0x20b64],0x0   ; 00525010
        ;   Label: LAB_00525010
    FLD float ptr [EBX + 0x2f04]        ; 0052501a
        ;   Label: LAB_0052501a
    FCOMP double ptr [0x005cd7d7]       ; 00525020 | DAT_005cd7d7
    FNSTSW AX                           ; 00525026
    SAHF                                ; 00525028
    JBE 0x00524a9c                      ; 00525029
        ;   XREF to: 00524a9c (CONDITIONAL_JUMP)  ; LAB_00524a9c
    MOV dword ptr [EBX + 0x2f04],0x3f800000 ; 0052502f
    MOV dword ptr [EBX + 0x20b64],0x0   ; 00525039
    MOV dword ptr [EBX + 0x2f00],0x1d   ; 00525043
    JMP 0x00524a9c                      ; 0052504d
        ;   XREF to: 00524a9c (UNCONDITIONAL_JUMP)  ; LAB_00524a9c
    CMP dword ptr [EBX + 0x20b64],0xd   ; 00525052
        ;   Label: LAB_00525052
    JNZ 0x005250aa                      ; 00525059
        ;   XREF to: 005250aa (CONDITIONAL_JUMP)  ; LAB_005250aa
    FLD float ptr [EBX + 0x2f04]        ; 0052505b
    FCOMP double ptr [0x005cd7df]       ; 00525061 | DAT_005cd7df
    FNSTSW AX                           ; 00525067
    SAHF                                ; 00525069
    JBE 0x005250aa                      ; 0052506a
        ;   XREF to: 005250aa (CONDITIONAL_JUMP)  ; LAB_005250aa
    MOV ECX,dword ptr [EBX + 0x20c24]   ; 0052506c
    TEST ECX,ECX                        ; 00525072
    JZ 0x005250a0                       ; 00525074
        ;   XREF to: 005250a0 (CONDITIONAL_JUMP)  ; LAB_005250a0
    PUSH ECX                            ; 00525076
    MOV ESI,dword ptr [ECX + 0x154]     ; 00525077
    CALL dword ptr [ESI + 0xe8]         ; 0052507d
    ADD ESP,0x4                         ; 00525083
    TEST EAX,EAX                        ; 00525086
    JZ 0x005250a0                       ; 00525088
        ;   XREF to: 005250a0 (CONDITIONAL_JUMP)  ; LAB_005250a0
    MOV EAX,dword ptr [EBX + 0x20c24]   ; 0052508a
    PUSH EAX                            ; 00525090
    MOV ESI,dword ptr [EAX + 0x154]     ; 00525091
    CALL dword ptr [ESI + 0xe4]         ; 00525097
    ADD ESP,0x4                         ; 0052509d
    MOV dword ptr [EBX + 0x20b64],0x0   ; 005250a0
        ;   Label: LAB_005250a0
    FLD float ptr [EBX + 0x2f04]        ; 005250aa
        ;   Label: LAB_005250aa
    FCOMP double ptr [0x005cd7d7]       ; 005250b0 | DAT_005cd7d7
    FNSTSW AX                           ; 005250b6
    SAHF                                ; 005250b8
    JBE 0x00524a9c                      ; 005250b9
        ;   XREF to: 00524a9c (CONDITIONAL_JUMP)  ; LAB_00524a9c
    MOV dword ptr [EBX + 0x2f04],0x3f800000 ; 005250bf
    MOV dword ptr [EBX + 0x20b64],0x0   ; 005250c9
    MOV dword ptr [EBX + 0x2f00],0x1e   ; 005250d3
    JMP 0x00524a9c                      ; 005250dd
        ;   XREF to: 00524a9c (UNCONDITIONAL_JUMP)  ; LAB_00524a9c
    CMP dword ptr [EBX + 0x20b64],0xa   ; 005250e2
        ;   Label: LAB_005250e2
    JNZ 0x0052513a                      ; 005250e9
        ;   XREF to: 0052513a (CONDITIONAL_JUMP)  ; LAB_0052513a
    FLD float ptr [EBX + 0x2f04]        ; 005250eb
    FCOMP double ptr [0x005cd7e7]       ; 005250f1 | DAT_005cd7e7
    FNSTSW AX                           ; 005250f7
    SAHF                                ; 005250f9
    JBE 0x0052513a                      ; 005250fa
        ;   XREF to: 0052513a (CONDITIONAL_JUMP)  ; LAB_0052513a
    MOV EDX,dword ptr [EBX + 0x20c24]   ; 005250fc
    TEST EDX,EDX                        ; 00525102
    JZ 0x00525130                       ; 00525104
        ;   XREF to: 00525130 (CONDITIONAL_JUMP)  ; LAB_00525130
    PUSH EDX                            ; 00525106
    MOV ESI,dword ptr [EDX + 0x154]     ; 00525107
    CALL dword ptr [ESI + 0xe8]         ; 0052510d
    ADD ESP,0x4                         ; 00525113
    TEST EAX,EAX                        ; 00525116
    JZ 0x00525130                       ; 00525118
        ;   XREF to: 00525130 (CONDITIONAL_JUMP)  ; LAB_00525130
    MOV EAX,dword ptr [EBX + 0x20c24]   ; 0052511a
    PUSH EAX                            ; 00525120
    MOV ESI,dword ptr [EAX + 0x154]     ; 00525121
    CALL dword ptr [ESI + 0xe4]         ; 00525127
    ADD ESP,0x4                         ; 0052512d
    MOV dword ptr [EBX + 0x20b64],0x0   ; 00525130
        ;   Label: LAB_00525130
    FLD float ptr [EBX + 0x2f04]        ; 0052513a
        ;   Label: LAB_0052513a
    FCOMP double ptr [0x005cd7d7]       ; 00525140 | DAT_005cd7d7
    FNSTSW AX                           ; 00525146
    SAHF                                ; 00525148
    JBE 0x00524a9c                      ; 00525149
        ;   XREF to: 00524a9c (CONDITIONAL_JUMP)  ; LAB_00524a9c
    MOV dword ptr [EBX + 0x2f04],0x3f800000 ; 0052514f
    MOV dword ptr [EBX + 0x20b64],0x0   ; 00525159
    MOV dword ptr [EBX + 0x2f00],0xb    ; 00525163
    JMP 0x00524a9c                      ; 0052516d
        ;   XREF to: 00524a9c (UNCONDITIONAL_JUMP)  ; LAB_00524a9c
    CMP dword ptr [EBX + 0x20b64],0xb   ; 00525172
        ;   Label: LAB_00525172
    JNZ 0x005251cc                      ; 00525179
        ;   XREF to: 005251cc (CONDITIONAL_JUMP)  ; LAB_005251cc
    FLD float ptr [EBX + 0x2f04]        ; 0052517b
    FCOMP double ptr [0x005cd7e7]       ; 00525181 | DAT_005cd7e7
    FNSTSW AX                           ; 00525187
    SAHF                                ; 00525189
    JBE 0x005251cc                      ; 0052518a
        ;   XREF to: 005251cc (CONDITIONAL_JUMP)  ; LAB_005251cc
    MOV ESI,dword ptr [EBX + 0x20c24]   ; 0052518c
    TEST ESI,ESI                        ; 00525192
    JZ 0x005251c2                       ; 00525194
        ;   XREF to: 005251c2 (CONDITIONAL_JUMP)  ; LAB_005251c2
    MOV EAX,ESI                         ; 00525196
    PUSH EAX                            ; 00525198
    MOV ESI,dword ptr [ESI + 0x154]     ; 00525199
    CALL dword ptr [ESI + 0xe8]         ; 0052519f
    ADD ESP,0x4                         ; 005251a5
    TEST EAX,EAX                        ; 005251a8
    JZ 0x005251c2                       ; 005251aa
        ;   XREF to: 005251c2 (CONDITIONAL_JUMP)  ; LAB_005251c2
    MOV EAX,dword ptr [EBX + 0x20c24]   ; 005251ac
    PUSH EAX                            ; 005251b2
    MOV ESI,dword ptr [EAX + 0x154]     ; 005251b3
    CALL dword ptr [ESI + 0xe4]         ; 005251b9
    ADD ESP,0x4                         ; 005251bf
    MOV dword ptr [EBX + 0x20b64],0x0   ; 005251c2
        ;   Label: LAB_005251c2
    FLD float ptr [EBX + 0x2f04]        ; 005251cc
        ;   Label: LAB_005251cc
    FCOMP double ptr [0x005cd7d7]       ; 005251d2 | DAT_005cd7d7
    FNSTSW AX                           ; 005251d8
    SAHF                                ; 005251da
    JBE 0x00524a9c                      ; 005251db
        ;   XREF to: 00524a9c (CONDITIONAL_JUMP)  ; LAB_00524a9c
    MOV dword ptr [EBX + 0x2f04],0x3f800000 ; 005251e1
    MOV dword ptr [EBX + 0x20b64],0x0   ; 005251eb
    MOV dword ptr [EBX + 0x2f00],0xb    ; 005251f5
    JMP 0x00524a9c                      ; 005251ff
        ;   XREF to: 00524a9c (UNCONDITIONAL_JUMP)  ; LAB_00524a9c
    MOV EAX,0xb                         ; 00525204
        ;   Label: LAB_00525204
    MOV EDX,EAX                         ; 00525209
    MOV ECX,dword ptr [ESI + 0x64]      ; 0052520b
    SAR EDX,0x1f                        ; 0052520e
    IDIV ECX                            ; 00525211
    MOV dword ptr [ESP + 0x9c],EAX      ; 00525213
    FILD dword ptr [ESP + 0x9c]         ; 0052521a
    FCOMP float ptr [EBX + 0x2f04]      ; 00525221
    FNSTSW AX                           ; 00525227
    SAHF                                ; 00525229
    JA 0x00524a9c                       ; 0052522a
        ;   XREF to: 00524a9c (CONDITIONAL_JUMP)  ; LAB_00524a9c
    PUSH EDI                            ; 00525230
    CALL core_dynamite.cpp_CDynamite_lightFuse_FUN_0047b1e0 ; 00525231
        ;   XREF to: 0047b1e0 (UNCONDITIONAL_CALL)  ; void core_dynamite.cpp_CDynamite_lightFuse_FUN_0047b1e0(CDynamite * this_ptr)
    ADD ESP,0x4                         ; 00525236
    JMP 0x00524a9c                      ; 00525239
        ;   XREF to: 00524a9c (UNCONDITIONAL_JUMP)  ; LAB_00524a9c
    CMP dword ptr [EBX + 0x20b64],0x3   ; 0052523e
        ;   Label: LAB_0052523e
    JNZ 0x005253cd                      ; 00525245
        ;   XREF to: 005253cd (CONDITIONAL_JUMP)  ; LAB_005253cd
    MOV EAX,0xb                         ; 0052524b
    MOV EDX,EAX                         ; 00525250
    MOV ECX,dword ptr [ESI + 0x64]      ; 00525252
    SAR EDX,0x1f                        ; 00525255
    IDIV ECX                            ; 00525258
    MOV dword ptr [ESP + 0x9c],EAX      ; 0052525a
    FILD dword ptr [ESP + 0x9c]         ; 00525261
    FCOMP float ptr [EBX + 0x2f04]      ; 00525268
    FNSTSW AX                           ; 0052526e
    SAHF                                ; 00525270
    JA 0x005253cd                       ; 00525271
        ;   XREF to: 005253cd (CONDITIONAL_JUMP)  ; LAB_005253cd
    PUSH EBX                            ; 00525277
    LEA ESI,[ESP + 0x28]                ; 00525278
    LEA EDI,[ESP + 0x34]                ; 0052527c
    CALL unkafter_prye.cpp_FUN_00524800 ; 00525280
        ;   XREF to: 00524800 (UNCONDITIONAL_CALL)  ; undefined unkafter_prye.cpp_FUN_00524800()
    LEA ESI,[ESP + 0x28]                ; 00525285
    ADD ESP,0x4                         ; 00525289
    MOVSD ES:EDI,ESI                    ; 0052528c
    MOVSD ES:EDI,ESI                    ; 0052528d
    MOVSD ES:EDI,ESI                    ; 0052528e
    LEA EDI,[ESP + 0x3c]                ; 0052528f
    LEA ESI,[ESP + 0x30]                ; 00525293
    MOVSD ES:EDI,ESI                    ; 00525297
    MOVSD ES:EDI,ESI                    ; 00525298
    MOVSD ES:EDI,ESI                    ; 00525299
    MOV ESI,dword ptr [0x007dff04]      ; 0052529a | g_CBindEvilClassInfo.name_hash
    PUSH ESI                            ; 005252a0
    MOV EDI,dword ptr [EBX + 0x20c24]   ; 005252a1
    PUSH EDI                            ; 005252a7
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 005252a8
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 005252ad
    MOV dword ptr [ESP + 0x80],EAX      ; 005252b0
    TEST EAX,EAX                        ; 005252b7
    JZ 0x0052531b                       ; 005252b9
        ;   XREF to: 0052531b (CONDITIONAL_JUMP)  ; LAB_0052531b
    LEA EAX,[ESP + 0x3c]                ; 005252bb
    PUSH EAX                            ; 005252bf
    PUSH EBX                            ; 005252c0
    LEA ESI,[ESP + 0x50]                ; 005252c1
    LEA EDI,[ESP + 0x14]                ; 005252c5
    CALL core_actor.cpp_FUN_00408b00    ; 005252c9
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[ESP + 0x50]                ; 005252ce
    ADD ESP,0x8                         ; 005252d2
    MOVSD ES:EDI,ESI                    ; 005252d5
    MOVSD ES:EDI,ESI                    ; 005252d6
    MOVSD ES:EDI,ESI                    ; 005252d7
    MOV ESI,dword ptr [ESP + 0x80]      ; 005252d8
    LEA EAX,[ESP + 0xc]                 ; 005252df
    ADD ESI,0x594                       ; 005252e3
    CMP ESI,EAX                         ; 005252e9
    JZ 0x005252fd                       ; 005252eb
        ;   XREF to: 005252fd (CONDITIONAL_JUMP)  ; LAB_005252fd
    MOV EDX,dword ptr [EAX]             ; 005252ed
    MOV dword ptr [ESI],EDX             ; 005252ef
    MOV EDX,dword ptr [EAX + 0x4]       ; 005252f1
    MOV dword ptr [ESI + 0x4],EDX       ; 005252f4
    MOV EDX,dword ptr [EAX + 0x8]       ; 005252f7
    MOV dword ptr [ESI + 0x8],EDX       ; 005252fa
    MOV EDX,dword ptr [ESP + 0x80]      ; 005252fd
        ;   Label: LAB_005252fd
    MOV EAX,dword ptr [ESP + 0x80]      ; 00525304
    PUSH EDX                            ; 0052530b
    MOV EAX,dword ptr [EAX + 0x154]     ; 0052530c
    CALL dword ptr [EAX + 0xe4]         ; 00525312
    ADD ESP,0x4                         ; 00525318
    MOV ECX,dword ptr [0x01549b0c]      ; 0052531b | g_CDiseaseClassInfo.name_hash
        ;   Label: LAB_0052531b
    PUSH ECX                            ; 00525321
    MOV ESI,dword ptr [EBX + 0x20c24]   ; 00525322
    PUSH ESI                            ; 00525328
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00525329
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV dword ptr [ESP + 0x84],EAX      ; 0052532e
    ADD ESP,0x8                         ; 00525335
    MOV dword ptr [ESP + 0x70],EAX      ; 00525338
    TEST EAX,EAX                        ; 0052533c
    JZ 0x00525398                       ; 0052533e
        ;   XREF to: 00525398 (CONDITIONAL_JUMP)  ; LAB_00525398
    LEA EAX,[ESP + 0x3c]                ; 00525340
    PUSH EAX                            ; 00525344
    PUSH EBX                            ; 00525345
    LEA ESI,[ESP + 0x20]                ; 00525346
    LEA EDI,[ESP + 0x8]                 ; 0052534a
    CALL core_actor.cpp_FUN_00408b00    ; 0052534e
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[ESP + 0x20]                ; 00525353
    ADD ESP,0x8                         ; 00525357
    MOVSD ES:EDI,ESI                    ; 0052535a
    MOVSD ES:EDI,ESI                    ; 0052535b
    MOVSD ES:EDI,ESI                    ; 0052535c
    MOV ESI,dword ptr [ESP + 0x7c]      ; 0052535d
    MOV EAX,ESP                         ; 00525361
    ADD ESI,0x598                       ; 00525363
    CMP ESI,EAX                         ; 00525369
    JZ 0x00525380                       ; 0052536b
        ;   XREF to: 00525380 (CONDITIONAL_JUMP)  ; LAB_00525380
    MOV EAX,dword ptr [ESP]             ; 0052536d
    MOV dword ptr [ESI],EAX             ; 00525370
    MOV EAX,dword ptr [ESP + 0x4]       ; 00525372
    MOV dword ptr [ESI + 0x4],EAX       ; 00525376
    MOV EAX,dword ptr [ESP + 0x8]       ; 00525379
    MOV dword ptr [ESI + 0x8],EAX       ; 0052537d
    MOV EDX,dword ptr [ESP + 0x70]      ; 00525380
        ;   Label: LAB_00525380
    MOV EAX,dword ptr [ESP + 0x70]      ; 00525384
    PUSH EDX                            ; 00525388
    MOV EAX,dword ptr [EAX + 0x154]     ; 00525389
    CALL dword ptr [EAX + 0xe4]         ; 0052538f
    ADD ESP,0x4                         ; 00525395
    CMP dword ptr [EBX + 0x2628],0x0    ; 00525398
        ;   Label: LAB_00525398
    JZ 0x005253b8                       ; 0052539f
        ;   XREF to: 005253b8 (CONDITIONAL_JUMP)  ; LAB_005253b8
    LEA ESI,[ESP + 0x3c]                ; 005253a1
    PUSH ESI                            ; 005253a5
    PUSH 0x1                            ; 005253a6
    MOV EAX,dword ptr [EBX + 0x154]     ; 005253a8
    PUSH EBX                            ; 005253ae
    CALL dword ptr [EAX + 0x128]        ; 005253af
    ADD ESP,0xc                         ; 005253b5
    MOV dword ptr [EBX + 0x20b64],0x0   ; 005253b8
        ;   Label: LAB_005253b8
    MOV EAX,[0x005e3508]                ; 005253c2 | DAT_005e3508
    MOV dword ptr [EBX + 0x20bdc],EAX   ; 005253c7
    FLD float ptr [EBX + 0x2f04]        ; 005253cd
        ;   Label: LAB_005253cd
    FLD1                                ; 005253d3
    FCOMPP                              ; 005253d5
    FNSTSW AX                           ; 005253d7
    SAHF                                ; 005253d9
    JA 0x00524a9c                       ; 005253da
        ;   XREF to: 00524a9c (CONDITIONAL_JUMP)  ; LAB_00524a9c
    MOV dword ptr [EBX + 0x2f00],0x0    ; 005253e0
    MOV dword ptr [EBX + 0x2f04],0x0    ; 005253ea
    JMP 0x00524a9c                      ; 005253f4
        ;   XREF to: 00524a9c (UNCONDITIONAL_JUMP)  ; LAB_00524a9c
    MOV ECX,0x3f19999a                  ; 005253f9
        ;   Label: LAB_005253f9
    MOV ESI,dword ptr [ESP + 0x84]      ; 005253fe
    MOV dword ptr [ESP + 0x64],ECX      ; 00525405
    CMP ESI,ECX                         ; 00525409
    JGE 0x00524a9c                      ; 0052540b
        ;   XREF to: 00524a9c (CONDITIONAL_JUMP)  ; LAB_00524a9c
    FLD float ptr [EBX + 0x2f04]        ; 00525411
    FCOMP float ptr [ESP + 0x64]        ; 00525417
    FNSTSW AX                           ; 0052541b
    SAHF                                ; 0052541d
    JC 0x00524a9c                       ; 0052541e
        ;   XREF to: 00524a9c (CONDITIONAL_JUMP)  ; LAB_00524a9c
    MOV EAX,0x5cd77f                    ; 00525424 | = "CShotgun"
    PUSH EAX                            ; 00525429 | = "CShotgun"
    MOV EDI,dword ptr [EBX + 0x20c24]   ; 0052542a
    PUSH EDI                            ; 00525430
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 00525431
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00525436
    TEST EAX,EAX                        ; 00525439
    JZ 0x00524a9c                       ; 0052543b
        ;   XREF to: 00524a9c (CONDITIONAL_JUMP)  ; LAB_00524a9c
    MOV EAX,dword ptr [EBX + 0x20c24]   ; 00525441
    PUSH EAX                            ; 00525447
    MOV ESI,dword ptr [EAX + 0x154]     ; 00525448
    CALL dword ptr [ESI + 0xd8]         ; 0052544e
    ADD ESP,0x4                         ; 00525454
    JMP 0x00524a9c                      ; 00525457
        ;   XREF to: 00524a9c (UNCONDITIONAL_JUMP)  ; LAB_00524a9c
    MOV EDI,0x3f4ccccd                  ; 0052545c
        ;   Label: LAB_0052545c
    MOV EDX,dword ptr [ESP + 0x84]      ; 00525461
    MOV dword ptr [ESP + 0x5c],EDI      ; 00525468
    CMP EDX,EDI                         ; 0052546c
    JGE 0x00524a9c                      ; 0052546e
        ;   XREF to: 00524a9c (CONDITIONAL_JUMP)  ; LAB_00524a9c
    FLD float ptr [EBX + 0x2f04]        ; 00525474
    FCOMP float ptr [ESP + 0x5c]        ; 0052547a
    FNSTSW AX                           ; 0052547e
    SAHF                                ; 00525480
    JC 0x00524a9c                       ; 00525481
        ;   XREF to: 00524a9c (CONDITIONAL_JUMP)  ; LAB_00524a9c
    MOV EAX,0x5cd788                    ; 00525487 | = "CRifle"
    PUSH EAX                            ; 0052548c | = "CRifle"
    MOV ECX,dword ptr [EBX + 0x20c24]   ; 0052548d
    PUSH ECX                            ; 00525493
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 00525494
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00525499
    TEST EAX,EAX                        ; 0052549c
    JZ 0x00524a9c                       ; 0052549e
        ;   XREF to: 00524a9c (CONDITIONAL_JUMP)  ; LAB_00524a9c
    MOV EAX,dword ptr [EBX + 0x20c24]   ; 005254a4
    PUSH EAX                            ; 005254aa
    MOV ESI,dword ptr [EAX + 0x154]     ; 005254ab
    CALL dword ptr [ESI + 0xd8]         ; 005254b1
    ADD ESP,0x4                         ; 005254b7
    JMP 0x00524a9c                      ; 005254ba
        ;   XREF to: 00524a9c (UNCONDITIONAL_JUMP)  ; LAB_00524a9c
    MOV EDX,0x3ebd70a4                  ; 005254bf
        ;   Label: LAB_005254bf
    MOV ECX,dword ptr [ESP + 0x84]      ; 005254c4
    MOV dword ptr [ESP + 0x68],EDX      ; 005254cb
    CMP ECX,EDX                         ; 005254cf
    JGE 0x00524a9c                      ; 005254d1
        ;   XREF to: 00524a9c (CONDITIONAL_JUMP)  ; LAB_00524a9c
    FLD float ptr [EBX + 0x2f04]        ; 005254d7
    FCOMP float ptr [ESP + 0x68]        ; 005254dd
    FNSTSW AX                           ; 005254e1
    SAHF                                ; 005254e3
    JC 0x00524a9c                       ; 005254e4
        ;   XREF to: 00524a9c (CONDITIONAL_JUMP)  ; LAB_00524a9c
    MOV ESI,dword ptr [EBX + 0x20c24]   ; 005254ea
    TEST ESI,ESI                        ; 005254f0
    JZ 0x00524a9c                       ; 005254f2
        ;   XREF to: 00524a9c (CONDITIONAL_JUMP)  ; LAB_00524a9c
    MOV EDI,dword ptr [0x02d0c150]      ; 005254f8 | g_CWeaponClassInfo.name_hash
    PUSH EDI                            ; 005254fe
    PUSH ESI                            ; 005254ff
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00525500
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 00525505
    TEST EAX,EAX                        ; 00525508
    JZ 0x00524a9c                       ; 0052550a
        ;   XREF to: 00524a9c (CONDITIONAL_JUMP)  ; LAB_00524a9c
    CMP dword ptr [EAX + 0x56c],0x9     ; 00525510
    JNZ 0x0052552d                      ; 00525517
        ;   XREF to: 0052552d (CONDITIONAL_JUMP)  ; LAB_0052552d
    PUSH 0x8                            ; 00525519
    MOV ESI,dword ptr [EAX + 0x154]     ; 0052551b
    PUSH EAX                            ; 00525521
    CALL dword ptr [ESI + 0x78]         ; 00525522
    ADD ESP,0x8                         ; 00525525
    JMP 0x00524a9c                      ; 00525528
        ;   XREF to: 00524a9c (UNCONDITIONAL_JUMP)  ; LAB_00524a9c
    PUSH 0x1                            ; 0052552d
        ;   Label: LAB_0052552d
    MOV ESI,dword ptr [EAX + 0x154]     ; 0052552f
    PUSH EAX                            ; 00525535
    CALL dword ptr [ESI + 0x78]         ; 00525536
    ADD ESP,0x8                         ; 00525539
    JMP 0x00524a9c                      ; 0052553c
        ;   XREF to: 00524a9c (UNCONDITIONAL_JUMP)  ; LAB_00524a9c
    MOV ESI,0x3f28f5c3                  ; 00525541
        ;   Label: LAB_00525541
    MOV EDI,dword ptr [ESP + 0x84]      ; 00525546
    MOV dword ptr [ESP + 0x60],ESI      ; 0052554d
    CMP EDI,ESI                         ; 00525551
    JGE 0x00524a9c                      ; 00525553
        ;   XREF to: 00524a9c (CONDITIONAL_JUMP)  ; LAB_00524a9c
    FLD float ptr [EBX + 0x2f04]        ; 00525559
    FCOMP float ptr [ESP + 0x60]        ; 0052555f
    FNSTSW AX                           ; 00525563
    SAHF                                ; 00525565
    JC 0x00524a9c                       ; 00525566
        ;   XREF to: 00524a9c (CONDITIONAL_JUMP)  ; LAB_00524a9c
    MOV EAX,[0x02d0c150]                ; 0052556c | g_CWeaponClassInfo.name_hash
    PUSH EAX                            ; 00525571
    MOV EDX,dword ptr [EBX + 0x20c24]   ; 00525572
    PUSH EDX                            ; 00525578
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00525579
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 0052557e
    TEST EAX,EAX                        ; 00525581
    JZ 0x0052559d                       ; 00525583
        ;   XREF to: 0052559d (CONDITIONAL_JUMP)  ; LAB_0052559d
    CMP dword ptr [EAX + 0x56c],0x9     ; 00525585
    JNZ 0x005255c1                      ; 0052558c
        ;   XREF to: 005255c1 (CONDITIONAL_JUMP)  ; LAB_005255c1
    PUSH 0x8                            ; 0052558e
    MOV ESI,dword ptr [EAX + 0x154]     ; 00525590
        ;   Label: LAB_00525590
    PUSH EAX                            ; 00525596
    CALL dword ptr [ESI + 0x78]         ; 00525597
    ADD ESP,0x8                         ; 0052559a
    MOV ESI,dword ptr [EBX + 0x20c24]   ; 0052559d
        ;   Label: LAB_0052559d
    TEST ESI,ESI                        ; 005255a3
    JZ 0x00524a9c                       ; 005255a5
        ;   XREF to: 00524a9c (CONDITIONAL_JUMP)  ; LAB_00524a9c
    PUSH 0x2                            ; 005255ab
    MOV EAX,ESI                         ; 005255ad
    PUSH EAX                            ; 005255af
    MOV ESI,dword ptr [ESI + 0x154]     ; 005255b0
    CALL dword ptr [ESI + 0x78]         ; 005255b6
    ADD ESP,0x8                         ; 005255b9
    JMP 0x00524a9c                      ; 005255bc
        ;   XREF to: 00524a9c (UNCONDITIONAL_JUMP)  ; LAB_00524a9c
    PUSH 0x1                            ; 005255c1
        ;   Label: LAB_005255c1
    JMP 0x00525590                      ; 005255c3
        ;   XREF to: 00525590 (UNCONDITIONAL_JUMP)  ; LAB_00525590
    JBE 0x00525541                      ; 005255c5
        ;   XREF to: 00525541 (CONDITIONAL_JUMP)  ; LAB_00525541
        ;   Label: LAB_005255c5
    CMP EAX,0x1b                        ; 005255cb
    JNC 0x005255e3                      ; 005255ce
        ;   XREF to: 005255e3 (CONDITIONAL_JUMP)  ; LAB_005255e3
    CMP EAX,0x19                        ; 005255d0
    JNC 0x00525610                      ; 005255d3
        ;   XREF to: 00525610 (CONDITIONAL_JUMP)  ; LAB_00525610
    CMP EAX,0x15                        ; 005255d5
    JZ 0x0052545c                       ; 005255d8
        ;   XREF to: 0052545c (CONDITIONAL_JUMP)  ; LAB_0052545c
    JMP 0x00524a9c                      ; 005255de
        ;   XREF to: 00524a9c (UNCONDITIONAL_JUMP)  ; LAB_00524a9c
    JBE 0x00525172                      ; 005255e3
        ;   XREF to: 00525172 (CONDITIONAL_JUMP)  ; LAB_00525172
        ;   Label: LAB_005255e3
    CMP EAX,0x1f                        ; 005255e9
    JNC 0x005255fc                      ; 005255ec
        ;   XREF to: 005255fc (CONDITIONAL_JUMP)  ; LAB_005255fc
    CMP EAX,0x1c                        ; 005255ee
    JZ 0x005250e2                       ; 005255f1
        ;   XREF to: 005250e2 (CONDITIONAL_JUMP)  ; LAB_005250e2
    JMP 0x00524a9c                      ; 005255f7
        ;   XREF to: 00524a9c (UNCONDITIONAL_JUMP)  ; LAB_00524a9c
    JBE 0x00524fc2                      ; 005255fc
        ;   XREF to: 00524fc2 (CONDITIONAL_JUMP)  ; LAB_00524fc2
        ;   Label: LAB_005255fc
    CMP EAX,0x20                        ; 00525602
    JZ 0x00525052                       ; 00525605
        ;   XREF to: 00525052 (CONDITIONAL_JUMP)  ; LAB_00525052
    JMP 0x00524a9c                      ; 0052560b
        ;   XREF to: 00524a9c (UNCONDITIONAL_JUMP)  ; LAB_00524a9c
    JBE 0x00524f94                      ; 00525610
        ;   XREF to: 00524f94 (CONDITIONAL_JUMP)  ; LAB_00524f94
        ;   Label: LAB_00525610
    FLD float ptr [EBX + 0x2f04]        ; 00525616
    FCOMP double ptr [0x005cd7ef]       ; 0052561c | DAT_005cd7ef
    FNSTSW AX                           ; 00525622
    SAHF                                ; 00525624
    JNC 0x00524a9c                      ; 00525625
        ;   XREF to: 00524a9c (CONDITIONAL_JUMP)  ; LAB_00524a9c
    MOV dword ptr [EBX + 0x2f04],0x3f800000 ; 0052562b
    MOV dword ptr [EBX + 0x2f00],0x1    ; 00525635
    JMP 0x00524a9c                      ; 0052563f
        ;   XREF to: 00524a9c (UNCONDITIONAL_JUMP)  ; LAB_00524a9c
    JBE 0x005254bf                      ; 00525644
        ;   XREF to: 005254bf (CONDITIONAL_JUMP)  ; LAB_005254bf
        ;   Label: LAB_00525644
    CMP dword ptr [EBX + 0x20b64],0x7   ; 0052564a
    JNZ 0x0052568b                      ; 00525651
        ;   XREF to: 0052568b (CONDITIONAL_JUMP)  ; LAB_0052568b
    FLD float ptr [EBX + 0x2f04]        ; 00525653
    FCOMP double ptr [0x005cd7e7]       ; 00525659 | DAT_005cd7e7
    FNSTSW AX                           ; 0052565f
    SAHF                                ; 00525661
    JC 0x0052568b                       ; 00525662
        ;   XREF to: 0052568b (CONDITIONAL_JUMP)  ; LAB_0052568b
    MOV EAX,dword ptr [EBX + 0x20c24]   ; 00525664
    TEST EAX,EAX                        ; 0052566a
    JZ 0x0052568b                       ; 0052566c
        ;   XREF to: 0052568b (CONDITIONAL_JUMP)  ; LAB_0052568b
    PUSH 0x2                            ; 0052566e
    MOV ESI,dword ptr [EAX + 0x154]     ; 00525670
    PUSH EAX                            ; 00525676
    CALL dword ptr [ESI + 0x78]         ; 00525677
    ADD ESP,0x8                         ; 0052567a
    TEST EAX,EAX                        ; 0052567d
    JZ 0x0052568b                       ; 0052567f
        ;   XREF to: 0052568b (CONDITIONAL_JUMP)  ; LAB_0052568b
    MOV dword ptr [EBX + 0x20b64],0x0   ; 00525681
    FLD float ptr [EBX + 0x2f04]        ; 0052568b
        ;   Label: LAB_0052568b
    FCOMP double ptr [0x005cd7d7]       ; 00525691 | DAT_005cd7d7
    FNSTSW AX                           ; 00525697
    SAHF                                ; 00525699
    JBE 0x00524a9c                      ; 0052569a
        ;   XREF to: 00524a9c (CONDITIONAL_JUMP)  ; LAB_00524a9c
    MOV dword ptr [EBX + 0x2f04],0x3f800000 ; 005256a0
    MOV dword ptr [EBX + 0x20b64],0x0   ; 005256aa
    MOV dword ptr [EBX + 0x2f00],0xb    ; 005256b4
    JMP 0x00524a9c                      ; 005256be
        ;   XREF to: 00524a9c (UNCONDITIONAL_JUMP)  ; LAB_00524a9c
    JBE 0x0052523e                      ; 005256c3
        ;   XREF to: 0052523e (CONDITIONAL_JUMP)  ; LAB_0052523e
        ;   Label: LAB_005256c3
    CMP EAX,0x8                         ; 005256c9
    JZ 0x005253f9                       ; 005256cc
        ;   XREF to: 005253f9 (CONDITIONAL_JUMP)  ; LAB_005253f9
    JMP 0x00524a9c                      ; 005256d2
        ;   XREF to: 00524a9c (UNCONDITIONAL_JUMP)  ; LAB_00524a9c
    MOV EAX,0x1                         ; 005256d7
        ;   Label: caseD_0
    JMP 0x00524acb                      ; 005256dc
        ;   XREF to: 00524acb (UNCONDITIONAL_JUMP)  ; LAB_00524acb
    MOV EDX,dword ptr [0x01d72c08]      ; 005256e1 | g_CMeleeClassInfo.name_hash
        ;   Label: caseD_7
    PUSH EDX                            ; 005256e7
    PUSH ESI                            ; 005256e8
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 005256e9
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 005256ee
    TEST EAX,EAX                        ; 005256f1
    JZ 0x00525708                       ; 005256f3
        ;   XREF to: 00525708 (CONDITIONAL_JUMP)  ; LAB_00525708
    CMP dword ptr [EAX + 0x5a4],0x0     ; 005256f5
    JZ 0x00525708                       ; 005256fc
        ;   XREF to: 00525708 (CONDITIONAL_JUMP)  ; LAB_00525708
    MOV EAX,0x3                         ; 005256fe
    JMP 0x00524acb                      ; 00525703
        ;   XREF to: 00524acb (UNCONDITIONAL_JUMP)  ; LAB_00524acb
    MOV EDI,dword ptr [0x01d5bae8]      ; 00525708 | g_CHolycrossClassInfo.name_hash
        ;   Label: LAB_00525708
    PUSH EDI                            ; 0052570e
    PUSH ESI                            ; 0052570f
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00525710
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 00525715
    TEST EAX,EAX                        ; 00525718
    JZ 0x00524acb                       ; 0052571a
        ;   XREF to: 00524acb (CONDITIONAL_JUMP)  ; LAB_00524acb
    MOV EAX,0x3                         ; 00525720
        ;   Label: caseD_1
    JMP 0x00524acb                      ; 00525725
        ;   XREF to: 00524acb (UNCONDITIONAL_JUMP)  ; LAB_00524acb
    MOV EAX,dword ptr [EAX + 0x2e0]     ; 0052572a
        ;   Label: LAB_0052572a
    CMP EAX,0x8                         ; 00525730
    JA 0x00525720                       ; 00525733
        ;   XREF to: 00525720 (CONDITIONAL_JUMP)  ; caseD_6
    JMP dword ptr [EAX*0x4 + 0x5248f0]  ; 00525735 | caseD_5 | caseD_6 | caseD_8
        ;   Label: switchD
    MOV EAX,0x1                         ; 0052573c
        ;   Label: caseD_0
    JMP 0x00524b42                      ; 00525741
        ;   XREF to: 00524b42 (UNCONDITIONAL_JUMP)  ; LAB_00524b42
    MOV ECX,dword ptr [0x01d72c08]      ; 00525746 | g_CMeleeClassInfo.name_hash
        ;   Label: caseD_7
    PUSH ECX                            ; 0052574c
    PUSH ESI                            ; 0052574d
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0052574e
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 00525753
    TEST EAX,EAX                        ; 00525756
    JZ 0x0052576d                       ; 00525758
        ;   XREF to: 0052576d (CONDITIONAL_JUMP)  ; LAB_0052576d
    CMP dword ptr [EAX + 0x5a4],0x0     ; 0052575a
    JZ 0x0052576d                       ; 00525761
        ;   XREF to: 0052576d (CONDITIONAL_JUMP)  ; LAB_0052576d
    MOV EAX,0x3                         ; 00525763
    JMP 0x00524b42                      ; 00525768
        ;   XREF to: 00524b42 (UNCONDITIONAL_JUMP)  ; LAB_00524b42
    MOV EAX,[0x01d5bae8]                ; 0052576d | g_CHolycrossClassInfo.name_hash
        ;   Label: LAB_0052576d
    PUSH EAX                            ; 00525772
    PUSH ESI                            ; 00525773
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00525774
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 00525779
    TEST EAX,EAX                        ; 0052577c
    JZ 0x00524b42                       ; 0052577e
        ;   XREF to: 00524b42 (CONDITIONAL_JUMP)  ; LAB_00524b42
    MOV EAX,0x3                         ; 00525784
        ;   Label: caseD_1
    JMP 0x00524b42                      ; 00525789
        ;   XREF to: 00524b42 (UNCONDITIONAL_JUMP)  ; LAB_00524b42
    MOV EAX,dword ptr [ESI + 0x2e0]     ; 0052578e
        ;   Label: LAB_0052578e
    CMP EAX,0x8                         ; 00525794
    JA 0x00525784                       ; 00525797
        ;   XREF to: 00525784 (CONDITIONAL_JUMP)  ; caseD_6
    JMP dword ptr [EAX*0x4 + 0x524914]  ; 00525799 | caseD_5 | caseD_6 | caseD_8
        ;   Label: switchD
    CMP dword ptr [EBX + 0x20b64],0x8   ; 005257a0
        ;   Label: LAB_005257a0
    JNZ 0x00525869                      ; 005257a7
        ;   XREF to: 00525869 (CONDITIONAL_JUMP)  ; LAB_00525869
    CMP dword ptr [ESP + 0x8c],0x3      ; 005257ad
    JNZ 0x00525869                      ; 005257b5
        ;   XREF to: 00525869 (CONDITIONAL_JUMP)  ; LAB_00525869
    MOV ECX,dword ptr [EBX + 0x20c24]   ; 005257bb
    TEST ECX,ECX                        ; 005257c1
    JZ 0x005257d2                       ; 005257c3
        ;   XREF to: 005257d2 (CONDITIONAL_JUMP)  ; LAB_005257d2
    CMP dword ptr [ECX + 0x578],0x1     ; 005257c5
    JNZ 0x00524bde                      ; 005257cc
        ;   XREF to: 00524bde (CONDITIONAL_JUMP)  ; LAB_00524bde
    PUSH 0x5cd79d                       ; 005257d2 | = "CLightActor"
        ;   Label: LAB_005257d2
    MOV EDI,dword ptr [ESP + 0x5c]      ; 005257d7
    PUSH EDI                            ; 005257db
    CALL core_inv.cpp_FUN_004dba80      ; 005257dc
        ;   XREF to: 004dba80 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004dba80()
    ADD ESP,0x8                         ; 005257e1
    TEST EAX,EAX                        ; 005257e4
    JZ 0x00524bde                       ; 005257e6
        ;   XREF to: 00524bde (CONDITIONAL_JUMP)  ; LAB_00524bde
    XOR EAX,EAX                         ; 005257ec
    MOV EDI,dword ptr [ESP + 0x94]      ; 005257ee
    MOV dword ptr [ESP + 0x98],EAX      ; 005257f5
    MOV EAX,dword ptr [ESP + 0x94]      ; 005257fc
        ;   Label: LAB_005257fc
    MOV EDX,dword ptr [ESP + 0x98]      ; 00525803
    CMP EDX,dword ptr [EAX + 0x10]      ; 0052580a
    JGE 0x00524bde                      ; 0052580d
        ;   XREF to: 00524bde (CONDITIONAL_JUMP)  ; LAB_00524bde
    MOV ECX,dword ptr [0x007e1a50]      ; 00525813 | DAT_007e1a50
    PUSH ECX                            ; 00525819
    MOV EAX,dword ptr [EDI + 0x14]      ; 0052581a
    PUSH EAX                            ; 0052581d
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0052581e
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV ESI,EAX                         ; 00525823
    ADD ESP,0x8                         ; 00525825
    TEST EAX,EAX                        ; 00525828
    JNZ 0x00525840                      ; 0052582a
        ;   XREF to: 00525840 (CONDITIONAL_JUMP)  ; LAB_00525840
    MOV ESI,dword ptr [ESP + 0x98]      ; 0052582c
    INC ESI                             ; 00525833
    ADD EDI,0x4                         ; 00525834
    MOV dword ptr [ESP + 0x98],ESI      ; 00525837
    JMP 0x005257fc                      ; 0052583e
        ;   XREF to: 005257fc (UNCONDITIONAL_JUMP)  ; LAB_005257fc
    PUSH 0x0                            ; 00525840
        ;   Label: LAB_00525840
    PUSH 0x0                            ; 00525842
    PUSH EAX                            ; 00525844
    PUSH 0x0                            ; 00525845
    PUSH EBX                            ; 00525847
    CALL core_charactr.cpp_FUN_004319d0 ; 00525848
        ;   XREF to: 004319d0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004319d0()
    MOV dword ptr [ESI + 0x23a0],0x1    ; 0052584d
    ADD ESP,0x14                        ; 00525857
    MOV dword ptr [EBX + 0x20b88],0x41700000 ; 0052585a
    JMP 0x00524bde                      ; 00525864
        ;   XREF to: 00524bde (UNCONDITIONAL_JUMP)  ; LAB_00524bde
    CMP dword ptr [EBX + 0x20b64],0x9   ; 00525869
        ;   Label: LAB_00525869
    JNZ 0x00524be8                      ; 00525870
        ;   XREF to: 00524be8 (CONDITIONAL_JUMP)  ; LAB_00524be8
    CMP dword ptr [ESP + 0x8c],0x3      ; 00525876
    JNZ 0x00524be8                      ; 0052587e
        ;   XREF to: 00524be8 (CONDITIONAL_JUMP)  ; LAB_00524be8
    MOV ESI,dword ptr [0x007e1a50]      ; 00525884 | DAT_007e1a50
    PUSH ESI                            ; 0052588a
    MOV EDI,dword ptr [EBX + 0x25b0]    ; 0052588b
    PUSH EDI                            ; 00525891
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00525892
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 00525897
    TEST EAX,EAX                        ; 0052589a
    JZ 0x00524bde                       ; 0052589c
        ;   XREF to: 00524bde (CONDITIONAL_JUMP)  ; LAB_00524bde
    MOV EAX,[0x007e1a50]                ; 005258a2 | DAT_007e1a50
    PUSH EAX                            ; 005258a7
    MOV EDX,dword ptr [EBX + 0x25b0]    ; 005258a8
    PUSH EDX                            ; 005258ae
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 005258af
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV dword ptr [EAX + 0x23a0],0x0    ; 005258b4
    MOV dword ptr [EBX + 0x25b0],0x0    ; 005258be
    ADD ESP,0x8                         ; 005258c8
    MOV dword ptr [EBX + 0x20b88],0x0   ; 005258cb
    JMP 0x00524bde                      ; 005258d5
        ;   XREF to: 00524bde (UNCONDITIONAL_JUMP)  ; LAB_00524bde
    PUSH 0x1                            ; 005258da
        ;   Label: LAB_005258da
    PUSH 0x21                           ; 005258dc
    MOV ECX,dword ptr [ESP + 0x80]      ; 005258de
    PUSH ECX                            ; 005258e5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 005258e6
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV ESI,dword ptr [EBX + 0x20b64]   ; 005258eb
    ADD ESP,0xc                         ; 005258f1
    TEST ESI,ESI                        ; 005258f4
    JZ 0x00525911                       ; 005258f6
        ;   XREF to: 00525911 (CONDITIONAL_JUMP)  ; LAB_00525911
    PUSH 0x172a                         ; 005258f8
    PUSH ESI                            ; 005258fd
    PUSH 0x5cd7af                       ; 005258fe | = "actionPending = %d\nprye.cpp line %d"
    MOV EAX,[0x005fb140]                ; 00525903 | g_CEditorToolsPtr
    PUSH EAX                            ; 00525908
    CALL shape_edittool.cpp_FUN_0047cee0 ; 00525909
        ;   XREF to: 0047cee0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047cee0()
    ADD ESP,0x10                        ; 0052590e
    MOV dword ptr [EBX + 0x20b64],0x2   ; 00525911
        ;   Label: LAB_00525911
    JMP 0x00524c7a                      ; 0052591b
        ;   XREF to: 00524c7a (UNCONDITIONAL_JUMP)  ; LAB_00524c7a
    CMP ESI,0x8                         ; 00525920
        ;   Label: LAB_00525920
    JZ 0x00524c9c                       ; 00525923
        ;   XREF to: 00524c9c (CONDITIONAL_JUMP)  ; LAB_00524c9c
    JMP 0x00524ca6                      ; 00525929
        ;   XREF to: 00524ca6 (UNCONDITIONAL_JUMP)  ; LAB_00524ca6

