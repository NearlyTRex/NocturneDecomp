; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CCloth_boneEditor_FUN_0043c880(CCloth *this_ptr)
;
; Parameters:
; CCloth *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x558]:4  local_558
; CVector3f        Stack[-0x80]:12  local_80
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_cloth.cpp_CCloth_showMenu_FUN_0043ddf0 at 0043dfd0
;
; Referenced Globals:
;   TerminatedCString s_noc_d_pcx_00618693
;   TerminatedCString s_Model_motion_s_frame_f_0061869d
;   TerminatedCString s_Select_motion_006186b8
;   TerminatedCString s_f_006186c6
;   TerminatedCString s_s_1_Toggle_bone_drawing__006186c9
;   TerminatedCString s_s_2_Add_bone_006186e8
;   TerminatedCString s_C_Toggle_cloth_render_006186f4
;   TerminatedCString s_S_Toggle_skeleton_render_0061870b
;   TerminatedCString s_P_Pause_unpause_animatio_00618725
;   TerminatedCString s_H_Home_pose_toggle_00618740
;   TerminatedCString s_L_Toggle_locked_vertices_00618754
;   TerminatedCString s_Z_Restart_cloth_0061876e
;   TerminatedCString s_M_Select_motion_0061877f
;   TerminatedCString s_Cylinder_edit_keys_00618790
;   TerminatedCString s_D_Delete_cylinder_006187a4
;   ... and 41 more
;
; Called Functions:
;   core_cloth.cpp_CCloth_addCollisionBone_FUN_0043c430
;   core_cloth.cpp_CCloth_computeBoneTransform_FUN_0043a2b0
;   core_cloth.cpp_CCloth_orientBoneToChild_FUN_0043a110
;   core_cloth.cpp_CCloth_process_FUN_0043ab80
;   core_cloth.cpp_CCloth_render_FUN_0043bae0
;   core_cloth.cpp_CCloth_renderBone_FUN_0043b7e0
;   core_cloth.cpp_CCloth_setup_FUN_00439710
;   core_cloth.cpp_drawVertexMarker_FUN_0043c6e0
;   core_game.cpp_CGame_saveClockTime_FUN_004d7d80
;   core_game.cpp_CGame_updateDT_FUN_004d7d90
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_motion.cpp_CMotionController_jumpToMotion_FUN_0052dde0
;   core_motion.cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   ... and 30 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043c880
        ;   Label: core_cloth.cpp_CCloth_boneEditor_FUN_0043c880
    PUSH ESI                            ; 0043c881
    PUSH EDI                            ; 0043c882
    PUSH EBP                            ; 0043c883
    MOV EBP,ESP                         ; 0043c884
    SUB ESP,0x544                       ; 0043c886
    NOP                                 ; 0043c88c
    NOP                                 ; 0043c88d
    NOP                                 ; 0043c88e
    MOV ESI,dword ptr [EBP + 0x14]      ; 0043c88f
    MOV EDX,0x1                         ; 0043c892
    PUSH 0x1f                           ; 0043c897
    MOV EDI,dword ptr [0x0068416c]      ; 0043c899 | g_CSpotViewPtr
    XOR EAX,EAX                         ; 0043c89f
    MOV dword ptr [EBP + -0x18],EDX     ; 0043c8a1
    NOP                                 ; 0043c8a4
    NOP                                 ; 0043c8a5
    NOP                                 ; 0043c8a6
    NOP                                 ; 0043c8a7
    MOV dword ptr [EBP + -0x2c],EDX     ; 0043c8a8
    NOP                                 ; 0043c8ab
    NOP                                 ; 0043c8ac
    NOP                                 ; 0043c8ad
    NOP                                 ; 0043c8ae
    MOV EBX,EDX                         ; 0043c8af
    MOV dword ptr [EBP + -0x40],EDX     ; 0043c8b1
    NOP                                 ; 0043c8b4
    NOP                                 ; 0043c8b5
    NOP                                 ; 0043c8b6
    NOP                                 ; 0043c8b7
    MOV dword ptr [EBP + -0x3c],EDX     ; 0043c8b8
    NOP                                 ; 0043c8bb
    NOP                                 ; 0043c8bc
    NOP                                 ; 0043c8bd
    NOP                                 ; 0043c8be
    MOV dword ptr [EBP + -0x38],EAX     ; 0043c8bf
    NOP                                 ; 0043c8c2
    NOP                                 ; 0043c8c3
    NOP                                 ; 0043c8c4
    NOP                                 ; 0043c8c5
    MOV dword ptr [EBP + -0x34],EAX     ; 0043c8c6
    NOP                                 ; 0043c8c9
    NOP                                 ; 0043c8ca
    NOP                                 ; 0043c8cb
    NOP                                 ; 0043c8cc
    MOV dword ptr [EBP + -0x14],EAX     ; 0043c8cd
    NOP                                 ; 0043c8d0
    NOP                                 ; 0043c8d1
    NOP                                 ; 0043c8d2
    NOP                                 ; 0043c8d3
    MOV [0x00838e48],EAX                ; 0043c8d4 | UNION_UVector3_00838e40+8
    MOV [0x00838e44],EAX                ; 0043c8d9 | UNION_UVector3_00838e40+4
    MOV [0x00838e40],EAX                ; 0043c8de | UNION_UVector3_00838e40
    MOV [0x00838e54],EAX                ; 0043c8e3 | UNION_UVector3_00838e4c+8
    MOV [0x00838e50],EAX                ; 0043c8e8 | UNION_UVector3_00838e4c+4
    PUSH EDI                            ; 0043c8ed | g_CSpotViewInstance
    MOV [0x00838e4c],EAX                ; 0043c8ee | UNION_UVector3_00838e4c
    XOR EBX,EDX                         ; 0043c8f3
    CALL shape_spotview.cpp_CSpotView_reset_FUN_005b9620 ; 0043c8f5
        ;   XREF to: 005b9620 (UNCONDITIONAL_CALL)  ; void shape_spotview.cpp_CSpotView_reset_FUN_005b9620(CSpotView * this_ptr, uint control_flags)
    ADD ESP,0x8                         ; 0043c8fa
    MOV EAX,[0x0067b654]                ; 0043c8fd | g_CGamePtr
    PUSH EAX                            ; 0043c902 | g_CGameInstance
    CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80 ; 0043c903
        ;   XREF to: 004d7d80 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_saveClockTime_FUN_004d7d80(CGame * this_ptr)
    ADD ESP,0x4                         ; 0043c908
    PUSH 0x0                            ; 0043c90b
    PUSH EBX                            ; 0043c90d
    PUSH 0x838e58                       ; 0043c90e | g_CDeformableModelInstanceInstance
    CALL core_motion.cpp_CMotionController_jumpToMotion_FUN_0052dde0 ; 0043c913
        ;   XREF to: 0052dde0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotion_FUN_0052dde0(CMotionController * this_ptr, int target_motion_index, float target_frame_number)
    ADD ESP,0xc                         ; 0043c918
    PUSH 0x838e58                       ; 0043c91b | g_CDeformableModelInstanceInstance
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 0043c920
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0043c925
    PUSH 0x838e58                       ; 0043c928 | g_CDeformableModelInstanceInstance
    PUSH 0x838e4c                       ; 0043c92d | UNION_UVector3_00838e4c
    MOV EBX,EAX                         ; 0043c932
    PUSH 0x838e40                       ; 0043c934 | UNION_UVector3_00838e40
    MOV dword ptr [EBP + -0x20],EAX     ; 0043c939
    NOP                                 ; 0043c93c
    NOP                                 ; 0043c93d
    NOP                                 ; 0043c93e
    NOP                                 ; 0043c93f
    MOV EAX,[0x006810c8]                ; 0043c940 | g_CDemonSetPtr
    PUSH ESI                            ; 0043c945
    MOV dword ptr [EAX + 0x15ac80],0x1  ; 0043c946 | g_CDemonSetInstance.lighting_quality_mode
    CALL core_cloth.cpp_CCloth_setup_FUN_00439710 ; 0043c950
        ;   XREF to: 00439710 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_setup_FUN_00439710(CCloth * this_ptr, CVector3f * position, CVector3f * euler, CDeformableModelInstance * model_ptr)
    ADD ESP,0x10                        ; 0043c955
    LEA EAX,[ESI + 0x3ce90]             ; 0043c958
    MOV dword ptr [EBP + -0x30],EAX     ; 0043c95e
    NOP                                 ; 0043c961
    NOP                                 ; 0043c962
    NOP                                 ; 0043c963
    NOP                                 ; 0043c964
    LEA EAX,[ESI + 0x56d8]              ; 0043c965
    ADD EBX,0x968                       ; 0043c96b
    MOV dword ptr [EBP + -0x24],EAX     ; 0043c971
    NOP                                 ; 0043c974
    NOP                                 ; 0043c975
    NOP                                 ; 0043c976
    NOP                                 ; 0043c977
    MOV dword ptr [EBP + -0x4c],EAX     ; 0043c978
    NOP                                 ; 0043c97b
    NOP                                 ; 0043c97c
    NOP                                 ; 0043c97d
    NOP                                 ; 0043c97e
    LEA EAX,[ESI + 0x3fe48]             ; 0043c97f
    MOV dword ptr [EBP + -0x50],EBX     ; 0043c985
    NOP                                 ; 0043c988
    NOP                                 ; 0043c989
    NOP                                 ; 0043c98a
    NOP                                 ; 0043c98b
    MOV dword ptr [EBP + -0x28],EAX     ; 0043c98c
    NOP                                 ; 0043c98f
    NOP                                 ; 0043c990
    NOP                                 ; 0043c991
    NOP                                 ; 0043c992
    MOV EAX,[0x0067b654]                ; 0043c993 | g_CGamePtr
        ;   Label: LAB_0043c993
    MOV EAX,dword ptr [EAX + 0x264]     ; 0043c998 | g_CGameInstance.delta_time_float
    PUSH 0x838e58                       ; 0043c99e | g_CDeformableModelInstanceInstance
    MOV dword ptr [EBP + -0x44],EAX     ; 0043c9a3
    MOV dword ptr [EBP + 0xfffffabc],EAX ; 0043c9a6
    NOP                                 ; 0043c9ac
    NOP                                 ; 0043c9ad
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 0043c9ae
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0043c9b3
    MOV EDX,dword ptr [EBP + -0x38]     ; 0043c9b6
    NOP                                 ; 0043c9b9
    NOP                                 ; 0043c9ba
    NOP                                 ; 0043c9bb
    NOP                                 ; 0043c9bc
    MOV dword ptr [EBP + -0x10],EAX     ; 0043c9bd
    NOP                                 ; 0043c9c0
    NOP                                 ; 0043c9c1
    NOP                                 ; 0043c9c2
    NOP                                 ; 0043c9c3
    TEST EDX,EDX                        ; 0043c9c4
    JZ 0x0043d413                       ; 0043c9c6
        ;   XREF to: 0043d413 (CONDITIONAL_JUMP)  ; LAB_0043d413
    CMP dword ptr [EBP + -0x2c],0x0     ; 0043c9cc
        ;   Label: LAB_0043c9cc
    NOP                                 ; 0043c9d0
    NOP                                 ; 0043c9d1
    NOP                                 ; 0043c9d2
    NOP                                 ; 0043c9d3
    JZ 0x0043d48d                       ; 0043c9d4
        ;   XREF to: 0043d48d (CONDITIONAL_JUMP)  ; LAB_0043d48d
    PUSH 0x838e58                       ; 0043c9da | g_CDeformableModelInstanceInstance
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80 ; 0043c9df
        ;   XREF to: 0059df80 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0043c9e4
        ;   Label: LAB_0043c9e4
    PUSH 0x838e58                       ; 0043c9e7 | g_CDeformableModelInstanceInstance
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40 ; 0043c9ec
        ;   XREF to: 0059fb40 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0043c9f1
    MOV EAX,dword ptr [EBP + -0x28]     ; 0043c9f4
    NOP                                 ; 0043c9f7
    NOP                                 ; 0043c9f8
    NOP                                 ; 0043c9f9
    NOP                                 ; 0043c9fa
    FLD float ptr [0x0083b0ac]          ; 0043c9fb | g_CDeformableModelInstanceInstance.accumulated_root_motion.x
    FSUBR float ptr [EAX]               ; 0043ca01
    FSTP float ptr [EAX]                ; 0043ca03
    FLD float ptr [0x0083b0b0]          ; 0043ca05 | g_CDeformableModelInstanceInstance.accumulated_root_motion.y
    FSUBR float ptr [EAX + 0x4]         ; 0043ca0b
    XOR EDI,EDI                         ; 0043ca0e
    FSTP float ptr [EAX + 0x4]          ; 0043ca10
    FLD float ptr [0x0083b0b4]          ; 0043ca13 | g_CDeformableModelInstanceInstance.accumulated_root_motion.z
    FSUBR float ptr [EAX + 0x8]         ; 0043ca19
    MOV ECX,dword ptr [EBP + -0x2c]     ; 0043ca1c
    NOP                                 ; 0043ca1f
    NOP                                 ; 0043ca20
    NOP                                 ; 0043ca21
    NOP                                 ; 0043ca22
    FSTP float ptr [EAX + 0x8]          ; 0043ca23
    MOV dword ptr [0x0083b0b4],EDI      ; 0043ca26 | g_CDeformableModelInstanceInstance.accumulated_root_motion.z
    MOV dword ptr [0x0083b0b0],EDI      ; 0043ca2c | g_CDeformableModelInstanceInstance.accumulated_root_motion.y
    MOV dword ptr [0x0083b0ac],EDI      ; 0043ca32 | g_CDeformableModelInstanceInstance.accumulated_root_motion.x
    TEST ECX,ECX                        ; 0043ca38
    JNZ 0x0043d49c                      ; 0043ca3a
        ;   XREF to: 0043d49c (CONDITIONAL_JUMP)  ; LAB_0043d49c
    PUSH 0x838e58                       ; 0043ca40 | g_CDeformableModelInstanceInstance
    PUSH 0x0                            ; 0043ca45
    PUSH dword ptr [ESP + 0x8]          ; 0043ca47
    PUSH 0x838e4c                       ; 0043ca4b | UNION_UVector3_00838e4c
    PUSH 0x838e40                       ; 0043ca50 | UNION_UVector3_00838e40
    PUSH ESI                            ; 0043ca55
    CALL core_cloth.cpp_CCloth_process_FUN_0043ab80 ; 0043ca56
        ;   XREF to: 0043ab80 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_process_FUN_0043ab80(CCloth * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 0043ca5b
    MOV EAX,[0x0067cf44]                ; 0043ca5e | g_CKeysPtr
        ;   Label: LAB_0043ca5e
    PUSH EAX                            ; 0043ca63 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0043ca64 | g_CKeysInstance
    CALL dword ptr [EDX + 0x8]          ; 0043ca66
    ADD ESP,0x4                         ; 0043ca69
    MOV EBX,dword ptr [0x0068416c]      ; 0043ca6c | g_CSpotViewPtr
    PUSH EBX                            ; 0043ca72 | g_CSpotViewInstance
    CALL shape_spotview.cpp_CSpotView_applyCamera_FUN_005b9a20 ; 0043ca73
        ;   XREF to: 005b9a20 (UNCONDITIONAL_CALL)  ; void shape_spotview.cpp_CSpotView_applyCamera_FUN_005b9a20(CSpotView * this_ptr)
    ADD ESP,0x4                         ; 0043ca78
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0043ca7b
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    MOV EAX,[0x00679398]                ; 0043ca80 | g_WindowHeight
    PUSH 0xf8                           ; 0043ca85
    DEC EAX                             ; 0043ca8a
    PUSH EAX                            ; 0043ca8b
    MOV EAX,[0x00679394]                ; 0043ca8c | g_WindowWidth
    DEC EAX                             ; 0043ca91
    PUSH EAX                            ; 0043ca92
    PUSH 0x0                            ; 0043ca93
    PUSH 0x0                            ; 0043ca95
    CALL engine_2d.c_fillRectColor_FUN_00403170 ; 0043ca97
        ;   XREF to: 00403170 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_00403170(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 0043ca9c
    CALL wincore_windll.cpp_clearZBufferNative_FUN_005b3ed4 ; 0043ca9f
        ;   XREF to: 005b3ed4 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearZBufferNative_FUN_005b3ed4()
    PUSH 0x838e40                       ; 0043caa4 | UNION_UVector3_00838e40
    MOV EDI,dword ptr [0x006703ec]      ; 0043caa9 | g_CDemonRendererPtr2
    PUSH EDI                            ; 0043caaf | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 0043cab0
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0043cab5
    PUSH 0x0                            ; 0043cab8
    PUSH 0x838e4c                       ; 0043caba | UNION_UVector3_00838e4c
    MOV EAX,[0x006703ec]                ; 0043cabf | g_CDemonRendererPtr2
    PUSH EAX                            ; 0043cac4 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 0043cac5
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 0043caca
    CMP dword ptr [EBP + -0x3c],0x0     ; 0043cacd
    NOP                                 ; 0043cad1
    NOP                                 ; 0043cad2
    NOP                                 ; 0043cad3
    NOP                                 ; 0043cad4
    JZ 0x0043caec                       ; 0043cad5
        ;   XREF to: 0043caec (CONDITIONAL_JUMP)  ; LAB_0043caec
    PUSH 0x0                            ; 0043cad7
    PUSH 0x1                            ; 0043cad9
    PUSH -0x1                           ; 0043cadb
    PUSH -0x1                           ; 0043cadd
    PUSH 0x838e58                       ; 0043cadf | g_CDeformableModelInstanceInstance
    CALL core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150 ; 0043cae4
        ;   XREF to: 005a0150 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150(CDeformableModelInstance * this_ptr, int lod_index, uint render_flags, int lighting_mode, ...)
    ADD ESP,0x14                        ; 0043cae9
    CMP dword ptr [EBP + -0x40],0x0     ; 0043caec
        ;   Label: LAB_0043caec
    NOP                                 ; 0043caf0
    NOP                                 ; 0043caf1
    NOP                                 ; 0043caf2
    NOP                                 ; 0043caf3
    JZ 0x0043cb01                       ; 0043caf4
        ;   XREF to: 0043cb01 (CONDITIONAL_JUMP)  ; LAB_0043cb01
    PUSH 0x0                            ; 0043caf6
    PUSH ESI                            ; 0043caf8
    CALL core_cloth.cpp_CCloth_render_FUN_0043bae0 ; 0043caf9
        ;   XREF to: 0043bae0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_render_FUN_0043bae0(CCloth * this_ptr, int use_joined_light)
    ADD ESP,0x8                         ; 0043cafe
    PUSH 0x3e                           ; 0043cb01
        ;   Label: LAB_0043cb01
    MOV EAX,[0x0067cf44]                ; 0043cb03 | g_CKeysPtr
    PUSH EAX                            ; 0043cb08 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0043cb09 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0043cb0b
    ADD ESP,0x8                         ; 0043cb0e
    TEST EAX,EAX                        ; 0043cb11
    JZ 0x0043cb42                       ; 0043cb13
        ;   XREF to: 0043cb42 (CONDITIONAL_JUMP)  ; LAB_0043cb42
    MOV EBX,dword ptr [0x0083b10c]      ; 0043cb15 | g_ClothBoneScreenshotCounter
    INC EBX                             ; 0043cb1b
    PUSH EBX                            ; 0043cb1c
    PUSH 0x618693                       ; 0043cb1d | = "noc%d.pcx"
    PUSH 0x83b110                       ; 0043cb22 | g_ClothBoneScreenshotFilename
    MOV dword ptr [0x0083b10c],EBX      ; 0043cb27 | g_ClothBoneScreenshotCounter
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0043cb2d
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0043cb32
    PUSH 0x83b110                       ; 0043cb35 | g_ClothBoneScreenshotFilename
    CALL engine_pcx.c_saveScreenshotGeneral_FUN_005490c0 ; 0043cb3a
        ;   XREF to: 005490c0 (UNCONDITIONAL_CALL)  ; void engine_pcx.c_saveScreenshotGeneral_FUN_005490c0(char * filename)
    ADD ESP,0x4                         ; 0043cb3f
    CMP dword ptr [EBP + -0x34],0x0     ; 0043cb42
        ;   Label: LAB_0043cb42
    NOP                                 ; 0043cb46
    NOP                                 ; 0043cb47
    NOP                                 ; 0043cb48
    NOP                                 ; 0043cb49
    JZ 0x0043cc04                       ; 0043cb4a
        ;   XREF to: 0043cc04 (CONDITIONAL_JUMP)  ; LAB_0043cc04
    MOV EDX,dword ptr [0x00678a60]      ; 0043cb50 | g_CEditorToolsPtr
    PUSH EDX                            ; 0043cb56 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330 ; 0043cb57
        ;   XREF to: 004a1330 (UNCONDITIONAL_CALL)  ; uint shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 0043cb5c
    MOV [0x02d02570],EAX                ; 0043cb5f | g_ActiveRenderColor
    XOR ECX,ECX                         ; 0043cb64
    MOV EBX,dword ptr [ESI + 0x3f028]   ; 0043cb66
    MOV dword ptr [EBP + -0x8],ECX      ; 0043cb6c
    NOP                                 ; 0043cb6f
    NOP                                 ; 0043cb70
    NOP                                 ; 0043cb71
    NOP                                 ; 0043cb72
    TEST EBX,EBX                        ; 0043cb73
    JLE 0x0043cc04                      ; 0043cb75
        ;   XREF to: 0043cc04 (CONDITIONAL_JUMP)  ; LAB_0043cc04
    MOV EDI,ESI                         ; 0043cb7b
    IMUL EAX,dword ptr [EDI + 0x3f02c],0x11c ; 0043cb7d
        ;   Label: LAB_0043cb7d
    MOV ECX,dword ptr [EBP + -0x24]     ; 0043cb87
    NOP                                 ; 0043cb8a
    NOP                                 ; 0043cb8b
    NOP                                 ; 0043cb8c
    NOP                                 ; 0043cb8d
    LEA EBX,[EBP + -0x64]               ; 0043cb8e
    NOP                                 ; 0043cb91
    NOP                                 ; 0043cb92
    NOP                                 ; 0043cb93
    NOP                                 ; 0043cb94
    ADD EAX,ECX                         ; 0043cb95
    MOV EDX,dword ptr [0x006703ec]      ; 0043cb97 | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 0043cb9d
    FMUL float ptr [0x0065bb3c]         ; 0043cb9f | FLOAT_0065bb3c
    FISTP dword ptr [EBX]               ; 0043cba5
    FLD float ptr [EAX + 0x4]           ; 0043cba7
    FMUL float ptr [0x0065bb3c]         ; 0043cbaa | FLOAT_0065bb3c
    FISTP dword ptr [EBX + 0x4]         ; 0043cbb0
    FLD float ptr [EAX + 0x8]           ; 0043cbb3
    FMUL float ptr [0x0065bb3c]         ; 0043cbb6 | FLOAT_0065bb3c
    FISTP dword ptr [EBX + 0x8]         ; 0043cbbc
    LEA EAX,[EBP + -0x64]               ; 0043cbbf
    NOP                                 ; 0043cbc2
    NOP                                 ; 0043cbc3
    NOP                                 ; 0043cbc4
    NOP                                 ; 0043cbc5
    PUSH EAX                            ; 0043cbc6
    MOV EAX,dword ptr [EDX]             ; 0043cbc7 | g_CDemonRendererInstance
    ADD EAX,0xea5d0                     ; 0043cbc9
    PUSH EAX                            ; 0043cbce
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 0043cbcf
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0043cbd4
    PUSH 0x4e1f                         ; 0043cbd7
    CALL core_cloth.cpp_drawVertexMarker_FUN_0043c6e0 ; 0043cbdc
        ;   XREF to: 0043c6e0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_drawVertexMarker_FUN_0043c6e0(int vert_index)
    ADD ESP,0x4                         ; 0043cbe1
    MOV EBX,dword ptr [EBP + -0x8]      ; 0043cbe4
    NOP                                 ; 0043cbe7
    NOP                                 ; 0043cbe8
    NOP                                 ; 0043cbe9
    NOP                                 ; 0043cbea
    ADD EDI,0x4                         ; 0043cbeb
    INC EBX                             ; 0043cbee
    MOV EDX,dword ptr [ESI + 0x3f028]   ; 0043cbef
    MOV dword ptr [EBP + -0x8],EBX      ; 0043cbf5
    NOP                                 ; 0043cbf8
    NOP                                 ; 0043cbf9
    NOP                                 ; 0043cbfa
    NOP                                 ; 0043cbfb
    CMP EBX,EDX                         ; 0043cbfc
    JL 0x0043cb7d                       ; 0043cbfe
        ;   XREF to: 0043cb7d (CONDITIONAL_JUMP)  ; LAB_0043cb7d
    CMP dword ptr [EBP + -0x18],0x0     ; 0043cc04
        ;   Label: LAB_0043cc04
    NOP                                 ; 0043cc08
    NOP                                 ; 0043cc09
    NOP                                 ; 0043cc0a
    NOP                                 ; 0043cc0b
    JLE 0x0043cc68                      ; 0043cc0c
        ;   XREF to: 0043cc68 (CONDITIONAL_JUMP)  ; LAB_0043cc68
    MOV EDI,dword ptr [ESI + 0x3ce8c]   ; 0043cc0e
    XOR EBX,EBX                         ; 0043cc14
    TEST EDI,EDI                        ; 0043cc16
    JLE 0x0043cc68                      ; 0043cc18
        ;   XREF to: 0043cc68 (CONDITIONAL_JUMP)  ; LAB_0043cc68
    CMP dword ptr [EBP + -0x18],0x2     ; 0043cc1a
        ;   Label: LAB_0043cc1a
    NOP                                 ; 0043cc1e
    NOP                                 ; 0043cc1f
    NOP                                 ; 0043cc20
    NOP                                 ; 0043cc21
    JNZ 0x0043d526                      ; 0043cc22
        ;   XREF to: 0043d526 (CONDITIONAL_JUMP)  ; LAB_0043d526
    CMP EBX,dword ptr [EBP + -0x14]     ; 0043cc28
    NOP                                 ; 0043cc2b
    NOP                                 ; 0043cc2c
    NOP                                 ; 0043cc2d
    NOP                                 ; 0043cc2e
    JNZ 0x0043d526                      ; 0043cc2f
        ;   XREF to: 0043d526 (CONDITIONAL_JUMP)  ; LAB_0043d526
    MOV EAX,[0x00678a60]                ; 0043cc35 | g_CEditorToolsPtr
    PUSH EAX                            ; 0043cc3a | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330 ; 0043cc3b
        ;   XREF to: 004a1330 (UNCONDITIONAL_CALL)  ; uint shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 0043cc40
    PUSH EAX                            ; 0043cc43
    MOV EDX,dword ptr [0x006703ec]      ; 0043cc44 | g_CDemonRendererPtr2
    PUSH EDX                            ; 0043cc4a | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960 ; 0043cc4b
        ;   XREF to: 0048c960 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960(CDemonRenderer * this_ptr, int color)
    ADD ESP,0x8                         ; 0043cc50
    PUSH 0x1                            ; 0043cc53
    PUSH EBX                            ; 0043cc55
        ;   Label: LAB_0043cc55
    PUSH ESI                            ; 0043cc56
    CALL core_cloth.cpp_CCloth_renderBone_FUN_0043b7e0 ; 0043cc57
        ;   XREF to: 0043b7e0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_renderBone_FUN_0043b7e0(CCloth * this_ptr, int bone_index, int show_labels)
    ADD ESP,0xc                         ; 0043cc5c
    INC EBX                             ; 0043cc5f
    CMP EBX,dword ptr [ESI + 0x3ce8c]   ; 0043cc60
    JL 0x0043cc1a                       ; 0043cc66
        ;   XREF to: 0043cc1a (CONDITIONAL_JUMP)  ; LAB_0043cc1a
    MOV ECX,dword ptr [0x006703ec]      ; 0043cc68 | g_CDemonRendererPtr2
        ;   Label: LAB_0043cc68
    PUSH ECX                            ; 0043cc6e | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640 ; 0043cc6f
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0043cc74
    FLD float ptr [0x00838e60]          ; 0043cc77 | g_CDeformableModelInstanceInstance.motion_controller.current_frame_number
    SUB ESP,0x8                         ; 0043cc7d
    MOV EBX,dword ptr [EBP + -0x10]     ; 0043cc80
    FSTP double ptr [EBP + 0xfffffab4]  ; 0043cc83
    NOP                                 ; 0043cc89
    PUSH EBX                            ; 0043cc8a
    PUSH 0x61869d                       ; 0043cc8b | = "Model motion : %s frame %f"
    LEA EAX,[EBP + 0xfffffe68]          ; 0043cc90
    NOP                                 ; 0043cc96
    PUSH EAX                            ; 0043cc97
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0043cc98
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x14                        ; 0043cc9d
    PUSH 0x0                            ; 0043cca0
    PUSH 0x0                            ; 0043cca2
    LEA EAX,[EBP + 0xfffffe68]          ; 0043cca4
    NOP                                 ; 0043ccaa
    PUSH EAX                            ; 0043ccab
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0043ccac
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0043ccb1
    MOV EAX,[0x0067cf44]                ; 0043ccb4 | g_CKeysPtr
    PUSH 0x32                           ; 0043ccb9
    MOV EDX,dword ptr [EAX]             ; 0043ccbb | g_CKeysInstance
    PUSH EAX                            ; 0043ccbd | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0043ccbe
    ADD ESP,0x8                         ; 0043ccc1
    TEST EAX,EAX                        ; 0043ccc4
    JZ 0x0043cd74                       ; 0043ccc6
        ;   XREF to: 0043cd74 (CONDITIONAL_JUMP)  ; LAB_0043cd74
    LEA EAX,[ESP + 0x4]                 ; 0043cccc
    PUSH EAX                            ; 0043ccd0
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 0043ccd1
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 0043ccd6
    MOV EDI,0xffffffff                  ; 0043ccd9
    MOV EAX,dword ptr [EBP + -0x20]     ; 0043ccde
    NOP                                 ; 0043cce1
    NOP                                 ; 0043cce2
    NOP                                 ; 0043cce3
    NOP                                 ; 0043cce4
    MOV dword ptr [EBP + -0x1c],EDI     ; 0043cce5
    NOP                                 ; 0043cce8
    NOP                                 ; 0043cce9
    NOP                                 ; 0043ccea
    NOP                                 ; 0043cceb
    MOV EDX,dword ptr [EAX + 0x964]     ; 0043ccec
    XOR EDI,EDI                         ; 0043ccf2
    TEST EDX,EDX                        ; 0043ccf4
    JLE 0x0043cd35                      ; 0043ccf6
        ;   XREF to: 0043cd35 (CONDITIONAL_JUMP)  ; LAB_0043cd35
    MOV EBX,dword ptr [EBP + -0x50]     ; 0043ccf8
    NOP                                 ; 0043ccfb
    NOP                                 ; 0043ccfc
    NOP                                 ; 0043ccfd
    NOP                                 ; 0043ccfe
    PUSH EBX                            ; 0043ccff
        ;   Label: LAB_0043ccff
    LEA EAX,[ESP + 0x8]                 ; 0043cd00
    PUSH EAX                            ; 0043cd04
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0043cd05
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0043cd0a
    CMP EBX,dword ptr [EBP + -0x10]     ; 0043cd0d
    NOP                                 ; 0043cd10
    NOP                                 ; 0043cd11
    NOP                                 ; 0043cd12
    NOP                                 ; 0043cd13
    JNZ 0x0043cd1d                      ; 0043cd14
        ;   XREF to: 0043cd1d (CONDITIONAL_JUMP)  ; LAB_0043cd1d
    MOV dword ptr [EBP + -0x1c],EDI     ; 0043cd16
    NOP                                 ; 0043cd19
    NOP                                 ; 0043cd1a
    NOP                                 ; 0043cd1b
    NOP                                 ; 0043cd1c
    MOV EAX,dword ptr [EBP + -0x20]     ; 0043cd1d
        ;   Label: LAB_0043cd1d
    NOP                                 ; 0043cd20
    NOP                                 ; 0043cd21
    NOP                                 ; 0043cd22
    NOP                                 ; 0043cd23
    INC EDI                             ; 0043cd24
    MOV ECX,dword ptr [EAX + 0x964]     ; 0043cd25
    ADD EBX,0x54c                       ; 0043cd2b
    CMP EDI,ECX                         ; 0043cd31
    JL 0x0043ccff                       ; 0043cd33
        ;   XREF to: 0043ccff (CONDITIONAL_JUMP)  ; LAB_0043ccff
    PUSH 0x0                            ; 0043cd35
        ;   Label: LAB_0043cd35
    MOV EBX,dword ptr [EBP + -0x1c]     ; 0043cd37
    NOP                                 ; 0043cd3a
    NOP                                 ; 0043cd3b
    NOP                                 ; 0043cd3c
    NOP                                 ; 0043cd3d
    PUSH EBX                            ; 0043cd3e
    PUSH 0x6186b8                       ; 0043cd3f | = "Select motion"
    LEA EAX,[ESP + 0x10]                ; 0043cd44
    PUSH EAX                            ; 0043cd48
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 0043cd49
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 0043cd4e
    TEST EAX,EAX                        ; 0043cd51
    JL 0x0043cd65                       ; 0043cd53
        ;   XREF to: 0043cd65 (CONDITIONAL_JUMP)  ; LAB_0043cd65
    PUSH 0x0                            ; 0043cd55
    PUSH EAX                            ; 0043cd57
    PUSH 0x838e58                       ; 0043cd58 | g_CDeformableModelInstanceInstance
    CALL core_motion.cpp_CMotionController_jumpToMotion_FUN_0052dde0 ; 0043cd5d
        ;   XREF to: 0052dde0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotion_FUN_0052dde0(CMotionController * this_ptr, int target_motion_index, float target_frame_number)
    ADD ESP,0xc                         ; 0043cd62
    PUSH 0x0                            ; 0043cd65
        ;   Label: LAB_0043cd65
    LEA EAX,[ESP + 0x8]                 ; 0043cd67
    PUSH EAX                            ; 0043cd6b
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0043cd6c
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0043cd71
    PUSH 0x13                           ; 0043cd74
        ;   Label: LAB_0043cd74
    MOV EAX,[0x0067cf44]                ; 0043cd76 | g_CKeysPtr
    PUSH EAX                            ; 0043cd7b | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0043cd7c | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0043cd7e
    ADD ESP,0x8                         ; 0043cd81
    TEST EAX,EAX                        ; 0043cd84
    JZ 0x0043cd99                       ; 0043cd86
        ;   XREF to: 0043cd99 (CONDITIONAL_JUMP)  ; LAB_0043cd99
    PUSH 0x1f                           ; 0043cd88
    MOV EDX,dword ptr [0x0068416c]      ; 0043cd8a | g_CSpotViewPtr
    PUSH EDX                            ; 0043cd90 | g_CSpotViewInstance
    CALL shape_spotview.cpp_CSpotView_reset_FUN_005b9620 ; 0043cd91
        ;   XREF to: 005b9620 (UNCONDITIONAL_CALL)  ; void shape_spotview.cpp_CSpotView_reset_FUN_005b9620(CSpotView * this_ptr, uint control_flags)
    ADD ESP,0x8                         ; 0043cd96
    FLD float ptr [ESP]                 ; 0043cd99
        ;   Label: LAB_0043cd99
    FLD1                                ; 0043cd9c
    FDIVRP                              ; 0043cd9e
    SUB ESP,0x8                         ; 0043cda0
    FSTP double ptr [ESP]               ; 0043cda3
    PUSH 0x6186c6                       ; 0043cda6 | = "%f"
    LEA EAX,[EBP + 0xfffffe68]          ; 0043cdab
    NOP                                 ; 0043cdb1
    PUSH EAX                            ; 0043cdb2
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0043cdb3
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EAX,[0x00679398]                ; 0043cdb8 | g_WindowHeight
    ADD ESP,0x10                        ; 0043cdbd
    SUB EAX,0xd                         ; 0043cdc0
    PUSH EAX                            ; 0043cdc3
    MOV EAX,[0x00679394]                ; 0043cdc4 | g_WindowWidth
    SUB EAX,0x2                         ; 0043cdc9
    PUSH EAX                            ; 0043cdcc
    LEA EAX,[EBP + 0xfffffe68]          ; 0043cdcd
    NOP                                 ; 0043cdd3
    PUSH EAX                            ; 0043cdd4
    CALL engine_2d.c_drawTextRightAligned_FUN_004021c0 ; 0043cdd5
        ;   XREF to: 004021c0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextRightAligned_FUN_004021c0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0043cdda
    PUSH 0x16                           ; 0043cddd
    PUSH 0x0                            ; 0043cddf
    PUSH 0x6186c9                       ; 0043cde1 | = "1. Toggle bone drawing/editing"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0043cde6
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0043cdeb
    PUSH 0x21                           ; 0043cdee
    PUSH 0x0                            ; 0043cdf0
    PUSH 0x6186e8                       ; 0043cdf2 | = "2. Add bone"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0043cdf7
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0043cdfc
    PUSH 0x37                           ; 0043cdff
    PUSH 0x0                            ; 0043ce01
    PUSH 0x6186f4                       ; 0043ce03 | = "C. Toggle cloth render"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0043ce08
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0043ce0d
    PUSH 0x42                           ; 0043ce10
    PUSH 0x0                            ; 0043ce12
    PUSH 0x61870b                       ; 0043ce14 | = "S. Toggle skeleton render"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0043ce19
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0043ce1e
    PUSH 0x4d                           ; 0043ce21
    PUSH 0x0                            ; 0043ce23
    PUSH 0x618725                       ; 0043ce25 | = "P. Pause/unpause animation"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0043ce2a
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0043ce2f
    PUSH 0x58                           ; 0043ce32
    PUSH 0x0                            ; 0043ce34
    PUSH 0x618740                       ; 0043ce36 | = "H. Home pose toggle"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0043ce3b
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0043ce40
    PUSH 0x63                           ; 0043ce43
    PUSH 0x0                            ; 0043ce45
    PUSH 0x618754                       ; 0043ce47 | = "L. Toggle locked vertices"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0043ce4c
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0043ce51
    PUSH 0x6e                           ; 0043ce54
    PUSH 0x0                            ; 0043ce56
    PUSH 0x61876e                       ; 0043ce58 | = "Z. Restart cloth"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0043ce5d
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0043ce62
    PUSH 0x79                           ; 0043ce65
    PUSH 0x0                            ; 0043ce67
    PUSH 0x61877f                       ; 0043ce69 | = "M. Select motion"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0043ce6e
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0043ce73
    MOV EAX,[0x0067cf44]                ; 0043ce76 | g_CKeysPtr
    PUSH 0x2                            ; 0043ce7b
    MOV EDX,dword ptr [EAX]             ; 0043ce7d | g_CKeysInstance
    PUSH EAX                            ; 0043ce7f | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0043ce80
    ADD ESP,0x8                         ; 0043ce83
    TEST EAX,EAX                        ; 0043ce86
    JZ 0x0043cea7                       ; 0043ce88
        ;   XREF to: 0043cea7 (CONDITIONAL_JUMP)  ; LAB_0043cea7
    MOV ECX,dword ptr [EBP + -0x18]     ; 0043ce8a
    NOP                                 ; 0043ce8d
    NOP                                 ; 0043ce8e
    NOP                                 ; 0043ce8f
    NOP                                 ; 0043ce90
    INC ECX                             ; 0043ce91
    MOV dword ptr [EBP + -0x18],ECX     ; 0043ce92
    NOP                                 ; 0043ce95
    NOP                                 ; 0043ce96
    NOP                                 ; 0043ce97
    NOP                                 ; 0043ce98
    CMP ECX,0x2                         ; 0043ce99
    JLE 0x0043cea7                      ; 0043ce9c
        ;   XREF to: 0043cea7 (CONDITIONAL_JUMP)  ; LAB_0043cea7
    XOR EDI,EDI                         ; 0043ce9e
    MOV dword ptr [EBP + -0x18],EDI     ; 0043cea0
    NOP                                 ; 0043cea3
    NOP                                 ; 0043cea4
    NOP                                 ; 0043cea5
    NOP                                 ; 0043cea6
    PUSH 0x3                            ; 0043cea7
        ;   Label: LAB_0043cea7
    MOV EAX,[0x0067cf44]                ; 0043cea9 | g_CKeysPtr
    PUSH EAX                            ; 0043ceae | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0043ceaf | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0043ceb1
    ADD ESP,0x8                         ; 0043ceb4
    TEST EAX,EAX                        ; 0043ceb7
    JZ 0x0043ced2                       ; 0043ceb9
        ;   XREF to: 0043ced2 (CONDITIONAL_JUMP)  ; LAB_0043ced2
    PUSH ESI                            ; 0043cebb
    CALL core_cloth.cpp_CCloth_addCollisionBone_FUN_0043c430 ; 0043cebc
        ;   XREF to: 0043c430 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_addCollisionBone_FUN_0043c430(CCloth * this_ptr)
    MOV EAX,dword ptr [ESI + 0x3ce8c]   ; 0043cec1
    ADD ESP,0x4                         ; 0043cec7
    DEC EAX                             ; 0043ceca
    MOV dword ptr [EBP + -0x14],EAX     ; 0043cecb
    NOP                                 ; 0043cece
    NOP                                 ; 0043cecf
    NOP                                 ; 0043ced0
    NOP                                 ; 0043ced1
    PUSH 0x23                           ; 0043ced2
        ;   Label: LAB_0043ced2
    MOV EAX,[0x0067cf44]                ; 0043ced4 | g_CKeysPtr
    PUSH EAX                            ; 0043ced9 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0043ceda | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0043cedc
    ADD ESP,0x8                         ; 0043cedf
    TEST EAX,EAX                        ; 0043cee2
    JZ 0x0043cefb                       ; 0043cee4
        ;   XREF to: 0043cefb (CONDITIONAL_JUMP)  ; LAB_0043cefb
    MOV EAX,0x1                         ; 0043cee6
    MOV EDX,dword ptr [EBP + -0x2c]     ; 0043ceeb
    NOP                                 ; 0043ceee
    NOP                                 ; 0043ceef
    NOP                                 ; 0043cef0
    NOP                                 ; 0043cef1
    SUB EAX,EDX                         ; 0043cef2
    MOV dword ptr [EBP + -0x2c],EAX     ; 0043cef4
    NOP                                 ; 0043cef7
    NOP                                 ; 0043cef8
    NOP                                 ; 0043cef9
    NOP                                 ; 0043cefa
    PUSH 0x2e                           ; 0043cefb
        ;   Label: LAB_0043cefb
    MOV EAX,[0x0067cf44]                ; 0043cefd | g_CKeysPtr
    PUSH EAX                            ; 0043cf02 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0043cf03 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0043cf05
    ADD ESP,0x8                         ; 0043cf08
    TEST EAX,EAX                        ; 0043cf0b
    JZ 0x0043cf26                       ; 0043cf0d
        ;   XREF to: 0043cf26 (CONDITIONAL_JUMP)  ; LAB_0043cf26
    CMP dword ptr [EBP + -0x40],0x0     ; 0043cf0f
    NOP                                 ; 0043cf13
    NOP                                 ; 0043cf14
    NOP                                 ; 0043cf15
    NOP                                 ; 0043cf16
    SETZ AL                             ; 0043cf17
    AND EAX,0xff                        ; 0043cf1a
    MOV dword ptr [EBP + -0x40],EAX     ; 0043cf1f
    NOP                                 ; 0043cf22
    NOP                                 ; 0043cf23
    NOP                                 ; 0043cf24
    NOP                                 ; 0043cf25
    PUSH 0x1f                           ; 0043cf26
        ;   Label: LAB_0043cf26
    MOV EAX,[0x0067cf44]                ; 0043cf28 | g_CKeysPtr
    PUSH EAX                            ; 0043cf2d | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0043cf2e | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0043cf30
    ADD ESP,0x8                         ; 0043cf33
    TEST EAX,EAX                        ; 0043cf36
    JZ 0x0043cf51                       ; 0043cf38
        ;   XREF to: 0043cf51 (CONDITIONAL_JUMP)  ; LAB_0043cf51
    CMP dword ptr [EBP + -0x3c],0x0     ; 0043cf3a
    NOP                                 ; 0043cf3e
    NOP                                 ; 0043cf3f
    NOP                                 ; 0043cf40
    NOP                                 ; 0043cf41
    SETZ AL                             ; 0043cf42
    AND EAX,0xff                        ; 0043cf45
    MOV dword ptr [EBP + -0x3c],EAX     ; 0043cf4a
    NOP                                 ; 0043cf4d
    NOP                                 ; 0043cf4e
    NOP                                 ; 0043cf4f
    NOP                                 ; 0043cf50
    PUSH 0x19                           ; 0043cf51
        ;   Label: LAB_0043cf51
    MOV EAX,[0x0067cf44]                ; 0043cf53 | g_CKeysPtr
    PUSH EAX                            ; 0043cf58 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0043cf59 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0043cf5b
    ADD ESP,0x8                         ; 0043cf5e
    TEST EAX,EAX                        ; 0043cf61
    JZ 0x0043cf7c                       ; 0043cf63
        ;   XREF to: 0043cf7c (CONDITIONAL_JUMP)  ; LAB_0043cf7c
    CMP dword ptr [EBP + -0x38],0x0     ; 0043cf65
    NOP                                 ; 0043cf69
    NOP                                 ; 0043cf6a
    NOP                                 ; 0043cf6b
    NOP                                 ; 0043cf6c
    SETZ AL                             ; 0043cf6d
    AND EAX,0xff                        ; 0043cf70
    MOV dword ptr [EBP + -0x38],EAX     ; 0043cf75
    NOP                                 ; 0043cf78
    NOP                                 ; 0043cf79
    NOP                                 ; 0043cf7a
    NOP                                 ; 0043cf7b
    PUSH 0x26                           ; 0043cf7c
        ;   Label: LAB_0043cf7c
    MOV EAX,[0x0067cf44]                ; 0043cf7e | g_CKeysPtr
    PUSH EAX                            ; 0043cf83 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0043cf84 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0043cf86
    ADD ESP,0x8                         ; 0043cf89
    TEST EAX,EAX                        ; 0043cf8c
    JZ 0x0043cfa7                       ; 0043cf8e
        ;   XREF to: 0043cfa7 (CONDITIONAL_JUMP)  ; LAB_0043cfa7
    CMP dword ptr [EBP + -0x34],0x0     ; 0043cf90
    NOP                                 ; 0043cf94
    NOP                                 ; 0043cf95
    NOP                                 ; 0043cf96
    NOP                                 ; 0043cf97
    SETZ AL                             ; 0043cf98
    AND EAX,0xff                        ; 0043cf9b
    MOV dword ptr [EBP + -0x34],EAX     ; 0043cfa0
    NOP                                 ; 0043cfa3
    NOP                                 ; 0043cfa4
    NOP                                 ; 0043cfa5
    NOP                                 ; 0043cfa6
    CMP dword ptr [EBP + -0x18],0x2     ; 0043cfa7
        ;   Label: LAB_0043cfa7
    NOP                                 ; 0043cfab
    NOP                                 ; 0043cfac
    NOP                                 ; 0043cfad
    NOP                                 ; 0043cfae
    JNZ 0x0043d562                      ; 0043cfaf
        ;   XREF to: 0043d562 (CONDITIONAL_JUMP)  ; LAB_0043d562
    MOV EBX,dword ptr [EBP + -0x14]     ; 0043cfb5
    NOP                                 ; 0043cfb8
    NOP                                 ; 0043cfb9
    NOP                                 ; 0043cfba
    NOP                                 ; 0043cfbb
    TEST EBX,EBX                        ; 0043cfbc
    JL 0x0043d562                       ; 0043cfbe
        ;   XREF to: 0043d562 (CONDITIONAL_JUMP)  ; LAB_0043d562
    CMP EBX,dword ptr [ESI + 0x3ce8c]   ; 0043cfc4
    JGE 0x0043d562                      ; 0043cfca
        ;   XREF to: 0043d562 (CONDITIONAL_JUMP)  ; LAB_0043d562
    MOV EDI,EBX                         ; 0043cfd0
    IMUL EBX,EBX,0xac                   ; 0043cfd2
    PUSH 0x8f                           ; 0043cfd8
    PUSH 0x0                            ; 0043cfdd
    PUSH 0x618790                       ; 0043cfdf | = "Cylinder edit keys:"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0043cfe4
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0043cfe9
    PUSH 0x9a                           ; 0043cfec
    PUSH 0x0                            ; 0043cff1
    PUSH 0x6187a4                       ; 0043cff3 | = "D. Delete cylinder"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0043cff8
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0043cffd
    PUSH 0xa5                           ; 0043d000
    PUSH 0x0                            ; 0043d005
    PUSH 0x6187b7                       ; 0043d007 | = "X. Adjust x radius"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0043d00c
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0043d011
    PUSH 0xb0                           ; 0043d014
    PUSH 0x0                            ; 0043d019
    PUSH 0x6187ca                       ; 0043d01b | = "Y. Adjust y radius"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0043d020
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0043d025
    PUSH 0xbb                           ; 0043d028
    PUSH 0x0                            ; 0043d02d
    PUSH 0x6187dd                       ; 0043d02f | = "O. Cylinder length override"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0043d034
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0043d039
    PUSH 0xc6                           ; 0043d03c
    PUSH 0x0                            ; 0043d041
    PUSH 0x6187f9                       ; 0043d043 | = "Use TAB/Shift-TAB to select cylinder"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0043d048
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0043d04d
    PUSH 0xd1                           ; 0043d050
    PUSH 0x0                            ; 0043d055
    PUSH 0x61881e                       ; 0043d057 | = "Use CTRL to slew cylinder"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0043d05c
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0043d061
    ADD EBX,dword ptr [EBP + -0x30]     ; 0043d064
    NOP                                 ; 0043d067
    NOP                                 ; 0043d068
    NOP                                 ; 0043d069
    NOP                                 ; 0043d06a
    PUSH EBX                            ; 0043d06b
    PUSH EDI                            ; 0043d06c
    PUSH 0x618838                       ; 0043d06d | = "Editing cylinder %d, on bone %s"
    LEA EAX,[EBP + 0xfffffe68]          ; 0043d072
    NOP                                 ; 0043d078
    PUSH EAX                            ; 0043d079
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0043d07a
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EAX,[0x00679398]                ; 0043d07f | g_WindowHeight
    ADD ESP,0x10                        ; 0043d084
    SUB EAX,0x16                        ; 0043d087
    PUSH EAX                            ; 0043d08a
    PUSH 0x0                            ; 0043d08b
    LEA EAX,[EBP + 0xfffffe68]          ; 0043d08d
    NOP                                 ; 0043d093
    PUSH EAX                            ; 0043d094
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0043d095
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0043d09a
    MOV EAX,[0x0067cf44]                ; 0043d09d | g_CKeysPtr
    PUSH 0x1d                           ; 0043d0a2
    MOV EDX,dword ptr [EAX]             ; 0043d0a4 | g_CKeysInstance
    PUSH EAX                            ; 0043d0a6 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 0043d0a7
    ADD ESP,0x8                         ; 0043d0a9
    TEST EAX,EAX                        ; 0043d0ac
    JZ 0x0043d541                       ; 0043d0ae
        ;   XREF to: 0043d541 (CONDITIONAL_JUMP)  ; LAB_0043d541
    LEA EAX,[EBP + 0xffffff68]          ; 0043d0b4
    NOP                                 ; 0043d0ba
    PUSH EAX                            ; 0043d0bb
    CALL core_slew.cpp_CSlew_init_FUN_005a2060 ; 0043d0bc
        ;   XREF to: 005a2060 (UNCONDITIONAL_CALL)  ; void core_slew.cpp_CSlew_init_FUN_005a2060(CSlew * this_ptr)
    LEA EAX,[EBX + 0x1c]                ; 0043d0c1
    FLD float ptr [0x006188ba]          ; 0043d0c4 | FLOAT_006188ba
    FLD float ptr [EAX]                 ; 0043d0ca
    FMUL ST1                            ; 0043d0cc
    ADD ESP,0x4                         ; 0043d0ce
    FSTP float ptr [EBP + -0x70]        ; 0043d0d1
    NOP                                 ; 0043d0d4
    NOP                                 ; 0043d0d5
    NOP                                 ; 0043d0d6
    NOP                                 ; 0043d0d7
    FLD float ptr [EAX + 0x4]           ; 0043d0d8
    FMUL ST1                            ; 0043d0db
    MOV EDX,0x41200000                  ; 0043d0dd
    FSTP float ptr [EBP + -0x6c]        ; 0043d0e2
    NOP                                 ; 0043d0e5
    NOP                                 ; 0043d0e6
    NOP                                 ; 0043d0e7
    NOP                                 ; 0043d0e8
    FMUL float ptr [EAX + 0x8]          ; 0043d0e9
    MOV dword ptr [EBP + -0x48],EDX     ; 0043d0ec
    NOP                                 ; 0043d0ef
    NOP                                 ; 0043d0f0
    NOP                                 ; 0043d0f1
    NOP                                 ; 0043d0f2
    LEA EDX,[EBP + 0xffffff68]          ; 0043d0f3
    NOP                                 ; 0043d0f9
    LEA EAX,[EBP + -0x70]               ; 0043d0fa
    NOP                                 ; 0043d0fd
    NOP                                 ; 0043d0fe
    NOP                                 ; 0043d0ff
    NOP                                 ; 0043d100
    FSTP float ptr [EBP + -0x68]        ; 0043d101
    NOP                                 ; 0043d104
    NOP                                 ; 0043d105
    NOP                                 ; 0043d106
    NOP                                 ; 0043d107
    CMP EDX,EAX                         ; 0043d108
    JZ 0x0043d136                       ; 0043d10a
        ;   XREF to: 0043d136 (CONDITIONAL_JUMP)  ; LAB_0043d136
    MOV EAX,dword ptr [EBP + -0x70]     ; 0043d10c
    NOP                                 ; 0043d10f
    NOP                                 ; 0043d110
    NOP                                 ; 0043d111
    NOP                                 ; 0043d112
    MOV dword ptr [EBP + 0xffffff68],EAX ; 0043d113
    NOP                                 ; 0043d119
    MOV EAX,dword ptr [EBP + -0x6c]     ; 0043d11a
    NOP                                 ; 0043d11d
    NOP                                 ; 0043d11e
    NOP                                 ; 0043d11f
    NOP                                 ; 0043d120
    MOV dword ptr [EBP + 0xffffff6c],EAX ; 0043d121
    NOP                                 ; 0043d127
    MOV EAX,dword ptr [EBP + -0x68]     ; 0043d128
    NOP                                 ; 0043d12b
    NOP                                 ; 0043d12c
    NOP                                 ; 0043d12d
    NOP                                 ; 0043d12e
    MOV dword ptr [EBP + 0xffffff70],EAX ; 0043d12f
    NOP                                 ; 0043d135
    LEA EAX,[EBP + 0xffffff74]          ; 0043d136
        ;   Label: LAB_0043d136
    NOP                                 ; 0043d13c
    LEA EDX,[EBX + 0x28]                ; 0043d13d
    CMP EAX,EDX                         ; 0043d140
    JZ 0x0043d161                       ; 0043d142
        ;   XREF to: 0043d161 (CONDITIONAL_JUMP)  ; LAB_0043d161
    MOV EAX,dword ptr [EDX]             ; 0043d144
    MOV dword ptr [EBP + 0xffffff74],EAX ; 0043d146
    NOP                                 ; 0043d14c
    MOV EAX,dword ptr [EDX + 0x4]       ; 0043d14d
    MOV dword ptr [EBP + 0xffffff78],EAX ; 0043d150
    NOP                                 ; 0043d156
    MOV EAX,dword ptr [EDX + 0x8]       ; 0043d157
    MOV dword ptr [EBP + 0xffffff7c],EAX ; 0043d15a
    NOP                                 ; 0043d160
    LEA EAX,[EBP + 0xffffff68]          ; 0043d161
        ;   Label: LAB_0043d161
    NOP                                 ; 0043d167
    PUSH EAX                            ; 0043d168
    CALL core_slew.cpp_CSlew_processInput_FUN_005a20b0 ; 0043d169
        ;   XREF to: 005a20b0 (UNCONDITIONAL_CALL)  ; void core_slew.cpp_CSlew_processInput_FUN_005a20b0(CSlew * this_ptr)
    ADD ESP,0x4                         ; 0043d16e
    FLD1                                ; 0043d171
    FLD float ptr [EBP + 0xffffff68]    ; 0043d173
    NOP                                 ; 0043d179
    FXCH                                ; 0043d17a
    FDIV float ptr [EBP + -0x48]        ; 0043d17c
    NOP                                 ; 0043d17f
    NOP                                 ; 0043d180
    NOP                                 ; 0043d181
    NOP                                 ; 0043d182
    FXCH                                ; 0043d183
    FMUL ST1                            ; 0043d185
    FLD float ptr [EBP + 0xffffff6c]    ; 0043d187
    NOP                                 ; 0043d18d
    FMUL ST2                            ; 0043d18e
    FLD float ptr [EBP + 0xffffff70]    ; 0043d190
    NOP                                 ; 0043d196
    FMULP ST3                           ; 0043d197
    LEA EAX,[EBP + -0x7c]               ; 0043d199
    NOP                                 ; 0043d19c
    NOP                                 ; 0043d19d
    NOP                                 ; 0043d19e
    NOP                                 ; 0043d19f
    LEA EDX,[EBX + 0x1c]                ; 0043d1a0
    FXCH                                ; 0043d1a3
    FSTP float ptr [EBP + -0x7c]        ; 0043d1a5
    NOP                                 ; 0043d1a8
    NOP                                 ; 0043d1a9
    NOP                                 ; 0043d1aa
    NOP                                 ; 0043d1ab
    FSTP float ptr [EBP + -0x78]        ; 0043d1ac
    NOP                                 ; 0043d1af
    NOP                                 ; 0043d1b0
    NOP                                 ; 0043d1b1
    NOP                                 ; 0043d1b2
    FSTP float ptr [EBP + -0x74]        ; 0043d1b3
    NOP                                 ; 0043d1b6
    NOP                                 ; 0043d1b7
    NOP                                 ; 0043d1b8
    NOP                                 ; 0043d1b9
    CMP EDX,EAX                         ; 0043d1ba
    JZ 0x0043d1db                       ; 0043d1bc
        ;   XREF to: 0043d1db (CONDITIONAL_JUMP)  ; LAB_0043d1db
    MOV EAX,dword ptr [EBP + -0x7c]     ; 0043d1be
    NOP                                 ; 0043d1c1
    NOP                                 ; 0043d1c2
    NOP                                 ; 0043d1c3
    NOP                                 ; 0043d1c4
    MOV dword ptr [EDX],EAX             ; 0043d1c5
    MOV EAX,dword ptr [EBP + -0x78]     ; 0043d1c7
    NOP                                 ; 0043d1ca
    NOP                                 ; 0043d1cb
    NOP                                 ; 0043d1cc
    NOP                                 ; 0043d1cd
    MOV dword ptr [EDX + 0x4],EAX       ; 0043d1ce
    MOV EAX,dword ptr [EBP + -0x74]     ; 0043d1d1
    NOP                                 ; 0043d1d4
    NOP                                 ; 0043d1d5
    NOP                                 ; 0043d1d6
    NOP                                 ; 0043d1d7
    MOV dword ptr [EDX + 0x8],EAX       ; 0043d1d8
    LEA EAX,[EBP + 0xffffff74]          ; 0043d1db
        ;   Label: LAB_0043d1db
    NOP                                 ; 0043d1e1
    LEA EDX,[EBX + 0x28]                ; 0043d1e2
    CMP EDX,EAX                         ; 0043d1e5
    JZ 0x0043d206                       ; 0043d1e7
        ;   XREF to: 0043d206 (CONDITIONAL_JUMP)  ; LAB_0043d206
    MOV EAX,dword ptr [EBP + 0xffffff74] ; 0043d1e9
    NOP                                 ; 0043d1ef
    MOV dword ptr [EDX],EAX             ; 0043d1f0
    MOV EAX,dword ptr [EBP + 0xffffff78] ; 0043d1f2
    NOP                                 ; 0043d1f8
    MOV dword ptr [EDX + 0x4],EAX       ; 0043d1f9
    MOV EAX,dword ptr [EBP + 0xffffff7c] ; 0043d1fc
    NOP                                 ; 0043d202
    MOV dword ptr [EDX + 0x8],EAX       ; 0043d203
    PUSH 0x20                           ; 0043d206
        ;   Label: LAB_0043d206
    MOV EAX,[0x0067cf44]                ; 0043d208 | g_CKeysPtr
    PUSH EAX                            ; 0043d20d | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0043d20e | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0043d210
    ADD ESP,0x8                         ; 0043d213
    TEST EAX,EAX                        ; 0043d216
    JZ 0x0043d275                       ; 0043d218
        ;   XREF to: 0043d275 (CONDITIONAL_JUMP)  ; LAB_0043d275
    PUSH 0x618858                       ; 0043d21a | = "Delete this bone?"
    MOV ECX,dword ptr [0x00678a60]      ; 0043d21f | g_CEditorToolsPtr
    PUSH ECX                            ; 0043d225 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showYesNoDialog1_FUN_0049f060 ; 0043d226
        ;   XREF to: 0049f060 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showYesNoDialog1_FUN_0049f060(CEditorTools * this_ptr, char * format_string)
    ADD ESP,0x8                         ; 0043d22b
    TEST EAX,EAX                        ; 0043d22e
    JZ 0x0043d275                       ; 0043d230
        ;   XREF to: 0043d275 (CONDITIONAL_JUMP)  ; LAB_0043d275
    MOV EDI,dword ptr [ESI + 0x3ce8c]   ; 0043d232
    DEC EDI                             ; 0043d238
    MOV EDX,dword ptr [EBP + -0x14]     ; 0043d239
    NOP                                 ; 0043d23c
    NOP                                 ; 0043d23d
    NOP                                 ; 0043d23e
    NOP                                 ; 0043d23f
    MOV EAX,EDI                         ; 0043d240
    SUB EAX,EDX                         ; 0043d242
    IMUL EAX,EAX,0xac                   ; 0043d244
    PUSH EAX                            ; 0043d24a
    LEA EAX,[EDX + 0x1]                 ; 0043d24b
    IMUL EAX,EAX,0xac                   ; 0043d24e
    MOV ECX,dword ptr [EBP + -0x30]     ; 0043d254
    NOP                                 ; 0043d257
    NOP                                 ; 0043d258
    NOP                                 ; 0043d259
    NOP                                 ; 0043d25a
    ADD EAX,ECX                         ; 0043d25b
    PUSH EAX                            ; 0043d25d
    IMUL EAX,EDX,0xac                   ; 0043d25e
    ADD EAX,ECX                         ; 0043d264
    PUSH EAX                            ; 0043d266
    MOV dword ptr [ESI + 0x3ce8c],EDI   ; 0043d267
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 0043d26d
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0043d272
    PUSH 0x2d                           ; 0043d275
        ;   Label: LAB_0043d275
    MOV EAX,[0x0067cf44]                ; 0043d277 | g_CKeysPtr
    PUSH EAX                            ; 0043d27c | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0043d27d | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0043d27f
    ADD ESP,0x8                         ; 0043d282
    TEST EAX,EAX                        ; 0043d285
    JZ 0x0043d2ac                       ; 0043d287
        ;   XREF to: 0043d2ac (CONDITIONAL_JUMP)  ; LAB_0043d2ac
    PUSH 0x1                            ; 0043d289
    PUSH 0x461c3c00                     ; 0043d28b
    PUSH 0x0                            ; 0043d290
    PUSH 0x1                            ; 0043d292
    LEA EAX,[EBX + 0x14]                ; 0043d294
    PUSH EAX                            ; 0043d297
    PUSH 0x61886a                       ; 0043d298 | = "Enter X radius"
    MOV ECX,dword ptr [0x00678a60]      ; 0043d29d | g_CEditorToolsPtr
    PUSH ECX                            ; 0043d2a3 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0 ; 0043d2a4
        ;   XREF to: 004a00f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0(CEditorTools * this_ptr, char * prompt_text, float * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 0043d2a9
    PUSH 0x15                           ; 0043d2ac
        ;   Label: LAB_0043d2ac
    MOV EAX,[0x0067cf44]                ; 0043d2ae | g_CKeysPtr
    PUSH EAX                            ; 0043d2b3 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0043d2b4 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0043d2b6
    ADD ESP,0x8                         ; 0043d2b9
    TEST EAX,EAX                        ; 0043d2bc
    JZ 0x0043d2e3                       ; 0043d2be
        ;   XREF to: 0043d2e3 (CONDITIONAL_JUMP)  ; LAB_0043d2e3
    PUSH 0x1                            ; 0043d2c0
    PUSH 0x461c3c00                     ; 0043d2c2
    PUSH 0x0                            ; 0043d2c7
    PUSH 0x1                            ; 0043d2c9
    LEA EAX,[EBX + 0x18]                ; 0043d2cb
    PUSH EAX                            ; 0043d2ce
    PUSH 0x618879                       ; 0043d2cf | = "Enter Y radius"
    MOV EDI,dword ptr [0x00678a60]      ; 0043d2d4 | g_CEditorToolsPtr
    PUSH EDI                            ; 0043d2da | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0 ; 0043d2db
        ;   XREF to: 004a00f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0(CEditorTools * this_ptr, char * prompt_text, float * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 0043d2e0
    PUSH 0x18                           ; 0043d2e3
        ;   Label: LAB_0043d2e3
    MOV EAX,[0x0067cf44]                ; 0043d2e5 | g_CKeysPtr
    PUSH EAX                            ; 0043d2ea | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0043d2eb | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0043d2ed
    ADD ESP,0x8                         ; 0043d2f0
    TEST EAX,EAX                        ; 0043d2f3
    JZ 0x0043d319                       ; 0043d2f5
        ;   XREF to: 0043d319 (CONDITIONAL_JUMP)  ; LAB_0043d319
    PUSH 0x1                            ; 0043d2f7
    PUSH 0x461c3c00                     ; 0043d2f9
    PUSH 0x0                            ; 0043d2fe
    PUSH 0x1                            ; 0043d300
    ADD EBX,0x34                        ; 0043d302
    PUSH EBX                            ; 0043d305
    PUSH 0x618888                       ; 0043d306 | = "Enter cylinder length, 0 to use lengt..."
    MOV EAX,[0x00678a60]                ; 0043d30b | g_CEditorToolsPtr
    PUSH EAX                            ; 0043d310 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0 ; 0043d311
        ;   XREF to: 004a00f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0(CEditorTools * this_ptr, char * prompt_text, float * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 0043d316
    PUSH 0x838e58                       ; 0043d319 | g_CDeformableModelInstanceInstance
        ;   Label: LAB_0043d319
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80 ; 0043d31e
        ;   XREF to: 0059df80 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0043d323
    PUSH 0x838e58                       ; 0043d326 | g_CDeformableModelInstanceInstance
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40 ; 0043d32b
        ;   XREF to: 0059fb40 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0043d330
    PUSH 0x838e58                       ; 0043d333 | g_CDeformableModelInstanceInstance
    MOV EDX,dword ptr [EBP + -0x14]     ; 0043d338
    NOP                                 ; 0043d33b
    NOP                                 ; 0043d33c
    NOP                                 ; 0043d33d
    NOP                                 ; 0043d33e
    PUSH EDX                            ; 0043d33f
    PUSH ESI                            ; 0043d340
    CALL core_cloth.cpp_CCloth_orientBoneToChild_FUN_0043a110 ; 0043d341
        ;   XREF to: 0043a110 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_orientBoneToChild_FUN_0043a110(CCloth * this_ptr, int bone_index, CDeformableModelInstance * model_ptr)
    ADD ESP,0xc                         ; 0043d346
    MOV EAX,[0x0067cf44]                ; 0043d349 | g_CKeysPtr
    PUSH 0xf                            ; 0043d34e
    MOV EDX,dword ptr [EAX]             ; 0043d350 | g_CKeysInstance
    PUSH EAX                            ; 0043d352 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0043d353
    ADD ESP,0x8                         ; 0043d356
    TEST EAX,EAX                        ; 0043d359
    JZ 0x0043d37b                       ; 0043d35b
        ;   XREF to: 0043d37b (CONDITIONAL_JUMP)  ; LAB_0043d37b
    PUSH 0x2a                           ; 0043d35d
    MOV EAX,[0x0067cf44]                ; 0043d35f | g_CKeysPtr
    PUSH EAX                            ; 0043d364 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0043d365 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 0043d367
    ADD ESP,0x8                         ; 0043d369
    TEST EAX,EAX                        ; 0043d36c
    JZ 0x0043d556                       ; 0043d36e
        ;   XREF to: 0043d556 (CONDITIONAL_JUMP)  ; LAB_0043d556
    DEC dword ptr [EBP + -0x14]         ; 0043d374
    NOP                                 ; 0043d377
    NOP                                 ; 0043d378
    NOP                                 ; 0043d379
    NOP                                 ; 0043d37a
    PUSH 0x2c                           ; 0043d37b
        ;   Label: LAB_0043d37b
    MOV EAX,[0x0067cf44]                ; 0043d37d | g_CKeysPtr
    PUSH EAX                            ; 0043d382 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0043d383 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0043d385
    ADD ESP,0x8                         ; 0043d388
    TEST EAX,EAX                        ; 0043d38b
    JZ 0x0043d3a7                       ; 0043d38d
        ;   XREF to: 0043d3a7 (CONDITIONAL_JUMP)  ; LAB_0043d3a7
    PUSH 0x838e58                       ; 0043d38f | g_CDeformableModelInstanceInstance
    PUSH 0x838e4c                       ; 0043d394 | UNION_UVector3_00838e4c
    PUSH 0x838e40                       ; 0043d399 | UNION_UVector3_00838e40
    PUSH ESI                            ; 0043d39e
    CALL core_cloth.cpp_CCloth_setup_FUN_00439710 ; 0043d39f
        ;   XREF to: 00439710 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_setup_FUN_00439710(CCloth * this_ptr, CVector3f * position, CVector3f * euler, CDeformableModelInstance * model_ptr)
    ADD ESP,0x10                        ; 0043d3a4
    CMP dword ptr [EBP + -0x14],0x0     ; 0043d3a7
        ;   Label: LAB_0043d3a7
    NOP                                 ; 0043d3ab
    NOP                                 ; 0043d3ac
    NOP                                 ; 0043d3ad
    NOP                                 ; 0043d3ae
    JL 0x0043d577                       ; 0043d3af
        ;   XREF to: 0043d577 (CONDITIONAL_JUMP)  ; LAB_0043d577
    MOV EAX,dword ptr [EBP + -0x14]     ; 0043d3b5
        ;   Label: LAB_0043d3b5
    NOP                                 ; 0043d3b8
    NOP                                 ; 0043d3b9
    NOP                                 ; 0043d3ba
    NOP                                 ; 0043d3bb
    CMP EAX,dword ptr [ESI + 0x3ce8c]   ; 0043d3bc
    JL 0x0043d3cd                       ; 0043d3c2
        ;   XREF to: 0043d3cd (CONDITIONAL_JUMP)  ; LAB_0043d3cd
    XOR ECX,ECX                         ; 0043d3c4
    MOV dword ptr [EBP + -0x14],ECX     ; 0043d3c6
    NOP                                 ; 0043d3c9
    NOP                                 ; 0043d3ca
    NOP                                 ; 0043d3cb
    NOP                                 ; 0043d3cc
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0043d3cd
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   Label: LAB_0043d3cd
    MOV EBX,dword ptr [0x0067b654]      ; 0043d3d2 | g_CGamePtr
    PUSH EBX                            ; 0043d3d8 | g_CGameInstance
    CALL core_game.cpp_CGame_updateDT_FUN_004d7d90 ; 0043d3d9
        ;   XREF to: 004d7d90 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_updateDT_FUN_004d7d90(CGame * this_ptr)
    ADD ESP,0x4                         ; 0043d3de
    MOV EAX,[0x0067cf44]                ; 0043d3e1 | g_CKeysPtr
    PUSH 0x1                            ; 0043d3e6
    MOV EDX,dword ptr [EAX]             ; 0043d3e8 | g_CKeysInstance
    PUSH EAX                            ; 0043d3ea | g_CKeysInstance
    CALL dword ptr [EDX]                ; 0043d3eb
    ADD ESP,0x8                         ; 0043d3ed
    TEST EAX,EAX                        ; 0043d3f0
    JZ 0x0043c993                       ; 0043d3f2
        ;   XREF to: 0043c993 (CONDITIONAL_JUMP)  ; LAB_0043c993
    MOV EAX,[0x006810c8]                ; 0043d3f8 | g_CDemonSetPtr
    MOV dword ptr [EAX + 0x15ac80],0x0  ; 0043d3fd | g_CDemonSetInstance.lighting_quality_mode
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0043d407
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    MOV ESP,EBP                         ; 0043d40c
    POP EBP                             ; 0043d40e
    POP EDI                             ; 0043d40f
    POP ESI                             ; 0043d410
    POP EBX                             ; 0043d411
    RET                                 ; 0043d412
    FLD float ptr [ESP + 0x500]         ; 0043d413
        ;   Label: LAB_0043d413
    MOV EDX,dword ptr [0x00838e60]      ; 0043d41a | g_CDeformableModelInstanceInstance.motion_controller.current_frame_number
    FMUL float ptr [EAX + 0x20]         ; 0043d420
    MOV dword ptr [ESP + 0x4ec],EDX     ; 0043d423
    FADD float ptr [ESP + 0x4ec]        ; 0043d42a
    FSTP float ptr [ESP + 0x540]        ; 0043d431
        ;   Label: LAB_0043d431
    MOV EAX,dword ptr [ESP + 0x534]     ; 0043d438
    FLD float ptr [ESP + 0x540]         ; 0043d43f
    FILD dword ptr [EAX + 0x64]         ; 0043d446
    FSTP float ptr [ESP + 0x538]        ; 0043d449
    FCOMP float ptr [ESP + 0x538]       ; 0043d450
    FNSTSW AX                           ; 0043d457
    SAHF                                ; 0043d459
    JBE 0x0043d46c                      ; 0043d45a
        ;   XREF to: 0043d46c (CONDITIONAL_JUMP)  ; LAB_0043d46c
    FLD float ptr [ESP + 0x540]         ; 0043d45c
    FSUB float ptr [ESP + 0x538]        ; 0043d463
    JMP 0x0043d431                      ; 0043d46a
        ;   XREF to: 0043d431 (UNCONDITIONAL_JUMP)  ; LAB_0043d431
    MOV ECX,dword ptr [ESP + 0x534]     ; 0043d46c
        ;   Label: LAB_0043d46c
    PUSH dword ptr [ESP + 0x540]        ; 0043d473
    PUSH ECX                            ; 0043d47a
    PUSH 0x838e58                       ; 0043d47b | g_CDeformableModelInstanceInstance
    CALL core_motion.cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0 ; 0043d480
        ;   XREF to: 0052ddb0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0(CMotionController * this_ptr, char * motion_name, float frame_number)
    ADD ESP,0xc                         ; 0043d485
    JMP 0x0043c9cc                      ; 0043d488
        ;   XREF to: 0043c9cc (UNCONDITIONAL_JUMP)  ; LAB_0043c9cc
    PUSH 0x838e58                       ; 0043d48d | g_CDeformableModelInstanceInstance
        ;   Label: LAB_0043d48d
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020 ; 0043d492
        ;   XREF to: 0059e020 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(CDeformableModelInstance * this_ptr)
    JMP 0x0043c9e4                      ; 0043d497
        ;   XREF to: 0043c9e4 (UNCONDITIONAL_JUMP)  ; LAB_0043c9e4
    MOV EBX,dword ptr [ESI + 0x104]     ; 0043d49c
        ;   Label: LAB_0043d49c
    XOR EDX,EDX                         ; 0043d4a2
    TEST EBX,EBX                        ; 0043d4a4
    JLE 0x0043d4f7                      ; 0043d4a6
        ;   XREF to: 0043d4f7 (CONDITIONAL_JUMP)  ; LAB_0043d4f7
    MOV EDI,dword ptr [ESP + 0x4f8]     ; 0043d4a8
    XOR ECX,ECX                         ; 0043d4af
    ADD EDI,0xc0                        ; 0043d4b1
    MOV EBX,dword ptr [ESI + 0x10c]     ; 0043d4b7
        ;   Label: LAB_0043d4b7
    MOV EAX,EDI                         ; 0043d4bd
    ADD EBX,ECX                         ; 0043d4bf
    INC EDX                             ; 0043d4c1
    FLD float ptr [EAX]                 ; 0043d4c2
    FMUL float ptr [0x0065bb3c]         ; 0043d4c4 | FLOAT_0065bb3c
    FISTP dword ptr [EBX]               ; 0043d4ca
    FLD float ptr [EAX + 0x4]           ; 0043d4cc
    FMUL float ptr [0x0065bb3c]         ; 0043d4cf | FLOAT_0065bb3c
    FISTP dword ptr [EBX + 0x4]         ; 0043d4d5
    FLD float ptr [EAX + 0x8]           ; 0043d4d8
    FMUL float ptr [0x0065bb3c]         ; 0043d4db | FLOAT_0065bb3c
    FISTP dword ptr [EBX + 0x8]         ; 0043d4e1
    ADD EDI,0x11c                       ; 0043d4e4
    MOV EAX,dword ptr [ESI + 0x104]     ; 0043d4ea
    ADD ECX,0xc                         ; 0043d4f0
    CMP EDX,EAX                         ; 0043d4f3
    JL 0x0043d4b7                       ; 0043d4f5
        ;   XREF to: 0043d4b7 (CONDITIONAL_JUMP)  ; LAB_0043d4b7
    MOV EDX,dword ptr [ESI + 0x3ce8c]   ; 0043d4f7
        ;   Label: LAB_0043d4f7
    XOR EBX,EBX                         ; 0043d4fd
    TEST EDX,EDX                        ; 0043d4ff
    JLE 0x0043ca5e                      ; 0043d501
        ;   XREF to: 0043ca5e (CONDITIONAL_JUMP)  ; LAB_0043ca5e
    PUSH 0x838e58                       ; 0043d507 | g_CDeformableModelInstanceInstance
        ;   Label: LAB_0043d507
    PUSH EBX                            ; 0043d50c
    PUSH ESI                            ; 0043d50d
    CALL core_cloth.cpp_CCloth_computeBoneTransform_FUN_0043a2b0 ; 0043d50e
        ;   XREF to: 0043a2b0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_computeBoneTransform_FUN_0043a2b0(CCloth * this_ptr, int bone_index, CDeformableModelInstance * model_ptr)
    INC EBX                             ; 0043d513
    MOV ECX,dword ptr [ESI + 0x3ce8c]   ; 0043d514
    ADD ESP,0xc                         ; 0043d51a
    CMP EBX,ECX                         ; 0043d51d
    JL 0x0043d507                       ; 0043d51f
        ;   XREF to: 0043d507 (CONDITIONAL_JUMP)  ; LAB_0043d507
    JMP 0x0043ca5e                      ; 0043d521
        ;   XREF to: 0043ca5e (UNCONDITIONAL_JUMP)  ; LAB_0043ca5e
    PUSH 0xff                           ; 0043d526
        ;   Label: LAB_0043d526
    MOV EDI,dword ptr [0x006703ec]      ; 0043d52b | g_CDemonRendererPtr2
    PUSH EDI                            ; 0043d531 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960 ; 0043d532
        ;   XREF to: 0048c960 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960(CDemonRenderer * this_ptr, int color)
    ADD ESP,0x8                         ; 0043d537
    PUSH 0x0                            ; 0043d53a
    JMP 0x0043cc55                      ; 0043d53c
        ;   XREF to: 0043cc55 (UNCONDITIONAL_JUMP)  ; LAB_0043cc55
    PUSH 0x1f                           ; 0043d541
        ;   Label: LAB_0043d541
    MOV EAX,[0x0068416c]                ; 0043d543 | g_CSpotViewPtr
    PUSH EAX                            ; 0043d548 | g_CSpotViewInstance
    CALL shape_spotview.cpp_CSpotView_handleInput_FUN_005b9670 ; 0043d549
        ;   XREF to: 005b9670 (UNCONDITIONAL_CALL)  ; void shape_spotview.cpp_CSpotView_handleInput_FUN_005b9670(CSpotView * this_ptr, uint control_flags)
    ADD ESP,0x8                         ; 0043d54e
    JMP 0x0043d206                      ; 0043d551
        ;   XREF to: 0043d206 (UNCONDITIONAL_JUMP)  ; LAB_0043d206
    INC dword ptr [ESP + 0x530]         ; 0043d556
        ;   Label: LAB_0043d556
    JMP 0x0043d37b                      ; 0043d55d
        ;   XREF to: 0043d37b (UNCONDITIONAL_JUMP)  ; LAB_0043d37b
    PUSH 0x1f                           ; 0043d562
        ;   Label: LAB_0043d562
    MOV EAX,[0x0068416c]                ; 0043d564 | g_CSpotViewPtr
    PUSH EAX                            ; 0043d569 | g_CSpotViewInstance
    CALL shape_spotview.cpp_CSpotView_handleInput_FUN_005b9670 ; 0043d56a
        ;   XREF to: 005b9670 (UNCONDITIONAL_CALL)  ; void shape_spotview.cpp_CSpotView_handleInput_FUN_005b9670(CSpotView * this_ptr, uint control_flags)
    ADD ESP,0x8                         ; 0043d56f
    JMP 0x0043d37b                      ; 0043d572
        ;   XREF to: 0043d37b (UNCONDITIONAL_JUMP)  ; LAB_0043d37b
    MOV EAX,dword ptr [ESI + 0x3ce8c]   ; 0043d577
        ;   Label: LAB_0043d577
    DEC EAX                             ; 0043d57d
    MOV dword ptr [ESP + 0x530],EAX     ; 0043d57e
    JMP 0x0043d3b5                      ; 0043d585
        ;   XREF to: 0043d3b5 (UNCONDITIONAL_JUMP)  ; LAB_0043d3b5

