; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_darkwolf_cpp_CDarkwolf_setup_FUN_00598800(CDarkwolf *this_ptr)
;
; Parameters:
; CDarkwolf *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_CTawiscara_005d9805
;   TerminatedCString s_wolfbrn_dfm_005d9810
;   TerminatedCString s_tawiscara_005d981c
;   undefined4 s_awiscara_005d981c+1
;   undefined4 s_wiscara_005d981c+2
;   undefined4 s_iscara_005d981c+3
;   TerminatedCString s_stand_005d9826
;   TerminatedCString s_dog_howl_wav_005d982c
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
;   sound_sndmain.cpp_FUN_00556230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00598800
        ;   Label: core_darkwolf.cpp_CDarkwolf_setup_FUN_00598800
    PUSH ESI                            ; 00598801
    PUSH EDI                            ; 00598802
    MOV EBX,dword ptr [ESP + 0x10]      ; 00598803
    PUSH EBX                            ; 00598807
    CALL core_enemy.cpp_CEnemy_setup_FUN_00489110 ; 00598808
        ;   XREF to: 00489110 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_00489110(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0059880d
    LEA ESI,[EBX + 0x158]               ; 00598810
    PUSH ESI                            ; 00598816
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0 ; 00598817
        ;   XREF to: 0054e6b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059881c
    PUSH ESI                            ; 0059881f
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 00598820
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00598825
    PUSH 0x5d9805                       ; 00598828 | = "CTawiscara"
    CALL core_actor.cpp_createActorByName_FUN_0040c4f0 ; 0059882d
        ;   XREF to: 0040c4f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_createActorByName_FUN_0040c4f0(char * class_name)
    ADD ESP,0x4                         ; 00598832
    PUSH 0x5d9810                       ; 00598835 | = "wolfbrn.dfm"
    MOV dword ptr [EBX + 0xd060],EAX    ; 0059883a
    ADD EAX,0x158                       ; 00598840
    PUSH EAX                            ; 00598845
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0 ; 00598846
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV EDX,dword ptr [EBX + 0x27a8]    ; 0059884b
    ADD ESP,0x8                         ; 00598851
    TEST EDX,EDX                        ; 00598854
    JZ 0x00598862                       ; 00598856
        ;   XREF to: 00598862 (CONDITIONAL_JUMP)  ; LAB_00598862
    MOV dword ptr [EBX + 0xfc],0x1      ; 00598858
    MOV ESI,0x5d981c                    ; 00598862 | = "tawiscara"
        ;   Label: LAB_00598862
    MOV EDI,dword ptr [EBX + 0xd060]    ; 00598867
    PUSH EDI                            ; 0059886d
    MOV AL,byte ptr [ESI]               ; 0059886e | = "tawiscara" | s_wiscara_005d981c+2
        ;   Label: LAB_0059886e
    MOV byte ptr [EDI],AL               ; 00598870
    CMP AL,0x0                          ; 00598872
    JZ 0x00598886                       ; 00598874
        ;   XREF to: 00598886 (CONDITIONAL_JUMP)  ; LAB_00598886
    MOV AL,byte ptr [ESI + 0x1]         ; 00598876 | s_awiscara_005d981c+1 | s_iscara_005d981c+3
    ADD ESI,0x2                         ; 00598879
    MOV byte ptr [EDI + 0x1],AL         ; 0059887c
    ADD EDI,0x2                         ; 0059887f
    CMP AL,0x0                          ; 00598882
    JNZ 0x0059886e                      ; 00598884
        ;   XREF to: 0059886e (CONDITIONAL_JUMP)  ; LAB_0059886e
    POP EDI                             ; 00598886
        ;   Label: LAB_00598886
    LEA EAX,[EBX + 0x20]                ; 00598887
    MOV ESI,dword ptr [EBX + 0xd060]    ; 0059888a
    MOV EDX,dword ptr [EAX]             ; 00598890
    MOV dword ptr [ESI + 0x20],EDX      ; 00598892
    MOV EDX,dword ptr [EAX + 0x4]       ; 00598895
    MOV dword ptr [ESI + 0x24],EDX      ; 00598898
    MOV EDX,dword ptr [EAX + 0x8]       ; 0059889b
    MOV dword ptr [ESI + 0x28],EDX      ; 0059889e
    MOV EAX,dword ptr [EAX + 0xc]       ; 005988a1
    MOV dword ptr [ESI + 0x2c],EAX      ; 005988a4
    MOV EAX,dword ptr [EBX + 0xd060]    ; 005988a7
    LEA ESI,[EBX + 0x30]                ; 005988ad
    ADD EAX,0x30                        ; 005988b0
    CMP EAX,ESI                         ; 005988b3
    JZ 0x005988c7                       ; 005988b5
        ;   XREF to: 005988c7 (CONDITIONAL_JUMP)  ; LAB_005988c7
    MOV EDX,dword ptr [ESI]             ; 005988b7
    MOV dword ptr [EAX],EDX             ; 005988b9
    MOV EDX,dword ptr [ESI + 0x4]       ; 005988bb
    MOV dword ptr [EAX + 0x4],EDX       ; 005988be
    MOV EDX,dword ptr [ESI + 0x8]       ; 005988c1
    MOV dword ptr [EAX + 0x8],EDX       ; 005988c4
    MOV EAX,dword ptr [EBX + 0xd060]    ; 005988c7
        ;   Label: LAB_005988c7
    MOV dword ptr [EAX + 0x27b8],0x3f800000 ; 005988cd
    MOV EAX,dword ptr [EBX + 0xd060]    ; 005988d7
    PUSH EAX                            ; 005988dd
    MOV ESI,dword ptr [EAX + 0x154]     ; 005988de
    CALL dword ptr [ESI]                ; 005988e4
    ADD ESP,0x4                         ; 005988e6
    PUSH 0x1                            ; 005988e9
    MOV EAX,dword ptr [EBX + 0xd060]    ; 005988eb
    PUSH 0x5d9826                       ; 005988f1 | = "stand"
    ADD EAX,0x158                       ; 005988f6
    PUSH EAX                            ; 005988fb
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_004fc310 ; 005988fc
        ;   XREF to: 004fc310 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_004fc310(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00598901
    PUSH EAX                            ; 00598904
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_004fb9c0 ; 00598905
        ;   XREF to: 004fb9c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_004fb9c0(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 0059890a
    PUSH 0x0                            ; 0059890d
    PUSH EAX                            ; 0059890f
    MOV EAX,dword ptr [EBX + 0xd060]    ; 00598910
    ADD EAX,0x158                       ; 00598916
    PUSH EAX                            ; 0059891b
    CALL core_motion.cpp_CMotionController_jumpToMotion_FUN_004fc420 ; 0059891c
        ;   XREF to: 004fc420 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotion_FUN_004fc420(CMotionController * this_ptr, int target_motion_index, float target_frame_number)
    MOV EAX,dword ptr [EBX + 0xd060]    ; 00598921
    ADD ESP,0xc                         ; 00598927
    ADD EAX,0x158                       ; 0059892a
    PUSH EAX                            ; 0059892f
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090 ; 00598930
        ;   XREF to: 0054c090 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090(CDeformableModelInstance * this_ptr)
    MOV EAX,dword ptr [EBX + 0xd060]    ; 00598935
    ADD ESP,0x4                         ; 0059893b
    ADD EAX,0x158                       ; 0059893e
    PUSH EAX                            ; 00598943
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10 ; 00598944
        ;   XREF to: 0054dd10 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00598949
    LEA ESI,[EBX + 0x158]               ; 0059894c
    PUSH ESI                            ; 00598952
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090 ; 00598953
        ;   XREF to: 0054c090 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00598958
    PUSH ESI                            ; 0059895b
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10 ; 0059895c
        ;   XREF to: 0054dd10 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00598961
    PUSH ESI                            ; 00598964
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0 ; 00598965
        ;   XREF to: 0054e6b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059896a
    PUSH ESI                            ; 0059896d
    PUSH 0x0                            ; 0059896e
    LEA EDI,[EBX + 0xd064]              ; 00598970
    PUSH EDI                            ; 00598976
    CALL core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0 ; 00598977
        ;   XREF to: 004fa9c0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr)
    MOV EAX,dword ptr [EBX + 0xd060]    ; 0059897c
    ADD ESP,0xc                         ; 00598982
    ADD EAX,0x158                       ; 00598985
    PUSH EAX                            ; 0059898a
    PUSH 0x1                            ; 0059898b
    PUSH EDI                            ; 0059898d
    CALL core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0 ; 0059898e
        ;   XREF to: 004fa9c0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr)
    ADD ESP,0xc                         ; 00598993
    PUSH EDI                            ; 00598996
    CALL core_morph.cpp_CMorph_getReady_FUN_004fac10 ; 00598997
        ;   XREF to: 004fac10 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_getReady_FUN_004fac10(CMorph * this_ptr)
    ADD ESP,0x4                         ; 0059899c
    PUSH ESI                            ; 0059899f
    MOV dword ptr [EBX + 0xdc90],0x0    ; 005989a0
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0054c110 ; 005989aa
        ;   XREF to: 0054c110 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0054c110(CDeformableModelInstance * this_ptr)
    MOV EAX,dword ptr [EBX + 0xd060]    ; 005989af
    ADD ESP,0x4                         ; 005989b5
    ADD EAX,0x158                       ; 005989b8
    PUSH EAX                            ; 005989bd
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0054c110 ; 005989be
        ;   XREF to: 0054c110 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0054c110(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005989c3
    PUSH 0x5d982c                       ; 005989c6 | = "dog_howl.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 005989cb
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 005989d0
    POP EDI                             ; 005989d3
    POP ESI                             ; 005989d4
    POP EBX                             ; 005989d5
    RET                                 ; 005989d6

