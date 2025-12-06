; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_stranger.cpp_CStranger_FUN_005c5270()
;
; Local Variables:
; undefined1       Stack[-0x60]:1  local_60
; undefined1       Stack[-0x54]:1  local_54
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
;   core_stranger.cpp_CStranger_FUN_005bb960 at 005bc2a9
;
; Referenced Globals:
;   void* switchdataD_005c5228 = 005c56fc
;   void* switchdataD_005c524c = 005c5362
;   TerminatedCString s_CShotgun_00653d94
;   TerminatedCString s_CTrap_00653d9d
;   TerminatedCString s_actionPending_d_stranger_00653da3
;   double DOUBLE_00653dcc = 25
;   double DOUBLE_00653dd4 = 0.990000000000000
;   undefined4 DAT_00663744
;   undefined4 DAT_00663748
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   undefined4 g_CDynamiteClassInfo.name_hash
;   CEditorTools g_CEditorToolsPtr
;   undefined4 g_CMeleeClassInfo.name_hash
;   CDemonMission g_CDemonMissionInstance
;   ... and 1 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;   core_charactr.cpp_CCharacter_advanceLayerAction_FUN_0042e370
;   core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_0042e8c0
;   core_charactr.cpp_CCharacter_FUN_0042e840
;   core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0
;   core_dynamite.cpp_FUN_0049cf20
;   core_dynamite.cpp_FUN_0049cf70
;   core_hero.cpp_FUN_004f38d0
;   core_inv.cpp_CInventory_getActiveLightGun_FUN_004ffab0
;   core_inv.cpp_CInventory_removeItem_FUN_004fea70
;   core_mission.cpp_CDemonMission_FUN_00523b70
;   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c5270
        ;   Label: core_stranger.cpp_CStranger_FUN_005c5270
    PUSH ESI                            ; 005c5271
    PUSH EDI                            ; 005c5272
    PUSH EBP                            ; 005c5273
    MOV EBP,ESP                         ; 005c5274
    SUB ESP,0x4c                        ; 005c5276
    AND ESP,0xfffffff8                  ; 005c5279
    MOV EBX,dword ptr [EBP + 0x14]      ; 005c527c
    CMP dword ptr [EBX + 0x2a8c],0xe    ; 005c527f
    JNZ 0x005c529e                      ; 005c5286 | LAB_005c529e
        ;   XREF to: 005c529e (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EBX + 0x24f8]    ; 005c5288
    TEST ECX,ECX                        ; 005c528e
    JNZ 0x005c529e                      ; 005c5290 | LAB_005c529e
        ;   XREF to: 005c529e (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x2a90],ECX    ; 005c5292
    MOV dword ptr [EBX + 0x2a8c],ECX    ; 005c5298
    MOV EDI,0xffffffff                  ; 005c529e
        ;   Label: LAB_005c529e
    MOV EAX,dword ptr [EBX + 0x1fbb0]   ; 005c52a3
    XOR ESI,ESI                         ; 005c52a9
    MOV dword ptr [ESP + 0x20],EDI      ; 005c52ab
    MOV dword ptr [ESP + 0x44],ESI      ; 005c52af
    TEST EAX,EAX                        ; 005c52b3
    JZ 0x005c5530                       ; 005c52b5 | LAB_005c5530
        ;   XREF to: 005c5530 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x1fbd4],ESI   ; 005c52bb
    LEA EAX,[EBX + 0x1f738]             ; 005c52c1
        ;   Label: LAB_005c52c1
    XOR ESI,ESI                         ; 005c52c7
    MOV dword ptr [ESP + 0x40],EAX      ; 005c52c9
    LEA EAX,[EBX + 0x158]               ; 005c52cd
    MOV dword ptr [ESP + 0x2c],ESI      ; 005c52d3
    MOV dword ptr [ESP + 0x30],EAX      ; 005c52d7
    FLD float ptr [EBP + 0x18]          ; 005c52db
        ;   Label: LAB_005c52db
    FLDZ                                ; 005c52de
    FCOMPP                              ; 005c52e0
    FNSTSW AX                           ; 005c52e2
    SAHF                                ; 005c52e4
    JNC 0x005c5529                      ; 005c52e5 | LAB_005c5529
        ;   XREF to: 005c5529 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [EBX + 0x1fc38]   ; 005c52eb
    CMP EDI,0x1                         ; 005c52f1
    JNZ 0x005c55b2                      ; 005c52f4 | LAB_005c55b2
        ;   XREF to: 005c55b2 (CONDITIONAL_JUMP)
    MOV ESI,0x3                         ; 005c52fa
        ;   Label: LAB_005c52fa
    MOV EAX,dword ptr [EBX + 0x2a90]    ; 005c52ff
        ;   Label: LAB_005c52ff
    PUSH ESI                            ; 005c5305
    MOV dword ptr [ESP + 0x40],EAX      ; 005c5306
    LEA EAX,[EBP + 0x18]                ; 005c530a
    PUSH EAX                            ; 005c530d
    PUSH EBX                            ; 005c530e
    CALL core_charactr.cpp_CCharacter_advanceLayerAction_FUN_0042e370 ; 005c530f | int core_charactr.cpp_CCharacter_advanceLayerAction_FUN_0042e370(CCharacter * this_ptr)
        ;   XREF to: 0042e370 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [EBX + 0x2a8c]    ; 005c5314
    MOV EDI,EAX                         ; 005c531a
    IMUL EAX,EDX,0x38                   ; 005c531c
    IMUL EAX,dword ptr [EBX + EAX*0x1 + 0x2658],0x54c ; 005c531f
    ADD ESP,0xc                         ; 005c532a
    MOV dword ptr [ESP + 0x48],EAX      ; 005c532d
    MOV EAX,dword ptr [ESP + 0x30]      ; 005c5331
    PUSH EAX                            ; 005c5335
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0 ; 005c5336 | CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0(CMotionController * this_ptr)
        ;   XREF to: 0052dce0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005c533b
    ADD EAX,0x968                       ; 005c533e
    MOV EDX,dword ptr [ESP + 0x48]      ; 005c5343
    ADD EDX,EAX                         ; 005c5347
    MOV EAX,dword ptr [EBX + 0x2a8c]    ; 005c5349
    SUB EAX,0x6                         ; 005c534f
    MOV dword ptr [ESP + 0x24],EDX      ; 005c5352
    CMP EAX,0x7                         ; 005c5356
    JA 0x005c5391                       ; 005c5359 | caseD_4
        ;   XREF to: 005c5391 (CONDITIONAL_JUMP)
    JMP dword ptr [EAX*0x4 + 0x5c524c]  ; 005c535b | void * switchdataD_005c524c
        ;   Label: switchD
    MOV EDX,dword ptr [0x02ceed20]      ; 005c5362 | g_CDynamiteClassInfo.name_hash
        ;   Label: caseD_0
    PUSH EDX                            ; 005c5368
    MOV ECX,dword ptr [EBX + 0x1fc2c]   ; 005c5369
    PUSH ECX                            ; 005c536f
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005c5370 | CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x40],EAX      ; 005c5375
    ADD ESP,0x8                         ; 005c5379
    TEST EAX,EAX                        ; 005c537c
    JZ 0x005c5391                       ; 005c537e | caseD_4
        ;   XREF to: 005c5391 (CONDITIONAL_JUMP)
    PUSH EAX                            ; 005c5380
    CALL core_dynamite.cpp_FUN_0049cf70 ; 005c5381 | undefined core_dynamite.cpp_FUN_0049cf70()
        ;   XREF to: 0049cf70 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005c5386
    TEST EAX,EAX                        ; 005c5389
    JZ 0x005c57e6                       ; 005c538b | LAB_005c57e6
        ;   XREF to: 005c57e6 (CONDITIONAL_JUMP)
    TEST EDI,EDI                        ; 005c5391
        ;   Label: caseD_5
    JL 0x005c5517                       ; 005c5393 | LAB_005c5517
        ;   XREF to: 005c5517 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x44]      ; 005c5399
    MOV EAX,dword ptr [EBX + 0x1fc2c]   ; 005c539d
    CMP EAX,EDX                         ; 005c53a3
    JZ 0x005c5418                       ; 005c53a5 | LAB_005c5418
        ;   XREF to: 005c5418 (CONDITIONAL_JUMP)
    TEST EAX,EAX                        ; 005c53ab
    JZ 0x005c53dd                       ; 005c53ad | LAB_005c53dd
        ;   XREF to: 005c53dd (CONDITIONAL_JUMP)
    MOV EDX,EAX                         ; 005c53af
    JNZ 0x005c5a45                      ; 005c53b1 | LAB_005c5a45
        ;   XREF to: 005c5a45 (CONDITIONAL_JUMP)
    CMP EDI,EAX                         ; 005c53b7
        ;   Label: LAB_005c53b7
    JNZ 0x005c53dd                      ; 005c53b9 | LAB_005c53dd
        ;   XREF to: 005c53dd (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 005c53bb
    MOV EAX,dword ptr [EBX + 0x1fc2c]   ; 005c53bd
    PUSH EAX                            ; 005c53c3
    MOV EDX,dword ptr [EAX + 0x154]     ; 005c53c4
    CALL dword ptr [EDX + 0xf0]         ; 005c53ca
    ADD ESP,0x8                         ; 005c53d0
    MOV dword ptr [EBX + 0x1fc2c],0x0   ; 005c53d3
    CMP dword ptr [EBX + 0x1fbd4],0x0   ; 005c53dd
        ;   Label: LAB_005c53dd
    JZ 0x005c5418                       ; 005c53e4 | LAB_005c5418
        ;   XREF to: 005c5418 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x44]      ; 005c53e6
    TEST EDX,EDX                        ; 005c53ea
    JNZ 0x005c5aa8                      ; 005c53ec | LAB_005c5aa8
        ;   XREF to: 005c5aa8 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 005c53f2
        ;   Label: LAB_005c53f2
    CMP EDI,EAX                         ; 005c53f4
        ;   Label: LAB_005c53f4
    JNZ 0x005c5418                      ; 005c53f6 | LAB_005c5418
        ;   XREF to: 005c5418 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x44]      ; 005c53f8
    MOV dword ptr [EBX + 0x1fc2c],EAX   ; 005c53fc
    TEST EAX,EAX                        ; 005c5402
    JZ 0x005c5418                       ; 005c5404 | LAB_005c5418
        ;   XREF to: 005c5418 (CONDITIONAL_JUMP)
    PUSH 0x2                            ; 005c5406
    MOV EDX,dword ptr [EAX + 0x154]     ; 005c5408
    PUSH EAX                            ; 005c540e
    CALL dword ptr [EDX + 0xf0]         ; 005c540f
    ADD ESP,0x8                         ; 005c5415
    MOV EAX,dword ptr [EBX + 0x1fc38]   ; 005c5418
        ;   Label: LAB_005c5418
    CMP EAX,0x1                         ; 005c541e
    JNZ 0x005c543c                      ; 005c5421 | LAB_005c543c
        ;   XREF to: 005c543c (CONDITIONAL_JUMP)
    CMP EDI,0x3                         ; 005c5423
    JNZ 0x005c543c                      ; 005c5426 | LAB_005c543c
        ;   XREF to: 005c543c (CONDITIONAL_JUMP)
    PUSH EAX                            ; 005c5428
    PUSH EBX                            ; 005c5429
    CALL core_hero.cpp_FUN_004f38d0     ; 005c542a | undefined core_hero.cpp_FUN_004f38d0()
        ;   XREF to: 004f38d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005c542f
    MOV dword ptr [EBX + 0x1fc38],0x0   ; 005c5432
    MOV EDX,dword ptr [EBX + 0x1fbb4]   ; 005c543c
        ;   Label: LAB_005c543c
    TEST EDX,EDX                        ; 005c5442
    JZ 0x005c54ca                       ; 005c5444 | LAB_005c54ca
        ;   XREF to: 005c54ca (CONDITIONAL_JUMP)
    CMP EDI,0x3                         ; 005c544a
    JNZ 0x005c54ca                      ; 005c544d | LAB_005c54ca
        ;   XREF to: 005c54ca (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 005c544f
    PUSH EDX                            ; 005c5451
    MOV EAX,dword ptr [ESP + 0x48]      ; 005c5452
    PUSH EAX                            ; 005c5456
    CALL core_inv.cpp_CInventory_removeItem_FUN_004fea70 ; 005c5457 | void core_inv.cpp_CInventory_removeItem_FUN_004fea70(CInventory * this_ptr, CDemonActor * item_to_remove, int should_delete_actor)
        ;   XREF to: 004fea70 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005c545c
    MOV EDX,dword ptr [EBX + 0x1fbb4]   ; 005c545f
    PUSH EDX                            ; 005c5465
    MOV ECX,dword ptr [0x0067d550]      ; 005c5466 | CDemonMission g_CDemonMissionInstance | CDemonMission * g_CDemonMissionPtr
    PUSH ECX                            ; 005c546c | CDemonMission g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_FUN_00523b70 ; 005c546d | void core_mission.cpp_CDemonMission_FUN_00523b70(CDemonMission * this_ptr)
        ;   XREF to: 00523b70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005c5472
    MOV EAX,dword ptr [EBX + 0x1fbb4]   ; 005c5475
    PUSH 0x0                            ; 005c547b
    PUSH EAX                            ; 005c547d
    PUSH 0x1                            ; 005c547e
    PUSH EBX                            ; 005c5480
    CALL core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0 ; 005c5481 | void core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0(CCharacter * this_ptr)
        ;   XREF to: 0042cdb0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005c5486
    PUSH 0x653d9d                       ; 005c5489 | = "CTrap" | s_CTrap_00653d9d = CTrap
    MOV EDX,dword ptr [EBX + 0x1fbb4]   ; 005c548e
    PUSH EDX                            ; 005c5494
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 005c5495 | int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005c549a
    TEST EAX,EAX                        ; 005c549d
    JZ 0x005c5ad2                       ; 005c549f | LAB_005c5ad2
        ;   XREF to: 005c5ad2 (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 005c54a5
    PUSH 0x14                           ; 005c54a7
    MOV EAX,dword ptr [ESP + 0x38]      ; 005c54a9
    PUSH EAX                            ; 005c54ad
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005c54ae | void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005c54b3
    MOV dword ptr [EBX + 0x1fc38],0x6   ; 005c54b6
    MOV dword ptr [EBX + 0x1fbb4],0x0   ; 005c54c0
        ;   Label: LAB_005c54c0
    CMP EDI,0xa                         ; 005c54ca
        ;   Label: LAB_005c54ca
    JNZ 0x005c5b25                      ; 005c54cd | LAB_005c5b25
        ;   XREF to: 005c5b25 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x40]      ; 005c54d3
    PUSH EAX                            ; 005c54d7
    CALL core_inv.cpp_CInventory_getActiveLightGun_FUN_004ffab0 ; 005c54d8 | CLightGun * core_inv.cpp_CInventory_getActiveLightGun_FUN_004ffab0(CInventory * this_ptr)
        ;   XREF to: 004ffab0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005c54dd
    TEST EAX,EAX                        ; 005c54e0
    JNZ 0x005c5b16                      ; 005c54e2 | LAB_005c5b16
        ;   XREF to: 005c5b16 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x1fb98],0x1   ; 005c54e8
        ;   Label: LAB_005c54e8
    CMP dword ptr [EBX + 0x1fc38],0x7   ; 005c54f2
        ;   Label: LAB_005c54f2
    JNZ 0x005c550d                      ; 005c54f9 | LAB_005c550d
        ;   XREF to: 005c550d (CONDITIONAL_JUMP)
    TEST EDI,EDI                        ; 005c54fb
    JNZ 0x005c5b5b                      ; 005c54fd | LAB_005c5b5b
        ;   XREF to: 005c5b5b (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x1fc38],0x0   ; 005c5503
        ;   Label: LAB_005c5503
    PUSH ESI                            ; 005c550d
        ;   Label: LAB_005c550d
    PUSH EBX                            ; 005c550e
    CALL core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_0042e8c0 ; 005c550f | void core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_0042e8c0(CCharacter * this_ptr)
        ;   XREF to: 0042e8c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005c5514
    MOV ECX,dword ptr [ESP + 0x2c]      ; 005c5517
        ;   Label: LAB_005c5517
    INC ECX                             ; 005c551b
    MOV dword ptr [ESP + 0x2c],ECX      ; 005c551c
    CMP ECX,0x2                         ; 005c5520
    JL 0x005c52db                       ; 005c5523 | LAB_005c52db
        ;   XREF to: 005c52db (CONDITIONAL_JUMP)
    MOV ESP,EBP                         ; 005c5529
        ;   Label: LAB_005c5529
    POP EBP                             ; 005c552b
    POP EDI                             ; 005c552c
    POP ESI                             ; 005c552d
    POP EBX                             ; 005c552e
    RET                                 ; 005c552f
    CMP dword ptr [EBX + 0x1fbd4],0x0   ; 005c5530
        ;   Label: LAB_005c5530
    JZ 0x005c52c1                       ; 005c5537 | LAB_005c52c1
        ;   XREF to: 005c52c1 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EBX + 0x24f8]    ; 005c553d
    TEST ECX,ECX                        ; 005c5543
    JNZ 0x005c5579                      ; 005c5545 | LAB_005c5579
        ;   XREF to: 005c5579 (CONDITIONAL_JUMP)
    LEA EAX,[EBX + 0x1f738]             ; 005c5547
    MOV EAX,dword ptr [EAX + 0x330]     ; 005c554d
    MOV dword ptr [ESP + 0x44],EAX      ; 005c5553
    MOV EDX,dword ptr [ESP + 0x44]      ; 005c5557
        ;   Label: LAB_005c5557
    TEST EDX,EDX                        ; 005c555b
    JNZ 0x005c52c1                      ; 005c555d | LAB_005c52c1
        ;   XREF to: 005c52c1 (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x20],0x0      ; 005c5563
    JGE 0x005c52c1                      ; 005c5568 | LAB_005c52c1
        ;   XREF to: 005c52c1 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x1fbd4],EDX   ; 005c556e
    JMP 0x005c52c1                      ; 005c5574 | LAB_005c52c1
        ;   XREF to: 005c52c1 (UNCONDITIONAL_JUMP)
    MOV ESI,dword ptr [0x03f95d78]      ; 005c5579 | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_005c5579
    PUSH ESI                            ; 005c557f
    PUSH ECX                            ; 005c5580
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005c5581 | CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005c5586
    MOV dword ptr [ESP + 0x44],EAX      ; 005c5589
    TEST EAX,EAX                        ; 005c558d
    JNZ 0x005c5557                      ; 005c558f | LAB_005c5557
        ;   XREF to: 005c5557 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x24f8]    ; 005c5591
    PUSH EAX                            ; 005c5597
    MOV EDX,dword ptr [EAX + 0x154]     ; 005c5598
    CALL dword ptr [EDX + 0x6c]         ; 005c559e
    ADD ESP,0x4                         ; 005c55a1
    TEST AL,0x3                         ; 005c55a4
    JZ 0x005c5557                       ; 005c55a6 | LAB_005c5557
        ;   XREF to: 005c5557 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x20],0x8      ; 005c55a8
    JMP 0x005c5557                      ; 005c55b0 | LAB_005c5557
        ;   XREF to: 005c5557 (UNCONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x1fbb4],0x0   ; 005c55b2
        ;   Label: LAB_005c55b2
    JNZ 0x005c52fa                      ; 005c55b9 | LAB_005c52fa
        ;   XREF to: 005c52fa (CONDITIONAL_JUMP)
    CMP EDI,0x2                         ; 005c55bf
    JNZ 0x005c55cb                      ; 005c55c2 | LAB_005c55cb
        ;   XREF to: 005c55cb (CONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 005c55c4
    JMP 0x005c52ff                      ; 005c55c6 | LAB_005c52ff
        ;   XREF to: 005c52ff (UNCONDITIONAL_JUMP)
    CMP EDI,0x3                         ; 005c55cb
        ;   Label: LAB_005c55cb
    JNZ 0x005c5637                      ; 005c55ce | LAB_005c5637
        ;   XREF to: 005c5637 (CONDITIONAL_JUMP)
    MOV ESI,0x6                         ; 005c55d0
    PUSH ESI                            ; 005c55d5
    PUSH EBX                            ; 005c55d6
    CALL core_charactr.cpp_CCharacter_FUN_0042e840 ; 005c55d7 | undefined core_charactr.cpp_CCharacter_FUN_0042e840()
        ;   XREF to: 0042e840 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x50],EAX      ; 005c55dc
    FLD float ptr [ESP + 0x50]          ; 005c55e0
    ADD ESP,0x8                         ; 005c55e4
    FCOMP double ptr [0x00653dd4]       ; 005c55e7 | double DOUBLE_00653dd4
    FNSTSW AX                           ; 005c55ed
    SAHF                                ; 005c55ef
    JBE 0x005c52ff                      ; 005c55f0 | LAB_005c52ff
        ;   XREF to: 005c52ff (CONDITIONAL_JUMP)
    FLD float ptr [EBP + 0x18]          ; 005c55f6
    FMUL double ptr [0x00653dcc]        ; 005c55f9 | double DOUBLE_00653dcc
    FADD float ptr [EBX + 0x1fbe4]      ; 005c55ff
    FST float ptr [EBX + 0x1fbe4]       ; 005c5605
    FCOMP float ptr [0x00663748]        ; 005c560b | undefined4 DAT_00663748
    FNSTSW AX                           ; 005c5611
    SAHF                                ; 005c5613
    JA 0x005c562a                       ; 005c5614 | LAB_005c562a
        ;   XREF to: 005c562a (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0xbe38],0x0    ; 005c5616
        ;   Label: LAB_005c5616
    JNZ 0x005c5529                      ; 005c561d | LAB_005c5529
        ;   XREF to: 005c5529 (CONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 005c5623
        ;   Label: caseD_8
    JMP 0x005c52ff                      ; 005c5625 | LAB_005c52ff
        ;   XREF to: 005c52ff (UNCONDITIONAL_JUMP)
    MOV EAX,[0x00663748]                ; 005c562a | undefined4 DAT_00663748
        ;   Label: LAB_005c562a
    MOV dword ptr [EBX + 0x1fbe4],EAX   ; 005c562f
    JMP 0x005c5616                      ; 005c5635 | LAB_005c5616
        ;   XREF to: 005c5616 (UNCONDITIONAL_JUMP)
    MOV ESI,dword ptr [ESP + 0x40]      ; 005c5637
        ;   Label: LAB_005c5637
    PUSH ESI                            ; 005c563b
    CALL core_inv.cpp_CInventory_getActiveLightGun_FUN_004ffab0 ; 005c563c | CLightGun * core_inv.cpp_CInventory_getActiveLightGun_FUN_004ffab0(CInventory * this_ptr)
        ;   XREF to: 004ffab0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005c5641
    TEST EAX,EAX                        ; 005c5644
    JZ 0x005c5655                       ; 005c5646 | LAB_005c5655
        ;   XREF to: 005c5655 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x1fb98],0x0   ; 005c5648
    JZ 0x005c52fa                       ; 005c564f | LAB_005c52fa
        ;   XREF to: 005c52fa (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x40]      ; 005c5655
        ;   Label: LAB_005c5655
    PUSH EAX                            ; 005c5659
    CALL core_inv.cpp_CInventory_getActiveLightGun_FUN_004ffab0 ; 005c565a | CLightGun * core_inv.cpp_CInventory_getActiveLightGun_FUN_004ffab0(CInventory * this_ptr)
        ;   XREF to: 004ffab0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005c565f
    TEST EAX,EAX                        ; 005c5662
    JZ 0x005c5679                       ; 005c5664 | LAB_005c5679
        ;   XREF to: 005c5679 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x1fb98],0x1   ; 005c5666
    JNZ 0x005c5679                      ; 005c566d | LAB_005c5679
        ;   XREF to: 005c5679 (CONDITIONAL_JUMP)
    MOV ESI,0xa                         ; 005c566f
    JMP 0x005c52ff                      ; 005c5674 | LAB_005c52ff
        ;   XREF to: 005c52ff (UNCONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0x40]      ; 005c5679
        ;   Label: LAB_005c5679
    PUSH ECX                            ; 005c567d
    CALL core_inv.cpp_CInventory_getActiveLightGun_FUN_004ffab0 ; 005c567e | CLightGun * core_inv.cpp_CInventory_getActiveLightGun_FUN_004ffab0(CInventory * this_ptr)
        ;   XREF to: 004ffab0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005c5683
    TEST EAX,EAX                        ; 005c5686
    JNZ 0x005c569d                      ; 005c5688 | LAB_005c569d
        ;   XREF to: 005c569d (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x1fb98],0x2   ; 005c568a
    JNZ 0x005c569d                      ; 005c5691 | LAB_005c569d
        ;   XREF to: 005c569d (CONDITIONAL_JUMP)
    MOV ESI,0xa                         ; 005c5693
    JMP 0x005c52ff                      ; 005c5698 | LAB_005c52ff
        ;   XREF to: 005c52ff (UNCONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESP + 0x40]      ; 005c569d
        ;   Label: LAB_005c569d
    PUSH EDI                            ; 005c56a1
    CALL core_inv.cpp_CInventory_getActiveLightGun_FUN_004ffab0 ; 005c56a2 | CLightGun * core_inv.cpp_CInventory_getActiveLightGun_FUN_004ffab0(CInventory * this_ptr)
        ;   XREF to: 004ffab0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005c56a7
    TEST EAX,EAX                        ; 005c56aa
    JNZ 0x005c56bb                      ; 005c56ac | LAB_005c56bb
        ;   XREF to: 005c56bb (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x1fb98],0x1   ; 005c56ae
    JZ 0x005c52fa                       ; 005c56b5 | LAB_005c52fa
        ;   XREF to: 005c52fa (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x20]      ; 005c56bb
        ;   Label: LAB_005c56bb
    TEST EDX,EDX                        ; 005c56bf
    JL 0x005c56ca                       ; 005c56c1 | LAB_005c56ca
        ;   XREF to: 005c56ca (CONDITIONAL_JUMP)
    MOV ESI,EDX                         ; 005c56c3
    JMP 0x005c52ff                      ; 005c56c5 | LAB_005c52ff
        ;   XREF to: 005c52ff (UNCONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0x44]      ; 005c56ca
        ;   Label: LAB_005c56ca
    MOV EAX,dword ptr [EBX + 0x1fc2c]   ; 005c56ce
    CMP EAX,ECX                         ; 005c56d4
    JNZ 0x005c572e                      ; 005c56d6 | LAB_005c572e
        ;   XREF to: 005c572e (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x1fc2c]   ; 005c56d8
    TEST EAX,EAX                        ; 005c56de
    JZ 0x005c5623                       ; 005c56e0 | caseD_6
        ;   XREF to: 005c5623 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EAX + 0x2e0]     ; 005c56e6
    CMP EAX,0x8                         ; 005c56ec
    JA 0x005c5623                       ; 005c56ef | caseD_6
        ;   XREF to: 005c5623 (CONDITIONAL_JUMP)
    JMP dword ptr [EAX*0x4 + 0x5c5228]  ; 005c56f5 | void * switchdataD_005c5228
        ;   Label: switchD
    MOV ESI,0x2                         ; 005c56fc
        ;   Label: caseD_5
    JMP 0x005c52ff                      ; 005c5701 | LAB_005c52ff
        ;   XREF to: 005c52ff (UNCONDITIONAL_JUMP)
    MOV ESI,0x4                         ; 005c5706
        ;   Label: caseD_1
    JMP 0x005c52ff                      ; 005c570b | LAB_005c52ff
        ;   XREF to: 005c52ff (UNCONDITIONAL_JUMP)
    MOV ESI,0x7                         ; 005c5710
        ;   Label: caseD_4
    JMP 0x005c52ff                      ; 005c5715 | LAB_005c52ff
        ;   XREF to: 005c52ff (UNCONDITIONAL_JUMP)
    MOV ESI,0x5                         ; 005c571a
        ;   Label: caseD_2
    JMP 0x005c52ff                      ; 005c571f | LAB_005c52ff
        ;   XREF to: 005c52ff (UNCONDITIONAL_JUMP)
    MOV ESI,0x8                         ; 005c5724
        ;   Label: caseD_7
    JMP 0x005c52ff                      ; 005c5729 | LAB_005c52ff
        ;   XREF to: 005c52ff (UNCONDITIONAL_JUMP)
    TEST EAX,EAX                        ; 005c572e
        ;   Label: LAB_005c572e
    JNZ 0x005c5791                      ; 005c5730 | LAB_005c5791
        ;   XREF to: 005c5791 (CONDITIONAL_JUMP)
    MOV EAX,ECX                         ; 005c5732
    TEST ECX,ECX                        ; 005c5734
    JNZ 0x005c5771                      ; 005c5736 | LAB_005c5771
        ;   XREF to: 005c5771 (CONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 005c5738
    JMP 0x005c52ff                      ; 005c573a | LAB_005c52ff
        ;   XREF to: 005c52ff (UNCONDITIONAL_JUMP)
    MOV ESI,0x1                         ; 005c573f
        ;   Label: LAB_005c573f
    JMP 0x005c52ff                      ; 005c5744 | LAB_005c52ff
        ;   XREF to: 005c52ff (UNCONDITIONAL_JUMP)
    MOV ESI,dword ptr [0x02f0d928]      ; 005c5749 | g_CMeleeClassInfo.name_hash
        ;   Label: LAB_005c5749
    PUSH ESI                            ; 005c574f
    PUSH EAX                            ; 005c5750
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005c5751 | CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005c5756
    TEST EAX,EAX                        ; 005c5759
    JZ 0x005c576a                       ; 005c575b | LAB_005c576a
        ;   XREF to: 005c576a (CONDITIONAL_JUMP)
    CMP dword ptr [EAX + 0x588],0x0     ; 005c575d
    JNZ 0x005c52fa                      ; 005c5764 | LAB_005c52fa
        ;   XREF to: 005c52fa (CONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 005c576a
        ;   Label: LAB_005c576a
    JMP 0x005c52ff                      ; 005c576c | LAB_005c52ff
        ;   XREF to: 005c52ff (UNCONDITIONAL_JUMP)
    MOV ESI,dword ptr [ECX + 0x2e0]     ; 005c5771
        ;   Label: LAB_005c5771
    CMP ESI,0x7                         ; 005c5777
    JNC 0x005c5785                      ; 005c577a | LAB_005c5785
        ;   XREF to: 005c5785 (CONDITIONAL_JUMP)
    TEST ESI,ESI                        ; 005c577c
    JZ 0x005c573f                       ; 005c577e | LAB_005c573f
        ;   XREF to: 005c573f (CONDITIONAL_JUMP)
    JMP 0x005c52fa                      ; 005c5780 | LAB_005c52fa
        ;   XREF to: 005c52fa (UNCONDITIONAL_JUMP)
    JBE 0x005c5749                      ; 005c5785 | LAB_005c5749
        ;   Label: LAB_005c5785
        ;   XREF to: 005c5749 (CONDITIONAL_JUMP)
    CMP ESI,0x8                         ; 005c5787
    JZ 0x005c5749                       ; 005c578a | LAB_005c5749
        ;   XREF to: 005c5749 (CONDITIONAL_JUMP)
    JMP 0x005c52fa                      ; 005c578c | LAB_005c52fa
        ;   XREF to: 005c52fa (UNCONDITIONAL_JUMP)
    JNZ 0x005c57c2                      ; 005c5791 | LAB_005c57c2
        ;   Label: LAB_005c5791
        ;   XREF to: 005c57c2 (CONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 005c5793
    JMP 0x005c52ff                      ; 005c5795 | LAB_005c52ff
        ;   XREF to: 005c52ff (UNCONDITIONAL_JUMP)
    MOV EDI,dword ptr [0x02f0d928]      ; 005c579a | g_CMeleeClassInfo.name_hash
        ;   Label: LAB_005c579a
    PUSH EDI                            ; 005c57a0
    PUSH EAX                            ; 005c57a1
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005c57a2 | CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005c57a7
    TEST EAX,EAX                        ; 005c57aa
    JZ 0x005c57bb                       ; 005c57ac | LAB_005c57bb
        ;   XREF to: 005c57bb (CONDITIONAL_JUMP)
    CMP dword ptr [EAX + 0x588],0x0     ; 005c57ae
    JNZ 0x005c52fa                      ; 005c57b5 | LAB_005c52fa
        ;   XREF to: 005c52fa (CONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 005c57bb
        ;   Label: LAB_005c57bb
    JMP 0x005c52ff                      ; 005c57bd | LAB_005c52ff
        ;   XREF to: 005c52ff (UNCONDITIONAL_JUMP)
    MOV ESI,dword ptr [EAX + 0x2e0]     ; 005c57c2
        ;   Label: LAB_005c57c2
    CMP ESI,0x7                         ; 005c57c8
    JNC 0x005c57da                      ; 005c57cb | LAB_005c57da
        ;   XREF to: 005c57da (CONDITIONAL_JUMP)
    TEST ESI,ESI                        ; 005c57cd
    JZ 0x005c573f                       ; 005c57cf | LAB_005c573f
        ;   XREF to: 005c573f (CONDITIONAL_JUMP)
    JMP 0x005c52fa                      ; 005c57d5 | LAB_005c52fa
        ;   XREF to: 005c52fa (UNCONDITIONAL_JUMP)
    JBE 0x005c579a                      ; 005c57da | LAB_005c579a
        ;   Label: LAB_005c57da
        ;   XREF to: 005c579a (CONDITIONAL_JUMP)
    CMP ESI,0x8                         ; 005c57dc
    JZ 0x005c579a                       ; 005c57df | LAB_005c579a
        ;   XREF to: 005c579a (CONDITIONAL_JUMP)
    JMP 0x005c52fa                      ; 005c57e1 | LAB_005c52fa
        ;   XREF to: 005c52fa (UNCONDITIONAL_JUMP)
    MOV EAX,0xb                         ; 005c57e6
        ;   Label: LAB_005c57e6
    MOV EDX,EAX                         ; 005c57eb
    MOV ECX,dword ptr [ESP + 0x24]      ; 005c57ed
    SAR EDX,0x1f                        ; 005c57f1
    IDIV dword ptr [ECX + 0x64]         ; 005c57f4
    MOV dword ptr [ESP + 0x48],EAX      ; 005c57f7
    FILD dword ptr [ESP + 0x48]         ; 005c57fb
    FCOMP float ptr [EBX + 0x2a90]      ; 005c57ff
    FNSTSW AX                           ; 005c5805
    SAHF                                ; 005c5807
    JA 0x005c5391                       ; 005c5808 | caseD_4
        ;   XREF to: 005c5391 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0x38]      ; 005c580e
    PUSH ECX                            ; 005c5812
    CALL core_dynamite.cpp_FUN_0049cf20 ; 005c5813 | undefined core_dynamite.cpp_FUN_0049cf20()
        ;   XREF to: 0049cf20 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005c5818
    JMP 0x005c5391                      ; 005c581b | caseD_4
        ;   XREF to: 005c5391 (UNCONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x1fc38],0x3   ; 005c5820
        ;   Label: caseD_1
    JNZ 0x005c590d                      ; 005c5827 | LAB_005c590d
        ;   XREF to: 005c590d (CONDITIONAL_JUMP)
    MOV EAX,0xb                         ; 005c582d
    MOV EDX,EAX                         ; 005c5832
    MOV ECX,dword ptr [ESP + 0x24]      ; 005c5834
    SAR EDX,0x1f                        ; 005c5838
    IDIV dword ptr [ECX + 0x64]         ; 005c583b
    MOV dword ptr [ESP + 0x48],EAX      ; 005c583e
    FILD dword ptr [ESP + 0x48]         ; 005c5842
    FCOMP float ptr [EBX + 0x2a90]      ; 005c5846
    FNSTSW AX                           ; 005c584c
    SAHF                                ; 005c584e
    JA 0x005c590d                       ; 005c584f | LAB_005c590d
        ;   XREF to: 005c590d (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0xc]                 ; 005c5855
    PUSH EAX                            ; 005c5859
    PUSH EBX                            ; 005c585a
    CALL core_stranger.cpp_CStranger_FUN_005c51c0 ; 005c585b | undefined core_stranger.cpp_CStranger_FUN_005c51c0()
        ;   XREF to: 005c51c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005c5860
    MOV ECX,dword ptr [0x02ceed20]      ; 005c5863 | g_CDynamiteClassInfo.name_hash
    PUSH ECX                            ; 005c5869
    MOV EAX,dword ptr [EBX + 0x1fc2c]   ; 005c586a
    PUSH EAX                            ; 005c5870
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005c5871 | CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x3c],EAX      ; 005c5876
    ADD ESP,0x8                         ; 005c587a
    MOV dword ptr [ESP + 0x28],EAX      ; 005c587d
    TEST EAX,EAX                        ; 005c5881
    JZ 0x005c58d8                       ; 005c5883 | LAB_005c58d8
        ;   XREF to: 005c58d8 (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0xc]                 ; 005c5885
    PUSH EAX                            ; 005c5889
    LEA EAX,[ESP + 0x4]                 ; 005c588a
    PUSH EAX                            ; 005c588e
    PUSH EBX                            ; 005c588f
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 005c5890 | CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005c5895
    MOV EDX,dword ptr [ESP + 0x34]      ; 005c5898
    ADD EDX,0x57c                       ; 005c589c
    CMP EDX,EAX                         ; 005c58a2
    JZ 0x005c58b6                       ; 005c58a4 | LAB_005c58b6
        ;   XREF to: 005c58b6 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EAX]             ; 005c58a6
    MOV dword ptr [EDX],ECX             ; 005c58a8
    MOV ECX,dword ptr [EAX + 0x4]       ; 005c58aa
    MOV dword ptr [EDX + 0x4],ECX       ; 005c58ad
    MOV ECX,dword ptr [EAX + 0x8]       ; 005c58b0
    MOV dword ptr [EDX + 0x8],ECX       ; 005c58b3
    MOV ECX,dword ptr [ESP + 0x28]      ; 005c58b6
        ;   Label: LAB_005c58b6
    MOV EAX,dword ptr [ESP + 0x28]      ; 005c58ba
    PUSH ECX                            ; 005c58be
    MOV EAX,dword ptr [EAX + 0x154]     ; 005c58bf
    CALL dword ptr [EAX + 0xf8]         ; 005c58c5
    ADD ESP,0x4                         ; 005c58cb
    MOV dword ptr [EBX + 0x1fc2c],0x0   ; 005c58ce
    CMP dword ptr [EBX + 0x24f8],0x0    ; 005c58d8
        ;   Label: LAB_005c58d8
    JZ 0x005c58f8                       ; 005c58df | LAB_005c58f8
        ;   XREF to: 005c58f8 (CONDITIONAL_JUMP)
    LEA EDX,[ESP + 0xc]                 ; 005c58e1
    PUSH EDX                            ; 005c58e5
    PUSH 0x1                            ; 005c58e6
    MOV EAX,dword ptr [EBX + 0x154]     ; 005c58e8
    PUSH EBX                            ; 005c58ee
    CALL dword ptr [EAX + 0x13c]        ; 005c58ef
    ADD ESP,0xc                         ; 005c58f5
    MOV dword ptr [EBX + 0x1fc38],0x0   ; 005c58f8
        ;   Label: LAB_005c58f8
    MOV EAX,[0x00663744]                ; 005c5902 | undefined4 DAT_00663744
    MOV dword ptr [EBX + 0x1fbe4],EAX   ; 005c5907
    FLD float ptr [EBX + 0x2a90]        ; 005c590d
        ;   Label: LAB_005c590d
    FLD1                                ; 005c5913
    FCOMPP                              ; 005c5915
    FNSTSW AX                           ; 005c5917
    SAHF                                ; 005c5919
    JA 0x005c5391                       ; 005c591a | caseD_4
        ;   XREF to: 005c5391 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x2a8c],0x0    ; 005c5920
    MOV dword ptr [EBX + 0x2a90],0x0    ; 005c592a
    JMP 0x005c5391                      ; 005c5934 | caseD_4
        ;   XREF to: 005c5391 (UNCONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x3c],0x3f19999a ; 005c5939
        ;   Label: caseD_2
    JGE 0x005c5391                      ; 005c5941 | caseD_4
        ;   XREF to: 005c5391 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x2a90],0x3f19999a ; 005c5947
    JL 0x005c5391                       ; 005c5951 | caseD_4
        ;   XREF to: 005c5391 (CONDITIONAL_JUMP)
    PUSH 0x653d94                       ; 005c5957 | = "CShotgun" | s_CShotgun_00653d94 = CShotgun
    MOV EAX,dword ptr [EBX + 0x1fc2c]   ; 005c595c
    PUSH EAX                            ; 005c5962
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 005c5963 | int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005c5968
    TEST EAX,EAX                        ; 005c596b
    JZ 0x005c5391                       ; 005c596d | caseD_4
        ;   XREF to: 005c5391 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x1fc2c]   ; 005c5973
    PUSH EAX                            ; 005c5979
    MOV EDX,dword ptr [EAX + 0x154]     ; 005c597a
    CALL dword ptr [EDX + 0xec]         ; 005c5980
    ADD ESP,0x4                         ; 005c5986
    JMP 0x005c5391                      ; 005c5989 | caseD_4
        ;   XREF to: 005c5391 (UNCONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x3c],0x3ebd70a4 ; 005c598e
        ;   Label: caseD_6
    JGE 0x005c5391                      ; 005c5996 | caseD_4
        ;   XREF to: 005c5391 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x2a90],0x3ebd70a4 ; 005c599c
    JL 0x005c5391                       ; 005c59a6 | caseD_4
        ;   XREF to: 005c5391 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x1fc2c]   ; 005c59ac
    TEST EAX,EAX                        ; 005c59b2
    JZ 0x005c5391                       ; 005c59b4 | caseD_4
        ;   XREF to: 005c5391 (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 005c59ba
    MOV EDX,dword ptr [EAX + 0x154]     ; 005c59bc
    PUSH EAX                            ; 005c59c2
    CALL dword ptr [EDX + 0x70]         ; 005c59c3
    ADD ESP,0x8                         ; 005c59c6
    JMP 0x005c5391                      ; 005c59c9 | caseD_4
        ;   XREF to: 005c5391 (UNCONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x3c],0x3f28f5c3 ; 005c59ce
        ;   Label: caseD_7
    JGE 0x005c5391                      ; 005c59d6 | caseD_4
        ;   XREF to: 005c5391 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x2a90],0x3f28f5c3 ; 005c59dc
    JL 0x005c5391                       ; 005c59e6 | caseD_4
        ;   XREF to: 005c5391 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x1fc2c]   ; 005c59ec
    TEST EAX,EAX                        ; 005c59f2
    JZ 0x005c5391                       ; 005c59f4 | caseD_4
        ;   XREF to: 005c5391 (CONDITIONAL_JUMP)
    PUSH 0x2                            ; 005c59fa
    MOV EDX,dword ptr [EAX + 0x154]     ; 005c59fc
    PUSH EAX                            ; 005c5a02
    CALL dword ptr [EDX + 0x70]         ; 005c5a03
    ADD ESP,0x8                         ; 005c5a06
    JMP 0x005c5391                      ; 005c5a09 | caseD_4
        ;   XREF to: 005c5391 (UNCONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 005c5a0e
        ;   Label: LAB_005c5a0e
    JMP 0x005c53b7                      ; 005c5a13 | LAB_005c53b7
        ;   XREF to: 005c53b7 (UNCONDITIONAL_JUMP)
    MOV EAX,[0x02f0d928]                ; 005c5a18 | g_CMeleeClassInfo.name_hash
        ;   Label: LAB_005c5a18
    PUSH EAX                            ; 005c5a1d
    PUSH EDX                            ; 005c5a1e
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005c5a1f | CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005c5a24
    TEST EAX,EAX                        ; 005c5a27
    JZ 0x005c5a3e                       ; 005c5a29 | LAB_005c5a3e
        ;   XREF to: 005c5a3e (CONDITIONAL_JUMP)
    CMP dword ptr [EAX + 0x588],0x0     ; 005c5a2b
    JZ 0x005c5a3e                       ; 005c5a32 | LAB_005c5a3e
        ;   XREF to: 005c5a3e (CONDITIONAL_JUMP)
    MOV EAX,0x3                         ; 005c5a34
    JMP 0x005c53b7                      ; 005c5a39 | LAB_005c53b7
        ;   XREF to: 005c53b7 (UNCONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 005c5a3e
        ;   Label: LAB_005c5a3e
    JMP 0x005c53b7                      ; 005c5a40 | LAB_005c53b7
        ;   XREF to: 005c53b7 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EAX + 0x2e0]     ; 005c5a45
        ;   Label: LAB_005c5a45
    CMP EAX,0x7                         ; 005c5a4b
    JNC 0x005c5a5e                      ; 005c5a4e | LAB_005c5a5e
        ;   XREF to: 005c5a5e (CONDITIONAL_JUMP)
    TEST EAX,EAX                        ; 005c5a50
    JZ 0x005c5a0e                       ; 005c5a52 | LAB_005c5a0e
        ;   XREF to: 005c5a0e (CONDITIONAL_JUMP)
    MOV EAX,0x3                         ; 005c5a54
    JMP 0x005c53b7                      ; 005c5a59 | LAB_005c53b7
        ;   XREF to: 005c53b7 (UNCONDITIONAL_JUMP)
    JBE 0x005c5a18                      ; 005c5a5e | LAB_005c5a18
        ;   Label: LAB_005c5a5e
        ;   XREF to: 005c5a18 (CONDITIONAL_JUMP)
    CMP EAX,0x8                         ; 005c5a60
    JZ 0x005c5a18                       ; 005c5a63 | LAB_005c5a18
        ;   XREF to: 005c5a18 (CONDITIONAL_JUMP)
    MOV EAX,0x3                         ; 005c5a65
    JMP 0x005c53b7                      ; 005c5a6a | LAB_005c53b7
        ;   XREF to: 005c53b7 (UNCONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 005c5a6f
        ;   Label: LAB_005c5a6f
    JMP 0x005c53f4                      ; 005c5a74 | LAB_005c53f4
        ;   XREF to: 005c53f4 (UNCONDITIONAL_JUMP)
    MOV ECX,dword ptr [0x02f0d928]      ; 005c5a79 | g_CMeleeClassInfo.name_hash
        ;   Label: LAB_005c5a79
    PUSH ECX                            ; 005c5a7f
    PUSH EDX                            ; 005c5a80
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005c5a81 | CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005c5a86
    TEST EAX,EAX                        ; 005c5a89
    JZ 0x005c53f2                       ; 005c5a8b | LAB_005c53f2
        ;   XREF to: 005c53f2 (CONDITIONAL_JUMP)
    CMP dword ptr [EAX + 0x588],0x0     ; 005c5a91
    JZ 0x005c53f2                       ; 005c5a98 | LAB_005c53f2
        ;   XREF to: 005c53f2 (CONDITIONAL_JUMP)
    MOV EAX,0x3                         ; 005c5a9e
    JMP 0x005c53f4                      ; 005c5aa3 | LAB_005c53f4
        ;   XREF to: 005c53f4 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EDX + 0x2e0]     ; 005c5aa8
        ;   Label: LAB_005c5aa8
    CMP EAX,0x7                         ; 005c5aae
    JNC 0x005c5ac1                      ; 005c5ab1 | LAB_005c5ac1
        ;   XREF to: 005c5ac1 (CONDITIONAL_JUMP)
    TEST EAX,EAX                        ; 005c5ab3
    JZ 0x005c5a6f                       ; 005c5ab5 | LAB_005c5a6f
        ;   XREF to: 005c5a6f (CONDITIONAL_JUMP)
    MOV EAX,0x3                         ; 005c5ab7
    JMP 0x005c53f4                      ; 005c5abc | LAB_005c53f4
        ;   XREF to: 005c53f4 (UNCONDITIONAL_JUMP)
    JBE 0x005c5a79                      ; 005c5ac1 | LAB_005c5a79
        ;   Label: LAB_005c5ac1
        ;   XREF to: 005c5a79 (CONDITIONAL_JUMP)
    CMP EAX,0x8                         ; 005c5ac3
    JZ 0x005c5a79                       ; 005c5ac6 | LAB_005c5a79
        ;   XREF to: 005c5a79 (CONDITIONAL_JUMP)
    MOV EAX,0x3                         ; 005c5ac8
    JMP 0x005c53f4                      ; 005c5acd | LAB_005c53f4
        ;   XREF to: 005c53f4 (UNCONDITIONAL_JUMP)
    PUSH 0x1                            ; 005c5ad2
        ;   Label: LAB_005c5ad2
    PUSH 0x16                           ; 005c5ad4
    MOV ECX,dword ptr [ESP + 0x38]      ; 005c5ad6
    PUSH ECX                            ; 005c5ada
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005c5adb | void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EBX + 0x1fc38]   ; 005c5ae0
    ADD ESP,0xc                         ; 005c5ae6
    TEST EAX,EAX                        ; 005c5ae9
    JZ 0x005c5b07                       ; 005c5aeb | LAB_005c5b07
        ;   XREF to: 005c5b07 (CONDITIONAL_JUMP)
    PUSH 0x13b4                         ; 005c5aed
    PUSH EAX                            ; 005c5af2
    PUSH 0x653da3                       ; 005c5af3 | = "actionPending = %d\nstranger.cpp line %d" | s_actionPending_d_stranger_00653da3 = actionPending = %d
        ; stranger.cpp line %d
    MOV ECX,dword ptr [0x00678a60]      ; 005c5af8 | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH ECX                            ; 005c5afe | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0 ; 005c5aff | void shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e6f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005c5b04
    MOV dword ptr [EBX + 0x1fc38],0x2   ; 005c5b07
        ;   Label: LAB_005c5b07
    JMP 0x005c54c0                      ; 005c5b11 | LAB_005c54c0
        ;   XREF to: 005c54c0 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x1fb98],0x2   ; 005c5b16
        ;   Label: LAB_005c5b16
    JMP 0x005c54f2                      ; 005c5b20 | LAB_005c54f2
        ;   XREF to: 005c54f2 (UNCONDITIONAL_JUMP)
    CMP EDI,0x3                         ; 005c5b25
        ;   Label: LAB_005c5b25
    JNZ 0x005c54f2                      ; 005c5b28 | LAB_005c54f2
        ;   XREF to: 005c54f2 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x1fb98],0x2   ; 005c5b2e
    JGE 0x005c54f2                      ; 005c5b35 | LAB_005c54f2
        ;   XREF to: 005c54f2 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0x40]      ; 005c5b3b
    PUSH ECX                            ; 005c5b3f
    CALL core_inv.cpp_CInventory_getActiveLightGun_FUN_004ffab0 ; 005c5b40 | CLightGun * core_inv.cpp_CInventory_getActiveLightGun_FUN_004ffab0(CInventory * this_ptr)
        ;   XREF to: 004ffab0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005c5b45
    TEST EAX,EAX                        ; 005c5b48
    JNZ 0x005c54e8                      ; 005c5b4a | LAB_005c54e8
        ;   XREF to: 005c54e8 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x1fb98],EAX   ; 005c5b50
    JMP 0x005c54f2                      ; 005c5b56 | LAB_005c54f2
        ;   XREF to: 005c54f2 (UNCONDITIONAL_JUMP)
    CMP EDI,0x8                         ; 005c5b5b
        ;   Label: LAB_005c5b5b
    JZ 0x005c5503                       ; 005c5b5e | LAB_005c5503
        ;   XREF to: 005c5503 (CONDITIONAL_JUMP)
    JMP 0x005c550d                      ; 005c5b64 | LAB_005c550d
        ;   XREF to: 005c550d (UNCONDITIONAL_JUMP)

