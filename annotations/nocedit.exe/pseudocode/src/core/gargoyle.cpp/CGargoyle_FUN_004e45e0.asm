; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_gargoyle_cpp_CGargoyle_FUN_004e45e0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Head_0062d7e3
;   TerminatedCString s_Bip01_L_ForeArm_0062d7ee
;   TerminatedCString s_Bip01_R_ForeArm_0062d7fe
;   TerminatedCString s_Bip01_L_UpperArm_0062d80e
;   TerminatedCString s_Bip01_R_UpperArm_0062d81f
;   TerminatedCString s_Bip01_L_Foot_0062d830
;   TerminatedCString s_Bip01_R_Foot_0062d83d
;   TerminatedCString s_Bip01_L_Hand_0062d84a
;   TerminatedCString s_Bip01_R_Hand_0062d857
;   TerminatedCString s_Bip01_Spine_0062d864
;   TerminatedCString s_Bip01_Spine1_0062d870
;   TerminatedCString s_Bip01_Spine2_0062d87d
;   TerminatedCString s_Bip01_Head_0062d88a
;   TerminatedCString s_Bip01_L_UpperArm_0062d895
;   TerminatedCString s_Bip01_R_UpperArm_0062d8a6
;   ... and 26 more
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_004a9650
;   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e45e0
        ;   Label: core_gargoyle.cpp_CGargoyle_FUN_004e45e0
    PUSH ESI                            ; 004e45e1
    PUSH EDI                            ; 004e45e2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004e45e3
    PUSH ESI                            ; 004e45e7
    CALL core_enemy.cpp_CEnemy_setup_FUN_004a9650 ; 004e45e8
        ;   XREF to: 004a9650 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_004a9650(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004e45ed
    LEA EDI,[ESI + 0x158]               ; 004e45f0
    PUSH EDI                            ; 004e45f6
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450 ; 004e45f7
        ;   XREF to: 005a0450 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004e45fc
    PUSH EDI                            ; 004e45ff
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 004e4600
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004e4605
    PUSH 0x1                            ; 004e4608
    PUSH 0x62d7e3                       ; 004e460a | = "Bip01 Head"
    PUSH EAX                            ; 004e460f
    MOV EBX,EAX                         ; 004e4610
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004e4612
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004e4617
    PUSH 0x1                            ; 004e461a
    PUSH 0x62d7ee                       ; 004e461c | = "Bip01 L ForeArm"
    PUSH EBX                            ; 004e4621
    MOV [0x02d83200],EAX                ; 004e4622 | INT_02d83200
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004e4627
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004e462c
    PUSH 0x1                            ; 004e462f
    PUSH 0x62d7fe                       ; 004e4631 | = "Bip01 R ForeArm"
    PUSH EBX                            ; 004e4636
    MOV [0x02d8320c],EAX                ; 004e4637 | INT_02d8320c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004e463c
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004e4641
    PUSH 0x1                            ; 004e4644
    PUSH 0x62d80e                       ; 004e4646 | = "Bip01 L UpperArm"
    PUSH EBX                            ; 004e464b
    MOV [0x02d83210],EAX                ; 004e464c | INT_02d83210
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004e4651
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004e4656
    PUSH 0x1                            ; 004e4659
    PUSH 0x62d81f                       ; 004e465b | = "Bip01 R UpperArm"
    PUSH EBX                            ; 004e4660
    MOV [0x02d83214],EAX                ; 004e4661 | INT_02d83214
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004e4666
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004e466b
    PUSH 0x1                            ; 004e466e
    PUSH 0x62d830                       ; 004e4670 | = "Bip01 L Foot"
    PUSH EBX                            ; 004e4675
    MOV [0x02d83218],EAX                ; 004e4676 | INT_02d83218
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004e467b
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004e4680
    PUSH 0x1                            ; 004e4683
    PUSH 0x62d83d                       ; 004e4685 | = "Bip01 R Foot"
    PUSH EBX                            ; 004e468a
    MOV [0x02d8321c],EAX                ; 004e468b | INT_02d8321c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004e4690
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004e4695
    PUSH 0x1                            ; 004e4698
    PUSH 0x62d84a                       ; 004e469a | = "Bip01 L Hand"
    PUSH EBX                            ; 004e469f
    MOV [0x02d83220],EAX                ; 004e46a0 | INT_02d83220
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004e46a5
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004e46aa
    MOV [0x02d83204],EAX                ; 004e46ad | INT_02d83204
    PUSH 0x1                            ; 004e46b2
    PUSH 0x62d857                       ; 004e46b4 | = "Bip01 R Hand"
    PUSH EBX                            ; 004e46b9
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004e46ba
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004e46bf
    PUSH 0x1                            ; 004e46c2
    PUSH 0x62d864                       ; 004e46c4 | = "Bip01 Spine"
    PUSH EBX                            ; 004e46c9
    MOV [0x02d83208],EAX                ; 004e46ca | INT_02d83208
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004e46cf
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004e46d4
    PUSH 0x1                            ; 004e46d7
    PUSH 0x62d870                       ; 004e46d9 | = "Bip01 Spine1"
    PUSH EBX                            ; 004e46de
    MOV [0x02d83224],EAX                ; 004e46df | INT_02d83224
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004e46e4
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004e46e9
    PUSH 0x1                            ; 004e46ec
    PUSH 0x62d87d                       ; 004e46ee | = "Bip01 Spine2"
    PUSH EBX                            ; 004e46f3
    MOV [0x02d83228],EAX                ; 004e46f4 | INT_02d83228
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004e46f9
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004e46fe
    PUSH 0x1                            ; 004e4701
    PUSH 0x62d88a                       ; 004e4703 | = "Bip01 Head"
    PUSH EBX                            ; 004e4708
    MOV [0x02d8322c],EAX                ; 004e4709 | INT_02d8322c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004e470e
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004e4713
    PUSH 0x1                            ; 004e4716
    PUSH 0x62d895                       ; 004e4718 | = "Bip01 L UpperArm"
    PUSH EBX                            ; 004e471d
    MOV [0x02d83200],EAX                ; 004e471e | INT_02d83200
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004e4723
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004e4728
    PUSH 0x1                            ; 004e472b
    PUSH 0x62d8a6                       ; 004e472d | = "Bip01 R UpperArm"
    PUSH EBX                            ; 004e4732
    MOV [0x02d83214],EAX                ; 004e4733 | INT_02d83214
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004e4738
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004e473d
    PUSH 0x1                            ; 004e4740
    PUSH 0x62d8b7                       ; 004e4742 | = "Bip01 Spine"
    PUSH EBX                            ; 004e4747
    MOV [0x02d83218],EAX                ; 004e4748 | INT_02d83218
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004e474d
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004e4752
    PUSH 0x1                            ; 004e4755
    PUSH 0x62d8c3                       ; 004e4757 | = "Bip01 Spine2"
    PUSH EBX                            ; 004e475c
    MOV [0x02d83224],EAX                ; 004e475d | INT_02d83224
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004e4762
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004e4767
    PUSH EDI                            ; 004e476a
    MOV [0x02d8322c],EAX                ; 004e476b | INT_02d8322c
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 004e4770
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    MOV EBX,EAX                         ; 004e4775
    ADD ESP,0x4                         ; 004e4777
    PUSH 0x1                            ; 004e477a
    PUSH 0x62d8d0                       ; 004e477c | = "larm01"
    PUSH EAX                            ; 004e4781
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004e4782
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004e4787
    PUSH 0x1                            ; 004e478a
    PUSH 0x62d8d7                       ; 004e478c | = "l4arm01"
    PUSH EBX                            ; 004e4791
    MOV dword ptr [ESI + 0xbebc],EAX    ; 004e4792
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004e4798
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004e479d
    PUSH 0x1                            ; 004e47a0
    PUSH 0x62d8df                       ; 004e47a2 | = "rarm01"
    PUSH EBX                            ; 004e47a7
    MOV dword ptr [ESI + 0xbec0],EAX    ; 004e47a8
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004e47ae
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004e47b3
    PUSH 0x1                            ; 004e47b6
    PUSH 0x62d8e6                       ; 004e47b8 | = "r4arm01"
    PUSH EBX                            ; 004e47bd
    MOV dword ptr [ESI + 0xbec4],EAX    ; 004e47be
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004e47c4
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004e47c9
    PUSH 0x1                            ; 004e47cc
    PUSH 0x62d8ee                       ; 004e47ce | = "rthigh01"
    PUSH EBX                            ; 004e47d3
    MOV dword ptr [ESI + 0xbec8],EAX    ; 004e47d4
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004e47da
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004e47df
    PUSH 0x1                            ; 004e47e2
    PUSH 0x62d8f7                       ; 004e47e4 | = "rshin01"
    PUSH EBX                            ; 004e47e9
    MOV dword ptr [ESI + 0xbecc],EAX    ; 004e47ea
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004e47f0
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004e47f5
    PUSH 0x1                            ; 004e47f8
    PUSH 0x62d8ff                       ; 004e47fa | = "lthigh01"
    PUSH EBX                            ; 004e47ff
    MOV dword ptr [ESI + 0xbed0],EAX    ; 004e4800
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004e4806
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004e480b
    PUSH 0x1                            ; 004e480e
    PUSH 0x62d908                       ; 004e4810 | = "lshin01"
    PUSH EBX                            ; 004e4815
    MOV dword ptr [ESI + 0xbed4],EAX    ; 004e4816
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004e481c
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004e4821
    PUSH 0x1                            ; 004e4824
    PUSH 0x62d910                       ; 004e4826 | = "ass01"
    PUSH EBX                            ; 004e482b
    MOV dword ptr [ESI + 0xbed8],EAX    ; 004e482c
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004e4832
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004e4837
    MOV dword ptr [ESI + 0xbedc],EAX    ; 004e483a
    PUSH 0x1                            ; 004e4840
    PUSH 0x62d916                       ; 004e4842 | = "torso01"
    PUSH EBX                            ; 004e4847
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004e4848
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004e484d
    PUSH 0x1                            ; 004e4850
    PUSH 0x62d91e                       ; 004e4852 | = "head01"
    PUSH EBX                            ; 004e4857
    MOV dword ptr [ESI + 0xbee0],EAX    ; 004e4858
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004e485e
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004e4863
    PUSH 0x1                            ; 004e4866
    PUSH 0x62d925                       ; 004e4868 | = "tail01"
    PUSH EBX                            ; 004e486d
    MOV dword ptr [ESI + 0xbee4],EAX    ; 004e486e
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004e4874
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    MOV dword ptr [ESI + 0xbefc],0x0    ; 004e4879
    MOV dword ptr [ESI + 0xbf00],0x0    ; 004e4883
    ADD ESP,0xc                         ; 004e488d
    MOV dword ptr [ESI + 0xbee8],EAX    ; 004e4890
    POP EDI                             ; 004e4896
    POP ESI                             ; 004e4897
    POP EBX                             ; 004e4898
    RET                                 ; 004e4899

