; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gabriela_cpp_CGabriella_setup_FUN_004ad3e0(CGabriella *this_ptr)
;
; Parameters:
; CGabriella *     Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_gabriela_dfm_005d6ddb
;   TerminatedCString s_gabcoat_cth_005d6de8
;   TerminatedCString s_Bip01_head_005d6df4
;   TerminatedCString s_Bip01_L_Clavicle_005d6dff
;   TerminatedCString s_Bip01_R_Clavicle_005d6e10
;   TerminatedCString s_Bip01_L_UpperArm_005d6e21
;   TerminatedCString s_Bip01_R_UpperArm_005d6e32
;   TerminatedCString s_Bip01_L_ForeArm_005d6e43
;   TerminatedCString s_Bip01_R_ForeArm_005d6e53
;   TerminatedCString s_Bip01_L_Foot_005d6e63
;   TerminatedCString s_Bip01_R_Foot_005d6e70
;   TerminatedCString s_Bip01_L_Thigh_005d6e7d
;   TerminatedCString s_Bip01_R_Thigh_005d6e8b
;   TerminatedCString s_Bip01_L_Calf_005d6e99
;   TerminatedCString s_Bip01_R_Calf_005d6ea6
;   ... and 27 more
;
; Called Functions:
;   core_cloth.cpp_CCloth_load_FUN_005adeb0
;   core_cloth.cpp_FUN_005ae680
;   core_hero.cpp_CHero_setup_FUN_004ce4a0
;   core_motion.cpp_CMotionController_getMotionList_FUN_00503860
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_00502f10
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ad3e0
        ;   Label: core_gabriela.cpp_CGabriella_setup_FUN_004ad3e0
    PUSH ESI                            ; 004ad3e1
    PUSH EDI                            ; 004ad3e2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004ad3e3
    PUSH ESI                            ; 004ad3e7
    CALL core_hero.cpp_CHero_setup_FUN_004ce4a0 ; 004ad3e8
        ;   XREF to: 004ce4a0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_setup_FUN_004ce4a0(CHero * this_ptr)
    ADD ESP,0x4                         ; 004ad3ed
    PUSH 0x5d6ddb                       ; 004ad3f0 | = "gabriela.dfm"
    LEA EDI,[ESI + 0x2b4]               ; 004ad3f5
    PUSH EDI                            ; 004ad3fb
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 004ad3fc
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 004ad401
    PUSH EDI                            ; 004ad404
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480 ; 004ad405
        ;   XREF to: 00547480 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004ad40a
    PUSH 0x5d6de8                       ; 004ad40d | = "gabcoat.cth"
    LEA EBX,[ESI + 0x25680]             ; 004ad412
    PUSH EBX                            ; 004ad418
    CALL core_cloth.cpp_CCloth_load_FUN_005adeb0 ; 004ad419
        ;   XREF to: 005adeb0 (UNCONDITIONAL_CALL)  ; int core_cloth.cpp_CCloth_load_FUN_005adeb0(CCloth * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004ad41e
    PUSH EDI                            ; 004ad421
    LEA EAX,[ESI + 0x30]                ; 004ad422
    PUSH EAX                            ; 004ad425
    LEA EAX,[ESI + 0x20]                ; 004ad426
    PUSH EAX                            ; 004ad429
    PUSH EBX                            ; 004ad42a
    CALL core_cloth.cpp_FUN_005ae680    ; 004ad42b
        ;   XREF to: 005ae680 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_005ae680(CCloth * this_ptr, CVector3f * position, CVector3f * euler, CDeformableModelInstance * model_ptr)
    ADD ESP,0x10                        ; 004ad430
    PUSH EDI                            ; 004ad433
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 004ad434
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004ad439
    PUSH 0x1                            ; 004ad43c
    PUSH 0x5d6df4                       ; 004ad43e | = "Bip01 head"
    PUSH EAX                            ; 004ad443
    MOV EBX,EAX                         ; 004ad444
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004ad446
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004ad44b
    PUSH 0x1                            ; 004ad44e
    PUSH 0x5d6dff                       ; 004ad450 | = "Bip01 L Clavicle"
    PUSH EBX                            ; 004ad455
    MOV [0x01cb0678],EAX                ; 004ad456 | DAT_01cb0678
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004ad45b
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004ad460
    PUSH 0x1                            ; 004ad463
    PUSH 0x5d6e10                       ; 004ad465 | = "Bip01 R Clavicle"
    PUSH EBX                            ; 004ad46a
    MOV [0x01cb067c],EAX                ; 004ad46b | DAT_01cb067c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004ad470
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004ad475
    PUSH 0x1                            ; 004ad478
    PUSH 0x5d6e21                       ; 004ad47a | = "Bip01 L UpperArm"
    PUSH EBX                            ; 004ad47f
    MOV [0x01cb0680],EAX                ; 004ad480 | DAT_01cb0680
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004ad485
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004ad48a
    PUSH 0x1                            ; 004ad48d
    PUSH 0x5d6e32                       ; 004ad48f | = "Bip01 R UpperArm"
    PUSH EBX                            ; 004ad494
    MOV [0x01cb0684],EAX                ; 004ad495 | DAT_01cb0684
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004ad49a
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004ad49f
    PUSH 0x1                            ; 004ad4a2
    PUSH 0x5d6e43                       ; 004ad4a4 | = "Bip01 L ForeArm"
    PUSH EBX                            ; 004ad4a9
    MOV [0x01cb0688],EAX                ; 004ad4aa | DAT_01cb0688
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004ad4af
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004ad4b4
    MOV [0x01cb068c],EAX                ; 004ad4b7 | DAT_01cb068c
    PUSH 0x1                            ; 004ad4bc
    PUSH 0x5d6e53                       ; 004ad4be | = "Bip01 R ForeArm"
    PUSH EBX                            ; 004ad4c3
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004ad4c4
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004ad4c9
    PUSH 0x1                            ; 004ad4cc
    PUSH 0x5d6e63                       ; 004ad4ce | = "Bip01 L Foot"
    PUSH EBX                            ; 004ad4d3
    MOV [0x01cb0690],EAX                ; 004ad4d4 | DAT_01cb0690
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004ad4d9
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004ad4de
    PUSH 0x1                            ; 004ad4e1
    PUSH 0x5d6e70                       ; 004ad4e3 | = "Bip01 R Foot"
    PUSH EBX                            ; 004ad4e8
    MOV [0x01cb0694],EAX                ; 004ad4e9 | DAT_01cb0694
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004ad4ee
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004ad4f3
    PUSH 0x1                            ; 004ad4f6
    PUSH 0x5d6e7d                       ; 004ad4f8 | = "Bip01 L Thigh"
    PUSH EBX                            ; 004ad4fd
    MOV [0x01cb0698],EAX                ; 004ad4fe | DAT_01cb0698
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004ad503
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004ad508
    PUSH 0x1                            ; 004ad50b
    PUSH 0x5d6e8b                       ; 004ad50d | = "Bip01 R Thigh"
    PUSH EBX                            ; 004ad512
    MOV [0x01cb069c],EAX                ; 004ad513 | DAT_01cb069c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004ad518
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004ad51d
    PUSH 0x1                            ; 004ad520
    PUSH 0x5d6e99                       ; 004ad522 | = "Bip01 L Calf"
    PUSH EBX                            ; 004ad527
    MOV [0x01cb06a0],EAX                ; 004ad528 | DAT_01cb06a0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004ad52d
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004ad532
    PUSH 0x1                            ; 004ad535
    PUSH 0x5d6ea6                       ; 004ad537 | = "Bip01 R Calf"
    PUSH EBX                            ; 004ad53c
    MOV [0x01cb06a4],EAX                ; 004ad53d | DAT_01cb06a4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004ad542
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004ad547
    PUSH 0x1                            ; 004ad54a
    PUSH 0x5d6eb3                       ; 004ad54c | = "Bip01 L Hand"
    PUSH EBX                            ; 004ad551
    MOV [0x01cb06a8],EAX                ; 004ad552 | DAT_01cb06a8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004ad557
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004ad55c
    PUSH 0x1                            ; 004ad55f
    PUSH 0x5d6ec0                       ; 004ad561 | = "Bip01 R Hand"
    PUSH EBX                            ; 004ad566
    MOV [0x01cb06b8],EAX                ; 004ad567 | DAT_01cb06b8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004ad56c
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004ad571
    PUSH 0x1                            ; 004ad574
    PUSH 0x5d6ecd                       ; 004ad576 | = "Bip01 Spine2"
    PUSH EBX                            ; 004ad57b
    MOV [0x01cb06bc],EAX                ; 004ad57c | DAT_01cb06bc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004ad581
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004ad586
    MOV [0x01cb06c0],EAX                ; 004ad589 | DAT_01cb06c0
    PUSH 0x1                            ; 004ad58e
    PUSH 0x5d6eda                       ; 004ad590 | = "Bip01 Spine"
    PUSH EBX                            ; 004ad595
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004ad596
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004ad59b
    PUSH 0x1                            ; 004ad59e
    PUSH 0x5d6ee6                       ; 004ad5a0 | = "gab draw"
    PUSH EDI                            ; 004ad5a5
    MOV [0x01cb06c4],EAX                ; 004ad5a6 | DAT_01cb06c4
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_00503860 ; 004ad5ab
        ;   XREF to: 00503860 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_00503860(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004ad5b0
    PUSH EAX                            ; 004ad5b3
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_00502f10 ; 004ad5b4
        ;   XREF to: 00502f10 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_00502f10(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 004ad5b9
    PUSH 0x1                            ; 004ad5bc
    PUSH 0x5d6eef                       ; 004ad5be | = "gab shoot"
    PUSH EDI                            ; 004ad5c3
    MOV [0x01cb06ac],EAX                ; 004ad5c4 | DAT_01cb06ac
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_00503860 ; 004ad5c9
        ;   XREF to: 00503860 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_00503860(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004ad5ce
    PUSH EAX                            ; 004ad5d1
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_00502f10 ; 004ad5d2
        ;   XREF to: 00502f10 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_00502f10(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 004ad5d7
    PUSH 0x1                            ; 004ad5da
    PUSH 0x5d6ef9                       ; 004ad5dc | = "gab crossbow shoot"
    PUSH EDI                            ; 004ad5e1
    MOV [0x01cb06b4],EAX                ; 004ad5e2 | DAT_01cb06b4
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_00503860 ; 004ad5e7
        ;   XREF to: 00503860 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_00503860(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004ad5ec
    PUSH EAX                            ; 004ad5ef
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_00502f10 ; 004ad5f0
        ;   XREF to: 00502f10 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_00502f10(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    MOV dword ptr [ESI + 0x2560c],0x0   ; 004ad5f5
    MOV dword ptr [ESI + 0x25610],0x0   ; 004ad5ff
    MOV [0x01cb06b0],EAX                ; 004ad609 | DAT_01cb06b0
    MOV dword ptr [ESI + 0x25614],0x0   ; 004ad60e
    MOV EAX,[0x01cb06b8]                ; 004ad618 | DAT_01cb06b8
    ADD ESP,0xc                         ; 004ad61d
    MOV dword ptr [ESI + 0x2618],EAX    ; 004ad620
    POP EDI                             ; 004ad626
    POP ESI                             ; 004ad627
    POP EBX                             ; 004ad628
    RET                                 ; 004ad629

