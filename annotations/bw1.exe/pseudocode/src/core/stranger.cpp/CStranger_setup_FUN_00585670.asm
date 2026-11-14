; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_CStranger_setup_FUN_00585670(CStranger *this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bip01_head_005f65c1
;   TerminatedCString s_Bip01_L_Clavicle_005f65cc
;   TerminatedCString s_Bip01_R_Clavicle_005f65dd
;   TerminatedCString s_Bip01_L_UpperArm_005f65ee
;   TerminatedCString s_Bip01_R_UpperArm_005f65ff
;   TerminatedCString s_Bip01_L_ForeArm_005f6610
;   TerminatedCString s_Bip01_R_ForeArm_005f6620
;   TerminatedCString s_Bip01_L_Foot_005f6630
;   TerminatedCString s_Bip01_R_Foot_005f663d
;   TerminatedCString s_Bip01_L_Thigh_005f664a
;   TerminatedCString s_Bip01_R_Thigh_005f6658
;   TerminatedCString s_Bip01_L_Calf_005f6666
;   TerminatedCString s_Bip01_R_Calf_005f6673
;   TerminatedCString s_Bip01_L_Hand_005f6680
;   TerminatedCString s_Bip01_R_Hand_005f668d
;   ... and 33 more
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
;   core_hero.cpp_CHero_setup_FUN_004eaa10
;   core_motion.cpp_CMotionController_getMotionList_FUN_00524a00
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_005240c0
;   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780
;   core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_005675f0
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0
;   core_stranger.cpp_CStranger_updateProceduralAnimation_FUN_00588ad0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00585670
        ;   Label: core_stranger.cpp_CStranger_setup_FUN_00585670
    PUSH ESI                            ; 00585671
    PUSH EDI                            ; 00585672
    PUSH EBP                            ; 00585673
    SUB ESP,0x30                        ; 00585674
    MOV EBP,dword ptr [ESP + 0x44]      ; 00585677
    PUSH EBP                            ; 0058567b
    CALL core_hero.cpp_CHero_setup_FUN_004eaa10 ; 0058567c
        ;   XREF to: 004eaa10 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_setup_FUN_004eaa10(CHero * this_ptr)
    ADD ESP,0x4                         ; 00585681
    LEA ESI,[EBP + 0x158]               ; 00585684
    PUSH ESI                            ; 0058568a
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 0058568b
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00585690
    PUSH 0x1                            ; 00585693
    PUSH 0x5f65c1                       ; 00585695 | = "Bip01 head"
    PUSH EAX                            ; 0058569a
    MOV EBX,EAX                         ; 0058569b
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0058569d
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005856a2
    PUSH 0x1                            ; 005856a5
    PUSH 0x5f65cc                       ; 005856a7 | = "Bip01 L Clavicle"
    PUSH EBX                            ; 005856ac
    MOV [0x02c83600],EAX                ; 005856ad | DAT_02c83600
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 005856b2
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005856b7
    PUSH 0x1                            ; 005856ba
    PUSH 0x5f65dd                       ; 005856bc | = "Bip01 R Clavicle"
    PUSH EBX                            ; 005856c1
    MOV [0x02c83604],EAX                ; 005856c2 | DAT_02c83604
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 005856c7
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005856cc
    PUSH 0x1                            ; 005856cf
    PUSH 0x5f65ee                       ; 005856d1 | = "Bip01 L UpperArm"
    PUSH EBX                            ; 005856d6
    MOV [0x02c83608],EAX                ; 005856d7 | DAT_02c83608
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 005856dc
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005856e1
    PUSH 0x1                            ; 005856e4
    PUSH 0x5f65ff                       ; 005856e6 | = "Bip01 R UpperArm"
    PUSH EBX                            ; 005856eb
    MOV [0x02c8360c],EAX                ; 005856ec | DAT_02c8360c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 005856f1
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005856f6
    PUSH 0x1                            ; 005856f9
    PUSH 0x5f6610                       ; 005856fb | = "Bip01 L ForeArm"
    PUSH EBX                            ; 00585700
    MOV [0x02c83610],EAX                ; 00585701 | DAT_02c83610
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00585706
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0058570b
    PUSH 0x1                            ; 0058570e
    PUSH 0x5f6620                       ; 00585710 | = "Bip01 R ForeArm"
    PUSH EBX                            ; 00585715
    MOV [0x02c83614],EAX                ; 00585716 | DAT_02c83614
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0058571b
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00585720
    PUSH 0x1                            ; 00585723
    PUSH 0x5f6630                       ; 00585725 | = "Bip01 L Foot"
    PUSH EBX                            ; 0058572a
    MOV [0x02c83618],EAX                ; 0058572b | DAT_02c83618
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00585730
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00585735
    PUSH 0x1                            ; 00585738
    PUSH 0x5f663d                       ; 0058573a | = "Bip01 R Foot"
    PUSH EBX                            ; 0058573f
    MOV [0x02c8361c],EAX                ; 00585740 | DAT_02c8361c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00585745
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0058574a
    MOV [0x02c83620],EAX                ; 0058574d | DAT_02c83620
    PUSH 0x1                            ; 00585752
    PUSH 0x5f664a                       ; 00585754 | = "Bip01 L Thigh"
    PUSH EBX                            ; 00585759
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0058575a
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0058575f
    PUSH 0x1                            ; 00585762
    PUSH 0x5f6658                       ; 00585764 | = "Bip01 R Thigh"
    PUSH EBX                            ; 00585769
    MOV [0x02c83624],EAX                ; 0058576a | DAT_02c83624
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0058576f
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00585774
    PUSH 0x1                            ; 00585777
    PUSH 0x5f6666                       ; 00585779 | = "Bip01 L Calf"
    PUSH EBX                            ; 0058577e
    MOV [0x02c83628],EAX                ; 0058577f | DAT_02c83628
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00585784
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00585789
    PUSH 0x1                            ; 0058578c
    PUSH 0x5f6673                       ; 0058578e | = "Bip01 R Calf"
    PUSH EBX                            ; 00585793
    MOV [0x02c8362c],EAX                ; 00585794 | DAT_02c8362c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00585799
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0058579e
    PUSH 0x1                            ; 005857a1
    PUSH 0x5f6680                       ; 005857a3 | = "Bip01 L Hand"
    PUSH EBX                            ; 005857a8
    MOV [0x02c83630],EAX                ; 005857a9 | DAT_02c83630
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 005857ae
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005857b3
    PUSH 0x1                            ; 005857b6
    PUSH 0x5f668d                       ; 005857b8 | = "Bip01 R Hand"
    PUSH EBX                            ; 005857bd
    MOV [0x02c83634],EAX                ; 005857be | DAT_02c83634
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 005857c3
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005857c8
    PUSH 0x1                            ; 005857cb
    PUSH 0x5f669a                       ; 005857cd | = "Bip01 Neck"
    PUSH EBX                            ; 005857d2
    MOV [0x02c83638],EAX                ; 005857d3 | DAT_02c83638
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 005857d8
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005857dd
    PUSH 0x1                            ; 005857e0
    PUSH 0x5f66a5                       ; 005857e2 | = "Bip01 Spine2"
    PUSH EBX                            ; 005857e7
    MOV [0x02c8363c],EAX                ; 005857e8 | DAT_02c8363c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 005857ed
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005857f2
    PUSH 0x1                            ; 005857f5
    PUSH 0x5f66b2                       ; 005857f7 | = "Bip01 Spine1"
    PUSH EBX                            ; 005857fc
    MOV [0x02c83640],EAX                ; 005857fd | DAT_02c83640
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00585802
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00585807
    PUSH 0x1                            ; 0058580a
    PUSH 0x5f66bf                       ; 0058580c | = "Bip01 Spine"
    PUSH EBX                            ; 00585811
    MOV [0x02c83644],EAX                ; 00585812 | DAT_02c83644
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00585817
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0058581c
    MOV [0x02c83648],EAX                ; 0058581f | DAT_02c83648
    PUSH 0x1                            ; 00585824
    PUSH 0x5f66cb                       ; 00585826 | = "Bip01 Pelvis"
    PUSH EBX                            ; 0058582b
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0058582c
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00585831
    PUSH 0x1                            ; 00585834
    MOV [0x02c8364c],EAX                ; 00585836 | DAT_02c8364c
    MOV EAX,[0x02c83634]                ; 0058583b | DAT_02c83634
    PUSH 0x5f66d8                       ; 00585840 | = "turnlstart"
    MOV dword ptr [EBP + 0x25a8],EAX    ; 00585845
    MOV EAX,[0x02c83638]                ; 0058584b | DAT_02c83638
    PUSH ESI                            ; 00585850
    MOV dword ptr [EBP + 0x2620],EAX    ; 00585851
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_00524a00 ; 00585857
        ;   XREF to: 00524a00 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_00524a00(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0058585c
    PUSH EAX                            ; 0058585f
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_005240c0 ; 00585860
        ;   XREF to: 005240c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_005240c0(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 00585865
    PUSH 0x1                            ; 00585868
    PUSH 0x5f66e3                       ; 0058586a | = "turnrstart"
    PUSH ESI                            ; 0058586f
    MOV [0x02c83650],EAX                ; 00585870 | DAT_02c83650
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_00524a00 ; 00585875
        ;   XREF to: 00524a00 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_00524a00(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0058587a
    PUSH EAX                            ; 0058587d
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_005240c0 ; 0058587e
        ;   XREF to: 005240c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_005240c0(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 00585883
    PUSH 0x1                            ; 00585886
    PUSH 0x5f66ee                       ; 00585888 | = "pickup"
    PUSH ESI                            ; 0058588d
    MOV [0x02c83654],EAX                ; 0058588e | DAT_02c83654
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_00524a00 ; 00585893
        ;   XREF to: 00524a00 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_00524a00(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00585898
    PUSH EAX                            ; 0058589b
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_005240c0 ; 0058589c
        ;   XREF to: 005240c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_005240c0(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 005858a1
    PUSH 0x41b00000                     ; 005858a4
    PUSH EAX                            ; 005858a9
    PUSH ESI                            ; 005858aa
    CALL core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_005675f0 ; 005858ab
        ;   XREF to: 005675f0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_005675f0(CDeformableModelInstance * this_ptr, int motion_index, float frame_number)
    ADD ESP,0xc                         ; 005858b0
    MOV EDX,dword ptr [0x02c83638]      ; 005858b3 | DAT_02c83638
    PUSH EDX                            ; 005858b9
    LEA EDI,[ESP + 0x4]                 ; 005858ba
    PUSH ESI                            ; 005858be
    LEA ESI,[ESP + 0x2c]                ; 005858bf
    LEA EBX,[EBP + 0x20090]             ; 005858c3
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040 ; 005858c9
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA ESI,[ESP + 0x2c]                ; 005858ce
    ADD ESP,0x8                         ; 005858d2
    MOV EAX,ESP                         ; 005858d5
    MOVSD ES:EDI,ESI                    ; 005858d7
    MOVSD ES:EDI,ESI                    ; 005858d8
    MOVSD ES:EDI,ESI                    ; 005858d9
    CMP EBX,EAX                         ; 005858da
    JZ 0x005858f1                       ; 005858dc
        ;   XREF to: 005858f1 (CONDITIONAL_JUMP)  ; LAB_005858f1
    MOV EAX,dword ptr [ESP]             ; 005858de
    MOV dword ptr [EBX],EAX             ; 005858e1
    MOV EAX,dword ptr [ESP + 0x4]       ; 005858e3
    MOV dword ptr [EBX + 0x4],EAX       ; 005858e7
    MOV EAX,dword ptr [ESP + 0x8]       ; 005858ea
    MOV dword ptr [EBX + 0x8],EAX       ; 005858ee
    MOV ECX,dword ptr [0x02c83610]      ; 005858f1 | DAT_02c83610
        ;   Label: LAB_005858f1
    PUSH ECX                            ; 005858f7
    LEA EAX,[EBP + 0x158]               ; 005858f8
    LEA ESI,[ESP + 0x10]                ; 005858fe
    PUSH EAX                            ; 00585902
    LEA EDI,[ESP + 0x20]                ; 00585903
    LEA EBX,[EBP + 0x2009c]             ; 00585907
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040 ; 0058590d
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA ESI,[ESP + 0x14]                ; 00585912
    ADD ESP,0x8                         ; 00585916
    LEA EAX,[ESP + 0x18]                ; 00585919
    MOVSD ES:EDI,ESI                    ; 0058591d
    MOVSD ES:EDI,ESI                    ; 0058591e
    MOVSD ES:EDI,ESI                    ; 0058591f
    CMP EBX,EAX                         ; 00585920
    JZ 0x00585938                       ; 00585922
        ;   XREF to: 00585938 (CONDITIONAL_JUMP)  ; LAB_00585938
    MOV EAX,dword ptr [ESP + 0x18]      ; 00585924
    MOV dword ptr [EBX],EAX             ; 00585928
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0058592a
    MOV dword ptr [EBX + 0x4],EAX       ; 0058592e
    MOV EAX,dword ptr [ESP + 0x20]      ; 00585931
    MOV dword ptr [EBX + 0x8],EAX       ; 00585935
    PUSH EBP                            ; 00585938
        ;   Label: LAB_00585938
    CALL core_stranger.cpp_CStranger_updateProceduralAnimation_FUN_00588ad0 ; 00585939
        ;   XREF to: 00588ad0 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_updateProceduralAnimation_FUN_00588ad0(CStranger * this_ptr)
    ADD ESP,0x4                         ; 0058593e
    PUSH 0x5f66f5                       ; 00585941 | = "stranger-hat.kfm"
    LEA EBX,[EBP + 0x200ac]             ; 00585946
    MOV dword ptr [EBP + 0x200a8],0x0   ; 0058594c
    PUSH EBX                            ; 00585956
    MOV dword ptr [EBP + 0x20238],0x0   ; 00585957
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 00585961
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00585966
    PUSH EBX                            ; 00585969
    ADD EBP,0x158                       ; 0058596a
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0 ; 00585970
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(CKeyFramedModelInstance * this_ptr)
    MOV dword ptr [EBP + 0x200e8],0x0   ; 00585975
    ADD ESP,0x4                         ; 0058597f
    MOV dword ptr [EBP + 0x1fec4],0x0   ; 00585982
    PUSH EBP                            ; 0058598c
    MOV dword ptr [EBP + 0x1fec8],0x0   ; 0058598d
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0 ; 00585997
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0058599c
    PUSH 0x1                            ; 0058599f
    PUSH 0x5f6706                       ; 005859a1 | DAT_005f6706
    PUSH EAX                            ; 005859a6
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780 ; 005859a7
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 005859ac
    MOV [0x02c83658],EAX                ; 005859af | DAT_02c83658
    ADD ESP,0x30                        ; 005859b4
    POP EBP                             ; 005859b7
    POP EDI                             ; 005859b8
    POP ESI                             ; 005859b9
    POP EBX                             ; 005859ba
    RET                                 ; 005859bb

