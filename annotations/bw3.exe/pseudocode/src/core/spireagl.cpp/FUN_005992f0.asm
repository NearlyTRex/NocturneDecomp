; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_spireagl_cpp_FUN_005992f0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_CPryeMorph_005d98f8
;   TerminatedCString s_bwp3_prye_morph_dfm_005d9903
;   TerminatedCString s_prye_morph_005d9917
;   undefined4 s_rye_morph_005d9917+1
;   undefined4 s_ye_morph_005d9917+2
;   undefined4 s_e_morph_005d9917+3
;   TerminatedCString s_stand_005d9922
;
; Called Functions:
;   core_actor.cpp_createActorByName_FUN_0040c4f0
;   core_charactr.cpp_FUN_0042b0e0
;   core_cloth.cpp_CClothList_load_FUN_0043f920
;   core_cloth.cpp_CClothList_process_FUN_0043fc00
;   core_cloth.cpp_CClothList_setup_FUN_0043fbc0
;   core_morph.cpp_CMorph_addPartFromKeyframedModel_FUN_004fab10
;   core_morph.cpp_CMorph_getReady_FUN_004fac10
;   core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0
;   core_motion.cpp_CMotionController_jumpToMotion_FUN_004fc420
;   core_motion.cpp_FUN_004fb9c0
;   core_motion.cpp_FUN_004fc310
;   core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090
;   core_skeleton.cpp_FUN_0054c110
;   core_skeleton.cpp_FUN_0054dd10
;   core_skeleton.cpp_FUN_0054e6b0
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005992f0
        ;   Label: core_spireagl.cpp_FUN_005992f0
    PUSH ESI                            ; 005992f1
    PUSH EBP                            ; 005992f2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005992f3
    PUSH EDI                            ; 005992f7
    PUSH EBX                            ; 005992f8
    CALL core_charactr.cpp_FUN_0042b0e0 ; 005992f9
        ;   XREF to: 0042b0e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042b0e0()
    ADD ESP,0x4                         ; 005992fe
    PUSH 0x5d98f8                       ; 00599301 | = "CPryeMorph"
    CALL core_actor.cpp_createActorByName_FUN_0040c4f0 ; 00599306
        ;   XREF to: 0040c4f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_createActorByName_FUN_0040c4f0()
    ADD ESP,0x4                         ; 0059930b
    PUSH 0x5d9903                       ; 0059930e | = "bwp3_prye_morph.dfm"
    MOV dword ptr [EBX + 0x20870],EAX   ; 00599313
    ADD EAX,0x158                       ; 00599319
    PUSH EAX                            ; 0059931e
    CALL core_skeleton.cpp_FUN_0054eae0 ; 0059931f
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054eae0()
    MOV EAX,dword ptr [EBX + 0x20870]   ; 00599324
    ADD ESP,0x8                         ; 0059932a
    ADD EAX,0x158                       ; 0059932d
    PUSH EAX                            ; 00599332
    CALL core_skeleton.cpp_FUN_0054e6b0 ; 00599333
        ;   XREF to: 0054e6b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0054e6b0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00599338
    LEA EBP,[EBX + 0x206a8]             ; 0059933b
    PUSH EBP                            ; 00599341
    CALL core_cloth.cpp_CClothList_load_FUN_0043f920 ; 00599342
        ;   XREF to: 0043f920 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_load_FUN_0043f920(CClothList * this_ptr)
    MOV EAX,dword ptr [EBX + 0x20870]   ; 00599347
    ADD ESP,0x4                         ; 0059934d
    ADD EAX,0x158                       ; 00599350
    PUSH EAX                            ; 00599355
    LEA ESI,[EBX + 0x30]                ; 00599356
    PUSH ESI                            ; 00599359
    LEA EDI,[EBX + 0x20]                ; 0059935a
    PUSH EDI                            ; 0059935d
    PUSH EBP                            ; 0059935e
    CALL core_cloth.cpp_CClothList_setup_FUN_0043fbc0 ; 0059935f
        ;   XREF to: 0043fbc0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_setup_FUN_0043fbc0(CClothList * this_ptr, CVector3f * position, CVector3f * euler, CDeformableModelInstance * model_ptr)
    MOV EAX,dword ptr [EBX + 0x20870]   ; 00599364
    ADD ESP,0x10                        ; 0059936a
    ADD EAX,0x158                       ; 0059936d
    PUSH EAX                            ; 00599372
    PUSH dword ptr [EBX + 0x2504]       ; 00599373
    PUSH 0x3d4ccccd                     ; 00599379
    PUSH ESI                            ; 0059937e
    PUSH EDI                            ; 0059937f
    LEA EAX,[EBX + 0x2f08]              ; 00599380
    PUSH EAX                            ; 00599386
    CALL core_cloth.cpp_CClothList_process_FUN_0043fc00 ; 00599387
        ;   XREF to: 0043fc00 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_process_FUN_0043fc00(CClothList * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    MOV EDX,dword ptr [EBX + 0x27a8]    ; 0059938c
    ADD ESP,0x18                        ; 00599392
    TEST EDX,EDX                        ; 00599395
    JZ 0x005993a3                       ; 00599397
        ;   XREF to: 005993a3 (CONDITIONAL_JUMP)  ; LAB_005993a3
    MOV dword ptr [EBX + 0xfc],0x1      ; 00599399
    MOV ESI,0x5d9917                    ; 005993a3 | = "prye_morph"
        ;   Label: LAB_005993a3
    MOV EDI,dword ptr [EBX + 0x20870]   ; 005993a8
    PUSH EDI                            ; 005993ae
    MOV AL,byte ptr [ESI]               ; 005993af | = "prye_morph" | s_ye_morph_005d9917+2
        ;   Label: LAB_005993af
    MOV byte ptr [EDI],AL               ; 005993b1
    CMP AL,0x0                          ; 005993b3
    JZ 0x005993c7                       ; 005993b5
        ;   XREF to: 005993c7 (CONDITIONAL_JUMP)  ; LAB_005993c7
    MOV AL,byte ptr [ESI + 0x1]         ; 005993b7 | s_rye_morph_005d9917+1 | s_e_morph_005d9917+3
    ADD ESI,0x2                         ; 005993ba
    MOV byte ptr [EDI + 0x1],AL         ; 005993bd
    ADD EDI,0x2                         ; 005993c0
    CMP AL,0x0                          ; 005993c3
    JNZ 0x005993af                      ; 005993c5
        ;   XREF to: 005993af (CONDITIONAL_JUMP)  ; LAB_005993af
    POP EDI                             ; 005993c7
        ;   Label: LAB_005993c7
    LEA ESI,[EBX + 0x20]                ; 005993c8
    MOV EAX,dword ptr [EBX + 0x20870]   ; 005993cb
    MOV EDX,dword ptr [ESI]             ; 005993d1
    MOV dword ptr [EAX + 0x20],EDX      ; 005993d3
    MOV EDX,dword ptr [ESI + 0x4]       ; 005993d6
    MOV dword ptr [EAX + 0x24],EDX      ; 005993d9
    MOV EDX,dword ptr [ESI + 0x8]       ; 005993dc
    MOV dword ptr [EAX + 0x28],EDX      ; 005993df
    MOV ESI,dword ptr [ESI + 0xc]       ; 005993e2
    MOV dword ptr [EAX + 0x2c],ESI      ; 005993e5
    MOV EAX,dword ptr [EBX + 0x20870]   ; 005993e8
    LEA ESI,[EBX + 0x30]                ; 005993ee
    ADD EAX,0x30                        ; 005993f1
    CMP EAX,ESI                         ; 005993f4
    JZ 0x00599408                       ; 005993f6
        ;   XREF to: 00599408 (CONDITIONAL_JUMP)  ; LAB_00599408
    MOV EDX,dword ptr [ESI]             ; 005993f8
    MOV dword ptr [EAX],EDX             ; 005993fa
    MOV EDX,dword ptr [ESI + 0x4]       ; 005993fc
    MOV dword ptr [EAX + 0x4],EDX       ; 005993ff
    MOV EDX,dword ptr [ESI + 0x8]       ; 00599402
    MOV dword ptr [EAX + 0x8],EDX       ; 00599405
    MOV EAX,dword ptr [EBX + 0x20870]   ; 00599408
        ;   Label: LAB_00599408
    MOV dword ptr [EAX + 0x27b8],0x3f800000 ; 0059940e
    MOV EAX,dword ptr [EBX + 0x20870]   ; 00599418
    PUSH EAX                            ; 0059941e
    MOV ESI,dword ptr [EAX + 0x154]     ; 0059941f
    CALL dword ptr [ESI]                ; 00599425
    ADD ESP,0x4                         ; 00599427
    PUSH 0x1                            ; 0059942a
    MOV EAX,dword ptr [EBX + 0x20870]   ; 0059942c
    PUSH 0x5d9922                       ; 00599432 | = "stand"
    ADD EAX,0x158                       ; 00599437
    PUSH EAX                            ; 0059943c
    CALL core_motion.cpp_FUN_004fc310   ; 0059943d
        ;   XREF to: 004fc310 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_FUN_004fc310(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00599442
    PUSH EAX                            ; 00599445
    CALL core_motion.cpp_FUN_004fb9c0   ; 00599446
        ;   XREF to: 004fb9c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_FUN_004fb9c0(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 0059944b
    PUSH 0x0                            ; 0059944e
    PUSH EAX                            ; 00599450
    MOV EAX,dword ptr [EBX + 0x20870]   ; 00599451
    ADD EAX,0x158                       ; 00599457
    PUSH EAX                            ; 0059945c
    CALL core_motion.cpp_CMotionController_jumpToMotion_FUN_004fc420 ; 0059945d
        ;   XREF to: 004fc420 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotion_FUN_004fc420(CMotionController * this_ptr, int target_motion_index, float target_frame_number)
    MOV EAX,dword ptr [EBX + 0x20870]   ; 00599462
    ADD ESP,0xc                         ; 00599468
    ADD EAX,0x158                       ; 0059946b
    PUSH EAX                            ; 00599470
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090 ; 00599471
        ;   XREF to: 0054c090 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090(CDeformableModelInstance * this_ptr)
    MOV EAX,dword ptr [EBX + 0x20870]   ; 00599476
    ADD ESP,0x4                         ; 0059947c
    ADD EAX,0x158                       ; 0059947f
    PUSH EAX                            ; 00599484
    CALL core_skeleton.cpp_FUN_0054dd10 ; 00599485
        ;   XREF to: 0054dd10 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0054dd10(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059948a
    LEA ESI,[EBX + 0x158]               ; 0059948d
    PUSH ESI                            ; 00599493
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090 ; 00599494
        ;   XREF to: 0054c090 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00599499
    PUSH ESI                            ; 0059949c
    CALL core_skeleton.cpp_FUN_0054dd10 ; 0059949d
        ;   XREF to: 0054dd10 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0054dd10(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005994a2
    PUSH ESI                            ; 005994a5
    CALL core_skeleton.cpp_FUN_0054e6b0 ; 005994a6
        ;   XREF to: 0054e6b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0054e6b0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005994ab
    PUSH 0x0                            ; 005994ae
    MOV ECX,dword ptr [EBX + 0x2083c]   ; 005994b0
    PUSH ECX                            ; 005994b6
    PUSH 0x1                            ; 005994b7
    LEA EDI,[EBX + 0x20874]             ; 005994b9
    PUSH EDI                            ; 005994bf
    CALL core_morph.cpp_CMorph_addPartFromKeyframedModel_FUN_004fab10 ; 005994c0
        ;   XREF to: 004fab10 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_addPartFromKeyframedModel_FUN_004fab10(CMorph * this_ptr, int model_index, CKeyFramedModel * model_ptr, int frame_index)
    ADD ESP,0x10                        ; 005994c5
    PUSH ESI                            ; 005994c8
    PUSH 0x0                            ; 005994c9
    PUSH EDI                            ; 005994cb
    CALL core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0 ; 005994cc
        ;   XREF to: 004fa9c0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr)
    MOV EAX,dword ptr [EBX + 0x20870]   ; 005994d1
    ADD ESP,0xc                         ; 005994d7
    ADD EAX,0x158                       ; 005994da
    PUSH EAX                            ; 005994df
    PUSH 0x1                            ; 005994e0
    PUSH EDI                            ; 005994e2
    CALL core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0 ; 005994e3
        ;   XREF to: 004fa9c0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr)
    ADD ESP,0xc                         ; 005994e8
    PUSH EDI                            ; 005994eb
    CALL core_morph.cpp_CMorph_getReady_FUN_004fac10 ; 005994ec
        ;   XREF to: 004fac10 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_getReady_FUN_004fac10(CMorph * this_ptr)
    ADD ESP,0x4                         ; 005994f1
    POP EDI                             ; 005994f4
    PUSH ESI                            ; 005994f5
    MOV dword ptr [EBX + 0x214a0],0x0   ; 005994f6
    CALL core_skeleton.cpp_FUN_0054c110 ; 00599500
        ;   XREF to: 0054c110 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0054c110(CDeformableModelInstance * this_ptr)
    MOV EAX,dword ptr [EBX + 0x20870]   ; 00599505
    ADD ESP,0x4                         ; 0059950b
    ADD EAX,0x158                       ; 0059950e
    PUSH EAX                            ; 00599513
    CALL core_skeleton.cpp_FUN_0054c110 ; 00599514
        ;   XREF to: 0054c110 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0054c110(CDeformableModelInstance * this_ptr)
    MOV dword ptr [EBX + 0xfc],0x1      ; 00599519
    ADD ESP,0x4                         ; 00599523
    MOV dword ptr [EBX + 0xf8],0x0      ; 00599526
    POP EBP                             ; 00599530
    POP ESI                             ; 00599531
    POP EBX                             ; 00599532
    RET                                 ; 00599533

