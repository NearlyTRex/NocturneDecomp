; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_CStranger_FUN_0053f310(CStranger *this_ptr,float delta_time)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined        Stack[-0x60]:1  local_60
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
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_stranger.cpp_CStranger_FUN_00535900 at 00536247
;
; Referenced Globals:
;   void* switchdataD_0053f2c8 = 0053f7ba
;   void* switchdataD_0053f2ec = 0053f487
;   TerminatedCString s_CShotgun_00595dcf
;   TerminatedCString s_CTrap_00595dd8
;   TerminatedCString s_actionPending_d_stranger_00595dde
;   double DOUBLE_00595e07 = 25
;   double DOUBLE_00595e0f = 0.990000000000000
;   float FLOAT_005a2704 = 10
;   float FLOAT_005a2708 = 70
;   CEditorTools* g_CEditorTools_PTR_005b6d50 = 01bcd074
;   void* PTR_DAT_005b9284 = 01c70f74
;   CDemonMission* g_CDemonMission_PTR_005baf90 = 01cc9450
;   undefined4 g_CDynamiteActorType_01bca088.name_hash
;   undefined4 g_CMeleeActorType_01cc56a4.name_hash
;   undefined4 g_CWeaponActorType_02ddf970.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_CDemonActor_transformVector_FUN_0040a200
;   core_actor.cpp_isOfClass_FUN_0040d7e0
;   core_charactr.cpp_CCharacter_advanceLayerAction_FUN_0042a500
;   core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_0042aa50
;   core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0
;   core_charactr.cpp_CCharacter_pickupObjectNow_FUN_00428f40
;   core_dynamite.cpp_CDynamite_lightFuse_FUN_0046ed30
;   core_dynamite.cpp_FUN_0046ed80
;   core_hero.cpp_CHero_addCarriedItemToInventory_FUN_004b5c70
;   core_inv.cpp_CInventory_getActiveLightGun_FUN_004c1830
;   core_inv.cpp_CInventory_removeItem_FUN_004c07b0
;   core_mission.cpp_CDemonMission_addActorToList_FUN_004d8c60
;   core_motion.cpp_CMotionController_getMotionList_FUN_004e1890
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053f310
        ;   Label: core_stranger.cpp_CStranger_FUN_0053f310
    PUSH ESI                            ; 0053f311
    PUSH EDI                            ; 0053f312
    PUSH EBP                            ; 0053f313
    MOV EBP,ESP                         ; 0053f314
    SUB ESP,0x50                        ; 0053f316
    AND ESP,0xfffffff8                  ; 0053f319
    MOV EBX,dword ptr [EBP + 0x14]      ; 0053f31c
    CMP dword ptr [EBX + 0x2a84],0xe    ; 0053f31f
    JNZ 0x0053f33e                      ; 0053f326
        ;   XREF to: 0053f33e (CONDITIONAL_JUMP)  ; LAB_0053f33e
    MOV ECX,dword ptr [EBX + 0x24f0]    ; 0053f328
    TEST ECX,ECX                        ; 0053f32e
    JNZ 0x0053f33e                      ; 0053f330
        ;   XREF to: 0053f33e (CONDITIONAL_JUMP)  ; LAB_0053f33e
    MOV dword ptr [EBX + 0x2a88],ECX    ; 0053f332
    MOV dword ptr [EBX + 0x2a84],ECX    ; 0053f338
    MOV EDI,0xffffffff                  ; 0053f33e
        ;   Label: LAB_0053f33e
    MOV EAX,dword ptr [EBX + 0x1fa18]   ; 0053f343
    XOR ESI,ESI                         ; 0053f349
    MOV dword ptr [ESP + 0x24],EDI      ; 0053f34b
    MOV dword ptr [ESP + 0x48],ESI      ; 0053f34f
    TEST EAX,EAX                        ; 0053f353
    JZ 0x0053f39d                       ; 0053f355
        ;   XREF to: 0053f39d (CONDITIONAL_JUMP)  ; LAB_0053f39d
    MOV dword ptr [EBX + 0x1fa3c],ESI   ; 0053f357
    XOR ESI,ESI                         ; 0053f35d
        ;   Label: LAB_0053f35d
    LEA EAX,[EBX + 0x1f5a0]             ; 0053f35f
    MOV dword ptr [ESP + 0x20],ESI      ; 0053f365
    MOV dword ptr [ESP + 0x44],EAX      ; 0053f369
    LEA EAX,[EBX + 0x150]               ; 0053f36d
    MOV dword ptr [ESP + 0x30],ESI      ; 0053f373
    MOV dword ptr [ESP + 0x34],EAX      ; 0053f377
    FLD float ptr [EBP + 0x18]          ; 0053f37b
        ;   Label: LAB_0053f37b
    FLDZ                                ; 0053f37e
    FCOMPP                              ; 0053f380
    FNSTSW AX                           ; 0053f382
    SAHF                                ; 0053f384
    JC 0x0053f410                       ; 0053f385
        ;   XREF to: 0053f410 (CONDITIONAL_JUMP)  ; LAB_0053f410
    CMP dword ptr [ESP + 0x20],0x0      ; 0053f38b
        ;   Label: LAB_0053f38b
    JNZ 0x0053fc23                      ; 0053f390
        ;   XREF to: 0053fc23 (CONDITIONAL_JUMP)  ; LAB_0053fc23
    MOV ESP,EBP                         ; 0053f396
    POP EBP                             ; 0053f398
    POP EDI                             ; 0053f399
    POP ESI                             ; 0053f39a
    POP EBX                             ; 0053f39b
    RET                                 ; 0053f39c
    CMP dword ptr [EBX + 0x1fa3c],0x0   ; 0053f39d
        ;   Label: LAB_0053f39d
    JZ 0x0053f35d                       ; 0053f3a4
        ;   XREF to: 0053f35d (CONDITIONAL_JUMP)  ; LAB_0053f35d
    MOV ECX,dword ptr [EBX + 0x24f0]    ; 0053f3a6
    TEST ECX,ECX                        ; 0053f3ac
    JNZ 0x0053f3d7                      ; 0053f3ae
        ;   XREF to: 0053f3d7 (CONDITIONAL_JUMP)  ; LAB_0053f3d7
    LEA EAX,[EBX + 0x1f5a0]             ; 0053f3b0
    MOV EAX,dword ptr [EAX + 0x330]     ; 0053f3b6
    MOV dword ptr [ESP + 0x48],EAX      ; 0053f3bc
    MOV EDX,dword ptr [ESP + 0x48]      ; 0053f3c0
        ;   Label: LAB_0053f3c0
    TEST EDX,EDX                        ; 0053f3c4
    JNZ 0x0053f35d                      ; 0053f3c6
        ;   XREF to: 0053f35d (CONDITIONAL_JUMP)  ; LAB_0053f35d
    CMP dword ptr [ESP + 0x24],0x0      ; 0053f3c8
    JGE 0x0053f35d                      ; 0053f3cd
        ;   XREF to: 0053f35d (CONDITIONAL_JUMP)  ; LAB_0053f35d
    MOV dword ptr [EBX + 0x1fa3c],EDX   ; 0053f3cf
    JMP 0x0053f35d                      ; 0053f3d5
        ;   XREF to: 0053f35d (UNCONDITIONAL_JUMP)  ; LAB_0053f35d
    MOV ESI,dword ptr [0x02ddf9a8]      ; 0053f3d7 | g_CWeaponActorType_02ddf970.name_hash
        ;   Label: LAB_0053f3d7
    PUSH ESI                            ; 0053f3dd
    PUSH ECX                            ; 0053f3de
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0053f3df
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0053f3e4
    MOV dword ptr [ESP + 0x48],EAX      ; 0053f3e7
    TEST EAX,EAX                        ; 0053f3eb
    JNZ 0x0053f3c0                      ; 0053f3ed
        ;   XREF to: 0053f3c0 (CONDITIONAL_JUMP)  ; LAB_0053f3c0
    MOV EAX,dword ptr [EBX + 0x24f0]    ; 0053f3ef
    PUSH EAX                            ; 0053f3f5
    MOV EDX,dword ptr [EAX + 0x14c]     ; 0053f3f6
    CALL dword ptr [EDX + 0x6c]         ; 0053f3fc
    ADD ESP,0x4                         ; 0053f3ff
    TEST AL,0x3                         ; 0053f402
    JZ 0x0053f3c0                       ; 0053f404
        ;   XREF to: 0053f3c0 (CONDITIONAL_JUMP)  ; LAB_0053f3c0
    MOV dword ptr [ESP + 0x24],0x8      ; 0053f406
    JMP 0x0053f3c0                      ; 0053f40e
        ;   XREF to: 0053f3c0 (UNCONDITIONAL_JUMP)  ; LAB_0053f3c0
    MOV EAX,dword ptr [EBX + 0x1faa0]   ; 0053f410
        ;   Label: LAB_0053f410
    CMP EAX,0x1                         ; 0053f416
    JNZ 0x0053f670                      ; 0053f419
        ;   XREF to: 0053f670 (CONDITIONAL_JUMP)  ; LAB_0053f670
    MOV ESI,0x3                         ; 0053f41f
        ;   Label: LAB_0053f41f
    MOV EAX,dword ptr [EBX + 0x2a88]    ; 0053f424
        ;   Label: LAB_0053f424
    PUSH ESI                            ; 0053f42a
    MOV dword ptr [ESP + 0x3c],EAX      ; 0053f42b
    LEA EAX,[EBP + 0x18]                ; 0053f42f
    PUSH EAX                            ; 0053f432
    PUSH EBX                            ; 0053f433
    CALL core_charactr.cpp_CCharacter_advanceLayerAction_FUN_0042a500 ; 0053f434
        ;   XREF to: 0042a500 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_advanceLayerAction_FUN_0042a500(CCharacter * this_ptr, float * remaining_time, int target_bone_index)
    MOV EDX,dword ptr [EBX + 0x2a84]    ; 0053f439
    MOV EDI,EAX                         ; 0053f43f
    IMUL EAX,EDX,0x38                   ; 0053f441
    IMUL EAX,dword ptr [EBX + EAX*0x1 + 0x2650],0x54c ; 0053f444
    ADD ESP,0xc                         ; 0053f44f
    MOV dword ptr [ESP + 0x4c],EAX      ; 0053f452
    MOV EAX,dword ptr [ESP + 0x34]      ; 0053f456
    PUSH EAX                            ; 0053f45a
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_004e1890 ; 0053f45b
        ;   XREF to: 004e1890 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_004e1890(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0053f460
    ADD EAX,0x968                       ; 0053f463
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0053f468
    ADD EDX,EAX                         ; 0053f46c
    MOV EAX,dword ptr [EBX + 0x2a84]    ; 0053f46e
    SUB EAX,0x6                         ; 0053f474
    MOV dword ptr [ESP + 0x28],EDX      ; 0053f477
    CMP EAX,0x7                         ; 0053f47b
    JA 0x0053f4b6                       ; 0053f47e
        ;   XREF to: 0053f4b6 (CONDITIONAL_JUMP)  ; caseD_b
    JMP dword ptr [EAX*0x4 + 0x53f2ec]  ; 0053f480 | caseD_6 | caseD_7 | caseD_8
        ;   Label: switchD
    MOV EDX,dword ptr [0x01bca0c0]      ; 0053f487 | g_CDynamiteActorType_01bca088.name_hash
        ;   Label: caseD_6
    PUSH EDX                            ; 0053f48d
    MOV ECX,dword ptr [EBX + 0x1fa94]   ; 0053f48e
    PUSH ECX                            ; 0053f494
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0053f495
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [ESP + 0x48],EAX      ; 0053f49a
    ADD ESP,0x8                         ; 0053f49e
    TEST EAX,EAX                        ; 0053f4a1
    JZ 0x0053f4b6                       ; 0053f4a3
        ;   XREF to: 0053f4b6 (CONDITIONAL_JUMP)  ; caseD_b
    PUSH EAX                            ; 0053f4a5
    CALL core_dynamite.cpp_FUN_0046ed80 ; 0053f4a6
        ;   XREF to: 0046ed80 (UNCONDITIONAL_CALL)  ; int core_dynamite.cpp_FUN_0046ed80(CDynamite * this_ptr)
    ADD ESP,0x4                         ; 0053f4ab
    TEST EAX,EAX                        ; 0053f4ae
    JZ 0x0053f8a2                       ; 0053f4b0
        ;   XREF to: 0053f8a2 (CONDITIONAL_JUMP)  ; LAB_0053f8a2
    TEST EDI,EDI                        ; 0053f4b6
        ;   Label: caseD_9
    JL 0x0053f64c                       ; 0053f4b8
        ;   XREF to: 0053f64c (CONDITIONAL_JUMP)  ; LAB_0053f64c
    MOV EDX,dword ptr [ESP + 0x48]      ; 0053f4be
    MOV EAX,dword ptr [EBX + 0x1fa94]   ; 0053f4c2
    CMP EAX,EDX                         ; 0053f4c8
    JZ 0x0053f54e                       ; 0053f4ca
        ;   XREF to: 0053f54e (CONDITIONAL_JUMP)  ; LAB_0053f54e
    TEST EAX,EAX                        ; 0053f4d0
    JZ 0x0053f50b                       ; 0053f4d2
        ;   XREF to: 0053f50b (CONDITIONAL_JUMP)  ; LAB_0053f50b
    MOV EDX,EAX                         ; 0053f4d4
    JNZ 0x0053fb01                      ; 0053f4d6
        ;   XREF to: 0053fb01 (CONDITIONAL_JUMP)  ; LAB_0053fb01
    CMP EDI,EAX                         ; 0053f4dc
        ;   Label: LAB_0053f4dc
    JNZ 0x0053f50b                      ; 0053f4de
        ;   XREF to: 0053f50b (CONDITIONAL_JUMP)  ; LAB_0053f50b
    PUSH 0x1                            ; 0053f4e0
    MOV EAX,dword ptr [EBX + 0x1fa94]   ; 0053f4e2
    PUSH EAX                            ; 0053f4e8
    MOV EDX,dword ptr [EAX + 0x14c]     ; 0053f4e9
    CALL dword ptr [EDX + 0xd4]         ; 0053f4ef
    MOV ECX,0x1                         ; 0053f4f5
    ADD ESP,0x8                         ; 0053f4fa
    MOV dword ptr [EBX + 0x1fa94],0x0   ; 0053f4fd
    MOV dword ptr [ESP + 0x20],ECX      ; 0053f507
    CMP dword ptr [EBX + 0x1fa3c],0x0   ; 0053f50b
        ;   Label: LAB_0053f50b
    JZ 0x0053f54e                       ; 0053f512
        ;   XREF to: 0053f54e (CONDITIONAL_JUMP)  ; LAB_0053f54e
    MOV EDX,dword ptr [ESP + 0x48]      ; 0053f514
    TEST EDX,EDX                        ; 0053f518
    JNZ 0x0053fb63                      ; 0053f51a
        ;   XREF to: 0053fb63 (CONDITIONAL_JUMP)  ; LAB_0053fb63
    XOR EAX,EAX                         ; 0053f520
        ;   Label: LAB_0053f520
    CMP EDI,EAX                         ; 0053f522
        ;   Label: LAB_0053f522
    JNZ 0x0053f54e                      ; 0053f524
        ;   XREF to: 0053f54e (CONDITIONAL_JUMP)  ; LAB_0053f54e
    MOV EAX,dword ptr [ESP + 0x48]      ; 0053f526
    MOV dword ptr [EBX + 0x1fa94],EAX   ; 0053f52a
    TEST EAX,EAX                        ; 0053f530
    JZ 0x0053f546                       ; 0053f532
        ;   XREF to: 0053f546 (CONDITIONAL_JUMP)  ; LAB_0053f546
    PUSH 0x2                            ; 0053f534
    MOV EDX,dword ptr [EAX + 0x14c]     ; 0053f536
    PUSH EAX                            ; 0053f53c
    CALL dword ptr [EDX + 0xd4]         ; 0053f53d
    ADD ESP,0x8                         ; 0053f543
    MOV dword ptr [ESP + 0x20],0x1      ; 0053f546
        ;   Label: LAB_0053f546
    MOV EDX,dword ptr [EBX + 0x1faa0]   ; 0053f54e
        ;   Label: LAB_0053f54e
    CMP EDX,0x1                         ; 0053f554
    JNZ 0x0053f572                      ; 0053f557
        ;   XREF to: 0053f572 (CONDITIONAL_JUMP)  ; LAB_0053f572
    CMP EDI,0x3                         ; 0053f559
    JNZ 0x0053f572                      ; 0053f55c
        ;   XREF to: 0053f572 (CONDITIONAL_JUMP)  ; LAB_0053f572
    PUSH EDX                            ; 0053f55e
    PUSH EBX                            ; 0053f55f
    CALL core_hero.cpp_CHero_addCarriedItemToInventory_FUN_004b5c70 ; 0053f560
        ;   XREF to: 004b5c70 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_addCarriedItemToInventory_FUN_004b5c70(CHero * this_ptr, int hand_index)
    ADD ESP,0x8                         ; 0053f565
    MOV dword ptr [EBX + 0x1faa0],0x0   ; 0053f568
    MOV ECX,dword ptr [EBX + 0x1fa1c]   ; 0053f572
        ;   Label: LAB_0053f572
    TEST ECX,ECX                        ; 0053f578
    JZ 0x0053f5ff                       ; 0053f57a
        ;   XREF to: 0053f5ff (CONDITIONAL_JUMP)  ; LAB_0053f5ff
    CMP EDI,0x3                         ; 0053f580
    JNZ 0x0053f5ff                      ; 0053f583
        ;   XREF to: 0053f5ff (CONDITIONAL_JUMP)  ; LAB_0053f5ff
    PUSH 0x0                            ; 0053f585
    PUSH ECX                            ; 0053f587
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0053f588
    PUSH EDX                            ; 0053f58c
    CALL core_inv.cpp_CInventory_removeItem_FUN_004c07b0 ; 0053f58d
        ;   XREF to: 004c07b0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_removeItem_FUN_004c07b0(CInventory * this_ptr, CDemonActor * item_to_remove, int should_delete_actor)
    ADD ESP,0xc                         ; 0053f592
    MOV ECX,dword ptr [EBX + 0x1fa1c]   ; 0053f595
    PUSH ECX                            ; 0053f59b
    MOV EAX,[0x005baf90]                ; 0053f59c | g_CDemonMission_PTR_005baf90
    PUSH EAX                            ; 0053f5a1
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_004d8c60 ; 0053f5a2
        ;   XREF to: 004d8c60 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_addActorToList_FUN_004d8c60(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0053f5a7
    MOV EDX,dword ptr [EBX + 0x1fa1c]   ; 0053f5aa
    PUSH 0x0                            ; 0053f5b0
    PUSH EDX                            ; 0053f5b2
    PUSH 0x1                            ; 0053f5b3
    PUSH EBX                            ; 0053f5b5
    CALL core_charactr.cpp_CCharacter_pickupObjectNow_FUN_00428f40 ; 0053f5b6
        ;   XREF to: 00428f40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_pickupObjectNow_FUN_00428f40(CCharacter * this_ptr, int hand_index, CDemonActor * object, float blend_time)
    ADD ESP,0x10                        ; 0053f5bb
    PUSH 0x595dd8                       ; 0053f5be | = "CTrap"
    MOV ECX,dword ptr [EBX + 0x1fa1c]   ; 0053f5c3
    PUSH ECX                            ; 0053f5c9
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 0053f5ca
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040d7e0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0053f5cf
    TEST EAX,EAX                        ; 0053f5d2
    JZ 0x0053fb8d                       ; 0053f5d4
        ;   XREF to: 0053fb8d (CONDITIONAL_JUMP)  ; LAB_0053fb8d
    PUSH 0x1                            ; 0053f5da
    PUSH 0x14                           ; 0053f5dc
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0053f5de
    PUSH EDX                            ; 0053f5e2
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0053f5e3
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0053f5e8
    MOV dword ptr [EBX + 0x1faa0],0x6   ; 0053f5eb
    MOV dword ptr [EBX + 0x1fa1c],0x0   ; 0053f5f5
        ;   Label: LAB_0053f5f5
    CMP EDI,0xa                         ; 0053f5ff
        ;   Label: LAB_0053f5ff
    JNZ 0x0053fbdf                      ; 0053f602
        ;   XREF to: 0053fbdf (CONDITIONAL_JUMP)  ; LAB_0053fbdf
    MOV EDX,dword ptr [ESP + 0x44]      ; 0053f608
    PUSH EDX                            ; 0053f60c
    CALL core_inv.cpp_CInventory_getActiveLightGun_FUN_004c1830 ; 0053f60d
        ;   XREF to: 004c1830 (UNCONDITIONAL_CALL)  ; CLightGun * core_inv.cpp_CInventory_getActiveLightGun_FUN_004c1830(CInventory * this_ptr)
    ADD ESP,0x4                         ; 0053f612
    TEST EAX,EAX                        ; 0053f615
    JNZ 0x0053fbd0                      ; 0053f617
        ;   XREF to: 0053fbd0 (CONDITIONAL_JUMP)  ; LAB_0053fbd0
    MOV dword ptr [EBX + 0x1fa00],0x1   ; 0053f61d
        ;   Label: LAB_0053f61d
    CMP dword ptr [EBX + 0x1faa0],0x7   ; 0053f627
        ;   Label: LAB_0053f627
    JNZ 0x0053f642                      ; 0053f62e
        ;   XREF to: 0053f642 (CONDITIONAL_JUMP)  ; LAB_0053f642
    TEST EDI,EDI                        ; 0053f630
    JNZ 0x0053fc15                      ; 0053f632
        ;   XREF to: 0053fc15 (CONDITIONAL_JUMP)  ; LAB_0053fc15
    MOV dword ptr [EBX + 0x1faa0],0x0   ; 0053f638
        ;   Label: LAB_0053f638
    PUSH ESI                            ; 0053f642
        ;   Label: LAB_0053f642
    PUSH EBX                            ; 0053f643
    CALL core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_0042aa50 ; 0053f644
        ;   XREF to: 0042aa50 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_0042aa50(CCharacter * this_ptr, int layer_action_index)
    ADD ESP,0x8                         ; 0053f649
    MOV ESI,dword ptr [ESP + 0x30]      ; 0053f64c
        ;   Label: LAB_0053f64c
    INC ESI                             ; 0053f650
    MOV dword ptr [ESP + 0x30],ESI      ; 0053f651
    CMP ESI,0x2                         ; 0053f655
    JL 0x0053f37b                       ; 0053f658
        ;   XREF to: 0053f37b (CONDITIONAL_JUMP)  ; LAB_0053f37b
    CMP dword ptr [ESP + 0x20],0x0      ; 0053f65e
    JNZ 0x0053fc23                      ; 0053f663
        ;   XREF to: 0053fc23 (CONDITIONAL_JUMP)  ; LAB_0053fc23
    MOV ESP,EBP                         ; 0053f669
    POP EBP                             ; 0053f66b
    POP EDI                             ; 0053f66c
    POP ESI                             ; 0053f66d
    POP EBX                             ; 0053f66e
    RET                                 ; 0053f66f
    CMP dword ptr [EBX + 0x1fa1c],0x0   ; 0053f670
        ;   Label: LAB_0053f670
    JNZ 0x0053f41f                      ; 0053f677
        ;   XREF to: 0053f41f (CONDITIONAL_JUMP)  ; LAB_0053f41f
    CMP EAX,0x2                         ; 0053f67d
    JNZ 0x0053f689                      ; 0053f680
        ;   XREF to: 0053f689 (CONDITIONAL_JUMP)  ; LAB_0053f689
    XOR ESI,ESI                         ; 0053f682
    JMP 0x0053f424                      ; 0053f684
        ;   XREF to: 0053f424 (UNCONDITIONAL_JUMP)  ; LAB_0053f424
    CMP EAX,0x3                         ; 0053f689
        ;   Label: LAB_0053f689
    JNZ 0x0053f6f5                      ; 0053f68c
        ;   XREF to: 0053f6f5 (CONDITIONAL_JUMP)  ; LAB_0053f6f5
    MOV ESI,0x6                         ; 0053f68e
    PUSH ESI                            ; 0053f693
    PUSH EBX                            ; 0053f694
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0 ; 0053f695
        ;   XREF to: 0042a9d0 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0(CCharacter * this_ptr, int state_index)
    MOV dword ptr [ESP + 0x54],EAX      ; 0053f69a
    FLD float ptr [ESP + 0x54]          ; 0053f69e
    ADD ESP,0x8                         ; 0053f6a2
    FCOMP double ptr [0x00595e0f]       ; 0053f6a5 | DOUBLE_00595e0f
    FNSTSW AX                           ; 0053f6ab
    SAHF                                ; 0053f6ad
    JBE 0x0053f424                      ; 0053f6ae
        ;   XREF to: 0053f424 (CONDITIONAL_JUMP)  ; LAB_0053f424
    FLD float ptr [EBP + 0x18]          ; 0053f6b4
    FMUL double ptr [0x00595e07]        ; 0053f6b7 | DOUBLE_00595e07
    FADD float ptr [EBX + 0x1fa4c]      ; 0053f6bd
    FST float ptr [EBX + 0x1fa4c]       ; 0053f6c3
    FCOMP float ptr [0x005a2708]        ; 0053f6c9 | FLOAT_005a2708
    FNSTSW AX                           ; 0053f6cf
    SAHF                                ; 0053f6d1
    JA 0x0053f6e8                       ; 0053f6d2
        ;   XREF to: 0053f6e8 (CONDITIONAL_JUMP)  ; LAB_0053f6e8
    CMP dword ptr [EBX + 0xbca0],0x0    ; 0053f6d4
        ;   Label: LAB_0053f6d4
    JNZ 0x0053f38b                      ; 0053f6db
        ;   XREF to: 0053f38b (CONDITIONAL_JUMP)  ; LAB_0053f38b
    XOR ESI,ESI                         ; 0053f6e1
        ;   Label: caseD_3
    JMP 0x0053f424                      ; 0053f6e3
        ;   XREF to: 0053f424 (UNCONDITIONAL_JUMP)  ; LAB_0053f424
    MOV EAX,[0x005a2708]                ; 0053f6e8 | FLOAT_005a2708
        ;   Label: LAB_0053f6e8
    MOV dword ptr [EBX + 0x1fa4c],EAX   ; 0053f6ed
    JMP 0x0053f6d4                      ; 0053f6f3
        ;   XREF to: 0053f6d4 (UNCONDITIONAL_JUMP)  ; LAB_0053f6d4
    MOV EDI,dword ptr [ESP + 0x44]      ; 0053f6f5
        ;   Label: LAB_0053f6f5
    PUSH EDI                            ; 0053f6f9
    CALL core_inv.cpp_CInventory_getActiveLightGun_FUN_004c1830 ; 0053f6fa
        ;   XREF to: 004c1830 (UNCONDITIONAL_CALL)  ; CLightGun * core_inv.cpp_CInventory_getActiveLightGun_FUN_004c1830(CInventory * this_ptr)
    ADD ESP,0x4                         ; 0053f6ff
    TEST EAX,EAX                        ; 0053f702
    JZ 0x0053f713                       ; 0053f704
        ;   XREF to: 0053f713 (CONDITIONAL_JUMP)  ; LAB_0053f713
    CMP dword ptr [EBX + 0x1fa00],0x0   ; 0053f706
    JZ 0x0053f41f                       ; 0053f70d
        ;   XREF to: 0053f41f (CONDITIONAL_JUMP)  ; LAB_0053f41f
    MOV EDX,dword ptr [ESP + 0x44]      ; 0053f713
        ;   Label: LAB_0053f713
    PUSH EDX                            ; 0053f717
    CALL core_inv.cpp_CInventory_getActiveLightGun_FUN_004c1830 ; 0053f718
        ;   XREF to: 004c1830 (UNCONDITIONAL_CALL)  ; CLightGun * core_inv.cpp_CInventory_getActiveLightGun_FUN_004c1830(CInventory * this_ptr)
    ADD ESP,0x4                         ; 0053f71d
    TEST EAX,EAX                        ; 0053f720
    JZ 0x0053f737                       ; 0053f722
        ;   XREF to: 0053f737 (CONDITIONAL_JUMP)  ; LAB_0053f737
    CMP dword ptr [EBX + 0x1fa00],0x1   ; 0053f724
    JNZ 0x0053f737                      ; 0053f72b
        ;   XREF to: 0053f737 (CONDITIONAL_JUMP)  ; LAB_0053f737
    MOV ESI,0xa                         ; 0053f72d
    JMP 0x0053f424                      ; 0053f732
        ;   XREF to: 0053f424 (UNCONDITIONAL_JUMP)  ; LAB_0053f424
    MOV ESI,dword ptr [ESP + 0x44]      ; 0053f737
        ;   Label: LAB_0053f737
    PUSH ESI                            ; 0053f73b
    CALL core_inv.cpp_CInventory_getActiveLightGun_FUN_004c1830 ; 0053f73c
        ;   XREF to: 004c1830 (UNCONDITIONAL_CALL)  ; CLightGun * core_inv.cpp_CInventory_getActiveLightGun_FUN_004c1830(CInventory * this_ptr)
    ADD ESP,0x4                         ; 0053f741
    TEST EAX,EAX                        ; 0053f744
    JNZ 0x0053f75b                      ; 0053f746
        ;   XREF to: 0053f75b (CONDITIONAL_JUMP)  ; LAB_0053f75b
    CMP dword ptr [EBX + 0x1fa00],0x2   ; 0053f748
    JNZ 0x0053f75b                      ; 0053f74f
        ;   XREF to: 0053f75b (CONDITIONAL_JUMP)  ; LAB_0053f75b
    MOV ESI,0xa                         ; 0053f751
    JMP 0x0053f424                      ; 0053f756
        ;   XREF to: 0053f424 (UNCONDITIONAL_JUMP)  ; LAB_0053f424
    MOV EAX,dword ptr [ESP + 0x44]      ; 0053f75b
        ;   Label: LAB_0053f75b
    PUSH EAX                            ; 0053f75f
    CALL core_inv.cpp_CInventory_getActiveLightGun_FUN_004c1830 ; 0053f760
        ;   XREF to: 004c1830 (UNCONDITIONAL_CALL)  ; CLightGun * core_inv.cpp_CInventory_getActiveLightGun_FUN_004c1830(CInventory * this_ptr)
    ADD ESP,0x4                         ; 0053f765
    TEST EAX,EAX                        ; 0053f768
    JNZ 0x0053f779                      ; 0053f76a
        ;   XREF to: 0053f779 (CONDITIONAL_JUMP)  ; LAB_0053f779
    CMP dword ptr [EBX + 0x1fa00],0x1   ; 0053f76c
    JZ 0x0053f41f                       ; 0053f773
        ;   XREF to: 0053f41f (CONDITIONAL_JUMP)  ; LAB_0053f41f
    MOV ECX,dword ptr [ESP + 0x24]      ; 0053f779
        ;   Label: LAB_0053f779
    TEST ECX,ECX                        ; 0053f77d
    JL 0x0053f788                       ; 0053f77f
        ;   XREF to: 0053f788 (CONDITIONAL_JUMP)  ; LAB_0053f788
    MOV ESI,ECX                         ; 0053f781
    JMP 0x0053f424                      ; 0053f783
        ;   XREF to: 0053f424 (UNCONDITIONAL_JUMP)  ; LAB_0053f424
    MOV ESI,dword ptr [ESP + 0x48]      ; 0053f788
        ;   Label: LAB_0053f788
    MOV EAX,dword ptr [EBX + 0x1fa94]   ; 0053f78c
    CMP EAX,ESI                         ; 0053f792
    JNZ 0x0053f7ec                      ; 0053f794
        ;   XREF to: 0053f7ec (CONDITIONAL_JUMP)  ; LAB_0053f7ec
    MOV EAX,dword ptr [EBX + 0x1fa94]   ; 0053f796
    TEST EAX,EAX                        ; 0053f79c
    JZ 0x0053f6e1                       ; 0053f79e
        ;   XREF to: 0053f6e1 (CONDITIONAL_JUMP)  ; caseD_8
    MOV EAX,dword ptr [EAX + 0x2d8]     ; 0053f7a4
    CMP EAX,0x8                         ; 0053f7aa
    JA 0x0053f6e1                       ; 0053f7ad
        ;   XREF to: 0053f6e1 (CONDITIONAL_JUMP)  ; caseD_8
    JMP dword ptr [EAX*0x4 + 0x53f2c8]  ; 0053f7b3 | caseD_5 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV ESI,0x2                         ; 0053f7ba
        ;   Label: caseD_0
    JMP 0x0053f424                      ; 0053f7bf
        ;   XREF to: 0053f424 (UNCONDITIONAL_JUMP)  ; LAB_0053f424
    MOV ESI,0x4                         ; 0053f7c4
        ;   Label: caseD_1
    JMP 0x0053f424                      ; 0053f7c9
        ;   XREF to: 0053f424 (UNCONDITIONAL_JUMP)  ; LAB_0053f424
    MOV ESI,0x7                         ; 0053f7ce
        ;   Label: caseD_4
    JMP 0x0053f424                      ; 0053f7d3
        ;   XREF to: 0053f424 (UNCONDITIONAL_JUMP)  ; LAB_0053f424
    MOV ESI,0x5                         ; 0053f7d8
        ;   Label: caseD_2
    JMP 0x0053f424                      ; 0053f7dd
        ;   XREF to: 0053f424 (UNCONDITIONAL_JUMP)  ; LAB_0053f424
    MOV ESI,0x8                         ; 0053f7e2
        ;   Label: caseD_7
    JMP 0x0053f424                      ; 0053f7e7
        ;   XREF to: 0053f424 (UNCONDITIONAL_JUMP)  ; LAB_0053f424
    TEST EAX,EAX                        ; 0053f7ec
        ;   Label: LAB_0053f7ec
    JNZ 0x0053f84d                      ; 0053f7ee
        ;   XREF to: 0053f84d (CONDITIONAL_JUMP)  ; LAB_0053f84d
    MOV EAX,ESI                         ; 0053f7f0
    TEST ESI,ESI                        ; 0053f7f2
    JNZ 0x0053f82d                      ; 0053f7f4
        ;   XREF to: 0053f82d (CONDITIONAL_JUMP)  ; LAB_0053f82d
    JMP 0x0053f424                      ; 0053f7f6
        ;   XREF to: 0053f424 (UNCONDITIONAL_JUMP)  ; LAB_0053f424
    MOV ESI,0x1                         ; 0053f7fb
        ;   Label: LAB_0053f7fb
    JMP 0x0053f424                      ; 0053f800
        ;   XREF to: 0053f424 (UNCONDITIONAL_JUMP)  ; LAB_0053f424
    MOV EDI,dword ptr [0x01cc56dc]      ; 0053f805 | g_CMeleeActorType_01cc56a4.name_hash
        ;   Label: LAB_0053f805
    PUSH EDI                            ; 0053f80b
    PUSH EAX                            ; 0053f80c
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0053f80d
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0053f812
    TEST EAX,EAX                        ; 0053f815
    JZ 0x0053f826                       ; 0053f817
        ;   XREF to: 0053f826 (CONDITIONAL_JUMP)  ; LAB_0053f826
    CMP dword ptr [EAX + 0x580],0x0     ; 0053f819
    JNZ 0x0053f41f                      ; 0053f820
        ;   XREF to: 0053f41f (CONDITIONAL_JUMP)  ; LAB_0053f41f
    XOR ESI,ESI                         ; 0053f826
        ;   Label: LAB_0053f826
    JMP 0x0053f424                      ; 0053f828
        ;   XREF to: 0053f424 (UNCONDITIONAL_JUMP)  ; LAB_0053f424
    MOV ESI,dword ptr [ESI + 0x2d8]     ; 0053f82d
        ;   Label: LAB_0053f82d
    CMP ESI,0x7                         ; 0053f833
    JNC 0x0053f841                      ; 0053f836
        ;   XREF to: 0053f841 (CONDITIONAL_JUMP)  ; LAB_0053f841
    TEST ESI,ESI                        ; 0053f838
    JZ 0x0053f7fb                       ; 0053f83a
        ;   XREF to: 0053f7fb (CONDITIONAL_JUMP)  ; LAB_0053f7fb
    JMP 0x0053f41f                      ; 0053f83c
        ;   XREF to: 0053f41f (UNCONDITIONAL_JUMP)  ; LAB_0053f41f
    JBE 0x0053f805                      ; 0053f841
        ;   XREF to: 0053f805 (CONDITIONAL_JUMP)  ; LAB_0053f805
        ;   Label: LAB_0053f841
    CMP ESI,0x8                         ; 0053f843
    JZ 0x0053f805                       ; 0053f846
        ;   XREF to: 0053f805 (CONDITIONAL_JUMP)  ; LAB_0053f805
    JMP 0x0053f41f                      ; 0053f848
        ;   XREF to: 0053f41f (UNCONDITIONAL_JUMP)  ; LAB_0053f41f
    JNZ 0x0053f87e                      ; 0053f84d
        ;   XREF to: 0053f87e (CONDITIONAL_JUMP)  ; LAB_0053f87e
        ;   Label: LAB_0053f84d
    XOR ESI,ESI                         ; 0053f84f
    JMP 0x0053f424                      ; 0053f851
        ;   XREF to: 0053f424 (UNCONDITIONAL_JUMP)  ; LAB_0053f424
    MOV EDX,dword ptr [0x01cc56dc]      ; 0053f856 | g_CMeleeActorType_01cc56a4.name_hash
        ;   Label: LAB_0053f856
    PUSH EDX                            ; 0053f85c
    PUSH EAX                            ; 0053f85d
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0053f85e
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0053f863
    TEST EAX,EAX                        ; 0053f866
    JZ 0x0053f877                       ; 0053f868
        ;   XREF to: 0053f877 (CONDITIONAL_JUMP)  ; LAB_0053f877
    CMP dword ptr [EAX + 0x580],0x0     ; 0053f86a
    JNZ 0x0053f41f                      ; 0053f871
        ;   XREF to: 0053f41f (CONDITIONAL_JUMP)  ; LAB_0053f41f
    XOR ESI,ESI                         ; 0053f877
        ;   Label: LAB_0053f877
    JMP 0x0053f424                      ; 0053f879
        ;   XREF to: 0053f424 (UNCONDITIONAL_JUMP)  ; LAB_0053f424
    MOV ESI,dword ptr [EAX + 0x2d8]     ; 0053f87e
        ;   Label: LAB_0053f87e
    CMP ESI,0x7                         ; 0053f884
    JNC 0x0053f896                      ; 0053f887
        ;   XREF to: 0053f896 (CONDITIONAL_JUMP)  ; LAB_0053f896
    TEST ESI,ESI                        ; 0053f889
    JZ 0x0053f7fb                       ; 0053f88b
        ;   XREF to: 0053f7fb (CONDITIONAL_JUMP)  ; LAB_0053f7fb
    JMP 0x0053f41f                      ; 0053f891
        ;   XREF to: 0053f41f (UNCONDITIONAL_JUMP)  ; LAB_0053f41f
    JBE 0x0053f856                      ; 0053f896
        ;   XREF to: 0053f856 (CONDITIONAL_JUMP)  ; LAB_0053f856
        ;   Label: LAB_0053f896
    CMP ESI,0x8                         ; 0053f898
    JZ 0x0053f856                       ; 0053f89b
        ;   XREF to: 0053f856 (CONDITIONAL_JUMP)  ; LAB_0053f856
    JMP 0x0053f41f                      ; 0053f89d
        ;   XREF to: 0053f41f (UNCONDITIONAL_JUMP)  ; LAB_0053f41f
    MOV EAX,0xb                         ; 0053f8a2
        ;   Label: LAB_0053f8a2
    MOV EDX,EAX                         ; 0053f8a7
    MOV ECX,dword ptr [ESP + 0x28]      ; 0053f8a9
    SAR EDX,0x1f                        ; 0053f8ad
    IDIV dword ptr [ECX + 0x64]         ; 0053f8b0
    MOV dword ptr [ESP + 0x4c],EAX      ; 0053f8b3
    FILD dword ptr [ESP + 0x4c]         ; 0053f8b7
    FCOMP float ptr [EBX + 0x2a88]      ; 0053f8bb
    FNSTSW AX                           ; 0053f8c1
    SAHF                                ; 0053f8c3
    JA 0x0053f4b6                       ; 0053f8c4
        ;   XREF to: 0053f4b6 (CONDITIONAL_JUMP)  ; caseD_b
    MOV ECX,dword ptr [ESP + 0x40]      ; 0053f8ca
    PUSH ECX                            ; 0053f8ce
    CALL core_dynamite.cpp_CDynamite_lightFuse_FUN_0046ed30 ; 0053f8cf
        ;   XREF to: 0046ed30 (UNCONDITIONAL_CALL)  ; void core_dynamite.cpp_CDynamite_lightFuse_FUN_0046ed30(CDynamite * this_ptr)
    ADD ESP,0x4                         ; 0053f8d4
    JMP 0x0053f4b6                      ; 0053f8d7
        ;   XREF to: 0053f4b6 (UNCONDITIONAL_JUMP)  ; caseD_b
    CMP dword ptr [EBX + 0x1faa0],0x3   ; 0053f8dc
        ;   Label: caseD_7
    JNZ 0x0053f9c9                      ; 0053f8e3
        ;   XREF to: 0053f9c9 (CONDITIONAL_JUMP)  ; LAB_0053f9c9
    MOV EAX,0xb                         ; 0053f8e9
    MOV EDX,EAX                         ; 0053f8ee
    MOV ECX,dword ptr [ESP + 0x28]      ; 0053f8f0
    SAR EDX,0x1f                        ; 0053f8f4
    IDIV dword ptr [ECX + 0x64]         ; 0053f8f7
    MOV dword ptr [ESP + 0x4c],EAX      ; 0053f8fa
    FILD dword ptr [ESP + 0x4c]         ; 0053f8fe
    FCOMP float ptr [EBX + 0x2a88]      ; 0053f902
    FNSTSW AX                           ; 0053f908
    SAHF                                ; 0053f90a
    JA 0x0053f9c9                       ; 0053f90b
        ;   XREF to: 0053f9c9 (CONDITIONAL_JUMP)  ; LAB_0053f9c9
    LEA EAX,[ESP + 0xc]                 ; 0053f911
    PUSH EAX                            ; 0053f915
    PUSH EBX                            ; 0053f916
    CALL core_stranger.cpp_CStranger_getThrowDirection_FUN_0053f260 ; 0053f917
        ;   XREF to: 0053f260 (UNCONDITIONAL_CALL)  ; CVector3f * core_stranger.cpp_CStranger_getThrowDirection_FUN_0053f260(CStranger * this_ptr, CVector3f * out_direction)
    ADD ESP,0x8                         ; 0053f91c
    MOV ECX,dword ptr [0x01bca0c0]      ; 0053f91f | g_CDynamiteActorType_01bca088.name_hash
    PUSH ECX                            ; 0053f925
    MOV EAX,dword ptr [EBX + 0x1fa94]   ; 0053f926
    PUSH EAX                            ; 0053f92c
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0053f92d
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [ESP + 0x44],EAX      ; 0053f932
    ADD ESP,0x8                         ; 0053f936
    MOV dword ptr [ESP + 0x2c],EAX      ; 0053f939
    TEST EAX,EAX                        ; 0053f93d
    JZ 0x0053f994                       ; 0053f93f
        ;   XREF to: 0053f994 (CONDITIONAL_JUMP)  ; LAB_0053f994
    LEA EAX,[ESP + 0xc]                 ; 0053f941
    PUSH EAX                            ; 0053f945
    LEA EAX,[ESP + 0x4]                 ; 0053f946
    PUSH EAX                            ; 0053f94a
    PUSH EBX                            ; 0053f94b
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 0053f94c
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_0040a200(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 0053f951
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0053f954
    ADD EDX,0x574                       ; 0053f958
    CMP EDX,EAX                         ; 0053f95e
    JZ 0x0053f972                       ; 0053f960
        ;   XREF to: 0053f972 (CONDITIONAL_JUMP)  ; LAB_0053f972
    MOV ECX,dword ptr [EAX]             ; 0053f962
    MOV dword ptr [EDX],ECX             ; 0053f964
    MOV ECX,dword ptr [EAX + 0x4]       ; 0053f966
    MOV dword ptr [EDX + 0x4],ECX       ; 0053f969
    MOV ECX,dword ptr [EAX + 0x8]       ; 0053f96c
    MOV dword ptr [EDX + 0x8],ECX       ; 0053f96f
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0053f972
        ;   Label: LAB_0053f972
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0053f976
    PUSH ECX                            ; 0053f97a
    MOV EAX,dword ptr [EAX + 0x14c]     ; 0053f97b
    CALL dword ptr [EAX + 0xdc]         ; 0053f981
    ADD ESP,0x4                         ; 0053f987
    MOV dword ptr [EBX + 0x1fa94],0x0   ; 0053f98a
    CMP dword ptr [EBX + 0x24f0],0x0    ; 0053f994
        ;   Label: LAB_0053f994
    JZ 0x0053f9b4                       ; 0053f99b
        ;   XREF to: 0053f9b4 (CONDITIONAL_JUMP)  ; LAB_0053f9b4
    LEA EDX,[ESP + 0xc]                 ; 0053f99d
    PUSH EDX                            ; 0053f9a1
    PUSH 0x1                            ; 0053f9a2
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0053f9a4
    PUSH EBX                            ; 0053f9aa
    CALL dword ptr [EAX + 0x120]        ; 0053f9ab
    ADD ESP,0xc                         ; 0053f9b1
    MOV dword ptr [EBX + 0x1faa0],0x0   ; 0053f9b4
        ;   Label: LAB_0053f9b4
    MOV EAX,[0x005a2704]                ; 0053f9be | FLOAT_005a2704
    MOV dword ptr [EBX + 0x1fa4c],EAX   ; 0053f9c3
    FLD float ptr [EBX + 0x2a88]        ; 0053f9c9
        ;   Label: LAB_0053f9c9
    FLD1                                ; 0053f9cf
    FCOMPP                              ; 0053f9d1
    FNSTSW AX                           ; 0053f9d3
    SAHF                                ; 0053f9d5
    JA 0x0053f4b6                       ; 0053f9d6
        ;   XREF to: 0053f4b6 (CONDITIONAL_JUMP)  ; caseD_b
    MOV dword ptr [EBX + 0x2a84],0x0    ; 0053f9dc
    MOV dword ptr [EBX + 0x2a88],0x0    ; 0053f9e6
    JMP 0x0053f4b6                      ; 0053f9f0
        ;   XREF to: 0053f4b6 (UNCONDITIONAL_JUMP)  ; caseD_b
    CMP dword ptr [ESP + 0x38],0x3f19999a ; 0053f9f5
        ;   Label: caseD_8
    JGE 0x0053f4b6                      ; 0053f9fd
        ;   XREF to: 0053f4b6 (CONDITIONAL_JUMP)  ; caseD_b
    CMP dword ptr [EBX + 0x2a88],0x3f19999a ; 0053fa03
    JL 0x0053f4b6                       ; 0053fa0d
        ;   XREF to: 0053f4b6 (CONDITIONAL_JUMP)  ; caseD_b
    PUSH 0x595dcf                       ; 0053fa13 | = "CShotgun"
    MOV EAX,dword ptr [EBX + 0x1fa94]   ; 0053fa18
    PUSH EAX                            ; 0053fa1e
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 0053fa1f
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040d7e0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0053fa24
    TEST EAX,EAX                        ; 0053fa27
    JZ 0x0053f4b6                       ; 0053fa29
        ;   XREF to: 0053f4b6 (CONDITIONAL_JUMP)  ; caseD_b
    MOV EAX,dword ptr [EBX + 0x1fa94]   ; 0053fa2f
    PUSH EAX                            ; 0053fa35
    MOV EDX,dword ptr [EAX + 0x14c]     ; 0053fa36
    CALL dword ptr [EDX + 0xd0]         ; 0053fa3c
    ADD ESP,0x4                         ; 0053fa42
    JMP 0x0053f4b6                      ; 0053fa45
        ;   XREF to: 0053f4b6 (UNCONDITIONAL_JUMP)  ; caseD_b
    CMP dword ptr [ESP + 0x38],0x3ebd70a4 ; 0053fa4a
        ;   Label: caseD_c
    JGE 0x0053f4b6                      ; 0053fa52
        ;   XREF to: 0053f4b6 (CONDITIONAL_JUMP)  ; caseD_b
    CMP dword ptr [EBX + 0x2a88],0x3ebd70a4 ; 0053fa58
    JL 0x0053f4b6                       ; 0053fa62
        ;   XREF to: 0053f4b6 (CONDITIONAL_JUMP)  ; caseD_b
    MOV EAX,dword ptr [EBX + 0x1fa94]   ; 0053fa68
    TEST EAX,EAX                        ; 0053fa6e
    JZ 0x0053f4b6                       ; 0053fa70
        ;   XREF to: 0053f4b6 (CONDITIONAL_JUMP)  ; caseD_b
    PUSH 0x1                            ; 0053fa76
    MOV EDX,dword ptr [EAX + 0x14c]     ; 0053fa78
    PUSH EAX                            ; 0053fa7e
    CALL dword ptr [EDX + 0x70]         ; 0053fa7f
    ADD ESP,0x8                         ; 0053fa82
    JMP 0x0053f4b6                      ; 0053fa85
        ;   XREF to: 0053f4b6 (UNCONDITIONAL_JUMP)  ; caseD_b
    CMP dword ptr [ESP + 0x38],0x3f28f5c3 ; 0053fa8a
        ;   Label: caseD_d
    JGE 0x0053f4b6                      ; 0053fa92
        ;   XREF to: 0053f4b6 (CONDITIONAL_JUMP)  ; caseD_b
    CMP dword ptr [EBX + 0x2a88],0x3f28f5c3 ; 0053fa98
    JL 0x0053f4b6                       ; 0053faa2
        ;   XREF to: 0053f4b6 (CONDITIONAL_JUMP)  ; caseD_b
    MOV EAX,dword ptr [EBX + 0x1fa94]   ; 0053faa8
    TEST EAX,EAX                        ; 0053faae
    JZ 0x0053f4b6                       ; 0053fab0
        ;   XREF to: 0053f4b6 (CONDITIONAL_JUMP)  ; caseD_b
    PUSH 0x2                            ; 0053fab6
    MOV EDX,dword ptr [EAX + 0x14c]     ; 0053fab8
    PUSH EAX                            ; 0053fabe
    CALL dword ptr [EDX + 0x70]         ; 0053fabf
    ADD ESP,0x8                         ; 0053fac2
    JMP 0x0053f4b6                      ; 0053fac5
        ;   XREF to: 0053f4b6 (UNCONDITIONAL_JUMP)  ; caseD_b
    MOV EAX,0x1                         ; 0053faca
        ;   Label: LAB_0053faca
    JMP 0x0053f4dc                      ; 0053facf
        ;   XREF to: 0053f4dc (UNCONDITIONAL_JUMP)  ; LAB_0053f4dc
    MOV EAX,[0x01cc56dc]                ; 0053fad4 | g_CMeleeActorType_01cc56a4.name_hash
        ;   Label: LAB_0053fad4
    PUSH EAX                            ; 0053fad9
    PUSH EDX                            ; 0053fada
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0053fadb
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0053fae0
    TEST EAX,EAX                        ; 0053fae3
    JZ 0x0053fafa                       ; 0053fae5
        ;   XREF to: 0053fafa (CONDITIONAL_JUMP)  ; LAB_0053fafa
    CMP dword ptr [EAX + 0x580],0x0     ; 0053fae7
    JZ 0x0053fafa                       ; 0053faee
        ;   XREF to: 0053fafa (CONDITIONAL_JUMP)  ; LAB_0053fafa
    MOV EAX,0x3                         ; 0053faf0
    JMP 0x0053f4dc                      ; 0053faf5
        ;   XREF to: 0053f4dc (UNCONDITIONAL_JUMP)  ; LAB_0053f4dc
    XOR EAX,EAX                         ; 0053fafa
        ;   Label: LAB_0053fafa
    JMP 0x0053f4dc                      ; 0053fafc
        ;   XREF to: 0053f4dc (UNCONDITIONAL_JUMP)  ; LAB_0053f4dc
    MOV EAX,dword ptr [EAX + 0x2d8]     ; 0053fb01
        ;   Label: LAB_0053fb01
    CMP EAX,0x7                         ; 0053fb07
    JNC 0x0053fb1a                      ; 0053fb0a
        ;   XREF to: 0053fb1a (CONDITIONAL_JUMP)  ; LAB_0053fb1a
    TEST EAX,EAX                        ; 0053fb0c
    JZ 0x0053faca                       ; 0053fb0e
        ;   XREF to: 0053faca (CONDITIONAL_JUMP)  ; LAB_0053faca
    MOV EAX,0x3                         ; 0053fb10
    JMP 0x0053f4dc                      ; 0053fb15
        ;   XREF to: 0053f4dc (UNCONDITIONAL_JUMP)  ; LAB_0053f4dc
    JBE 0x0053fad4                      ; 0053fb1a
        ;   XREF to: 0053fad4 (CONDITIONAL_JUMP)  ; LAB_0053fad4
        ;   Label: LAB_0053fb1a
    CMP EAX,0x8                         ; 0053fb1c
    JZ 0x0053fad4                       ; 0053fb1f
        ;   XREF to: 0053fad4 (CONDITIONAL_JUMP)  ; LAB_0053fad4
    MOV EAX,0x3                         ; 0053fb21
    JMP 0x0053f4dc                      ; 0053fb26
        ;   XREF to: 0053f4dc (UNCONDITIONAL_JUMP)  ; LAB_0053f4dc
    MOV EAX,0x1                         ; 0053fb2b
        ;   Label: LAB_0053fb2b
    JMP 0x0053f522                      ; 0053fb30
        ;   XREF to: 0053f522 (UNCONDITIONAL_JUMP)  ; LAB_0053f522
    MOV EAX,[0x01cc56dc]                ; 0053fb35 | g_CMeleeActorType_01cc56a4.name_hash
        ;   Label: LAB_0053fb35
    PUSH EAX                            ; 0053fb3a
    PUSH EDX                            ; 0053fb3b
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0053fb3c
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0053fb41
    TEST EAX,EAX                        ; 0053fb44
    JZ 0x0053f520                       ; 0053fb46
        ;   XREF to: 0053f520 (CONDITIONAL_JUMP)  ; LAB_0053f520
    CMP dword ptr [EAX + 0x580],0x0     ; 0053fb4c
    JZ 0x0053f520                       ; 0053fb53
        ;   XREF to: 0053f520 (CONDITIONAL_JUMP)  ; LAB_0053f520
    MOV EAX,0x3                         ; 0053fb59
    JMP 0x0053f522                      ; 0053fb5e
        ;   XREF to: 0053f522 (UNCONDITIONAL_JUMP)  ; LAB_0053f522
    MOV EAX,dword ptr [EDX + 0x2d8]     ; 0053fb63
        ;   Label: LAB_0053fb63
    CMP EAX,0x7                         ; 0053fb69
    JNC 0x0053fb7c                      ; 0053fb6c
        ;   XREF to: 0053fb7c (CONDITIONAL_JUMP)  ; LAB_0053fb7c
    TEST EAX,EAX                        ; 0053fb6e
    JZ 0x0053fb2b                       ; 0053fb70
        ;   XREF to: 0053fb2b (CONDITIONAL_JUMP)  ; LAB_0053fb2b
    MOV EAX,0x3                         ; 0053fb72
    JMP 0x0053f522                      ; 0053fb77
        ;   XREF to: 0053f522 (UNCONDITIONAL_JUMP)  ; LAB_0053f522
    JBE 0x0053fb35                      ; 0053fb7c
        ;   XREF to: 0053fb35 (CONDITIONAL_JUMP)  ; LAB_0053fb35
        ;   Label: LAB_0053fb7c
    CMP EAX,0x8                         ; 0053fb7e
    JZ 0x0053fb35                       ; 0053fb81
        ;   XREF to: 0053fb35 (CONDITIONAL_JUMP)  ; LAB_0053fb35
    MOV EAX,0x3                         ; 0053fb83
    JMP 0x0053f522                      ; 0053fb88
        ;   XREF to: 0053f522 (UNCONDITIONAL_JUMP)  ; LAB_0053f522
    PUSH 0x1                            ; 0053fb8d
        ;   Label: LAB_0053fb8d
    PUSH 0x16                           ; 0053fb8f
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0053fb91
    PUSH EAX                            ; 0053fb95
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0053fb96
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EDX,dword ptr [EBX + 0x1faa0]   ; 0053fb9b
    ADD ESP,0xc                         ; 0053fba1
    TEST EDX,EDX                        ; 0053fba4
    JZ 0x0053fbc1                       ; 0053fba6
        ;   XREF to: 0053fbc1 (CONDITIONAL_JUMP)  ; LAB_0053fbc1
    PUSH 0x13ba                         ; 0053fba8
    PUSH EDX                            ; 0053fbad
    PUSH 0x595dde                       ; 0053fbae | = "actionPending = %d\nstranger.cpp line %d"
    MOV EAX,[0x005b6d50]                ; 0053fbb3 | g_CEditorTools_PTR_005b6d50
    PUSH EAX                            ; 0053fbb8
    CALL shape_edittool.cpp_FUN_0046fb40 ; 0053fbb9
        ;   XREF to: 0046fb40 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0046fb40()
    ADD ESP,0x10                        ; 0053fbbe
    MOV dword ptr [EBX + 0x1faa0],0x2   ; 0053fbc1
        ;   Label: LAB_0053fbc1
    JMP 0x0053f5f5                      ; 0053fbcb
        ;   XREF to: 0053f5f5 (UNCONDITIONAL_JUMP)  ; LAB_0053f5f5
    MOV dword ptr [EBX + 0x1fa00],0x2   ; 0053fbd0
        ;   Label: LAB_0053fbd0
    JMP 0x0053f627                      ; 0053fbda
        ;   XREF to: 0053f627 (UNCONDITIONAL_JUMP)  ; LAB_0053f627
    CMP EDI,0x3                         ; 0053fbdf
        ;   Label: LAB_0053fbdf
    JNZ 0x0053f627                      ; 0053fbe2
        ;   XREF to: 0053f627 (CONDITIONAL_JUMP)  ; LAB_0053f627
    CMP dword ptr [EBX + 0x1fa00],0x2   ; 0053fbe8
    JGE 0x0053f627                      ; 0053fbef
        ;   XREF to: 0053f627 (CONDITIONAL_JUMP)  ; LAB_0053f627
    MOV EAX,dword ptr [ESP + 0x44]      ; 0053fbf5
    PUSH EAX                            ; 0053fbf9
    CALL core_inv.cpp_CInventory_getActiveLightGun_FUN_004c1830 ; 0053fbfa
        ;   XREF to: 004c1830 (UNCONDITIONAL_CALL)  ; CLightGun * core_inv.cpp_CInventory_getActiveLightGun_FUN_004c1830(CInventory * this_ptr)
    ADD ESP,0x4                         ; 0053fbff
    TEST EAX,EAX                        ; 0053fc02
    JNZ 0x0053f61d                      ; 0053fc04
        ;   XREF to: 0053f61d (CONDITIONAL_JUMP)  ; LAB_0053f61d
    MOV dword ptr [EBX + 0x1fa00],EAX   ; 0053fc0a
    JMP 0x0053f627                      ; 0053fc10
        ;   XREF to: 0053f627 (UNCONDITIONAL_JUMP)  ; LAB_0053f627
    CMP EDI,0x8                         ; 0053fc15
        ;   Label: LAB_0053fc15
    JZ 0x0053f638                       ; 0053fc18
        ;   XREF to: 0053f638 (CONDITIONAL_JUMP)  ; LAB_0053f638
    JMP 0x0053f642                      ; 0053fc1e
        ;   XREF to: 0053f642 (UNCONDITIONAL_JUMP)  ; LAB_0053f642
    MOV EDX,dword ptr [0x005b9284]      ; 0053fc23 | PTR_DAT_005b9284
        ;   Label: LAB_0053fc23
    PUSH EDX                            ; 0053fc29
    CALL xxx_unk.c_FUN_004940d0         ; 0053fc2a
        ;   XREF to: 004940d0 (UNCONDITIONAL_CALL)  ; undefined xxx_unk.c_FUN_004940d0()
    ADD ESP,0x4                         ; 0053fc2f
    MOV ESP,EBP                         ; 0053fc32
    POP EBP                             ; 0053fc34
    POP EDI                             ; 0053fc35
    POP ESI                             ; 0053fc36
    POP EBX                             ; 0053fc37
    RET                                 ; 0053fc38

