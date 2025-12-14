; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_charactr.cpp_CCharacter_FUN_0042f3e0()
;
; Local Variables:
; undefined        Stack[-0x930]:1  local_930
; undefined4       Stack[-0x588]:4  local_588
; undefined        Stack[-0x1e0]:1  local_1e0
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
;   core_charactr.cpp_CCharacter_FUN_0042f730 at 0042f77b
;
; Referenced Globals:
;   TerminatedCString s_nothing_006176bb
;   TerminatedCString s_Hand_d_s_s_006176c5
;   TerminatedCString s_No_hands_an_carry_items_006176d4
;   TerminatedCString s_Select_hand_to_carry_dro_006176ed
;   TerminatedCString s_nothing_0061770d
;   TerminatedCString s_Select_actor_to_carry_00617717
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CDemonSet* g_CDemonSetPtr = 03114278
;   undefined4 g_CCharacterClassInfo.name_hash
;   CEditorTools g_CEditorToolsPtr
;   CDemonMission g_CDemonMissionInstance
;   undefined4 g_CDemonSetInstance.actor_list_ptr
;   undefined4 g_CDemonSetInstance.actor_list_data[0]
;   undefined4 DAT_032613d4
;   ... and 1 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
;   core_charactr.cpp_CCharacter_FUN_0042d090
;   core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0
;   core_mission.cpp_CDemonMission_FUN_00524030
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
;   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042f3e0
        ;   Label: core_charactr.cpp_CCharacter_FUN_0042f3e0
    PUSH ESI                            ; 0042f3e1
    PUSH EDI                            ; 0042f3e2
    PUSH EBP                            ; 0042f3e3
    SUB ESP,0x920                       ; 0042f3e4
    MOV EDX,dword ptr [0x00823c4c]      ; 0042f3ea | g_CCharacterClassInfo.name_hash
    PUSH EDX                            ; 0042f3f0
    MOV ECX,dword ptr [ESP + 0x938]     ; 0042f3f1
    PUSH ECX                            ; 0042f3f8
    XOR EBX,EBX                         ; 0042f3f9
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 0042f3fb
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0042f400
    MOV EBP,EAX                         ; 0042f403
    MOV dword ptr [ESP + 0x908],EBX     ; 0042f405
    LEA EBX,[EAX + 0x158]               ; 0042f40c
    MOV dword ptr [ESP + 0x904],EBX     ; 0042f412
    LEA EBX,[EAX + 0x30]                ; 0042f419
    ADD EAX,0x24ac                      ; 0042f41c
    MOV dword ptr [ESP + 0x900],EAX     ; 0042f421
    MOV EAX,dword ptr [ESP + 0x904]     ; 0042f428
    MOV dword ptr [ESP + 0x910],EBX     ; 0042f42f
    MOV dword ptr [ESP + 0x914],EAX     ; 0042f436
    LEA EAX,[ESP + 0x3a8]               ; 0042f43d
        ;   Label: LAB_0042f43d
    PUSH EAX                            ; 0042f444
    MOV EBX,EBP                         ; 0042f445
    XOR ESI,ESI                         ; 0042f447
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 0042f449
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 0042f44e
    CMP dword ptr [EBX + 0x24ac],0x0    ; 0042f451
        ;   Label: LAB_0042f451
    JL 0x0042f4c7                       ; 0042f458
        ;   XREF to: 0042f4c7 (CONDITIONAL_JUMP)  ; LAB_0042f4c7
    MOV EAX,dword ptr [ESP + 0x3a8]     ; 0042f45a
    MOV dword ptr [ESP + EAX*0x4 + 0x8f8],ESI ; 0042f461
    MOV EDX,dword ptr [EBX + 0x24b4]    ; 0042f468
    MOV EAX,0x6176bb                    ; 0042f46e | = "(nothing)"
    TEST EDX,EDX                        ; 0042f473
    JZ 0x0042f479                       ; 0042f475
        ;   XREF to: 0042f479 (CONDITIONAL_JUMP)  ; LAB_0042f479
    MOV EAX,EDX                         ; 0042f477
    IMUL EDI,dword ptr [EBX + 0x24ac],0x24 ; 0042f479
        ;   Label: LAB_0042f479
    PUSH EAX                            ; 0042f480 | = "(nothing)"
    MOV EAX,dword ptr [ESP + 0x918]     ; 0042f481
    PUSH EAX                            ; 0042f488
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 0042f489
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD EAX,0x2855c                     ; 0042f48e
    ADD ESP,0x4                         ; 0042f493
    ADD EAX,EDI                         ; 0042f496
    PUSH EAX                            ; 0042f498
    PUSH ESI                            ; 0042f499
    PUSH 0x6176c5                       ; 0042f49a | = "Hand %d\t%s\t%s\n"
    LEA EAX,[ESP + 0x760]               ; 0042f49f
    PUSH EAX                            ; 0042f4a6
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0042f4a7
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x14                        ; 0042f4ac
    LEA EAX,[ESP + 0x750]               ; 0042f4af
    PUSH EAX                            ; 0042f4b6
    LEA EAX,[ESP + 0x3ac]               ; 0042f4b7
    PUSH EAX                            ; 0042f4be
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0042f4bf
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0042f4c4
    INC ESI                             ; 0042f4c7
        ;   Label: LAB_0042f4c7
    ADD EBX,0x44                        ; 0042f4c8
    CMP ESI,0x2                         ; 0042f4cb
    JL 0x0042f451                       ; 0042f4ce
        ;   XREF to: 0042f451 (CONDITIONAL_JUMP)  ; LAB_0042f451
    CMP dword ptr [ESP + 0x3a8],0x1     ; 0042f4d0
    JL 0x0042f577                       ; 0042f4d8
        ;   XREF to: 0042f577 (CONDITIONAL_JUMP)  ; LAB_0042f577
    PUSH 0x0                            ; 0042f4de
    MOV ECX,dword ptr [ESP + 0x90c]     ; 0042f4e0
    PUSH ECX                            ; 0042f4e7
    PUSH 0x6176ed                       ; 0042f4e8 | = "Select hand to carry/drop item."
    LEA EAX,[ESP + 0x3b4]               ; 0042f4ed
    PUSH EAX                            ; 0042f4f4
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 0042f4f5
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 0042f4fa
    MOV dword ptr [ESP + 0x908],EAX     ; 0042f4fd
    TEST EAX,EAX                        ; 0042f504
    JL 0x0042f6fd                       ; 0042f506
        ;   XREF to: 0042f6fd (CONDITIONAL_JUMP)  ; LAB_0042f6fd
    MOV EAX,dword ptr [ESP + EAX*0x4 + 0x8f8] ; 0042f50c
    MOV dword ptr [ESP + 0x90c],EAX     ; 0042f513
    IMUL EAX,EAX,0x44                   ; 0042f51a
    MOV EBX,dword ptr [ESP + 0x900]     ; 0042f51d
    ADD EBX,EAX                         ; 0042f524
    MOV EAX,ESP                         ; 0042f526
    PUSH EAX                            ; 0042f528
    MOV dword ptr [ESP + 0x91c],EBX     ; 0042f529
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 0042f530
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 0042f535
    PUSH 0x61770d                       ; 0042f538 | = "(nothing)"
    LEA EAX,[ESP + 0x4]                 ; 0042f53d
    PUSH EAX                            ; 0042f541
    XOR ESI,ESI                         ; 0042f542
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0042f544
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0042f549
    XOR EDI,EDI                         ; 0042f54c
    MOV dword ptr [ESP + 0x91c],ESI     ; 0042f54e
    MOV EAX,[0x006810c8]                ; 0042f555 | g_CDemonSetPtr
        ;   Label: LAB_0042f555
    CMP ESI,dword ptr [EAX + 0x14d154]  ; 0042f55a | g_CDemonSetInstance.actor_list_ptr
    JGE 0x0042f5eb                      ; 0042f560
        ;   XREF to: 0042f5eb (CONDITIONAL_JUMP)  ; LAB_0042f5eb
    MOV EBX,dword ptr [EDI + EAX*0x1 + 0x14d158] ; 0042f566 | g_CDemonSetInstance.actor_list_data[0] | DAT_032613d4 | DAT_032613d8
    CMP EBX,EBP                         ; 0042f56d
    JNZ 0x0042f5ab                      ; 0042f56f
        ;   XREF to: 0042f5ab (CONDITIONAL_JUMP)  ; LAB_0042f5ab
    INC ESI                             ; 0042f571
        ;   Label: LAB_0042f571
    ADD EDI,0x4                         ; 0042f572
    JMP 0x0042f555                      ; 0042f575
        ;   XREF to: 0042f555 (UNCONDITIONAL_JUMP)  ; LAB_0042f555
    PUSH 0x6176d4                       ; 0042f577 | = "No hands an carry items!"
        ;   Label: LAB_0042f577
    MOV EDI,dword ptr [0x00678a60]      ; 0042f57c | g_CEditorToolsPtr
    PUSH EDI                            ; 0042f582 | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0042f583
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0042f588
    XOR EBX,EBX                         ; 0042f58b
    PUSH EBX                            ; 0042f58d
    LEA EAX,[ESP + 0x3ac]               ; 0042f58e
    PUSH EAX                            ; 0042f595
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0042f596
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 0042f59b
    MOV EAX,EBX                         ; 0042f59e
    ADD ESP,0x920                       ; 0042f5a0
    POP EBP                             ; 0042f5a6
    POP EDI                             ; 0042f5a7
    POP ESI                             ; 0042f5a8
    POP EBX                             ; 0042f5a9
    RET                                 ; 0042f5aa
    PUSH EBP                            ; 0042f5ab
        ;   Label: LAB_0042f5ab
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042f5ac
    PUSH EBX                            ; 0042f5b2
    CALL dword ptr [EAX + 0x7c]         ; 0042f5b3
    ADD ESP,0x8                         ; 0042f5b6
    CMP EAX,0x3                         ; 0042f5b9
    JNZ 0x0042f571                      ; 0042f5bc
        ;   XREF to: 0042f571 (CONDITIONAL_JUMP)  ; LAB_0042f571
    MOV EAX,dword ptr [ESP + 0x918]     ; 0042f5be
    CMP EBX,dword ptr [EAX + 0x8]       ; 0042f5c5
    JNZ 0x0042f5d4                      ; 0042f5c8
        ;   XREF to: 0042f5d4 (CONDITIONAL_JUMP)  ; LAB_0042f5d4
    MOV EAX,dword ptr [ESP]             ; 0042f5ca
    MOV dword ptr [ESP + 0x91c],EAX     ; 0042f5cd
    PUSH EBX                            ; 0042f5d4
        ;   Label: LAB_0042f5d4
    LEA EAX,[ESP + 0x4]                 ; 0042f5d5
    PUSH EAX                            ; 0042f5d9
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0042f5da
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0042f5df
    INC ESI                             ; 0042f5e2
    ADD EDI,0x4                         ; 0042f5e3
    JMP 0x0042f555                      ; 0042f5e6
        ;   XREF to: 0042f555 (UNCONDITIONAL_JUMP)  ; LAB_0042f555
    PUSH 0x0                            ; 0042f5eb
        ;   Label: LAB_0042f5eb
    MOV ECX,dword ptr [ESP + 0x920]     ; 0042f5ed
    PUSH ECX                            ; 0042f5f4
    PUSH 0x617717                       ; 0042f5f5 | = "Select actor to carry."
    LEA EAX,[ESP + 0xc]                 ; 0042f5fa
    PUSH EAX                            ; 0042f5fe
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 0042f5ff
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    MOV EBX,EAX                         ; 0042f604
    ADD ESP,0x10                        ; 0042f606
    TEST EAX,EAX                        ; 0042f609
    JL 0x0042f6d7                       ; 0042f60b
        ;   XREF to: 0042f6d7 (CONDITIONAL_JUMP)  ; LAB_0042f6d7
    PUSH 0x0                            ; 0042f611
    MOV ESI,dword ptr [ESP + 0x910]     ; 0042f613
    PUSH ESI                            ; 0042f61a
    MOV EAX,dword ptr [EBP + 0x154]     ; 0042f61b
    PUSH EBP                            ; 0042f621
    CALL dword ptr [EAX + 0x13c]        ; 0042f622
    ADD ESP,0xc                         ; 0042f628
    TEST EBX,EBX                        ; 0042f62b
    JLE 0x0042f6d7                      ; 0042f62d
        ;   XREF to: 0042f6d7 (CONDITIONAL_JUMP)  ; LAB_0042f6d7
    PUSH EBX                            ; 0042f633
    LEA EAX,[ESP + 0x4]                 ; 0042f634
    PUSH EAX                            ; 0042f638
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 0042f639
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 0042f63e
    PUSH EAX                            ; 0042f641
    MOV EDI,dword ptr [0x0067d550]      ; 0042f642 | g_CDemonMissionPtr
    PUSH EDI                            ; 0042f648 | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_FUN_00524030 ; 0042f649
        ;   XREF to: 00524030 (UNCONDITIONAL_CALL)  ; char * core_mission.cpp_CDemonMission_FUN_00524030(CDemonMission * this_ptr)
    MOV EBX,EAX                         ; 0042f64e
    ADD ESP,0x8                         ; 0042f650
    MOV EDI,EAX                         ; 0042f653
    MOV EAX,dword ptr [ESP + 0x918]     ; 0042f655
    MOV EDX,dword ptr [EAX]             ; 0042f65c
    PUSH EDX                            ; 0042f65e
    LEA EAX,[ESP + 0x8f0]               ; 0042f65f
    PUSH EAX                            ; 0042f666
    MOV ECX,dword ptr [ESP + 0x90c]     ; 0042f667
    PUSH ECX                            ; 0042f66e
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 0042f66f
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 0042f674
    PUSH EAX                            ; 0042f677
    LEA EAX,[ESP + 0x8e4]               ; 0042f678
    PUSH EAX                            ; 0042f67f
    PUSH EBP                            ; 0042f680
    LEA ESI,[EBX + 0x20]                ; 0042f681
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0042f684
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    FLD float ptr [EAX]                 ; 0042f689
    ADD ESP,0xc                         ; 0042f68b
    FSTP float ptr [ESI]                ; 0042f68e
    MOV EDX,dword ptr [EAX + 0x4]       ; 0042f690
    MOV dword ptr [ESI + 0x4],EDX       ; 0042f693
    FLD float ptr [EAX + 0x8]           ; 0042f696
    LEA EAX,[EBX + 0x30]                ; 0042f699
    MOV EBX,dword ptr [ESP + 0x910]     ; 0042f69c
    FSTP float ptr [ESI + 0x8]          ; 0042f6a3
    CMP EAX,EBX                         ; 0042f6a6
    JZ 0x0042f6ba                       ; 0042f6a8
        ;   XREF to: 0042f6ba (CONDITIONAL_JUMP)  ; LAB_0042f6ba
    MOV EDX,dword ptr [EBX]             ; 0042f6aa
    MOV dword ptr [EAX],EDX             ; 0042f6ac
    MOV EDX,dword ptr [EBX + 0x4]       ; 0042f6ae
    MOV dword ptr [EAX + 0x4],EDX       ; 0042f6b1
    MOV EDX,dword ptr [EBX + 0x8]       ; 0042f6b4
    MOV dword ptr [EAX + 0x8],EDX       ; 0042f6b7
    PUSH EDI                            ; 0042f6ba
        ;   Label: LAB_0042f6ba
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 ; 0042f6bb
        ;   XREF to: 00408c10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0042f6c0
    PUSH 0x0                            ; 0042f6c3
    PUSH EDI                            ; 0042f6c5
    MOV ESI,dword ptr [ESP + 0x914]     ; 0042f6c6
    PUSH ESI                            ; 0042f6cd
    PUSH EBP                            ; 0042f6ce
    CALL core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0 ; 0042f6cf
        ;   XREF to: 0042cdb0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0(CCharacter * this_ptr)
    ADD ESP,0x10                        ; 0042f6d4
    PUSH 0x0                            ; 0042f6d7
        ;   Label: LAB_0042f6d7
    LEA EAX,[ESP + 0x4]                 ; 0042f6d9
    PUSH EAX                            ; 0042f6dd
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0042f6de
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 0042f6e3
    PUSH 0x0                            ; 0042f6e6
    LEA EAX,[ESP + 0x3ac]               ; 0042f6e8
    PUSH EAX                            ; 0042f6ef
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0042f6f0
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 0042f6f5
    JMP 0x0042f43d                      ; 0042f6f8
        ;   XREF to: 0042f43d (UNCONDITIONAL_JUMP)  ; LAB_0042f43d
    PUSH 0x0                            ; 0042f6fd
        ;   Label: LAB_0042f6fd
    LEA EAX,[ESP + 0x3ac]               ; 0042f6ff
    PUSH EAX                            ; 0042f706
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0042f707
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 0042f70c
    PUSH 0x0                            ; 0042f70f
    PUSH EBP                            ; 0042f711
    MOV EBX,0x1                         ; 0042f712
    CALL core_charactr.cpp_CCharacter_FUN_0042d090 ; 0042f717
        ;   XREF to: 0042d090 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042d090(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 0042f71c
    MOV EAX,EBX                         ; 0042f71f
    ADD ESP,0x920                       ; 0042f721
    POP EBP                             ; 0042f727
    POP EDI                             ; 0042f728
    POP ESI                             ; 0042f729
    POP EBX                             ; 0042f72a
    RET                                 ; 0042f72b

