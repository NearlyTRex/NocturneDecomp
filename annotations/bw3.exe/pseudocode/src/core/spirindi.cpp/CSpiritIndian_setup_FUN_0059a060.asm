; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_spirindi_cpp_CSpiritIndian_setup_FUN_0059a060(CSpiritIndian *this_ptr)
;
; Parameters:
; CSpiritIndian *  Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_CPryeMorph_005d9a48
;   TerminatedCString s_bwp3_prye_morph_dfm_005d9a53
;   TerminatedCString s_prye_morph_005d9a67
;   undefined4 s_rye_morph_005d9a67+1
;   undefined4 s_ye_morph_005d9a67+2
;   undefined4 s_e_morph_005d9a67+3
;   TerminatedCString s_stand_005d9a72
;
; Called Functions:
;   core_actor.cpp_createActorByName_FUN_0040c4f0
;   core_cloth.cpp_CClothList_load_FUN_0043f920
;   core_cloth.cpp_CClothList_process_FUN_0043fc00
;   core_cloth.cpp_CClothList_setup_FUN_0043fbc0
;   core_morph.cpp_CMorph_addPartFromKeyframedModel_FUN_004fab10
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
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059a060
        ;   Label: core_spirindi.cpp_CSpiritIndian_setup_FUN_0059a060
    PUSH ESI                            ; 0059a061
    PUSH EBP                            ; 0059a062
    MOV EBX,dword ptr [ESP + 0x10]      ; 0059a063
    PUSH EBX                            ; 0059a067
    CALL core_npc.cpp_CNPC_setup_FUN_00509020 ; 0059a068
        ;   XREF to: 00509020 (UNCONDITIONAL_CALL)  ; void core_npc.cpp_CNPC_setup_FUN_00509020(CNPC * this_ptr)
    MOV EDX,dword ptr [EBX + 0x27a8]    ; 0059a06d
    ADD ESP,0x4                         ; 0059a073
    TEST EDX,EDX                        ; 0059a076
    JZ 0x0059a084                       ; 0059a078
        ;   XREF to: 0059a084 (CONDITIONAL_JUMP)  ; LAB_0059a084
    MOV dword ptr [EBX + 0xfc],0x1      ; 0059a07a
    PUSH EDI                            ; 0059a084
        ;   Label: LAB_0059a084
    PUSH 0x5d9a48                       ; 0059a085 | = "CPryeMorph"
    CALL core_actor.cpp_createActorByName_FUN_0040c4f0 ; 0059a08a
        ;   XREF to: 0040c4f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_createActorByName_FUN_0040c4f0()
    ADD ESP,0x4                         ; 0059a08f
    PUSH 0x5d9a53                       ; 0059a092 | = "bwp3_prye_morph.dfm"
    MOV dword ptr [EBX + 0x34170],EAX   ; 0059a097
    ADD EAX,0x158                       ; 0059a09d
    PUSH EAX                            ; 0059a0a2
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0 ; 0059a0a3
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV EAX,dword ptr [EBX + 0x34170]   ; 0059a0a8
    ADD ESP,0x8                         ; 0059a0ae
    ADD EAX,0x158                       ; 0059a0b1
    PUSH EAX                            ; 0059a0b6
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0 ; 0059a0b7
        ;   XREF to: 0054e6b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059a0bc
    LEA EBP,[EBX + 0x33fa4]             ; 0059a0bf
    PUSH EBP                            ; 0059a0c5
    CALL core_cloth.cpp_CClothList_load_FUN_0043f920 ; 0059a0c6
        ;   XREF to: 0043f920 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_load_FUN_0043f920(CClothList * this_ptr)
    MOV EAX,dword ptr [EBX + 0x34170]   ; 0059a0cb
    ADD ESP,0x4                         ; 0059a0d1
    ADD EAX,0x158                       ; 0059a0d4
    PUSH EAX                            ; 0059a0d9
    LEA ESI,[EBX + 0x30]                ; 0059a0da
    PUSH ESI                            ; 0059a0dd
    LEA EDI,[EBX + 0x20]                ; 0059a0de
    PUSH EDI                            ; 0059a0e1
    PUSH EBP                            ; 0059a0e2
    CALL core_cloth.cpp_CClothList_setup_FUN_0043fbc0 ; 0059a0e3
        ;   XREF to: 0043fbc0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_setup_FUN_0043fbc0(CClothList * this_ptr, CVector3f * position, CVector3f * euler, CDeformableModelInstance * model_ptr)
    MOV EAX,dword ptr [EBX + 0x34170]   ; 0059a0e8
    ADD ESP,0x10                        ; 0059a0ee
    ADD EAX,0x158                       ; 0059a0f1
    PUSH EAX                            ; 0059a0f6
    PUSH dword ptr [EBX + 0x2504]       ; 0059a0f7
    PUSH 0x3d4ccccd                     ; 0059a0fd
    PUSH ESI                            ; 0059a102
    PUSH EDI                            ; 0059a103
    LEA EAX,[EBX + 0x2f08]              ; 0059a104
    PUSH EAX                            ; 0059a10a
    CALL core_cloth.cpp_CClothList_process_FUN_0043fc00 ; 0059a10b
        ;   XREF to: 0043fc00 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_process_FUN_0043fc00(CClothList * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    MOV ECX,dword ptr [EBX + 0x27a8]    ; 0059a110
    ADD ESP,0x18                        ; 0059a116
    TEST ECX,ECX                        ; 0059a119
    JZ 0x0059a127                       ; 0059a11b
        ;   XREF to: 0059a127 (CONDITIONAL_JUMP)  ; LAB_0059a127
    MOV dword ptr [EBX + 0xfc],0x1      ; 0059a11d
    MOV ESI,0x5d9a67                    ; 0059a127 | = "prye_morph"
        ;   Label: LAB_0059a127
    MOV EDI,dword ptr [EBX + 0x34170]   ; 0059a12c
    PUSH EDI                            ; 0059a132
    MOV AL,byte ptr [ESI]               ; 0059a133 | = "prye_morph" | s_ye_morph_005d9a67+2
        ;   Label: LAB_0059a133
    MOV byte ptr [EDI],AL               ; 0059a135
    CMP AL,0x0                          ; 0059a137
    JZ 0x0059a14b                       ; 0059a139
        ;   XREF to: 0059a14b (CONDITIONAL_JUMP)  ; LAB_0059a14b
    MOV AL,byte ptr [ESI + 0x1]         ; 0059a13b | s_rye_morph_005d9a67+1 | s_e_morph_005d9a67+3
    ADD ESI,0x2                         ; 0059a13e
    MOV byte ptr [EDI + 0x1],AL         ; 0059a141
    ADD EDI,0x2                         ; 0059a144
    CMP AL,0x0                          ; 0059a147
    JNZ 0x0059a133                      ; 0059a149
        ;   XREF to: 0059a133 (CONDITIONAL_JUMP)  ; LAB_0059a133
    POP EDI                             ; 0059a14b
        ;   Label: LAB_0059a14b
    LEA ESI,[EBX + 0x20]                ; 0059a14c
    MOV EAX,dword ptr [EBX + 0x34170]   ; 0059a14f
    MOV EDX,dword ptr [ESI]             ; 0059a155
    MOV dword ptr [EAX + 0x20],EDX      ; 0059a157
    MOV EDX,dword ptr [ESI + 0x4]       ; 0059a15a
    MOV dword ptr [EAX + 0x24],EDX      ; 0059a15d
    MOV EDX,dword ptr [ESI + 0x8]       ; 0059a160
    MOV dword ptr [EAX + 0x28],EDX      ; 0059a163
    MOV ESI,dword ptr [ESI + 0xc]       ; 0059a166
    MOV dword ptr [EAX + 0x2c],ESI      ; 0059a169
    MOV EAX,dword ptr [EBX + 0x34170]   ; 0059a16c
    LEA ESI,[EBX + 0x30]                ; 0059a172
    ADD EAX,0x30                        ; 0059a175
    CMP EAX,ESI                         ; 0059a178
    JZ 0x0059a18c                       ; 0059a17a
        ;   XREF to: 0059a18c (CONDITIONAL_JUMP)  ; LAB_0059a18c
    MOV EDX,dword ptr [ESI]             ; 0059a17c
    MOV dword ptr [EAX],EDX             ; 0059a17e
    MOV EDX,dword ptr [ESI + 0x4]       ; 0059a180
    MOV dword ptr [EAX + 0x4],EDX       ; 0059a183
    MOV EDX,dword ptr [ESI + 0x8]       ; 0059a186
    MOV dword ptr [EAX + 0x8],EDX       ; 0059a189
    MOV EAX,dword ptr [EBX + 0x34170]   ; 0059a18c
        ;   Label: LAB_0059a18c
    MOV dword ptr [EAX + 0x27b8],0x3f800000 ; 0059a192
    MOV EAX,dword ptr [EBX + 0x34170]   ; 0059a19c
    PUSH EAX                            ; 0059a1a2
    MOV ESI,dword ptr [EAX + 0x154]     ; 0059a1a3
    CALL dword ptr [ESI]                ; 0059a1a9
    ADD ESP,0x4                         ; 0059a1ab
    PUSH 0x1                            ; 0059a1ae
    MOV EAX,dword ptr [EBX + 0x34170]   ; 0059a1b0
    PUSH 0x5d9a72                       ; 0059a1b6 | = "stand"
    ADD EAX,0x158                       ; 0059a1bb
    PUSH EAX                            ; 0059a1c0
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_004fc310 ; 0059a1c1
        ;   XREF to: 004fc310 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_004fc310(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0059a1c6
    PUSH EAX                            ; 0059a1c9
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_004fb9c0 ; 0059a1ca
        ;   XREF to: 004fb9c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_004fb9c0(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 0059a1cf
    PUSH 0x0                            ; 0059a1d2
    PUSH EAX                            ; 0059a1d4
    MOV EAX,dword ptr [EBX + 0x34170]   ; 0059a1d5
    ADD EAX,0x158                       ; 0059a1db
    PUSH EAX                            ; 0059a1e0
    CALL core_motion.cpp_CMotionController_jumpToMotion_FUN_004fc420 ; 0059a1e1
        ;   XREF to: 004fc420 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotion_FUN_004fc420(CMotionController * this_ptr, int target_motion_index, float target_frame_number)
    MOV EAX,dword ptr [EBX + 0x34170]   ; 0059a1e6
    ADD ESP,0xc                         ; 0059a1ec
    ADD EAX,0x158                       ; 0059a1ef
    PUSH EAX                            ; 0059a1f4
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090 ; 0059a1f5
        ;   XREF to: 0054c090 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090(CDeformableModelInstance * this_ptr)
    MOV EAX,dword ptr [EBX + 0x34170]   ; 0059a1fa
    ADD ESP,0x4                         ; 0059a200
    ADD EAX,0x158                       ; 0059a203
    PUSH EAX                            ; 0059a208
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10 ; 0059a209
        ;   XREF to: 0054dd10 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059a20e
    LEA ESI,[EBX + 0x158]               ; 0059a211
    PUSH ESI                            ; 0059a217
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090 ; 0059a218
        ;   XREF to: 0054c090 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059a21d
    PUSH ESI                            ; 0059a220
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10 ; 0059a221
        ;   XREF to: 0054dd10 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059a226
    PUSH ESI                            ; 0059a229
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0 ; 0059a22a
        ;   XREF to: 0054e6b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059a22f
    PUSH 0x0                            ; 0059a232
    MOV EDI,dword ptr [EBX + 0x34138]   ; 0059a234
    PUSH EDI                            ; 0059a23a
    PUSH 0x1                            ; 0059a23b
    LEA EDI,[EBX + 0x34174]             ; 0059a23d
    PUSH EDI                            ; 0059a243
    CALL core_morph.cpp_CMorph_addPartFromKeyframedModel_FUN_004fab10 ; 0059a244
        ;   XREF to: 004fab10 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_addPartFromKeyframedModel_FUN_004fab10(CMorph * this_ptr, int model_index, CKeyFramedModel * model_ptr, int frame_index)
    ADD ESP,0x10                        ; 0059a249
    PUSH ESI                            ; 0059a24c
    PUSH 0x0                            ; 0059a24d
    PUSH EDI                            ; 0059a24f
    CALL core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0 ; 0059a250
        ;   XREF to: 004fa9c0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr)
    MOV EAX,dword ptr [EBX + 0x34170]   ; 0059a255
    ADD ESP,0xc                         ; 0059a25b
    ADD EAX,0x158                       ; 0059a25e
    PUSH EAX                            ; 0059a263
    PUSH 0x1                            ; 0059a264
    PUSH EDI                            ; 0059a266
    CALL core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0 ; 0059a267
        ;   XREF to: 004fa9c0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr)
    ADD ESP,0xc                         ; 0059a26c
    PUSH EDI                            ; 0059a26f
    CALL core_morph.cpp_CMorph_getReady_FUN_004fac10 ; 0059a270
        ;   XREF to: 004fac10 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_getReady_FUN_004fac10(CMorph * this_ptr)
    ADD ESP,0x4                         ; 0059a275
    POP EDI                             ; 0059a278
    PUSH ESI                            ; 0059a279
    MOV dword ptr [EBX + 0x34da0],0x0   ; 0059a27a
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0054c110 ; 0059a284
        ;   XREF to: 0054c110 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0054c110(CDeformableModelInstance * this_ptr)
    MOV EAX,dword ptr [EBX + 0x34170]   ; 0059a289
    ADD ESP,0x4                         ; 0059a28f
    ADD EAX,0x158                       ; 0059a292
    PUSH EAX                            ; 0059a297
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0054c110 ; 0059a298
        ;   XREF to: 0054c110 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0054c110(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059a29d
    POP EBP                             ; 0059a2a0
    POP ESI                             ; 0059a2a1
    POP EBX                             ; 0059a2a2
    RET                                 ; 0059a2a3

