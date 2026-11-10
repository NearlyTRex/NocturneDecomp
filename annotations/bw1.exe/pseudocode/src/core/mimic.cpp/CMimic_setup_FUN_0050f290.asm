; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mimic_cpp_CMimic_setup_FUN_0050f290(CMimic *this_ptr)
;
; Parameters:
; CMimic *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_core_mimic_cpp_005e87d6
;   TerminatedCString s_CMimic_setup_can_t_use_m_005e87e8
;   TerminatedCString s_stranger_dfm_005e8819
;   TerminatedCString s_Bip01_head_005e8826
;   TerminatedCString s_Bip01_L_Clavicle_005e8831
;   TerminatedCString s_Bip01_R_Clavicle_005e8842
;   TerminatedCString s_Bip01_L_UpperArm_005e8853
;   TerminatedCString s_Bip01_R_UpperArm_005e8864
;   TerminatedCString s_Bip01_L_ForeArm_005e8875
;   TerminatedCString s_Bip01_R_ForeArm_005e8885
;   TerminatedCString s_Bip01_L_Foot_005e8895
;   TerminatedCString s_Bip01_R_Foot_005e88a2
;   TerminatedCString s_Bip01_L_Thigh_005e88af
;   TerminatedCString s_Bip01_R_Thigh_005e88bd
;   TerminatedCString s_Bip01_L_Calf_005e88cb
;   ... and 31 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_createActorByName_FUN_0040c2b0
;   core_cloth.cpp_CCloth_load_FUN_0043e6d0
;   core_cloth.cpp_FUN_0043eea0
;   core_enemy.cpp_CEnemy_setup_FUN_004a0510
;   core_main.c_FUN_005030e0
;   core_morph.cpp_CMorph_getReady_FUN_00523310
;   core_morph.cpp_CMorph_setupModelFromDeformable_FUN_005230c0
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20
;   core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050f290
        ;   Label: core_mimic.cpp_CMimic_setup_FUN_0050f290
    PUSH ESI                            ; 0050f291
    PUSH EDI                            ; 0050f292
    PUSH EBP                            ; 0050f293
    SUB ESP,0x18                        ; 0050f294
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0050f297
    MOV EAX,[0x00622580]                ; 0050f29b | g_CNetGamePtr
    CMP dword ptr [EAX],0x0             ; 0050f2a0 | g_CNetGameInstance
    JNZ 0x0050f5fa                      ; 0050f2a3
        ;   XREF to: 0050f5fa (CONDITIONAL_JUMP)  ; LAB_0050f5fa
    MOV EAX,[0x01d06ab4]                ; 0050f2a9 | DAT_01d06ab4
        ;   Label: LAB_0050f2a9
    SHL EAX,0x2                         ; 0050f2ae
    MOV EDI,dword ptr [EAX + 0x1d06aa4] ; 0050f2b1
    LEA EDX,[EBX + 0x158]               ; 0050f2b7
    TEST EDI,EDI                        ; 0050f2bd
    JZ 0x0050f622                       ; 0050f2bf
        ;   XREF to: 0050f622 (CONDITIONAL_JUMP)  ; LAB_0050f622
    LEA EAX,[EDI + 0x24a8]              ; 0050f2c5
    PUSH EAX                            ; 0050f2cb
    PUSH EDX                            ; 0050f2cc
        ;   Label: LAB_0050f2cc
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50 ; 0050f2cd
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 0050f2d2
    LEA EDI,[EBX + 0x158]               ; 0050f2d5
    PUSH EDI                            ; 0050f2db
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20 ; 0050f2dc
        ;   XREF to: 00569b20 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0050f2e1
    PUSH EDI                            ; 0050f2e4
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 0050f2e5
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0050f2ea
    PUSH 0x1                            ; 0050f2ed
    PUSH 0x5e8826                       ; 0050f2ef | = "Bip01 head"
    PUSH EAX                            ; 0050f2f4
    MOV ESI,EAX                         ; 0050f2f5
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0050f2f7
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0050f2fc
    PUSH 0x1                            ; 0050f2ff
    PUSH 0x5e8831                       ; 0050f301 | = "Bip01 L Clavicle"
    PUSH ESI                            ; 0050f306
    MOV [0x01d22424],EAX                ; 0050f307 | DAT_01d22424
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0050f30c
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0050f311
    PUSH 0x1                            ; 0050f314
    PUSH 0x5e8842                       ; 0050f316 | = "Bip01 R Clavicle"
    PUSH ESI                            ; 0050f31b
    MOV [0x01d22428],EAX                ; 0050f31c | DAT_01d22428
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0050f321
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0050f326
    PUSH 0x1                            ; 0050f329
    PUSH 0x5e8853                       ; 0050f32b | = "Bip01 L UpperArm"
    PUSH ESI                            ; 0050f330
    MOV [0x01d2242c],EAX                ; 0050f331 | DAT_01d2242c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0050f336
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0050f33b
    PUSH 0x1                            ; 0050f33e
    PUSH 0x5e8864                       ; 0050f340 | = "Bip01 R UpperArm"
    PUSH ESI                            ; 0050f345
    MOV [0x01d22430],EAX                ; 0050f346 | DAT_01d22430
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0050f34b
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0050f350
    PUSH 0x1                            ; 0050f353
    PUSH 0x5e8875                       ; 0050f355 | = "Bip01 L ForeArm"
    PUSH ESI                            ; 0050f35a
    MOV [0x01d22434],EAX                ; 0050f35b | DAT_01d22434
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0050f360
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0050f365
    PUSH 0x1                            ; 0050f368
    PUSH 0x5e8885                       ; 0050f36a | = "Bip01 R ForeArm"
    PUSH ESI                            ; 0050f36f
    MOV [0x01d22438],EAX                ; 0050f370 | DAT_01d22438
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0050f375
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0050f37a
    PUSH 0x1                            ; 0050f37d
    PUSH 0x5e8895                       ; 0050f37f | = "Bip01 L Foot"
    PUSH ESI                            ; 0050f384
    MOV [0x01d2243c],EAX                ; 0050f385 | DAT_01d2243c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0050f38a
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0050f38f
    PUSH 0x1                            ; 0050f392
    PUSH 0x5e88a2                       ; 0050f394 | = "Bip01 R Foot"
    PUSH ESI                            ; 0050f399
    MOV [0x01d22440],EAX                ; 0050f39a | DAT_01d22440
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0050f39f
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0050f3a4
    MOV [0x01d22444],EAX                ; 0050f3a7 | DAT_01d22444
    PUSH 0x1                            ; 0050f3ac
    PUSH 0x5e88af                       ; 0050f3ae | = "Bip01 L Thigh"
    PUSH ESI                            ; 0050f3b3
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0050f3b4
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0050f3b9
    PUSH 0x1                            ; 0050f3bc
    PUSH 0x5e88bd                       ; 0050f3be | = "Bip01 R Thigh"
    PUSH ESI                            ; 0050f3c3
    MOV [0x01d22448],EAX                ; 0050f3c4 | DAT_01d22448
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0050f3c9
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0050f3ce
    PUSH 0x1                            ; 0050f3d1
    PUSH 0x5e88cb                       ; 0050f3d3 | = "Bip01 L Calf"
    PUSH ESI                            ; 0050f3d8
    MOV [0x01d2244c],EAX                ; 0050f3d9 | DAT_01d2244c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0050f3de
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0050f3e3
    PUSH 0x1                            ; 0050f3e6
    PUSH 0x5e88d8                       ; 0050f3e8 | = "Bip01 R Calf"
    PUSH ESI                            ; 0050f3ed
    MOV [0x01d22450],EAX                ; 0050f3ee | DAT_01d22450
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0050f3f3
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0050f3f8
    PUSH 0x1                            ; 0050f3fb
    PUSH 0x5e88e5                       ; 0050f3fd | = "Bip01 L Hand"
    PUSH ESI                            ; 0050f402
    MOV [0x01d22454],EAX                ; 0050f403 | DAT_01d22454
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0050f408
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0050f40d
    PUSH 0x1                            ; 0050f410
    PUSH 0x5e88f2                       ; 0050f412 | = "Bip01 R Hand"
    PUSH ESI                            ; 0050f417
    MOV [0x01d22464],EAX                ; 0050f418 | DAT_01d22464
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0050f41d
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0050f422
    PUSH 0x1                            ; 0050f425
    PUSH 0x5e88ff                       ; 0050f427 | = "Bip01 Spine2"
    PUSH ESI                            ; 0050f42c
    MOV [0x01d22468],EAX                ; 0050f42d | DAT_01d22468
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0050f432
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0050f437
    PUSH 0x1                            ; 0050f43a
    PUSH 0x5e890c                       ; 0050f43c | = "Bip01 Spine"
    PUSH ESI                            ; 0050f441
    MOV [0x01d2246c],EAX                ; 0050f442 | DAT_01d2246c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0050f447
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0050f44c
    PUSH EBX                            ; 0050f44f
    MOV [0x01d22470],EAX                ; 0050f450 | DAT_01d22470
    CALL core_enemy.cpp_CEnemy_setup_FUN_004a0510 ; 0050f455
        ;   XREF to: 004a0510 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_004a0510(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0050f45a
    PUSH 0x5e8918                       ; 0050f45d | = "strcoat.cth"
    LEA ESI,[EBX + 0xc330]              ; 0050f462
    PUSH ESI                            ; 0050f468
    CALL core_cloth.cpp_CCloth_load_FUN_0043e6d0 ; 0050f469
        ;   XREF to: 0043e6d0 (UNCONDITIONAL_CALL)  ; int core_cloth.cpp_CCloth_load_FUN_0043e6d0(CCloth * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0050f46e
    PUSH EDI                            ; 0050f471
    LEA EAX,[EBX + 0x30]                ; 0050f472
    PUSH EAX                            ; 0050f475
    LEA EAX,[EBX + 0x20]                ; 0050f476
    PUSH EAX                            ; 0050f479
    PUSH ESI                            ; 0050f47a
    CALL core_cloth.cpp_FUN_0043eea0    ; 0050f47b
        ;   XREF to: 0043eea0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_0043eea0(CCloth * this_ptr, CVector3f * position, CVector3f * euler, CDeformableModelInstance * model_ptr)
    ADD ESP,0x10                        ; 0050f480
    MOV EBP,dword ptr [0x01c3f6a0]      ; 0050f483 | g_CEnemyClassInfo.name_hash
    PUSH EBP                            ; 0050f489
    LEA EAX,[EBX + 0x46e68]             ; 0050f48a
    PUSH EAX                            ; 0050f490
    CALL core_actor.cpp_createActorByName_FUN_0040c2b0 ; 0050f491
        ;   XREF to: 0040c2b0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_createActorByName_FUN_0040c2b0()
    ADD ESP,0x4                         ; 0050f496
    PUSH EAX                            ; 0050f499
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 0050f49a
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 0050f49f
    MOV dword ptr [EBX + 0x47ac0],EAX   ; 0050f4a2
    TEST EAX,EAX                        ; 0050f4a8
    JNZ 0x0050f4cf                      ; 0050f4aa
        ;   XREF to: 0050f4cf (CONDITIONAL_JUMP)  ; LAB_0050f4cf
    MOV EDX,0x5e8924                    ; 0050f4ac | = "..\\core\\mimic.cpp"
    MOV ECX,0x101                       ; 0050f4b1
    PUSH 0x5e8936                       ; 0050f4b6 | = "CMimic failed to create morph target ..."
    MOV dword ptr [0x01d1d400],EDX      ; 0050f4bb | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0050f4c1 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0050f4c7
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0050f4cc
    MOV EAX,dword ptr [EBX + 0x47ac0]   ; 0050f4cf
        ;   Label: LAB_0050f4cf
    PUSH EAX                            ; 0050f4d5
    MOV EDX,dword ptr [EAX + 0x154]     ; 0050f4d6
    CALL dword ptr [EDX]                ; 0050f4dc
    ADD ESP,0x4                         ; 0050f4de
    LEA ESI,[EBX + 0x158]               ; 0050f4e1
    PUSH ESI                            ; 0050f4e7
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500 ; 0050f4e8
        ;   XREF to: 00567500 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0050f4ed
    PUSH ESI                            ; 0050f4f0
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180 ; 0050f4f1
        ;   XREF to: 00569180 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0050f4f6
    PUSH ESI                            ; 0050f4f9
    PUSH 0x0                            ; 0050f4fa
    LEA EAX,[EBX + 0x46e90]             ; 0050f4fc
    PUSH EAX                            ; 0050f502
    CALL core_morph.cpp_CMorph_setupModelFromDeformable_FUN_005230c0 ; 0050f503
        ;   XREF to: 005230c0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_setupModelFromDeformable_FUN_005230c0(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr)
    ADD ESP,0xc                         ; 0050f508
    PUSH ESI                            ; 0050f50b
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580 ; 0050f50c
        ;   XREF to: 00567580 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0050f511
    MOV ESI,dword ptr [EBX + 0x46ee4]   ; 0050f514
    XOR EDX,EDX                         ; 0050f51a
    TEST ESI,ESI                        ; 0050f51c
    JLE 0x0050f540                      ; 0050f51e
        ;   XREF to: 0050f540 (CONDITIONAL_JUMP)  ; LAB_0050f540
    XOR EAX,EAX                         ; 0050f520
    MOV ECX,dword ptr [EBX + 0x46ee8]   ; 0050f522
        ;   Label: LAB_0050f522
    INC EDX                             ; 0050f528
    FLD float ptr [ECX + EAX*0x1 + 0x4] ; 0050f529
    FCHS                                ; 0050f52d
    FSTP float ptr [ECX + EAX*0x1 + 0x4] ; 0050f52f
    MOV EDI,dword ptr [EBX + 0x46ee4]   ; 0050f533
    ADD EAX,0x10                        ; 0050f539
    CMP EDX,EDI                         ; 0050f53c
    JL 0x0050f522                       ; 0050f53e
        ;   XREF to: 0050f522 (CONDITIONAL_JUMP)  ; LAB_0050f522
    MOV EBP,dword ptr [EBX + 0x46eec]   ; 0050f540
        ;   Label: LAB_0050f540
    XOR EDX,EDX                         ; 0050f546
    TEST EBP,EBP                        ; 0050f548
    JLE 0x0050f590                      ; 0050f54a
        ;   XREF to: 0050f590 (CONDITIONAL_JUMP)  ; LAB_0050f590
    XOR ECX,ECX                         ; 0050f54c
    MOV EAX,dword ptr [EBX + 0x46ef0]   ; 0050f54e
        ;   Label: LAB_0050f54e
    LEA EDI,[ESP + 0xc]                 ; 0050f554
    LEA ESI,[ECX + EAX*0x1 + 0x30]      ; 0050f558
    MOVSD ES:EDI,ESI                    ; 0050f55c
    MOVSD ES:EDI,ESI                    ; 0050f55d
    MOVSD ES:EDI,ESI                    ; 0050f55e
    MOV EDI,ESP                         ; 0050f55f
    LEA ESI,[ECX + EAX*0x1 + 0x18]      ; 0050f561
    MOVSD ES:EDI,ESI                    ; 0050f565
    MOVSD ES:EDI,ESI                    ; 0050f566
    MOVSD ES:EDI,ESI                    ; 0050f567
    LEA ESI,[ESP + 0xc]                 ; 0050f568
    LEA EDI,[ECX + EAX*0x1 + 0x18]      ; 0050f56c
    MOVSD ES:EDI,ESI                    ; 0050f570
    MOVSD ES:EDI,ESI                    ; 0050f571
    MOVSD ES:EDI,ESI                    ; 0050f572
    MOV ESI,ESP                         ; 0050f573
    LEA EDI,[ECX + EAX*0x1 + 0x30]      ; 0050f575
    MOVSD ES:EDI,ESI                    ; 0050f579
    MOVSD ES:EDI,ESI                    ; 0050f57a
    MOVSD ES:EDI,ESI                    ; 0050f57b
    INC EDX                             ; 0050f57c
    MOV EAX,dword ptr [EBX + 0x46eec]   ; 0050f57d
    ADD ECX,0x3c                        ; 0050f583
    CMP EDX,EAX                         ; 0050f586
    JL 0x0050f54e                       ; 0050f588
        ;   XREF to: 0050f54e (CONDITIONAL_JUMP)  ; LAB_0050f54e
    LEA EAX,[EAX]                       ; 0050f58a
    MOV EAX,dword ptr [EBX + 0x47ac0]   ; 0050f590
        ;   Label: LAB_0050f590
    ADD EAX,0x158                       ; 0050f596
    PUSH EAX                            ; 0050f59b
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500 ; 0050f59c
        ;   XREF to: 00567500 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500(CDeformableModelInstance * this_ptr)
    MOV EAX,dword ptr [EBX + 0x47ac0]   ; 0050f5a1
    ADD ESP,0x4                         ; 0050f5a7
    ADD EAX,0x158                       ; 0050f5aa
    PUSH EAX                            ; 0050f5af
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180 ; 0050f5b0
        ;   XREF to: 00569180 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180(CDeformableModelInstance * this_ptr)
    MOV EAX,dword ptr [EBX + 0x47ac0]   ; 0050f5b5
    ADD ESP,0x4                         ; 0050f5bb
    ADD EAX,0x158                       ; 0050f5be
    PUSH EAX                            ; 0050f5c3
    PUSH 0x1                            ; 0050f5c4
    LEA ESI,[EBX + 0x46e90]             ; 0050f5c6
    PUSH ESI                            ; 0050f5cc
    CALL core_morph.cpp_CMorph_setupModelFromDeformable_FUN_005230c0 ; 0050f5cd
        ;   XREF to: 005230c0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_setupModelFromDeformable_FUN_005230c0(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr)
    MOV EAX,dword ptr [EBX + 0x47ac0]   ; 0050f5d2
    ADD ESP,0xc                         ; 0050f5d8
    ADD EAX,0x158                       ; 0050f5db
    PUSH EAX                            ; 0050f5e0
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580 ; 0050f5e1
        ;   XREF to: 00567580 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0050f5e6
    PUSH ESI                            ; 0050f5e9
    CALL core_morph.cpp_CMorph_getReady_FUN_00523310 ; 0050f5ea
        ;   XREF to: 00523310 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_getReady_FUN_00523310(CMorph * this_ptr)
    ADD ESP,0x4                         ; 0050f5ef
    ADD ESP,0x18                        ; 0050f5f2
    POP EBP                             ; 0050f5f5
    POP EDI                             ; 0050f5f6
    POP ESI                             ; 0050f5f7
    POP EBX                             ; 0050f5f8
    RET                                 ; 0050f5f9
    MOV ECX,0x5e87d6                    ; 0050f5fa | = "..\\core\\mimic.cpp"
        ;   Label: LAB_0050f5fa
    MOV ESI,0xb6                        ; 0050f5ff
    PUSH 0x5e87e8                       ; 0050f604 | = "CMimic::setup - can't use mimic in mu..."
    MOV dword ptr [0x01d1d400],ECX      ; 0050f609 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0050f60f | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0050f615
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0050f61a
    JMP 0x0050f2a9                      ; 0050f61d
        ;   XREF to: 0050f2a9 (UNCONDITIONAL_JUMP)  ; LAB_0050f2a9
    PUSH 0x5e8819                       ; 0050f622 | = "stranger.dfm"
        ;   Label: LAB_0050f622
    JMP 0x0050f2cc                      ; 0050f627
        ;   XREF to: 0050f2cc (UNCONDITIONAL_JUMP)  ; LAB_0050f2cc

