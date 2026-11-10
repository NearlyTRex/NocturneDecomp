; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gargoyle_cpp_CGargoyle_setup_FUN_004dc370(CGargoyle *this_ptr)
;
; Parameters:
; CGargoyle *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Head_005e37d3
;   TerminatedCString s_Bip01_L_ForeArm_005e37de
;   TerminatedCString s_Bip01_R_ForeArm_005e37ee
;   TerminatedCString s_Bip01_L_UpperArm_005e37fe
;   TerminatedCString s_Bip01_R_UpperArm_005e380f
;   TerminatedCString s_Bip01_L_Foot_005e3820
;   TerminatedCString s_Bip01_R_Foot_005e382d
;   TerminatedCString s_Bip01_L_Hand_005e383a
;   TerminatedCString s_Bip01_R_Hand_005e3847
;   TerminatedCString s_Bip01_Spine_005e3854
;   TerminatedCString s_Bip01_Spine1_005e3860
;   TerminatedCString s_Bip01_Spine2_005e386d
;   TerminatedCString s_Bip01_Head_005e387a
;   TerminatedCString s_Bip01_L_UpperArm_005e3885
;   TerminatedCString s_Bip01_R_UpperArm_005e3896
;   ... and 26 more
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_004a0510
;   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dc370
        ;   Label: core_gargoyle.cpp_CGargoyle_setup_FUN_004dc370
    PUSH ESI                            ; 004dc371
    PUSH EDI                            ; 004dc372
    MOV ESI,dword ptr [ESP + 0x10]      ; 004dc373
    PUSH ESI                            ; 004dc377
    CALL core_enemy.cpp_CEnemy_setup_FUN_004a0510 ; 004dc378
        ;   XREF to: 004a0510 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_004a0510(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004dc37d
    LEA EDI,[ESI + 0x158]               ; 004dc380
    PUSH EDI                            ; 004dc386
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20 ; 004dc387
        ;   XREF to: 00569b20 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004dc38c
    PUSH EDI                            ; 004dc38f
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 004dc390
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004dc395
    PUSH 0x1                            ; 004dc398
    PUSH 0x5e37d3                       ; 004dc39a | = "Bip01 Head"
    PUSH EAX                            ; 004dc39f
    MOV EBX,EAX                         ; 004dc3a0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004dc3a2
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004dc3a7
    PUSH 0x1                            ; 004dc3aa
    PUSH 0x5e37de                       ; 004dc3ac | = "Bip01 L ForeArm"
    PUSH EBX                            ; 004dc3b1
    MOV [0x01cd0c9c],EAX                ; 004dc3b2 | DAT_01cd0c9c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004dc3b7
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004dc3bc
    PUSH 0x1                            ; 004dc3bf
    PUSH 0x5e37ee                       ; 004dc3c1 | = "Bip01 R ForeArm"
    PUSH EBX                            ; 004dc3c6
    MOV [0x01cd0ca8],EAX                ; 004dc3c7 | DAT_01cd0ca8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004dc3cc
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004dc3d1
    PUSH 0x1                            ; 004dc3d4
    PUSH 0x5e37fe                       ; 004dc3d6 | = "Bip01 L UpperArm"
    PUSH EBX                            ; 004dc3db
    MOV [0x01cd0cac],EAX                ; 004dc3dc | DAT_01cd0cac
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004dc3e1
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004dc3e6
    PUSH 0x1                            ; 004dc3e9
    PUSH 0x5e380f                       ; 004dc3eb | = "Bip01 R UpperArm"
    PUSH EBX                            ; 004dc3f0
    MOV [0x01cd0cb0],EAX                ; 004dc3f1 | DAT_01cd0cb0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004dc3f6
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004dc3fb
    PUSH 0x1                            ; 004dc3fe
    PUSH 0x5e3820                       ; 004dc400 | = "Bip01 L Foot"
    PUSH EBX                            ; 004dc405
    MOV [0x01cd0cb4],EAX                ; 004dc406 | DAT_01cd0cb4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004dc40b
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004dc410
    PUSH 0x1                            ; 004dc413
    PUSH 0x5e382d                       ; 004dc415 | = "Bip01 R Foot"
    PUSH EBX                            ; 004dc41a
    MOV [0x01cd0cb8],EAX                ; 004dc41b | DAT_01cd0cb8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004dc420
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004dc425
    PUSH 0x1                            ; 004dc428
    PUSH 0x5e383a                       ; 004dc42a | = "Bip01 L Hand"
    PUSH EBX                            ; 004dc42f
    MOV [0x01cd0cbc],EAX                ; 004dc430 | DAT_01cd0cbc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004dc435
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004dc43a
    MOV [0x01cd0ca0],EAX                ; 004dc43d | DAT_01cd0ca0
    PUSH 0x1                            ; 004dc442
    PUSH 0x5e3847                       ; 004dc444 | = "Bip01 R Hand"
    PUSH EBX                            ; 004dc449
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004dc44a
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004dc44f
    PUSH 0x1                            ; 004dc452
    PUSH 0x5e3854                       ; 004dc454 | = "Bip01 Spine"
    PUSH EBX                            ; 004dc459
    MOV [0x01cd0ca4],EAX                ; 004dc45a | DAT_01cd0ca4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004dc45f
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004dc464
    PUSH 0x1                            ; 004dc467
    PUSH 0x5e3860                       ; 004dc469 | = "Bip01 Spine1"
    PUSH EBX                            ; 004dc46e
    MOV [0x01cd0cc0],EAX                ; 004dc46f | DAT_01cd0cc0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004dc474
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004dc479
    PUSH 0x1                            ; 004dc47c
    PUSH 0x5e386d                       ; 004dc47e | = "Bip01 Spine2"
    PUSH EBX                            ; 004dc483
    MOV [0x01cd0cc4],EAX                ; 004dc484 | DAT_01cd0cc4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004dc489
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004dc48e
    PUSH 0x1                            ; 004dc491
    PUSH 0x5e387a                       ; 004dc493 | = "Bip01 Head"
    PUSH EBX                            ; 004dc498
    MOV [0x01cd0cc8],EAX                ; 004dc499 | DAT_01cd0cc8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004dc49e
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004dc4a3
    PUSH 0x1                            ; 004dc4a6
    PUSH 0x5e3885                       ; 004dc4a8 | = "Bip01 L UpperArm"
    PUSH EBX                            ; 004dc4ad
    MOV [0x01cd0c9c],EAX                ; 004dc4ae | DAT_01cd0c9c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004dc4b3
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004dc4b8
    PUSH 0x1                            ; 004dc4bb
    PUSH 0x5e3896                       ; 004dc4bd | = "Bip01 R UpperArm"
    PUSH EBX                            ; 004dc4c2
    MOV [0x01cd0cb0],EAX                ; 004dc4c3 | DAT_01cd0cb0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004dc4c8
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004dc4cd
    PUSH 0x1                            ; 004dc4d0
    PUSH 0x5e38a7                       ; 004dc4d2 | = "Bip01 Spine"
    PUSH EBX                            ; 004dc4d7
    MOV [0x01cd0cb4],EAX                ; 004dc4d8 | DAT_01cd0cb4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004dc4dd
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004dc4e2
    PUSH 0x1                            ; 004dc4e5
    PUSH 0x5e38b3                       ; 004dc4e7 | = "Bip01 Spine2"
    PUSH EBX                            ; 004dc4ec
    MOV [0x01cd0cc0],EAX                ; 004dc4ed | DAT_01cd0cc0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004dc4f2
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004dc4f7
    PUSH EDI                            ; 004dc4fa
    MOV [0x01cd0cc8],EAX                ; 004dc4fb | DAT_01cd0cc8
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0 ; 004dc500
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(CDeformableModelInstance * this_ptr)
    MOV EBX,EAX                         ; 004dc505
    ADD ESP,0x4                         ; 004dc507
    PUSH 0x1                            ; 004dc50a
    PUSH 0x5e38c0                       ; 004dc50c | = "larm01"
    PUSH EAX                            ; 004dc511
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780 ; 004dc512
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004dc517
    PUSH 0x1                            ; 004dc51a
    PUSH 0x5e38c7                       ; 004dc51c | = "l4arm01"
    PUSH EBX                            ; 004dc521
    MOV dword ptr [ESI + 0xc268],EAX    ; 004dc522
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780 ; 004dc528
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004dc52d
    PUSH 0x1                            ; 004dc530
    PUSH 0x5e38cf                       ; 004dc532 | = "rarm01"
    PUSH EBX                            ; 004dc537
    MOV dword ptr [ESI + 0xc26c],EAX    ; 004dc538
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780 ; 004dc53e
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004dc543
    PUSH 0x1                            ; 004dc546
    PUSH 0x5e38d6                       ; 004dc548 | = "r4arm01"
    PUSH EBX                            ; 004dc54d
    MOV dword ptr [ESI + 0xc270],EAX    ; 004dc54e
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780 ; 004dc554
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004dc559
    PUSH 0x1                            ; 004dc55c
    PUSH 0x5e38de                       ; 004dc55e | = "rthigh01"
    PUSH EBX                            ; 004dc563
    MOV dword ptr [ESI + 0xc274],EAX    ; 004dc564
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780 ; 004dc56a
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004dc56f
    PUSH 0x1                            ; 004dc572
    PUSH 0x5e38e7                       ; 004dc574 | = "rshin01"
    PUSH EBX                            ; 004dc579
    MOV dword ptr [ESI + 0xc278],EAX    ; 004dc57a
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780 ; 004dc580
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004dc585
    PUSH 0x1                            ; 004dc588
    PUSH 0x5e38ef                       ; 004dc58a | = "lthigh01"
    PUSH EBX                            ; 004dc58f
    MOV dword ptr [ESI + 0xc27c],EAX    ; 004dc590
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780 ; 004dc596
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004dc59b
    PUSH 0x1                            ; 004dc59e
    PUSH 0x5e38f8                       ; 004dc5a0 | = "lshin01"
    PUSH EBX                            ; 004dc5a5
    MOV dword ptr [ESI + 0xc280],EAX    ; 004dc5a6
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780 ; 004dc5ac
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004dc5b1
    PUSH 0x1                            ; 004dc5b4
    PUSH 0x5e3900                       ; 004dc5b6 | = "ass01"
    PUSH EBX                            ; 004dc5bb
    MOV dword ptr [ESI + 0xc284],EAX    ; 004dc5bc
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780 ; 004dc5c2
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004dc5c7
    MOV dword ptr [ESI + 0xc288],EAX    ; 004dc5ca
    PUSH 0x1                            ; 004dc5d0
    PUSH 0x5e3906                       ; 004dc5d2 | = "torso01"
    PUSH EBX                            ; 004dc5d7
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780 ; 004dc5d8
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004dc5dd
    PUSH 0x1                            ; 004dc5e0
    PUSH 0x5e390e                       ; 004dc5e2 | = "head01"
    PUSH EBX                            ; 004dc5e7
    MOV dword ptr [ESI + 0xc28c],EAX    ; 004dc5e8
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780 ; 004dc5ee
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004dc5f3
    PUSH 0x1                            ; 004dc5f6
    PUSH 0x5e3915                       ; 004dc5f8 | = "tail01"
    PUSH EBX                            ; 004dc5fd
    MOV dword ptr [ESI + 0xc290],EAX    ; 004dc5fe
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780 ; 004dc604
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    MOV dword ptr [ESI + 0xc2a8],0x0    ; 004dc609
    MOV dword ptr [ESI + 0xc2ac],0x0    ; 004dc613
    ADD ESP,0xc                         ; 004dc61d
    MOV dword ptr [ESI + 0xc294],EAX    ; 004dc620
    POP EDI                             ; 004dc626
    POP ESI                             ; 004dc627
    POP EBX                             ; 004dc628
    RET                                 ; 004dc629

