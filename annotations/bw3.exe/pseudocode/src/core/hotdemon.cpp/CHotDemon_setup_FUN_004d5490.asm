; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hotdemon_cpp_CHotDemon_setup_FUN_004d5490(CHotDemon *this_ptr)
;
; Parameters:
; CHotDemon *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_hotdemonx_dfm_005c5271
;   TerminatedCString s_hotdemon_dfm_005c527f
;   TerminatedCString s_Bip01_Head_005c528c
;   TerminatedCString s_Bip01_L_ForeArm_005c5297
;   TerminatedCString s_Bip01_R_ForeArm_005c52a7
;   TerminatedCString s_Bip01_L_UpperArm_005c52b7
;   TerminatedCString s_Bip01_R_UpperArm_005c52c8
;   TerminatedCString s_Bip01_L_Foot_005c52d9
;   TerminatedCString s_Bip01_R_Foot_005c52e6
;   TerminatedCString s_Bip01_L_Hand_005c52f3
;   TerminatedCString s_Bip01_R_Hand_005c5300
;   TerminatedCString s_Bip01_Spine_005c530d
;   TerminatedCString s_Bip01_Spine1_005c5319
;   TerminatedCString s_Bip01_Spine2_005c5326
;   TerminatedCString s_Bip01_Head_005c5333
;   ... and 18 more
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_00489110
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00548090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d5490
        ;   Label: core_hotdemon.cpp_CHotDemon_setup_FUN_004d5490
    PUSH ESI                            ; 004d5491
    PUSH EDI                            ; 004d5492
    MOV EDI,dword ptr [ESP + 0x10]      ; 004d5493
    MOV EBX,dword ptr [0x005fe9dc]      ; 004d5497 | g_CGamePtr
    MOV EDX,dword ptr [EBX + 0x18]      ; 004d549d | g_CGameInstance.field15_0x18
    LEA EAX,[EDI + 0x158]               ; 004d54a0
    TEST EDX,EDX                        ; 004d54a6
    JZ 0x004d5665                       ; 004d54a8
        ;   XREF to: 004d5665 (CONDITIONAL_JUMP)  ; LAB_004d5665
    PUSH 0x5c527f                       ; 004d54ae | = "hotdemon.dfm"
    PUSH EAX                            ; 004d54b3
        ;   Label: LAB_004d54b3
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0 ; 004d54b4
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 004d54b9
    PUSH EDI                            ; 004d54bc
    CALL core_enemy.cpp_CEnemy_setup_FUN_00489110 ; 004d54bd
        ;   XREF to: 00489110 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_00489110(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004d54c2
    LEA ESI,[EDI + 0x158]               ; 004d54c5
    PUSH ESI                            ; 004d54cb
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0 ; 004d54cc
        ;   XREF to: 0054e6b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004d54d1
    PUSH ESI                            ; 004d54d4
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 004d54d5
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004d54da
    PUSH 0x1                            ; 004d54dd
    PUSH 0x5c528c                       ; 004d54df | = "Bip01 Head"
    PUSH EAX                            ; 004d54e4
    MOV EBX,EAX                         ; 004d54e5
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004d54e7
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d54ec
    PUSH 0x1                            ; 004d54ef
    PUSH 0x5c5297                       ; 004d54f1 | = "Bip01 L ForeArm"
    PUSH EBX                            ; 004d54f6
    MOV [0x01d5baec],EAX                ; 004d54f7 | DAT_01d5baec
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004d54fc
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d5501
    PUSH 0x1                            ; 004d5504
    PUSH 0x5c52a7                       ; 004d5506 | = "Bip01 R ForeArm"
    PUSH EBX                            ; 004d550b
    MOV [0x01d5baf8],EAX                ; 004d550c | DAT_01d5baf8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004d5511
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d5516
    PUSH 0x1                            ; 004d5519
    PUSH 0x5c52b7                       ; 004d551b | = "Bip01 L UpperArm"
    PUSH EBX                            ; 004d5520
    MOV [0x01d5bafc],EAX                ; 004d5521 | DAT_01d5bafc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004d5526
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d552b
    PUSH 0x1                            ; 004d552e
    PUSH 0x5c52c8                       ; 004d5530 | = "Bip01 R UpperArm"
    PUSH EBX                            ; 004d5535
    MOV [0x01d5bb00],EAX                ; 004d5536 | DAT_01d5bb00
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004d553b
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d5540
    PUSH 0x1                            ; 004d5543
    PUSH 0x5c52d9                       ; 004d5545 | = "Bip01 L Foot"
    PUSH EBX                            ; 004d554a
    MOV [0x01d5bb04],EAX                ; 004d554b | DAT_01d5bb04
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004d5550
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d5555
    PUSH 0x1                            ; 004d5558
    PUSH 0x5c52e6                       ; 004d555a | = "Bip01 R Foot"
    PUSH EBX                            ; 004d555f
    MOV [0x01d5bb08],EAX                ; 004d5560 | DAT_01d5bb08
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004d5565
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d556a
    PUSH 0x1                            ; 004d556d
    PUSH 0x5c52f3                       ; 004d556f | = "Bip01 L Hand"
    PUSH EBX                            ; 004d5574
    MOV [0x01d5bb0c],EAX                ; 004d5575 | DAT_01d5bb0c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004d557a
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d557f
    MOV [0x01d5baf0],EAX                ; 004d5582 | DAT_01d5baf0
    PUSH 0x1                            ; 004d5587
    PUSH 0x5c5300                       ; 004d5589 | = "Bip01 R Hand"
    PUSH EBX                            ; 004d558e
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004d558f
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d5594
    PUSH 0x1                            ; 004d5597
    PUSH 0x5c530d                       ; 004d5599 | = "Bip01 Spine"
    PUSH EBX                            ; 004d559e
    MOV [0x01d5baf4],EAX                ; 004d559f | DAT_01d5baf4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004d55a4
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d55a9
    PUSH 0x1                            ; 004d55ac
    PUSH 0x5c5319                       ; 004d55ae | = "Bip01 Spine1"
    PUSH EBX                            ; 004d55b3
    MOV [0x01d5bb10],EAX                ; 004d55b4 | DAT_01d5bb10
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004d55b9
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d55be
    PUSH 0x1                            ; 004d55c1
    PUSH 0x5c5326                       ; 004d55c3 | = "Bip01 Spine2"
    PUSH EBX                            ; 004d55c8
    MOV [0x01d5bb14],EAX                ; 004d55c9 | DAT_01d5bb14
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004d55ce
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d55d3
    PUSH 0x1                            ; 004d55d6
    PUSH 0x5c5333                       ; 004d55d8 | = "Bip01 Head"
    PUSH EBX                            ; 004d55dd
    MOV [0x01d5bb18],EAX                ; 004d55de | DAT_01d5bb18
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004d55e3
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d55e8
    PUSH 0x1                            ; 004d55eb
    PUSH 0x5c533e                       ; 004d55ed | = "Bip01 L UpperArm"
    PUSH EBX                            ; 004d55f2
    MOV [0x01d5baec],EAX                ; 004d55f3 | DAT_01d5baec
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004d55f8
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d55fd
    PUSH 0x1                            ; 004d5600
    PUSH 0x5c534f                       ; 004d5602 | = "Bip01 R UpperArm"
    PUSH EBX                            ; 004d5607
    MOV [0x01d5bb00],EAX                ; 004d5608 | DAT_01d5bb00
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004d560d
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d5612
    PUSH 0x1                            ; 004d5615
    PUSH 0x5c5360                       ; 004d5617 | = "Bip01 Spine"
    PUSH EBX                            ; 004d561c
    MOV [0x01d5bb04],EAX                ; 004d561d | DAT_01d5bb04
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004d5622
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d5627
    PUSH 0x1                            ; 004d562a
    PUSH 0x5c536c                       ; 004d562c | = "Bip01 Spine2"
    PUSH EBX                            ; 004d5631
    MOV [0x01d5bb10],EAX                ; 004d5632 | DAT_01d5bb10
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004d5637
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d563c
    PUSH ESI                            ; 004d563f
    MOV [0x01d5bb18],EAX                ; 004d5640 | DAT_01d5bb18
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40 ; 004d5645
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(CDeformableModelInstance * this_ptr)
    MOV dword ptr [EDI + 0xd054],0x0    ; 004d564a
    ADD ESP,0x4                         ; 004d5654
    MOV dword ptr [EDI + 0xd058],0x0    ; 004d5657
    POP EDI                             ; 004d5661
    POP ESI                             ; 004d5662
    POP EBX                             ; 004d5663
    RET                                 ; 004d5664
    PUSH 0x5c5271                       ; 004d5665 | = "hotdemonx.dfm"
        ;   Label: LAB_004d5665
    JMP 0x004d54b3                      ; 004d566a
        ;   XREF to: 004d54b3 (UNCONDITIONAL_JUMP)  ; LAB_004d54b3

