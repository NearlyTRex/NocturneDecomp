; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_mobster_cpp_CMobster_setup_FUN_004da290(CEnemy *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Head_0058a193
;   TerminatedCString s_Bip01_L_ForeArm_0058a19e
;   TerminatedCString s_Bip01_R_ForeArm_0058a1ae
;   TerminatedCString s_Bip01_L_UpperArm_0058a1be
;   TerminatedCString s_Bip01_R_UpperArm_0058a1cf
;   TerminatedCString s_Bip01_L_Foot_0058a1e0
;   TerminatedCString s_Bip01_R_Foot_0058a1ed
;   TerminatedCString s_Bip01_L_Hand_0058a1fa
;   TerminatedCString s_Bip01_R_Hand_0058a207
;   TerminatedCString s_Bip01_Spine_0058a214
;   TerminatedCString s_Bip01_Spine1_0058a220
;   TerminatedCString s_Bip01_Spine2_0058a22d
;   TerminatedCString s_Bip01_Head_0058a23a
;   TerminatedCString s_Bip01_L_UpperArm_0058a245
;   TerminatedCString s_Bip01_R_UpperArm_0058a256
;   ... and 25 more
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

    PUSH EBX                            ; 004da290
        ;   Label: core_mobster.cpp_CMobster_setup_FUN_004da290
    PUSH ESI                            ; 004da291
    MOV EBX,dword ptr [ESP + 0xc]       ; 004da292
    PUSH EDI                            ; 004da296
    LEA EDI,[EBX + 0x150]               ; 004da297
    PUSH EDI                            ; 004da29d
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0 ; 004da29e
        ;   XREF to: 0051dcd0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004da2a3
    PUSH EDI                            ; 004da2a6
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 004da2a7
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004da2ac
    PUSH 0x1                            ; 004da2af
    PUSH 0x58a193                       ; 004da2b1 | = "Bip01 Head"
    PUSH EAX                            ; 004da2b6
    MOV ESI,EAX                         ; 004da2b7
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004da2b9
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004da2be
    PUSH 0x1                            ; 004da2c1
    PUSH 0x58a19e                       ; 004da2c3 | = "Bip01 L ForeArm"
    PUSH ESI                            ; 004da2c8
    MOV [0x01ccdba8],EAX                ; 004da2c9 | DAT_01ccdba8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004da2ce
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004da2d3
    PUSH 0x1                            ; 004da2d6
    PUSH 0x58a1ae                       ; 004da2d8 | = "Bip01 R ForeArm"
    PUSH ESI                            ; 004da2dd
    MOV [0x01ccdbb4],EAX                ; 004da2de | DAT_01ccdbb4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004da2e3
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004da2e8
    PUSH 0x1                            ; 004da2eb
    PUSH 0x58a1be                       ; 004da2ed | = "Bip01 L UpperArm"
    PUSH ESI                            ; 004da2f2
    MOV [0x01ccdbb8],EAX                ; 004da2f3 | DAT_01ccdbb8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004da2f8
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004da2fd
    PUSH 0x1                            ; 004da300
    PUSH 0x58a1cf                       ; 004da302 | = "Bip01 R UpperArm"
    PUSH ESI                            ; 004da307
    MOV [0x01ccdbbc],EAX                ; 004da308 | DAT_01ccdbbc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004da30d
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004da312
    PUSH 0x1                            ; 004da315
    PUSH 0x58a1e0                       ; 004da317 | = "Bip01 L Foot"
    PUSH ESI                            ; 004da31c
    MOV [0x01ccdbc0],EAX                ; 004da31d | DAT_01ccdbc0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004da322
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004da327
    PUSH 0x1                            ; 004da32a
    PUSH 0x58a1ed                       ; 004da32c | = "Bip01 R Foot"
    PUSH ESI                            ; 004da331
    MOV [0x01ccdbc4],EAX                ; 004da332 | DAT_01ccdbc4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004da337
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004da33c
    PUSH 0x1                            ; 004da33f
    PUSH 0x58a1fa                       ; 004da341 | = "Bip01 L Hand"
    PUSH ESI                            ; 004da346
    MOV [0x01ccdbc8],EAX                ; 004da347 | DAT_01ccdbc8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004da34c
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004da351
    PUSH 0x1                            ; 004da354
    PUSH 0x58a207                       ; 004da356 | = "Bip01 R Hand"
    PUSH ESI                            ; 004da35b
    MOV [0x01ccdbac],EAX                ; 004da35c | DAT_01ccdbac
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004da361
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004da366
    MOV [0x01ccdbb0],EAX                ; 004da369 | DAT_01ccdbb0
    PUSH 0x1                            ; 004da36e
    PUSH 0x58a214                       ; 004da370 | = "Bip01 Spine"
    PUSH ESI                            ; 004da375
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004da376
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004da37b
    PUSH 0x1                            ; 004da37e
    PUSH 0x58a220                       ; 004da380 | = "Bip01 Spine1"
    PUSH ESI                            ; 004da385
    MOV [0x01ccdbcc],EAX                ; 004da386 | DAT_01ccdbcc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004da38b
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004da390
    PUSH 0x1                            ; 004da393
    PUSH 0x58a22d                       ; 004da395 | = "Bip01 Spine2"
    PUSH ESI                            ; 004da39a
    MOV [0x01ccdbd0],EAX                ; 004da39b | DAT_01ccdbd0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004da3a0
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004da3a5
    PUSH 0x1                            ; 004da3a8
    PUSH 0x58a23a                       ; 004da3aa | = "Bip01 Head"
    PUSH ESI                            ; 004da3af
    MOV [0x01ccdbd4],EAX                ; 004da3b0 | DAT_01ccdbd4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004da3b5
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004da3ba
    PUSH 0x1                            ; 004da3bd
    PUSH 0x58a245                       ; 004da3bf | = "Bip01 L UpperArm"
    PUSH ESI                            ; 004da3c4
    MOV [0x01ccdba8],EAX                ; 004da3c5 | DAT_01ccdba8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004da3ca
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004da3cf
    PUSH 0x1                            ; 004da3d2
    PUSH 0x58a256                       ; 004da3d4 | = "Bip01 R UpperArm"
    PUSH ESI                            ; 004da3d9
    MOV [0x01ccdbbc],EAX                ; 004da3da | DAT_01ccdbbc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004da3df
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004da3e4
    PUSH 0x1                            ; 004da3e7
    PUSH 0x58a267                       ; 004da3e9 | = "Bip01 Spine"
    PUSH ESI                            ; 004da3ee
    MOV [0x01ccdbc0],EAX                ; 004da3ef | DAT_01ccdbc0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004da3f4
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004da3f9
    PUSH 0x1                            ; 004da3fc
    PUSH 0x58a273                       ; 004da3fe | = "Bip01 Spine2"
    PUSH ESI                            ; 004da403
    MOV [0x01ccdbcc],EAX                ; 004da404 | DAT_01ccdbcc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004da409
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004da40e
    PUSH EDI                            ; 004da411
    MOV [0x01ccdbd4],EAX                ; 004da412 | DAT_01ccdbd4
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020 ; 004da417
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004da41c
    PUSH 0x1                            ; 004da41f
    PUSH 0x58a280                       ; 004da421 | = "larm01"
    PUSH EAX                            ; 004da426
    MOV ESI,EAX                         ; 004da427
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 004da429
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004da42e
    MOV dword ptr [EBX + 0xbdc8],EAX    ; 004da431
    POP EDI                             ; 004da437
    PUSH 0x1                            ; 004da438
    PUSH 0x58a287                       ; 004da43a | = "l4arm01"
    PUSH ESI                            ; 004da43f
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 004da440
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004da445
    PUSH 0x1                            ; 004da448
    PUSH 0x58a28f                       ; 004da44a | = "rarm01"
    PUSH ESI                            ; 004da44f
    MOV dword ptr [EBX + 0xbdcc],EAX    ; 004da450
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 004da456
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004da45b
    PUSH 0x1                            ; 004da45e
    PUSH 0x58a296                       ; 004da460 | = "r4arm01"
    PUSH ESI                            ; 004da465
    MOV dword ptr [EBX + 0xbdd0],EAX    ; 004da466
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 004da46c
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004da471
    PUSH 0x1                            ; 004da474
    PUSH 0x58a29e                       ; 004da476 | = "rthigh01"
    PUSH ESI                            ; 004da47b
    MOV dword ptr [EBX + 0xbdd4],EAX    ; 004da47c
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 004da482
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004da487
    PUSH 0x1                            ; 004da48a
    PUSH 0x58a2a7                       ; 004da48c | = "rshin01"
    PUSH ESI                            ; 004da491
    MOV dword ptr [EBX + 0xbdd8],EAX    ; 004da492
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 004da498
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004da49d
    PUSH 0x1                            ; 004da4a0
    PUSH 0x58a2af                       ; 004da4a2 | = "lthigh01"
    PUSH ESI                            ; 004da4a7
    MOV dword ptr [EBX + 0xbddc],EAX    ; 004da4a8
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 004da4ae
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004da4b3
    PUSH 0x1                            ; 004da4b6
    PUSH 0x58a2b8                       ; 004da4b8 | = "lshin01"
    PUSH ESI                            ; 004da4bd
    MOV dword ptr [EBX + 0xbde0],EAX    ; 004da4be
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 004da4c4
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004da4c9
    PUSH 0x1                            ; 004da4cc
    PUSH 0x58a2c0                       ; 004da4ce | = "waist01"
    PUSH ESI                            ; 004da4d3
    MOV dword ptr [EBX + 0xbde4],EAX    ; 004da4d4
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 004da4da
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004da4df
    PUSH 0x1                            ; 004da4e2
    PUSH 0x58a2c8                       ; 004da4e4 | = "torso01"
    PUSH ESI                            ; 004da4e9
    MOV dword ptr [EBX + 0xbde8],EAX    ; 004da4ea
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 004da4f0
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004da4f5
    MOV dword ptr [EBX + 0xbdec],EAX    ; 004da4f8
    PUSH 0x1                            ; 004da4fe
    PUSH 0x58a2d0                       ; 004da500 | = "head01"
    PUSH ESI                            ; 004da505
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 004da506
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    MOV dword ptr [EBX + 0xbdf0],EAX    ; 004da50b
    MOV EAX,[0x01ccdbac]                ; 004da511 | DAT_01ccdbac
    MOV dword ptr [EBX + 0x24a4],EAX    ; 004da516
    MOV EAX,dword ptr [EBX + 0xbdcc]    ; 004da51c
    MOV dword ptr [EBX + 0x24a8],EAX    ; 004da522
    MOV EAX,[0x01ccdbb0]                ; 004da528 | DAT_01ccdbb0
    MOV dword ptr [EBX + 0x24e8],EAX    ; 004da52d
    ADD ESP,0xc                         ; 004da533
    MOV EAX,dword ptr [EBX + 0xbdd4]    ; 004da536
    PUSH EBX                            ; 004da53c
    MOV dword ptr [EBX + 0x24ec],EAX    ; 004da53d
    CALL core_enemy.cpp_CEnemy_setup_FUN_004796b0 ; 004da543
        ;   XREF to: 004796b0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_004796b0(CEnemy * this_ptr)
    MOV dword ptr [EBX + 0xbdf4],0x0    ; 004da548
    ADD ESP,0x4                         ; 004da552
    MOV EDX,dword ptr [EBX + 0xbd44]    ; 004da555
    MOV dword ptr [EBX + 0xbdf8],0x0    ; 004da55b
    TEST EDX,EDX                        ; 004da565
    JNZ 0x004da594                      ; 004da567
        ;   XREF to: 004da594 (CONDITIONAL_JUMP)  ; LAB_004da594
    MOV dword ptr [EBX + 0xbdbc],0x0    ; 004da569
        ;   Label: LAB_004da569
    MOV dword ptr [EBX + 0xbdc0],0x0    ; 004da573
    MOV dword ptr [EBX + 0xbdc4],0x0    ; 004da57d
    MOV dword ptr [EBX + 0xbdb8],0x0    ; 004da587
    POP ESI                             ; 004da591
    POP EBX                             ; 004da592
    RET                                 ; 004da593
    MOV dword ptr [EBX + 0xbd20],0x1    ; 004da594
        ;   Label: LAB_004da594
    JMP 0x004da569                      ; 004da59e
        ;   XREF to: 004da569 (UNCONDITIONAL_JUMP)  ; LAB_004da569

