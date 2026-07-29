; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_mimic_cpp_FUN_004d4650(CEnemy *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_core_mimic_cpp_00589245
;   TerminatedCString s_CMimic_setup_can_t_use_m_00589257
;   TerminatedCString s_stranger_dfm_00589288
;   TerminatedCString s_Bip01_head_00589295
;   TerminatedCString s_Bip01_L_Clavicle_005892a0
;   TerminatedCString s_Bip01_R_Clavicle_005892b1
;   TerminatedCString s_Bip01_L_UpperArm_005892c2
;   TerminatedCString s_Bip01_R_UpperArm_005892d3
;   TerminatedCString s_Bip01_L_ForeArm_005892e4
;   TerminatedCString s_Bip01_R_ForeArm_005892f4
;   TerminatedCString s_Bip01_L_Foot_00589304
;   TerminatedCString s_Bip01_R_Foot_00589311
;   TerminatedCString s_Bip01_L_Thigh_0058931e
;   TerminatedCString s_Bip01_R_Thigh_0058932c
;   TerminatedCString s_Bip01_L_Calf_0058933a
;   ... and 31 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_createActorByName_FUN_0040d540
;   core_cloth.cpp_CCloth_load_FUN_00435240
;   core_cloth.cpp_CCloth_setup_FUN_004359e0
;   core_enemy.cpp_CEnemy_setup_FUN_004796b0
;   core_main.c_FUN_004c8440
;   core_morph.cpp_CMorph_getReady_FUN_004e03c0
;   core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004e0170
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0
;   core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d4650
        ;   Label: core_mimic.cpp_FUN_004d4650
    PUSH ESI                            ; 004d4651
    PUSH EDI                            ; 004d4652
    PUSH EBP                            ; 004d4653
    SUB ESP,0x18                        ; 004d4654
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004d4657
    MOV EAX,[0x005bdee0]                ; 004d465b | DAT_005bdee0
    CMP dword ptr [EAX],0x0             ; 004d4660 | DAT_01cea280
    JNZ 0x004d49ba                      ; 004d4663
        ;   XREF to: 004d49ba (CONDITIONAL_JUMP)  ; LAB_004d49ba
    MOV EAX,[0x01cae0e8]                ; 004d4669 | DAT_01cae0e8
        ;   Label: LAB_004d4669
    SHL EAX,0x2                         ; 004d466e
    MOV EDI,dword ptr [EAX + 0x1cae0d8] ; 004d4671
    LEA EDX,[EBX + 0x150]               ; 004d4677
    TEST EDI,EDI                        ; 004d467d
    JZ 0x004d49e2                       ; 004d467f
        ;   XREF to: 004d49e2 (CONDITIONAL_JUMP)  ; LAB_004d49e2
    LEA EAX,[EDI + 0x23b0]              ; 004d4685
    PUSH EAX                            ; 004d468b
    PUSH EDX                            ; 004d468c
        ;   Label: LAB_004d468c
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 004d468d
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 004d4692
    LEA EDI,[EBX + 0x150]               ; 004d4695
    PUSH EDI                            ; 004d469b
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0 ; 004d469c
        ;   XREF to: 0051dcd0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004d46a1
    PUSH EDI                            ; 004d46a4
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 004d46a5
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004d46aa
    PUSH 0x1                            ; 004d46ad
    PUSH 0x589295                       ; 004d46af | = "Bip01 head"
    PUSH EAX                            ; 004d46b4
    MOV ESI,EAX                         ; 004d46b5
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004d46b7
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d46bc
    PUSH 0x1                            ; 004d46bf
    PUSH 0x5892a0                       ; 004d46c1 | = "Bip01 L Clavicle"
    PUSH ESI                            ; 004d46c6
    MOV [0x01cc9094],EAX                ; 004d46c7 | DAT_01cc9094
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004d46cc
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d46d1
    PUSH 0x1                            ; 004d46d4
    PUSH 0x5892b1                       ; 004d46d6 | = "Bip01 R Clavicle"
    PUSH ESI                            ; 004d46db
    MOV [0x01cc9098],EAX                ; 004d46dc | DAT_01cc9098
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004d46e1
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d46e6
    PUSH 0x1                            ; 004d46e9
    PUSH 0x5892c2                       ; 004d46eb | = "Bip01 L UpperArm"
    PUSH ESI                            ; 004d46f0
    MOV [0x01cc909c],EAX                ; 004d46f1 | DAT_01cc909c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004d46f6
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d46fb
    PUSH 0x1                            ; 004d46fe
    PUSH 0x5892d3                       ; 004d4700 | = "Bip01 R UpperArm"
    PUSH ESI                            ; 004d4705
    MOV [0x01cc90a0],EAX                ; 004d4706 | DAT_01cc90a0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004d470b
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d4710
    PUSH 0x1                            ; 004d4713
    PUSH 0x5892e4                       ; 004d4715 | = "Bip01 L ForeArm"
    PUSH ESI                            ; 004d471a
    MOV [0x01cc90a4],EAX                ; 004d471b | DAT_01cc90a4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004d4720
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d4725
    PUSH 0x1                            ; 004d4728
    PUSH 0x5892f4                       ; 004d472a | = "Bip01 R ForeArm"
    PUSH ESI                            ; 004d472f
    MOV [0x01cc90a8],EAX                ; 004d4730 | DAT_01cc90a8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004d4735
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d473a
    PUSH 0x1                            ; 004d473d
    PUSH 0x589304                       ; 004d473f | = "Bip01 L Foot"
    PUSH ESI                            ; 004d4744
    MOV [0x01cc90ac],EAX                ; 004d4745 | DAT_01cc90ac
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004d474a
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d474f
    PUSH 0x1                            ; 004d4752
    PUSH 0x589311                       ; 004d4754 | = "Bip01 R Foot"
    PUSH ESI                            ; 004d4759
    MOV [0x01cc90b0],EAX                ; 004d475a | DAT_01cc90b0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004d475f
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d4764
    MOV [0x01cc90b4],EAX                ; 004d4767 | DAT_01cc90b4
    PUSH 0x1                            ; 004d476c
    PUSH 0x58931e                       ; 004d476e | = "Bip01 L Thigh"
    PUSH ESI                            ; 004d4773
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004d4774
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d4779
    PUSH 0x1                            ; 004d477c
    PUSH 0x58932c                       ; 004d477e | = "Bip01 R Thigh"
    PUSH ESI                            ; 004d4783
    MOV [0x01cc90b8],EAX                ; 004d4784 | DAT_01cc90b8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004d4789
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d478e
    PUSH 0x1                            ; 004d4791
    PUSH 0x58933a                       ; 004d4793 | = "Bip01 L Calf"
    PUSH ESI                            ; 004d4798
    MOV [0x01cc90bc],EAX                ; 004d4799 | DAT_01cc90bc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004d479e
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d47a3
    PUSH 0x1                            ; 004d47a6
    PUSH 0x589347                       ; 004d47a8 | = "Bip01 R Calf"
    PUSH ESI                            ; 004d47ad
    MOV [0x01cc90c0],EAX                ; 004d47ae | DAT_01cc90c0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004d47b3
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d47b8
    PUSH 0x1                            ; 004d47bb
    PUSH 0x589354                       ; 004d47bd | = "Bip01 L Hand"
    PUSH ESI                            ; 004d47c2
    MOV [0x01cc90c4],EAX                ; 004d47c3 | DAT_01cc90c4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004d47c8
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d47cd
    PUSH 0x1                            ; 004d47d0
    PUSH 0x589361                       ; 004d47d2 | = "Bip01 R Hand"
    PUSH ESI                            ; 004d47d7
    MOV [0x01cc90d4],EAX                ; 004d47d8 | DAT_01cc90d4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004d47dd
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d47e2
    PUSH 0x1                            ; 004d47e5
    PUSH 0x58936e                       ; 004d47e7 | = "Bip01 Spine2"
    PUSH ESI                            ; 004d47ec
    MOV [0x01cc90d8],EAX                ; 004d47ed | DAT_01cc90d8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004d47f2
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d47f7
    PUSH 0x1                            ; 004d47fa
    PUSH 0x58937b                       ; 004d47fc | = "Bip01 Spine"
    PUSH ESI                            ; 004d4801
    MOV [0x01cc90dc],EAX                ; 004d4802 | DAT_01cc90dc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004d4807
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d480c
    PUSH EBX                            ; 004d480f
    MOV [0x01cc90e0],EAX                ; 004d4810 | DAT_01cc90e0
    CALL core_enemy.cpp_CEnemy_setup_FUN_004796b0 ; 004d4815
        ;   XREF to: 004796b0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_004796b0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004d481a
    PUSH 0x589387                       ; 004d481d | = "strcoat.cth"
    LEA ESI,[EBX + 0xbdec]              ; 004d4822
    PUSH ESI                            ; 004d4828
    CALL core_cloth.cpp_CCloth_load_FUN_00435240 ; 004d4829
        ;   XREF to: 00435240 (UNCONDITIONAL_CALL)  ; int core_cloth.cpp_CCloth_load_FUN_00435240(CCloth * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004d482e
    PUSH EDI                            ; 004d4831
    LEA EAX,[EBX + 0x30]                ; 004d4832
    PUSH EAX                            ; 004d4835
    LEA EAX,[EBX + 0x20]                ; 004d4836
    PUSH EAX                            ; 004d4839
    PUSH ESI                            ; 004d483a
    CALL core_cloth.cpp_CCloth_setup_FUN_004359e0 ; 004d483b
        ;   XREF to: 004359e0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_setup_FUN_004359e0(CCloth * this_ptr, CVector3f * position, CVector3f * euler, CDeformableModelInstance * model_ptr)
    ADD ESP,0x10                        ; 004d4840
    MOV EBP,dword ptr [0x01bcdef4]      ; 004d4843 | g_CEnemyActorType_01bcdebc.name_hash
    PUSH EBP                            ; 004d4849
    LEA EAX,[EBX + 0x46924]             ; 004d484a
    PUSH EAX                            ; 004d4850
    CALL core_actor.cpp_createActorByName_FUN_0040d540 ; 004d4851
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_createActorByName_FUN_0040d540(char * class_name)
    ADD ESP,0x4                         ; 004d4856
    PUSH EAX                            ; 004d4859
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004d485a
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004d485f
    MOV dword ptr [EBX + 0x4757c],EAX   ; 004d4862
    TEST EAX,EAX                        ; 004d4868
    JNZ 0x004d488f                      ; 004d486a
        ;   XREF to: 004d488f (CONDITIONAL_JUMP)  ; LAB_004d488f
    MOV EDX,0x589393                    ; 004d486c | = "..\\core\\mimic.cpp"
    MOV ECX,0x101                       ; 004d4871
    PUSH 0x5893a5                       ; 004d4876 | = "CMimic failed to create morph target ..."
    MOV dword ptr [0x01cc4800],EDX      ; 004d487b | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004d4881 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004d4887
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004d488c
    MOV EAX,dword ptr [EBX + 0x4757c]   ; 004d488f
        ;   Label: LAB_004d488f
    PUSH EAX                            ; 004d4895
    MOV EDX,dword ptr [EAX + 0x14c]     ; 004d4896
    CALL dword ptr [EDX]                ; 004d489c
    ADD ESP,0x4                         ; 004d489e
    LEA ESI,[EBX + 0x150]               ; 004d48a1
    PUSH ESI                            ; 004d48a7
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800 ; 004d48a8
        ;   XREF to: 0051b800 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004d48ad
    PUSH ESI                            ; 004d48b0
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0 ; 004d48b1
        ;   XREF to: 0051d3c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004d48b6
    PUSH ESI                            ; 004d48b9
    PUSH 0x0                            ; 004d48ba
    LEA EAX,[EBX + 0x4694c]             ; 004d48bc
    PUSH EAX                            ; 004d48c2
    CALL core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004e0170 ; 004d48c3
        ;   XREF to: 004e0170 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004e0170(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr)
    ADD ESP,0xc                         ; 004d48c8
    PUSH ESI                            ; 004d48cb
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880 ; 004d48cc
        ;   XREF to: 0051b880 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004d48d1
    MOV ESI,dword ptr [EBX + 0x469a0]   ; 004d48d4
    XOR EDX,EDX                         ; 004d48da
    TEST ESI,ESI                        ; 004d48dc
    JLE 0x004d4900                      ; 004d48de
        ;   XREF to: 004d4900 (CONDITIONAL_JUMP)  ; LAB_004d4900
    XOR EAX,EAX                         ; 004d48e0
    MOV ECX,dword ptr [EBX + 0x469a4]   ; 004d48e2
        ;   Label: LAB_004d48e2
    INC EDX                             ; 004d48e8
    FLD float ptr [ECX + EAX*0x1 + 0x4] ; 004d48e9
    FCHS                                ; 004d48ed
    FSTP float ptr [ECX + EAX*0x1 + 0x4] ; 004d48ef
    MOV EDI,dword ptr [EBX + 0x469a0]   ; 004d48f3
    ADD EAX,0x10                        ; 004d48f9
    CMP EDX,EDI                         ; 004d48fc
    JL 0x004d48e2                       ; 004d48fe
        ;   XREF to: 004d48e2 (CONDITIONAL_JUMP)  ; LAB_004d48e2
    MOV EBP,dword ptr [EBX + 0x469a8]   ; 004d4900
        ;   Label: LAB_004d4900
    XOR EDX,EDX                         ; 004d4906
    TEST EBP,EBP                        ; 004d4908
    JLE 0x004d4950                      ; 004d490a
        ;   XREF to: 004d4950 (CONDITIONAL_JUMP)  ; LAB_004d4950
    XOR ECX,ECX                         ; 004d490c
    MOV EAX,dword ptr [EBX + 0x469ac]   ; 004d490e
        ;   Label: LAB_004d490e
    LEA EDI,[ESP + 0xc]                 ; 004d4914
    LEA ESI,[ECX + EAX*0x1 + 0x30]      ; 004d4918
    MOVSD ES:EDI,ESI                    ; 004d491c
    MOVSD ES:EDI,ESI                    ; 004d491d
    MOVSD ES:EDI,ESI                    ; 004d491e
    MOV EDI,ESP                         ; 004d491f
    LEA ESI,[ECX + EAX*0x1 + 0x18]      ; 004d4921
    MOVSD ES:EDI,ESI                    ; 004d4925
    MOVSD ES:EDI,ESI                    ; 004d4926
    MOVSD ES:EDI,ESI                    ; 004d4927
    LEA ESI,[ESP + 0xc]                 ; 004d4928
    LEA EDI,[ECX + EAX*0x1 + 0x18]      ; 004d492c
    MOVSD ES:EDI,ESI                    ; 004d4930
    MOVSD ES:EDI,ESI                    ; 004d4931
    MOVSD ES:EDI,ESI                    ; 004d4932
    MOV ESI,ESP                         ; 004d4933
    LEA EDI,[ECX + EAX*0x1 + 0x30]      ; 004d4935
    MOVSD ES:EDI,ESI                    ; 004d4939
    MOVSD ES:EDI,ESI                    ; 004d493a
    MOVSD ES:EDI,ESI                    ; 004d493b
    INC EDX                             ; 004d493c
    MOV EAX,dword ptr [EBX + 0x469a8]   ; 004d493d
    ADD ECX,0x3c                        ; 004d4943
    CMP EDX,EAX                         ; 004d4946
    JL 0x004d490e                       ; 004d4948
        ;   XREF to: 004d490e (CONDITIONAL_JUMP)  ; LAB_004d490e
    LEA EAX,[EAX]                       ; 004d494a
    MOV EAX,dword ptr [EBX + 0x4757c]   ; 004d4950
        ;   Label: LAB_004d4950
    ADD EAX,0x150                       ; 004d4956
    PUSH EAX                            ; 004d495b
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800 ; 004d495c
        ;   XREF to: 0051b800 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800(CDeformableModelInstance * this_ptr)
    MOV EAX,dword ptr [EBX + 0x4757c]   ; 004d4961
    ADD ESP,0x4                         ; 004d4967
    ADD EAX,0x150                       ; 004d496a
    PUSH EAX                            ; 004d496f
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0 ; 004d4970
        ;   XREF to: 0051d3c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0(CDeformableModelInstance * this_ptr)
    MOV EAX,dword ptr [EBX + 0x4757c]   ; 004d4975
    ADD ESP,0x4                         ; 004d497b
    ADD EAX,0x150                       ; 004d497e
    PUSH EAX                            ; 004d4983
    PUSH 0x1                            ; 004d4984
    LEA ESI,[EBX + 0x4694c]             ; 004d4986
    PUSH ESI                            ; 004d498c
    CALL core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004e0170 ; 004d498d
        ;   XREF to: 004e0170 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004e0170(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr)
    MOV EAX,dword ptr [EBX + 0x4757c]   ; 004d4992
    ADD ESP,0xc                         ; 004d4998
    ADD EAX,0x150                       ; 004d499b
    PUSH EAX                            ; 004d49a0
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880 ; 004d49a1
        ;   XREF to: 0051b880 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004d49a6
    PUSH ESI                            ; 004d49a9
    CALL core_morph.cpp_CMorph_getReady_FUN_004e03c0 ; 004d49aa
        ;   XREF to: 004e03c0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_getReady_FUN_004e03c0(CMorph * this_ptr)
    ADD ESP,0x4                         ; 004d49af
    ADD ESP,0x18                        ; 004d49b2
    POP EBP                             ; 004d49b5
    POP EDI                             ; 004d49b6
    POP ESI                             ; 004d49b7
    POP EBX                             ; 004d49b8
    RET                                 ; 004d49b9
    MOV ECX,0x589245                    ; 004d49ba | = "..\\core\\mimic.cpp"
        ;   Label: LAB_004d49ba
    MOV ESI,0xb6                        ; 004d49bf
    PUSH 0x589257                       ; 004d49c4 | = "CMimic::setup - can't use mimic in mu..."
    MOV dword ptr [0x01cc4800],ECX      ; 004d49c9 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 004d49cf | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004d49d5
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004d49da
    JMP 0x004d4669                      ; 004d49dd
        ;   XREF to: 004d4669 (UNCONDITIONAL_JUMP)  ; LAB_004d4669
    PUSH 0x589288                       ; 004d49e2 | = "stranger.dfm"
        ;   Label: LAB_004d49e2
    JMP 0x004d468c                      ; 004d49e7
        ;   XREF to: 004d468c (UNCONDITIONAL_JUMP)  ; LAB_004d468c

