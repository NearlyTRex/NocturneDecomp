; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_mimic_cpp_CMimic_setup_FUN_0051f3e0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_core_mimic_cpp_0063856d
;   TerminatedCString s_CMimic_setup_can_t_use_m_0063857f
;   TerminatedCString s_stranger_dfm_006385b0
;   TerminatedCString s_Bip01_head_006385bd
;   TerminatedCString s_Bip01_L_Clavicle_006385c8
;   TerminatedCString s_Bip01_R_Clavicle_006385d9
;   TerminatedCString s_Bip01_L_UpperArm_006385ea
;   TerminatedCString s_Bip01_R_UpperArm_006385fb
;   TerminatedCString s_Bip01_L_ForeArm_0063860c
;   TerminatedCString s_Bip01_R_ForeArm_0063861c
;   TerminatedCString s_Bip01_L_Foot_0063862c
;   TerminatedCString s_Bip01_R_Foot_00638639
;   TerminatedCString s_Bip01_L_Thigh_00638646
;   TerminatedCString s_Bip01_R_Thigh_00638654
;   TerminatedCString s_Bip01_L_Calf_00638662
;   ... and 32 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_createActorByName_FUN_0040c430
;   core_cloth.cpp_CCloth_load_FUN_00438cf0
;   core_cloth.cpp_FUN_00439710
;   core_enemy.cpp_CEnemy_FUN_004a9650
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_morph.cpp_CMorph_getReady_FUN_0052b680
;   core_morph.cpp_FUN_0052b430
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
;   core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051f3e0
        ;   Label: core_mimic.cpp_CMimic_setup_FUN_0051f3e0
    PUSH ESI                            ; 0051f3e1
    PUSH EDI                            ; 0051f3e2
    PUSH EBP                            ; 0051f3e3
    SUB ESP,0x18                        ; 0051f3e4
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0051f3e7
    MOV EAX,[0x00680a00]                ; 0051f3eb | g_CNetGameInstance | g_CNetGamePtr
    CMP dword ptr [EAX],0x0             ; 0051f3f0 | g_CNetGameInstance
    JNZ 0x0051f74a                      ; 0051f3f3
        ;   XREF to: 0051f74a (CONDITIONAL_JUMP)  ; LAB_0051f74a
    MOV EAX,[0x02db87d0]                ; 0051f3f9 | g_LocalHeroIndex
        ;   Label: LAB_0051f3f9
    SHL EAX,0x2                         ; 0051f3fe
    MOV EDI,dword ptr [EAX + 0x2db87c0] ; 0051f401 | g_HeroActors
    LEA EDX,[EBX + 0x158]               ; 0051f407
    TEST EDI,EDI                        ; 0051f40d
    JZ 0x0051f772                       ; 0051f40f
        ;   XREF to: 0051f772 (CONDITIONAL_JUMP)  ; LAB_0051f772
    LEA EAX,[EDI + 0x23b8]              ; 0051f415
    PUSH EAX                            ; 0051f41b
    PUSH EDX                            ; 0051f41c
        ;   Label: LAB_0051f41c
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 0051f41d
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 0051f422
    LEA EDI,[EBX + 0x158]               ; 0051f425
    PUSH EDI                            ; 0051f42b
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450 ; 0051f42c
        ;   XREF to: 005a0450 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0051f431
    PUSH EDI                            ; 0051f434
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 0051f435
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0051f43a
    PUSH 0x1                            ; 0051f43d
    PUSH 0x6385bd                       ; 0051f43f | = "Bip01 head"
    PUSH EAX                            ; 0051f444
    MOV ESI,EAX                         ; 0051f445
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0051f447
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0051f44c
    PUSH 0x1                            ; 0051f44f
    PUSH 0x6385c8                       ; 0051f451 | = "Bip01 L Clavicle"
    PUSH ESI                            ; 0051f456
    MOV [0x02f33378],EAX                ; 0051f457 | INT_02f33378
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0051f45c
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0051f461
    PUSH 0x1                            ; 0051f464
    PUSH 0x6385d9                       ; 0051f466 | = "Bip01 R Clavicle"
    PUSH ESI                            ; 0051f46b
    MOV [0x02f3337c],EAX                ; 0051f46c | INT_02f3337c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0051f471
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0051f476
    PUSH 0x1                            ; 0051f479
    PUSH 0x6385ea                       ; 0051f47b | = "Bip01 L UpperArm"
    PUSH ESI                            ; 0051f480
    MOV [0x02f33380],EAX                ; 0051f481 | INT_02f33380
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0051f486
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0051f48b
    PUSH 0x1                            ; 0051f48e
    PUSH 0x6385fb                       ; 0051f490 | = "Bip01 R UpperArm"
    PUSH ESI                            ; 0051f495
    MOV [0x02f33384],EAX                ; 0051f496 | INT_02f33384
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0051f49b
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0051f4a0
    PUSH 0x1                            ; 0051f4a3
    PUSH 0x63860c                       ; 0051f4a5 | = "Bip01 L ForeArm"
    PUSH ESI                            ; 0051f4aa
    MOV [0x02f33388],EAX                ; 0051f4ab | INT_02f33388
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0051f4b0
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0051f4b5
    PUSH 0x1                            ; 0051f4b8
    PUSH 0x63861c                       ; 0051f4ba | = "Bip01 R ForeArm"
    PUSH ESI                            ; 0051f4bf
    MOV [0x02f3338c],EAX                ; 0051f4c0 | INT_02f3338c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0051f4c5
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0051f4ca
    PUSH 0x1                            ; 0051f4cd
    PUSH 0x63862c                       ; 0051f4cf | = "Bip01 L Foot"
    PUSH ESI                            ; 0051f4d4
    MOV [0x02f33390],EAX                ; 0051f4d5 | INT_02f33390
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0051f4da
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0051f4df
    PUSH 0x1                            ; 0051f4e2
    PUSH 0x638639                       ; 0051f4e4 | = "Bip01 R Foot"
    PUSH ESI                            ; 0051f4e9
    MOV [0x02f33394],EAX                ; 0051f4ea | INT_02f33394
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0051f4ef
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0051f4f4
    MOV [0x02f33398],EAX                ; 0051f4f7 | INT_02f33398
    PUSH 0x1                            ; 0051f4fc
    PUSH 0x638646                       ; 0051f4fe | = "Bip01 L Thigh"
    PUSH ESI                            ; 0051f503
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0051f504
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0051f509
    PUSH 0x1                            ; 0051f50c
    PUSH 0x638654                       ; 0051f50e | = "Bip01 R Thigh"
    PUSH ESI                            ; 0051f513
    MOV [0x02f3339c],EAX                ; 0051f514 | INT_02f3339c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0051f519
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0051f51e
    PUSH 0x1                            ; 0051f521
    PUSH 0x638662                       ; 0051f523 | = "Bip01 L Calf"
    PUSH ESI                            ; 0051f528
    MOV [0x02f333a0],EAX                ; 0051f529 | INT_02f333a0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0051f52e
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0051f533
    PUSH 0x1                            ; 0051f536
    PUSH 0x63866f                       ; 0051f538 | = "Bip01 R Calf"
    PUSH ESI                            ; 0051f53d
    MOV [0x02f333a4],EAX                ; 0051f53e | INT_02f333a4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0051f543
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0051f548
    PUSH 0x1                            ; 0051f54b
    PUSH 0x63867c                       ; 0051f54d | = "Bip01 L Hand"
    PUSH ESI                            ; 0051f552
    MOV [0x02f333a8],EAX                ; 0051f553 | INT_02f333a8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0051f558
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0051f55d
    PUSH 0x1                            ; 0051f560
    PUSH 0x638689                       ; 0051f562 | = "Bip01 R Hand"
    PUSH ESI                            ; 0051f567
    MOV [0x02f333b8],EAX                ; 0051f568 | INT_02f333b8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0051f56d
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0051f572
    PUSH 0x1                            ; 0051f575
    PUSH 0x638696                       ; 0051f577 | = "Bip01 Spine2"
    PUSH ESI                            ; 0051f57c
    MOV [0x02f333bc],EAX                ; 0051f57d | INT_02f333bc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0051f582
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0051f587
    PUSH 0x1                            ; 0051f58a
    PUSH 0x6386a3                       ; 0051f58c | = "Bip01 Spine"
    PUSH ESI                            ; 0051f591
    MOV [0x02f333c0],EAX                ; 0051f592 | INT_02f333c0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0051f597
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0051f59c
    PUSH EBX                            ; 0051f59f
    MOV [0x02f333c4],EAX                ; 0051f5a0 | INT_02f333c4
    CALL core_enemy.cpp_CEnemy_FUN_004a9650 ; 0051f5a5
        ;   XREF to: 004a9650 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_FUN_004a9650(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0051f5aa
    PUSH 0x6386af                       ; 0051f5ad | = "strcoat.cth"
    LEA ESI,[EBX + 0xbf84]              ; 0051f5b2
    PUSH ESI                            ; 0051f5b8
    CALL core_cloth.cpp_CCloth_load_FUN_00438cf0 ; 0051f5b9
        ;   XREF to: 00438cf0 (UNCONDITIONAL_CALL)  ; int core_cloth.cpp_CCloth_load_FUN_00438cf0(CCloth * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0051f5be
    PUSH EDI                            ; 0051f5c1
    LEA EAX,[EBX + 0x30]                ; 0051f5c2
    PUSH EAX                            ; 0051f5c5
    LEA EAX,[EBX + 0x20]                ; 0051f5c6
    PUSH EAX                            ; 0051f5c9
    PUSH ESI                            ; 0051f5ca
    CALL core_cloth.cpp_FUN_00439710    ; 0051f5cb
        ;   XREF to: 00439710 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_FUN_00439710()
    ADD ESP,0x10                        ; 0051f5d0
    MOV EBP,dword ptr [0x02cf2bf0]      ; 0051f5d3 | g_CEnemyClassInfo.name_hash
    PUSH EBP                            ; 0051f5d9
    LEA EAX,[EBX + 0x4bdfc]             ; 0051f5da
    PUSH EAX                            ; 0051f5e0
    CALL core_actor.cpp_createActorByName_FUN_0040c430 ; 0051f5e1
        ;   XREF to: 0040c430 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_createActorByName_FUN_0040c430(char * class_name)
    ADD ESP,0x4                         ; 0051f5e6
    PUSH EAX                            ; 0051f5e9
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 0051f5ea
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0051f5ef
    MOV dword ptr [EBX + 0x4ca54],EAX   ; 0051f5f2
    TEST EAX,EAX                        ; 0051f5f8
    JNZ 0x0051f61f                      ; 0051f5fa
        ;   XREF to: 0051f61f (CONDITIONAL_JUMP)  ; LAB_0051f61f
    MOV EDX,0x6386bb                    ; 0051f5fc | = "..\\core\\mimic.cpp"
    MOV ECX,0x101                       ; 0051f601
    PUSH 0x6386cd                       ; 0051f606 | = "CMimic failed to create morph target ..."
    MOV dword ptr [0x02f0ca48],EDX      ; 0051f60b | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0051f611 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0051f617
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0051f61c
    MOV EAX,dword ptr [EBX + 0x4ca54]   ; 0051f61f
        ;   Label: LAB_0051f61f
    PUSH EAX                            ; 0051f625
    MOV EDX,dword ptr [EAX + 0x154]     ; 0051f626
    CALL dword ptr [EDX]                ; 0051f62c
    ADD ESP,0x4                         ; 0051f62e
    LEA ESI,[EBX + 0x158]               ; 0051f631
    PUSH ESI                            ; 0051f637
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80 ; 0051f638
        ;   XREF to: 0059df80 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0051f63d
    PUSH ESI                            ; 0051f640
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40 ; 0051f641
        ;   XREF to: 0059fb40 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0051f646
    PUSH ESI                            ; 0051f649
    PUSH 0x0                            ; 0051f64a
    LEA EAX,[EBX + 0x4be24]             ; 0051f64c
    PUSH EAX                            ; 0051f652
    CALL core_morph.cpp_FUN_0052b430    ; 0051f653
        ;   XREF to: 0052b430 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_FUN_0052b430()
    ADD ESP,0xc                         ; 0051f658
    PUSH ESI                            ; 0051f65b
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000 ; 0051f65c
        ;   XREF to: 0059e000 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0051f661
    MOV ESI,dword ptr [EBX + 0x4be78]   ; 0051f664
    XOR EDX,EDX                         ; 0051f66a
    TEST ESI,ESI                        ; 0051f66c
    JLE 0x0051f690                      ; 0051f66e
        ;   XREF to: 0051f690 (CONDITIONAL_JUMP)  ; LAB_0051f690
    XOR EAX,EAX                         ; 0051f670
    MOV ECX,dword ptr [EBX + 0x4be7c]   ; 0051f672
        ;   Label: LAB_0051f672
    INC EDX                             ; 0051f678
    FLD float ptr [ECX + EAX*0x1 + 0x4] ; 0051f679
    FCHS                                ; 0051f67d
    FSTP float ptr [ECX + EAX*0x1 + 0x4] ; 0051f67f
    MOV EDI,dword ptr [EBX + 0x4be78]   ; 0051f683
    ADD EAX,0x10                        ; 0051f689
    CMP EDX,EDI                         ; 0051f68c
    JL 0x0051f672                       ; 0051f68e
        ;   XREF to: 0051f672 (CONDITIONAL_JUMP)  ; LAB_0051f672
    MOV EBP,dword ptr [EBX + 0x4be80]   ; 0051f690
        ;   Label: LAB_0051f690
    XOR EDX,EDX                         ; 0051f696
    TEST EBP,EBP                        ; 0051f698
    JLE 0x0051f6e0                      ; 0051f69a
        ;   XREF to: 0051f6e0 (CONDITIONAL_JUMP)  ; LAB_0051f6e0
    XOR ECX,ECX                         ; 0051f69c
    MOV EAX,dword ptr [EBX + 0x4be84]   ; 0051f69e
        ;   Label: LAB_0051f69e
    LEA EDI,[ESP + 0xc]                 ; 0051f6a4
    LEA ESI,[ECX + EAX*0x1 + 0x30]      ; 0051f6a8
    MOVSD ES:EDI,ESI                    ; 0051f6ac
    MOVSD ES:EDI,ESI                    ; 0051f6ad
    MOVSD ES:EDI,ESI                    ; 0051f6ae
    MOV EDI,ESP                         ; 0051f6af
    LEA ESI,[ECX + EAX*0x1 + 0x18]      ; 0051f6b1
    MOVSD ES:EDI,ESI                    ; 0051f6b5
    MOVSD ES:EDI,ESI                    ; 0051f6b6
    MOVSD ES:EDI,ESI                    ; 0051f6b7
    LEA ESI,[ESP + 0xc]                 ; 0051f6b8
    LEA EDI,[ECX + EAX*0x1 + 0x18]      ; 0051f6bc
    MOVSD ES:EDI,ESI                    ; 0051f6c0
    MOVSD ES:EDI,ESI                    ; 0051f6c1
    MOVSD ES:EDI,ESI                    ; 0051f6c2
    MOV ESI,ESP                         ; 0051f6c3
    LEA EDI,[ECX + EAX*0x1 + 0x30]      ; 0051f6c5
    MOVSD ES:EDI,ESI                    ; 0051f6c9
    MOVSD ES:EDI,ESI                    ; 0051f6ca
    MOVSD ES:EDI,ESI                    ; 0051f6cb
    INC EDX                             ; 0051f6cc
    MOV EAX,dword ptr [EBX + 0x4be80]   ; 0051f6cd
    ADD ECX,0x3c                        ; 0051f6d3
    CMP EDX,EAX                         ; 0051f6d6
    JL 0x0051f69e                       ; 0051f6d8
        ;   XREF to: 0051f69e (CONDITIONAL_JUMP)  ; LAB_0051f69e
    LEA EAX,[EAX]                       ; 0051f6da
    MOV EAX,dword ptr [EBX + 0x4ca54]   ; 0051f6e0
        ;   Label: LAB_0051f6e0
    ADD EAX,0x158                       ; 0051f6e6
    PUSH EAX                            ; 0051f6eb
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80 ; 0051f6ec
        ;   XREF to: 0059df80 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(CDeformableModelInstance * this_ptr)
    MOV EAX,dword ptr [EBX + 0x4ca54]   ; 0051f6f1
    ADD ESP,0x4                         ; 0051f6f7
    ADD EAX,0x158                       ; 0051f6fa
    PUSH EAX                            ; 0051f6ff
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40 ; 0051f700
        ;   XREF to: 0059fb40 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(CDeformableModelInstance * this_ptr)
    MOV EAX,dword ptr [EBX + 0x4ca54]   ; 0051f705
    ADD ESP,0x4                         ; 0051f70b
    ADD EAX,0x158                       ; 0051f70e
    PUSH EAX                            ; 0051f713
    PUSH 0x1                            ; 0051f714
    LEA ESI,[EBX + 0x4be24]             ; 0051f716
    PUSH ESI                            ; 0051f71c
    CALL core_morph.cpp_FUN_0052b430    ; 0051f71d
        ;   XREF to: 0052b430 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_FUN_0052b430()
    MOV EAX,dword ptr [EBX + 0x4ca54]   ; 0051f722
    ADD ESP,0xc                         ; 0051f728
    ADD EAX,0x158                       ; 0051f72b
    PUSH EAX                            ; 0051f730
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000 ; 0051f731
        ;   XREF to: 0059e000 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0051f736
    PUSH ESI                            ; 0051f739
    CALL core_morph.cpp_CMorph_getReady_FUN_0052b680 ; 0051f73a
        ;   XREF to: 0052b680 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_getReady_FUN_0052b680(CMorph * this_ptr)
    ADD ESP,0x4                         ; 0051f73f
    ADD ESP,0x18                        ; 0051f742
    POP EBP                             ; 0051f745
    POP EDI                             ; 0051f746
    POP ESI                             ; 0051f747
    POP EBX                             ; 0051f748
    RET                                 ; 0051f749
    MOV ECX,0x63856d                    ; 0051f74a | = "..\\core\\mimic.cpp"
        ;   Label: LAB_0051f74a
    MOV ESI,0xb6                        ; 0051f74f
    PUSH 0x63857f                       ; 0051f754 | = "CMimic::setup - can't use mimic in mu..."
    MOV dword ptr [0x02f0ca48],ECX      ; 0051f759 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0051f75f | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0051f765
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0051f76a
    JMP 0x0051f3f9                      ; 0051f76d
        ;   XREF to: 0051f3f9 (UNCONDITIONAL_JUMP)  ; LAB_0051f3f9
    PUSH 0x6385b0                       ; 0051f772 | = "stranger.dfm"
        ;   Label: LAB_0051f772
    JMP 0x0051f41c                      ; 0051f777
        ;   XREF to: 0051f41c (UNCONDITIONAL_JUMP)  ; LAB_0051f41c

