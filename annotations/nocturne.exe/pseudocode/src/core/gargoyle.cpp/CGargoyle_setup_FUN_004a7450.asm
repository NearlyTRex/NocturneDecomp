; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gargoyle_cpp_CGargoyle_setup_FUN_004a7450(CEnemy *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Head_00584837
;   TerminatedCString s_Bip01_L_ForeArm_00584842
;   TerminatedCString s_Bip01_R_ForeArm_00584852
;   TerminatedCString s_Bip01_L_UpperArm_00584862
;   TerminatedCString s_Bip01_R_UpperArm_00584873
;   TerminatedCString s_Bip01_L_Foot_00584884
;   TerminatedCString s_Bip01_R_Foot_00584891
;   TerminatedCString s_Bip01_L_Hand_0058489e
;   TerminatedCString s_Bip01_R_Hand_005848ab
;   TerminatedCString s_Bip01_Spine_005848b8
;   TerminatedCString s_Bip01_Spine1_005848c4
;   TerminatedCString s_Bip01_Spine2_005848d1
;   TerminatedCString s_Bip01_Head_005848de
;   TerminatedCString s_Bip01_L_UpperArm_005848e9
;   TerminatedCString s_Bip01_R_UpperArm_005848fa
;   ... and 26 more
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_004796b0
;   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a7450
        ;   Label: core_gargoyle.cpp_CGargoyle_setup_FUN_004a7450
    PUSH ESI                            ; 004a7451
    PUSH EDI                            ; 004a7452
    MOV ESI,dword ptr [ESP + 0x10]      ; 004a7453
    PUSH ESI                            ; 004a7457
    CALL core_enemy.cpp_CEnemy_setup_FUN_004796b0 ; 004a7458
        ;   XREF to: 004796b0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_004796b0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004a745d
    LEA EDI,[ESI + 0x150]               ; 004a7460
    PUSH EDI                            ; 004a7466
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0 ; 004a7467
        ;   XREF to: 0051dcd0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004a746c
    PUSH EDI                            ; 004a746f
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 004a7470
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004a7475
    PUSH 0x1                            ; 004a7478
    PUSH 0x584837                       ; 004a747a | = "Bip01 Head"
    PUSH EAX                            ; 004a747f
    MOV EBX,EAX                         ; 004a7480
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004a7482
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004a7487
    PUSH 0x1                            ; 004a748a
    PUSH 0x584842                       ; 004a748c | = "Bip01 L ForeArm"
    PUSH EBX                            ; 004a7491
    MOV [0x01c78b18],EAX                ; 004a7492 | DAT_01c78b18
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004a7497
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004a749c
    PUSH 0x1                            ; 004a749f
    PUSH 0x584852                       ; 004a74a1 | = "Bip01 R ForeArm"
    PUSH EBX                            ; 004a74a6
    MOV [0x01c78b24],EAX                ; 004a74a7 | DAT_01c78b24
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004a74ac
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004a74b1
    PUSH 0x1                            ; 004a74b4
    PUSH 0x584862                       ; 004a74b6 | = "Bip01 L UpperArm"
    PUSH EBX                            ; 004a74bb
    MOV [0x01c78b28],EAX                ; 004a74bc | DAT_01c78b28
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004a74c1
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004a74c6
    PUSH 0x1                            ; 004a74c9
    PUSH 0x584873                       ; 004a74cb | = "Bip01 R UpperArm"
    PUSH EBX                            ; 004a74d0
    MOV [0x01c78b2c],EAX                ; 004a74d1 | DAT_01c78b2c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004a74d6
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004a74db
    PUSH 0x1                            ; 004a74de
    PUSH 0x584884                       ; 004a74e0 | = "Bip01 L Foot"
    PUSH EBX                            ; 004a74e5
    MOV [0x01c78b30],EAX                ; 004a74e6 | DAT_01c78b30
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004a74eb
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004a74f0
    PUSH 0x1                            ; 004a74f3
    PUSH 0x584891                       ; 004a74f5 | = "Bip01 R Foot"
    PUSH EBX                            ; 004a74fa
    MOV [0x01c78b34],EAX                ; 004a74fb | DAT_01c78b34
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004a7500
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004a7505
    PUSH 0x1                            ; 004a7508
    PUSH 0x58489e                       ; 004a750a | = "Bip01 L Hand"
    PUSH EBX                            ; 004a750f
    MOV [0x01c78b38],EAX                ; 004a7510 | DAT_01c78b38
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004a7515
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004a751a
    MOV [0x01c78b1c],EAX                ; 004a751d | DAT_01c78b1c
    PUSH 0x1                            ; 004a7522
    PUSH 0x5848ab                       ; 004a7524 | = "Bip01 R Hand"
    PUSH EBX                            ; 004a7529
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004a752a
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004a752f
    PUSH 0x1                            ; 004a7532
    PUSH 0x5848b8                       ; 004a7534 | = "Bip01 Spine"
    PUSH EBX                            ; 004a7539
    MOV [0x01c78b20],EAX                ; 004a753a | DAT_01c78b20
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004a753f
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004a7544
    PUSH 0x1                            ; 004a7547
    PUSH 0x5848c4                       ; 004a7549 | = "Bip01 Spine1"
    PUSH EBX                            ; 004a754e
    MOV [0x01c78b3c],EAX                ; 004a754f | DAT_01c78b3c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004a7554
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004a7559
    PUSH 0x1                            ; 004a755c
    PUSH 0x5848d1                       ; 004a755e | = "Bip01 Spine2"
    PUSH EBX                            ; 004a7563
    MOV [0x01c78b40],EAX                ; 004a7564 | DAT_01c78b40
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004a7569
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004a756e
    PUSH 0x1                            ; 004a7571
    PUSH 0x5848de                       ; 004a7573 | = "Bip01 Head"
    PUSH EBX                            ; 004a7578
    MOV [0x01c78b44],EAX                ; 004a7579 | DAT_01c78b44
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004a757e
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004a7583
    PUSH 0x1                            ; 004a7586
    PUSH 0x5848e9                       ; 004a7588 | = "Bip01 L UpperArm"
    PUSH EBX                            ; 004a758d
    MOV [0x01c78b18],EAX                ; 004a758e | DAT_01c78b18
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004a7593
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004a7598
    PUSH 0x1                            ; 004a759b
    PUSH 0x5848fa                       ; 004a759d | = "Bip01 R UpperArm"
    PUSH EBX                            ; 004a75a2
    MOV [0x01c78b2c],EAX                ; 004a75a3 | DAT_01c78b2c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004a75a8
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004a75ad
    PUSH 0x1                            ; 004a75b0
    PUSH 0x58490b                       ; 004a75b2 | = "Bip01 Spine"
    PUSH EBX                            ; 004a75b7
    MOV [0x01c78b30],EAX                ; 004a75b8 | DAT_01c78b30
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004a75bd
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004a75c2
    PUSH 0x1                            ; 004a75c5
    PUSH 0x584917                       ; 004a75c7 | = "Bip01 Spine2"
    PUSH EBX                            ; 004a75cc
    MOV [0x01c78b3c],EAX                ; 004a75cd | DAT_01c78b3c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004a75d2
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004a75d7
    PUSH EDI                            ; 004a75da
    MOV [0x01c78b44],EAX                ; 004a75db | DAT_01c78b44
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020 ; 004a75e0
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(CDeformableModelInstance * this_ptr)
    MOV EBX,EAX                         ; 004a75e5
    ADD ESP,0x4                         ; 004a75e7
    PUSH 0x1                            ; 004a75ea
    PUSH 0x584924                       ; 004a75ec | = "larm01"
    PUSH EAX                            ; 004a75f1
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 004a75f2
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004a75f7
    PUSH 0x1                            ; 004a75fa
    PUSH 0x58492b                       ; 004a75fc | = "l4arm01"
    PUSH EBX                            ; 004a7601
    MOV dword ptr [ESI + 0xbd24],EAX    ; 004a7602
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 004a7608
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004a760d
    PUSH 0x1                            ; 004a7610
    PUSH 0x584933                       ; 004a7612 | = "rarm01"
    PUSH EBX                            ; 004a7617
    MOV dword ptr [ESI + 0xbd28],EAX    ; 004a7618
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 004a761e
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004a7623
    PUSH 0x1                            ; 004a7626
    PUSH 0x58493a                       ; 004a7628 | = "r4arm01"
    PUSH EBX                            ; 004a762d
    MOV dword ptr [ESI + 0xbd2c],EAX    ; 004a762e
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 004a7634
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004a7639
    PUSH 0x1                            ; 004a763c
    PUSH 0x584942                       ; 004a763e | = "rthigh01"
    PUSH EBX                            ; 004a7643
    MOV dword ptr [ESI + 0xbd30],EAX    ; 004a7644
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 004a764a
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004a764f
    PUSH 0x1                            ; 004a7652
    PUSH 0x58494b                       ; 004a7654 | = "rshin01"
    PUSH EBX                            ; 004a7659
    MOV dword ptr [ESI + 0xbd34],EAX    ; 004a765a
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 004a7660
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004a7665
    PUSH 0x1                            ; 004a7668
    PUSH 0x584953                       ; 004a766a | = "lthigh01"
    PUSH EBX                            ; 004a766f
    MOV dword ptr [ESI + 0xbd38],EAX    ; 004a7670
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 004a7676
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004a767b
    PUSH 0x1                            ; 004a767e
    PUSH 0x58495c                       ; 004a7680 | = "lshin01"
    PUSH EBX                            ; 004a7685
    MOV dword ptr [ESI + 0xbd3c],EAX    ; 004a7686
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 004a768c
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004a7691
    PUSH 0x1                            ; 004a7694
    PUSH 0x584964                       ; 004a7696 | = "ass01"
    PUSH EBX                            ; 004a769b
    MOV dword ptr [ESI + 0xbd40],EAX    ; 004a769c
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 004a76a2
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004a76a7
    MOV dword ptr [ESI + 0xbd44],EAX    ; 004a76aa
    PUSH 0x1                            ; 004a76b0
    PUSH 0x58496a                       ; 004a76b2 | = "torso01"
    PUSH EBX                            ; 004a76b7
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 004a76b8
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004a76bd
    PUSH 0x1                            ; 004a76c0
    PUSH 0x584972                       ; 004a76c2 | = "head01"
    PUSH EBX                            ; 004a76c7
    MOV dword ptr [ESI + 0xbd48],EAX    ; 004a76c8
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 004a76ce
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004a76d3
    PUSH 0x1                            ; 004a76d6
    PUSH 0x584979                       ; 004a76d8 | = "tail01"
    PUSH EBX                            ; 004a76dd
    MOV dword ptr [ESI + 0xbd4c],EAX    ; 004a76de
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 004a76e4
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    MOV dword ptr [ESI + 0xbd64],0x0    ; 004a76e9
    MOV dword ptr [ESI + 0xbd68],0x0    ; 004a76f3
    ADD ESP,0xc                         ; 004a76fd
    MOV dword ptr [ESI + 0xbd50],EAX    ; 004a7700
    POP EDI                             ; 004a7706
    POP ESI                             ; 004a7707
    POP EBX                             ; 004a7708
    RET                                 ; 004a7709

