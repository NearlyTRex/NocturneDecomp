; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_construc_cpp_CConstruct_setup_FUN_004425f0(CConstruct *this_ptr)
;
; Parameters:
; CConstruct *     Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_COMBATMODEHARD_005b9435
;   TerminatedCString s_Bip01_Head_005b9444
;   TerminatedCString s_Dummy05_005b944f
;   TerminatedCString s_Bip01_L_Forearm_005b9457
;   TerminatedCString s_Bip01_R_ForeArm_005b9467
;   TerminatedCString s_Bip01_L_UpperArm_005b9477
;   TerminatedCString s_Bip01_R_UpperArm_005b9488
;   TerminatedCString s_Bip01_L_Foot_005b9499
;   TerminatedCString s_Bip01_R_Foot_005b94a6
;   TerminatedCString s_Bip01_L_Hand_005b94b3
;   TerminatedCString s_Bip01_R_Hand_005b94c0
;   TerminatedCString s_Bip01_R_Finger0_005b94cd
;   TerminatedCString s_Bip01_L_Finger0_005b94dd
;   TerminatedCString s_Bip01_Spine_005b94ed
;   TerminatedCString s_Bip01_Spine1_005b94f9
;   ... and 26 more
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_00489110
;   core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0
;   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00548090
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004425f0
        ;   Label: core_construc.cpp_CConstruct_setup_FUN_004425f0
    PUSH ESI                            ; 004425f1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004425f2
    PUSH 0x5b9435                       ; 004425f6 | = "COMBATMODEHARD"
    MOV EDX,dword ptr [0x005fba60]      ; 004425fb | DAT_005fba60
    PUSH EDX                            ; 00442601
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 00442602
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00442607
    TEST EAX,EAX                        ; 0044260a
    JNZ 0x004428a7                      ; 0044260c
        ;   XREF to: 004428a7 (CONDITIONAL_JUMP)  ; LAB_004428a7
    MOV dword ptr [EBX + 0xd858],0x3f400000 ; 00442612
    PUSH EDI                            ; 0044261c
        ;   Label: LAB_0044261c
    PUSH EBX                            ; 0044261d
    CALL core_enemy.cpp_CEnemy_setup_FUN_00489110 ; 0044261e
        ;   XREF to: 00489110 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_00489110(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00442623
    LEA EDI,[EBX + 0x158]               ; 00442626
    PUSH EDI                            ; 0044262c
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0 ; 0044262d
        ;   XREF to: 0054e6b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(CDeformableModelInstance * this_ptr)
    FLD float ptr [EBX + 0x2538]        ; 00442632
    ADD ESP,0x4                         ; 00442638
    CALL crt_math.c_round_FUN_005a3120  ; 0044263b
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    PUSH EDI                            ; 00442640
    FISTP dword ptr [EBX + 0xd17c]      ; 00442641
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 00442647
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0044264c
    PUSH 0x1                            ; 0044264f
    PUSH 0x5b9444                       ; 00442651 | = "Bip01 Head"
    PUSH EAX                            ; 00442656
    MOV ESI,EAX                         ; 00442657
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00442659
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0044265e
    PUSH 0x1                            ; 00442661
    PUSH 0x5b944f                       ; 00442663 | = "Dummy05"
    PUSH ESI                            ; 00442668
    MOV [0x007f8e64],EAX                ; 00442669 | DAT_007f8e64
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 0044266e
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00442673
    PUSH 0x1                            ; 00442676
    PUSH 0x5b9457                       ; 00442678 | = "Bip01 L Forearm"
    PUSH ESI                            ; 0044267d
    MOV [0x007f8e68],EAX                ; 0044267e | DAT_007f8e68
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00442683
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00442688
    PUSH 0x1                            ; 0044268b
    PUSH 0x5b9467                       ; 0044268d | = "Bip01 R ForeArm"
    PUSH ESI                            ; 00442692
    MOV [0x007f8e7c],EAX                ; 00442693 | DAT_007f8e7c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00442698
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0044269d
    PUSH 0x1                            ; 004426a0
    PUSH 0x5b9477                       ; 004426a2 | = "Bip01 L UpperArm"
    PUSH ESI                            ; 004426a7
    MOV [0x007f8e80],EAX                ; 004426a8 | DAT_007f8e80
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004426ad
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004426b2
    PUSH 0x1                            ; 004426b5
    PUSH 0x5b9488                       ; 004426b7 | = "Bip01 R UpperArm"
    PUSH ESI                            ; 004426bc
    MOV [0x007f8e84],EAX                ; 004426bd | DAT_007f8e84
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004426c2
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004426c7
    PUSH 0x1                            ; 004426ca
    PUSH 0x5b9499                       ; 004426cc | = "Bip01 L Foot"
    PUSH ESI                            ; 004426d1
    MOV [0x007f8e88],EAX                ; 004426d2 | DAT_007f8e88
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004426d7
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004426dc
    PUSH 0x1                            ; 004426df
    PUSH 0x5b94a6                       ; 004426e1 | = "Bip01 R Foot"
    PUSH ESI                            ; 004426e6
    MOV [0x007f8e8c],EAX                ; 004426e7 | DAT_007f8e8c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004426ec
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004426f1
    MOV [0x007f8e90],EAX                ; 004426f4 | DAT_007f8e90
    PUSH 0x1                            ; 004426f9
    PUSH 0x5b94b3                       ; 004426fb | = "Bip01 L Hand"
    PUSH ESI                            ; 00442700
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00442701
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00442706
    PUSH 0x1                            ; 00442709
    PUSH 0x5b94c0                       ; 0044270b | = "Bip01 R Hand"
    PUSH ESI                            ; 00442710
    MOV [0x007f8e6c],EAX                ; 00442711 | DAT_007f8e6c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00442716
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0044271b
    PUSH 0x1                            ; 0044271e
    PUSH 0x5b94cd                       ; 00442720 | = "Bip01 R Finger0"
    PUSH ESI                            ; 00442725
    MOV [0x007f8e70],EAX                ; 00442726 | DAT_007f8e70
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 0044272b
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00442730
    PUSH 0x1                            ; 00442733
    PUSH 0x5b94dd                       ; 00442735 | = "Bip01 L Finger0"
    PUSH ESI                            ; 0044273a
    MOV [0x007f8e74],EAX                ; 0044273b | DAT_007f8e74
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00442740
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00442745
    PUSH 0x1                            ; 00442748
    PUSH 0x5b94ed                       ; 0044274a | = "Bip01 Spine"
    PUSH ESI                            ; 0044274f
    MOV [0x007f8e78],EAX                ; 00442750 | DAT_007f8e78
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00442755
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0044275a
    PUSH 0x1                            ; 0044275d
    PUSH 0x5b94f9                       ; 0044275f | = "Bip01 Spine1"
    PUSH ESI                            ; 00442764
    MOV [0x007f8e94],EAX                ; 00442765 | DAT_007f8e94
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 0044276a
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0044276f
    PUSH EDI                            ; 00442772
    MOV [0x007f8e98],EAX                ; 00442773 | DAT_007f8e98
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40 ; 00442778
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0044277d
    PUSH 0x1                            ; 00442780
    PUSH 0x5b9506                       ; 00442782 | DAT_005b9506
    PUSH EAX                            ; 00442787
    MOV ESI,EAX                         ; 00442788
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 0044278a
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0044278f
    PUSH 0x1                            ; 00442792
    PUSH 0x5b950b                       ; 00442794 | = "torso"
    PUSH ESI                            ; 00442799
    MOV dword ptr [EBX + 0xd0b8],EAX    ; 0044279a
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 004427a0
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004427a5
    PUSH 0x1                            ; 004427a8
    PUSH 0x5b9511                       ; 004427aa | = "lforearm"
    PUSH ESI                            ; 004427af
    MOV dword ptr [EBX + 0xd0bc],EAX    ; 004427b0
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 004427b6
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004427bb
    MOV dword ptr [EBX + 0xd0c0],EAX    ; 004427be
    POP EDI                             ; 004427c4
    PUSH 0x1                            ; 004427c5
    PUSH 0x5b951a                       ; 004427c7 | DAT_005b951a
    PUSH ESI                            ; 004427cc
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 004427cd
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004427d2
    PUSH 0x1                            ; 004427d5
    PUSH 0x5b951f                       ; 004427d7 | = "rforearm"
    PUSH ESI                            ; 004427dc
    MOV dword ptr [EBX + 0xd0c4],EAX    ; 004427dd
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 004427e3
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004427e8
    PUSH 0x1                            ; 004427eb
    PUSH 0x5b9528                       ; 004427ed | DAT_005b9528
    PUSH ESI                            ; 004427f2
    MOV dword ptr [EBX + 0xd0c8],EAX    ; 004427f3
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 004427f9
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004427fe
    PUSH 0x1                            ; 00442801
    PUSH 0x5b952d                       ; 00442803 | = "waist"
    PUSH ESI                            ; 00442808
    MOV dword ptr [EBX + 0xd0cc],EAX    ; 00442809
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 0044280f
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00442814
    PUSH 0x1                            ; 00442817
    PUSH 0x5b9533                       ; 00442819 | = "lthigh"
    PUSH ESI                            ; 0044281e
    MOV dword ptr [EBX + 0xd0d0],EAX    ; 0044281f
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 00442825
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0044282a
    PUSH 0x1                            ; 0044282d
    PUSH 0x5b953a                       ; 0044282f | = "lshin"
    PUSH ESI                            ; 00442834
    MOV dword ptr [EBX + 0xd0d8],EAX    ; 00442835
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 0044283b
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00442840
    PUSH 0x1                            ; 00442843
    PUSH 0x5b9540                       ; 00442845 | = "rthigh"
    PUSH ESI                            ; 0044284a
    MOV dword ptr [EBX + 0xd0dc],EAX    ; 0044284b
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 00442851
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00442856
    PUSH 0x1                            ; 00442859
    PUSH 0x5b9547                       ; 0044285b | = "rshin"
    PUSH ESI                            ; 00442860
    MOV dword ptr [EBX + 0xd0e0],EAX    ; 00442861
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 00442867
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    MOV dword ptr [EBX + 0xd0f0],0x0    ; 0044286c
    ADD ESP,0xc                         ; 00442876
    MOV ECX,dword ptr [EBX + 0x3268]    ; 00442879
    MOV dword ptr [EBX + 0xd0e4],EAX    ; 0044287f
    TEST ECX,ECX                        ; 00442885
    JZ 0x0044295c                       ; 00442887
        ;   XREF to: 0044295c (CONDITIONAL_JUMP)  ; LAB_0044295c
    MOV ESI,dword ptr [EBX + 0xd84c]    ; 0044288d
    CMP ESI,0x1                         ; 00442893
    JNC 0x004429c9                      ; 00442896
        ;   XREF to: 004429c9 (CONDITIONAL_JUMP)  ; LAB_004429c9
    TEST ESI,ESI                        ; 0044289c
    JZ 0x004429a2                       ; 0044289e
        ;   XREF to: 004429a2 (CONDITIONAL_JUMP)  ; LAB_004429a2
    POP ESI                             ; 004428a4
    POP EBX                             ; 004428a5
    RET                                 ; 004428a6
    MOV dword ptr [EBX + 0xd858],0x3f800000 ; 004428a7
        ;   Label: LAB_004428a7
    JMP 0x0044261c                      ; 004428b1
        ;   XREF to: 0044261c (UNCONDITIONAL_JUMP)  ; LAB_0044261c
    MOV dword ptr [EBX + 0xce5c],0x41200000 ; 004428b6
        ;   Label: LAB_004428b6
    MOV dword ptr [EBX + 0xce60],0x41200000 ; 004428c0
    MOV dword ptr [EBX + 0x2538],0x42340000 ; 004428ca
    FLD float ptr [EBX + 0x2538]        ; 004428d4
    CALL crt_math.c_round_FUN_005a3120  ; 004428da
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [EBX + 0xd17c]      ; 004428df
    POP ESI                             ; 004428e5
    POP EBX                             ; 004428e6
    RET                                 ; 004428e7
    MOV dword ptr [EBX + 0xce5c],0x41700000 ; 004428e8
        ;   Label: LAB_004428e8
    MOV dword ptr [EBX + 0xce60],0x41200000 ; 004428f2
    MOV dword ptr [EBX + 0xd85c],0x3    ; 004428fc
    MOV dword ptr [EBX + 0x2538],0x425c0000 ; 00442906
    FLD float ptr [EBX + 0x2538]        ; 00442910
    CALL crt_math.c_round_FUN_005a3120  ; 00442916
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [EBX + 0xd17c]      ; 0044291b
    POP ESI                             ; 00442921
    POP EBX                             ; 00442922
    RET                                 ; 00442923
    MOV dword ptr [EBX + 0xce5c],0x41a00000 ; 00442924
        ;   Label: LAB_00442924
    MOV dword ptr [EBX + 0xce60],0x41200000 ; 0044292e
    MOV dword ptr [EBX + 0x2538],0x42820000 ; 00442938
    MOV dword ptr [EBX + 0xd85c],ESI    ; 00442942
    FLD float ptr [EBX + 0x2538]        ; 00442948
    CALL crt_math.c_round_FUN_005a3120  ; 0044294e
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [EBX + 0xd17c]      ; 00442953
    POP ESI                             ; 00442959
    POP EBX                             ; 0044295a
    RET                                 ; 0044295b
    MOV ESI,dword ptr [EBX + 0xd84c]    ; 0044295c
        ;   Label: LAB_0044295c
    CMP ESI,0x1                         ; 00442962
    JNC 0x00442983                      ; 00442965
        ;   XREF to: 00442983 (CONDITIONAL_JUMP)  ; LAB_00442983
    TEST ESI,ESI                        ; 00442967
    JZ 0x004428b6                       ; 00442969
        ;   XREF to: 004428b6 (CONDITIONAL_JUMP)  ; LAB_004428b6
    FLD float ptr [EBX + 0x2538]        ; 0044296f
    CALL crt_math.c_round_FUN_005a3120  ; 00442975
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [EBX + 0xd17c]      ; 0044297a
    POP ESI                             ; 00442980
    POP EBX                             ; 00442981
    RET                                 ; 00442982
    JBE 0x004428e8                      ; 00442983
        ;   XREF to: 004428e8 (CONDITIONAL_JUMP)  ; LAB_004428e8
        ;   Label: LAB_00442983
    CMP ESI,0x2                         ; 00442989
    JZ 0x00442924                       ; 0044298c
        ;   XREF to: 00442924 (CONDITIONAL_JUMP)  ; LAB_00442924
    FLD float ptr [EBX + 0x2538]        ; 0044298e
    CALL crt_math.c_round_FUN_005a3120  ; 00442994
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [EBX + 0xd17c]      ; 00442999
    POP ESI                             ; 0044299f
    POP EBX                             ; 004429a0
    RET                                 ; 004429a1
    MOV dword ptr [EBX + 0xd17c],0x2d   ; 004429a2
        ;   Label: LAB_004429a2
    POP ESI                             ; 004429ac
    POP EBX                             ; 004429ad
    RET                                 ; 004429ae
    MOV dword ptr [EBX + 0xd17c],0x37   ; 004429af
        ;   Label: LAB_004429af
    POP ESI                             ; 004429b9
    POP EBX                             ; 004429ba
    RET                                 ; 004429bb
    MOV dword ptr [EBX + 0xd17c],0x41   ; 004429bc
        ;   Label: LAB_004429bc
    POP ESI                             ; 004429c6
    POP EBX                             ; 004429c7
    RET                                 ; 004429c8
    JBE 0x004429af                      ; 004429c9
        ;   XREF to: 004429af (CONDITIONAL_JUMP)  ; LAB_004429af
        ;   Label: LAB_004429c9
    CMP ESI,0x2                         ; 004429cb
    JZ 0x004429bc                       ; 004429ce
        ;   XREF to: 004429bc (CONDITIONAL_JUMP)  ; LAB_004429bc
    POP ESI                             ; 004429d0
    POP EBX                             ; 004429d1
    RET                                 ; 004429d2

