; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_set_cpp_FUN_0050a260(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined        Stack[-0x50]:1  local_50
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0049cc10 at 0049cf55
;
; Referenced Globals:
;   undefined4 s_Bip01_Head_00590571+1
;   undefined4 DAT_00590582
;   undefined4 DAT_005a18f0
;   undefined4 DAT_005ae704
;   undefined4 DAT_005b761c
;   undefined4 DAT_005b7620
;   undefined4 DAT_005b80f0
;   undefined4 DAT_005b9354
;   undefined4 DAT_005b96c4
;   undefined4 DAT_005be368
;   undefined4 DAT_005be378
;   undefined4 DAT_005c15b8
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01c02594
;   undefined4 DAT_01c74640
;   ... and 17 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
;   core_dlight.cpp_CDemonLight_beginScene_FUN_0044e470
;   core_dlight.cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0044efb0
;   core_dlight.cpp_CDemonLight_drawShadowDepthBuffer_FUN_00452110
;   core_dlight.cpp_CDemonLight_endScene_FUN_0044e720
;   core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_00452080
;   core_fire.cpp_CFireEffect_hasActiveMuzzleFlash_FUN_0048c8a0
;   core_fire.cpp_CFireEffect_render_FUN_0048a650
;   core_gore.cpp_CGore_renderParticles_FUN_004afe00
;   core_set.cpp_CDemonSet_buildDisplayList_FUN_0050d2d0
;   core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0050b5c0
;   core_set.cpp_CDemonSet_renderBackgroundActors_FUN_00508750
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00507c80
;   core_set.cpp_CDemonSet_setLightingParameters_FUN_0050adc0
;   ... and 10 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050a260
        ;   Label: core_set.cpp_FUN_0050a260
    PUSH ESI                            ; 0050a261
    PUSH EDI                            ; 0050a262
    PUSH EBP                            ; 0050a263
    MOV EBP,ESP                         ; 0050a264
    SUB ESP,0x4c                        ; 0050a266
    MOV EDI,dword ptr [EBP + 0x14]      ; 0050a269
    MOV EBX,dword ptr [0x01cae0e8]      ; 0050a26c | DAT_01cae0e8
    MOV EBX,dword ptr [EBX*0x4 + 0x1cae0d8] ; 0050a272
    LEA ESI,[EBX + 0x150]               ; 0050a279
    MOV EDX,0x1c74640                   ; 0050a27f
    PUSH ESI                            ; 0050a284
    MOV dword ptr [EBP + -0x4],EDX      ; 0050a285 | DAT_01c74640
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 0050a288
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0()
    ADD ESP,0x4                         ; 0050a28d
    PUSH 0x0                            ; 0050a290
    PUSH 0x590572                       ; 0050a292 | s_Bip01_Head_00590571+1
    PUSH EAX                            ; 0050a297
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0050a298
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    MOV EDX,EAX                         ; 0050a29d
    SHL EAX,0x2                         ; 0050a29f
    SUB EAX,EDX                         ; 0050a2a2
    ADD ESI,0xe80                       ; 0050a2a4
    SHL EAX,0x4                         ; 0050a2aa
    ADD ESP,0xc                         ; 0050a2ad
    ADD ESI,EAX                         ; 0050a2b0
    MOV EAX,0x3ead0e56                  ; 0050a2b2
    PUSH ESI                            ; 0050a2b7
    MOV dword ptr [EBP + -0x30],EAX     ; 0050a2b8
    LEA EAX,[EBP + -0x34]               ; 0050a2bb
    XOR ECX,ECX                         ; 0050a2be
    PUSH EAX                            ; 0050a2c0
    LEA EAX,[EBP + -0x40]               ; 0050a2c1
    MOV EDX,0x3f400000                  ; 0050a2c4
    PUSH EAX                            ; 0050a2c9
    MOV dword ptr [EBP + -0x34],ECX     ; 0050a2ca
    MOV dword ptr [EBP + -0x2c],EDX     ; 0050a2cd
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 0050a2d0
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_transformVector3x4_FUN_0055a8b0()
    ADD ESP,0xc                         ; 0050a2d5
    PUSH EAX                            ; 0050a2d8
    LEA EAX,[EBP + -0x1c]               ; 0050a2d9
    PUSH EAX                            ; 0050a2dc
    PUSH EBX                            ; 0050a2dd
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0050a2de
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 0050a2e3
    LEA EAX,[EBP + -0x28]               ; 0050a2e6
    PUSH EAX                            ; 0050a2e9
    PUSH ESI                            ; 0050a2ea
    CALL core_xform.cpp_matrixToEulerAngles_FUN_0055b180 ; 0050a2eb
        ;   XREF to: 0055b180 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_matrixToEulerAngles_FUN_0055b180()
    FLD float ptr [EBP + -0x28]         ; 0050a2f0
    FLD float ptr [EBP + -0x24]         ; 0050a2f3
    MOV EDX,0x1c74640                   ; 0050a2f6
    LEA EAX,[EBP + -0x1c]               ; 0050a2fb
    XOR ECX,ECX                         ; 0050a2fe
    ADD ESP,0x8                         ; 0050a300
    MOV dword ptr [EBP + -0xc],ECX      ; 0050a303
    MOV dword ptr [EBP + -0x8],ECX      ; 0050a306
    FXCH                                ; 0050a309
    FADD double ptr [0x00590582]        ; 0050a30b | DAT_00590582
    MOV dword ptr [0x01c762fc],ECX      ; 0050a311 | DAT_01c762fc
    FSTP float ptr [EBP + -0x10]        ; 0050a317
    FADD float ptr [EBX + 0x34]         ; 0050a31a
    ADD EDX,0x104                       ; 0050a31d
    FSTP float ptr [EBP + -0xc]         ; 0050a323
    CMP EDX,EAX                         ; 0050a326
    JZ 0x0050a33b                       ; 0050a328
        ;   XREF to: 0050a33b (CONDITIONAL_JUMP)  ; LAB_0050a33b
    MOV EAX,dword ptr [EBP + -0x1c]     ; 0050a32a
    MOV dword ptr [EDX],EAX             ; 0050a32d | DAT_01c74744
    MOV EAX,dword ptr [EBP + -0x18]     ; 0050a32f
    MOV dword ptr [EDX + 0x4],EAX       ; 0050a332 | DAT_01c74748
    MOV EAX,dword ptr [EBP + -0x14]     ; 0050a335
    MOV dword ptr [EDX + 0x8],EAX       ; 0050a338 | DAT_01c7474c
    LEA EAX,[EBP + -0x10]               ; 0050a33b
        ;   Label: LAB_0050a33b
    PUSH EAX                            ; 0050a33e
    MOV EAX,dword ptr [EBP + -0x4]      ; 0050a33f
    ADD EAX,0x110                       ; 0050a342
    PUSH EAX                            ; 0050a347 | DAT_01c74750
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0 ; 0050a348
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0()
    ADD ESP,0x8                         ; 0050a34d
    MOV EAX,dword ptr [EBP + -0x4]      ; 0050a350
    PUSH 0x3f800000                     ; 0050a353
    MOV dword ptr [EAX + 0x100],0x42000000 ; 0050a358 | DAT_01c74740
    PUSH EAX                            ; 0050a362 | DAT_01c74640
    MOV dword ptr [EAX + 0x138],0x42000000 ; 0050a363 | DAT_01c74778
    CALL core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_00452080 ; 0050a36d
        ;   XREF to: 00452080 (UNCONDITIONAL_CALL)  ; undefined core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_00452080()
    LEA EAX,[EBP + -0x1c]               ; 0050a372
    ADD ESP,0x8                         ; 0050a375
    CMP EAX,0x1fb860c                   ; 0050a378
    JZ 0x0050a397                       ; 0050a37d
        ;   XREF to: 0050a397 (CONDITIONAL_JUMP)  ; LAB_0050a397
    MOV EAX,dword ptr [EBP + -0x1c]     ; 0050a37f
    MOV [0x01fb860c],EAX                ; 0050a382 | DAT_01fb860c
    MOV EAX,dword ptr [EBP + -0x18]     ; 0050a387
    MOV [0x01fb8610],EAX                ; 0050a38a | DAT_01fb8610
    MOV EAX,dword ptr [EBP + -0x14]     ; 0050a38f
    MOV [0x01fb8614],EAX                ; 0050a392 | DAT_01fb8614
    MOV EAX,[0x005b9354]                ; 0050a397 | DAT_005b9354
        ;   Label: LAB_0050a397
    MOV ECX,dword ptr [EAX + 0x218]     ; 0050a39c | DAT_01c77804
    TEST ECX,ECX                        ; 0050a3a2
    JNZ 0x0050a575                      ; 0050a3a4
        ;   XREF to: 0050a575 (CONDITIONAL_JUMP)  ; LAB_0050a575
    PUSH ECX                            ; 0050a3aa
    MOV EBX,dword ptr [EBP + -0x4]      ; 0050a3ab
    PUSH EBX                            ; 0050a3ae | DAT_01c74640
    CALL core_dlight.cpp_CDemonLight_beginScene_FUN_0044e470 ; 0050a3af
        ;   XREF to: 0044e470 (UNCONDITIONAL_CALL)  ; undefined core_dlight.cpp_CDemonLight_beginScene_FUN_0044e470()
    ADD ESP,0x8                         ; 0050a3b4
    PUSH EBX                            ; 0050a3b7 | DAT_01c74640
    CALL core_dlight.cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0044efb0 ; 0050a3b8
        ;   XREF to: 0044efb0 (UNCONDITIONAL_CALL)  ; undefined core_dlight.cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0044efb0()
    ADD ESP,0x4                         ; 0050a3bd
    XOR EAX,EAX                         ; 0050a3c0
    PUSH EAX                            ; 0050a3c2
    PUSH dword ptr [EBX + 0x100]        ; 0050a3c3 | DAT_01c74740
    PUSH EDI                            ; 0050a3c9
    MOV [0x005be378],EAX                ; 0050a3ca | DAT_005be378
    CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00507c80 ; 0050a3cf
        ;   XREF to: 00507c80 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00507c80()
    ADD ESP,0xc                         ; 0050a3d4
    PUSH -0x1                           ; 0050a3d7
    MOV EDX,0x1                         ; 0050a3d9
    PUSH EDI                            ; 0050a3de
    MOV dword ptr [0x005be378],EDX      ; 0050a3df | DAT_005be378
    CALL core_set.cpp_CDemonSet_buildDisplayList_FUN_0050d2d0 ; 0050a3e5
        ;   XREF to: 0050d2d0 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_buildDisplayList_FUN_0050d2d0()
    ADD ESP,0x8                         ; 0050a3ea
    PUSH 0x1                            ; 0050a3ed
    PUSH EDI                            ; 0050a3ef
    CALL core_set.cpp_CDemonSet_renderBackgroundActors_FUN_00508750 ; 0050a3f0
        ;   XREF to: 00508750 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_renderBackgroundActors_FUN_00508750()
    ADD ESP,0x8                         ; 0050a3f5
    PUSH 0x1                            ; 0050a3f8
    MOV ESI,EBX                         ; 0050a3fa
    PUSH EDI                            ; 0050a3fc
    XOR ESI,EBX                         ; 0050a3fd
    CALL core_set.cpp_CDemonSet_buildDisplayList_FUN_0050d2d0 ; 0050a3ff
        ;   XREF to: 0050d2d0 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_buildDisplayList_FUN_0050d2d0()
    MOV ECX,dword ptr [EDI + 0x15f2fc]  ; 0050a404
    ADD ESP,0x8                         ; 0050a40a
    TEST ECX,ECX                        ; 0050a40d
    JLE 0x0050a450                      ; 0050a40f
        ;   XREF to: 0050a450 (CONDITIONAL_JUMP)  ; LAB_0050a450
    MOV EBX,EDI                         ; 0050a411
    MOV EAX,dword ptr [EBX + 0x15f300]  ; 0050a413
        ;   Label: LAB_0050a413
    PUSH EAX                            ; 0050a419
    MOV EDX,dword ptr [EAX + 0x14c]     ; 0050a41a
    CALL dword ptr [EDX + 0x8]          ; 0050a420
    ADD ESP,0x4                         ; 0050a423
    PUSH 0x1                            ; 0050a426
    MOV EAX,[0x005ae704]                ; 0050a428 | DAT_005ae704
    PUSH EAX                            ; 0050a42d | DAT_01b4d738
    ADD EBX,0x4                         ; 0050a42e
    INC ESI                             ; 0050a431
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050 ; 0050a432
        ;   XREF to: 00461050 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050()
    MOV EDX,dword ptr [EDI + 0x15f2fc]  ; 0050a437
    ADD ESP,0x8                         ; 0050a43d
    CMP ESI,EDX                         ; 0050a440
    JL 0x0050a413                       ; 0050a442
        ;   XREF to: 0050a413 (CONDITIONAL_JUMP)  ; LAB_0050a413
    LEA EAX,[EAX]                       ; 0050a444
    LEA EDX,[EDX]                       ; 0050a44a
    MOV ECX,dword ptr [0x005b96c4]      ; 0050a450 | DAT_005b96c4
        ;   Label: LAB_0050a450
    PUSH ECX                            ; 0050a456
    CALL core_gore.cpp_CGore_renderParticles_FUN_004afe00 ; 0050a457
        ;   XREF to: 004afe00 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_CGore_renderParticles_FUN_004afe00()
    ADD ESP,0x4                         ; 0050a45c
    MOV EBX,dword ptr [0x005b80f0]      ; 0050a45f | DAT_005b80f0
    PUSH EBX                            ; 0050a465
    CALL core_fire.cpp_CFireEffect_render_FUN_0048a650 ; 0050a466
        ;   XREF to: 0048a650 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CFireEffect_render_FUN_0048a650()
    ADD ESP,0x4                         ; 0050a46b
    PUSH 0x1                            ; 0050a46e
    MOV ESI,dword ptr [EBP + -0x4]      ; 0050a470
    PUSH ESI                            ; 0050a473 | DAT_01c74640
    CALL core_dlight.cpp_CDemonLight_endScene_FUN_0044e720 ; 0050a474
        ;   XREF to: 0044e720 (UNCONDITIONAL_CALL)  ; undefined core_dlight.cpp_CDemonLight_endScene_FUN_0044e720()
    ADD ESP,0x8                         ; 0050a479
    LEA EBX,[EBP + -0x4c]               ; 0050a47c
    LEA EAX,[EBP + -0x1c]               ; 0050a47f
    FLD float ptr [EAX]                 ; 0050a482
    FMUL float ptr [0x005a18f0]         ; 0050a484 | DAT_005a18f0
    FISTP dword ptr [EBX]               ; 0050a48a
    FLD float ptr [EAX + 0x4]           ; 0050a48c
    FMUL float ptr [0x005a18f0]         ; 0050a48f | DAT_005a18f0
    FISTP dword ptr [EBX + 0x4]         ; 0050a495
    FLD float ptr [EAX + 0x8]           ; 0050a498
    FMUL float ptr [0x005a18f0]         ; 0050a49b | DAT_005a18f0
    FISTP dword ptr [EBX + 0x8]         ; 0050a4a1
    PUSH 0x0                            ; 0050a4a4
    PUSH 0x0                            ; 0050a4a6
    PUSH 0x0                            ; 0050a4a8
    PUSH 0x0                            ; 0050a4aa
    PUSH 0x0                            ; 0050a4ac
    PUSH EDI                            ; 0050a4ae
    CALL core_set.cpp_CDemonSet_setLightingParameters_FUN_0050adc0 ; 0050a4af
        ;   XREF to: 0050adc0 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_setLightingParameters_FUN_0050adc0()
    ADD ESP,0x18                        ; 0050a4b4
    PUSH 0x0                            ; 0050a4b7
    LEA EAX,[EBP + -0x4c]               ; 0050a4b9
    PUSH EAX                            ; 0050a4bc
    PUSH EDI                            ; 0050a4bd
    CALL core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0050b5c0 ; 0050a4be
        ;   XREF to: 0050b5c0 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0050b5c0()
    MOV EDX,EAX                         ; 0050a4c3
    SAR EDX,0x1f                        ; 0050a4c5
    SHL EDX,0x7                         ; 0050a4c8
    SBB EAX,EDX                         ; 0050a4cb
    SAR EAX,0x7                         ; 0050a4cd
    ADD ESP,0xc                         ; 0050a4d0
    MOV EDI,dword ptr [0x005b80f0]      ; 0050a4d3 | DAT_005b80f0
    PUSH EDI                            ; 0050a4d9
    MOV ESI,EAX                         ; 0050a4da
    CALL core_fire.cpp_CFireEffect_hasActiveMuzzleFlash_FUN_0048c8a0 ; 0050a4dc
        ;   XREF to: 0048c8a0 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CFireEffect_hasActiveMuzzleFlash_FUN_0048c8a0()
    SHL EAX,0x7                         ; 0050a4e1
    ADD ESI,EAX                         ; 0050a4e4
    MOV EAX,[0x005c15b8]                ; 0050a4e6 | DAT_005c15b8
    MOV EAX,dword ptr [EAX + 0x24]      ; 0050a4eb | DAT_02ddfa14
    SHL EAX,0xf                         ; 0050a4ee
    ADD ESI,EAX                         ; 0050a4f1
    MOV EAX,[0x005b7620]                ; 0050a4f3 | DAT_005b7620
    ADD ESP,0x4                         ; 0050a4f8
    CMP EAX,0xf0                        ; 0050a4fb
    JLE 0x0050a5f7                      ; 0050a500
        ;   XREF to: 0050a5f7 (CONDITIONAL_JUMP)  ; LAB_0050a5f7
    MOV EDX,dword ptr [EBP + -0x4]      ; 0050a506
    MOV EDX,dword ptr [EDX + 0x1cc0]    ; 0050a509 | DAT_01c76300
    MOV EAX,[0x005b761c]                ; 0050a50f | DAT_005b761c
    ADD EDX,EDX                         ; 0050a514
    SUB EAX,EDX                         ; 0050a516
    MOV EDX,EAX                         ; 0050a518
    SAR EDX,0x1f                        ; 0050a51a
    SUB EAX,EDX                         ; 0050a51d
    SAR EAX,0x1                         ; 0050a51f
    MOV EDX,dword ptr [EBP + -0x4]      ; 0050a521
    MOV EBX,EAX                         ; 0050a524
    MOV EDX,dword ptr [EDX + 0x1cc4]    ; 0050a526 | DAT_01c76304
    MOV EAX,[0x005b7620]                ; 0050a52c | DAT_005b7620
    ADD EDX,EDX                         ; 0050a531
    SUB EAX,EDX                         ; 0050a533
    MOV EDX,EAX                         ; 0050a535
    SAR EDX,0x1f                        ; 0050a537
        ;   Label: LAB_0050a537
    SUB EAX,EDX                         ; 0050a53a
    SAR EAX,0x1                         ; 0050a53c
    MOV EDX,EAX                         ; 0050a53e
    MOV EAX,[0x01cae0e8]                ; 0050a540 | DAT_01cae0e8
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 0050a545
    FLD float ptr [EAX + 0x1f5a0]       ; 0050a54c
    FLDZ                                ; 0050a552
    FCOMPP                              ; 0050a554
    FNSTSW AX                           ; 0050a556
    SAHF                                ; 0050a558
    JNC 0x0050a62b                      ; 0050a559
        ;   XREF to: 0050a62b (CONDITIONAL_JUMP)  ; LAB_0050a62b
    PUSH ESI                            ; 0050a55f
    PUSH EDX                            ; 0050a560
    PUSH EBX                            ; 0050a561
    MOV EAX,dword ptr [EBP + -0x4]      ; 0050a562
    PUSH EAX                            ; 0050a565 | DAT_01c74640
    CALL core_dlight.cpp_CDemonLight_drawShadowDepthBuffer_FUN_00452110 ; 0050a566
        ;   XREF to: 00452110 (UNCONDITIONAL_CALL)  ; undefined core_dlight.cpp_CDemonLight_drawShadowDepthBuffer_FUN_00452110()
    ADD ESP,0x10                        ; 0050a56b
    MOV ESP,EBP                         ; 0050a56e
    POP EBP                             ; 0050a570
    POP EDI                             ; 0050a571
    POP ESI                             ; 0050a572
    POP EBX                             ; 0050a573
    RET                                 ; 0050a574
    LEA EAX,[EBP + -0x1c]               ; 0050a575
        ;   Label: LAB_0050a575
    PUSH EAX                            ; 0050a578
    MOV EDI,dword ptr [0x005ae704]      ; 0050a579 | DAT_005ae704
    XOR EBX,EBX                         ; 0050a57f
    PUSH EDI                            ; 0050a581 | DAT_01b4d738
    MOV ESI,dword ptr [0x01c02594]      ; 0050a582 | DAT_01c02594
    MOV dword ptr [0x01c02594],EBX      ; 0050a588 | DAT_01c02594
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700 ; 0050a58e
        ;   XREF to: 00460700 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700()
    ADD ESP,0x8                         ; 0050a593
    MOV EAX,[0x005ae704]                ; 0050a596 | DAT_005ae704
    PUSH 0x42000000                     ; 0050a59b
    PUSH EAX                            ; 0050a5a0 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_00460c00 ; 0050a5a1
        ;   XREF to: 00460c00 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_00460c00()
    ADD ESP,0x8                         ; 0050a5a6
    LEA EAX,[EBP + -0x10]               ; 0050a5a9
    PUSH EAX                            ; 0050a5ac
    MOV EDX,dword ptr [0x005ae704]      ; 0050a5ad | DAT_005ae704
    PUSH EDX                            ; 0050a5b3 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_00460780 ; 0050a5b4
        ;   XREF to: 00460780 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_00460780()
    MOV ECX,0x1                         ; 0050a5b9
    ADD ESP,0x8                         ; 0050a5be
    MOV dword ptr [0x01fba938],ECX      ; 0050a5c1 | DAT_01fba938
    CALL wincore_windll.cpp_clearZBufferNative_FUN_0052eed4 ; 0050a5c7
        ;   XREF to: 0052eed4 (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_clearZBufferNative_FUN_0052eed4()
    PUSH 0x0                            ; 0050a5cc
    MOV EBX,dword ptr [0x005be368]      ; 0050a5ce | DAT_005be368
    PUSH 0x461c3f9a                     ; 0050a5d4
    PUSH EBX                            ; 0050a5d9 | DAT_01e57284
    XOR EDI,EDI                         ; 0050a5da
    CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00507c80 ; 0050a5dc
        ;   XREF to: 00507c80 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00507c80()
    ADD ESP,0xc                         ; 0050a5e1
    MOV dword ptr [0x01fba938],EDI      ; 0050a5e4 | DAT_01fba938
    MOV dword ptr [0x01c02594],ESI      ; 0050a5ea | DAT_01c02594
    MOV ESP,EBP                         ; 0050a5f0
    POP EBP                             ; 0050a5f2
    POP EDI                             ; 0050a5f3
    POP ESI                             ; 0050a5f4
    POP EBX                             ; 0050a5f5
    RET                                 ; 0050a5f6
    MOV EAX,dword ptr [EBP + -0x4]      ; 0050a5f7
        ;   Label: LAB_0050a5f7
    MOV EDX,dword ptr [0x005b761c]      ; 0050a5fa | DAT_005b761c
    MOV ECX,dword ptr [EAX + 0x1cc0]    ; 0050a600 | DAT_01c76300
    SUB EDX,ECX                         ; 0050a606
    MOV EAX,EDX                         ; 0050a608
    SAR EDX,0x1f                        ; 0050a60a
    SUB EAX,EDX                         ; 0050a60d
    SAR EAX,0x1                         ; 0050a60f
    MOV EBX,EAX                         ; 0050a611
    MOV EAX,dword ptr [EBP + -0x4]      ; 0050a613
    MOV EDX,dword ptr [0x005b7620]      ; 0050a616 | DAT_005b7620
    MOV EDI,dword ptr [EAX + 0x1cc4]    ; 0050a61c | DAT_01c76304
    SUB EDX,EDI                         ; 0050a622
    MOV EAX,EDX                         ; 0050a624
    JMP 0x0050a537                      ; 0050a626
        ;   XREF to: 0050a537 (UNCONDITIONAL_JUMP)  ; LAB_0050a537
    CALL wincore_windll.cpp_clearScreen_FUN_0052ee70 ; 0050a62b
        ;   XREF to: 0052ee70 (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_clearScreen_FUN_0052ee70()
        ;   Label: LAB_0050a62b
    MOV ESP,EBP                         ; 0050a630
    POP EBP                             ; 0050a632
    POP EDI                             ; 0050a633
    POP ESI                             ; 0050a634
    POP EBX                             ; 0050a635
    RET                                 ; 0050a636

