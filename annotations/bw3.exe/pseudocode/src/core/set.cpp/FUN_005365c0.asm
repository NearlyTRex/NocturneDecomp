; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_FUN_005365c0(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined        Stack[-0x78]:1  local_78
; undefined        Stack[-0x6c]:1  local_6c
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined        Stack[-0x54]:1  local_54
; undefined        Stack[-0x48]:1  local_48
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_FUN_004b6f30 at 004b7acd
;
; Referenced Globals:
;   undefined4 s_Bip01_Head_005d05b6+1
;   undefined4 DAT_005d05c7
;   undefined4 DAT_005e3bc0
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   undefined4 DAT_005fc5a0
;   CGame* g_CGamePtr = 01d2130c
;   CGore* g_CGorePtr = 01d22e44
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_00603b38
;   undefined4 DAT_006071f0
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01c6cee8
;   undefined4 g_CDemonLightInstance.base.base.position
;   ... and 16 more
;
; Called Functions:
;   core_actor.cpp_FUN_00408b80
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
;   core_dlight.cpp_CDemonLight_beginScene_FUN_0045c530
;   core_dlight.cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0045d070
;   core_dlight.cpp_CDemonLight_drawShadowDepthBuffer_FUN_0045fb40
;   core_dlight.cpp_CDemonLight_endScene_FUN_0045c7e0
;   core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_0045fab0
;   core_fire.cpp_CFireEffect_hasActiveMuzzleFlash_FUN_004a4100
;   core_fire.cpp_CFireEffect_render_FUN_004a1ad0
;   core_gore.cpp_CGore_renderParticles_FUN_004ce5b0
;   core_set.cpp_CDemonSet_buildDisplayList_FUN_00539f30
;   core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_00537e20
;   core_set.cpp_CDemonSet_renderBackgroundActors_FUN_005346b0
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00533b80
;   core_set.cpp_CDemonSet_setLightingParameters_FUN_005375c0
;   ... and 9 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005365c0
        ;   Label: core_set.cpp_FUN_005365c0
    PUSH ESI                            ; 005365c1
    PUSH EDI                            ; 005365c2
    PUSH EBP                            ; 005365c3
    MOV EBP,ESP                         ; 005365c4
    SUB ESP,0x74                        ; 005365c6
    MOV EBX,dword ptr [0x01d5ba14]      ; 005365c9 | DAT_01d5ba14
    MOV EBX,dword ptr [EBX*0x4 + 0x1d5ba04] ; 005365cf
    LEA ESI,[EBX + 0x158]               ; 005365d6
    MOV EDX,0x1d1e360                   ; 005365dc
    PUSH ESI                            ; 005365e1
    MOV dword ptr [EBP + -0x4],EDX      ; 005365e2
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 005365e5
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005365ea
    PUSH 0x0                            ; 005365ed
    PUSH 0x5d05b7                       ; 005365ef | s_Bip01_Head_005d05b6+1
    PUSH EAX                            ; 005365f4
    MOV EDI,0x3ead0e56                  ; 005365f5
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 005365fa
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    MOV EDX,EAX                         ; 005365ff
    SHL EAX,0x2                         ; 00536601
    ADD ESI,0xe80                       ; 00536604
    SUB EAX,EDX                         ; 0053660a
    ADD ESP,0xc                         ; 0053660c
    SHL EAX,0x4                         ; 0053660f
    MOV dword ptr [EBP + -0x70],EDI     ; 00536612
    ADD ESI,EAX                         ; 00536615
    MOV EAX,0x3f400000                  ; 00536617
    MOV dword ptr [EBP + -0x8],ESI      ; 0053661c
    PUSH ESI                            ; 0053661f
    MOV dword ptr [EBP + -0x6c],EAX     ; 00536620
    XOR ESI,ESI                         ; 00536623
    LEA EAX,[EBP + -0x74]               ; 00536625
    MOV dword ptr [EBP + -0x74],ESI     ; 00536628
    PUSH EAX                            ; 0053662b
    LEA ESI,[EBP + -0x5c]               ; 0053662c
    LEA EDI,[EBP + -0x68]               ; 0053662f
    CALL core_xform.cpp_FUN_00583260    ; 00536632
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 00536637
    LEA EAX,[EBP + -0x68]               ; 0053663a
    LEA ESI,[EBP + -0x5c]               ; 0053663d
    PUSH EAX                            ; 00536640
    MOVSD ES:EDI,ESI                    ; 00536641
    MOVSD ES:EDI,ESI                    ; 00536642
    MOVSD ES:EDI,ESI                    ; 00536643
    PUSH EBX                            ; 00536644
    LEA ESI,[EBP + -0x44]               ; 00536645
    LEA EDI,[EBP + -0x14]               ; 00536648
    CALL core_actor.cpp_FUN_00408b80    ; 0053664b
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[EBP + -0x44]               ; 00536650
    MOV EDX,dword ptr [EBP + -0x8]      ; 00536653
    ADD ESP,0x8                         ; 00536656
    MOVSD ES:EDI,ESI                    ; 00536659
    MOVSD ES:EDI,ESI                    ; 0053665a
    MOVSD ES:EDI,ESI                    ; 0053665b
    PUSH EDX                            ; 0053665c
    LEA ESI,[EBP + -0x38]               ; 0053665d
    LEA EDI,[EBP + -0x50]               ; 00536660
    CALL core_xform.cpp_matrixToEulerAngles_FUN_00583b10 ; 00536663
        ;   XREF to: 00583b10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_matrixToEulerAngles_FUN_00583b10()
    LEA ESI,[EBP + -0x38]               ; 00536668
    MOV EDX,0x1d1e360                   ; 0053666b
    LEA EAX,[EBP + -0x14]               ; 00536670
    XOR ECX,ECX                         ; 00536673
    ADD ESP,0x4                         ; 00536675
    MOV dword ptr [EBP + -0x1c],ECX     ; 00536678
    MOV dword ptr [EBP + -0x18],ECX     ; 0053667b
    MOVSD ES:EDI,ESI                    ; 0053667e
    MOVSD ES:EDI,ESI                    ; 0053667f
    MOVSD ES:EDI,ESI                    ; 00536680
    MOV dword ptr [0x01d2001c],ECX      ; 00536681 | g_CDemonLightInstance.volumetric_enabled
    FLD float ptr [EBP + -0x50]         ; 00536687
    FADD double ptr [0x005d05c7]        ; 0053668a | DAT_005d05c7
    FLD float ptr [EBP + -0x4c]         ; 00536690
    FXCH                                ; 00536693
    FSTP float ptr [EBP + -0x20]        ; 00536695
    FADD float ptr [EBX + 0x34]         ; 00536698
    ADD EDX,0x4                         ; 0053669b
    FSTP float ptr [EBP + -0x1c]        ; 0053669e
    CMP EDX,EAX                         ; 005366a1
    JZ 0x005366b6                       ; 005366a3
        ;   XREF to: 005366b6 (CONDITIONAL_JUMP)  ; LAB_005366b6
    MOV EAX,dword ptr [EBP + -0x14]     ; 005366a5
    MOV dword ptr [EDX],EAX             ; 005366a8 | g_CDemonLightInstance.base.base.position
    MOV EAX,dword ptr [EBP + -0x10]     ; 005366aa
    MOV dword ptr [EDX + 0x4],EAX       ; 005366ad | g_CDemonLightInstance.base.base.position+4
    MOV EAX,dword ptr [EBP + -0xc]      ; 005366b0
    MOV dword ptr [EDX + 0x8],EAX       ; 005366b3 | g_CDemonLightInstance.base.base.position+8
    LEA EAX,[EBP + -0x20]               ; 005366b6
        ;   Label: LAB_005366b6
    PUSH EAX                            ; 005366b9
    MOV EAX,dword ptr [EBP + -0x4]      ; 005366ba
    ADD EAX,0x10                        ; 005366bd
    PUSH EAX                            ; 005366c0 | g_CDemonLightInstance.base.base.rotation_matrix.m[0].x
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550 ; 005366c1
        ;   XREF to: 0045b550 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 005366c6
    MOV EAX,dword ptr [EBP + -0x4]      ; 005366c9
    PUSH 0x3f800000                     ; 005366cc
    MOV dword ptr [EAX + 0x140],0x42000000 ; 005366d1 | g_CDemonLightInstance.base.max_distance
    PUSH EAX                            ; 005366db
    MOV dword ptr [EAX + 0x38],0x41800000 ; 005366dc | g_CDemonLightInstance.base.base.focal_length
    CALL core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_0045fab0 ; 005366e3
        ;   XREF to: 0045fab0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_0045fab0(CDemonLight * this_ptr, float intensity)
    LEA EAX,[EBP + -0x14]               ; 005366e8
    ADD ESP,0x8                         ; 005366eb
    CMP EAX,0x2038f50                   ; 005366ee
    JZ 0x0053670d                       ; 005366f3
        ;   XREF to: 0053670d (CONDITIONAL_JUMP)  ; LAB_0053670d
    MOV EAX,dword ptr [EBP + -0x14]     ; 005366f5
    MOV [0x02038f50],EAX                ; 005366f8 | g_CDemonCameraInstance.base.position
    MOV EAX,dword ptr [EBP + -0x10]     ; 005366fd
    MOV [0x02038f54],EAX                ; 00536700 | g_CDemonCameraInstance.base.position+4
    MOV EAX,dword ptr [EBP + -0xc]      ; 00536705
    MOV [0x02038f58],EAX                ; 00536708 | g_CDemonCameraInstance.base.position+8
    MOV EAX,[0x005fe9dc]                ; 0053670d | g_CGamePtr
        ;   Label: LAB_0053670d
    MOV EDX,dword ptr [EAX + 0x23c]     ; 00536712 | g_CGameInstance.geometry_debug_enabled
    TEST EDX,EDX                        ; 00536718
    JNZ 0x005368d6                      ; 0053671a
        ;   XREF to: 005368d6 (CONDITIONAL_JUMP)  ; LAB_005368d6
    PUSH EDX                            ; 00536720
    MOV ECX,dword ptr [EBP + -0x4]      ; 00536721
    PUSH ECX                            ; 00536724
    CALL core_dlight.cpp_CDemonLight_beginScene_FUN_0045c530 ; 00536725
        ;   XREF to: 0045c530 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_beginScene_FUN_0045c530(CDemonLight * this_ptr, int skip_clear_buffers)
    ADD ESP,0x8                         ; 0053672a
    MOV EBX,dword ptr [EBP + -0x4]      ; 0053672d
    PUSH EBX                            ; 00536730
    CALL core_dlight.cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0045d070 ; 00536731
        ;   XREF to: 0045d070 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0045d070(CDemonLight * this_ptr)
    ADD ESP,0x4                         ; 00536736
    XOR ESI,ESI                         ; 00536739
    PUSH ESI                            ; 0053673b
    MOV EDI,dword ptr [EBP + 0x14]      ; 0053673c
    PUSH dword ptr [EBX + 0x140]        ; 0053673f | g_CDemonLightInstance.base.max_distance
    PUSH EDI                            ; 00536745
    MOV dword ptr [0x00603b38],ESI      ; 00536746 | DAT_00603b38
    CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00533b80 ; 0053674c
        ;   XREF to: 00533b80 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00533b80(CDemonSet * this_ptr, float frustum_param, int render_mode)
    ADD ESP,0xc                         ; 00536751
    PUSH -0x1                           ; 00536754
    MOV EAX,0x1                         ; 00536756
    PUSH EDI                            ; 0053675b
    MOV [0x00603b38],EAX                ; 0053675c | DAT_00603b38
    CALL core_set.cpp_CDemonSet_buildDisplayList_FUN_00539f30 ; 00536761
        ;   XREF to: 00539f30 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_buildDisplayList_FUN_00539f30(CDemonSet * this_ptr, uint dirty_flags_mask)
    ADD ESP,0x8                         ; 00536766
    PUSH 0x1                            ; 00536769
    PUSH EDI                            ; 0053676b
    CALL core_set.cpp_CDemonSet_renderBackgroundActors_FUN_005346b0 ; 0053676c
        ;   XREF to: 005346b0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderBackgroundActors_FUN_005346b0(CDemonSet * this_ptr, int layer_flag)
    ADD ESP,0x8                         ; 00536771
    PUSH 0x1                            ; 00536774
    PUSH EDI                            ; 00536776
    CALL core_set.cpp_CDemonSet_buildDisplayList_FUN_00539f30 ; 00536777
        ;   XREF to: 00539f30 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_buildDisplayList_FUN_00539f30(CDemonSet * this_ptr, uint dirty_flags_mask)
    MOV EDI,dword ptr [EDI + 0x15f6fc]  ; 0053677c
    ADD ESP,0x8                         ; 00536782
    TEST EDI,EDI                        ; 00536785
    JLE 0x005367d0                      ; 00536787
        ;   XREF to: 005367d0 (CONDITIONAL_JUMP)  ; LAB_005367d0
    MOV EBX,dword ptr [EBP + 0x14]      ; 00536789
    MOV EAX,dword ptr [EBX + 0x15f700]  ; 0053678c
        ;   Label: LAB_0053678c
    PUSH EAX                            ; 00536792
    MOV EDX,dword ptr [EAX + 0x154]     ; 00536793
    CALL dword ptr [EDX + 0x10]         ; 00536799
    ADD ESP,0x4                         ; 0053679c
    PUSH 0x1                            ; 0053679f
    MOV ECX,dword ptr [0x005f2afc]      ; 005367a1 | DAT_005f2afc
    PUSH ECX                            ; 005367a7 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500 ; 005367a8
        ;   XREF to: 0046d500 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(CDemonRenderer * this_ptr, int enabled)
    MOV EAX,dword ptr [EBP + 0x14]      ; 005367ad
    ADD EBX,0x4                         ; 005367b0
    INC ESI                             ; 005367b3
    MOV EDI,dword ptr [EAX + 0x15f6fc]  ; 005367b4
    ADD ESP,0x8                         ; 005367ba
    CMP ESI,EDI                         ; 005367bd
    JL 0x0053678c                       ; 005367bf
        ;   XREF to: 0053678c (CONDITIONAL_JUMP)  ; LAB_0053678c
    LEA EAX,[EAX]                       ; 005367c1
    LEA EDX,[EDX]                       ; 005367c7
    LEA EAX,[EAX]                       ; 005367cd
    MOV EAX,[0x005fed24]                ; 005367d0 | g_CGorePtr
        ;   Label: LAB_005367d0
    PUSH EAX                            ; 005367d5
    CALL core_gore.cpp_CGore_renderParticles_FUN_004ce5b0 ; 005367d6
        ;   XREF to: 004ce5b0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_renderParticles_FUN_004ce5b0(CGore * this_ptr)
    ADD ESP,0x4                         ; 005367db
    MOV EDX,dword ptr [0x005fc5a0]      ; 005367de | DAT_005fc5a0
    PUSH EDX                            ; 005367e4
    CALL core_fire.cpp_CFireEffect_render_FUN_004a1ad0 ; 005367e5
        ;   XREF to: 004a1ad0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_render_FUN_004a1ad0(CFireEffect * this_ptr)
    ADD ESP,0x4                         ; 005367ea
    PUSH 0x1                            ; 005367ed
    MOV ECX,dword ptr [EBP + -0x4]      ; 005367ef
    PUSH ECX                            ; 005367f2
    CALL core_dlight.cpp_CDemonLight_endScene_FUN_0045c7e0 ; 005367f3
        ;   XREF to: 0045c7e0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_endScene_FUN_0045c7e0(CDemonLight * this_ptr, int restore_viewport_state)
    ADD ESP,0x8                         ; 005367f8
    LEA EBX,[EBP + -0x2c]               ; 005367fb
    LEA EAX,[EBP + -0x14]               ; 005367fe
    FLD float ptr [EAX]                 ; 00536801
    FMUL float ptr [0x005e3bc0]         ; 00536803 | DAT_005e3bc0
    FISTP dword ptr [EBX]               ; 00536809
    FLD float ptr [EAX + 0x4]           ; 0053680b
    FMUL float ptr [0x005e3bc0]         ; 0053680e | DAT_005e3bc0
    FISTP dword ptr [EBX + 0x4]         ; 00536814
    FLD float ptr [EAX + 0x8]           ; 00536817
    FMUL float ptr [0x005e3bc0]         ; 0053681a | DAT_005e3bc0
    FISTP dword ptr [EBX + 0x8]         ; 00536820
    PUSH 0x0                            ; 00536823
    PUSH 0x0                            ; 00536825
    PUSH 0x0                            ; 00536827
    PUSH 0x0                            ; 00536829
    PUSH 0x0                            ; 0053682b
    MOV EBX,dword ptr [EBP + 0x14]      ; 0053682d
    PUSH EBX                            ; 00536830
    CALL core_set.cpp_CDemonSet_setLightingParameters_FUN_005375c0 ; 00536831
        ;   XREF to: 005375c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setLightingParameters_FUN_005375c0(CDemonSet * this_ptr, CVector3f * position, UOrientationVector * orientation, CVector3f * aabb_min, ...)
    ADD ESP,0x18                        ; 00536836
    PUSH 0x0                            ; 00536839
    LEA EAX,[EBP + -0x2c]               ; 0053683b
    PUSH EAX                            ; 0053683e
    PUSH EBX                            ; 0053683f
    CALL core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_00537e20 ; 00536840
        ;   XREF to: 00537e20 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_00537e20(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal)
    MOV EDX,EAX                         ; 00536845
    SAR EDX,0x1f                        ; 00536847
    SHL EDX,0x7                         ; 0053684a
    SBB EAX,EDX                         ; 0053684d
    SAR EAX,0x7                         ; 0053684f
    ADD ESP,0xc                         ; 00536852
    MOV EDI,dword ptr [0x005fc5a0]      ; 00536855 | DAT_005fc5a0
    PUSH EDI                            ; 0053685b
    MOV ESI,EAX                         ; 0053685c
    CALL core_fire.cpp_CFireEffect_hasActiveMuzzleFlash_FUN_004a4100 ; 0053685e
        ;   XREF to: 004a4100 (UNCONDITIONAL_CALL)  ; int core_fire.cpp_CFireEffect_hasActiveMuzzleFlash_FUN_004a4100(CFireEffect * this_ptr)
    SHL EAX,0x7                         ; 00536863
    ADD ESI,EAX                         ; 00536866
    MOV EAX,[0x006071f0]                ; 00536868 | DAT_006071f0
    MOV EAX,dword ptr [EAX + 0x24]      ; 0053686d | DAT_02d0c1c4
    SHL EAX,0xf                         ; 00536870
    ADD ESI,EAX                         ; 00536873
    MOV EAX,[0x005fba1c]                ; 00536875 | DAT_005fba1c
    ADD ESP,0x4                         ; 0053687a
    CMP EAX,0xf0                        ; 0053687d
    JLE 0x00536957                      ; 00536882
        ;   XREF to: 00536957 (CONDITIONAL_JUMP)  ; LAB_00536957
    MOV EDX,dword ptr [EBP + -0x4]      ; 00536888
    MOV EDX,dword ptr [EDX + 0x1cc0]    ; 0053688b | g_CDemonLightInstance.shadow_map_width
    MOV EAX,[0x005fba18]                ; 00536891 | DAT_005fba18
    ADD EDX,EDX                         ; 00536896
    SUB EAX,EDX                         ; 00536898
    MOV EDX,EAX                         ; 0053689a
    SAR EDX,0x1f                        ; 0053689c
    SUB EAX,EDX                         ; 0053689f
    SAR EAX,0x1                         ; 005368a1
    MOV EDX,dword ptr [EBP + -0x4]      ; 005368a3
    MOV EBX,EAX                         ; 005368a6
    MOV EDX,dword ptr [EDX + 0x1cc4]    ; 005368a8 | g_CDemonLightInstance.shadow_map_height
    MOV EAX,[0x005fba1c]                ; 005368ae | DAT_005fba1c
    ADD EDX,EDX                         ; 005368b3
    SUB EAX,EDX                         ; 005368b5
    MOV EDX,EAX                         ; 005368b7
    SAR EDX,0x1f                        ; 005368b9
        ;   Label: LAB_005368b9
    SUB EAX,EDX                         ; 005368bc
    SAR EAX,0x1                         ; 005368be
    PUSH ESI                            ; 005368c0
    PUSH EAX                            ; 005368c1
    PUSH EBX                            ; 005368c2
    MOV EAX,dword ptr [EBP + -0x4]      ; 005368c3
    PUSH EAX                            ; 005368c6
    CALL core_dlight.cpp_CDemonLight_drawShadowDepthBuffer_FUN_0045fb40 ; 005368c7
        ;   XREF to: 0045fb40 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_drawShadowDepthBuffer_FUN_0045fb40(CDemonLight * this_ptr, int screen_x, int screen_y, int brightness_offset)
    ADD ESP,0x10                        ; 005368cc
    MOV ESP,EBP                         ; 005368cf
    POP EBP                             ; 005368d1
    POP EDI                             ; 005368d2
    POP ESI                             ; 005368d3
    POP EBX                             ; 005368d4
    RET                                 ; 005368d5
    XOR EAX,EAX                         ; 005368d6
        ;   Label: LAB_005368d6
    MOV ESI,dword ptr [0x01c6cee8]      ; 005368d8 | DAT_01c6cee8
    MOV [0x01c6cee8],EAX                ; 005368de | DAT_01c6cee8
    LEA EAX,[EBP + -0x14]               ; 005368e3
    PUSH EAX                            ; 005368e6
    MOV EDX,dword ptr [0x005f2afc]      ; 005368e7 | DAT_005f2afc
    PUSH EDX                            ; 005368ed | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90 ; 005368ee
        ;   XREF to: 0046cb90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90(CDemonRenderer * this_ptr, CVector3f * point_ptr)
    ADD ESP,0x8                         ; 005368f3
    MOV ECX,dword ptr [0x005f2afc]      ; 005368f6 | DAT_005f2afc
    PUSH 0x42000000                     ; 005368fc
    PUSH ECX                            ; 00536901 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0046d090 ; 00536902
        ;   XREF to: 0046d090 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0046d090(CDemonRenderer * this_ptr, float field_of_view)
    ADD ESP,0x8                         ; 00536907
    LEA EAX,[EBP + -0x20]               ; 0053690a
    PUSH EAX                            ; 0053690d
    MOV EBX,dword ptr [0x005f2afc]      ; 0053690e | DAT_005f2afc
    PUSH EBX                            ; 00536914 | DAT_01bdd7e4
    MOV EDI,0x1                         ; 00536915
    CALL engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0046cc10 ; 0053691a
        ;   XREF to: 0046cc10 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0046cc10(CDemonRenderer * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0053691f
    MOV dword ptr [0x0203b37c],EDI      ; 00536922 | g_CDemonRaytraceInstance
    CALL engine_special.cpp_clearZBufferNative_FUN_00560dd4 ; 00536928
        ;   XREF to: 00560dd4 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearZBufferNative_FUN_00560dd4()
    PUSH 0x0                            ; 0053692d
    MOV EAX,[0x00603b28]                ; 0053692f | g_CDemonSetPtr
    PUSH 0x461c3f9a                     ; 00536934
    PUSH EAX                            ; 00536939 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00533b80 ; 0053693a
        ;   XREF to: 00533b80 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00533b80(CDemonSet * this_ptr, float frustum_param, int render_mode)
    ADD ESP,0xc                         ; 0053693f
    XOR EDX,EDX                         ; 00536942
    MOV dword ptr [0x01c6cee8],ESI      ; 00536944 | DAT_01c6cee8
    MOV dword ptr [0x0203b37c],EDX      ; 0053694a | g_CDemonRaytraceInstance
    MOV ESP,EBP                         ; 00536950
    POP EBP                             ; 00536952
    POP EDI                             ; 00536953
    POP ESI                             ; 00536954
    POP EBX                             ; 00536955
    RET                                 ; 00536956
    MOV EAX,dword ptr [EBP + -0x4]      ; 00536957
        ;   Label: LAB_00536957
    MOV EDX,dword ptr [0x005fba18]      ; 0053695a | DAT_005fba18
    MOV ECX,dword ptr [EAX + 0x1cc0]    ; 00536960 | g_CDemonLightInstance.shadow_map_width
    SUB EDX,ECX                         ; 00536966
    MOV EAX,EDX                         ; 00536968
    SAR EDX,0x1f                        ; 0053696a
    SUB EAX,EDX                         ; 0053696d
    SAR EAX,0x1                         ; 0053696f
    MOV EBX,EAX                         ; 00536971
    MOV EAX,dword ptr [EBP + -0x4]      ; 00536973
    MOV EDX,dword ptr [0x005fba1c]      ; 00536976 | DAT_005fba1c
    MOV EDI,dword ptr [EAX + 0x1cc4]    ; 0053697c | g_CDemonLightInstance.shadow_map_height
    SUB EDX,EDI                         ; 00536982
    MOV EAX,EDX                         ; 00536984
    JMP 0x005368b9                      ; 00536986
        ;   XREF to: 005368b9 (UNCONDITIONAL_JUMP)  ; LAB_005368b9

