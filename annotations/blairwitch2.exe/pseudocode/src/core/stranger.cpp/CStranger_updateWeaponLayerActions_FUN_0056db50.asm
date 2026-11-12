; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_CStranger_updateWeaponLayerActions_FUN_0056db50(CStranger *this_ptr,float delta_time)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined        Stack[-0x78]:1  local_78
; undefined        Stack[-0x6c]:1  local_6c
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined        Stack[-0x54]:1  local_54
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_stranger.cpp_CStranger_processFrame_FUN_00563060 at 00563b01
;
; Referenced Globals:
;   void* switchdataD_0056dafc = 0056e000
;   void* switchdataD_0056db24 = 0056dc3f
;   TerminatedCString s_CShotgun_005ebd65
;   TerminatedCString s_CTrap_005ebd6e
;   TerminatedCString s_actionPending_d_stranger_005ebd74
;   undefined4 DAT_005ebd9d
;   undefined4 DAT_005ebda5
;   undefined4 DAT_005fc1d4
;   undefined4 DAT_005fc1d8
;   CEditorTools* g_CEditorToolsPtr = 01c25594
;   undefined4 DAT_00618170
;   undefined4 g_CDynamiteClassInfo.name_hash
;   undefined4 g_CMeleeClassInfo.name_hash
;   undefined4 DAT_01d182f0
;   undefined4 g_CWeaponClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_FUN_00408cf0
;   core_actor.cpp_isOfClass_FUN_0040c840
;   core_charactr.cpp_CCharacter_advanceLayerAction_FUN_0042a0c0
;   core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_0042a620
;   core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
;   core_charactr.cpp_FUN_00428b10
;   core_dynamite.cpp_CDynamite_isFuseLit_FUN_0047a1a0
;   core_dynamite.cpp_CDynamite_lightFuse_FUN_0047a150
;   core_hero.cpp_FUN_004cff90
;   core_inv.cpp_CInventory_getActiveLightGun_FUN_004dccb0
;   core_inv.cpp_FUN_004db8e0
;   core_mission.cpp_CDemonMission_addActorToList_FUN_004fc200
;   core_motion.cpp_CMotionController_getMotionList_FUN_00503860
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056db50
        ;   Label: core_stranger.cpp_CStranger_updateWeaponLayerActions_FUN_0056db50
    PUSH ESI                            ; 0056db51
    PUSH EDI                            ; 0056db52
    PUSH EBP                            ; 0056db53
    MOV EBP,ESP                         ; 0056db54
    SUB ESP,0x64                        ; 0056db56
    AND ESP,0xfffffff8                  ; 0056db59
    MOV EBX,dword ptr [EBP + 0x14]      ; 0056db5c
    CMP dword ptr [EBX + 0x2d04],0xe    ; 0056db5f
    JNZ 0x0056db7e                      ; 0056db66
        ;   XREF to: 0056db7e (CONDITIONAL_JUMP)  ; LAB_0056db7e
    MOV ECX,dword ptr [EBX + 0x2698]    ; 0056db68
    TEST ECX,ECX                        ; 0056db6e
    JNZ 0x0056db7e                      ; 0056db70
        ;   XREF to: 0056db7e (CONDITIONAL_JUMP)  ; LAB_0056db7e
    MOV dword ptr [EBX + 0x2d08],ECX    ; 0056db72
    MOV dword ptr [EBX + 0x2d04],ECX    ; 0056db78
    MOV EDI,0xffffffff                  ; 0056db7e
        ;   Label: LAB_0056db7e
    MOV EAX,dword ptr [EBX + 0x25618]   ; 0056db83
    XOR ESI,ESI                         ; 0056db89
    MOV dword ptr [ESP + 0x38],EDI      ; 0056db8b
    MOV dword ptr [ESP + 0x54],ESI      ; 0056db8f
    TEST EAX,EAX                        ; 0056db93
    JZ 0x0056de23                       ; 0056db95
        ;   XREF to: 0056de23 (CONDITIONAL_JUMP)  ; LAB_0056de23
    MOV dword ptr [EBX + 0x25640],ESI   ; 0056db9b
    LEA EAX,[EBX + 0x2437c]             ; 0056dba1
        ;   Label: LAB_0056dba1
    XOR ESI,ESI                         ; 0056dba7
    MOV dword ptr [ESP + 0x50],EAX      ; 0056dba9
    LEA EAX,[EBX + 0x2b4]               ; 0056dbad
    MOV dword ptr [ESP + 0x40],ESI      ; 0056dbb3
    MOV dword ptr [ESP + 0x44],EAX      ; 0056dbb7
    FLD float ptr [EBP + 0x18]          ; 0056dbbb
        ;   Label: LAB_0056dbbb
    FLDZ                                ; 0056dbbe
    FCOMPP                              ; 0056dbc0
    FNSTSW AX                           ; 0056dbc2
    SAHF                                ; 0056dbc4
    JNC 0x0056de1c                      ; 0056dbc5
        ;   XREF to: 0056de1c (CONDITIONAL_JUMP)  ; LAB_0056de1c
    MOV EDI,dword ptr [EBX + 0x256a4]   ; 0056dbcb
    CMP EDI,0x1                         ; 0056dbd1
    JNZ 0x0056deac                      ; 0056dbd4
        ;   XREF to: 0056deac (CONDITIONAL_JUMP)  ; LAB_0056deac
    MOV dword ptr [ESP + 0x5c],0x3      ; 0056dbda
        ;   Label: LAB_0056dbda
    MOV EAX,dword ptr [EBX + 0x2d08]    ; 0056dbe2
        ;   Label: LAB_0056dbe2
    MOV dword ptr [ESP + 0x48],EAX      ; 0056dbe8
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0056dbec
    PUSH EAX                            ; 0056dbf0
    LEA EAX,[EBP + 0x18]                ; 0056dbf1
    PUSH EAX                            ; 0056dbf4
    PUSH EBX                            ; 0056dbf5
    CALL core_charactr.cpp_CCharacter_advanceLayerAction_FUN_0042a0c0 ; 0056dbf6
        ;   XREF to: 0042a0c0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_advanceLayerAction_FUN_0042a0c0(CCharacter * this_ptr, float * remaining_time, int target_bone_index)
    ADD ESP,0xc                         ; 0056dbfb
    MOV EDX,dword ptr [EBX + 0x2d04]    ; 0056dbfe
    MOV dword ptr [ESP + 0x58],EAX      ; 0056dc04
    IMUL EAX,EDX,0x38                   ; 0056dc08
    IMUL EDI,dword ptr [EBX + EAX*0x1 + 0x2860],0x118 ; 0056dc0b
    MOV ESI,dword ptr [ESP + 0x44]      ; 0056dc16
    PUSH ESI                            ; 0056dc1a
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_00503860 ; 0056dc1b
        ;   XREF to: 00503860 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_00503860(CMotionController * this_ptr)
    ADD EAX,0x1c28                      ; 0056dc20
    ADD EDI,EAX                         ; 0056dc25
    MOV EAX,dword ptr [EBX + 0x2d04]    ; 0056dc27
    SUB EAX,0x6                         ; 0056dc2d
    ADD ESP,0x4                         ; 0056dc30
    CMP EAX,0x7                         ; 0056dc33
    JA 0x0056dc6c                       ; 0056dc36
        ;   XREF to: 0056dc6c (CONDITIONAL_JUMP)  ; caseD_b
    JMP dword ptr [EAX*0x4 + 0x56db24]  ; 0056dc38 | caseD_6 | caseD_7 | caseD_8
        ;   Label: switchD
    MOV ESI,dword ptr [0x01c225d8]      ; 0056dc3f | g_CDynamiteClassInfo.name_hash
        ;   Label: caseD_6
    PUSH ESI                            ; 0056dc45
    MOV EAX,dword ptr [EBX + 0x25698]   ; 0056dc46
    PUSH EAX                            ; 0056dc4c
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0056dc4d
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    MOV ESI,EAX                         ; 0056dc52
    ADD ESP,0x8                         ; 0056dc54
    TEST EAX,EAX                        ; 0056dc57
    JZ 0x0056dc6c                       ; 0056dc59
        ;   XREF to: 0056dc6c (CONDITIONAL_JUMP)  ; caseD_b
    PUSH EAX                            ; 0056dc5b
    CALL core_dynamite.cpp_CDynamite_isFuseLit_FUN_0047a1a0 ; 0056dc5c
        ;   XREF to: 0047a1a0 (UNCONDITIONAL_CALL)  ; int core_dynamite.cpp_CDynamite_isFuseLit_FUN_0047a1a0(CDynamite * this_ptr)
    ADD ESP,0x4                         ; 0056dc61
    TEST EAX,EAX                        ; 0056dc64
    JZ 0x0056e114                       ; 0056dc66
        ;   XREF to: 0056e114 (CONDITIONAL_JUMP)  ; LAB_0056e114
    CMP dword ptr [ESP + 0x58],0x0      ; 0056dc6c
        ;   Label: caseD_9
    JL 0x0056de0a                       ; 0056dc71
        ;   XREF to: 0056de0a (CONDITIONAL_JUMP)  ; LAB_0056de0a
    MOV EDI,dword ptr [ESP + 0x54]      ; 0056dc77
    MOV EAX,dword ptr [EBX + 0x25698]   ; 0056dc7b
    CMP EAX,EDI                         ; 0056dc81
    JZ 0x0056dcfa                       ; 0056dc83
        ;   XREF to: 0056dcfa (CONDITIONAL_JUMP)  ; LAB_0056dcfa
    TEST EAX,EAX                        ; 0056dc89
    JZ 0x0056dcbd                       ; 0056dc8b
        ;   XREF to: 0056dcbd (CONDITIONAL_JUMP)  ; LAB_0056dcbd
    MOV EDX,EAX                         ; 0056dc8d
    JNZ 0x0056e38a                      ; 0056dc8f
        ;   XREF to: 0056e38a (CONDITIONAL_JUMP)  ; LAB_0056e38a
    CMP EAX,dword ptr [ESP + 0x58]      ; 0056dc95
        ;   Label: LAB_0056dc95
    JNZ 0x0056dcbd                      ; 0056dc99
        ;   XREF to: 0056dcbd (CONDITIONAL_JUMP)  ; LAB_0056dcbd
    PUSH 0x1                            ; 0056dc9b
    MOV EAX,dword ptr [EBX + 0x25698]   ; 0056dc9d
    PUSH EAX                            ; 0056dca3
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0056dca4
    CALL dword ptr [EDX + 0xe4]         ; 0056dcaa
    ADD ESP,0x8                         ; 0056dcb0
    MOV dword ptr [EBX + 0x25698],0x0   ; 0056dcb3
    CMP dword ptr [EBX + 0x25640],0x0   ; 0056dcbd
        ;   Label: LAB_0056dcbd
    JZ 0x0056dcfa                       ; 0056dcc4
        ;   XREF to: 0056dcfa (CONDITIONAL_JUMP)  ; LAB_0056dcfa
    MOV EDX,dword ptr [ESP + 0x54]      ; 0056dcc6
    TEST EDX,EDX                        ; 0056dcca
    JNZ 0x0056e3ed                      ; 0056dccc
        ;   XREF to: 0056e3ed (CONDITIONAL_JUMP)  ; LAB_0056e3ed
    XOR EAX,EAX                         ; 0056dcd2
        ;   Label: LAB_0056dcd2
    CMP EAX,dword ptr [ESP + 0x58]      ; 0056dcd4
        ;   Label: LAB_0056dcd4
    JNZ 0x0056dcfa                      ; 0056dcd8
        ;   XREF to: 0056dcfa (CONDITIONAL_JUMP)  ; LAB_0056dcfa
    MOV EAX,dword ptr [ESP + 0x54]      ; 0056dcda
    MOV dword ptr [EBX + 0x25698],EAX   ; 0056dcde
    TEST EAX,EAX                        ; 0056dce4
    JZ 0x0056dcfa                       ; 0056dce6
        ;   XREF to: 0056dcfa (CONDITIONAL_JUMP)  ; LAB_0056dcfa
    PUSH 0x2                            ; 0056dce8
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0056dcea
    PUSH EAX                            ; 0056dcf0
    CALL dword ptr [EDX + 0xe4]         ; 0056dcf1
    ADD ESP,0x8                         ; 0056dcf7
    MOV ESI,dword ptr [EBX + 0x256a4]   ; 0056dcfa
        ;   Label: LAB_0056dcfa
    CMP ESI,0x1                         ; 0056dd00
    JNZ 0x0056dd20                      ; 0056dd03
        ;   XREF to: 0056dd20 (CONDITIONAL_JUMP)  ; LAB_0056dd20
    CMP dword ptr [ESP + 0x58],0x3      ; 0056dd05
    JNZ 0x0056dd20                      ; 0056dd0a
        ;   XREF to: 0056dd20 (CONDITIONAL_JUMP)  ; LAB_0056dd20
    PUSH ESI                            ; 0056dd0c
    PUSH EBX                            ; 0056dd0d
    CALL core_hero.cpp_FUN_004cff90     ; 0056dd0e
        ;   XREF to: 004cff90 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cff90()
    ADD ESP,0x8                         ; 0056dd13
    MOV dword ptr [EBX + 0x256a4],0x0   ; 0056dd16
    MOV EAX,dword ptr [EBX + 0x2561c]   ; 0056dd20
        ;   Label: LAB_0056dd20
    TEST EAX,EAX                        ; 0056dd26
    JZ 0x0056ddb1                       ; 0056dd28
        ;   XREF to: 0056ddb1 (CONDITIONAL_JUMP)  ; LAB_0056ddb1
    CMP dword ptr [ESP + 0x58],0x3      ; 0056dd2e
    JNZ 0x0056ddb1                      ; 0056dd33
        ;   XREF to: 0056ddb1 (CONDITIONAL_JUMP)  ; LAB_0056ddb1
    PUSH 0x0                            ; 0056dd35
    PUSH EAX                            ; 0056dd37
    MOV ESI,dword ptr [ESP + 0x58]      ; 0056dd38
    PUSH ESI                            ; 0056dd3c
    CALL core_inv.cpp_FUN_004db8e0      ; 0056dd3d
        ;   XREF to: 004db8e0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004db8e0()
    ADD ESP,0xc                         ; 0056dd42
    MOV EDI,dword ptr [EBX + 0x2561c]   ; 0056dd45
    PUSH EDI                            ; 0056dd4b
    MOV EAX,[0x00618170]                ; 0056dd4c | DAT_00618170
    PUSH EAX                            ; 0056dd51 | DAT_01d182f0
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_004fc200 ; 0056dd52
        ;   XREF to: 004fc200 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_addActorToList_FUN_004fc200(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0056dd57
    PUSH 0x0                            ; 0056dd5a
    MOV EDX,dword ptr [EBX + 0x2561c]   ; 0056dd5c
    PUSH 0x0                            ; 0056dd62
    PUSH EDX                            ; 0056dd64
    PUSH 0x1                            ; 0056dd65
    PUSH EBX                            ; 0056dd67
    CALL core_charactr.cpp_FUN_00428b10 ; 0056dd68
        ;   XREF to: 00428b10 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00428b10()
    ADD ESP,0x14                        ; 0056dd6d
    PUSH 0x5ebd6e                       ; 0056dd70 | = "CTrap"
    MOV ECX,dword ptr [EBX + 0x2561c]   ; 0056dd75
    PUSH ECX                            ; 0056dd7b
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 0056dd7c
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0056dd81
    TEST EAX,EAX                        ; 0056dd84
    JZ 0x0056e417                       ; 0056dd86
        ;   XREF to: 0056e417 (CONDITIONAL_JUMP)  ; LAB_0056e417
    PUSH 0x1                            ; 0056dd8c
    PUSH 0x14                           ; 0056dd8e
    MOV ECX,dword ptr [ESP + 0x4c]      ; 0056dd90
    PUSH ECX                            ; 0056dd94
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0056dd95
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0056dd9a
    MOV dword ptr [EBX + 0x256a4],0x6   ; 0056dd9d
    MOV dword ptr [EBX + 0x2561c],0x0   ; 0056dda7
        ;   Label: LAB_0056dda7
    MOV ESI,dword ptr [ESP + 0x58]      ; 0056ddb1
        ;   Label: LAB_0056ddb1
    CMP ESI,0xa                         ; 0056ddb5
    JNZ 0x0056e46a                      ; 0056ddb8
        ;   XREF to: 0056e46a (CONDITIONAL_JUMP)  ; LAB_0056e46a
    MOV ECX,dword ptr [ESP + 0x50]      ; 0056ddbe
    PUSH ECX                            ; 0056ddc2
    CALL core_inv.cpp_CInventory_getActiveLightGun_FUN_004dccb0 ; 0056ddc3
        ;   XREF to: 004dccb0 (UNCONDITIONAL_CALL)  ; CLightGun * core_inv.cpp_CInventory_getActiveLightGun_FUN_004dccb0(CInventory * this_ptr)
    ADD ESP,0x4                         ; 0056ddc8
    TEST EAX,EAX                        ; 0056ddcb
    JNZ 0x0056e45b                      ; 0056ddcd
        ;   XREF to: 0056e45b (CONDITIONAL_JUMP)  ; LAB_0056e45b
    MOV dword ptr [EBX + 0x255e8],0x1   ; 0056ddd3
        ;   Label: LAB_0056ddd3
    CMP dword ptr [EBX + 0x256a4],0x7   ; 0056dddd
        ;   Label: LAB_0056dddd
    JNZ 0x0056ddfc                      ; 0056dde4
        ;   XREF to: 0056ddfc (CONDITIONAL_JUMP)  ; LAB_0056ddfc
    MOV EDI,dword ptr [ESP + 0x58]      ; 0056dde6
    TEST EDI,EDI                        ; 0056ddea
    JNZ 0x0056e4a0                      ; 0056ddec
        ;   XREF to: 0056e4a0 (CONDITIONAL_JUMP)  ; LAB_0056e4a0
    MOV dword ptr [EBX + 0x256a4],0x0   ; 0056ddf2
        ;   Label: LAB_0056ddf2
    MOV EDX,dword ptr [ESP + 0x5c]      ; 0056ddfc
        ;   Label: LAB_0056ddfc
    PUSH EDX                            ; 0056de00
    PUSH EBX                            ; 0056de01
    CALL core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_0042a620 ; 0056de02
        ;   XREF to: 0042a620 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_0042a620(CCharacter * this_ptr, int layer_action_index)
    ADD ESP,0x8                         ; 0056de07
    MOV ECX,dword ptr [ESP + 0x40]      ; 0056de0a
        ;   Label: LAB_0056de0a
    INC ECX                             ; 0056de0e
    MOV dword ptr [ESP + 0x40],ECX      ; 0056de0f
    CMP ECX,0x2                         ; 0056de13
    JL 0x0056dbbb                       ; 0056de16
        ;   XREF to: 0056dbbb (CONDITIONAL_JUMP)  ; LAB_0056dbbb
    MOV ESP,EBP                         ; 0056de1c
        ;   Label: LAB_0056de1c
    POP EBP                             ; 0056de1e
    POP EDI                             ; 0056de1f
    POP ESI                             ; 0056de20
    POP EBX                             ; 0056de21
    RET                                 ; 0056de22
    CMP dword ptr [EBX + 0x25640],0x0   ; 0056de23
        ;   Label: LAB_0056de23
    JZ 0x0056dba1                       ; 0056de2a
        ;   XREF to: 0056dba1 (CONDITIONAL_JUMP)  ; LAB_0056dba1
    MOV ECX,dword ptr [EBX + 0x2698]    ; 0056de30
    TEST ECX,ECX                        ; 0056de36
    JNZ 0x0056de73                      ; 0056de38
        ;   XREF to: 0056de73 (CONDITIONAL_JUMP)  ; LAB_0056de73
    LEA EAX,[EBX + 0x2437c]             ; 0056de3a
    MOV EDX,dword ptr [EAX + 0x468]     ; 0056de40
    MOV EAX,dword ptr [EAX + EDX*0x4 + 0x610] ; 0056de46
    MOV dword ptr [ESP + 0x54],EAX      ; 0056de4d
    MOV EDX,dword ptr [ESP + 0x54]      ; 0056de51
        ;   Label: LAB_0056de51
    TEST EDX,EDX                        ; 0056de55
    JNZ 0x0056dba1                      ; 0056de57
        ;   XREF to: 0056dba1 (CONDITIONAL_JUMP)  ; LAB_0056dba1
    CMP dword ptr [ESP + 0x38],0x0      ; 0056de5d
    JGE 0x0056dba1                      ; 0056de62
        ;   XREF to: 0056dba1 (CONDITIONAL_JUMP)  ; LAB_0056dba1
    MOV dword ptr [EBX + 0x25640],EDX   ; 0056de68
    JMP 0x0056dba1                      ; 0056de6e
        ;   XREF to: 0056dba1 (UNCONDITIONAL_JUMP)  ; LAB_0056dba1
    MOV ESI,dword ptr [0x02661f38]      ; 0056de73 | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_0056de73
    PUSH ESI                            ; 0056de79
    PUSH ECX                            ; 0056de7a
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0056de7b
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0056de80
    MOV dword ptr [ESP + 0x54],EAX      ; 0056de83
    TEST EAX,EAX                        ; 0056de87
    JNZ 0x0056de51                      ; 0056de89
        ;   XREF to: 0056de51 (CONDITIONAL_JUMP)  ; LAB_0056de51
    MOV EAX,dword ptr [EBX + 0x2698]    ; 0056de8b
    PUSH EAX                            ; 0056de91
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0056de92
    CALL dword ptr [EDX + 0x7c]         ; 0056de98
    ADD ESP,0x4                         ; 0056de9b
    TEST AL,0x3                         ; 0056de9e
    JZ 0x0056de51                       ; 0056dea0
        ;   XREF to: 0056de51 (CONDITIONAL_JUMP)  ; LAB_0056de51
    MOV dword ptr [ESP + 0x38],0x8      ; 0056dea2
    JMP 0x0056de51                      ; 0056deaa
        ;   XREF to: 0056de51 (UNCONDITIONAL_JUMP)  ; LAB_0056de51
    MOV EAX,dword ptr [EBX + 0x2561c]   ; 0056deac
        ;   Label: LAB_0056deac
    TEST EAX,EAX                        ; 0056deb2
    JNZ 0x0056dbda                      ; 0056deb4
        ;   XREF to: 0056dbda (CONDITIONAL_JUMP)  ; LAB_0056dbda
    CMP EDI,0x2                         ; 0056deba
    JNZ 0x0056dec8                      ; 0056debd
        ;   XREF to: 0056dec8 (CONDITIONAL_JUMP)  ; LAB_0056dec8
    MOV dword ptr [ESP + 0x5c],EAX      ; 0056debf
    JMP 0x0056dbe2                      ; 0056dec3
        ;   XREF to: 0056dbe2 (UNCONDITIONAL_JUMP)  ; LAB_0056dbe2
    CMP EDI,0x3                         ; 0056dec8
        ;   Label: LAB_0056dec8
    JNZ 0x0056df3b                      ; 0056decb
        ;   XREF to: 0056df3b (CONDITIONAL_JUMP)  ; LAB_0056df3b
    MOV EDI,0x6                         ; 0056decd
    PUSH EDI                            ; 0056ded2
    PUSH EBX                            ; 0056ded3
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0 ; 0056ded4
        ;   XREF to: 0042a5a0 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(CCharacter * this_ptr, int state_index)
    MOV dword ptr [ESP + 0x68],EAX      ; 0056ded9
    MOV dword ptr [ESP + 0x64],EDI      ; 0056dedd
    FLD float ptr [ESP + 0x68]          ; 0056dee1
    ADD ESP,0x8                         ; 0056dee5
    FCOMP double ptr [0x005ebda5]       ; 0056dee8 | DAT_005ebda5
    FNSTSW AX                           ; 0056deee
    SAHF                                ; 0056def0
    JBE 0x0056dbe2                      ; 0056def1
        ;   XREF to: 0056dbe2 (CONDITIONAL_JUMP)  ; LAB_0056dbe2
    FLD float ptr [EBP + 0x18]          ; 0056def7
    FMUL double ptr [0x005ebd9d]        ; 0056defa | DAT_005ebd9d
    FADD float ptr [EBX + 0x25650]      ; 0056df00
    FST float ptr [EBX + 0x25650]       ; 0056df06
    FCOMP float ptr [0x005fc1d8]        ; 0056df0c | DAT_005fc1d8
    FNSTSW AX                           ; 0056df12
    SAHF                                ; 0056df14
    JA 0x0056df2e                       ; 0056df15
        ;   XREF to: 0056df2e (CONDITIONAL_JUMP)  ; LAB_0056df2e
    MOV EAX,dword ptr [EBX + 0x10a74]   ; 0056df17
        ;   Label: LAB_0056df17
    TEST EAX,EAX                        ; 0056df1d
    JNZ 0x0056de1c                      ; 0056df1f
        ;   XREF to: 0056de1c (CONDITIONAL_JUMP)  ; LAB_0056de1c
    MOV dword ptr [ESP + 0x5c],EAX      ; 0056df25
    JMP 0x0056dbe2                      ; 0056df29
        ;   XREF to: 0056dbe2 (UNCONDITIONAL_JUMP)  ; LAB_0056dbe2
    MOV EAX,[0x005fc1d8]                ; 0056df2e | DAT_005fc1d8
        ;   Label: LAB_0056df2e
    MOV dword ptr [EBX + 0x25650],EAX   ; 0056df33
    JMP 0x0056df17                      ; 0056df39
        ;   XREF to: 0056df17 (UNCONDITIONAL_JUMP)  ; LAB_0056df17
    MOV ESI,dword ptr [ESP + 0x50]      ; 0056df3b
        ;   Label: LAB_0056df3b
    PUSH ESI                            ; 0056df3f
    CALL core_inv.cpp_CInventory_getActiveLightGun_FUN_004dccb0 ; 0056df40
        ;   XREF to: 004dccb0 (UNCONDITIONAL_CALL)  ; CLightGun * core_inv.cpp_CInventory_getActiveLightGun_FUN_004dccb0(CInventory * this_ptr)
    ADD ESP,0x4                         ; 0056df45
    TEST EAX,EAX                        ; 0056df48
    JZ 0x0056df59                       ; 0056df4a
        ;   XREF to: 0056df59 (CONDITIONAL_JUMP)  ; LAB_0056df59
    CMP dword ptr [EBX + 0x255e8],0x0   ; 0056df4c
    JZ 0x0056dbda                       ; 0056df53
        ;   XREF to: 0056dbda (CONDITIONAL_JUMP)  ; LAB_0056dbda
    MOV EAX,dword ptr [ESP + 0x50]      ; 0056df59
        ;   Label: LAB_0056df59
    PUSH EAX                            ; 0056df5d
    CALL core_inv.cpp_CInventory_getActiveLightGun_FUN_004dccb0 ; 0056df5e
        ;   XREF to: 004dccb0 (UNCONDITIONAL_CALL)  ; CLightGun * core_inv.cpp_CInventory_getActiveLightGun_FUN_004dccb0(CInventory * this_ptr)
    ADD ESP,0x4                         ; 0056df63
    TEST EAX,EAX                        ; 0056df66
    JZ 0x0056df80                       ; 0056df68
        ;   XREF to: 0056df80 (CONDITIONAL_JUMP)  ; LAB_0056df80
    CMP dword ptr [EBX + 0x255e8],0x1   ; 0056df6a
    JNZ 0x0056df80                      ; 0056df71
        ;   XREF to: 0056df80 (CONDITIONAL_JUMP)  ; LAB_0056df80
    MOV dword ptr [ESP + 0x5c],0xa      ; 0056df73
    JMP 0x0056dbe2                      ; 0056df7b
        ;   XREF to: 0056dbe2 (UNCONDITIONAL_JUMP)  ; LAB_0056dbe2
    MOV ECX,dword ptr [ESP + 0x50]      ; 0056df80
        ;   Label: LAB_0056df80
    PUSH ECX                            ; 0056df84
    CALL core_inv.cpp_CInventory_getActiveLightGun_FUN_004dccb0 ; 0056df85
        ;   XREF to: 004dccb0 (UNCONDITIONAL_CALL)  ; CLightGun * core_inv.cpp_CInventory_getActiveLightGun_FUN_004dccb0(CInventory * this_ptr)
    ADD ESP,0x4                         ; 0056df8a
    TEST EAX,EAX                        ; 0056df8d
    JNZ 0x0056dfa7                      ; 0056df8f
        ;   XREF to: 0056dfa7 (CONDITIONAL_JUMP)  ; LAB_0056dfa7
    CMP dword ptr [EBX + 0x255e8],0x2   ; 0056df91
    JNZ 0x0056dfa7                      ; 0056df98
        ;   XREF to: 0056dfa7 (CONDITIONAL_JUMP)  ; LAB_0056dfa7
    MOV dword ptr [ESP + 0x5c],0xa      ; 0056df9a
    JMP 0x0056dbe2                      ; 0056dfa2
        ;   XREF to: 0056dbe2 (UNCONDITIONAL_JUMP)  ; LAB_0056dbe2
    MOV EDI,dword ptr [ESP + 0x50]      ; 0056dfa7
        ;   Label: LAB_0056dfa7
    PUSH EDI                            ; 0056dfab
    CALL core_inv.cpp_CInventory_getActiveLightGun_FUN_004dccb0 ; 0056dfac
        ;   XREF to: 004dccb0 (UNCONDITIONAL_CALL)  ; CLightGun * core_inv.cpp_CInventory_getActiveLightGun_FUN_004dccb0(CInventory * this_ptr)
    ADD ESP,0x4                         ; 0056dfb1
    TEST EAX,EAX                        ; 0056dfb4
    JNZ 0x0056dfc5                      ; 0056dfb6
        ;   XREF to: 0056dfc5 (CONDITIONAL_JUMP)  ; LAB_0056dfc5
    CMP dword ptr [EBX + 0x255e8],0x1   ; 0056dfb8
    JZ 0x0056dbda                       ; 0056dfbf
        ;   XREF to: 0056dbda (CONDITIONAL_JUMP)  ; LAB_0056dbda
    MOV EDX,dword ptr [ESP + 0x38]      ; 0056dfc5
        ;   Label: LAB_0056dfc5
    TEST EDX,EDX                        ; 0056dfc9
    JL 0x0056dfd6                       ; 0056dfcb
        ;   XREF to: 0056dfd6 (CONDITIONAL_JUMP)  ; LAB_0056dfd6
    MOV dword ptr [ESP + 0x5c],EDX      ; 0056dfcd
    JMP 0x0056dbe2                      ; 0056dfd1
        ;   XREF to: 0056dbe2 (UNCONDITIONAL_JUMP)  ; LAB_0056dbe2
    MOV ECX,dword ptr [ESP + 0x54]      ; 0056dfd6
        ;   Label: LAB_0056dfd6
    MOV EAX,dword ptr [EBX + 0x25698]   ; 0056dfda
    CMP EAX,ECX                         ; 0056dfe0
    JNZ 0x0056e02e                      ; 0056dfe2
        ;   XREF to: 0056e02e (CONDITIONAL_JUMP)  ; LAB_0056e02e
    MOV EAX,dword ptr [EBX + 0x25698]   ; 0056dfe4
    TEST EAX,EAX                        ; 0056dfea
    JZ 0x0056e02a                       ; 0056dfec
        ;   XREF to: 0056e02a (CONDITIONAL_JUMP)  ; caseD_9
    MOV EAX,dword ptr [EAX + 0x43c]     ; 0056dfee
    CMP EAX,0x9                         ; 0056dff4
    JA 0x0056e02a                       ; 0056dff7
        ;   XREF to: 0056e02a (CONDITIONAL_JUMP)  ; caseD_9
    JMP dword ptr [EAX*0x4 + 0x56dafc]  ; 0056dff9 | caseD_5 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,0x2                         ; 0056e000
        ;   Label: caseD_0
    MOV dword ptr [ESP + 0x5c],EAX      ; 0056e005
        ;   Label: LAB_0056e005
    JMP 0x0056dbe2                      ; 0056e009
        ;   XREF to: 0056dbe2 (UNCONDITIONAL_JUMP)  ; LAB_0056dbe2
    MOV EAX,0x4                         ; 0056e00e
        ;   Label: caseD_1
    JMP 0x0056e005                      ; 0056e013
        ;   XREF to: 0056e005 (UNCONDITIONAL_JUMP)  ; LAB_0056e005
    MOV EAX,0x7                         ; 0056e015
        ;   Label: caseD_4
    JMP 0x0056e005                      ; 0056e01a
        ;   XREF to: 0056e005 (UNCONDITIONAL_JUMP)  ; LAB_0056e005
    MOV EAX,0x5                         ; 0056e01c
        ;   Label: caseD_2
    JMP 0x0056e005                      ; 0056e021
        ;   XREF to: 0056e005 (UNCONDITIONAL_JUMP)  ; LAB_0056e005
    MOV EAX,0x8                         ; 0056e023
        ;   Label: caseD_7
    JMP 0x0056e005                      ; 0056e028
        ;   XREF to: 0056e005 (UNCONDITIONAL_JUMP)  ; LAB_0056e005
    XOR EAX,EAX                         ; 0056e02a
        ;   Label: caseD_3
    JMP 0x0056e005                      ; 0056e02c
        ;   XREF to: 0056e005 (UNCONDITIONAL_JUMP)  ; LAB_0056e005
    TEST EAX,EAX                        ; 0056e02e
        ;   Label: LAB_0056e02e
    JNZ 0x0056e0a6                      ; 0056e030
        ;   XREF to: 0056e0a6 (CONDITIONAL_JUMP)  ; LAB_0056e0a6
    MOV EDX,ECX                         ; 0056e036
    TEST ECX,ECX                        ; 0056e038
    JNZ 0x0056e074                      ; 0056e03a
        ;   XREF to: 0056e074 (CONDITIONAL_JUMP)  ; LAB_0056e074
    MOV dword ptr [ESP + 0x5c],EAX      ; 0056e03c
        ;   Label: LAB_0056e03c
    JMP 0x0056dbe2                      ; 0056e040
        ;   XREF to: 0056dbe2 (UNCONDITIONAL_JUMP)  ; LAB_0056dbe2
    MOV EAX,0x1                         ; 0056e045
        ;   Label: LAB_0056e045
    JMP 0x0056e03c                      ; 0056e04a
        ;   XREF to: 0056e03c (UNCONDITIONAL_JUMP)  ; LAB_0056e03c
    MOV ESI,dword ptr [0x01d0557c]      ; 0056e04c | g_CMeleeClassInfo.name_hash
        ;   Label: LAB_0056e04c
    PUSH ESI                            ; 0056e052
    PUSH EDX                            ; 0056e053
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0056e054
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0056e059
    TEST EAX,EAX                        ; 0056e05c
    JZ 0x0056e070                       ; 0056e05e
        ;   XREF to: 0056e070 (CONDITIONAL_JUMP)  ; LAB_0056e070
    CMP dword ptr [EAX + 0x6e4],0x0     ; 0056e060
    JZ 0x0056e070                       ; 0056e067
        ;   XREF to: 0056e070 (CONDITIONAL_JUMP)  ; LAB_0056e070
    MOV EAX,0x3                         ; 0056e069
    JMP 0x0056e03c                      ; 0056e06e
        ;   XREF to: 0056e03c (UNCONDITIONAL_JUMP)  ; LAB_0056e03c
    XOR EAX,EAX                         ; 0056e070
        ;   Label: LAB_0056e070
    JMP 0x0056e03c                      ; 0056e072
        ;   XREF to: 0056e03c (UNCONDITIONAL_JUMP)  ; LAB_0056e03c
    MOV EAX,dword ptr [ECX + 0x43c]     ; 0056e074
        ;   Label: LAB_0056e074
    CMP EAX,0x7                         ; 0056e07a
    JNC 0x0056e091                      ; 0056e07d
        ;   XREF to: 0056e091 (CONDITIONAL_JUMP)  ; LAB_0056e091
    TEST EAX,EAX                        ; 0056e07f
    JZ 0x0056e045                       ; 0056e081
        ;   XREF to: 0056e045 (CONDITIONAL_JUMP)  ; LAB_0056e045
    MOV EAX,0x3                         ; 0056e083
    MOV dword ptr [ESP + 0x5c],EAX      ; 0056e088
    JMP 0x0056dbe2                      ; 0056e08c
        ;   XREF to: 0056dbe2 (UNCONDITIONAL_JUMP)  ; LAB_0056dbe2
    JBE 0x0056e04c                      ; 0056e091
        ;   XREF to: 0056e04c (CONDITIONAL_JUMP)  ; LAB_0056e04c
        ;   Label: LAB_0056e091
    CMP EAX,0x9                         ; 0056e093
    JZ 0x0056e04c                       ; 0056e096
        ;   XREF to: 0056e04c (CONDITIONAL_JUMP)  ; LAB_0056e04c
    MOV EAX,0x3                         ; 0056e098
    MOV dword ptr [ESP + 0x5c],EAX      ; 0056e09d
    JMP 0x0056dbe2                      ; 0056e0a1
        ;   XREF to: 0056dbe2 (UNCONDITIONAL_JUMP)  ; LAB_0056dbe2
    MOV EDX,EAX                         ; 0056e0a6
        ;   Label: LAB_0056e0a6
    JNZ 0x0056e0e2                      ; 0056e0a8
        ;   XREF to: 0056e0e2 (CONDITIONAL_JUMP)  ; LAB_0056e0e2
    MOV dword ptr [ESP + 0x5c],EAX      ; 0056e0aa
        ;   Label: LAB_0056e0aa
    JMP 0x0056dbe2                      ; 0056e0ae
        ;   XREF to: 0056dbe2 (UNCONDITIONAL_JUMP)  ; LAB_0056dbe2
    MOV EAX,0x1                         ; 0056e0b3
        ;   Label: LAB_0056e0b3
    JMP 0x0056e0aa                      ; 0056e0b8
        ;   XREF to: 0056e0aa (UNCONDITIONAL_JUMP)  ; LAB_0056e0aa
    MOV EDI,dword ptr [0x01d0557c]      ; 0056e0ba | g_CMeleeClassInfo.name_hash
        ;   Label: LAB_0056e0ba
    PUSH EDI                            ; 0056e0c0
    PUSH EDX                            ; 0056e0c1
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0056e0c2
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0056e0c7
    TEST EAX,EAX                        ; 0056e0ca
    JZ 0x0056e0de                       ; 0056e0cc
        ;   XREF to: 0056e0de (CONDITIONAL_JUMP)  ; LAB_0056e0de
    CMP dword ptr [EAX + 0x6e4],0x0     ; 0056e0ce
    JZ 0x0056e0de                       ; 0056e0d5
        ;   XREF to: 0056e0de (CONDITIONAL_JUMP)  ; LAB_0056e0de
    MOV EAX,0x3                         ; 0056e0d7
    JMP 0x0056e0aa                      ; 0056e0dc
        ;   XREF to: 0056e0aa (UNCONDITIONAL_JUMP)  ; LAB_0056e0aa
    XOR EAX,EAX                         ; 0056e0de
        ;   Label: LAB_0056e0de
    JMP 0x0056e0aa                      ; 0056e0e0
        ;   XREF to: 0056e0aa (UNCONDITIONAL_JUMP)  ; LAB_0056e0aa
    MOV EAX,dword ptr [EAX + 0x43c]     ; 0056e0e2
        ;   Label: LAB_0056e0e2
    CMP EAX,0x7                         ; 0056e0e8
    JNC 0x0056e0ff                      ; 0056e0eb
        ;   XREF to: 0056e0ff (CONDITIONAL_JUMP)  ; LAB_0056e0ff
    TEST EAX,EAX                        ; 0056e0ed
    JZ 0x0056e0b3                       ; 0056e0ef
        ;   XREF to: 0056e0b3 (CONDITIONAL_JUMP)  ; LAB_0056e0b3
    MOV EAX,0x3                         ; 0056e0f1
    MOV dword ptr [ESP + 0x5c],EAX      ; 0056e0f6
    JMP 0x0056dbe2                      ; 0056e0fa
        ;   XREF to: 0056dbe2 (UNCONDITIONAL_JUMP)  ; LAB_0056dbe2
    JBE 0x0056e0ba                      ; 0056e0ff
        ;   XREF to: 0056e0ba (CONDITIONAL_JUMP)  ; LAB_0056e0ba
        ;   Label: LAB_0056e0ff
    CMP EAX,0x9                         ; 0056e101
    JZ 0x0056e0ba                       ; 0056e104
        ;   XREF to: 0056e0ba (CONDITIONAL_JUMP)  ; LAB_0056e0ba
    MOV EAX,0x3                         ; 0056e106
    MOV dword ptr [ESP + 0x5c],EAX      ; 0056e10b
    JMP 0x0056dbe2                      ; 0056e10f
        ;   XREF to: 0056dbe2 (UNCONDITIONAL_JUMP)  ; LAB_0056dbe2
    MOV EAX,0xb                         ; 0056e114
        ;   Label: LAB_0056e114
    MOV EDX,EAX                         ; 0056e119
    MOV ECX,dword ptr [EDI + 0x64]      ; 0056e11b
    SAR EDX,0x1f                        ; 0056e11e
    IDIV ECX                            ; 0056e121
    MOV dword ptr [ESP + 0x60],EAX      ; 0056e123
    FILD dword ptr [ESP + 0x60]         ; 0056e127
    FCOMP float ptr [EBX + 0x2d08]      ; 0056e12b
    FNSTSW AX                           ; 0056e131
    SAHF                                ; 0056e133
    JA 0x0056dc6c                       ; 0056e134
        ;   XREF to: 0056dc6c (CONDITIONAL_JUMP)  ; caseD_b
    PUSH ESI                            ; 0056e13a
    CALL core_dynamite.cpp_CDynamite_lightFuse_FUN_0047a150 ; 0056e13b
        ;   XREF to: 0047a150 (UNCONDITIONAL_CALL)  ; void core_dynamite.cpp_CDynamite_lightFuse_FUN_0047a150(CDynamite * this_ptr)
    ADD ESP,0x4                         ; 0056e140
    JMP 0x0056dc6c                      ; 0056e143
        ;   XREF to: 0056dc6c (UNCONDITIONAL_JUMP)  ; caseD_b
    CMP dword ptr [EBX + 0x256a4],0x3   ; 0056e148
        ;   Label: caseD_7
    JNZ 0x0056e24b                      ; 0056e14f
        ;   XREF to: 0056e24b (CONDITIONAL_JUMP)  ; LAB_0056e24b
    MOV EAX,0xb                         ; 0056e155
    MOV EDX,EAX                         ; 0056e15a
    MOV ECX,dword ptr [EDI + 0x64]      ; 0056e15c
    SAR EDX,0x1f                        ; 0056e15f
    IDIV ECX                            ; 0056e162
    MOV dword ptr [ESP + 0x60],EAX      ; 0056e164
    FILD dword ptr [ESP + 0x60]         ; 0056e168
    FCOMP float ptr [EBX + 0x2d08]      ; 0056e16c
    FNSTSW AX                           ; 0056e172
    SAHF                                ; 0056e174
    JA 0x0056e24b                       ; 0056e175
        ;   XREF to: 0056e24b (CONDITIONAL_JUMP)  ; LAB_0056e24b
    PUSH EBX                            ; 0056e17b
    LEA ESI,[ESP + 0x28]                ; 0056e17c
    LEA EDI,[ESP + 0x4]                 ; 0056e180
    CALL core_stranger.cpp_FUN_0056da90 ; 0056e184
        ;   XREF to: 0056da90 (UNCONDITIONAL_CALL)  ; undefined core_stranger.cpp_FUN_0056da90()
    LEA ESI,[ESP + 0x28]                ; 0056e189
    ADD ESP,0x4                         ; 0056e18d
    MOVSD ES:EDI,ESI                    ; 0056e190
    MOVSD ES:EDI,ESI                    ; 0056e191
    MOVSD ES:EDI,ESI                    ; 0056e192
    MOV ESI,dword ptr [0x01c225d8]      ; 0056e193 | g_CDynamiteClassInfo.name_hash
    PUSH ESI                            ; 0056e199
    MOV EDI,dword ptr [EBX + 0x25698]   ; 0056e19a
    PUSH EDI                            ; 0056e1a0
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0056e1a1
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [ESP + 0x54],EAX      ; 0056e1a6
    ADD ESP,0x8                         ; 0056e1aa
    MOV dword ptr [ESP + 0x3c],EAX      ; 0056e1ad
    TEST EAX,EAX                        ; 0056e1b1
    JZ 0x0056e218                       ; 0056e1b3
        ;   XREF to: 0056e218 (CONDITIONAL_JUMP)  ; LAB_0056e218
    MOV EAX,ESP                         ; 0056e1b5
    PUSH EAX                            ; 0056e1b7
    PUSH EBX                            ; 0056e1b8
    LEA ESI,[ESP + 0x14]                ; 0056e1b9
    LEA EDI,[ESP + 0x20]                ; 0056e1bd
    CALL core_actor.cpp_FUN_00408cf0    ; 0056e1c1
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    ADD ESP,0x8                         ; 0056e1c6
    LEA ESI,[ESP + 0xc]                 ; 0056e1c9
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0056e1cd
    LEA EAX,[ESP + 0x18]                ; 0056e1d1
    ADD EDX,0x6d8                       ; 0056e1d5
    MOVSD ES:EDI,ESI                    ; 0056e1db
    MOVSD ES:EDI,ESI                    ; 0056e1dc
    MOVSD ES:EDI,ESI                    ; 0056e1dd
    CMP EDX,EAX                         ; 0056e1de
    JZ 0x0056e1f6                       ; 0056e1e0
        ;   XREF to: 0056e1f6 (CONDITIONAL_JUMP)  ; LAB_0056e1f6
    MOV EAX,dword ptr [ESP + 0x18]      ; 0056e1e2
    MOV dword ptr [EDX],EAX             ; 0056e1e6
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0056e1e8
    MOV dword ptr [EDX + 0x4],EAX       ; 0056e1ec
    MOV EAX,dword ptr [ESP + 0x20]      ; 0056e1ef
    MOV dword ptr [EDX + 0x8],EAX       ; 0056e1f3
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0056e1f6
        ;   Label: LAB_0056e1f6
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0056e1fa
    PUSH EDX                            ; 0056e1fe
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 0056e1ff
    CALL dword ptr [EAX + 0xec]         ; 0056e205
    ADD ESP,0x4                         ; 0056e20b
    MOV dword ptr [EBX + 0x25698],0x0   ; 0056e20e
    CMP dword ptr [EBX + 0x2698],0x0    ; 0056e218
        ;   Label: LAB_0056e218
    JZ 0x0056e236                       ; 0056e21f
        ;   XREF to: 0056e236 (CONDITIONAL_JUMP)  ; LAB_0056e236
    MOV EDX,ESP                         ; 0056e221
    PUSH EDX                            ; 0056e223
    PUSH 0x1                            ; 0056e224
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0056e226
    PUSH EBX                            ; 0056e22c
    CALL dword ptr [EAX + 0x130]        ; 0056e22d
    ADD ESP,0xc                         ; 0056e233
    MOV dword ptr [EBX + 0x256a4],0x0   ; 0056e236
        ;   Label: LAB_0056e236
    MOV EAX,[0x005fc1d4]                ; 0056e240 | DAT_005fc1d4
    MOV dword ptr [EBX + 0x25650],EAX   ; 0056e245
    FLD float ptr [EBX + 0x2d08]        ; 0056e24b
        ;   Label: LAB_0056e24b
    FLD1                                ; 0056e251
    FCOMPP                              ; 0056e253
    FNSTSW AX                           ; 0056e255
    SAHF                                ; 0056e257
    JA 0x0056dc6c                       ; 0056e258
        ;   XREF to: 0056dc6c (CONDITIONAL_JUMP)  ; caseD_b
    MOV dword ptr [EBX + 0x2d04],0x0    ; 0056e25e
    MOV dword ptr [EBX + 0x2d08],0x0    ; 0056e268
    JMP 0x0056dc6c                      ; 0056e272
        ;   XREF to: 0056dc6c (UNCONDITIONAL_JUMP)  ; caseD_b
    CMP dword ptr [ESP + 0x48],0x3f19999a ; 0056e277
        ;   Label: caseD_8
    JGE 0x0056dc6c                      ; 0056e27f
        ;   XREF to: 0056dc6c (CONDITIONAL_JUMP)  ; caseD_b
    CMP dword ptr [EBX + 0x2d08],0x3f19999a ; 0056e285
    JL 0x0056dc6c                       ; 0056e28f
        ;   XREF to: 0056dc6c (CONDITIONAL_JUMP)  ; caseD_b
    PUSH 0x5ebd65                       ; 0056e295 | = "CShotgun"
    MOV ESI,dword ptr [EBX + 0x25698]   ; 0056e29a
    PUSH ESI                            ; 0056e2a0
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 0056e2a1
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0056e2a6
    TEST EAX,EAX                        ; 0056e2a9
    JZ 0x0056dc6c                       ; 0056e2ab
        ;   XREF to: 0056dc6c (CONDITIONAL_JUMP)  ; caseD_b
    MOV EAX,dword ptr [EBX + 0x25698]   ; 0056e2b1
    PUSH EAX                            ; 0056e2b7
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0056e2b8
    CALL dword ptr [EDX + 0xe0]         ; 0056e2be
    ADD ESP,0x4                         ; 0056e2c4
    JMP 0x0056dc6c                      ; 0056e2c7
        ;   XREF to: 0056dc6c (UNCONDITIONAL_JUMP)  ; caseD_b
    CMP dword ptr [ESP + 0x48],0x3ebd70a4 ; 0056e2cc
        ;   Label: caseD_c
    JGE 0x0056dc6c                      ; 0056e2d4
        ;   XREF to: 0056dc6c (CONDITIONAL_JUMP)  ; caseD_b
    CMP dword ptr [EBX + 0x2d08],0x3ebd70a4 ; 0056e2da
    JL 0x0056dc6c                       ; 0056e2e4
        ;   XREF to: 0056dc6c (CONDITIONAL_JUMP)  ; caseD_b
    MOV EAX,dword ptr [EBX + 0x25698]   ; 0056e2ea
    TEST EAX,EAX                        ; 0056e2f0
    JZ 0x0056dc6c                       ; 0056e2f2
        ;   XREF to: 0056dc6c (CONDITIONAL_JUMP)  ; caseD_b
    PUSH 0x1                            ; 0056e2f8
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0056e2fa
    PUSH EAX                            ; 0056e300
    CALL dword ptr [EDX + 0x80]         ; 0056e301
    ADD ESP,0x8                         ; 0056e307
    JMP 0x0056dc6c                      ; 0056e30a
        ;   XREF to: 0056dc6c (UNCONDITIONAL_JUMP)  ; caseD_b
    CMP dword ptr [ESP + 0x48],0x3f28f5c3 ; 0056e30f
        ;   Label: caseD_d
    JGE 0x0056dc6c                      ; 0056e317
        ;   XREF to: 0056dc6c (CONDITIONAL_JUMP)  ; caseD_b
    CMP dword ptr [EBX + 0x2d08],0x3f28f5c3 ; 0056e31d
    JL 0x0056dc6c                       ; 0056e327
        ;   XREF to: 0056dc6c (CONDITIONAL_JUMP)  ; caseD_b
    MOV ECX,dword ptr [EBX + 0x25698]   ; 0056e32d
    TEST ECX,ECX                        ; 0056e333
    JZ 0x0056dc6c                       ; 0056e335
        ;   XREF to: 0056dc6c (CONDITIONAL_JUMP)  ; caseD_b
    PUSH 0x2                            ; 0056e33b
    MOV EDX,dword ptr [ECX + 0x2b0]     ; 0056e33d
    PUSH ECX                            ; 0056e343
    CALL dword ptr [EDX + 0x80]         ; 0056e344
    ADD ESP,0x8                         ; 0056e34a
    JMP 0x0056dc6c                      ; 0056e34d
        ;   XREF to: 0056dc6c (UNCONDITIONAL_JUMP)  ; caseD_b
    MOV EAX,0x1                         ; 0056e352
        ;   Label: LAB_0056e352
    JMP 0x0056dc95                      ; 0056e357
        ;   XREF to: 0056dc95 (UNCONDITIONAL_JUMP)  ; LAB_0056dc95
    MOV ECX,dword ptr [0x01d0557c]      ; 0056e35c | g_CMeleeClassInfo.name_hash
        ;   Label: LAB_0056e35c
    PUSH ECX                            ; 0056e362
    PUSH EDX                            ; 0056e363
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0056e364
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0056e369
    TEST EAX,EAX                        ; 0056e36c
    JZ 0x0056e383                       ; 0056e36e
        ;   XREF to: 0056e383 (CONDITIONAL_JUMP)  ; LAB_0056e383
    CMP dword ptr [EAX + 0x6e4],0x0     ; 0056e370
    JZ 0x0056e383                       ; 0056e377
        ;   XREF to: 0056e383 (CONDITIONAL_JUMP)  ; LAB_0056e383
    MOV EAX,0x3                         ; 0056e379
    JMP 0x0056dc95                      ; 0056e37e
        ;   XREF to: 0056dc95 (UNCONDITIONAL_JUMP)  ; LAB_0056dc95
    XOR EAX,EAX                         ; 0056e383
        ;   Label: LAB_0056e383
    JMP 0x0056dc95                      ; 0056e385
        ;   XREF to: 0056dc95 (UNCONDITIONAL_JUMP)  ; LAB_0056dc95
    MOV EAX,dword ptr [EAX + 0x43c]     ; 0056e38a
        ;   Label: LAB_0056e38a
    CMP EAX,0x7                         ; 0056e390
    JNC 0x0056e3a3                      ; 0056e393
        ;   XREF to: 0056e3a3 (CONDITIONAL_JUMP)  ; LAB_0056e3a3
    TEST EAX,EAX                        ; 0056e395
    JZ 0x0056e352                       ; 0056e397
        ;   XREF to: 0056e352 (CONDITIONAL_JUMP)  ; LAB_0056e352
    MOV EAX,0x3                         ; 0056e399
    JMP 0x0056dc95                      ; 0056e39e
        ;   XREF to: 0056dc95 (UNCONDITIONAL_JUMP)  ; LAB_0056dc95
    JBE 0x0056e35c                      ; 0056e3a3
        ;   XREF to: 0056e35c (CONDITIONAL_JUMP)  ; LAB_0056e35c
        ;   Label: LAB_0056e3a3
    CMP EAX,0x9                         ; 0056e3a5
    JZ 0x0056e35c                       ; 0056e3a8
        ;   XREF to: 0056e35c (CONDITIONAL_JUMP)  ; LAB_0056e35c
    MOV EAX,0x3                         ; 0056e3aa
    JMP 0x0056dc95                      ; 0056e3af
        ;   XREF to: 0056dc95 (UNCONDITIONAL_JUMP)  ; LAB_0056dc95
    MOV EAX,0x1                         ; 0056e3b4
        ;   Label: LAB_0056e3b4
    JMP 0x0056dcd4                      ; 0056e3b9
        ;   XREF to: 0056dcd4 (UNCONDITIONAL_JUMP)  ; LAB_0056dcd4
    MOV ESI,dword ptr [0x01d0557c]      ; 0056e3be | g_CMeleeClassInfo.name_hash
        ;   Label: LAB_0056e3be
    PUSH ESI                            ; 0056e3c4
    PUSH EDX                            ; 0056e3c5
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0056e3c6
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0056e3cb
    TEST EAX,EAX                        ; 0056e3ce
    JZ 0x0056dcd2                       ; 0056e3d0
        ;   XREF to: 0056dcd2 (CONDITIONAL_JUMP)  ; LAB_0056dcd2
    CMP dword ptr [EAX + 0x6e4],0x0     ; 0056e3d6
    JZ 0x0056dcd2                       ; 0056e3dd
        ;   XREF to: 0056dcd2 (CONDITIONAL_JUMP)  ; LAB_0056dcd2
    MOV EAX,0x3                         ; 0056e3e3
    JMP 0x0056dcd4                      ; 0056e3e8
        ;   XREF to: 0056dcd4 (UNCONDITIONAL_JUMP)  ; LAB_0056dcd4
    MOV EAX,dword ptr [EDX + 0x43c]     ; 0056e3ed
        ;   Label: LAB_0056e3ed
    CMP EAX,0x7                         ; 0056e3f3
    JNC 0x0056e406                      ; 0056e3f6
        ;   XREF to: 0056e406 (CONDITIONAL_JUMP)  ; LAB_0056e406
    TEST EAX,EAX                        ; 0056e3f8
    JZ 0x0056e3b4                       ; 0056e3fa
        ;   XREF to: 0056e3b4 (CONDITIONAL_JUMP)  ; LAB_0056e3b4
    MOV EAX,0x3                         ; 0056e3fc
    JMP 0x0056dcd4                      ; 0056e401
        ;   XREF to: 0056dcd4 (UNCONDITIONAL_JUMP)  ; LAB_0056dcd4
    JBE 0x0056e3be                      ; 0056e406
        ;   XREF to: 0056e3be (CONDITIONAL_JUMP)  ; LAB_0056e3be
        ;   Label: LAB_0056e406
    CMP EAX,0x9                         ; 0056e408
    JZ 0x0056e3be                       ; 0056e40b
        ;   XREF to: 0056e3be (CONDITIONAL_JUMP)  ; LAB_0056e3be
    MOV EAX,0x3                         ; 0056e40d
    JMP 0x0056dcd4                      ; 0056e412
        ;   XREF to: 0056dcd4 (UNCONDITIONAL_JUMP)  ; LAB_0056dcd4
    PUSH 0x1                            ; 0056e417
        ;   Label: LAB_0056e417
    PUSH 0x16                           ; 0056e419
    MOV ESI,dword ptr [ESP + 0x4c]      ; 0056e41b
    PUSH ESI                            ; 0056e41f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0056e420
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EDI,dword ptr [EBX + 0x256a4]   ; 0056e425
    ADD ESP,0xc                         ; 0056e42b
    TEST EDI,EDI                        ; 0056e42e
    JZ 0x0056e44c                       ; 0056e430
        ;   XREF to: 0056e44c (CONDITIONAL_JUMP)  ; LAB_0056e44c
    PUSH 0x13a9                         ; 0056e432
    PUSH EDI                            ; 0056e437
    PUSH 0x5ebd74                       ; 0056e438 | = "actionPending = %d\nstranger.cpp line %d"
    MOV EDX,dword ptr [0x006138e0]      ; 0056e43d | g_CEditorToolsPtr
    PUSH EDX                            ; 0056e443
    CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0047bdf0 ; 0056e444
        ;   XREF to: 0047bdf0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showWarning_FUN_0047bdf0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 0056e449
    MOV dword ptr [EBX + 0x256a4],0x2   ; 0056e44c
        ;   Label: LAB_0056e44c
    JMP 0x0056dda7                      ; 0056e456
        ;   XREF to: 0056dda7 (UNCONDITIONAL_JUMP)  ; LAB_0056dda7
    MOV dword ptr [EBX + 0x255e8],0x2   ; 0056e45b
        ;   Label: LAB_0056e45b
    JMP 0x0056dddd                      ; 0056e465
        ;   XREF to: 0056dddd (UNCONDITIONAL_JUMP)  ; LAB_0056dddd
    CMP ESI,0x3                         ; 0056e46a
        ;   Label: LAB_0056e46a
    JNZ 0x0056dddd                      ; 0056e46d
        ;   XREF to: 0056dddd (CONDITIONAL_JUMP)  ; LAB_0056dddd
    CMP dword ptr [EBX + 0x255e8],0x2   ; 0056e473
    JGE 0x0056dddd                      ; 0056e47a
        ;   XREF to: 0056dddd (CONDITIONAL_JUMP)  ; LAB_0056dddd
    MOV EDX,dword ptr [ESP + 0x50]      ; 0056e480
    PUSH EDX                            ; 0056e484
    CALL core_inv.cpp_CInventory_getActiveLightGun_FUN_004dccb0 ; 0056e485
        ;   XREF to: 004dccb0 (UNCONDITIONAL_CALL)  ; CLightGun * core_inv.cpp_CInventory_getActiveLightGun_FUN_004dccb0(CInventory * this_ptr)
    ADD ESP,0x4                         ; 0056e48a
    TEST EAX,EAX                        ; 0056e48d
    JNZ 0x0056ddd3                      ; 0056e48f
        ;   XREF to: 0056ddd3 (CONDITIONAL_JUMP)  ; LAB_0056ddd3
    MOV dword ptr [EBX + 0x255e8],EAX   ; 0056e495
    JMP 0x0056dddd                      ; 0056e49b
        ;   XREF to: 0056dddd (UNCONDITIONAL_JUMP)  ; LAB_0056dddd
    CMP EDI,0x8                         ; 0056e4a0
        ;   Label: LAB_0056e4a0
    JZ 0x0056ddf2                       ; 0056e4a3
        ;   XREF to: 0056ddf2 (CONDITIONAL_JUMP)  ; LAB_0056ddf2
    JMP 0x0056ddfc                      ; 0056e4a9
        ;   XREF to: 0056ddfc (UNCONDITIONAL_JUMP)  ; LAB_0056ddfc

