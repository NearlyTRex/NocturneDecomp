; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_passngr_cpp_CPassenger_setup_FUN_0050a610(CPassenger *this_ptr)
;
; Parameters:
; CPassenger *     Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_CWerewolf_005cb6d1
;   TerminatedCString s_transform_005cb6db
;
; Called Functions:
;   core_actor.cpp_createActorByName_FUN_0040c4f0
;   core_morph.cpp_CMorph_getReady_FUN_004fac10
;   core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0
;   core_motion.cpp_CMotionController_getMotionList_FUN_004fc310
;   core_motion.cpp_CMotionController_jumpToMotion_FUN_004fc420
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_004fb9c0
;   core_npc.cpp_CNPC_setup_FUN_00509020
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0
;   core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0054c110
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050a610
        ;   Label: core_passngr.cpp_CPassenger_setup_FUN_0050a610
    PUSH ESI                            ; 0050a611
    PUSH EDI                            ; 0050a612
    MOV EBX,dword ptr [ESP + 0x10]      ; 0050a613
    PUSH EBX                            ; 0050a617
    CALL core_npc.cpp_CNPC_setup_FUN_00509020 ; 0050a618
        ;   XREF to: 00509020 (UNCONDITIONAL_CALL)  ; void core_npc.cpp_CNPC_setup_FUN_00509020(CNPC * this_ptr)
    MOV EDX,dword ptr [EBX + 0x207d0]   ; 0050a61d
    ADD ESP,0x4                         ; 0050a623
    TEST EDX,EDX                        ; 0050a626
    JZ 0x0050a6d4                       ; 0050a628
        ;   XREF to: 0050a6d4 (CONDITIONAL_JUMP)  ; LAB_0050a6d4
    MOV EAX,dword ptr [EBX + 0x207d0]   ; 0050a62e
        ;   Label: LAB_0050a62e
    ADD EAX,0x158                       ; 0050a634
    PUSH EAX                            ; 0050a639
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090 ; 0050a63a
        ;   XREF to: 0054c090 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090(CDeformableModelInstance * this_ptr)
    MOV EAX,dword ptr [EBX + 0x207d0]   ; 0050a63f
    ADD ESP,0x4                         ; 0050a645
    ADD EAX,0x158                       ; 0050a648
    PUSH EAX                            ; 0050a64d
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10 ; 0050a64e
        ;   XREF to: 0054dd10 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0050a653
    LEA ESI,[EBX + 0x158]               ; 0050a656
    PUSH ESI                            ; 0050a65c
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090 ; 0050a65d
        ;   XREF to: 0054c090 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0050a662
    PUSH ESI                            ; 0050a665
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10 ; 0050a666
        ;   XREF to: 0054dd10 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0050a66b
    PUSH ESI                            ; 0050a66e
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0 ; 0050a66f
        ;   XREF to: 0054e6b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0050a674
    PUSH ESI                            ; 0050a677
    PUSH 0x0                            ; 0050a678
    LEA EDI,[EBX + 0x207d4]             ; 0050a67a
    PUSH EDI                            ; 0050a680
    CALL core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0 ; 0050a681
        ;   XREF to: 004fa9c0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr)
    MOV EAX,dword ptr [EBX + 0x207d0]   ; 0050a686
    ADD ESP,0xc                         ; 0050a68c
    ADD EAX,0x158                       ; 0050a68f
    PUSH EAX                            ; 0050a694
    PUSH 0x1                            ; 0050a695
    PUSH EDI                            ; 0050a697
    CALL core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0 ; 0050a698
        ;   XREF to: 004fa9c0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr)
    ADD ESP,0xc                         ; 0050a69d
    PUSH EDI                            ; 0050a6a0
    CALL core_morph.cpp_CMorph_getReady_FUN_004fac10 ; 0050a6a1
        ;   XREF to: 004fac10 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_getReady_FUN_004fac10(CMorph * this_ptr)
    ADD ESP,0x4                         ; 0050a6a6
    PUSH ESI                            ; 0050a6a9
    MOV dword ptr [EBX + 0x21400],0x0   ; 0050a6aa
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0054c110 ; 0050a6b4
        ;   XREF to: 0054c110 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0054c110(CDeformableModelInstance * this_ptr)
    MOV EAX,dword ptr [EBX + 0x207d0]   ; 0050a6b9
    ADD ESP,0x4                         ; 0050a6bf
    ADD EAX,0x158                       ; 0050a6c2
    PUSH EAX                            ; 0050a6c7
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0054c110 ; 0050a6c8
        ;   XREF to: 0054c110 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0054c110(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0050a6cd
    POP EDI                             ; 0050a6d0
    POP ESI                             ; 0050a6d1
    POP EBX                             ; 0050a6d2
    RET                                 ; 0050a6d3
    PUSH 0x5cb6d1                       ; 0050a6d4 | = "CWerewolf"
        ;   Label: LAB_0050a6d4
    CALL core_actor.cpp_createActorByName_FUN_0040c4f0 ; 0050a6d9
        ;   XREF to: 0040c4f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_createActorByName_FUN_0040c4f0()
    LEA ESI,[EBX + 0x2074c]             ; 0050a6de
    ADD ESP,0x4                         ; 0050a6e4
    MOV EDI,EAX                         ; 0050a6e7
    MOV dword ptr [EBX + 0x207d0],EAX   ; 0050a6e9
    PUSH EDI                            ; 0050a6ef
    MOV AL,byte ptr [ESI]               ; 0050a6f0
        ;   Label: LAB_0050a6f0
    MOV byte ptr [EDI],AL               ; 0050a6f2
    CMP AL,0x0                          ; 0050a6f4
    JZ 0x0050a708                       ; 0050a6f6
        ;   XREF to: 0050a708 (CONDITIONAL_JUMP)  ; LAB_0050a708
    MOV AL,byte ptr [ESI + 0x1]         ; 0050a6f8
    ADD ESI,0x2                         ; 0050a6fb
    MOV byte ptr [EDI + 0x1],AL         ; 0050a6fe
    ADD EDI,0x2                         ; 0050a701
    CMP AL,0x0                          ; 0050a704
    JNZ 0x0050a6f0                      ; 0050a706
        ;   XREF to: 0050a6f0 (CONDITIONAL_JUMP)  ; LAB_0050a6f0
    POP EDI                             ; 0050a708
        ;   Label: LAB_0050a708
    LEA ESI,[EBX + 0x20]                ; 0050a709
    MOV EAX,dword ptr [EBX + 0x207d0]   ; 0050a70c
    MOV EDX,dword ptr [ESI]             ; 0050a712
    MOV dword ptr [EAX + 0x20],EDX      ; 0050a714
    MOV EDX,dword ptr [ESI + 0x4]       ; 0050a717
    MOV dword ptr [EAX + 0x24],EDX      ; 0050a71a
    MOV EDX,dword ptr [ESI + 0x8]       ; 0050a71d
    MOV dword ptr [EAX + 0x28],EDX      ; 0050a720
    MOV ESI,dword ptr [ESI + 0xc]       ; 0050a723
    MOV dword ptr [EAX + 0x2c],ESI      ; 0050a726
    MOV EAX,dword ptr [EBX + 0x207d0]   ; 0050a729
    LEA ESI,[EBX + 0x30]                ; 0050a72f
    ADD EAX,0x30                        ; 0050a732
    CMP EAX,ESI                         ; 0050a735
    JZ 0x0050a749                       ; 0050a737
        ;   XREF to: 0050a749 (CONDITIONAL_JUMP)  ; LAB_0050a749
    MOV EDX,dword ptr [ESI]             ; 0050a739
    MOV dword ptr [EAX],EDX             ; 0050a73b
    MOV EDX,dword ptr [ESI + 0x4]       ; 0050a73d
    MOV dword ptr [EAX + 0x4],EDX       ; 0050a740
    MOV EDX,dword ptr [ESI + 0x8]       ; 0050a743
    MOV dword ptr [EAX + 0x8],EDX       ; 0050a746
    LEA EAX,[EBX + 0x2072c]             ; 0050a749
        ;   Label: LAB_0050a749
    PUSH EAX                            ; 0050a74f
    MOV EAX,dword ptr [EBX + 0x207d0]   ; 0050a750
    ADD EAX,0x158                       ; 0050a756
    PUSH EAX                            ; 0050a75b
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0 ; 0050a75c
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV EAX,dword ptr [EBX + 0x207d0]   ; 0050a761
    FLD float ptr [EBX + 0x21404]       ; 0050a767
    ADD ESP,0x8                         ; 0050a76d
    FSTP float ptr [EAX + 0x27b8]       ; 0050a770
    MOV EAX,dword ptr [EBX + 0x207d0]   ; 0050a776
    PUSH EAX                            ; 0050a77c
    MOV ESI,dword ptr [EAX + 0x154]     ; 0050a77d
    CALL dword ptr [ESI]                ; 0050a783
    ADD ESP,0x4                         ; 0050a785
    PUSH 0x1                            ; 0050a788
    MOV EAX,dword ptr [EBX + 0x207d0]   ; 0050a78a
    PUSH 0x5cb6db                       ; 0050a790 | = "transform"
    ADD EAX,0x158                       ; 0050a795
    PUSH EAX                            ; 0050a79a
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_004fc310 ; 0050a79b
        ;   XREF to: 004fc310 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_004fc310(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0050a7a0
    PUSH EAX                            ; 0050a7a3
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_004fb9c0 ; 0050a7a4
        ;   XREF to: 004fb9c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_004fb9c0(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 0050a7a9
    PUSH 0x0                            ; 0050a7ac
    PUSH EAX                            ; 0050a7ae
    MOV EAX,dword ptr [EBX + 0x207d0]   ; 0050a7af
    ADD EAX,0x158                       ; 0050a7b5
    PUSH EAX                            ; 0050a7ba
    CALL core_motion.cpp_CMotionController_jumpToMotion_FUN_004fc420 ; 0050a7bb
        ;   XREF to: 004fc420 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotion_FUN_004fc420(CMotionController * this_ptr, int target_motion_index, float target_frame_number)
    ADD ESP,0xc                         ; 0050a7c0
    JMP 0x0050a62e                      ; 0050a7c3
        ;   XREF to: 0050a62e (UNCONDITIONAL_JUMP)  ; LAB_0050a62e

