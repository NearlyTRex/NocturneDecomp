; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_stranger_cpp_FUN_00535450(int param_1)
;
; Local Variables:
; undefined        Stack[-0x24]:1  local_24
; undefined        Stack[-0x18]:1  local_18
;
; Referenced Globals:
;   TerminatedCString s_Bip01_head_00595380
;   TerminatedCString s_Bip01_L_Clavicle_0059538b
;   TerminatedCString s_Bip01_R_Clavicle_0059539c
;   TerminatedCString s_Bip01_L_UpperArm_005953ad
;   TerminatedCString s_Bip01_R_UpperArm_005953be
;   TerminatedCString s_Bip01_L_ForeArm_005953cf
;   TerminatedCString s_Bip01_R_ForeArm_005953df
;   TerminatedCString s_Bip01_L_Foot_005953ef
;   TerminatedCString s_Bip01_R_Foot_005953fc
;   TerminatedCString s_Bip01_L_Thigh_00595409
;   TerminatedCString s_Bip01_R_Thigh_00595417
;   TerminatedCString s_Bip01_L_Calf_00595425
;   TerminatedCString s_Bip01_R_Calf_00595432
;   TerminatedCString s_Bip01_L_Hand_0059543f
;   TerminatedCString s_Bip01_R_Hand_0059544c
;   ... and 33 more
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;   core_hero.cpp_FUN_004b48d0
;   core_motion.cpp_CMotionController_getMotionList_FUN_004e1890
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010
;   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;   core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0051b8f0
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0
;   core_stranger.cpp_FUN_005384d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00535450
        ;   Label: core_stranger.cpp_FUN_00535450
    PUSH ESI                            ; 00535451
    PUSH EDI                            ; 00535452
    SUB ESP,0x18                        ; 00535453
    MOV ESI,dword ptr [ESP + 0x28]      ; 00535456
    PUSH ESI                            ; 0053545a
    CALL core_hero.cpp_FUN_004b48d0     ; 0053545b
        ;   XREF to: 004b48d0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004b48d0()
    ADD ESP,0x4                         ; 00535460
    LEA EDI,[ESI + 0x150]               ; 00535463
    PUSH EDI                            ; 00535469
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 0053546a
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0053546f
    PUSH 0x1                            ; 00535472
    PUSH 0x595380                       ; 00535474 | = "Bip01 head"
    PUSH EAX                            ; 00535479
    MOV EBX,EAX                         ; 0053547a
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0053547c
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00535481
    PUSH 0x1                            ; 00535484
    PUSH 0x59538b                       ; 00535486 | = "Bip01 L Clavicle"
    PUSH EBX                            ; 0053548b
    MOV [0x02dc9f50],EAX                ; 0053548c | DAT_02dc9f50
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00535491
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00535496
    PUSH 0x1                            ; 00535499
    PUSH 0x59539c                       ; 0053549b | = "Bip01 R Clavicle"
    PUSH EBX                            ; 005354a0
    MOV [0x02dc9f54],EAX                ; 005354a1 | DAT_02dc9f54
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 005354a6
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005354ab
    PUSH 0x1                            ; 005354ae
    PUSH 0x5953ad                       ; 005354b0 | = "Bip01 L UpperArm"
    PUSH EBX                            ; 005354b5
    MOV [0x02dc9f58],EAX                ; 005354b6 | DAT_02dc9f58
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 005354bb
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005354c0
    PUSH 0x1                            ; 005354c3
    PUSH 0x5953be                       ; 005354c5 | = "Bip01 R UpperArm"
    PUSH EBX                            ; 005354ca
    MOV [0x02dc9f5c],EAX                ; 005354cb | DAT_02dc9f5c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 005354d0
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005354d5
    PUSH 0x1                            ; 005354d8
    PUSH 0x5953cf                       ; 005354da | = "Bip01 L ForeArm"
    PUSH EBX                            ; 005354df
    MOV [0x02dc9f60],EAX                ; 005354e0 | DAT_02dc9f60
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 005354e5
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005354ea
    PUSH 0x1                            ; 005354ed
    PUSH 0x5953df                       ; 005354ef | = "Bip01 R ForeArm"
    PUSH EBX                            ; 005354f4
    MOV [0x02dc9f64],EAX                ; 005354f5 | DAT_02dc9f64
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 005354fa
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005354ff
    PUSH 0x1                            ; 00535502
    PUSH 0x5953ef                       ; 00535504 | = "Bip01 L Foot"
    PUSH EBX                            ; 00535509
    MOV [0x02dc9f68],EAX                ; 0053550a | DAT_02dc9f68
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0053550f
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00535514
    PUSH 0x1                            ; 00535517
    PUSH 0x5953fc                       ; 00535519 | = "Bip01 R Foot"
    PUSH EBX                            ; 0053551e
    MOV [0x02dc9f6c],EAX                ; 0053551f | DAT_02dc9f6c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00535524
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00535529
    MOV [0x02dc9f70],EAX                ; 0053552c | DAT_02dc9f70
    PUSH 0x1                            ; 00535531
    PUSH 0x595409                       ; 00535533 | = "Bip01 L Thigh"
    PUSH EBX                            ; 00535538
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00535539
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0053553e
    PUSH 0x1                            ; 00535541
    PUSH 0x595417                       ; 00535543 | = "Bip01 R Thigh"
    PUSH EBX                            ; 00535548
    MOV [0x02dc9f74],EAX                ; 00535549 | DAT_02dc9f74
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0053554e
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00535553
    PUSH 0x1                            ; 00535556
    PUSH 0x595425                       ; 00535558 | = "Bip01 L Calf"
    PUSH EBX                            ; 0053555d
    MOV [0x02dc9f78],EAX                ; 0053555e | DAT_02dc9f78
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00535563
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00535568
    PUSH 0x1                            ; 0053556b
    PUSH 0x595432                       ; 0053556d | = "Bip01 R Calf"
    PUSH EBX                            ; 00535572
    MOV [0x02dc9f7c],EAX                ; 00535573 | DAT_02dc9f7c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00535578
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0053557d
    PUSH 0x1                            ; 00535580
    PUSH 0x59543f                       ; 00535582 | = "Bip01 L Hand"
    PUSH EBX                            ; 00535587
    MOV [0x02dc9f80],EAX                ; 00535588 | DAT_02dc9f80
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0053558d
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00535592
    PUSH 0x1                            ; 00535595
    PUSH 0x59544c                       ; 00535597 | = "Bip01 R Hand"
    PUSH EBX                            ; 0053559c
    MOV [0x02dc9f84],EAX                ; 0053559d | DAT_02dc9f84
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 005355a2
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005355a7
    PUSH 0x1                            ; 005355aa
    PUSH 0x595459                       ; 005355ac | = "Bip01 Neck"
    PUSH EBX                            ; 005355b1
    MOV [0x02dc9f88],EAX                ; 005355b2 | DAT_02dc9f88
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 005355b7
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005355bc
    PUSH 0x1                            ; 005355bf
    PUSH 0x595464                       ; 005355c1 | = "Bip01 Spine2"
    PUSH EBX                            ; 005355c6
    MOV [0x02dc9f8c],EAX                ; 005355c7 | DAT_02dc9f8c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 005355cc
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005355d1
    PUSH 0x1                            ; 005355d4
    PUSH 0x595471                       ; 005355d6 | = "Bip01 Spine1"
    PUSH EBX                            ; 005355db
    MOV [0x02dc9f90],EAX                ; 005355dc | DAT_02dc9f90
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 005355e1
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005355e6
    PUSH 0x1                            ; 005355e9
    PUSH 0x59547e                       ; 005355eb | = "Bip01 Spine"
    PUSH EBX                            ; 005355f0
    MOV [0x02dc9f94],EAX                ; 005355f1 | DAT_02dc9f94
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 005355f6
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005355fb
    MOV [0x02dc9f98],EAX                ; 005355fe | DAT_02dc9f98
    PUSH 0x1                            ; 00535603
    PUSH 0x59548a                       ; 00535605 | = "Bip01 Pelvis"
    PUSH EBX                            ; 0053560a
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0053560b
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00535610
    PUSH 0x1                            ; 00535613
    MOV [0x02dc9f9c],EAX                ; 00535615 | DAT_02dc9f9c
    MOV EAX,[0x02dc9f84]                ; 0053561a | DAT_02dc9f84
    PUSH 0x595497                       ; 0053561f | = "turnlstart"
    MOV dword ptr [ESI + 0x24a4],EAX    ; 00535624
    MOV EAX,[0x02dc9f88]                ; 0053562a | DAT_02dc9f88
    PUSH EDI                            ; 0053562f
    MOV dword ptr [ESI + 0x24e8],EAX    ; 00535630
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_004e1890 ; 00535636
        ;   XREF to: 004e1890 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_004e1890(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0053563b
    PUSH EAX                            ; 0053563e
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010 ; 0053563f
        ;   XREF to: 004e1010 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 00535644
    PUSH 0x1                            ; 00535647
    PUSH 0x5954a2                       ; 00535649 | = "turnrstart"
    PUSH EDI                            ; 0053564e
    MOV [0x02dc9fa0],EAX                ; 0053564f | DAT_02dc9fa0
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_004e1890 ; 00535654
        ;   XREF to: 004e1890 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_004e1890(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00535659
    PUSH EAX                            ; 0053565c
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010 ; 0053565d
        ;   XREF to: 004e1010 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 00535662
    PUSH 0x1                            ; 00535665
    PUSH 0x5954ad                       ; 00535667 | = "pickup"
    PUSH EDI                            ; 0053566c
    MOV [0x02dc9fa4],EAX                ; 0053566d | DAT_02dc9fa4
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_004e1890 ; 00535672
        ;   XREF to: 004e1890 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_004e1890(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00535677
    PUSH EAX                            ; 0053567a
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010 ; 0053567b
        ;   XREF to: 004e1010 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 00535680
    PUSH 0x41b00000                     ; 00535683
    PUSH EAX                            ; 00535688
    PUSH EDI                            ; 00535689
    CALL core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0051b8f0 ; 0053568a
        ;   XREF to: 0051b8f0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0051b8f0(CDeformableModelInstance * this_ptr, int motion_index, float frame_number)
    ADD ESP,0xc                         ; 0053568f
    MOV EDX,dword ptr [0x02dc9f88]      ; 00535692 | DAT_02dc9f88
    PUSH EDX                            ; 00535698
    LEA EAX,[ESP + 0x10]                ; 00535699
    PUSH EAX                            ; 0053569d
    PUSH EDI                            ; 0053569e
    LEA EBX,[ESI + 0x1fb24]             ; 0053569f
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0 ; 005356a5
        ;   XREF to: 0051d2a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 005356aa
    CMP EBX,EAX                         ; 005356ad
    JZ 0x005356c1                       ; 005356af
        ;   XREF to: 005356c1 (CONDITIONAL_JUMP)  ; LAB_005356c1
    MOV EDX,dword ptr [EAX]             ; 005356b1
    MOV dword ptr [EBX],EDX             ; 005356b3
    MOV EDX,dword ptr [EAX + 0x4]       ; 005356b5
    MOV dword ptr [EBX + 0x4],EDX       ; 005356b8
    MOV EDX,dword ptr [EAX + 0x8]       ; 005356bb
    MOV dword ptr [EBX + 0x8],EDX       ; 005356be
    MOV ECX,dword ptr [0x02dc9f60]      ; 005356c1 | DAT_02dc9f60
        ;   Label: LAB_005356c1
    PUSH ECX                            ; 005356c7
    LEA EAX,[ESP + 0x4]                 ; 005356c8
    PUSH EAX                            ; 005356cc
    LEA EAX,[ESI + 0x150]               ; 005356cd
    PUSH EAX                            ; 005356d3
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0 ; 005356d4
        ;   XREF to: 0051d2a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    LEA EBX,[ESI + 0x1fb30]             ; 005356d9
    ADD ESP,0xc                         ; 005356df
    CMP EBX,EAX                         ; 005356e2
    JZ 0x005356f6                       ; 005356e4
        ;   XREF to: 005356f6 (CONDITIONAL_JUMP)  ; LAB_005356f6
    MOV EDX,dword ptr [EAX]             ; 005356e6
    MOV dword ptr [EBX],EDX             ; 005356e8
    MOV EDX,dword ptr [EAX + 0x4]       ; 005356ea
    MOV dword ptr [EBX + 0x4],EDX       ; 005356ed
    MOV EDX,dword ptr [EAX + 0x8]       ; 005356f0
    MOV dword ptr [EBX + 0x8],EDX       ; 005356f3
    PUSH ESI                            ; 005356f6
        ;   Label: LAB_005356f6
    CALL core_stranger.cpp_FUN_005384d0 ; 005356f7
        ;   XREF to: 005384d0 (UNCONDITIONAL_CALL)  ; undefined core_stranger.cpp_FUN_005384d0()
    ADD ESP,0x4                         ; 005356fc
    PUSH 0x5954b4                       ; 005356ff | = "stranger-hat.kfm"
    LEA EBX,[ESI + 0x1fb40]             ; 00535704
    MOV dword ptr [ESI + 0x1fb3c],0x0   ; 0053570a
    PUSH EBX                            ; 00535714
    MOV dword ptr [ESI + 0x1fccc],0x0   ; 00535715
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 0053571f
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00535724
    PUSH EBX                            ; 00535727
    ADD ESI,0x150                       ; 00535728
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510 ; 0053572e
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510(CKeyFramedModelInstance * this_ptr)
    MOV dword ptr [ESI + 0x1fb84],0x0   ; 00535733
    ADD ESP,0x4                         ; 0053573d
    MOV dword ptr [ESI + 0x1f960],0x0   ; 00535740
    PUSH ESI                            ; 0053574a
    MOV dword ptr [ESI + 0x1f964],0x0   ; 0053574b
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020 ; 00535755
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0053575a
    PUSH 0x1                            ; 0053575d
    PUSH 0x5954c5                       ; 0053575f | = "head01"
    PUSH EAX                            ; 00535764
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 00535765
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0053576a
    MOV [0x02dc9fa8],EAX                ; 0053576d | DAT_02dc9fa8
    ADD ESP,0x18                        ; 00535772
    POP EDI                             ; 00535775
    POP ESI                             ; 00535776
    POP EBX                             ; 00535777
    RET                                 ; 00535778

