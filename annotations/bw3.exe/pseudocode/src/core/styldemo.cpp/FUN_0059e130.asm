; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_styldemo_cpp_FUN_0059e130(CEnemy *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_R_Hand_005d9f80
;   TerminatedCString s_Bip01_L_Hand_005d9f8d
;   TerminatedCString s_Bip01_Head_005d9f9a
;   TerminatedCString s_Bip01_Spine_005d9fa5
;   TerminatedCString s_Bip01_Spine2_005d9fb1
;   TerminatedCString s_CStyler_005d9fbe
;   TerminatedCString s_bwp_stylersub_dfm_005d9fc6
;   TerminatedCString s_Elizabeth_Demon_005d9fd8
;   undefined4 s_Elizabeth_Demon_005d9fd8+1
;   undefined4 s_Elizabeth_Demon_005d9fd8+2
;   undefined4 s_Elizabeth_Demon_005d9fd8+3
;   TerminatedCString s_getUpDustOff_005d9fe8
;   TerminatedCString s_CZombie_005d9ff5
;   TerminatedCString s_stydem_stand_wav_005d9ffd
;   TerminatedCString s_stydem_walk_wav_005da00e
;   ... and 29 more
;
; Called Functions:
;   core_actor.cpp_createActorByName_FUN_0040c4f0
;   core_charactr.cpp_FUN_0042f280
;   core_enemy.cpp_CEnemy_setup_FUN_00489110
;   core_morph.cpp_CMorph_getReady_FUN_004fac10
;   core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
;   core_motion.cpp_CMotionController_jumpToMotion_FUN_004fc420
;   core_motion.cpp_FUN_004fb9c0
;   core_motion.cpp_FUN_004fc310
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
;   core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090
;   core_skeleton.cpp_FUN_00548090
;   core_skeleton.cpp_FUN_0054c110
;   core_skeleton.cpp_FUN_0054dd10
;   core_skeleton.cpp_FUN_0054e6b0
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059e130
        ;   Label: core_styldemo.cpp_FUN_0059e130
    PUSH ESI                            ; 0059e131
    PUSH EDI                            ; 0059e132
    MOV EBX,dword ptr [ESP + 0x10]      ; 0059e133
    CMP dword ptr [EBX + 0x3268],0x0    ; 0059e137
    JNZ 0x0059e15e                      ; 0059e13e
        ;   XREF to: 0059e15e (CONDITIONAL_JUMP)  ; LAB_0059e15e
    MOV dword ptr [EBX + 0xce5c],0x41a00000 ; 0059e140
    MOV dword ptr [EBX + 0xce60],0x41a00000 ; 0059e14a
    MOV dword ptr [EBX + 0x2538],0x437a0000 ; 0059e154
    LEA EDI,[EBX + 0x158]               ; 0059e15e
        ;   Label: LAB_0059e15e
    PUSH EDI                            ; 0059e164
    CALL core_skeleton.cpp_FUN_0054e6b0 ; 0059e165
        ;   XREF to: 0054e6b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0054e6b0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059e16a
    PUSH 0x2                            ; 0059e16d
    CALL core_charactr.cpp_FUN_0042f280 ; 0059e16f
        ;   XREF to: 0042f280 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042f280()
    ADD ESP,0x4                         ; 0059e174
    PUSH 0x4                            ; 0059e177
    CALL core_charactr.cpp_FUN_0042f280 ; 0059e179
        ;   XREF to: 0042f280 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042f280()
    ADD ESP,0x4                         ; 0059e17e
    PUSH 0x3                            ; 0059e181
    CALL core_charactr.cpp_FUN_0042f280 ; 0059e183
        ;   XREF to: 0042f280 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042f280()
    ADD ESP,0x4                         ; 0059e188
    PUSH EDI                            ; 0059e18b
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 0059e18c
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059e191
    PUSH 0x1                            ; 0059e194
    PUSH 0x5d9f80                       ; 0059e196 | = "Bip01 R Hand"
    PUSH EAX                            ; 0059e19b
    MOV ESI,EAX                         ; 0059e19c
    CALL core_skeleton.cpp_FUN_00548090 ; 0059e19e
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0059e1a3
    PUSH 0x1                            ; 0059e1a6
    PUSH 0x5d9f8d                       ; 0059e1a8 | = "Bip01 L Hand"
    PUSH ESI                            ; 0059e1ad
    MOV [0x02d24cf4],EAX                ; 0059e1ae | DAT_02d24cf4
    CALL core_skeleton.cpp_FUN_00548090 ; 0059e1b3
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0059e1b8
    PUSH 0x1                            ; 0059e1bb
    PUSH 0x5d9f9a                       ; 0059e1bd | = "Bip01 Head"
    PUSH ESI                            ; 0059e1c2
    MOV [0x02d24cf8],EAX                ; 0059e1c3 | DAT_02d24cf8
    CALL core_skeleton.cpp_FUN_00548090 ; 0059e1c8
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0059e1cd
    PUSH 0x1                            ; 0059e1d0
    PUSH 0x5d9fa5                       ; 0059e1d2 | = "Bip01 Spine"
    PUSH ESI                            ; 0059e1d7
    MOV [0x02d24d04],EAX                ; 0059e1d8 | DAT_02d24d04
    CALL core_skeleton.cpp_FUN_00548090 ; 0059e1dd
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0059e1e2
    PUSH 0x1                            ; 0059e1e5
    PUSH 0x5d9fb1                       ; 0059e1e7 | = "Bip01 Spine2"
    PUSH ESI                            ; 0059e1ec
    MOV [0x02d24cfc],EAX                ; 0059e1ed | DAT_02d24cfc
    CALL core_skeleton.cpp_FUN_00548090 ; 0059e1f2
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    MOV [0x02d24d00],EAX                ; 0059e1f7 | DAT_02d24d00
    MOV EAX,[0x02d24cf8]                ; 0059e1fc | DAT_02d24cf8
    ADD ESP,0xc                         ; 0059e201
    MOV dword ptr [EBX + 0x25a8],EAX    ; 0059e204
    MOV EAX,[0x02d24cf4]                ; 0059e20a | DAT_02d24cf4
    PUSH EDI                            ; 0059e20f
    MOV dword ptr [EBX + 0x2620],EAX    ; 0059e210
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 0059e216
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0059e21b
    ADD ESP,0x4                         ; 0059e21e
    CMP EAX,0x6                         ; 0059e221
    JNZ 0x0059e565                      ; 0059e224
        ;   XREF to: 0059e565 (CONDITIONAL_JUMP)  ; LAB_0059e565
    MOV dword ptr [EBX + 0x2540],0x0    ; 0059e22a
        ;   Label: LAB_0059e22a
    CMP dword ptr [EBX + 0xd05c],0x0    ; 0059e234
        ;   Label: LAB_0059e234
    JNZ 0x0059e382                      ; 0059e23b
        ;   XREF to: 0059e382 (CONDITIONAL_JUMP)  ; LAB_0059e382
    PUSH 0x5d9fbe                       ; 0059e241 | = "CStyler"
    CALL core_actor.cpp_createActorByName_FUN_0040c4f0 ; 0059e246
        ;   XREF to: 0040c4f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_createActorByName_FUN_0040c4f0()
    ADD ESP,0x4                         ; 0059e24b
    PUSH 0x5d9fc6                       ; 0059e24e | = "bwp_stylersub.dfm"
    MOV dword ptr [EBX + 0xd060],EAX    ; 0059e253
    ADD EAX,0x158                       ; 0059e259
    PUSH EAX                            ; 0059e25e
    CALL core_skeleton.cpp_FUN_0054eae0 ; 0059e25f
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054eae0()
    ADD ESP,0x8                         ; 0059e264
    MOV ESI,0x5d9fd8                    ; 0059e267 | = "Elizabeth-Demon"
    MOV EDI,dword ptr [EBX + 0xd060]    ; 0059e26c
    PUSH EDI                            ; 0059e272
    MOV AL,byte ptr [ESI]               ; 0059e273 | = "Elizabeth-Demon" | s_Elizabeth_Demon_005d9fd8+2
        ;   Label: LAB_0059e273
    MOV byte ptr [EDI],AL               ; 0059e275
    CMP AL,0x0                          ; 0059e277
    JZ 0x0059e28b                       ; 0059e279
        ;   XREF to: 0059e28b (CONDITIONAL_JUMP)  ; LAB_0059e28b
    MOV AL,byte ptr [ESI + 0x1]         ; 0059e27b | s_Elizabeth_Demon_005d9fd8+1 | s_Elizabeth_Demon_005d9fd8+3
    ADD ESI,0x2                         ; 0059e27e
    MOV byte ptr [EDI + 0x1],AL         ; 0059e281
    ADD EDI,0x2                         ; 0059e284
    CMP AL,0x0                          ; 0059e287
    JNZ 0x0059e273                      ; 0059e289
        ;   XREF to: 0059e273 (CONDITIONAL_JUMP)  ; LAB_0059e273
    POP EDI                             ; 0059e28b
        ;   Label: LAB_0059e28b
    LEA ESI,[EBX + 0x20]                ; 0059e28c
    MOV EAX,dword ptr [EBX + 0xd060]    ; 0059e28f
    MOV EDX,dword ptr [ESI]             ; 0059e295
    MOV dword ptr [EAX + 0x20],EDX      ; 0059e297
    MOV EDX,dword ptr [ESI + 0x4]       ; 0059e29a
    MOV dword ptr [EAX + 0x24],EDX      ; 0059e29d
    MOV EDX,dword ptr [ESI + 0x8]       ; 0059e2a0
    MOV dword ptr [EAX + 0x28],EDX      ; 0059e2a3
    MOV ESI,dword ptr [ESI + 0xc]       ; 0059e2a6
    MOV dword ptr [EAX + 0x2c],ESI      ; 0059e2a9
    MOV ESI,dword ptr [EBX + 0xd060]    ; 0059e2ac
    LEA EAX,[EBX + 0x30]                ; 0059e2b2
    ADD ESI,0x30                        ; 0059e2b5
    CMP ESI,EAX                         ; 0059e2b8
    JZ 0x0059e2cc                       ; 0059e2ba
        ;   XREF to: 0059e2cc (CONDITIONAL_JUMP)  ; LAB_0059e2cc
    MOV EDX,dword ptr [EAX]             ; 0059e2bc
    MOV dword ptr [ESI],EDX             ; 0059e2be
    MOV EDX,dword ptr [EAX + 0x4]       ; 0059e2c0
    MOV dword ptr [ESI + 0x4],EDX       ; 0059e2c3
    MOV EDX,dword ptr [EAX + 0x8]       ; 0059e2c6
    MOV dword ptr [ESI + 0x8],EDX       ; 0059e2c9
    MOV EAX,dword ptr [EBX + 0xd060]    ; 0059e2cc
        ;   Label: LAB_0059e2cc
    MOV dword ptr [EAX + 0x27b8],0x3f800000 ; 0059e2d2
    MOV EAX,dword ptr [EBX + 0xd060]    ; 0059e2dc
    MOV dword ptr [EAX + 0x47b90],0x1   ; 0059e2e2
    MOV EAX,dword ptr [EBX + 0xd060]    ; 0059e2ec
    PUSH EAX                            ; 0059e2f2
    MOV ESI,dword ptr [EAX + 0x154]     ; 0059e2f3
    CALL dword ptr [ESI]                ; 0059e2f9
    ADD ESP,0x4                         ; 0059e2fb
    PUSH 0x1                            ; 0059e2fe
    MOV EAX,dword ptr [EBX + 0xd060]    ; 0059e300
    PUSH 0x5d9fe8                       ; 0059e306 | = "getUpDustOff"
    ADD EAX,0x158                       ; 0059e30b
    PUSH EAX                            ; 0059e310
    CALL core_motion.cpp_FUN_004fc310   ; 0059e311
        ;   XREF to: 004fc310 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_FUN_004fc310(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0059e316
    PUSH EAX                            ; 0059e319
    CALL core_motion.cpp_FUN_004fb9c0   ; 0059e31a
        ;   XREF to: 004fb9c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_FUN_004fb9c0(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 0059e31f
    PUSH 0x0                            ; 0059e322
    PUSH EAX                            ; 0059e324
    MOV EAX,dword ptr [EBX + 0xd060]    ; 0059e325
    ADD EAX,0x158                       ; 0059e32b
    PUSH EAX                            ; 0059e330
    CALL core_motion.cpp_CMotionController_jumpToMotion_FUN_004fc420 ; 0059e331
        ;   XREF to: 004fc420 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotion_FUN_004fc420(CMotionController * this_ptr, int target_motion_index, float target_frame_number)
    MOV EAX,dword ptr [EBX + 0xd060]    ; 0059e336
    ADD ESP,0xc                         ; 0059e33c
    ADD EAX,0x158                       ; 0059e33f
    PUSH EAX                            ; 0059e344
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090 ; 0059e345
        ;   XREF to: 0054c090 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090(CDeformableModelInstance * this_ptr)
    MOV EAX,dword ptr [EBX + 0xd060]    ; 0059e34a
    ADD ESP,0x4                         ; 0059e350
    ADD EAX,0x158                       ; 0059e353
    PUSH EAX                            ; 0059e358
    CALL core_skeleton.cpp_FUN_0054dd10 ; 0059e359
        ;   XREF to: 0054dd10 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0054dd10(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059e35e
    LEA ESI,[EBX + 0x158]               ; 0059e361
    PUSH ESI                            ; 0059e367
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090 ; 0059e368
        ;   XREF to: 0054c090 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059e36d
    PUSH ESI                            ; 0059e370
    CALL core_skeleton.cpp_FUN_0054dd10 ; 0059e371
        ;   XREF to: 0054dd10 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0054dd10(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059e376
    PUSH ESI                            ; 0059e379
    CALL core_skeleton.cpp_FUN_0054e6b0 ; 0059e37a
        ;   XREF to: 0054e6b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0054e6b0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059e37f
    LEA EDI,[EBX + 0x158]               ; 0059e382
        ;   Label: LAB_0059e382
    PUSH EDI                            ; 0059e388
    PUSH 0x0                            ; 0059e389
    LEA ESI,[EBX + 0xd064]              ; 0059e38b
    PUSH ESI                            ; 0059e391
    CALL core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0 ; 0059e392
        ;   XREF to: 004fa9c0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr)
    MOV EAX,dword ptr [EBX + 0xd060]    ; 0059e397
    ADD ESP,0xc                         ; 0059e39d
    ADD EAX,0x158                       ; 0059e3a0
    PUSH EAX                            ; 0059e3a5
    PUSH 0x1                            ; 0059e3a6
    PUSH ESI                            ; 0059e3a8
    CALL core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0 ; 0059e3a9
        ;   XREF to: 004fa9c0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr)
    ADD ESP,0xc                         ; 0059e3ae
    PUSH ESI                            ; 0059e3b1
    CALL core_morph.cpp_CMorph_getReady_FUN_004fac10 ; 0059e3b2
        ;   XREF to: 004fac10 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_getReady_FUN_004fac10(CMorph * this_ptr)
    ADD ESP,0x4                         ; 0059e3b7
    PUSH EDI                            ; 0059e3ba
    MOV dword ptr [EBX + 0xdc98],0x0    ; 0059e3bb
    CALL core_skeleton.cpp_FUN_0054c110 ; 0059e3c5
        ;   XREF to: 0054c110 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0054c110(CDeformableModelInstance * this_ptr)
    MOV EAX,dword ptr [EBX + 0xd060]    ; 0059e3ca
    ADD ESP,0x4                         ; 0059e3d0
    ADD EAX,0x158                       ; 0059e3d3
    PUSH EAX                            ; 0059e3d8
    CALL core_skeleton.cpp_FUN_0054c110 ; 0059e3d9
        ;   XREF to: 0054c110 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0054c110(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059e3de
    PUSH EBX                            ; 0059e3e1
    CALL core_enemy.cpp_CEnemy_setup_FUN_00489110 ; 0059e3e2
        ;   XREF to: 00489110 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_00489110(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0059e3e7
    PUSH 0x5d9ff5                       ; 0059e3ea | = "CZombie"
    MOV dword ptr [EBX + 0xcdcc],0x3f800000 ; 0059e3ef
    CALL core_actor.cpp_createActorByName_FUN_0040c4f0 ; 0059e3f9
        ;   XREF to: 0040c4f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_createActorByName_FUN_0040c4f0()
    ADD ESP,0x4                         ; 0059e3fe
    ADD EAX,0x158                       ; 0059e401
    PUSH EAX                            ; 0059e406
    CALL core_skeleton.cpp_FUN_0054e6b0 ; 0059e407
        ;   XREF to: 0054e6b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0054e6b0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059e40c
    PUSH 0x5d9ffd                       ; 0059e40f | = "stydem_stand.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 0059e414
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 0059e419
    PUSH 0x5da00e                       ; 0059e41c | = "stydem_walk.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 0059e421
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 0059e426
    PUSH 0x5da01e                       ; 0059e429 | = "stydem_run.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 0059e42e
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 0059e433
    PUSH 0x5da02d                       ; 0059e436 | = "stydem_attack.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 0059e43b
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 0059e440
    PUSH 0x5da03f                       ; 0059e443 | = "stydem_damage.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 0059e448
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 0059e44d
    PUSH 0x5da051                       ; 0059e450 | = "stydem_die.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 0059e455
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 0059e45a
    PUSH 0x5da060                       ; 0059e45d | = "stydem_stand_fly.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 0059e462
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 0059e467
    PUSH 0x5da075                       ; 0059e46a | = "stydem_walk_fly.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 0059e46f
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 0059e474
    PUSH 0x5da089                       ; 0059e477 | = "stydem_run_fly.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 0059e47c
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 0059e481
    PUSH 0x5da09c                       ; 0059e484 | = "stydem_attack_fly.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 0059e489
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 0059e48e
    PUSH 0x5da0b2                       ; 0059e491 | = "stydem_warning_fly_spell.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 0059e496
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 0059e49b
    PUSH 0x5da0cf                       ; 0059e49e | = "stydem_fly_spell.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 0059e4a3
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 0059e4a8
    PUSH 0x5da0e4                       ; 0059e4ab | = "stydem_damage_fly.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 0059e4b0
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 0059e4b5
    PUSH 0x5da0fa                       ; 0059e4b8 | = "stydem_die_fly.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 0059e4bd
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 0059e4c2
    PUSH 0x5da10d                       ; 0059e4c5 | = "stydem_takeoff.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 0059e4ca
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 0059e4cf
    PUSH 0x5da120                       ; 0059e4d2 | = "stydem_land.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 0059e4d7
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 0059e4dc
    PUSH 0x5da130                       ; 0059e4df | = "stydem_warning_spell_1.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 0059e4e4
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 0059e4e9
    PUSH 0x5da14b                       ; 0059e4ec | = "stydem_spell_1.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 0059e4f1
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 0059e4f6
    PUSH 0x5da15e                       ; 0059e4f9 | = "stydem_warning_spell_2.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 0059e4fe
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 0059e503
    PUSH 0x5da179                       ; 0059e506 | = "stydem_spell_2.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 0059e50b
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 0059e510
    PUSH 0x5da18c                       ; 0059e513 | = "stydem_warning_spell_3.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 0059e518
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 0059e51d
    PUSH 0x5da1a7                       ; 0059e520 | = "stydem_spell_3.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 0059e525
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 0059e52a
    PUSH 0x5da1ba                       ; 0059e52d | = "stydem_raise_zombie.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 0059e532
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 0059e537
    PUSH 0x5da1d2                       ; 0059e53a | = "stydem_transforming.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 0059e53f
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 0059e544
    PUSH 0x5da1ea                       ; 0059e547 | = "stydem_taunt1.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 0059e54c
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 0059e551
    PUSH 0x5da1fc                       ; 0059e554 | = "stydem_taunt2.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 0059e559
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 0059e55e
    POP EDI                             ; 0059e561
    POP ESI                             ; 0059e562
    POP EBX                             ; 0059e563
    RET                                 ; 0059e564
    PUSH EDI                            ; 0059e565
        ;   Label: LAB_0059e565
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 0059e566
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0059e56b
    ADD ESP,0x4                         ; 0059e56e
    CMP EAX,0xf                         ; 0059e571
    JZ 0x0059e22a                       ; 0059e574
        ;   XREF to: 0059e22a (CONDITIONAL_JUMP)  ; LAB_0059e22a
    MOV dword ptr [EBX + 0x2540],0x2    ; 0059e57a
    JMP 0x0059e234                      ; 0059e584
        ;   XREF to: 0059e234 (UNCONDITIONAL_JUMP)  ; LAB_0059e234

