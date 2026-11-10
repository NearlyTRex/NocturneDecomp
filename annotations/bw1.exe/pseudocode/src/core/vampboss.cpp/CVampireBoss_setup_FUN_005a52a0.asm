; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vampboss_cpp_CVampireBoss_setup_FUN_005a52a0(CVampireBoss *this_ptr)
;
; Parameters:
; CVampireBoss *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_batwing_cth_005f8d04
;   TerminatedCString s_noscape_cth_005f8d10
;   TerminatedCString s_nosskirt_cth_005f8d1c
;   TerminatedCString s_Bip01_Spine2_005f8d29
;   undefined4 DAT_01d39d30
;
; Called Functions:
;   core_cloth.cpp_CCloth_load_FUN_0043e6d0
;   core_cloth.cpp_FUN_0043eea0
;   core_enemy.cpp_CEnemy_setup_FUN_004a0510
;   core_morph.cpp_CMorph_addPartFromKeyframedModel_FUN_00523210
;   core_morph.cpp_CMorph_getReady_FUN_00523310
;   core_morph.cpp_CMorph_setupModelFromDeformable_FUN_005230c0
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20
;   core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a52a0
        ;   Label: core_vampboss.cpp_CVampireBoss_setup_FUN_005a52a0
    PUSH ESI                            ; 005a52a1
    PUSH EDI                            ; 005a52a2
    PUSH EBP                            ; 005a52a3
    SUB ESP,0x10                        ; 005a52a4
    MOV EBX,dword ptr [ESP + 0x24]      ; 005a52a7
    PUSH EBX                            ; 005a52ab
    CALL core_enemy.cpp_CEnemy_setup_FUN_004a0510 ; 005a52ac
        ;   XREF to: 004a0510 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_004a0510(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 005a52b1
    LEA EDI,[EBX + 0x158]               ; 005a52b4
    PUSH EDI                            ; 005a52ba
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20 ; 005a52bb
        ;   XREF to: 00569b20 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a52c0
    LEA EBP,[EBX + 0xc268]              ; 005a52c3
    PUSH EBP                            ; 005a52c9
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20 ; 005a52ca
        ;   XREF to: 00569b20 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a52cf
    PUSH 0x5f8d04                       ; 005a52d2 | = "batwing.cth"
    LEA EAX,[EBX + 0xe60c]              ; 005a52d7
    PUSH EAX                            ; 005a52dd
    MOV dword ptr [ESP + 0x10],EAX      ; 005a52de
    CALL core_cloth.cpp_CCloth_load_FUN_0043e6d0 ; 005a52e2
        ;   XREF to: 0043e6d0 (UNCONDITIONAL_CALL)  ; int core_cloth.cpp_CCloth_load_FUN_0043e6d0(CCloth * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005a52e7
    PUSH EBP                            ; 005a52ea
    LEA EAX,[EBX + 0x30]                ; 005a52eb
    PUSH EAX                            ; 005a52ee
    LEA ESI,[EBX + 0x20]                ; 005a52ef
    PUSH ESI                            ; 005a52f2
    MOV dword ptr [ESP + 0xc],EAX       ; 005a52f3
    MOV EAX,dword ptr [ESP + 0x14]      ; 005a52f7
    PUSH EAX                            ; 005a52fb
    CALL core_cloth.cpp_FUN_0043eea0    ; 005a52fc
        ;   XREF to: 0043eea0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_0043eea0(CCloth * this_ptr, CVector3f * position, CVector3f * euler, CDeformableModelInstance * model_ptr)
    ADD ESP,0x10                        ; 005a5301
    PUSH 0x5f8d10                       ; 005a5304 | = "noscape.cth"
    LEA EAX,[EBX + 0x4913c]             ; 005a5309
    PUSH EAX                            ; 005a530f
    MOV dword ptr [ESP + 0x14],EAX      ; 005a5310
    CALL core_cloth.cpp_CCloth_load_FUN_0043e6d0 ; 005a5314
        ;   XREF to: 0043e6d0 (UNCONDITIONAL_CALL)  ; int core_cloth.cpp_CCloth_load_FUN_0043e6d0(CCloth * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005a5319
    PUSH EDI                            ; 005a531c
    MOV ECX,dword ptr [ESP + 0x4]       ; 005a531d
    PUSH ECX                            ; 005a5321
    PUSH ESI                            ; 005a5322
    MOV EAX,dword ptr [ESP + 0x18]      ; 005a5323
    PUSH EAX                            ; 005a5327
    CALL core_cloth.cpp_FUN_0043eea0    ; 005a5328
        ;   XREF to: 0043eea0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_0043eea0(CCloth * this_ptr, CVector3f * position, CVector3f * euler, CDeformableModelInstance * model_ptr)
    ADD ESP,0x10                        ; 005a532d
    PUSH 0x5f8d1c                       ; 005a5330 | = "nosskirt.cth"
    LEA EAX,[EBX + 0x83c6c]             ; 005a5335
    PUSH EAX                            ; 005a533b
    MOV dword ptr [ESP + 0xc],EAX       ; 005a533c
    CALL core_cloth.cpp_CCloth_load_FUN_0043e6d0 ; 005a5340
        ;   XREF to: 0043e6d0 (UNCONDITIONAL_CALL)  ; int core_cloth.cpp_CCloth_load_FUN_0043e6d0(CCloth * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005a5345
    PUSH EDI                            ; 005a5348
    MOV ECX,dword ptr [ESP + 0x4]       ; 005a5349
    PUSH ECX                            ; 005a534d
    PUSH ESI                            ; 005a534e
    MOV ESI,dword ptr [ESP + 0x10]      ; 005a534f
    PUSH ESI                            ; 005a5353
    CALL core_cloth.cpp_FUN_0043eea0    ; 005a5354
        ;   XREF to: 0043eea0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_0043eea0(CCloth * this_ptr, CVector3f * position, CVector3f * euler, CDeformableModelInstance * model_ptr)
    ADD ESP,0x10                        ; 005a5359
    PUSH EDI                            ; 005a535c
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500 ; 005a535d
        ;   XREF to: 00567500 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a5362
    PUSH EDI                            ; 005a5365
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180 ; 005a5366
        ;   XREF to: 00569180 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a536b
    PUSH EBP                            ; 005a536e
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500 ; 005a536f
        ;   XREF to: 00567500 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a5374
    PUSH EBP                            ; 005a5377
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180 ; 005a5378
        ;   XREF to: 00569180 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a537d
    PUSH EDI                            ; 005a5380
    XOR EAX,EAX                         ; 005a5381
    PUSH EAX                            ; 005a5383
    LEA ESI,[EBX + 0xbe7a0]             ; 005a5384
    PUSH ESI                            ; 005a538a
    MOV [0x01d39d30],EAX                ; 005a538b | DAT_01d39d30
    CALL core_morph.cpp_CMorph_setupModelFromDeformable_FUN_005230c0 ; 005a5390
        ;   XREF to: 005230c0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_setupModelFromDeformable_FUN_005230c0(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr)
    ADD ESP,0xc                         ; 005a5395
    PUSH 0x0                            ; 005a5398
    MOV EDX,dword ptr [ESP + 0x10]      ; 005a539a
    PUSH EDX                            ; 005a539e
    PUSH 0x0                            ; 005a539f
    PUSH ESI                            ; 005a53a1
    CALL core_morph.cpp_CMorph_addPartFromKeyframedModel_FUN_00523210 ; 005a53a2
        ;   XREF to: 00523210 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_addPartFromKeyframedModel_FUN_00523210(CMorph * this_ptr, int model_index, CKeyFramedModel * model_ptr, int frame_index)
    ADD ESP,0x10                        ; 005a53a7
    PUSH 0x0                            ; 005a53aa
    MOV EAX,dword ptr [ESP + 0x10]      ; 005a53ac
    PUSH EAX                            ; 005a53b0
    PUSH 0x0                            ; 005a53b1
    MOV ECX,0x1                         ; 005a53b3
    PUSH ESI                            ; 005a53b8
    MOV dword ptr [0x01d39d30],ECX      ; 005a53b9 | DAT_01d39d30
    CALL core_morph.cpp_CMorph_addPartFromKeyframedModel_FUN_00523210 ; 005a53bf
        ;   XREF to: 00523210 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_addPartFromKeyframedModel_FUN_00523210(CMorph * this_ptr, int model_index, CKeyFramedModel * model_ptr, int frame_index)
    ADD ESP,0x10                        ; 005a53c4
    XOR EDX,EDX                         ; 005a53c7
    PUSH EDX                            ; 005a53c9
    MOV ECX,dword ptr [ESP + 0x8]       ; 005a53ca
    PUSH ECX                            ; 005a53ce
    PUSH EDX                            ; 005a53cf
    PUSH ESI                            ; 005a53d0
    MOV dword ptr [0x01d39d30],EDX      ; 005a53d1 | DAT_01d39d30
    CALL core_morph.cpp_CMorph_addPartFromKeyframedModel_FUN_00523210 ; 005a53d7
        ;   XREF to: 00523210 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_addPartFromKeyframedModel_FUN_00523210(CMorph * this_ptr, int model_index, CKeyFramedModel * model_ptr, int frame_index)
    ADD ESP,0x10                        ; 005a53dc
    PUSH 0x0                            ; 005a53df
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a53e1
    PUSH EDX                            ; 005a53e5
    PUSH 0x0                            ; 005a53e6
    MOV EAX,0x1                         ; 005a53e8
    PUSH ESI                            ; 005a53ed
    MOV [0x01d39d30],EAX                ; 005a53ee | DAT_01d39d30
    CALL core_morph.cpp_CMorph_addPartFromKeyframedModel_FUN_00523210 ; 005a53f3
        ;   XREF to: 00523210 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_addPartFromKeyframedModel_FUN_00523210(CMorph * this_ptr, int model_index, CKeyFramedModel * model_ptr, int frame_index)
    ADD ESP,0x10                        ; 005a53f8
    PUSH EBP                            ; 005a53fb
    PUSH 0x1                            ; 005a53fc
    XOR ECX,ECX                         ; 005a53fe
    PUSH ESI                            ; 005a5400
    MOV dword ptr [0x01d39d30],ECX      ; 005a5401 | DAT_01d39d30
    CALL core_morph.cpp_CMorph_setupModelFromDeformable_FUN_005230c0 ; 005a5407
        ;   XREF to: 005230c0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_setupModelFromDeformable_FUN_005230c0(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr)
    ADD ESP,0xc                         ; 005a540c
    PUSH 0x0                            ; 005a540f
    MOV EAX,dword ptr [ESP + 0xc]       ; 005a5411
    PUSH EAX                            ; 005a5415
    PUSH 0x1                            ; 005a5416
    PUSH ESI                            ; 005a5418
    CALL core_morph.cpp_CMorph_addPartFromKeyframedModel_FUN_00523210 ; 005a5419
        ;   XREF to: 00523210 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_addPartFromKeyframedModel_FUN_00523210(CMorph * this_ptr, int model_index, CKeyFramedModel * model_ptr, int frame_index)
    ADD ESP,0x10                        ; 005a541e
    PUSH 0x0                            ; 005a5421
    MOV ECX,dword ptr [ESP + 0xc]       ; 005a5423
    PUSH ECX                            ; 005a5427
    MOV EDX,0x1                         ; 005a5428
    PUSH EDX                            ; 005a542d
    PUSH ESI                            ; 005a542e
    MOV dword ptr [0x01d39d30],EDX      ; 005a542f | DAT_01d39d30
    CALL core_morph.cpp_CMorph_addPartFromKeyframedModel_FUN_00523210 ; 005a5435
        ;   XREF to: 00523210 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_addPartFromKeyframedModel_FUN_00523210(CMorph * this_ptr, int model_index, CKeyFramedModel * model_ptr, int frame_index)
    ADD ESP,0x10                        ; 005a543a
    XOR EAX,EAX                         ; 005a543d
    PUSH ESI                            ; 005a543f
    MOV [0x01d39d30],EAX                ; 005a5440 | DAT_01d39d30
    CALL core_morph.cpp_CMorph_getReady_FUN_00523310 ; 005a5445
        ;   XREF to: 00523310 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_getReady_FUN_00523310(CMorph * this_ptr)
    ADD ESP,0x4                         ; 005a544a
    PUSH EDI                            ; 005a544d
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580 ; 005a544e
        ;   XREF to: 00567580 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a5453
    PUSH EBP                            ; 005a5456
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580 ; 005a5457
        ;   XREF to: 00567580 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a545c
    PUSH EDI                            ; 005a545f
    MOV dword ptr [EBX + 0xfc],0x1      ; 005a5460
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 005a546a
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a546f
    PUSH 0x1                            ; 005a5472
    PUSH 0x5f8d29                       ; 005a5474 | = "Bip01 Spine2"
    PUSH EAX                            ; 005a5479
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 005a547a
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    MOV dword ptr [EBX + 0x25ac],0x0    ; 005a547f
    MOV dword ptr [EBX + 0xbf3dc],0x0   ; 005a5489
    ADD ESP,0xc                         ; 005a5493
    MOV dword ptr [EBX + 0x25a8],EAX    ; 005a5496
    ADD ESP,0x10                        ; 005a549c
    POP EBP                             ; 005a549f
    POP EDI                             ; 005a54a0
    POP ESI                             ; 005a54a1
    POP EBX                             ; 005a54a2
    RET                                 ; 005a54a3

