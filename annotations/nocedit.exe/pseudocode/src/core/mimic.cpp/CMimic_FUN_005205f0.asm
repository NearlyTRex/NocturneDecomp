; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_mimic.cpp_CMimic_FUN_005205f0(CMimic * this_ptr)
;
; Parameters:
; CMimic *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0xf4]:1  local_f4
; undefined1       Stack[-0xc4]:1  local_c4
; undefined1       Stack[-0x94]:1  local_94
; undefined1       Stack[-0x64]:1  local_64
; undefined1       Stack[-0x4c]:1  local_4c
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined1       Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined1       Stack[-0x10]:1  local_10
;
; XREF[1]:
;   core_mimic.cpp_CMimic_renderOpaque_FUN_00520870 at 00520881
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;   undefined4 DAT_02c6d590
;   int g_RelativeX
;   int g_LightDirectionX
;   CMatrix3x3i g_TransformMatrix
;   undefined4 g_TransformMatrix[0][1]
;   undefined4 g_TransformMatrix[0][2]
;   CHero*[4] g_HeroActors
;   int g_LocalHeroIndex
;   int INT_02f33378
;   undefined4 DAT_02f43978
;   undefined4 g_CStrangerClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_charactr.cpp_CCharacter_FUN_0042a420
;   core_cloth.cpp_FUN_0043bae0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
;   core_morph.cpp_CMorphModel_FUN_0052bae0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_motion.cpp_CMotionController_render_FUN_0052e700
;   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
;   core_xform.cpp_getTranslation_FUN_005f6110
;   core_xform.cpp_matrixToEulerAngles_FUN_005f5690
;   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
;   ... and 5 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005205f0
        ;   Label: core_mimic.cpp_CMimic_FUN_005205f0
    PUSH ESI                            ; 005205f1
    PUSH EDI                            ; 005205f2
    PUSH EBP                            ; 005205f3
    MOV EBP,ESP                         ; 005205f4
    SUB ESP,0xe4                        ; 005205f6
    SUB EBP,0x7e                        ; 005205fc
    MOV EBX,dword ptr [EBP + 0x92]      ; 005205ff
    CMP dword ptr [EBX + 0x240c],0x0    ; 00520605
    JZ 0x00520618                       ; 0052060c
        ;   XREF to: 00520618 (CONDITIONAL_JUMP)  ; LAB_00520618
    XOR EAX,EAX                         ; 0052060e
    LEA ESP,[EBP + 0x7e]                ; 00520610
    POP EBP                             ; 00520613
    POP EDI                             ; 00520614
    POP ESI                             ; 00520615
    POP EBX                             ; 00520616
    RET                                 ; 00520617
    PUSH EBX                            ; 00520618
        ;   Label: LAB_00520618
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 00520619
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 0052061e
    LEA EAX,[EBP + 0x2a]                ; 00520621
    PUSH EAX                            ; 00520624
    MOV ESI,dword ptr [EBX + 0x154]     ; 00520625
    PUSH EBX                            ; 0052062b
    CALL dword ptr [ESI + 0x14]         ; 0052062c
    ADD ESP,0x8                         ; 0052062f
    PUSH EAX                            ; 00520632
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 00520633
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 00520638
    MOV dword ptr [EBP + 0x72],EAX      ; 0052063b
    TEST EAX,EAX                        ; 0052063e
    JZ 0x00520666                       ; 00520640
        ;   XREF to: 00520666 (CONDITIONAL_JUMP)  ; LAB_00520666
    FLD float ptr [EBX + 0x4ca50]       ; 00520642
    FLDZ                                ; 00520648
    FCOMPP                              ; 0052064a
    FNSTSW AX                           ; 0052064c
    SAHF                                ; 0052064e
    JA 0x0052067a                       ; 0052064f
        ;   XREF to: 0052067a (CONDITIONAL_JUMP)  ; LAB_0052067a
    LEA EAX,[EBX + 0x4be24]             ; 00520651
    PUSH dword ptr [EBX + 0x4ca50]      ; 00520657
    PUSH EAX                            ; 0052065d
    CALL core_morph.cpp_CMorphModel_FUN_0052bae0 ; 0052065e
        ;   XREF to: 0052bae0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_FUN_0052bae0(CMorphModel * this_ptr)
    ADD ESP,0x8                         ; 00520663
        ;   Label: LAB_00520663
    PUSH EBX                            ; 00520666
        ;   Label: LAB_00520666
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 00520667
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    MOV EAX,dword ptr [EBP + 0x72]      ; 0052066c
    ADD ESP,0x4                         ; 0052066f
    LEA ESP,[EBP + 0x7e]                ; 00520672
    POP EBP                             ; 00520675
    POP EDI                             ; 00520676
    POP ESI                             ; 00520677
    POP EBX                             ; 00520678
    RET                                 ; 00520679
    MOV EAX,[0x006703ec]                ; 0052067a | g_CDemonRendererPtr2
        ;   Label: LAB_0052067a
    MOV EAX,dword ptr [EAX + 0x18]      ; 0052067f | DAT_02c6d590
    MOV dword ptr [EBP + 0x76],EAX      ; 00520682
    TEST EAX,EAX                        ; 00520685
    SETZ AL                             ; 00520687
    AND EAX,0xff                        ; 0052068a
    PUSH EAX                            ; 0052068f
    MOV ECX,dword ptr [0x006703ec]      ; 00520690 | g_CDemonRendererPtr2
    PUSH ECX                            ; 00520696 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_0048ce10 ; 00520697
        ;   XREF to: 0048ce10 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_0048ce10(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0052069c
    CALL engine_matrix.c_matrixPush_FUN_0050d620 ; 0052069f
        ;   XREF to: 0050d620 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_matrixPush_FUN_0050d620()
    PUSH 0x0                            ; 005206a4
    MOV ESI,dword ptr [0x02d052b8]      ; 005206a6 | g_RelativeX
    MOV EDI,dword ptr [0x02d052dc]      ; 005206ac | g_LightDirectionX
    MOV EAX,[0x02d052e8]                ; 005206b2 | g_TransformMatrix
    MOV EDX,dword ptr [0x02d052ec]      ; 005206b7 | g_TransformMatrix[0][1]
    MOV ECX,dword ptr [0x02d052f0]      ; 005206bd | g_TransformMatrix[0][2]
    PUSH 0x1                            ; 005206c3
    NEG ESI                             ; 005206c5
    NEG EDI                             ; 005206c7
    NEG EAX                             ; 005206c9
    NEG EDX                             ; 005206cb
    NEG ECX                             ; 005206cd
    PUSH -0x1                           ; 005206cf
    MOV dword ptr [0x02d052b8],ESI      ; 005206d1 | g_RelativeX
    MOV [0x02d052e8],EAX                ; 005206d7 | g_TransformMatrix
    PUSH -0x1                           ; 005206dc
    LEA EAX,[EBX + 0x158]               ; 005206de
    MOV dword ptr [0x02d052dc],EDI      ; 005206e4 | g_LightDirectionX
    PUSH EAX                            ; 005206ea
    MOV dword ptr [0x02d052ec],EDX      ; 005206eb | g_TransformMatrix[0][1]
    MOV dword ptr [0x02d052f0],ECX      ; 005206f1 | g_TransformMatrix[0][2]
    CALL core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150 ; 005206f7
        ;   XREF to: 005a0150 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150(CDeformableModelInstance * this_ptr, int lod_index, uint render_flags, int lighting_mode, ...)
    ADD ESP,0x14                        ; 005206fc
    PUSH 0x0                            ; 005206ff
    LEA EAX,[EBX + 0xbf84]              ; 00520701
    PUSH EAX                            ; 00520707
    CALL core_cloth.cpp_FUN_0043bae0    ; 00520708
        ;   XREF to: 0043bae0 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_FUN_0043bae0()
    ADD ESP,0x8                         ; 0052070d
    MOV ESI,dword ptr [0x03f6bb60]      ; 00520710 | g_CStrangerClassInfo.name_hash
    MOV EAX,[0x02db87d0]                ; 00520716 | g_LocalHeroIndex
    PUSH ESI                            ; 0052071b
    MOV EDI,dword ptr [EAX*0x4 + 0x2db87c0] ; 0052071c | g_HeroActors
    PUSH EDI                            ; 00520723
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 00520724
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [EBP + 0x7a],EAX      ; 00520729
    ADD ESP,0x8                         ; 0052072c
    TEST EAX,EAX                        ; 0052072f
    JZ 0x00520802                       ; 00520731
        ;   XREF to: 00520802 (CONDITIONAL_JUMP)  ; LAB_00520802
    MOV ESI,0x40490fdb                  ; 00520737
    XOR EDX,EDX                         ; 0052073c
    LEA EAX,[EBP + 0x66]                ; 0052073e
    MOV dword ptr [EBP + 0x66],EDX      ; 00520741
    PUSH EAX                            ; 00520744
    MOV EAX,0x3f38263b                  ; 00520745
    MOV dword ptr [EBP + 0x6e],EDX      ; 0052074a
    MOV dword ptr [EBP + 0x52],EAX      ; 0052074d
    LEA EAX,[EBP + 0x4e]                ; 00520750
    MOV dword ptr [EBP + 0x4e],EDX      ; 00520753
    PUSH EAX                            ; 00520756
    LEA EAX,[EBP + -0x36]               ; 00520757
    MOV EDX,0x3e3d70a4                  ; 0052075a
    PUSH EAX                            ; 0052075f
    MOV dword ptr [EBP + 0x6a],ESI      ; 00520760
    MOV dword ptr [EBP + 0x56],EDX      ; 00520763
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 00520766
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    MOV ESI,dword ptr [0x02f33378]      ; 0052076b | INT_02f33378
    LEA EAX,[ESI*0x4 + 0x0]             ; 00520771
    SUB EAX,ESI                         ; 00520778
    MOV ESI,EAX                         ; 0052077a
    SHL ESI,0x4                         ; 0052077c
    LEA EAX,[EBX + 0xfd8]               ; 0052077f
    ADD ESP,0xc                         ; 00520785
    ADD EAX,ESI                         ; 00520788
    PUSH EAX                            ; 0052078a
    LEA EAX,[EBP + -0x36]               ; 0052078b
    PUSH EAX                            ; 0052078e
    LEA ESI,[EBP + -0x66]               ; 0052078f
    LEA EDI,[EBP + -0x6]                ; 00520792
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 00520795
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    ADD ESP,0x8                         ; 0052079a
    LEA EAX,[EBP + 0x42]                ; 0052079d
    MOV ECX,0xc                         ; 005207a0
    PUSH EAX                            ; 005207a5
    LEA EAX,[EBP + -0x6]                ; 005207a6
    LEA ESI,[EBP + -0x66]               ; 005207a9
    PUSH EAX                            ; 005207ac
    MOVSD.REP ES:EDI,ESI                ; 005207ad
    CALL core_xform.cpp_getTranslation_FUN_005f6110 ; 005207af
        ;   XREF to: 005f6110 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_getTranslation_FUN_005f6110(CMatrix3x4f * matrix_in, CVector3f * vector_out)
    ADD ESP,0x8                         ; 005207b4
    LEA EAX,[EBP + 0x5a]                ; 005207b7
    PUSH EAX                            ; 005207ba
    LEA EAX,[EBP + -0x6]                ; 005207bb
    PUSH EAX                            ; 005207be
    CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690 ; 005207bf
        ;   XREF to: 005f5690 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_005f5690(CMatrix3x3f * matrix_in, CVector3f * euler_out)
    ADD ESP,0x8                         ; 005207c4
    LEA EAX,[EBP + 0x42]                ; 005207c7
    PUSH EAX                            ; 005207ca
    LEA EAX,[EBP + 0x5a]                ; 005207cb
    PUSH EAX                            ; 005207ce
    MOV ECX,dword ptr [0x006703ec]      ; 005207cf | g_CDemonRendererPtr2
    PUSH ECX                            ; 005207d5 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 005207d6
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 005207db
    MOV EAX,dword ptr [EBP + 0x7a]      ; 005207de
    PUSH -0x1                           ; 005207e1
    ADD EAX,0x1fcd8                     ; 005207e3
    PUSH 0x0                            ; 005207e8
    PUSH EAX                            ; 005207ea
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 005207eb
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 005207f0
    MOV ESI,dword ptr [0x006703ec]      ; 005207f3 | g_CDemonRendererPtr2
    PUSH ESI                            ; 005207f9 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 005207fa
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()
    PUSH EBX                            ; 00520802
        ;   Label: LAB_00520802
    CALL core_charactr.cpp_CCharacter_FUN_0042a420 ; 00520803
        ;   XREF to: 0042a420 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042a420(CCharacter * this_ptr)
    MOV EDI,dword ptr [0x02f43978]      ; 00520808 | DAT_02f43978
    ADD ESP,0x4                         ; 0052080e
    TEST EDI,EDI                        ; 00520811
    JZ 0x00520840                       ; 00520813
        ;   XREF to: 00520840 (CONDITIONAL_JUMP)  ; LAB_00520840
    MOV EAX,[0x006703ec]                ; 00520815 | g_CDemonRendererPtr2
    PUSH EAX                            ; 0052081a | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 0052081b
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00520820
    TEST EAX,EAX                        ; 00520823
    JNZ 0x00520840                      ; 00520825
        ;   XREF to: 00520840 (CONDITIONAL_JUMP)  ; LAB_00520840
    PUSH EBX                            ; 00520827
    LEA ESI,[EBX + 0x158]               ; 00520828
    PUSH ESI                            ; 0052082e
    CALL core_motion.cpp_CMotionController_render_FUN_0052e700 ; 0052082f
        ;   XREF to: 0052e700 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_render_FUN_0052e700(CMotionController * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00520834
    PUSH ESI                            ; 00520837
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 00520838
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0052083d
    MOV EDX,dword ptr [0x006703ec]      ; 00520840 | g_CDemonRendererPtr2
        ;   Label: LAB_00520840
    PUSH EDX                            ; 00520846 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 00520847
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()

