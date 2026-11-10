; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_zombiepriest_cpp_FUN_0058d5e0(CEnemy *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Head_005d8a21
;   TerminatedCString s_Bip01_L_ForeArm_005d8a2c
;   TerminatedCString s_Bip01_R_ForeArm_005d8a3c
;   TerminatedCString s_Bip01_L_UpperArm_005d8a4c
;   TerminatedCString s_Bip01_R_UpperArm_005d8a5d
;   TerminatedCString s_Bip01_L_Foot_005d8a6e
;   TerminatedCString s_Bip01_R_Foot_005d8a7b
;   TerminatedCString s_Bip01_L_Hand_005d8a88
;   TerminatedCString s_Bip01_R_Hand_005d8a95
;   TerminatedCString s_Bip01_Spine_005d8aa2
;   TerminatedCString s_Bip01_Spine1_005d8aae
;   TerminatedCString s_Bip01_Spine2_005d8abb
;   TerminatedCString s_Bip01_Head_005d8ac8
;   TerminatedCString s_Bip01_L_UpperArm_005d8ad3
;   TerminatedCString s_Bip01_R_UpperArm_005d8ae4
;   ... and 25 more
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_00489110
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
;   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00548090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058d5e0
        ;   Label: core_zombiepriest.cpp_FUN_0058d5e0
    PUSH ESI                            ; 0058d5e1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0058d5e2
    CMP dword ptr [EBX + 0x3268],0x0    ; 0058d5e6
    JNZ 0x0058d60d                      ; 0058d5ed
        ;   XREF to: 0058d60d (CONDITIONAL_JUMP)  ; LAB_0058d60d
    MOV dword ptr [EBX + 0xce5c],0x41200000 ; 0058d5ef
    MOV dword ptr [EBX + 0xce60],0x41700000 ; 0058d5f9
    MOV dword ptr [EBX + 0x2538],0x42fa0000 ; 0058d603
    PUSH EDI                            ; 0058d60d
        ;   Label: LAB_0058d60d
    LEA EDI,[EBX + 0x158]               ; 0058d60e
    PUSH EDI                            ; 0058d614
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0 ; 0058d615
        ;   XREF to: 0054e6b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0058d61a
    PUSH EDI                            ; 0058d61d
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 0058d61e
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0058d623
    PUSH 0x1                            ; 0058d626
    PUSH 0x5d8a21                       ; 0058d628 | = "Bip01 Head"
    PUSH EAX                            ; 0058d62d
    MOV ESI,EAX                         ; 0058d62e
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 0058d630
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0058d635
    PUSH 0x1                            ; 0058d638
    PUSH 0x5d8a2c                       ; 0058d63a | = "Bip01 L ForeArm"
    PUSH ESI                            ; 0058d63f
    MOV [0x02d24970],EAX                ; 0058d640 | DAT_02d24970
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 0058d645
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0058d64a
    PUSH 0x1                            ; 0058d64d
    PUSH 0x5d8a3c                       ; 0058d64f | = "Bip01 R ForeArm"
    PUSH ESI                            ; 0058d654
    MOV [0x02d2497c],EAX                ; 0058d655 | DAT_02d2497c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 0058d65a
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0058d65f
    PUSH 0x1                            ; 0058d662
    PUSH 0x5d8a4c                       ; 0058d664 | = "Bip01 L UpperArm"
    PUSH ESI                            ; 0058d669
    MOV [0x02d24980],EAX                ; 0058d66a | DAT_02d24980
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 0058d66f
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0058d674
    PUSH 0x1                            ; 0058d677
    PUSH 0x5d8a5d                       ; 0058d679 | = "Bip01 R UpperArm"
    PUSH ESI                            ; 0058d67e
    MOV [0x02d24984],EAX                ; 0058d67f | DAT_02d24984
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 0058d684
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0058d689
    PUSH 0x1                            ; 0058d68c
    PUSH 0x5d8a6e                       ; 0058d68e | = "Bip01 L Foot"
    PUSH ESI                            ; 0058d693
    MOV [0x02d24988],EAX                ; 0058d694 | DAT_02d24988
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 0058d699
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0058d69e
    PUSH 0x1                            ; 0058d6a1
    PUSH 0x5d8a7b                       ; 0058d6a3 | = "Bip01 R Foot"
    PUSH ESI                            ; 0058d6a8
    MOV [0x02d2498c],EAX                ; 0058d6a9 | DAT_02d2498c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 0058d6ae
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0058d6b3
    PUSH 0x1                            ; 0058d6b6
    PUSH 0x5d8a88                       ; 0058d6b8 | = "Bip01 L Hand"
    PUSH ESI                            ; 0058d6bd
    MOV [0x02d24990],EAX                ; 0058d6be | DAT_02d24990
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 0058d6c3
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0058d6c8
    PUSH 0x1                            ; 0058d6cb
    PUSH 0x5d8a95                       ; 0058d6cd | = "Bip01 R Hand"
    PUSH ESI                            ; 0058d6d2
    MOV [0x02d24974],EAX                ; 0058d6d3 | DAT_02d24974
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 0058d6d8
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0058d6dd
    MOV [0x02d24978],EAX                ; 0058d6e0 | DAT_02d24978
    PUSH 0x1                            ; 0058d6e5
    PUSH 0x5d8aa2                       ; 0058d6e7 | = "Bip01 Spine"
    PUSH ESI                            ; 0058d6ec
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 0058d6ed
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0058d6f2
    PUSH 0x1                            ; 0058d6f5
    PUSH 0x5d8aae                       ; 0058d6f7 | = "Bip01 Spine1"
    PUSH ESI                            ; 0058d6fc
    MOV [0x02d24994],EAX                ; 0058d6fd | DAT_02d24994
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 0058d702
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0058d707
    PUSH 0x1                            ; 0058d70a
    PUSH 0x5d8abb                       ; 0058d70c | = "Bip01 Spine2"
    PUSH ESI                            ; 0058d711
    MOV [0x02d24998],EAX                ; 0058d712 | DAT_02d24998
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 0058d717
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0058d71c
    PUSH 0x1                            ; 0058d71f
    PUSH 0x5d8ac8                       ; 0058d721 | = "Bip01 Head"
    PUSH ESI                            ; 0058d726
    MOV [0x02d2499c],EAX                ; 0058d727 | DAT_02d2499c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 0058d72c
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0058d731
    PUSH 0x1                            ; 0058d734
    PUSH 0x5d8ad3                       ; 0058d736 | = "Bip01 L UpperArm"
    PUSH ESI                            ; 0058d73b
    MOV [0x02d24970],EAX                ; 0058d73c | DAT_02d24970
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 0058d741
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0058d746
    PUSH 0x1                            ; 0058d749
    PUSH 0x5d8ae4                       ; 0058d74b | = "Bip01 R UpperArm"
    PUSH ESI                            ; 0058d750
    MOV [0x02d24984],EAX                ; 0058d751 | DAT_02d24984
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 0058d756
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0058d75b
    PUSH 0x1                            ; 0058d75e
    PUSH 0x5d8af5                       ; 0058d760 | = "Bip01 Spine"
    PUSH ESI                            ; 0058d765
    MOV [0x02d24988],EAX                ; 0058d766 | DAT_02d24988
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 0058d76b
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0058d770
    PUSH 0x1                            ; 0058d773
    PUSH 0x5d8b01                       ; 0058d775 | = "Bip01 Spine2"
    PUSH ESI                            ; 0058d77a
    MOV [0x02d24994],EAX                ; 0058d77b | DAT_02d24994
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 0058d780
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0058d785
    PUSH EDI                            ; 0058d788
    MOV [0x02d2499c],EAX                ; 0058d789 | DAT_02d2499c
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40 ; 0058d78e
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0058d793
    PUSH 0x1                            ; 0058d796
    PUSH 0x5d8b0e                       ; 0058d798 | = "larm01"
    PUSH EAX                            ; 0058d79d
    MOV ESI,EAX                         ; 0058d79e
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 0058d7a0
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0058d7a5
    MOV dword ptr [EBX + 0xd0e0],EAX    ; 0058d7a8
    POP EDI                             ; 0058d7ae
    PUSH 0x1                            ; 0058d7af
    PUSH 0x5d8b15                       ; 0058d7b1 | = "l4arm01"
    PUSH ESI                            ; 0058d7b6
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 0058d7b7
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0058d7bc
    PUSH 0x1                            ; 0058d7bf
    PUSH 0x5d8b1d                       ; 0058d7c1 | = "rarm01"
    PUSH ESI                            ; 0058d7c6
    MOV dword ptr [EBX + 0xd0e4],EAX    ; 0058d7c7
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 0058d7cd
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0058d7d2
    PUSH 0x1                            ; 0058d7d5
    PUSH 0x5d8b24                       ; 0058d7d7 | = "r4arm01"
    PUSH ESI                            ; 0058d7dc
    MOV dword ptr [EBX + 0xd0e8],EAX    ; 0058d7dd
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 0058d7e3
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0058d7e8
    PUSH 0x1                            ; 0058d7eb
    PUSH 0x5d8b2c                       ; 0058d7ed | = "rthigh01"
    PUSH ESI                            ; 0058d7f2
    MOV dword ptr [EBX + 0xd0ec],EAX    ; 0058d7f3
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 0058d7f9
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0058d7fe
    PUSH 0x1                            ; 0058d801
    PUSH 0x5d8b35                       ; 0058d803 | = "rshin01"
    PUSH ESI                            ; 0058d808
    MOV dword ptr [EBX + 0xd0f0],EAX    ; 0058d809
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 0058d80f
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0058d814
    PUSH 0x1                            ; 0058d817
    PUSH 0x5d8b3d                       ; 0058d819 | = "lthigh01"
    PUSH ESI                            ; 0058d81e
    MOV dword ptr [EBX + 0xd0f4],EAX    ; 0058d81f
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 0058d825
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0058d82a
    PUSH 0x1                            ; 0058d82d
    PUSH 0x5d8b46                       ; 0058d82f | = "lshin01"
    PUSH ESI                            ; 0058d834
    MOV dword ptr [EBX + 0xd0f8],EAX    ; 0058d835
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 0058d83b
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0058d840
    PUSH 0x1                            ; 0058d843
    PUSH 0x5d8b4e                       ; 0058d845 | = "waist01"
    PUSH ESI                            ; 0058d84a
    MOV dword ptr [EBX + 0xd0fc],EAX    ; 0058d84b
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 0058d851
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0058d856
    PUSH 0x1                            ; 0058d859
    PUSH 0x5d8b56                       ; 0058d85b | = "torso01"
    PUSH ESI                            ; 0058d860
    MOV dword ptr [EBX + 0xd100],EAX    ; 0058d861
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 0058d867
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0058d86c
    MOV dword ptr [EBX + 0xd104],EAX    ; 0058d86f
    PUSH 0x1                            ; 0058d875
    PUSH 0x5d8b5e                       ; 0058d877 | = "head01"
    PUSH ESI                            ; 0058d87c
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 0058d87d
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    MOV dword ptr [EBX + 0xd108],EAX    ; 0058d882
    MOV EAX,[0x02d24974]                ; 0058d888 | DAT_02d24974
    MOV dword ptr [EBX + 0x25a8],EAX    ; 0058d88d
    MOV EAX,dword ptr [EBX + 0xd0e4]    ; 0058d893
    MOV dword ptr [EBX + 0x25ac],EAX    ; 0058d899
    MOV EAX,[0x02d24978]                ; 0058d89f | DAT_02d24978
    MOV dword ptr [EBX + 0x2620],EAX    ; 0058d8a4
    ADD ESP,0xc                         ; 0058d8aa
    MOV EAX,dword ptr [EBX + 0xd0ec]    ; 0058d8ad
    PUSH EBX                            ; 0058d8b3
    MOV dword ptr [EBX + 0x2624],EAX    ; 0058d8b4
    CALL core_enemy.cpp_CEnemy_setup_FUN_00489110 ; 0058d8ba
        ;   XREF to: 00489110 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_00489110(CEnemy * this_ptr)
    MOV dword ptr [EBX + 0xd10c],0x0    ; 0058d8bf
    ADD ESP,0x4                         ; 0058d8c9
    MOV ECX,dword ptr [EBX + 0xd068]    ; 0058d8cc
    MOV dword ptr [EBX + 0xd110],0x0    ; 0058d8d2
    TEST ECX,ECX                        ; 0058d8dc
    JZ 0x0058d8ea                       ; 0058d8de
        ;   XREF to: 0058d8ea (CONDITIONAL_JUMP)  ; LAB_0058d8ea
    MOV dword ptr [EBX + 0xd050],0x1    ; 0058d8e0
    LEA EAX,[EBX + 0x158]               ; 0058d8ea
        ;   Label: LAB_0058d8ea
    PUSH EAX                            ; 0058d8f0
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 0058d8f1
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0058d8f6
    ADD ESP,0x4                         ; 0058d8f9
    CMP EAX,0x5                         ; 0058d8fc
    JNZ 0x0058d92c                      ; 0058d8ff
        ;   XREF to: 0058d92c (CONDITIONAL_JUMP)  ; LAB_0058d92c
    MOV dword ptr [EBX + 0x2540],0x0    ; 0058d901
    MOV dword ptr [EBX + 0xd0d8],0x0    ; 0058d90b
        ;   Label: LAB_0058d90b
    MOV dword ptr [EBX + 0xd0dc],0x0    ; 0058d915
    MOV dword ptr [EBX + 0xd0d4],0x0    ; 0058d91f
    POP ESI                             ; 0058d929
    POP EBX                             ; 0058d92a
    RET                                 ; 0058d92b
    MOV dword ptr [EBX + 0x2540],0x2    ; 0058d92c
        ;   Label: LAB_0058d92c
    JMP 0x0058d90b                      ; 0058d936
        ;   XREF to: 0058d90b (UNCONDITIONAL_JUMP)  ; LAB_0058d90b

