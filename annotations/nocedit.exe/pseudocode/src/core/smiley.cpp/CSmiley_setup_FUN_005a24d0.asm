; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_smiley_cpp_CSmiley_setup_FUN_005a24d0(CSmiley *this_ptr)
;
; Parameters:
; CSmiley *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Head_0064f170
;   TerminatedCString s_Bip01_L_ForeArm_0064f17b
;   TerminatedCString s_Bip01_R_ForeArm_0064f18b
;   TerminatedCString s_Bip01_L_UpperArm_0064f19b
;   TerminatedCString s_Bip01_R_UpperArm_0064f1ac
;   TerminatedCString s_Bip01_L_Foot_0064f1bd
;   TerminatedCString s_Bip01_R_Foot_0064f1ca
;   TerminatedCString s_Bip01_L_Hand_0064f1d7
;   TerminatedCString s_Bip01_R_Hand_0064f1e4
;   TerminatedCString s_Bip01_Spine_0064f1f1
;   TerminatedCString s_Bip01_Spine1_0064f1fd
;   TerminatedCString s_Bip01_Spine2_0064f20a
;   TerminatedCString s_Bip01_Head_0064f217
;   TerminatedCString s_Bip01_L_UpperArm_0064f222
;   TerminatedCString s_Bip01_R_UpperArm_0064f233
;   ... and 27 more
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_004a9650
;   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
;   crt_string.c_stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a24d0
        ;   Label: core_smiley.cpp_CSmiley_setup_FUN_005a24d0
    PUSH ESI                            ; 005a24d1
    PUSH EDI                            ; 005a24d2
    PUSH EBP                            ; 005a24d3
    MOV EBP,ESP                         ; 005a24d4
    MOV EBX,dword ptr [EBP + 0x14]      ; 005a24d6
    PUSH EBX                            ; 005a24d9
    CALL core_enemy.cpp_CEnemy_setup_FUN_004a9650 ; 005a24da
        ;   XREF to: 004a9650 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_004a9650(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 005a24df
    LEA EDI,[EBX + 0x158]               ; 005a24e2
    PUSH EDI                            ; 005a24e8
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450 ; 005a24e9
        ;   XREF to: 005a0450 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a24ee
    PUSH EDI                            ; 005a24f1
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 005a24f2
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a24f7
    PUSH 0x1                            ; 005a24fa
    PUSH 0x64f170                       ; 005a24fc | = "Bip01 Head"
    PUSH EAX                            ; 005a2501
    MOV ESI,EAX                         ; 005a2502
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005a2504
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005a2509
    PUSH 0x1                            ; 005a250c
    PUSH 0x64f17b                       ; 005a250e | = "Bip01 L ForeArm"
    PUSH ESI                            ; 005a2513
    MOV [0x03f48fa0],EAX                ; 005a2514 | INT_03f48fa0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005a2519
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005a251e
    PUSH 0x1                            ; 005a2521
    PUSH 0x64f18b                       ; 005a2523 | = "Bip01 R ForeArm"
    PUSH ESI                            ; 005a2528
    MOV [0x03f48fac],EAX                ; 005a2529 | INT_03f48fac
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005a252e
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005a2533
    PUSH 0x1                            ; 005a2536
    PUSH 0x64f19b                       ; 005a2538 | = "Bip01 L UpperArm"
    PUSH ESI                            ; 005a253d
    MOV [0x03f48fb0],EAX                ; 005a253e | INT_03f48fb0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005a2543
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005a2548
    PUSH 0x1                            ; 005a254b
    PUSH 0x64f1ac                       ; 005a254d | = "Bip01 R UpperArm"
    PUSH ESI                            ; 005a2552
    MOV [0x03f48fb4],EAX                ; 005a2553 | INT_03f48fb4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005a2558
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005a255d
    PUSH 0x1                            ; 005a2560
    PUSH 0x64f1bd                       ; 005a2562 | = "Bip01 L Foot"
    PUSH ESI                            ; 005a2567
    MOV [0x03f48fb8],EAX                ; 005a2568 | INT_03f48fb8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005a256d
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005a2572
    PUSH 0x1                            ; 005a2575
    PUSH 0x64f1ca                       ; 005a2577 | = "Bip01 R Foot"
    PUSH ESI                            ; 005a257c
    MOV [0x03f48fbc],EAX                ; 005a257d | INT_03f48fbc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005a2582
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005a2587
    PUSH 0x1                            ; 005a258a
    PUSH 0x64f1d7                       ; 005a258c | = "Bip01 L Hand"
    PUSH ESI                            ; 005a2591
    MOV [0x03f48fc0],EAX                ; 005a2592 | INT_03f48fc0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005a2597
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005a259c
    MOV [0x03f48fa4],EAX                ; 005a259f | INT_03f48fa4
    PUSH 0x1                            ; 005a25a4
    PUSH 0x64f1e4                       ; 005a25a6 | = "Bip01 R Hand"
    PUSH ESI                            ; 005a25ab
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005a25ac
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005a25b1
    PUSH 0x1                            ; 005a25b4
    PUSH 0x64f1f1                       ; 005a25b6 | = "Bip01 Spine"
    PUSH ESI                            ; 005a25bb
    MOV [0x03f48fa8],EAX                ; 005a25bc | INT_03f48fa8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005a25c1
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005a25c6
    PUSH 0x1                            ; 005a25c9
    PUSH 0x64f1fd                       ; 005a25cb | = "Bip01 Spine1"
    PUSH ESI                            ; 005a25d0
    MOV [0x03f48fc4],EAX                ; 005a25d1 | INT_03f48fc4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005a25d6
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005a25db
    PUSH 0x1                            ; 005a25de
    PUSH 0x64f20a                       ; 005a25e0 | = "Bip01 Spine2"
    PUSH ESI                            ; 005a25e5
    MOV [0x03f48fc8],EAX                ; 005a25e6 | INT_03f48fc8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005a25eb
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005a25f0
    PUSH 0x1                            ; 005a25f3
    PUSH 0x64f217                       ; 005a25f5 | = "Bip01 Head"
    PUSH ESI                            ; 005a25fa
    MOV [0x03f48fcc],EAX                ; 005a25fb | INT_03f48fcc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005a2600
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005a2605
    PUSH 0x1                            ; 005a2608
    PUSH 0x64f222                       ; 005a260a | = "Bip01 L UpperArm"
    PUSH ESI                            ; 005a260f
    MOV [0x03f48fa0],EAX                ; 005a2610 | INT_03f48fa0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005a2615
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005a261a
    PUSH 0x1                            ; 005a261d
    PUSH 0x64f233                       ; 005a261f | = "Bip01 R UpperArm"
    PUSH ESI                            ; 005a2624
    MOV [0x03f48fb4],EAX                ; 005a2625 | INT_03f48fb4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005a262a
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005a262f
    PUSH 0x1                            ; 005a2632
    PUSH 0x64f244                       ; 005a2634 | = "Bip01 Spine"
    PUSH ESI                            ; 005a2639
    MOV [0x03f48fb8],EAX                ; 005a263a | INT_03f48fb8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005a263f
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005a2644
    PUSH 0x1                            ; 005a2647
    PUSH 0x64f250                       ; 005a2649 | = "Bip01 Spine2"
    PUSH ESI                            ; 005a264e
    MOV [0x03f48fc4],EAX                ; 005a264f | INT_03f48fc4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005a2654
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005a2659
    PUSH EDI                            ; 005a265c
    MOV [0x03f48fcc],EAX                ; 005a265d | INT_03f48fcc
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 005a2662
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    MOV ESI,EAX                         ; 005a2667
    ADD ESP,0x4                         ; 005a2669
    PUSH 0x1                            ; 005a266c
    PUSH 0x64f25d                       ; 005a266e | = "larm01"
    PUSH EAX                            ; 005a2673
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 005a2674
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 005a2679
    PUSH 0x1                            ; 005a267c
    PUSH 0x64f264                       ; 005a267e | = "l4arm01"
    PUSH ESI                            ; 005a2683
    MOV dword ptr [EBX + 0xbec4],EAX    ; 005a2684
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 005a268a
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 005a268f
    PUSH 0x1                            ; 005a2692
    PUSH 0x64f26c                       ; 005a2694 | = "rarm01"
    PUSH ESI                            ; 005a2699
    MOV dword ptr [EBX + 0xbec8],EAX    ; 005a269a
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 005a26a0
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 005a26a5
    PUSH 0x1                            ; 005a26a8
    PUSH 0x64f273                       ; 005a26aa | = "r4arm01"
    PUSH ESI                            ; 005a26af
    MOV dword ptr [EBX + 0xbecc],EAX    ; 005a26b0
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 005a26b6
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 005a26bb
    PUSH 0x1                            ; 005a26be
    PUSH 0x64f27b                       ; 005a26c0 | = "rthigh01"
    PUSH ESI                            ; 005a26c5
    MOV dword ptr [EBX + 0xbed0],EAX    ; 005a26c6
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 005a26cc
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 005a26d1
    PUSH 0x1                            ; 005a26d4
    PUSH 0x64f284                       ; 005a26d6 | = "rshin01"
    PUSH ESI                            ; 005a26db
    MOV dword ptr [EBX + 0xbed4],EAX    ; 005a26dc
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 005a26e2
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 005a26e7
    PUSH 0x1                            ; 005a26ea
    PUSH 0x64f28c                       ; 005a26ec | = "lthigh01"
    PUSH ESI                            ; 005a26f1
    MOV dword ptr [EBX + 0xbed8],EAX    ; 005a26f2
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 005a26f8
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 005a26fd
    PUSH 0x1                            ; 005a2700
    PUSH 0x64f295                       ; 005a2702 | = "lshin01"
    PUSH ESI                            ; 005a2707
    MOV dword ptr [EBX + 0xbedc],EAX    ; 005a2708
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 005a270e
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 005a2713
    PUSH 0x1                            ; 005a2716
    PUSH 0x64f29d                       ; 005a2718 | = "ass01"
    PUSH ESI                            ; 005a271d
    MOV dword ptr [EBX + 0xbee0],EAX    ; 005a271e
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 005a2724
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 005a2729
    MOV dword ptr [EBX + 0xbee4],EAX    ; 005a272c
    PUSH 0x1                            ; 005a2732
    PUSH 0x64f2a3                       ; 005a2734 | = "torso01"
    PUSH ESI                            ; 005a2739
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 005a273a
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 005a273f
    PUSH 0x1                            ; 005a2742
    PUSH 0x64f2ab                       ; 005a2744 | = "head01"
    PUSH ESI                            ; 005a2749
    MOV dword ptr [EBX + 0xbee8],EAX    ; 005a274a
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 005a2750
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    MOV dword ptr [EBX + 0xbef0],0x0    ; 005a2755
    ADD ESP,0xc                         ; 005a275f
    MOV dword ptr [EBX + 0xbeec],EAX    ; 005a2762
    PUSH 0x64f2b2                       ; 005a2768 | = "smiley2.dfm"
    LEA EAX,[EBX + 0x23b8]              ; 005a276d
    MOV dword ptr [EBX + 0xbef4],0x0    ; 005a2773
    PUSH EAX                            ; 005a277d
    MOV dword ptr [EBX + 0xbefc],0x1    ; 005a277e
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 005a2788
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005a278d
    TEST EAX,EAX                        ; 005a2790
    JNZ 0x005a279e                      ; 005a2792
        ;   XREF to: 005a279e (CONDITIONAL_JUMP)  ; LAB_005a279e
    MOV dword ptr [EBX + 0xbefc],0x2    ; 005a2794
    PUSH 0x64f2be                       ; 005a279e | = "smiley3.dfm"
        ;   Label: LAB_005a279e
    LEA EAX,[EBX + 0x23b8]              ; 005a27a3
    PUSH EAX                            ; 005a27a9
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 005a27aa
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005a27af
    TEST EAX,EAX                        ; 005a27b2
    JZ 0x005a27bb                       ; 005a27b4
        ;   XREF to: 005a27bb (CONDITIONAL_JUMP)  ; LAB_005a27bb
    POP EBP                             ; 005a27b6
    POP EDI                             ; 005a27b7
    POP ESI                             ; 005a27b8
    POP EBX                             ; 005a27b9
    RET                                 ; 005a27ba
    MOV dword ptr [EBX + 0xbefc],0x3    ; 005a27bb
        ;   Label: LAB_005a27bb
    MOV dword ptr [EBX + 0x2624],EAX    ; 005a27c5
    POP EBP                             ; 005a27cb
    POP EDI                             ; 005a27cc
    POP ESI                             ; 005a27cd
    POP EBX                             ; 005a27ce
    RET                                 ; 005a27cf

