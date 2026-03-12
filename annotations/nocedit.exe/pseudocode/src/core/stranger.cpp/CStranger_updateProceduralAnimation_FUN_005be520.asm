; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_CStranger_updateProceduralAnimation_FUN_005be520(CStranger *this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; Local Variables:
; float            Stack[-0x1f0c]:4  local_1f0c
; CDeformableModelInstance * Stack[-0x1f08]:4  local_1f08
; float            Stack[-0x1f04]:4  local_1f04
; float            Stack[-0x1ef8]:4  local_1ef8
; float            Stack[-0x1ef4]:4  local_1ef4
; float            Stack[-0x1ef0]:4  local_1ef0
; float            Stack[-0x1ee0]:4  local_1ee0
; float            Stack[-0x1edc]:4  local_1edc
; float            Stack[-0x1ed8]:4  fStack_1ed8
; char             Stack[-0x1ecc]:1  local_1ecc
; float            Stack[-0x1ec4]:4  local_1ec4
; float[1511]      Stack[-0x1bcc]:6044  afStack_1bcc
; CMatrix3x3f      Stack[-0x430]:36  local_430
; CBoundingBox3D   Stack[-0x408]:24  local_408
; CQuaternion4f    Stack[-0x3f0]:16  local_3f0
; CQuaternion4f    Stack[-0x3e0]:16  local_3e0
; CQuaternion4f    Stack[-0x3d0]:16  local_3d0
; CQuaternion4f    Stack[-0x3c0]:16  local_3c0
; CQuaternion4f    Stack[-0x3b0]:16  local_3b0
; CQuaternion4f    Stack[-0x3a0]:16  local_3a0
; CQuaternion4f    Stack[-0x390]:16  local_390
; CQuaternion4f    Stack[-0x380]:16  local_380
; CQuaternion4f    Stack[-0x370]:16  CStack_370
; CQuaternion4f    Stack[-0x360]:16  local_360
; CQuaternion4f    Stack[-0x350]:16  local_350
; CQuaternion4f    Stack[-0x340]:16  local_340
; CQuaternion4f    Stack[-0x330]:16  local_330
; CQuaternion4f    Stack[-0x320]:16  local_320
; CQuaternion4f    Stack[-0x310]:16  local_310
; CQuaternion4f    Stack[-0x300]:16  local_300
; CQuaternion4f    Stack[-0x2f0]:16  local_2f0
; undefined1[16]   Stack[-0x2e0]:16  local_2e0
; float[4]         Stack[-0x2d0]:16  local_2d0
; undefined1[16]   Stack[-0x2c0]:16  local_2c0
; float[3]         Stack[-0x2b0]:12  local_2b0
; CQuaternion4f    Stack[-0x2a4]:16  CStack_2a4
; CQuaternion4f    Stack[-0x290]:16  local_290
; CQuaternion4f    Stack[-0x280]:16  CStack_280
; CQuaternion4f    Stack[-0x270]:16  CStack_270
; CQuaternion4f    Stack[-0x260]:16  local_260
; CQuaternion4f    Stack[-0x250]:16  local_250
; CQuaternion4f    Stack[-0x240]:16  local_240
; CQuaternion4f    Stack[-0x230]:16  local_230
; CQuaternion4f    Stack[-0x220]:16  local_220
; CQuaternion4f    Stack[-0x210]:16  local_210
; CQuaternion4f    Stack[-0x200]:16  local_200
; CQuaternion4f    Stack[-0x1f0]:16  local_1f0
; CQuaternion4f    Stack[-0x1e0]:16  local_1e0
; undefined1[16]   Stack[-0x1d0]:16  local_1d0
; float[4]         Stack[-0x1c0]:16  local_1c0
; CQuaternion4f    Stack[-0x1b0]:16  CStack_1b0
; CQuaternion4f    Stack[-0x1a0]:16  local_1a0
; CVector3f        Stack[-0x190]:12  local_190
; CVector3f        Stack[-0x184]:12  local_184
; float            Stack[-0x178]:4  fStack_178
; float            Stack[-0x174]:4  fStack_174
; float            Stack[-0x170]:4  fStack_170
; CVector3f        Stack[-0x16c]:12  local_16c
; float            Stack[-0x160]:4  local_160
; float            Stack[-0x15c]:4  local_15c
; float            Stack[-0x158]:4  local_158
; CVector3f        Stack[-0x154]:12  local_154
; CVector3f        Stack[-0x148]:12  local_148
; CVector3f        Stack[-0x13c]:12  CStack_13c
; float            Stack[-0x130]:4  local_130
; float            Stack[-0x12c]:4  local_12c
; float            Stack[-0x128]:4  local_128
; CVector3f        Stack[-0x124]:12  CStack_124
; CVector3f        Stack[-0x118]:12  CStack_118
; CVector3f        Stack[-0x10c]:12  local_10c
; float            Stack[-0x100]:4  local_100
; float            Stack[-0xfc]:4  local_fc
; float            Stack[-0xf8]:4  local_f8
; CVector3f        Stack[-0xf4]:12  CStack_f4
; float            Stack[-0xe8]:4  local_e8
; float            Stack[-0xe4]:4  local_e4
; float            Stack[-0xe0]:4  local_e0
; CVector3f        Stack[-0xdc]:12  CStack_dc
; float            Stack[-0xd0]:4  fStack_d0
; float            Stack[-0xcc]:4  fStack_cc
; float            Stack[-0xc8]:4  fStack_c8
; CVector3f        Stack[-0xc4]:12  local_c4
; CVector3f        Stack[-0xb8]:12  local_b8
; CVector3f        Stack[-0xac]:12  local_ac
; CVector3f        Stack[-0xa0]:12  local_a0
; CVector3f        Stack[-0x94]:12  local_94
; CVector3f        Stack[-0x88]:12  local_88
; CVector3f        Stack[-0x7c]:12  local_7c
; CVector3f        Stack[-0x70]:12  local_70
; CVector3f        Stack[-0x64]:12  local_64
; CVector3f        Stack[-0x58]:12  local_58
; CVector3f        Stack[-0x4c]:12  local_4c
; float            Stack[-0x38]:4  local_38
; float            Stack[-0x34]:4  local_34
; float            Stack[-0x30]:4  local_30
; float            Stack[-0x2c]:4  local_2c
; float            Stack[-0x28]:4  local_28
; float            Stack[-0x24]:4  local_24
; float            Stack[-0x20]:4  local_20
; CDeformableModelInstance * Stack[-0x1c]:4  local_1c
; CDeformableModelInstance * Stack[-0x18]:4  local_18
;
; XREF[2]:
;   core_stranger.cpp_CStranger_processFrame_FUN_005bb960 at 005bc34f
;   core_stranger.cpp_CStranger_setup_FUN_005bb4b0 at 005bb757
;
; Referenced Globals:
;   TerminatedCString s_draw_holsters2aimPistols_006537f0
;   float FLOAT_0065380c = 0.1500000
;   double DOUBLE_00653814 = 15
;   double DOUBLE_0065381c = -15
;   double DOUBLE_00653824 = 0.0666666666666667
;   double DOUBLE_0065382c = 10
;   double DOUBLE_00653834 = 0.100000000000000
;   float FLOAT_0065383c = 0.5
;   double DOUBLE_00653844 = 21
;   double DOUBLE_0065384c = -21
;   double DOUBLE_00653854 = 0.0714285714285714
;   double DOUBLE_0065385c = 0.0476190476190476
;   double DOUBLE_00653864 = 24
;   double DOUBLE_0065386c = -24
;   double DOUBLE_00653874 = 0.0416666666666667
;   ... and 18 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
;   core_lever.cpp_CLever_getHandlePosition_FUN_00504dd0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
;   core_motion.cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
;   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
;   core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
;   core_skeleton.cpp_CDeformableModelInstance_blendWithPoseData_FUN_0059f230
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
;   ... and 9 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005be520
        ;   Label: core_stranger.cpp_CStranger_updateProceduralAnimation_FUN_005be520
    PUSH ESI                            ; 005be521
    PUSH EDI                            ; 005be522
    PUSH EBP                            ; 005be523
    MOV EBP,ESP                         ; 005be524
    SUB ESP,0x1f3c                      ; 005be526
    AND ESP,0xfffffff8                  ; 005be52c
    MOV EBX,dword ptr [EBP + 0x14]      ; 005be52f
    PUSH 0x0                            ; 005be532
    LEA EAX,[EBX + 0x158]               ; 005be534
    PUSH EAX                            ; 005be53a
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 005be53b
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x1f40],EAX    ; 005be540
    MOV EDX,0x3e19999a                  ; 005be547
    FLD float ptr [ESP + 0x1f40]        ; 005be54c
    ADD ESP,0x8                         ; 005be553
    MOV ECX,dword ptr [EBX + 0x1fc54]   ; 005be556
    FSTP float ptr [ESP + 0x48]         ; 005be55c
    MOV dword ptr [ESP + 0x7c],EDX      ; 005be560
    CMP ECX,EDX                         ; 005be564
    JL 0x005be854                       ; 005be566
        ;   XREF to: 005be854 (CONDITIONAL_JUMP)  ; LAB_005be854
    FLD float ptr [ESP + 0x7c]          ; 005be56c
        ;   Label: LAB_005be56c
    FLD1                                ; 005be570
    FLD float ptr [EBX + 0x1fc54]       ; 005be572
    FXCH ST2                            ; 005be578
    FSTP double ptr [ESP]               ; 005be57a
    FSUB double ptr [ESP]               ; 005be57d
    FXCH                                ; 005be580
    FSTP double ptr [ESP + 0x30]        ; 005be582
    FCOMP double ptr [ESP + 0x30]       ; 005be586
    FNSTSW AX                           ; 005be58a
    SAHF                                ; 005be58c
    JNC 0x005be5a0                      ; 005be58d
        ;   XREF to: 005be5a0 (CONDITIONAL_JUMP)  ; LAB_005be5a0
    FLD1                                ; 005be58f
    FSUB double ptr [ESP + 0x30]        ; 005be591
    FDIV double ptr [ESP]               ; 005be595
    FMUL float ptr [ESP + 0x48]         ; 005be598
    FSTP float ptr [ESP + 0x48]         ; 005be59c
    LEA ESI,[EBX + 0x158]               ; 005be5a0
        ;   Label: LAB_005be5a0
    PUSH ESI                            ; 005be5a6
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020 ; 005be5a7
        ;   XREF to: 0059e020 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005be5ac
    FLD float ptr [ESP + 0x48]          ; 005be5af
    FLDZ                                ; 005be5b3
    FCOMPP                              ; 005be5b5
    FNSTSW AX                           ; 005be5b7
    SAHF                                ; 005be5b9
    JNC 0x005be602                      ; 005be5ba
        ;   XREF to: 005be602 (CONDITIONAL_JUMP)  ; LAB_005be602
    CMP dword ptr [EBX + 0x1fc84],0x0   ; 005be5bc
    JL 0x005be602                       ; 005be5c3
        ;   XREF to: 005be602 (CONDITIONAL_JUMP)  ; LAB_005be602
    LEA EAX,[ESP + 0x84]                ; 005be5c5
    PUSH EAX                            ; 005be5cc
    PUSH EBX                            ; 005be5cd
    CALL core_stranger.cpp_CStranger_extractTurnPoseData_FUN_005bf720 ; 005be5ce
        ;   XREF to: 005bf720 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_extractTurnPoseData_FUN_005bf720(CStranger * this_ptr, SPoseData * out_pose)
    ADD ESP,0x8                         ; 005be5d3
    XOR EAX,EAX                         ; 005be5d6
    PUSH 0x59ddb0                       ; 005be5d8
    MOV dword ptr [ESP + 0x88],EAX      ; 005be5dd
    PUSH -0x1                           ; 005be5e4
    MOV dword ptr [ESP + 0x94],EAX      ; 005be5e6
    LEA EAX,[ESP + 0x8c]                ; 005be5ed
    PUSH dword ptr [ESP + 0x50]         ; 005be5f4
    PUSH EAX                            ; 005be5f8
    PUSH ESI                            ; 005be5f9
    CALL core_skeleton.cpp_CDeformableModelInstance_blendWithPoseData_FUN_0059f230 ; 005be5fa
        ;   XREF to: 0059f230 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendWithPoseData_FUN_0059f230(CDeformableModelInstance * this_ptr, SPoseData * pose_data, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 005be5ff
    PUSH EBX                            ; 005be602
        ;   Label: LAB_005be602
    CALL core_stranger.cpp_CStranger_makeDrawDecision_FUN_005bfb60 ; 005be603
        ;   XREF to: 005bfb60 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_makeDrawDecision_FUN_005bfb60(CStranger * this_ptr)
    ADD ESP,0x4                         ; 005be608
    LEA EDI,[EBX + 0x158]               ; 005be60b
    PUSH EDI                            ; 005be611
    LEA ESI,[EBX + 0x1fc98]             ; 005be612
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 005be618
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    LEA EDX,[EBX + 0x1fca0]             ; 005be61d
    ADD ESP,0x4                         ; 005be623
    LEA ECX,[EBX + 0x1fc9c]             ; 005be626
    MOV EAX,dword ptr [EAX + 0x24]      ; 005be62c
    CMP EAX,0x15                        ; 005be62f
    JNZ 0x005be89d                      ; 005be632
        ;   XREF to: 005be89d (CONDITIONAL_JUMP)  ; LAB_005be89d
    MOV EAX,dword ptr [ESI]             ; 005be638
    MOV dword ptr [ESP + 0x1df0],EAX    ; 005be63a
    MOV EAX,dword ptr [ECX]             ; 005be641
    MOV dword ptr [ESP + 0x1df4],EAX    ; 005be643
    MOV EAX,dword ptr [EDX]             ; 005be64a
    MOV EDX,dword ptr [0x03f6badc]      ; 005be64c | INT_03f6badc
    PUSH EDX                            ; 005be652
    MOV dword ptr [ESP + 0x1dfc],EAX    ; 005be653
    LEA EAX,[ESP + 0x1dd0]              ; 005be65a
    PUSH EAX                            ; 005be661
    PUSH EDI                            ; 005be662
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 005be663
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 005be668
    LEA EAX,[ESP + 0x1dc0]              ; 005be66b
    FLD float ptr [ESP + 0x1df0]        ; 005be672
    FLD float ptr [ESP + 0x1df4]        ; 005be679
    FLD float ptr [ESP + 0x1df8]        ; 005be680
    PUSH EAX                            ; 005be687
    LEA EAX,[ESP + 0x1ed8]              ; 005be688
    FXCH ST2                            ; 005be68f
    FSUB float ptr [ESP + 0x1dd0]       ; 005be691
    FXCH                                ; 005be698
    FSUB float ptr [ESP + 0x1dd4]       ; 005be69a
    FXCH ST2                            ; 005be6a1
    FSUB float ptr [ESP + 0x1dd8]       ; 005be6a3
    FXCH                                ; 005be6aa
    FSTP float ptr [ESP + 0x1dc4]       ; 005be6ac
    FXCH                                ; 005be6b3
    FSTP float ptr [ESP + 0x1dc8]       ; 005be6b5
    PUSH EAX                            ; 005be6bc
    FSTP float ptr [ESP + 0x1dd0]       ; 005be6bd
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 005be6c4
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 005be6c9
    MOV EAX,dword ptr [EDI + 0x8]       ; 005be6cc
    MOV dword ptr [ESP + 0x50],EAX      ; 005be6cf
    MOV dword ptr [ESP + 0x6c],EAX      ; 005be6d3
    FLD float ptr [ESP + 0x50]          ; 005be6d7
    FST double ptr [ESP + 0x28]         ; 005be6db
    FCOMP double ptr [0x0065387c]       ; 005be6df | DOUBLE_0065387c
    FNSTSW AX                           ; 005be6e5
    SAHF                                ; 005be6e7
    JNC 0x005be86d                      ; 005be6e8
        ;   XREF to: 005be86d (CONDITIONAL_JUMP)  ; LAB_005be86d
    FLD float ptr [ESP + 0x6c]          ; 005be6ee
    FMUL double ptr [0x0065388c]        ; 005be6f2 | DOUBLE_0065388c
    FSTP float ptr [ESP + 0x70]         ; 005be6f8
    PUSH dword ptr [ESP + 0x1ed4]       ; 005be6fc
        ;   Label: LAB_005be6fc
    LEA ESI,[ESP + 0x1c34]              ; 005be703
    LEA EDI,[ESP + 0x1bf4]              ; 005be70a
    CALL core_xform.cpp_quaternionFromAngleX_FUN_005f79b0 ; 005be711
        ;   XREF to: 005f79b0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAngleX_FUN_005f79b0(float angle_radians, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0x1c34]              ; 005be716
    ADD ESP,0x4                         ; 005be71d
    MOVSD ES:EDI,ESI                    ; 005be720
    MOVSD ES:EDI,ESI                    ; 005be721
    MOVSD ES:EDI,ESI                    ; 005be722
    MOVSD ES:EDI,ESI                    ; 005be723
    PUSH 0x59ddb0                       ; 005be724
    MOV ESI,dword ptr [0x03f6bb10]      ; 005be729 | INT_03f6bb10
    PUSH ESI                            ; 005be72f
    LEA EAX,[ESP + 0x1bf8]              ; 005be730
    PUSH dword ptr [ESP + 0x78]         ; 005be737
    PUSH EAX                            ; 005be73b
    LEA EAX,[EBX + 0x158]               ; 005be73c
    PUSH EAX                            ; 005be742
    MOV dword ptr [ESP + 0x1f4c],EAX    ; 005be743
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20 ; 005be74a
        ;   XREF to: 0059ff20 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 005be74f
    LEA ESI,[ESP + 0x1c50]              ; 005be752
    PUSH dword ptr [ESP + 0x1ed8]       ; 005be759
    CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0 ; 005be760
        ;   XREF to: 005f79f0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAngleY_FUN_005f79f0(float angle_radians, CQuaternion4f * quat_out)
    ADD ESP,0x4                         ; 005be765
    PUSH 0x59ddb0                       ; 005be768
    MOV EAX,[0x03f6badc]                ; 005be76d | INT_03f6badc
    PUSH EAX                            ; 005be772
    PUSH dword ptr [ESP + 0x78]         ; 005be773
    LEA EAX,[ESP + 0x1bcc]              ; 005be777
    LEA EDI,[ESP + 0x1bcc]              ; 005be77e
    PUSH EAX                            ; 005be785
    MOV EDX,dword ptr [ESP + 0x1f48]    ; 005be786
    LEA ESI,[ESP + 0x1c60]              ; 005be78d
    PUSH EDX                            ; 005be794
    MOVSD ES:EDI,ESI                    ; 005be795
        ;   Label: LAB_005be795
    MOVSD ES:EDI,ESI                    ; 005be796
    MOVSD ES:EDI,ESI                    ; 005be797
    MOVSD ES:EDI,ESI                    ; 005be798
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20 ; 005be799
        ;   XREF to: 0059ff20 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
        ;   Label: LAB_005be799
    ADD ESP,0x14                        ; 005be79e
    MOV EAX,[0x0067b654]                ; 005be7a1 | g_CGamePtr
        ;   Label: LAB_005be7a1
    CMP dword ptr [EAX + 0x240],0x0     ; 005be7a6 | g_CGameInstance.block_auto_save
    JZ 0x005be83a                       ; 005be7ad
        ;   XREF to: 005be83a (CONDITIONAL_JUMP)  ; LAB_005be83a
    XOR ESI,ESI                         ; 005be7b3
    MOV dword ptr [ESP + 0x1ecc],ESI    ; 005be7b5
    MOV dword ptr [ESP + 0x1ed0],ESI    ; 005be7bc
    MOV dword ptr [ESP + 0x1ec8],ESI    ; 005be7c3
    CMP dword ptr [EBX + 0x1fbd4],0x0   ; 005be7ca
    JZ 0x005be7e9                       ; 005be7d1
        ;   XREF to: 005be7e9 (CONDITIONAL_JUMP)  ; LAB_005be7e9
    CMP dword ptr [EBX + 0x1fc2c],0x0   ; 005be7d3
    JZ 0x005be7e9                       ; 005be7da
        ;   XREF to: 005be7e9 (CONDITIONAL_JUMP)  ; LAB_005be7e9
    MOV EAX,dword ptr [EBX + 0x1fbf0]   ; 005be7dc
    MOV dword ptr [ESP + 0x1ec8],EAX    ; 005be7e2
    PUSH 0x59ddb0                       ; 005be7e9
        ;   Label: LAB_005be7e9
    MOV ESI,dword ptr [0x03f6bacc]      ; 005be7ee | INT_03f6bacc
    PUSH ESI                            ; 005be7f4
    LEA EAX,[ESP + 0x1ed0]              ; 005be7f5
    PUSH 0x3f800000                     ; 005be7fc
    PUSH EAX                            ; 005be801
    LEA ESI,[ESP + 0x1b90]              ; 005be802
    CALL core_xform.cpp_eulerToQuaternion_FUN_005f7b20 ; 005be809
        ;   XREF to: 005f7b20 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_eulerToQuaternion_FUN_005f7b20(CVector3f * euler_angles, CQuaternion4f * quat_out)
    ADD ESP,0x4                         ; 005be80e
    LEA EAX,[ESP + 0x1c7c]              ; 005be811
    LEA EDI,[ESP + 0x1c7c]              ; 005be818
    PUSH EAX                            ; 005be81f
    LEA EAX,[EBX + 0x158]               ; 005be820
    LEA ESI,[ESP + 0x1b90]              ; 005be826
    PUSH EAX                            ; 005be82d
    MOVSD ES:EDI,ESI                    ; 005be82e
    MOVSD ES:EDI,ESI                    ; 005be82f
    MOVSD ES:EDI,ESI                    ; 005be830
    MOVSD ES:EDI,ESI                    ; 005be831
    CALL core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750 ; 005be832
        ;   XREF to: 0059f750 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 005be837
    FLD float ptr [EBX + 0x1fc44]       ; 005be83a
        ;   Label: LAB_005be83a
    FLDZ                                ; 005be840
    FCOMPP                              ; 005be842
    FNSTSW AX                           ; 005be844
    SAHF                                ; 005be846
    JC 0x005bf6a4                       ; 005be847
        ;   XREF to: 005bf6a4 (CONDITIONAL_JUMP)  ; LAB_005bf6a4
    MOV ESP,EBP                         ; 005be84d
    POP EBP                             ; 005be84f
    POP EDI                             ; 005be850
    POP ESI                             ; 005be851
    POP EBX                             ; 005be852
    RET                                 ; 005be853
    FLD float ptr [EBX + 0x1fc54]       ; 005be854
        ;   Label: LAB_005be854
    FDIV float ptr [0x0065380c]         ; 005be85a | FLOAT_0065380c
    FMUL float ptr [ESP + 0x48]         ; 005be860
    FSTP float ptr [ESP + 0x48]         ; 005be864
    JMP 0x005be56c                      ; 005be868
        ;   XREF to: 005be56c (UNCONDITIONAL_JUMP)  ; LAB_005be56c
    FLD double ptr [ESP + 0x28]         ; 005be86d
        ;   Label: LAB_005be86d
    FADD double ptr [0x00653884]        ; 005be871 | DOUBLE_00653884
    FMUL double ptr [0x0065388c]        ; 005be877 | DOUBLE_0065388c
    FLD1                                ; 005be87d
    FSUBRP                              ; 005be87f
    FST float ptr [ESP + 0x70]          ; 005be881
    FLDZ                                ; 005be885
    FCOMPP                              ; 005be887
    FNSTSW AX                           ; 005be889
    SAHF                                ; 005be88b
    JBE 0x005be6fc                      ; 005be88c
        ;   XREF to: 005be6fc (CONDITIONAL_JUMP)  ; LAB_005be6fc
    XOR ECX,ECX                         ; 005be892
    MOV dword ptr [ESP + 0x70],ECX      ; 005be894
    JMP 0x005be6fc                      ; 005be898
        ;   XREF to: 005be6fc (UNCONDITIONAL_JUMP)  ; LAB_005be6fc
    CMP EAX,0x13                        ; 005be89d
        ;   Label: LAB_005be89d
    JZ 0x005beba0                       ; 005be8a0
        ;   XREF to: 005beba0 (CONDITIONAL_JUMP)  ; LAB_005beba0
    CMP EAX,0x16                        ; 005be8a6
    JZ 0x005bed3a                       ; 005be8a9
        ;   XREF to: 005bed3a (CONDITIONAL_JUMP)  ; LAB_005bed3a
    CMP EAX,0x1f                        ; 005be8af
    JNZ 0x005bf094                      ; 005be8b2
        ;   XREF to: 005bf094 (CONDITIONAL_JUMP)  ; LAB_005bf094
    MOV EDI,dword ptr [EBX + 0x1fba8]   ; 005be8b8
    TEST EDI,EDI                        ; 005be8be
    JZ 0x005bf003                       ; 005be8c0
        ;   XREF to: 005bf003 (CONDITIONAL_JUMP)  ; LAB_005bf003
    LEA EAX,[ESP + 0x1ef8]              ; 005be8c6
    PUSH EAX                            ; 005be8cd
    PUSH EDI                            ; 005be8ce
    CALL core_lever.cpp_CLever_getHandlePosition_FUN_00504dd0 ; 005be8cf
        ;   XREF to: 00504dd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_lever.cpp_CLever_getHandlePosition_FUN_00504dd0(CLever * this_ptr, CVector3f * out_position)
    ADD ESP,0x8                         ; 005be8d4
    PUSH EAX                            ; 005be8d7
    LEA EAX,[ESP + 0x1eb4]              ; 005be8d8
    PUSH EAX                            ; 005be8df
    PUSH EBX                            ; 005be8e0
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 005be8e1
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 005be8e6
    CMP ESI,EAX                         ; 005be8e9
    JZ 0x005be8fd                       ; 005be8eb
        ;   XREF to: 005be8fd (CONDITIONAL_JUMP)  ; LAB_005be8fd
    MOV EDX,dword ptr [EAX]             ; 005be8ed
    MOV dword ptr [ESI],EDX             ; 005be8ef
    MOV EDX,dword ptr [EAX + 0x4]       ; 005be8f1
    MOV dword ptr [ESI + 0x4],EDX       ; 005be8f4
    MOV EDX,dword ptr [EAX + 0x8]       ; 005be8f7
    MOV dword ptr [ESI + 0x8],EDX       ; 005be8fa
    MOV EAX,dword ptr [EBX + 0x1fba8]   ; 005be8fd
        ;   Label: LAB_005be8fd
    MOV [0x03f6baa8],EAX                ; 005be903 | PTR_03f6baa8
    LEA ESI,[EBX + 0x1fc98]             ; 005be908
        ;   Label: LAB_005be908
    MOV EAX,dword ptr [ESI]             ; 005be90e
    MOV dword ptr [ESP + 0x1e50],EAX    ; 005be910
    LEA EAX,[ESI + 0x4]                 ; 005be917
    MOV EAX,dword ptr [EAX]             ; 005be91a
    MOV dword ptr [ESP + 0x1e54],EAX    ; 005be91c
    LEA EAX,[ESI + 0x8]                 ; 005be923
    MOV ECX,dword ptr [0x03f6badc]      ; 005be926 | INT_03f6badc
    MOV EAX,dword ptr [EAX]             ; 005be92c
    PUSH ECX                            ; 005be92e
    MOV dword ptr [ESP + 0x1e5c],EAX    ; 005be92f
    LEA EAX,[ESP + 0x1ec0]              ; 005be936
    PUSH EAX                            ; 005be93d
    LEA ESI,[EBX + 0x158]               ; 005be93e
    PUSH ESI                            ; 005be944
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 005be945
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 005be94a
    FLD float ptr [ESP + 0x1e50]        ; 005be94d
    FLD float ptr [ESP + 0x1e54]        ; 005be954
    FLD float ptr [ESP + 0x1e58]        ; 005be95b
    FXCH ST2                            ; 005be962
    FSUB float ptr [ESP + 0x1ebc]       ; 005be964
    FXCH                                ; 005be96b
    FSUB float ptr [ESP + 0x1ec0]       ; 005be96d
    FXCH ST2                            ; 005be974
    FSUB float ptr [ESP + 0x1ec4]       ; 005be976
    FXCH                                ; 005be97d
    FSTP float ptr [ESP + 0x1e20]       ; 005be97f
    MOV EAX,dword ptr [ESP + 0x1e20]    ; 005be986
    FXCH                                ; 005be98d
    FSTP float ptr [ESP + 0x1e24]       ; 005be98f
    MOV dword ptr [ESP + 0x1ea4],EAX    ; 005be996
    MOV EAX,dword ptr [ESP + 0x1e24]    ; 005be99d
    FSTP float ptr [ESP + 0x1e28]       ; 005be9a4
    MOV dword ptr [ESP + 0x1ea8],EAX    ; 005be9ab
    MOV EAX,dword ptr [ESP + 0x1e28]    ; 005be9b2
    MOV dword ptr [ESP + 0x1eac],EAX    ; 005be9b9
    LEA EAX,[ESP + 0x1ea4]              ; 005be9c0
    PUSH EAX                            ; 005be9c7
    LEA EAX,[ESP + 0x1e0c]              ; 005be9c8
    PUSH EAX                            ; 005be9cf
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 005be9d0
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 005be9d5
    MOV EAX,dword ptr [ESI + 0x8]       ; 005be9d8
    MOV dword ptr [ESP + 0x54],EAX      ; 005be9db
    FLD float ptr [ESP + 0x54]          ; 005be9df
    FST double ptr [ESP + 0x18]         ; 005be9e3
    FCOMP double ptr [0x0065382c]       ; 005be9e7 | DOUBLE_0065382c
    FNSTSW AX                           ; 005be9ed
    SAHF                                ; 005be9ef
    JNC 0x005bf048                      ; 005be9f0
        ;   XREF to: 005bf048 (CONDITIONAL_JUMP)  ; LAB_005bf048
    FLD double ptr [ESP + 0x18]         ; 005be9f6
    FMUL double ptr [0x00653834]        ; 005be9fa | DOUBLE_00653834
    FSTP float ptr [ESP + 0x4c]         ; 005bea00
    FLD float ptr [ESP + 0x1e24]        ; 005bea04
        ;   Label: LAB_005bea04
    FMUL ST0                            ; 005bea0b
    FLD float ptr [ESP + 0x1e20]        ; 005bea0d
    FMUL ST0                            ; 005bea14
    FADDP                               ; 005bea16
    FLD float ptr [ESP + 0x1e28]        ; 005bea18
    FMUL ST0                            ; 005bea1f
    FADDP                               ; 005bea21
    FSQRT                               ; 005bea23
    FST float ptr [ESP + 0x1f2c]        ; 005bea25
    FCOMP float ptr [0x00663778]        ; 005bea2c | FLOAT_00663778
    FNSTSW AX                           ; 005bea32
    SAHF                                ; 005bea34
    JNC 0x005beb01                      ; 005bea35
        ;   XREF to: 005beb01 (CONDITIONAL_JUMP)  ; LAB_005beb01
    FLD float ptr [ESP + 0x1f2c]        ; 005bea3b
    FDIV float ptr [0x00663778]         ; 005bea42 | FLOAT_00663778
    CALL crt_math.c_acos_FUN_00600162   ; 005bea48
        ;   XREF to: 00600162 (UNCONDITIONAL_CALL)  ; double crt_math.c_acos_FUN_00600162(double x)
    LEA ESI,[ESP + 0x1c80]              ; 005bea4d
    FSTP float ptr [ESP + 0x1f34]       ; 005bea54
    PUSH dword ptr [ESP + 0x1f34]       ; 005bea5b
    CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0 ; 005bea62
        ;   XREF to: 005f79f0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAngleY_FUN_005f79f0(float angle_radians, CQuaternion4f * quat_out)
    ADD ESP,0x4                         ; 005bea67
    PUSH 0x59ddb0                       ; 005bea6a
    MOV EAX,[0x03f6badc]                ; 005bea6f | INT_03f6badc
    PUSH EAX                            ; 005bea74
    PUSH dword ptr [ESP + 0x54]         ; 005bea75
    LEA EAX,[ESP + 0x1cbc]              ; 005bea79
    LEA EDI,[ESP + 0x1cbc]              ; 005bea80
    PUSH EAX                            ; 005bea87
    LEA EAX,[EBX + 0x158]               ; 005bea88
    LEA ESI,[ESP + 0x1c90]              ; 005bea8e
    PUSH EAX                            ; 005bea95
    MOVSD ES:EDI,ESI                    ; 005bea96
    MOVSD ES:EDI,ESI                    ; 005bea97
    MOVSD ES:EDI,ESI                    ; 005bea98
    MOVSD ES:EDI,ESI                    ; 005bea99
    MOV dword ptr [ESP + 0x1f4c],EAX    ; 005bea9a
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20 ; 005beaa1
        ;   XREF to: 0059ff20 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 005beaa6
    LEA ESI,[ESP + 0x1ca0]              ; 005beaa9
    FLD float ptr [ESP + 0x1f34]        ; 005beab0
    SUB ESP,0x4                         ; 005beab7
    FCHS                                ; 005beaba
    FSTP float ptr [ESP]                ; 005beabc
    CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0 ; 005beabf
        ;   XREF to: 005f79f0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAngleY_FUN_005f79f0(float angle_radians, CQuaternion4f * quat_out)
    ADD ESP,0x4                         ; 005beac4
    PUSH 0x59ddb0                       ; 005beac7
    MOV ECX,dword ptr [0x03f6bae4]      ; 005beacc | INT_03f6bae4
    LEA EDI,[ESP + 0x1d94]              ; 005bead2
    PUSH ECX                            ; 005bead9
    LEA ESI,[ESP + 0x1ca8]              ; 005beada
    LEA EAX,[ESP + 0x1d98]              ; 005beae1
    PUSH dword ptr [ESP + 0x54]         ; 005beae8
    MOVSD ES:EDI,ESI                    ; 005beaec
    MOVSD ES:EDI,ESI                    ; 005beaed
    MOVSD ES:EDI,ESI                    ; 005beaee
    MOVSD ES:EDI,ESI                    ; 005beaef
    PUSH EAX                            ; 005beaf0
    MOV ESI,dword ptr [ESP + 0x1f48]    ; 005beaf1
    PUSH ESI                            ; 005beaf8
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20 ; 005beaf9
        ;   XREF to: 0059ff20 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 005beafe
    PUSH dword ptr [ESP + 0x1e08]       ; 005beb01
        ;   Label: LAB_005beb01
    LEA ESI,[ESP + 0x1d84]              ; 005beb08
    LEA EDI,[ESP + 0x1ba4]              ; 005beb0f
    CALL core_xform.cpp_quaternionFromAngleX_FUN_005f79b0 ; 005beb16
        ;   XREF to: 005f79b0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAngleX_FUN_005f79b0(float angle_radians, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0x1d84]              ; 005beb1b
    ADD ESP,0x4                         ; 005beb22
    MOVSD ES:EDI,ESI                    ; 005beb25
    MOVSD ES:EDI,ESI                    ; 005beb26
    MOVSD ES:EDI,ESI                    ; 005beb27
    MOVSD ES:EDI,ESI                    ; 005beb28
    PUSH 0x59ddb0                       ; 005beb29
    MOV EDI,dword ptr [0x03f6badc]      ; 005beb2e | INT_03f6badc
    PUSH EDI                            ; 005beb34
    LEA EAX,[ESP + 0x1ba8]              ; 005beb35
    PUSH dword ptr [ESP + 0x54]         ; 005beb3c
    PUSH EAX                            ; 005beb40
    LEA EAX,[EBX + 0x158]               ; 005beb41
    PUSH EAX                            ; 005beb47
    MOV dword ptr [ESP + 0x1f4c],EAX    ; 005beb48
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20 ; 005beb4f
        ;   XREF to: 0059ff20 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 005beb54
    LEA ESI,[ESP + 0x1bb0]              ; 005beb57
    PUSH dword ptr [ESP + 0x1e0c]       ; 005beb5e
    CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0 ; 005beb65
        ;   XREF to: 005f79f0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAngleY_FUN_005f79f0(float angle_radians, CQuaternion4f * quat_out)
    ADD ESP,0x4                         ; 005beb6a
    PUSH 0x59ddb0                       ; 005beb6d
    MOV EDX,dword ptr [0x03f6badc]      ; 005beb72 | INT_03f6badc
    PUSH EDX                            ; 005beb78
    LEA EAX,[ESP + 0x1d08]              ; 005beb79
    PUSH dword ptr [ESP + 0x54]         ; 005beb80
    LEA EDI,[ESP + 0x1d0c]              ; 005beb84
    PUSH EAX                            ; 005beb8b
    MOV ECX,dword ptr [ESP + 0x1f48]    ; 005beb8c
    LEA ESI,[ESP + 0x1bc0]              ; 005beb93
    PUSH ECX                            ; 005beb9a
    JMP 0x005be795                      ; 005beb9b
        ;   XREF to: 005be795 (UNCONDITIONAL_JUMP)  ; LAB_005be795
    MOV EAX,dword ptr [ESI]             ; 005beba0
        ;   Label: LAB_005beba0
    MOV dword ptr [ESP + 0x1e68],EAX    ; 005beba2
    MOV EAX,dword ptr [ECX]             ; 005beba9
    MOV dword ptr [ESP + 0x1e6c],EAX    ; 005bebab
    MOV EAX,dword ptr [EDX]             ; 005bebb2
    MOV dword ptr [ESP + 0x1e70],EAX    ; 005bebb4
    MOV EAX,[0x03f6badc]                ; 005bebbb | INT_03f6badc
    PUSH EAX                            ; 005bebc0
    LEA EAX,[ESP + 0x1e9c]              ; 005bebc1
    PUSH EAX                            ; 005bebc8
    PUSH EDI                            ; 005bebc9
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 005bebca
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 005bebcf
    LEA EAX,[ESP + 0x1ee0]              ; 005bebd2
    FLD float ptr [ESP + 0x1e68]        ; 005bebd9
    FLD float ptr [ESP + 0x1e6c]        ; 005bebe0
    FLD float ptr [ESP + 0x1e70]        ; 005bebe7
    PUSH EAX                            ; 005bebee
    LEA EAX,[ESP + 0x1f08]              ; 005bebef
    FXCH ST2                            ; 005bebf6
    FSUB float ptr [ESP + 0x1e9c]       ; 005bebf8
    FXCH                                ; 005bebff
    FSUB float ptr [ESP + 0x1ea0]       ; 005bec01
    FXCH ST2                            ; 005bec08
    FSUB float ptr [ESP + 0x1ea4]       ; 005bec0a
    FXCH                                ; 005bec11
    FSTP float ptr [ESP + 0x1ee4]       ; 005bec13
    FXCH                                ; 005bec1a
    FSTP float ptr [ESP + 0x1ee8]       ; 005bec1c
    PUSH EAX                            ; 005bec23
    FSTP float ptr [ESP + 0x1ef0]       ; 005bec24
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 005bec2b
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 005bec30
    MOV EAX,dword ptr [EDI + 0x8]       ; 005bec33
    MOV dword ptr [ESP + 0x68],EAX      ; 005bec36
    FLD float ptr [ESP + 0x68]          ; 005bec3a
    FST double ptr [ESP + 0x38]         ; 005bec3e
    FCOMP double ptr [0x00653864]       ; 005bec42 | DOUBLE_00653864
    FNSTSW AX                           ; 005bec48
    SAHF                                ; 005bec4a
    JNC 0x005bed0a                      ; 005bec4b
        ;   XREF to: 005bed0a (CONDITIONAL_JUMP)  ; LAB_005bed0a
    FLD double ptr [ESP + 0x38]         ; 005bec51
    FMUL double ptr [0x00653874]        ; 005bec55 | DOUBLE_00653874
    FSTP float ptr [ESP + 0x5c]         ; 005bec5b
    FLD float ptr [ESP + 0x1f04]        ; 005bec5f
        ;   Label: LAB_005bec5f
    LEA ESI,[ESP + 0x1c90]              ; 005bec66
    SUB ESP,0x4                         ; 005bec6d
    FCHS                                ; 005bec70
    FSTP float ptr [ESP]                ; 005bec72
    CALL core_xform.cpp_quaternionFromAngleX_FUN_005f79b0 ; 005bec75
        ;   XREF to: 005f79b0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAngleX_FUN_005f79b0(float angle_radians, CQuaternion4f * quat_out)
    ADD ESP,0x4                         ; 005bec7a
    PUSH 0x59ddb0                       ; 005bec7d
    MOV ECX,dword ptr [0x03f6badc]      ; 005bec82 | INT_03f6badc
    PUSH ECX                            ; 005bec88
    LEA EAX,[ESP + 0x1d28]              ; 005bec89
    PUSH dword ptr [ESP + 0x64]         ; 005bec90
    LEA EDI,[ESP + 0x1d2c]              ; 005bec94
    PUSH EAX                            ; 005bec9b
    LEA EAX,[EBX + 0x158]               ; 005bec9c
    LEA ESI,[ESP + 0x1ca0]              ; 005beca2
    PUSH EAX                            ; 005beca9
    MOVSD ES:EDI,ESI                    ; 005becaa
    MOVSD ES:EDI,ESI                    ; 005becab
    MOVSD ES:EDI,ESI                    ; 005becac
    MOVSD ES:EDI,ESI                    ; 005becad
    MOV dword ptr [ESP + 0x1f4c],EAX    ; 005becae
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20 ; 005becb5
        ;   XREF to: 0059ff20 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 005becba
    LEA ESI,[ESP + 0x1d10]              ; 005becbd
    PUSH dword ptr [ESP + 0x1f08]       ; 005becc4
    LEA EDI,[ESP + 0x1d74]              ; 005beccb
    CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0 ; 005becd2
        ;   XREF to: 005f79f0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAngleY_FUN_005f79f0(float angle_radians, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0x1d14]              ; 005becd7
    ADD ESP,0x4                         ; 005becde
    MOVSD ES:EDI,ESI                    ; 005bece1
    MOVSD ES:EDI,ESI                    ; 005bece2
    MOVSD ES:EDI,ESI                    ; 005bece3
    MOVSD ES:EDI,ESI                    ; 005bece4
    PUSH 0x59ddb0                       ; 005bece5
    MOV EDI,dword ptr [0x03f6badc]      ; 005becea | INT_03f6badc
    PUSH EDI                            ; 005becf0
    LEA EAX,[ESP + 0x1d78]              ; 005becf1
    PUSH dword ptr [ESP + 0x64]         ; 005becf8
    PUSH EAX                            ; 005becfc
    MOV EAX,dword ptr [ESP + 0x1f48]    ; 005becfd
    PUSH EAX                            ; 005bed04
    JMP 0x005be799                      ; 005bed05
        ;   XREF to: 005be799 (UNCONDITIONAL_JUMP)  ; LAB_005be799
    FLD double ptr [ESP + 0x38]         ; 005bed0a
        ;   Label: LAB_005bed0a
    FADD double ptr [0x0065386c]        ; 005bed0e | DOUBLE_0065386c
    FMUL double ptr [0x00653834]        ; 005bed14 | DOUBLE_00653834
    FLD1                                ; 005bed1a
    FSUBRP                              ; 005bed1c
    FST float ptr [ESP + 0x5c]          ; 005bed1e
    FLDZ                                ; 005bed22
    FCOMPP                              ; 005bed24
    FNSTSW AX                           ; 005bed26
    SAHF                                ; 005bed28
    JBE 0x005bec5f                      ; 005bed29
        ;   XREF to: 005bec5f (CONDITIONAL_JUMP)  ; LAB_005bec5f
    XOR EDX,EDX                         ; 005bed2f
    MOV dword ptr [ESP + 0x5c],EDX      ; 005bed31
    JMP 0x005bec5f                      ; 005bed35
        ;   XREF to: 005bec5f (UNCONDITIONAL_JUMP)  ; LAB_005bec5f
    LEA EAX,[EBX + 0x1fbc4]             ; 005bed3a
        ;   Label: LAB_005bed3a
    PUSH EAX                            ; 005bed40
    LEA EAX,[ESP + 0x1b24]              ; 005bed41
    PUSH EAX                            ; 005bed48
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 005bed49
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    MOV AH,byte ptr [0x03f6baac]        ; 005bed4e | BYTE_03f6baac
    ADD ESP,0x8                         ; 005bed54
    TEST AH,0x1                         ; 005bed57
    JZ 0x005befc3                       ; 005bed5a
        ;   XREF to: 005befc3 (CONDITIONAL_JUMP)  ; LAB_005befc3
    MOV ESI,dword ptr [EBX + 0x1fbb4]   ; 005bed60
        ;   Label: LAB_005bed60
    TEST ESI,ESI                        ; 005bed66
    JZ 0x005bee0e                       ; 005bed68
        ;   XREF to: 005bee0e (CONDITIONAL_JUMP)  ; LAB_005bee0e
    LEA EDX,[ESP + 0x1b48]              ; 005bed6e
    PUSH EDX                            ; 005bed75
    MOV EAX,ESI                         ; 005bed76
    MOV ESI,dword ptr [ESI + 0x154]     ; 005bed78
    PUSH EAX                            ; 005bed7e
    CALL dword ptr [ESI + 0x14]         ; 005bed7f
    LEA ESI,[EAX + 0xc]                 ; 005bed82
    FLD float ptr [EAX]                 ; 005bed85
    FADD float ptr [ESI]                ; 005bed87
    ADD ESP,0x8                         ; 005bed89
    FST float ptr [ESP + 0x1e80]        ; 005bed8c
    FLD float ptr [EAX + 0x4]           ; 005bed93
    FADD float ptr [ESI + 0x4]          ; 005bed96
    FXCH                                ; 005bed99
    FLD float ptr [0x0065383c]          ; 005bed9b | FLOAT_0065383c
    FXCH                                ; 005beda1
    FMUL ST1                            ; 005beda3
    FXCH ST2                            ; 005beda5
    FST float ptr [ESP + 0x1e84]        ; 005beda7
    FLD float ptr [EAX + 0x8]           ; 005bedae
    FADD float ptr [ESI + 0x8]          ; 005bedb1
    FXCH                                ; 005bedb4
    FMUL ST2                            ; 005bedb6
    FXCH                                ; 005bedb8
    FST float ptr [ESP + 0x1e88]        ; 005bedba
    FMULP ST2                           ; 005bedc1
    LEA EAX,[ESP + 0x1dd8]              ; 005bedc3
    FXCH ST2                            ; 005bedca
    FSTP float ptr [ESP + 0x1dd8]       ; 005bedcc
    FXCH                                ; 005bedd3
    FSTP float ptr [ESP + 0x1ddc]       ; 005bedd5
    FSTP float ptr [ESP + 0x1de0]       ; 005beddc
    CMP EAX,0x3f6ba9c                   ; 005bede3 | FLOAT_03f6ba9c
    JZ 0x005bee0e                       ; 005bede8
        ;   XREF to: 005bee0e (CONDITIONAL_JUMP)  ; LAB_005bee0e
    MOV EAX,dword ptr [ESP + 0x1dd8]    ; 005bedea
    MOV [0x03f6ba9c],EAX                ; 005bedf1 | FLOAT_03f6ba9c
    MOV EAX,dword ptr [ESP + 0x1ddc]    ; 005bedf6
    MOV [0x03f6baa0],EAX                ; 005bedfd | FLOAT_03f6baa0
    MOV EAX,dword ptr [ESP + 0x1de0]    ; 005bee02
    MOV [0x03f6baa4],EAX                ; 005bee09 | FLOAT_03f6baa4
    PUSH 0x3f6ba9c                      ; 005bee0e | FLOAT_03f6ba9c
        ;   Label: LAB_005bee0e
    LEA EAX,[ESP + 0x1ef0]              ; 005bee13
    PUSH EAX                            ; 005bee1a
    LEA EAX,[ESP + 0x1b28]              ; 005bee1b
    PUSH EAX                            ; 005bee22
    LEA ESI,[EBX + 0x1fbb8]             ; 005bee23
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 005bee29
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    FLD float ptr [ESI]                 ; 005bee2e
    FADD float ptr [EAX]                ; 005bee30
    ADD ESP,0xc                         ; 005bee32
    FSTP float ptr [ESP + 0x1e14]       ; 005bee35
    FLD float ptr [ESI + 0x4]           ; 005bee3c
    FADD float ptr [EAX + 0x4]          ; 005bee3f
    FSTP float ptr [ESP + 0x1e18]       ; 005bee42
    FLD float ptr [ESI + 0x8]           ; 005bee49
    FADD float ptr [EAX + 0x8]          ; 005bee4c
    LEA EAX,[ESP + 0x1e14]              ; 005bee4f
    PUSH EAX                            ; 005bee56
    LEA EAX,[ESP + 0x1e30]              ; 005bee57
    PUSH EAX                            ; 005bee5e
    PUSH EBX                            ; 005bee5f
    FSTP float ptr [ESP + 0x1e28]       ; 005bee60
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 005bee67
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 005bee6c
    MOV EDI,dword ptr [0x03f6badc]      ; 005bee6f | INT_03f6badc
    PUSH EDI                            ; 005bee75
    LEA EAX,[ESP + 0x1e78]              ; 005bee76
    PUSH EAX                            ; 005bee7d
    LEA ESI,[EBX + 0x158]               ; 005bee7e
    PUSH ESI                            ; 005bee84
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 005bee85
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 005bee8a
    LEA EAX,[ESP + 0x1e5c]              ; 005bee8d
    FLD float ptr [ESP + 0x1e2c]        ; 005bee94
    FLD float ptr [ESP + 0x1e30]        ; 005bee9b
    FLD float ptr [ESP + 0x1e34]        ; 005beea2
    PUSH EAX                            ; 005beea9
    LEA EAX,[ESP + 0x1e3c]              ; 005beeaa
    FXCH ST2                            ; 005beeb1
    FSUB float ptr [ESP + 0x1e78]       ; 005beeb3
    FXCH                                ; 005beeba
    FSUB float ptr [ESP + 0x1e7c]       ; 005beebc
    FXCH ST2                            ; 005beec3
    FSUB float ptr [ESP + 0x1e80]       ; 005beec5
    FXCH                                ; 005beecc
    FSTP float ptr [ESP + 0x1e60]       ; 005beece
    FXCH                                ; 005beed5
    FSTP float ptr [ESP + 0x1e64]       ; 005beed7
    PUSH EAX                            ; 005beede
    FSTP float ptr [ESP + 0x1e6c]       ; 005beedf
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 005beee6
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 005beeeb
    MOV EAX,dword ptr [ESI + 0x8]       ; 005beeee
    MOV dword ptr [ESP + 0x40],EAX      ; 005beef1
    FLD float ptr [ESP + 0x40]          ; 005beef5
    FST double ptr [ESP + 0x10]         ; 005beef9
    FCOMP double ptr [0x00653844]       ; 005beefd | DOUBLE_00653844
    FNSTSW AX                           ; 005bef03
    SAHF                                ; 005bef05
    JNC 0x005befd3                      ; 005bef06
        ;   XREF to: 005befd3 (CONDITIONAL_JUMP)  ; LAB_005befd3
    FLD double ptr [ESP + 0x10]         ; 005bef0c
    FMUL double ptr [0x0065385c]        ; 005bef10 | DOUBLE_0065385c
    FSTP float ptr [ESP + 0x78]         ; 005bef16
    LEA ESI,[ESP + 0x1da0]              ; 005bef1a
        ;   Label: LAB_005bef1a
    PUSH dword ptr [ESP + 0x1e38]       ; 005bef21
    CALL core_xform.cpp_quaternionFromAngleX_FUN_005f79b0 ; 005bef28
        ;   XREF to: 005f79b0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAngleX_FUN_005f79b0(float angle_radians, CQuaternion4f * quat_out)
    ADD ESP,0x4                         ; 005bef2d
    PUSH 0x59ddb0                       ; 005bef30
    MOV EDX,dword ptr [0x03f6bb10]      ; 005bef35 | INT_03f6bb10
    PUSH EDX                            ; 005bef3b
    LEA EAX,[ESP + 0x1cd8]              ; 005bef3c
    PUSH dword ptr [ESP + 0x80]         ; 005bef43
    LEA EDI,[ESP + 0x1cdc]              ; 005bef4a
    PUSH EAX                            ; 005bef51
    LEA EAX,[EBX + 0x158]               ; 005bef52
    LEA ESI,[ESP + 0x1db0]              ; 005bef58
    PUSH EAX                            ; 005bef5f
    MOVSD ES:EDI,ESI                    ; 005bef60
    MOVSD ES:EDI,ESI                    ; 005bef61
    MOVSD ES:EDI,ESI                    ; 005bef62
    MOVSD ES:EDI,ESI                    ; 005bef63
    MOV dword ptr [ESP + 0x1f4c],EAX    ; 005bef64
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20 ; 005bef6b
        ;   XREF to: 0059ff20 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 005bef70
    LEA ESI,[ESP + 0x1be0]              ; 005bef73
    PUSH dword ptr [ESP + 0x1e3c]       ; 005bef7a
    LEA EDI,[ESP + 0x1ce4]              ; 005bef81
    CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0 ; 005bef88
        ;   XREF to: 005f79f0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAngleY_FUN_005f79f0(float angle_radians, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0x1be4]              ; 005bef8d
    ADD ESP,0x4                         ; 005bef94
    MOVSD ES:EDI,ESI                    ; 005bef97
    MOVSD ES:EDI,ESI                    ; 005bef98
    MOVSD ES:EDI,ESI                    ; 005bef99
    MOVSD ES:EDI,ESI                    ; 005bef9a
    PUSH 0x59ddb0                       ; 005bef9b
    MOV ESI,dword ptr [0x03f6badc]      ; 005befa0 | INT_03f6badc
    PUSH ESI                            ; 005befa6
    LEA EAX,[ESP + 0x1ce8]              ; 005befa7
    PUSH dword ptr [ESP + 0x80]         ; 005befae
    PUSH EAX                            ; 005befb5
    MOV EDI,dword ptr [ESP + 0x1f48]    ; 005befb6
    PUSH EDI                            ; 005befbd
    JMP 0x005be799                      ; 005befbe
        ;   XREF to: 005be799 (UNCONDITIONAL_JUMP)  ; LAB_005be799
    MOV DL,AH                           ; 005befc3
        ;   Label: LAB_005befc3
    OR DL,0x1                           ; 005befc5
    MOV byte ptr [0x03f6baac],DL        ; 005befc8 | BYTE_03f6baac
    JMP 0x005bed60                      ; 005befce
        ;   XREF to: 005bed60 (UNCONDITIONAL_JUMP)  ; LAB_005bed60
    FLD double ptr [ESP + 0x10]         ; 005befd3
        ;   Label: LAB_005befd3
    FADD double ptr [0x0065384c]        ; 005befd7 | DOUBLE_0065384c
    FMUL double ptr [0x00653854]        ; 005befdd | DOUBLE_00653854
    FLD1                                ; 005befe3
    FSUBRP                              ; 005befe5
    FST float ptr [ESP + 0x78]          ; 005befe7
    FLDZ                                ; 005befeb
    FCOMPP                              ; 005befed
    FNSTSW AX                           ; 005befef
    SAHF                                ; 005beff1
    JBE 0x005bef1a                      ; 005beff2
        ;   XREF to: 005bef1a (CONDITIONAL_JUMP)  ; LAB_005bef1a
    XOR EAX,EAX                         ; 005beff8
    MOV dword ptr [ESP + 0x78],EAX      ; 005beffa
    JMP 0x005bef1a                      ; 005beffe
        ;   XREF to: 005bef1a (UNCONDITIONAL_JUMP)  ; LAB_005bef1a
    LEA EAX,[ESP + 0x1e44]              ; 005bf003
        ;   Label: LAB_005bf003
    PUSH EAX                            ; 005bf00a
    MOV EAX,[0x03f6baa8]                ; 005bf00b | PTR_03f6baa8
    PUSH EAX                            ; 005bf010
    CALL core_lever.cpp_CLever_getHandlePosition_FUN_00504dd0 ; 005bf011
        ;   XREF to: 00504dd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_lever.cpp_CLever_getHandlePosition_FUN_00504dd0(CLever * this_ptr, CVector3f * out_position)
    ADD ESP,0x8                         ; 005bf016
    PUSH EAX                            ; 005bf019
    LEA EAX,[ESP + 0x1e00]              ; 005bf01a
    PUSH EAX                            ; 005bf021
    PUSH EBX                            ; 005bf022
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 005bf023
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 005bf028
    CMP ESI,EAX                         ; 005bf02b
    JZ 0x005be908                       ; 005bf02d
        ;   XREF to: 005be908 (CONDITIONAL_JUMP)  ; LAB_005be908
    MOV EDX,dword ptr [EAX]             ; 005bf033
    MOV dword ptr [ESI],EDX             ; 005bf035
    MOV EDX,dword ptr [EAX + 0x4]       ; 005bf037
    MOV dword ptr [ESI + 0x4],EDX       ; 005bf03a
    MOV EDX,dword ptr [EAX + 0x8]       ; 005bf03d
    MOV dword ptr [ESI + 0x8],EDX       ; 005bf040
    JMP 0x005be908                      ; 005bf043
        ;   XREF to: 005be908 (UNCONDITIONAL_JUMP)  ; LAB_005be908
    FLD double ptr [ESP + 0x18]         ; 005bf048
        ;   Label: LAB_005bf048
    FCOMP double ptr [0x00653814]       ; 005bf04c | DOUBLE_00653814
    FNSTSW AX                           ; 005bf052
    SAHF                                ; 005bf054
    JNC 0x005bf064                      ; 005bf055
        ;   XREF to: 005bf064 (CONDITIONAL_JUMP)  ; LAB_005bf064
    MOV dword ptr [ESP + 0x4c],0x3f800000 ; 005bf057
    JMP 0x005bea04                      ; 005bf05f
        ;   XREF to: 005bea04 (UNCONDITIONAL_JUMP)  ; LAB_005bea04
    FLD double ptr [ESP + 0x18]         ; 005bf064
        ;   Label: LAB_005bf064
    FADD double ptr [0x0065381c]        ; 005bf068 | DOUBLE_0065381c
    FMUL double ptr [0x00653824]        ; 005bf06e | DOUBLE_00653824
    FLD1                                ; 005bf074
    FSUBRP                              ; 005bf076
    FST float ptr [ESP + 0x4c]          ; 005bf078
    FLDZ                                ; 005bf07c
    FCOMPP                              ; 005bf07e
    FNSTSW AX                           ; 005bf080
    SAHF                                ; 005bf082
    JBE 0x005bea04                      ; 005bf083
        ;   XREF to: 005bea04 (CONDITIONAL_JUMP)  ; LAB_005bea04
    XOR ESI,ESI                         ; 005bf089
    MOV dword ptr [ESP + 0x4c],ESI      ; 005bf08b
    JMP 0x005bea04                      ; 005bf08f
        ;   XREF to: 005bea04 (UNCONDITIONAL_JUMP)  ; LAB_005bea04
    CMP EAX,0x17                        ; 005bf094
        ;   Label: LAB_005bf094
    JNZ 0x005bf179                      ; 005bf097
        ;   XREF to: 005bf179 (CONDITIONAL_JUMP)  ; LAB_005bf179
    FLD float ptr [EDI + 0x8]           ; 005bf09d
    FMUL double ptr [0x00653824]        ; 005bf0a0 | DOUBLE_00653824
    FST float ptr [ESP + 0x58]          ; 005bf0a6
    FLD1                                ; 005bf0aa
    FCOMPP                              ; 005bf0ac
    FNSTSW AX                           ; 005bf0ae
    SAHF                                ; 005bf0b0
    JNC 0x005bf0bb                      ; 005bf0b1
        ;   XREF to: 005bf0bb (CONDITIONAL_JUMP)  ; LAB_005bf0bb
    MOV dword ptr [ESP + 0x58],0x3f800000 ; 005bf0b3
    FLD float ptr [EBX + 0x1fcb0]       ; 005bf0bb
        ;   Label: LAB_005bf0bb
    FDIV float ptr [0x00663778]         ; 005bf0c1 | FLOAT_00663778
    FLD1                                ; 005bf0c7
    FPATAN                              ; 005bf0c9
    LEA ESI,[ESP + 0x1b60]              ; 005bf0cb
    FSTP float ptr [ESP + 0x1f18]       ; 005bf0d2
    PUSH dword ptr [ESP + 0x1f18]       ; 005bf0d9
    LEA EDI,[ESP + 0x1c24]              ; 005bf0e0
    CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0 ; 005bf0e7
        ;   XREF to: 005f79f0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAngleY_FUN_005f79f0(float angle_radians, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0x1b64]              ; 005bf0ec
    ADD ESP,0x4                         ; 005bf0f3
    MOVSD ES:EDI,ESI                    ; 005bf0f6
    MOVSD ES:EDI,ESI                    ; 005bf0f7
    MOVSD ES:EDI,ESI                    ; 005bf0f8
    MOVSD ES:EDI,ESI                    ; 005bf0f9
    PUSH 0x59ddb0                       ; 005bf0fa
    MOV EDI,dword ptr [0x03f6badc]      ; 005bf0ff | INT_03f6badc
    PUSH EDI                            ; 005bf105
    LEA EAX,[ESP + 0x1c28]              ; 005bf106
    PUSH dword ptr [ESP + 0x60]         ; 005bf10d
    PUSH EAX                            ; 005bf111
    LEA EAX,[EBX + 0x158]               ; 005bf112
    PUSH EAX                            ; 005bf118
    MOV dword ptr [ESP + 0x1f4c],EAX    ; 005bf119
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20 ; 005bf120
        ;   XREF to: 0059ff20 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 005bf125
    LEA ESI,[ESP + 0x1c40]              ; 005bf128
    FLD float ptr [ESP + 0x1f18]        ; 005bf12f
    SUB ESP,0x4                         ; 005bf136
    FCHS                                ; 005bf139
    FSTP float ptr [ESP]                ; 005bf13b
    CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0 ; 005bf13e
        ;   XREF to: 005f79f0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAngleY_FUN_005f79f0(float angle_radians, CQuaternion4f * quat_out)
    ADD ESP,0x4                         ; 005bf143
    PUSH 0x59ddb0                       ; 005bf146
    MOV EDX,dword ptr [0x03f6bad8]      ; 005bf14b | INT_03f6bad8
    PUSH EDX                            ; 005bf151
    LEA EAX,[ESP + 0x1c28]              ; 005bf152
    PUSH dword ptr [ESP + 0x60]         ; 005bf159
    LEA EDI,[ESP + 0x1c2c]              ; 005bf15d
    PUSH EAX                            ; 005bf164
    MOV ECX,dword ptr [ESP + 0x1f48]    ; 005bf165
    LEA ESI,[ESP + 0x1c50]              ; 005bf16c
    PUSH ECX                            ; 005bf173
    JMP 0x005be795                      ; 005bf174
        ;   XREF to: 005be795 (UNCONDITIONAL_JUMP)  ; LAB_005be795
    CMP EAX,0x18                        ; 005bf179
        ;   Label: LAB_005bf179
    JNZ 0x005bf3b1                      ; 005bf17c
        ;   XREF to: 005bf3b1 (CONDITIONAL_JUMP)  ; LAB_005bf3b1
    MOV EAX,dword ptr [EDI + 0x8]       ; 005bf182
    MOV dword ptr [ESP + 0x64],EAX      ; 005bf185
    FLD float ptr [ESP + 0x64]          ; 005bf189
    FST double ptr [ESP + 0x8]          ; 005bf18d
    FCOMP double ptr [0x00653814]       ; 005bf191 | DOUBLE_00653814
    FNSTSW AX                           ; 005bf197
    SAHF                                ; 005bf199
    JNC 0x005bf398                      ; 005bf19a
        ;   XREF to: 005bf398 (CONDITIONAL_JUMP)  ; LAB_005bf398
    FLD double ptr [ESP + 0x8]          ; 005bf1a0
    FMUL double ptr [0x00653824]        ; 005bf1a4 | DOUBLE_00653824
    FSTP float ptr [ESP + 0x74]         ; 005bf1aa
        ;   Label: LAB_005bf1aa
    FLD float ptr [ESP + 0x74]          ; 005bf1ae
    FLD1                                ; 005bf1b2
    FCOMPP                              ; 005bf1b4
    FNSTSW AX                           ; 005bf1b6
    SAHF                                ; 005bf1b8
    JNC 0x005bf1c3                      ; 005bf1b9
        ;   XREF to: 005bf1c3 (CONDITIONAL_JUMP)  ; LAB_005bf1c3
    MOV dword ptr [ESP + 0x74],0x3f800000 ; 005bf1bb
    FLD float ptr [ESP + 0x74]          ; 005bf1c3
        ;   Label: LAB_005bf1c3
    FLDZ                                ; 005bf1c7
    FCOMPP                              ; 005bf1c9
    FNSTSW AX                           ; 005bf1cb
    SAHF                                ; 005bf1cd
    JBE 0x005bf1d6                      ; 005bf1ce
        ;   XREF to: 005bf1d6 (CONDITIONAL_JUMP)  ; LAB_005bf1d6
    XOR EDX,EDX                         ; 005bf1d0
    MOV dword ptr [ESP + 0x74],EDX      ; 005bf1d2
    MOV ECX,dword ptr [0x03f6badc]      ; 005bf1d6 | INT_03f6badc
        ;   Label: LAB_005bf1d6
    PUSH ECX                            ; 005bf1dc
    LEA EAX,[ESP + 0x1e90]              ; 005bf1dd
    PUSH EAX                            ; 005bf1e4
    LEA EAX,[EBX + 0x158]               ; 005bf1e5
    PUSH EAX                            ; 005bf1eb
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 005bf1ec
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    FLD float ptr [EBX + 0x1fc9c]       ; 005bf1f1
    FADD float ptr [EBX + 0x1fcb4]      ; 005bf1f7
    ADD ESP,0xc                         ; 005bf1fd
    FSUB float ptr [EBX + 0x1fca8]      ; 005bf200
    MOV ESI,dword ptr [EBX + 0x1fba0]   ; 005bf206
    FSTP float ptr [ESP + 0x1f30]       ; 005bf20c
    TEST ESI,ESI                        ; 005bf213
    JZ 0x005bf233                       ; 005bf215
        ;   XREF to: 005bf233 (CONDITIONAL_JUMP)  ; LAB_005bf233
    PUSH ESI                            ; 005bf217
    CALL core_stranger.cpp_getCarriedObjectVerticalOffset_FUN_005bb010 ; 005bf218
        ;   XREF to: 005bb010 (UNCONDITIONAL_CALL)  ; float core_stranger.cpp_getCarriedObjectVerticalOffset_FUN_005bb010(CDemonActor * object)
    MOV dword ptr [ESP + 0x1f3c],EAX    ; 005bf21d
    MOV EAX,dword ptr [ESP + 0x1f3c]    ; 005bf224
    MOV [0x03f6bb64],EAX                ; 005bf22b | INT_03f6bb64
    ADD ESP,0x4                         ; 005bf230
    FLD float ptr [ESP + 0x1f30]        ; 005bf233
        ;   Label: LAB_005bf233
    FSUB float ptr [0x03f6bb64]         ; 005bf23a | INT_03f6bb64
    FLD float ptr [ESP + 0x1e90]        ; 005bf240
    FXCH                                ; 005bf247
    FSTP float ptr [ESP + 0x1f30]       ; 005bf249
    FSUB float ptr [ESP + 0x1f30]       ; 005bf250
    FLD float ptr [0x00663778]          ; 005bf257 | FLOAT_00663778
    FXCH                                ; 005bf25d
    CALL crt_math.c_atan2_FUN_006013b1  ; 005bf25f
        ;   XREF to: 006013b1 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_atan2_FUN_006013b1(float10 y, float10 x)
    SUB ESP,0x4                         ; 005bf264
    LEA ESI,[ESP + 0x1bd4]              ; 005bf267
    FSTP float ptr [ESP]                ; 005bf26e
    CALL core_xform.cpp_quaternionFromAngleX_FUN_005f79b0 ; 005bf271
        ;   XREF to: 005f79b0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAngleX_FUN_005f79b0(float angle_radians, CQuaternion4f * quat_out)
    ADD ESP,0x4                         ; 005bf276
    PUSH 0x59ddb0                       ; 005bf279
    MOV EAX,[0x03f6badc]                ; 005bf27e | INT_03f6badc
    PUSH EAX                            ; 005bf283
    PUSH dword ptr [ESP + 0x7c]         ; 005bf284
    LEA EAX,[ESP + 0x1ccc]              ; 005bf288
    LEA EDI,[ESP + 0x1ccc]              ; 005bf28f
    PUSH EAX                            ; 005bf296
    LEA EAX,[EBX + 0x158]               ; 005bf297
    LEA ESI,[ESP + 0x1be0]              ; 005bf29d
    PUSH EAX                            ; 005bf2a4
    MOVSD ES:EDI,ESI                    ; 005bf2a5
    MOVSD ES:EDI,ESI                    ; 005bf2a6
    MOVSD ES:EDI,ESI                    ; 005bf2a7
    MOVSD ES:EDI,ESI                    ; 005bf2a8
    MOV dword ptr [ESP + 0x1f4c],EAX    ; 005bf2a9
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20 ; 005bf2b0
        ;   XREF to: 0059ff20 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 005bf2b5
    PUSH 0x59ddb0                       ; 005bf2b8
    MOV ECX,dword ptr [0x03f6bad8]      ; 005bf2bd | INT_03f6bad8
    PUSH ECX                            ; 005bf2c3
    LEA EAX,[ESP + 0x1cc8]              ; 005bf2c4
    PUSH dword ptr [ESP + 0x7c]         ; 005bf2cb
    PUSH EAX                            ; 005bf2cf
    MOV ESI,dword ptr [ESP + 0x1f48]    ; 005bf2d0
    PUSH ESI                            ; 005bf2d7
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20 ; 005bf2d8
        ;   XREF to: 0059ff20 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
    FLD float ptr [EBX + 0x1fcb0]       ; 005bf2dd
    FDIV float ptr [0x00663778]         ; 005bf2e3 | FLOAT_00663778
    FLD1                                ; 005bf2e9
    FPATAN                              ; 005bf2eb
    ADD ESP,0x14                        ; 005bf2ed
    LEA ESI,[ESP + 0x1c60]              ; 005bf2f0
    FSTP float ptr [ESP + 0x1f20]       ; 005bf2f7
    PUSH dword ptr [ESP + 0x1f20]       ; 005bf2fe
    LEA EDI,[ESP + 0x1db4]              ; 005bf305
    CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0 ; 005bf30c
        ;   XREF to: 005f79f0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAngleY_FUN_005f79f0(float angle_radians, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0x1c64]              ; 005bf311
    ADD ESP,0x4                         ; 005bf318
    MOVSD ES:EDI,ESI                    ; 005bf31b
    MOVSD ES:EDI,ESI                    ; 005bf31c
    MOVSD ES:EDI,ESI                    ; 005bf31d
    MOVSD ES:EDI,ESI                    ; 005bf31e
    PUSH 0x59ddb0                       ; 005bf31f
    MOV EDI,dword ptr [0x03f6badc]      ; 005bf324 | INT_03f6badc
    PUSH EDI                            ; 005bf32a
    LEA EAX,[ESP + 0x1db8]              ; 005bf32b
    PUSH dword ptr [ESP + 0x7c]         ; 005bf332
    PUSH EAX                            ; 005bf336
    MOV EAX,dword ptr [ESP + 0x1f48]    ; 005bf337
    PUSH EAX                            ; 005bf33e
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20 ; 005bf33f
        ;   XREF to: 0059ff20 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 005bf344
    LEA ESI,[ESP + 0x1b90]              ; 005bf347
    FLD float ptr [ESP + 0x1f20]        ; 005bf34e
    SUB ESP,0x4                         ; 005bf355
    FCHS                                ; 005bf358
    FSTP float ptr [ESP]                ; 005bf35a
    CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0 ; 005bf35d
        ;   XREF to: 005f79f0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAngleY_FUN_005f79f0(float angle_radians, CQuaternion4f * quat_out)
    ADD ESP,0x4                         ; 005bf362
    PUSH 0x59ddb0                       ; 005bf365
    MOV EDX,dword ptr [0x03f6bad8]      ; 005bf36a | INT_03f6bad8
    PUSH EDX                            ; 005bf370
    LEA EAX,[ESP + 0x1db8]              ; 005bf371
    PUSH dword ptr [ESP + 0x7c]         ; 005bf378
    LEA EDI,[ESP + 0x1dbc]              ; 005bf37c
    PUSH EAX                            ; 005bf383
    MOV ECX,dword ptr [ESP + 0x1f48]    ; 005bf384
    LEA ESI,[ESP + 0x1ba0]              ; 005bf38b
    PUSH ECX                            ; 005bf392
    JMP 0x005be795                      ; 005bf393
        ;   XREF to: 005be795 (UNCONDITIONAL_JUMP)  ; LAB_005be795
    FLD double ptr [ESP + 0x8]          ; 005bf398
        ;   Label: LAB_005bf398
    FADD double ptr [0x0065381c]        ; 005bf39c | DOUBLE_0065381c
    FMUL double ptr [0x00653824]        ; 005bf3a2 | DOUBLE_00653824
    FLD1                                ; 005bf3a8
    FSUBRP                              ; 005bf3aa
    JMP 0x005bf1aa                      ; 005bf3ac
        ;   XREF to: 005bf1aa (UNCONDITIONAL_JUMP)  ; LAB_005bf1aa
    CMP EAX,0x19                        ; 005bf3b1
        ;   Label: LAB_005bf3b1
    JNZ 0x005bf4b7                      ; 005bf3b4
        ;   XREF to: 005bf4b7 (CONDITIONAL_JUMP)  ; LAB_005bf4b7
    FLD float ptr [EDI + 0x8]           ; 005bf3ba
    FADD double ptr [0x0065381c]        ; 005bf3bd | DOUBLE_0065381c
    FMUL double ptr [0x00653824]        ; 005bf3c3 | DOUBLE_00653824
    FLD1                                ; 005bf3c9
    FSUBRP                              ; 005bf3cb
    FST float ptr [ESP + 0x44]          ; 005bf3cd
    FLDZ                                ; 005bf3d1
    FCOMPP                              ; 005bf3d3
    FNSTSW AX                           ; 005bf3d5
    SAHF                                ; 005bf3d7
    JBE 0x005bf3e0                      ; 005bf3d8
        ;   XREF to: 005bf3e0 (CONDITIONAL_JUMP)  ; LAB_005bf3e0
    XOR EDI,EDI                         ; 005bf3da
    MOV dword ptr [ESP + 0x44],EDI      ; 005bf3dc
    FLD float ptr [ESP + 0x44]          ; 005bf3e0
        ;   Label: LAB_005bf3e0
    FLD1                                ; 005bf3e4
    FCOMPP                              ; 005bf3e6
    FNSTSW AX                           ; 005bf3e8
    SAHF                                ; 005bf3ea
    JNC 0x005bf3f5                      ; 005bf3eb
        ;   XREF to: 005bf3f5 (CONDITIONAL_JUMP)  ; LAB_005bf3f5
    MOV dword ptr [ESP + 0x44],0x3f800000 ; 005bf3ed
    FLD float ptr [EBX + 0x1fcb0]       ; 005bf3f5
        ;   Label: LAB_005bf3f5
    FDIV float ptr [0x00663778]         ; 005bf3fb | FLOAT_00663778
    FLD1                                ; 005bf401
    FPATAN                              ; 005bf403
    LEA ESI,[ESP + 0x1cf0]              ; 005bf405
    FSTP float ptr [ESP + 0x1f1c]       ; 005bf40c
    PUSH dword ptr [ESP + 0x1f1c]       ; 005bf413
    CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0 ; 005bf41a
        ;   XREF to: 005f79f0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAngleY_FUN_005f79f0(float angle_radians, CQuaternion4f * quat_out)
    ADD ESP,0x4                         ; 005bf41f
    PUSH 0x59ddb0                       ; 005bf422
    MOV EDX,dword ptr [0x03f6badc]      ; 005bf427 | INT_03f6badc
    PUSH EDX                            ; 005bf42d
    LEA EDI,[ESP + 0x1d68]              ; 005bf42e
    LEA EAX,[ESP + 0x1d68]              ; 005bf435
    PUSH dword ptr [ESP + 0x4c]         ; 005bf43c
    LEA ESI,[ESP + 0x1cfc]              ; 005bf440
    PUSH EAX                            ; 005bf447
    LEA EAX,[EBX + 0x158]               ; 005bf448
    MOVSD ES:EDI,ESI                    ; 005bf44e
    MOVSD ES:EDI,ESI                    ; 005bf44f
    MOVSD ES:EDI,ESI                    ; 005bf450
    MOVSD ES:EDI,ESI                    ; 005bf451
    PUSH EAX                            ; 005bf452
    LEA ESI,[ESP + 0x1d44]              ; 005bf453
    MOV dword ptr [ESP + 0x1f4c],EAX    ; 005bf45a
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20 ; 005bf461
        ;   XREF to: 0059ff20 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 005bf466
    LEA EDI,[ESP + 0x1d60]              ; 005bf469
    FLD float ptr [ESP + 0x1f1c]        ; 005bf470
    SUB ESP,0x4                         ; 005bf477
    FCHS                                ; 005bf47a
    FSTP float ptr [ESP]                ; 005bf47c
    CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0 ; 005bf47f
        ;   XREF to: 005f79f0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAngleY_FUN_005f79f0(float angle_radians, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0x1d34]              ; 005bf484
    ADD ESP,0x4                         ; 005bf48b
    MOVSD ES:EDI,ESI                    ; 005bf48e
    MOVSD ES:EDI,ESI                    ; 005bf48f
    MOVSD ES:EDI,ESI                    ; 005bf490
    MOVSD ES:EDI,ESI                    ; 005bf491
    PUSH 0x59ddb0                       ; 005bf492
    MOV ESI,dword ptr [0x03f6bad8]      ; 005bf497 | INT_03f6bad8
    PUSH ESI                            ; 005bf49d
    LEA EAX,[ESP + 0x1d68]              ; 005bf49e
    PUSH dword ptr [ESP + 0x4c]         ; 005bf4a5
    PUSH EAX                            ; 005bf4a9
    MOV EDI,dword ptr [ESP + 0x1f48]    ; 005bf4aa
    PUSH EDI                            ; 005bf4b1
    JMP 0x005be799                      ; 005bf4b2
        ;   XREF to: 005be799 (UNCONDITIONAL_JUMP)  ; LAB_005be799
    CMP EAX,0x1a                        ; 005bf4b7
        ;   Label: LAB_005bf4b7
    JNZ 0x005be7a1                      ; 005bf4ba
        ;   XREF to: 005be7a1 (CONDITIONAL_JUMP)  ; LAB_005be7a1
    MOV EAX,dword ptr [EDI + 0x8]       ; 005bf4c0
    MOV dword ptr [ESP + 0x80],EAX      ; 005bf4c3
    FLD float ptr [ESP + 0x80]          ; 005bf4ca
    FST double ptr [ESP + 0x20]         ; 005bf4d1
    FCOMP double ptr [0x00653814]       ; 005bf4d5 | DOUBLE_00653814
    FNSTSW AX                           ; 005bf4db
    SAHF                                ; 005bf4dd
    JC 0x005bf695                       ; 005bf4de
        ;   XREF to: 005bf695 (CONDITIONAL_JUMP)  ; LAB_005bf695
    FLD double ptr [ESP + 0x20]         ; 005bf4e4
    FADD double ptr [0x0065381c]        ; 005bf4e8 | DOUBLE_0065381c
    FMUL double ptr [0x00653824]        ; 005bf4ee | DOUBLE_00653824
    FLD1                                ; 005bf4f4
    FSUBRP                              ; 005bf4f6
    FSTP float ptr [ESP + 0x60]         ; 005bf4f8
        ;   Label: LAB_005bf4f8
    FLD float ptr [ESP + 0x60]          ; 005bf4fc
    FLD1                                ; 005bf500
    FCOMPP                              ; 005bf502
    FNSTSW AX                           ; 005bf504
    SAHF                                ; 005bf506
    JNC 0x005bf511                      ; 005bf507
        ;   XREF to: 005bf511 (CONDITIONAL_JUMP)  ; LAB_005bf511
    MOV dword ptr [ESP + 0x60],0x3f800000 ; 005bf509
    FLD float ptr [ESP + 0x60]          ; 005bf511
        ;   Label: LAB_005bf511
    FLDZ                                ; 005bf515
    FCOMPP                              ; 005bf517
    FNSTSW AX                           ; 005bf519
    SAHF                                ; 005bf51b
    JBE 0x005bf524                      ; 005bf51c
        ;   XREF to: 005bf524 (CONDITIONAL_JUMP)  ; LAB_005bf524
    XOR ESI,ESI                         ; 005bf51e
    MOV dword ptr [ESP + 0x60],ESI      ; 005bf520
    MOV EDI,dword ptr [0x03f6badc]      ; 005bf524 | INT_03f6badc
        ;   Label: LAB_005bf524
    PUSH EDI                            ; 005bf52a
    LEA EAX,[ESP + 0x1de8]              ; 005bf52b
    PUSH EAX                            ; 005bf532
    LEA EAX,[EBX + 0x158]               ; 005bf533
    PUSH EAX                            ; 005bf539
    MOV dword ptr [ESP + 0x1f44],EAX    ; 005bf53a
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 005bf541
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 005bf546
    FLD float ptr [EBX + 0x1fc9c]       ; 005bf549
    FSUBR float ptr [ESP + 0x1de8]      ; 005bf54f
    FLD float ptr [0x00663778]          ; 005bf556 | FLOAT_00663778
    FXCH                                ; 005bf55c
    FXCH                                ; 005bf55e
    FPATAN                              ; 005bf560
    NOP                                 ; 005bf562
    SUB ESP,0x4                         ; 005bf563
    LEA ESI,[ESP + 0x1c14]              ; 005bf566
    FSTP float ptr [ESP]                ; 005bf56d
    CALL core_xform.cpp_quaternionFromAngleX_FUN_005f79b0 ; 005bf570
        ;   XREF to: 005f79b0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAngleX_FUN_005f79b0(float angle_radians, CQuaternion4f * quat_out)
    ADD ESP,0x4                         ; 005bf575
    PUSH 0x59ddb0                       ; 005bf578
    MOV EDX,dword ptr [0x03f6badc]      ; 005bf57d | INT_03f6badc
    PUSH EDX                            ; 005bf583
    LEA EAX,[ESP + 0x1b78]              ; 005bf584
    PUSH dword ptr [ESP + 0x68]         ; 005bf58b
    LEA EDI,[ESP + 0x1b7c]              ; 005bf58f
    PUSH EAX                            ; 005bf596
    MOV ECX,dword ptr [ESP + 0x1f48]    ; 005bf597
    LEA ESI,[ESP + 0x1c20]              ; 005bf59e
    PUSH ECX                            ; 005bf5a5
    MOVSD ES:EDI,ESI                    ; 005bf5a6
    MOVSD ES:EDI,ESI                    ; 005bf5a7
    MOVSD ES:EDI,ESI                    ; 005bf5a8
    MOVSD ES:EDI,ESI                    ; 005bf5a9
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20 ; 005bf5aa
        ;   XREF to: 0059ff20 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 005bf5af
    PUSH 0x59ddb0                       ; 005bf5b2
    MOV ESI,dword ptr [0x03f6bad8]      ; 005bf5b7 | INT_03f6bad8
    PUSH ESI                            ; 005bf5bd
    LEA EAX,[ESP + 0x1b78]              ; 005bf5be
    PUSH dword ptr [ESP + 0x68]         ; 005bf5c5
    PUSH EAX                            ; 005bf5c9
    MOV EDI,dword ptr [ESP + 0x1f48]    ; 005bf5ca
    PUSH EDI                            ; 005bf5d1
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20 ; 005bf5d2
        ;   XREF to: 0059ff20 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
    FLD float ptr [EBX + 0x1fcb0]       ; 005bf5d7
    FDIV float ptr [0x00663778]         ; 005bf5dd | FLOAT_00663778
    FLD1                                ; 005bf5e3
    FPATAN                              ; 005bf5e5
    ADD ESP,0x14                        ; 005bf5e7
    LEA ESI,[ESP + 0x1d50]              ; 005bf5ea
    FSTP float ptr [ESP + 0x1f24]       ; 005bf5f1
    PUSH dword ptr [ESP + 0x1f24]       ; 005bf5f8
    CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0 ; 005bf5ff
        ;   XREF to: 005f79f0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAngleY_FUN_005f79f0(float angle_radians, CQuaternion4f * quat_out)
    ADD ESP,0x4                         ; 005bf604
    PUSH 0x59ddb0                       ; 005bf607
    MOV EAX,[0x03f6badc]                ; 005bf60c | INT_03f6badc
    PUSH EAX                            ; 005bf611
    PUSH dword ptr [ESP + 0x68]         ; 005bf612
    LEA EAX,[ESP + 0x1d4c]              ; 005bf616
    LEA EDI,[ESP + 0x1d4c]              ; 005bf61d
    PUSH EAX                            ; 005bf624
    MOV EDX,dword ptr [ESP + 0x1f48]    ; 005bf625
    LEA ESI,[ESP + 0x1d60]              ; 005bf62c
    PUSH EDX                            ; 005bf633
    MOVSD ES:EDI,ESI                    ; 005bf634
    MOVSD ES:EDI,ESI                    ; 005bf635
    MOVSD ES:EDI,ESI                    ; 005bf636
    MOVSD ES:EDI,ESI                    ; 005bf637
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20 ; 005bf638
        ;   XREF to: 0059ff20 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 005bf63d
    LEA ESI,[ESP + 0x1c00]              ; 005bf640
    FLD float ptr [ESP + 0x1f24]        ; 005bf647
    SUB ESP,0x4                         ; 005bf64e
    FCHS                                ; 005bf651
    FSTP float ptr [ESP]                ; 005bf653
    CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0 ; 005bf656
        ;   XREF to: 005f79f0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAngleY_FUN_005f79f0(float angle_radians, CQuaternion4f * quat_out)
    ADD ESP,0x4                         ; 005bf65b
    PUSH 0x59ddb0                       ; 005bf65e
    MOV ECX,dword ptr [0x03f6bad8]      ; 005bf663 | INT_03f6bad8
    LEA EDI,[ESP + 0x1d44]              ; 005bf669
    PUSH ECX                            ; 005bf670
    LEA ESI,[ESP + 0x1c08]              ; 005bf671
    LEA EAX,[ESP + 0x1d48]              ; 005bf678
    PUSH dword ptr [ESP + 0x68]         ; 005bf67f
    MOVSD ES:EDI,ESI                    ; 005bf683
    MOVSD ES:EDI,ESI                    ; 005bf684
    MOVSD ES:EDI,ESI                    ; 005bf685
    MOVSD ES:EDI,ESI                    ; 005bf686
    PUSH EAX                            ; 005bf687
    MOV ESI,dword ptr [ESP + 0x1f48]    ; 005bf688
    PUSH ESI                            ; 005bf68f
    JMP 0x005be799                      ; 005bf690
        ;   XREF to: 005be799 (UNCONDITIONAL_JUMP)  ; LAB_005be799
    FLD double ptr [ESP + 0x20]         ; 005bf695
        ;   Label: LAB_005bf695
    FMUL double ptr [0x00653824]        ; 005bf699 | DOUBLE_00653824
    JMP 0x005bf4f8                      ; 005bf69f
        ;   XREF to: 005bf4f8 (UNCONDITIONAL_JUMP)  ; LAB_005bf4f8
    PUSH 0x1                            ; 005bf6a4
        ;   Label: LAB_005bf6a4
    PUSH 0x6537f0                       ; 005bf6a6 | = "draw_holsters2aimPistols"
    LEA ESI,[EBX + 0x158]               ; 005bf6ab
    PUSH ESI                            ; 005bf6b1
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 005bf6b2
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005bf6b7
    PUSH EAX                            ; 005bf6ba
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460 ; 005bf6bb
        ;   XREF to: 0052d460 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 005bf6c0
    PUSH 0x3f800000                     ; 005bf6c3
    PUSH EAX                            ; 005bf6c8
    PUSH ESI                            ; 005bf6c9
    MOV EDI,EAX                         ; 005bf6ca
    CALL core_motion.cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0 ; 005bf6cc
        ;   XREF to: 0052e3a0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0(CMotionController * this_ptr, int motion_index, float marker_position)
    MOV dword ptr [ESP + 0x1f44],EAX    ; 005bf6d1
    FLD float ptr [ESP + 0x1f44]        ; 005bf6d8
    ADD ESP,0xc                         ; 005bf6df
    PUSH 0x59ddb0                       ; 005bf6e2
    MOV EAX,[0x03f6bb0c]                ; 005bf6e7 | INT_03f6bb0c
    PUSH EAX                            ; 005bf6ec
    PUSH dword ptr [EBX + 0x1fc44]      ; 005bf6ed
    FSTP float ptr [ESP + 0x1f34]       ; 005bf6f3
    PUSH dword ptr [ESP + 0x1f34]       ; 005bf6fa
    PUSH EDI                            ; 005bf701
    PUSH ESI                            ; 005bf702
    CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50 ; 005bf703
        ;   XREF to: 0059eb50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50(CDeformableModelInstance * this_ptr, int target_motion_index, float target_frame_number, float blend_weight, ...)
    ADD ESP,0x18                        ; 005bf708
    MOV ESP,EBP                         ; 005bf70b
    POP EBP                             ; 005bf70d
    POP EDI                             ; 005bf70e
    POP ESI                             ; 005bf70f
    POP EBX                             ; 005bf710
    RET                                 ; 005bf711

