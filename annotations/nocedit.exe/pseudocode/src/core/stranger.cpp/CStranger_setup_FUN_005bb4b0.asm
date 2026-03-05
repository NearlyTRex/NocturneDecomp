; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_CStranger_setup_FUN_005bb4b0(CStranger *this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x24]:1  local_24
; undefined1       Stack[-0x18]:1  local_18
;
; Referenced Globals:
;   TerminatedCString s_Bip01_head_0065335a
;   TerminatedCString s_Bip01_L_Clavicle_00653365
;   TerminatedCString s_Bip01_R_Clavicle_00653376
;   TerminatedCString s_Bip01_L_UpperArm_00653387
;   TerminatedCString s_Bip01_R_UpperArm_00653398
;   TerminatedCString s_Bip01_L_ForeArm_006533a9
;   TerminatedCString s_Bip01_R_ForeArm_006533b9
;   TerminatedCString s_Bip01_L_Foot_006533c9
;   TerminatedCString s_Bip01_R_Foot_006533d6
;   TerminatedCString s_Bip01_L_Thigh_006533e3
;   TerminatedCString s_Bip01_R_Thigh_006533f1
;   TerminatedCString s_Bip01_L_Calf_006533ff
;   TerminatedCString s_Bip01_R_Calf_0065340c
;   TerminatedCString s_Bip01_L_Hand_00653419
;   TerminatedCString s_Bip01_R_Hand_00653426
;   ... and 33 more
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;   core_hero.cpp_CHero_setup_FUN_004f2540
;   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
;   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0059e070
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
;   core_stranger.cpp_CStranger_updateProceduralAnimation_FUN_005be520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bb4b0
        ;   Label: core_stranger.cpp_CStranger_setup_FUN_005bb4b0
    PUSH ESI                            ; 005bb4b1
    PUSH EDI                            ; 005bb4b2
    SUB ESP,0x18                        ; 005bb4b3
    MOV ESI,dword ptr [ESP + 0x28]      ; 005bb4b6
    PUSH ESI                            ; 005bb4ba
    CALL core_hero.cpp_CHero_setup_FUN_004f2540 ; 005bb4bb
        ;   XREF to: 004f2540 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_setup_FUN_004f2540(CHero * this_ptr)
    ADD ESP,0x4                         ; 005bb4c0
    LEA EDI,[ESI + 0x158]               ; 005bb4c3
    PUSH EDI                            ; 005bb4c9
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 005bb4ca
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005bb4cf
    PUSH 0x1                            ; 005bb4d2
    PUSH 0x65335a                       ; 005bb4d4 | = "Bip01 head"
    PUSH EAX                            ; 005bb4d9
    MOV EBX,EAX                         ; 005bb4da
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005bb4dc
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005bb4e1
    PUSH 0x1                            ; 005bb4e4
    PUSH 0x653365                       ; 005bb4e6 | = "Bip01 L Clavicle"
    PUSH EBX                            ; 005bb4eb
    MOV [0x03f6bacc],EAX                ; 005bb4ec | INT_03f6bacc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005bb4f1
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005bb4f6
    PUSH 0x1                            ; 005bb4f9
    PUSH 0x653376                       ; 005bb4fb | = "Bip01 R Clavicle"
    PUSH EBX                            ; 005bb500
    MOV [0x03f6bad0],EAX                ; 005bb501 | INT_03f6bad0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005bb506
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005bb50b
    PUSH 0x1                            ; 005bb50e
    PUSH 0x653387                       ; 005bb510 | = "Bip01 L UpperArm"
    PUSH EBX                            ; 005bb515
    MOV [0x03f6bad4],EAX                ; 005bb516 | INT_03f6bad4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005bb51b
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005bb520
    PUSH 0x1                            ; 005bb523
    PUSH 0x653398                       ; 005bb525 | = "Bip01 R UpperArm"
    PUSH EBX                            ; 005bb52a
    MOV [0x03f6bad8],EAX                ; 005bb52b | INT_03f6bad8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005bb530
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005bb535
    PUSH 0x1                            ; 005bb538
    PUSH 0x6533a9                       ; 005bb53a | = "Bip01 L ForeArm"
    PUSH EBX                            ; 005bb53f
    MOV [0x03f6badc],EAX                ; 005bb540 | INT_03f6badc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005bb545
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005bb54a
    PUSH 0x1                            ; 005bb54d
    PUSH 0x6533b9                       ; 005bb54f | = "Bip01 R ForeArm"
    PUSH EBX                            ; 005bb554
    MOV [0x03f6bae0],EAX                ; 005bb555 | INT_03f6bae0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005bb55a
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005bb55f
    PUSH 0x1                            ; 005bb562
    PUSH 0x6533c9                       ; 005bb564 | = "Bip01 L Foot"
    PUSH EBX                            ; 005bb569
    MOV [0x03f6bae4],EAX                ; 005bb56a | INT_03f6bae4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005bb56f
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005bb574
    PUSH 0x1                            ; 005bb577
    PUSH 0x6533d6                       ; 005bb579 | = "Bip01 R Foot"
    PUSH EBX                            ; 005bb57e
    MOV [0x03f6bae8],EAX                ; 005bb57f | INT_03f6bae8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005bb584
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005bb589
    MOV [0x03f6baec],EAX                ; 005bb58c | INT_03f6baec
    PUSH 0x1                            ; 005bb591
    PUSH 0x6533e3                       ; 005bb593 | = "Bip01 L Thigh"
    PUSH EBX                            ; 005bb598
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005bb599
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005bb59e
    PUSH 0x1                            ; 005bb5a1
    PUSH 0x6533f1                       ; 005bb5a3 | = "Bip01 R Thigh"
    PUSH EBX                            ; 005bb5a8
    MOV [0x03f6baf0],EAX                ; 005bb5a9 | INT_03f6baf0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005bb5ae
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005bb5b3
    PUSH 0x1                            ; 005bb5b6
    PUSH 0x6533ff                       ; 005bb5b8 | = "Bip01 L Calf"
    PUSH EBX                            ; 005bb5bd
    MOV [0x03f6baf4],EAX                ; 005bb5be | INT_03f6baf4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005bb5c3
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005bb5c8
    PUSH 0x1                            ; 005bb5cb
    PUSH 0x65340c                       ; 005bb5cd | = "Bip01 R Calf"
    PUSH EBX                            ; 005bb5d2
    MOV [0x03f6baf8],EAX                ; 005bb5d3 | INT_03f6baf8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005bb5d8
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005bb5dd
    PUSH 0x1                            ; 005bb5e0
    PUSH 0x653419                       ; 005bb5e2 | = "Bip01 L Hand"
    PUSH EBX                            ; 005bb5e7
    MOV [0x03f6bafc],EAX                ; 005bb5e8 | INT_03f6bafc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005bb5ed
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005bb5f2
    PUSH 0x1                            ; 005bb5f5
    PUSH 0x653426                       ; 005bb5f7 | = "Bip01 R Hand"
    PUSH EBX                            ; 005bb5fc
    MOV [0x03f6bb00],EAX                ; 005bb5fd | INT_03f6bb00
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005bb602
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005bb607
    PUSH 0x1                            ; 005bb60a
    PUSH 0x653433                       ; 005bb60c | = "Bip01 Neck"
    PUSH EBX                            ; 005bb611
    MOV [0x03f6bb04],EAX                ; 005bb612 | INT_03f6bb04
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005bb617
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005bb61c
    PUSH 0x1                            ; 005bb61f
    PUSH 0x65343e                       ; 005bb621 | = "Bip01 Spine2"
    PUSH EBX                            ; 005bb626
    MOV [0x03f6bb08],EAX                ; 005bb627 | INT_03f6bb08
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005bb62c
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005bb631
    PUSH 0x1                            ; 005bb634
    PUSH 0x65344b                       ; 005bb636 | = "Bip01 Spine1"
    PUSH EBX                            ; 005bb63b
    MOV [0x03f6bb0c],EAX                ; 005bb63c | INT_03f6bb0c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005bb641
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005bb646
    PUSH 0x1                            ; 005bb649
    PUSH 0x653458                       ; 005bb64b | = "Bip01 Spine"
    PUSH EBX                            ; 005bb650
    MOV [0x03f6bb10],EAX                ; 005bb651 | INT_03f6bb10
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005bb656
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005bb65b
    MOV [0x03f6bb14],EAX                ; 005bb65e | INT_03f6bb14
    PUSH 0x1                            ; 005bb663
    PUSH 0x653464                       ; 005bb665 | = "Bip01 Pelvis"
    PUSH EBX                            ; 005bb66a
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005bb66b
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005bb670
    PUSH 0x1                            ; 005bb673
    MOV [0x03f6bb18],EAX                ; 005bb675 | INT_03f6bb18
    MOV EAX,[0x03f6bb00]                ; 005bb67a | INT_03f6bb00
    PUSH 0x653471                       ; 005bb67f | = "turnlstart"
    MOV dword ptr [ESI + 0x24ac],EAX    ; 005bb684
    MOV EAX,[0x03f6bb04]                ; 005bb68a | INT_03f6bb04
    PUSH EDI                            ; 005bb68f
    MOV dword ptr [ESI + 0x24f0],EAX    ; 005bb690
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0 ; 005bb696
        ;   XREF to: 0052dce0 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 005bb69b
    PUSH EAX                            ; 005bb69e
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460 ; 005bb69f
        ;   XREF to: 0052d460 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 005bb6a4
    PUSH 0x1                            ; 005bb6a7
    PUSH 0x65347c                       ; 005bb6a9 | = "turnrstart"
    PUSH EDI                            ; 005bb6ae
    MOV [0x03f6bb1c],EAX                ; 005bb6af | INT_03f6bb1c
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0 ; 005bb6b4
        ;   XREF to: 0052dce0 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 005bb6b9
    PUSH EAX                            ; 005bb6bc
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460 ; 005bb6bd
        ;   XREF to: 0052d460 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 005bb6c2
    PUSH 0x1                            ; 005bb6c5
    PUSH 0x653487                       ; 005bb6c7 | = "pickup"
    PUSH EDI                            ; 005bb6cc
    MOV [0x03f6bb20],EAX                ; 005bb6cd | INT_03f6bb20
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0 ; 005bb6d2
        ;   XREF to: 0052dce0 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 005bb6d7
    PUSH EAX                            ; 005bb6da
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460 ; 005bb6db
        ;   XREF to: 0052d460 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 005bb6e0
    PUSH 0x41b00000                     ; 005bb6e3
    PUSH EAX                            ; 005bb6e8
    PUSH EDI                            ; 005bb6e9
    CALL core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0059e070 ; 005bb6ea
        ;   XREF to: 0059e070 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0059e070(CDeformableModelInstance * this_ptr, int motion_index, float frame_number)
    ADD ESP,0xc                         ; 005bb6ef
    MOV EDX,dword ptr [0x03f6bb04]      ; 005bb6f2 | INT_03f6bb04
    PUSH EDX                            ; 005bb6f8
    LEA EAX,[ESP + 0x10]                ; 005bb6f9
    PUSH EAX                            ; 005bb6fd
    PUSH EDI                            ; 005bb6fe
    LEA EBX,[ESI + 0x1fcbc]             ; 005bb6ff
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 005bb705
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 005bb70a
    CMP EBX,EAX                         ; 005bb70d
    JZ 0x005bb721                       ; 005bb70f
        ;   XREF to: 005bb721 (CONDITIONAL_JUMP)  ; LAB_005bb721
    MOV EDX,dword ptr [EAX]             ; 005bb711
    MOV dword ptr [EBX],EDX             ; 005bb713
    MOV EDX,dword ptr [EAX + 0x4]       ; 005bb715
    MOV dword ptr [EBX + 0x4],EDX       ; 005bb718
    MOV EDX,dword ptr [EAX + 0x8]       ; 005bb71b
    MOV dword ptr [EBX + 0x8],EDX       ; 005bb71e
    MOV ECX,dword ptr [0x03f6badc]      ; 005bb721 | INT_03f6badc
        ;   Label: LAB_005bb721
    PUSH ECX                            ; 005bb727
    LEA EAX,[ESP + 0x4]                 ; 005bb728
    PUSH EAX                            ; 005bb72c
    LEA EAX,[ESI + 0x158]               ; 005bb72d
    PUSH EAX                            ; 005bb733
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 005bb734
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    LEA EBX,[ESI + 0x1fcc8]             ; 005bb739
    ADD ESP,0xc                         ; 005bb73f
    CMP EBX,EAX                         ; 005bb742
    JZ 0x005bb756                       ; 005bb744
        ;   XREF to: 005bb756 (CONDITIONAL_JUMP)  ; LAB_005bb756
    MOV EDX,dword ptr [EAX]             ; 005bb746
    MOV dword ptr [EBX],EDX             ; 005bb748
    MOV EDX,dword ptr [EAX + 0x4]       ; 005bb74a
    MOV dword ptr [EBX + 0x4],EDX       ; 005bb74d
    MOV EDX,dword ptr [EAX + 0x8]       ; 005bb750
    MOV dword ptr [EBX + 0x8],EDX       ; 005bb753
    PUSH ESI                            ; 005bb756
        ;   Label: LAB_005bb756
    CALL core_stranger.cpp_CStranger_updateProceduralAnimation_FUN_005be520 ; 005bb757
        ;   XREF to: 005be520 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_updateProceduralAnimation_FUN_005be520(CStranger * this_ptr)
    ADD ESP,0x4                         ; 005bb75c
    PUSH 0x65348e                       ; 005bb75f | = "stranger-hat.kfm"
    LEA EBX,[ESI + 0x1fcd8]             ; 005bb764
    MOV dword ptr [ESI + 0x1fcd4],0x0   ; 005bb76a
    PUSH EBX                            ; 005bb774
    MOV dword ptr [ESI + 0x1fe64],0x0   ; 005bb775
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 005bb77f
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005bb784
    PUSH EBX                            ; 005bb787
    ADD ESI,0x158                       ; 005bb788
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 005bb78e
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    MOV dword ptr [ESI + 0x1fd14],0x0   ; 005bb793
    ADD ESP,0x4                         ; 005bb79d
    MOV dword ptr [ESI + 0x1faf0],0x0   ; 005bb7a0
    PUSH ESI                            ; 005bb7aa
    MOV dword ptr [ESI + 0x1faf4],0x0   ; 005bb7ab
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 005bb7b5
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005bb7ba
    PUSH 0x1                            ; 005bb7bd
    PUSH 0x65349f                       ; 005bb7bf | = "head01"
    PUSH EAX                            ; 005bb7c4
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 005bb7c5
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 005bb7ca
    MOV [0x03f6bb24],EAX                ; 005bb7cd | INT_03f6bb24
    ADD ESP,0x18                        ; 005bb7d2
    POP EDI                             ; 005bb7d5
    POP ESI                             ; 005bb7d6
    POP EBX                             ; 005bb7d7
    RET                                 ; 005bb7d8

