; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_styler_cpp_CStyler_setup_FUN_0059d7f0(CStyler *this_ptr)
;
; Parameters:
; CStyler *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_CStylerDemon_005d9eb3
;   TerminatedCString s_bwp3_stylerdemon_dfm_005d9ec0
;   TerminatedCString s_Elizabeth_Demon_005d9ed5
;   undefined4 s_Elizabeth_Demon_005d9ed5+1
;   undefined4 s_Elizabeth_Demon_005d9ed5+2
;   undefined4 s_Elizabeth_Demon_005d9ed5+3
;   TerminatedCString s_stand_005d9ee5
;
; Called Functions:
;   core_actor.cpp_createActorByName_FUN_0040c4f0
;   core_enemy.cpp_CEnemy_setup_FUN_00489110
;   core_morph.cpp_CMorph_getReady_FUN_004fac10
;   core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0
;   core_motion.cpp_CMotionController_getMotionList_FUN_004fc310
;   core_motion.cpp_CMotionController_jumpToMotion_FUN_004fc420
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_004fb9c0
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0
;   core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0054c110
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059d7f0
        ;   Label: core_styler.cpp_CStyler_setup_FUN_0059d7f0
    PUSH ESI                            ; 0059d7f1
    PUSH EDI                            ; 0059d7f2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0059d7f3
    PUSH EBX                            ; 0059d7f7
    CALL core_enemy.cpp_CEnemy_setup_FUN_00489110 ; 0059d7f8
        ;   XREF to: 00489110 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_00489110(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0059d7fd
    LEA ESI,[EBX + 0x158]               ; 0059d800
    PUSH ESI                            ; 0059d806
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0 ; 0059d807
        ;   XREF to: 0054e6b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059d80c
    PUSH ESI                            ; 0059d80f
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 0059d810
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    MOV EDX,dword ptr [EBX + 0x47b90]   ; 0059d815
    ADD ESP,0x4                         ; 0059d81b
    TEST EDX,EDX                        ; 0059d81e
    JNZ 0x0059d94a                      ; 0059d820
        ;   XREF to: 0059d94a (CONDITIONAL_JUMP)  ; LAB_0059d94a
    PUSH 0x5d9eb3                       ; 0059d826 | = "CStylerDemon"
    CALL core_actor.cpp_createActorByName_FUN_0040c4f0 ; 0059d82b
        ;   XREF to: 0040c4f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_createActorByName_FUN_0040c4f0(char * class_name)
    ADD ESP,0x4                         ; 0059d830
    PUSH 0x5d9ec0                       ; 0059d833 | = "bwp3_stylerdemon.dfm"
    MOV dword ptr [EBX + 0x47b94],EAX   ; 0059d838
    ADD EAX,0x158                       ; 0059d83e
    PUSH EAX                            ; 0059d843
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0 ; 0059d844
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV ECX,dword ptr [EBX + 0x27a8]    ; 0059d849
    ADD ESP,0x8                         ; 0059d84f
    TEST ECX,ECX                        ; 0059d852
    JZ 0x0059d860                       ; 0059d854
        ;   XREF to: 0059d860 (CONDITIONAL_JUMP)  ; LAB_0059d860
    MOV dword ptr [EBX + 0xfc],0x1      ; 0059d856
    MOV ESI,0x5d9ed5                    ; 0059d860 | = "Elizabeth-Demon"
        ;   Label: LAB_0059d860
    MOV EDI,dword ptr [EBX + 0x47b94]   ; 0059d865
    PUSH EDI                            ; 0059d86b
    MOV AL,byte ptr [ESI]               ; 0059d86c | = "Elizabeth-Demon" | s_Elizabeth_Demon_005d9ed5+2
        ;   Label: LAB_0059d86c
    MOV byte ptr [EDI],AL               ; 0059d86e
    CMP AL,0x0                          ; 0059d870
    JZ 0x0059d884                       ; 0059d872
        ;   XREF to: 0059d884 (CONDITIONAL_JUMP)  ; LAB_0059d884
    MOV AL,byte ptr [ESI + 0x1]         ; 0059d874 | s_Elizabeth_Demon_005d9ed5+1 | s_Elizabeth_Demon_005d9ed5+3
    ADD ESI,0x2                         ; 0059d877
    MOV byte ptr [EDI + 0x1],AL         ; 0059d87a
    ADD EDI,0x2                         ; 0059d87d
    CMP AL,0x0                          ; 0059d880
    JNZ 0x0059d86c                      ; 0059d882
        ;   XREF to: 0059d86c (CONDITIONAL_JUMP)  ; LAB_0059d86c
    POP EDI                             ; 0059d884
        ;   Label: LAB_0059d884
    LEA ESI,[EBX + 0x20]                ; 0059d885
    MOV EAX,dword ptr [EBX + 0x47b94]   ; 0059d888
    MOV EDX,dword ptr [ESI]             ; 0059d88e
    MOV dword ptr [EAX + 0x20],EDX      ; 0059d890
    MOV EDX,dword ptr [ESI + 0x4]       ; 0059d893
    MOV dword ptr [EAX + 0x24],EDX      ; 0059d896
    MOV EDX,dword ptr [ESI + 0x8]       ; 0059d899
    MOV dword ptr [EAX + 0x28],EDX      ; 0059d89c
    MOV ESI,dword ptr [ESI + 0xc]       ; 0059d89f
    MOV dword ptr [EAX + 0x2c],ESI      ; 0059d8a2
    MOV ESI,dword ptr [EBX + 0x47b94]   ; 0059d8a5
    LEA EAX,[EBX + 0x30]                ; 0059d8ab
    ADD ESI,0x30                        ; 0059d8ae
    CMP ESI,EAX                         ; 0059d8b1
    JZ 0x0059d8c5                       ; 0059d8b3
        ;   XREF to: 0059d8c5 (CONDITIONAL_JUMP)  ; LAB_0059d8c5
    MOV EDX,dword ptr [EAX]             ; 0059d8b5
    MOV dword ptr [ESI],EDX             ; 0059d8b7
    MOV EDX,dword ptr [EAX + 0x4]       ; 0059d8b9
    MOV dword ptr [ESI + 0x4],EDX       ; 0059d8bc
    MOV EDX,dword ptr [EAX + 0x8]       ; 0059d8bf
    MOV dword ptr [ESI + 0x8],EDX       ; 0059d8c2
    MOV EAX,dword ptr [EBX + 0x47b94]   ; 0059d8c5
        ;   Label: LAB_0059d8c5
    MOV dword ptr [EAX + 0x27b8],0x3f800000 ; 0059d8cb
    MOV EAX,dword ptr [EBX + 0x47b94]   ; 0059d8d5
    PUSH EAX                            ; 0059d8db
    MOV ESI,dword ptr [EAX + 0x154]     ; 0059d8dc
    CALL dword ptr [ESI]                ; 0059d8e2
    ADD ESP,0x4                         ; 0059d8e4
    PUSH 0x1                            ; 0059d8e7
    MOV EAX,dword ptr [EBX + 0x47b94]   ; 0059d8e9
    PUSH 0x5d9ee5                       ; 0059d8ef | = "stand"
    ADD EAX,0x158                       ; 0059d8f4
    PUSH EAX                            ; 0059d8f9
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_004fc310 ; 0059d8fa
        ;   XREF to: 004fc310 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_004fc310(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0059d8ff
    PUSH EAX                            ; 0059d902
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_004fb9c0 ; 0059d903
        ;   XREF to: 004fb9c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_004fb9c0(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 0059d908
    PUSH 0x0                            ; 0059d90b
    PUSH EAX                            ; 0059d90d
    MOV EAX,dword ptr [EBX + 0x47b94]   ; 0059d90e
    ADD EAX,0x158                       ; 0059d914
    PUSH EAX                            ; 0059d919
    CALL core_motion.cpp_CMotionController_jumpToMotion_FUN_004fc420 ; 0059d91a
        ;   XREF to: 004fc420 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotion_FUN_004fc420(CMotionController * this_ptr, int target_motion_index, float target_frame_number)
    MOV EAX,dword ptr [EBX + 0x47b94]   ; 0059d91f
    ADD ESP,0xc                         ; 0059d925
    ADD EAX,0x158                       ; 0059d928
    PUSH EAX                            ; 0059d92d
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090 ; 0059d92e
        ;   XREF to: 0054c090 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090(CDeformableModelInstance * this_ptr)
    MOV EAX,dword ptr [EBX + 0x47b94]   ; 0059d933
    ADD ESP,0x4                         ; 0059d939
    ADD EAX,0x158                       ; 0059d93c
    PUSH EAX                            ; 0059d941
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10 ; 0059d942
        ;   XREF to: 0054dd10 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059d947
    LEA ESI,[EBX + 0x158]               ; 0059d94a
        ;   Label: LAB_0059d94a
    PUSH ESI                            ; 0059d950
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090 ; 0059d951
        ;   XREF to: 0054c090 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059d956
    PUSH ESI                            ; 0059d959
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10 ; 0059d95a
        ;   XREF to: 0054dd10 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059d95f
    PUSH ESI                            ; 0059d962
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0 ; 0059d963
        ;   XREF to: 0054e6b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(CDeformableModelInstance * this_ptr)
    MOV EDI,dword ptr [EBX + 0x47b90]   ; 0059d968
    ADD ESP,0x4                         ; 0059d96e
    TEST EDI,EDI                        ; 0059d971
    JZ 0x0059d992                       ; 0059d973
        ;   XREF to: 0059d992 (CONDITIONAL_JUMP)  ; LAB_0059d992
    ADD EBX,0x158                       ; 0059d975
        ;   Label: LAB_0059d975
    PUSH EBX                            ; 0059d97b
    MOV dword ptr [EBX + 0x4866c],0x0   ; 0059d97c
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0054c110 ; 0059d986
        ;   XREF to: 0054c110 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0054c110(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059d98b
    POP EDI                             ; 0059d98e
    POP ESI                             ; 0059d98f
    POP EBX                             ; 0059d990
    RET                                 ; 0059d991
    PUSH ESI                            ; 0059d992
        ;   Label: LAB_0059d992
    PUSH EDI                            ; 0059d993
    LEA ESI,[EBX + 0x47b98]             ; 0059d994
    PUSH ESI                            ; 0059d99a
    CALL core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0 ; 0059d99b
        ;   XREF to: 004fa9c0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr)
    MOV EAX,dword ptr [EBX + 0x47b94]   ; 0059d9a0
    ADD ESP,0xc                         ; 0059d9a6
    ADD EAX,0x158                       ; 0059d9a9
    PUSH EAX                            ; 0059d9ae
    PUSH 0x1                            ; 0059d9af
    PUSH ESI                            ; 0059d9b1
    CALL core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0 ; 0059d9b2
        ;   XREF to: 004fa9c0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr)
    ADD ESP,0xc                         ; 0059d9b7
    PUSH ESI                            ; 0059d9ba
    CALL core_morph.cpp_CMorph_getReady_FUN_004fac10 ; 0059d9bb
        ;   XREF to: 004fac10 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_getReady_FUN_004fac10(CMorph * this_ptr)
    MOV EAX,dword ptr [EBX + 0x47b94]   ; 0059d9c0
    ADD ESP,0x4                         ; 0059d9c6
    ADD EAX,0x158                       ; 0059d9c9
    PUSH EAX                            ; 0059d9ce
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0054c110 ; 0059d9cf
        ;   XREF to: 0054c110 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0054c110(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059d9d4
    JMP 0x0059d975                      ; 0059d9d7
        ;   XREF to: 0059d975 (UNCONDITIONAL_JUMP)  ; LAB_0059d975

