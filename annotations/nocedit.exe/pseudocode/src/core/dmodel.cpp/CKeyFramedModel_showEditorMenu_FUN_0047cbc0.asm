; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0(CKeyFramedModel *this_ptr)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; Local Variables:
; int              Stack[-0xca8]:4  local_ca8
; char[260]        Stack[-0xc9c]:260  local_c9c
; char[256]        Stack[-0xb98]:256  local_b98
; char[256]        Stack[-0xa98]:256  local_a98
; char[256]        Stack[-0x998]:256  local_998
; char[256]        Stack[-0x898]:256  local_898
; char[256]        Stack[-0x798]:256  local_798
; char[256]        Stack[-0x698]:256  local_698
; char[200]        Stack[-0x598]:200  local_598
; char[200]        Stack[-0x4d0]:200  local_4d0
; char[200]        Stack[-0x408]:200  local_408
; char[100]        Stack[-0x340]:100  local_340
; char[100]        Stack[-0x2dc]:100  local_2dc
; char[100]        Stack[-0x278]:100  local_278
; CMatrix3x4f      Stack[-0x214]:48  local_214
; CMatrix3x3f      Stack[-0x1e4]:36  local_1e4
; float            Stack[-0x1bc]:4  local_1bc
; float            Stack[-0x1b8]:4  local_1b8
; float            Stack[-0x1b4]:4  local_1b4
; float            Stack[-0x1b0]:4  local_1b0
; float            Stack[-0x1ac]:4  local_1ac
; float            Stack[-0x1a8]:4  local_1a8
; float            Stack[-0x1a4]:4  local_1a4
; float            Stack[-0x1a0]:4  local_1a0
; float            Stack[-0x19c]:4  local_19c
; float            Stack[-0x198]:4  local_198
; float            Stack[-0x194]:4  local_194
; float            Stack[-0x190]:4  local_190
; float            Stack[-0x18c]:4  local_18c
; float            Stack[-0x188]:4  local_188
; float            Stack[-0x184]:4  local_184
; float            Stack[-0x180]:4  local_180
; float            Stack[-0x17c]:4  local_17c
; float            Stack[-0x178]:4  local_178
; float            Stack[-0x174]:4  local_174
; float            Stack[-0x170]:4  local_170
; float            Stack[-0x16c]:4  local_16c
; float            Stack[-0x168]:4  local_168
; float            Stack[-0x164]:4  local_164
; float            Stack[-0x160]:4  local_160
; CVector3f        Stack[-0x15c]:12  local_15c
; float            Stack[-0x150]:4  local_150
; float            Stack[-0x14c]:4  local_14c
; float            Stack[-0x148]:4  local_148
; float            Stack[-0x144]:4  local_144
; float            Stack[-0x140]:4  local_140
; float            Stack[-0x13c]:4  local_13c
; CVector3f        Stack[-0x138]:12  local_138
; CVector3f        Stack[-0x12c]:12  local_12c
; float            Stack[-0x120]:4  local_120
; float            Stack[-0x11c]:4  local_11c
; float            Stack[-0x118]:4  local_118
; CVector3f        Stack[-0x114]:12  local_114
; CVector3f        Stack[-0x108]:12  local_108
; CVector3f        Stack[-0xfc]:12  local_fc
; CCourse          Stack[-0xf0]:12  local_f0
; float            Stack[-0xe4]:4  local_e4
; float            Stack[-0xe0]:4  local_e0
; float            Stack[-0xdc]:4  local_dc
; CVector3f        Stack[-0xd8]:12  local_d8
; int              Stack[-0xcc]:4  local_cc
; int              Stack[-0xc8]:4  local_c8
; int              Stack[-0xc4]:4  local_c4
; float            Stack[-0xc0]:4  local_c0
; float            Stack[-0xbc]:4  local_bc
; float            Stack[-0xb8]:4  local_b8
; CVector3f        Stack[-0xb4]:12  local_b4
; float            Stack[-0xa8]:4  local_a8
; float            Stack[-0xa4]:4  local_a4
; float            Stack[-0xa0]:4  local_a0
; CVector3f        Stack[-0x9c]:12  local_9c
; CVector3f        Stack[-0x90]:12  local_90
; uint             Stack[-0x84]:4  local_84
; float            Stack[-0x80]:4  local_80
; float            Stack[-0x7c]:4  local_7c
; float            Stack[-0x78]:4  local_78
; float            Stack[-0x74]:4  local_74
; float            Stack[-0x70]:4  local_70
; uint             Stack[-0x6c]:4  local_6c
; uint             Stack[-0x68]:4  local_68
; uint             Stack[-0x64]:4  local_64
; uint             Stack[-0x60]:4  local_60
; float            Stack[-0x5c]:4  local_5c
; float            Stack[-0x58]:4  local_58
; float            Stack[-0x54]:4  local_54
; int              Stack[-0x50]:4  local_50
; int              Stack[-0x4c]:4  local_4c
; float            Stack[-0x48]:4  local_48
; SMRGLTextureLod * Stack[-0x44]:4  local_44
; SMRGLTextureLod * Stack[-0x40]:4  local_40
; int              Stack[-0x3c]:4  local_3c
; int              Stack[-0x38]:4  local_38
; float            Stack[-0x34]:4  local_34
; float[4]         Stack[-0x30]:16  local_30
; int              Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; char[4]          Stack[-0x18]:4  local_18
; char[4]          Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_main.c_showDeveloperToolsMenu_FUN_005073a0 at 005077f8
;   core_msnedit.cpp_CDemonMission_pasteActorProperty_FUN_0053af50 at 0053af94
;
; Referenced Globals:
;   TerminatedCString s_No_model_00620667
;   TerminatedCString s_Model_not_crammed_00620672
;   TerminatedCString s_d_00620686
;   TerminatedCString s_Frame_d_of_d_00620689
;   TerminatedCString s_Nocturne_R_Keyframed_Mod_00620699
;   TerminatedCString s_s_1_Load_model_006206c0
;   TerminatedCString s_s_2_Save_model_006206cf
;   TerminatedCString s_s_3_Import_S3D_006206de
;   TerminatedCString s_s_4_Get_model_and_textur_006206ee
;   TerminatedCString s_s_5_Put_model_and_textur_00620716
;   TerminatedCString s_s_6_CramTex_0062073c
;   TerminatedCString s_s_7_Reduce_00620748
;   TerminatedCString s_s_8_Remove_Null_duplicat_00620753
;   TerminatedCString s_s_9_Export_S3D_00620774
;   TerminatedCString s_R_Recenter_bias_00620784
;   ... and 113 more
;
; Called Functions:
;   core_course.cpp_CCourse_ctor_FUN_004424c0
;   core_course.cpp_CCourse_dtor_FUN_004424e0
;   core_course.cpp_CCourse_evaluate_FUN_00442710
;   core_course.cpp_CCourse_load_FUN_00442580
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
;   core_dmodel.cpp_CKeyFramedModel_applyBias_FUN_0047c370
;   core_dmodel.cpp_CKeyFramedModel_applyVertexBias_FUN_0047c2d0
;   core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00478830
;   core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010
;   core_dmodel.cpp_CKeyFramedModel_export_FUN_00478e10
;   core_dmodel.cpp_CKeyFramedModel_exportToDSE_FUN_0047e810
;   core_dmodel.cpp_CKeyFramedModel_exportToS3D_FUN_00479f30
;   core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690
;   core_dmodel.cpp_CKeyFramedModel_importFromDSE_FUN_0047ea10
;   ... and 57 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047cbc0
        ;   Label: core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0
    PUSH ESI                            ; 0047cbc1
    PUSH EDI                            ; 0047cbc2
    PUSH EBP                            ; 0047cbc3
    MOV EBP,ESP                         ; 0047cbc4
    SUB ESP,0xea0                       ; 0047cbc6
    SUB EBP,0x7e                        ; 0047cbcc
    XOR EDX,EDX                         ; 0047cbcf
    XOR EBX,EBX                         ; 0047cbd1
    MOV dword ptr [EBP + 0xa],EDX       ; 0047cbd3
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0047cbd6
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    MOV dword ptr [EBP + 0x16],EBX      ; 0047cbdb
    MOV dword ptr [EBP + 0x1a],EBX      ; 0047cbde
    MOV dword ptr [EBP + 0x1e],EBX      ; 0047cbe1
    MOV ECX,0x41e00000                  ; 0047cbe4
    MOV EAX,0x41700000                  ; 0047cbe9
    MOV ESI,dword ptr [0x0067b654]      ; 0047cbee | g_CGamePtr
    MOV dword ptr [EBP + -0x42],EBX     ; 0047cbf4
    MOV dword ptr [EBP + -0x4a],EBX     ; 0047cbf7
    MOV dword ptr [EBP + -0x46],EBX     ; 0047cbfa
    PUSH ESI                            ; 0047cbfd | g_CGameInstance
    MOV dword ptr [EBP + 0xe],ECX       ; 0047cbfe
    MOV dword ptr [EBP + 0x12],EAX      ; 0047cc01
    CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80 ; 0047cc04
        ;   XREF to: 004d7d80 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_saveClockTime_FUN_004d7d80(CGame * this_ptr)
    MOV EAX,dword ptr [EBP + 0x92]      ; 0047cc09
    MOV dword ptr [EBP + 0x22],EBX      ; 0047cc0f
    MOV dword ptr [EBP + 0x26],EBX      ; 0047cc12
    MOV EDX,dword ptr [EAX + 0x110]     ; 0047cc15
    ADD ESP,0x4                         ; 0047cc1b
    TEST EDX,EDX                        ; 0047cc1e
    SETG AL                             ; 0047cc20
    AND EAX,0xff                        ; 0047cc23
    MOV dword ptr [EBP + 0x2a],EAX      ; 0047cc28
    MOV EAX,[0x0067b654]                ; 0047cc2b | g_CGamePtr
    PUSH 0x20                           ; 0047cc30
    MOV dword ptr [EBP + 0x2e],EBX      ; 0047cc32
    MOV EBX,dword ptr [EAX + 0x4]       ; 0047cc35 | g_CGameInstance.game_pixy
    PUSH EBX                            ; 0047cc38
    MOV ESI,dword ptr [EAX]             ; 0047cc39 | g_CGameInstance
    PUSH ESI                            ; 0047cc3b
    CALL wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0 ; 0047cc3c
        ;   XREF to: 005ecef0 (UNCONDITIONAL_CALL)  ; int wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0(int width, int height, int bits_per_pixel)
    MOV EAX,dword ptr [EBP + 0x92]      ; 0047cc41
    ADD EAX,0x124                       ; 0047cc47
    ADD ESP,0xc                         ; 0047cc4c
    MOV dword ptr [EBP + 0x4e],EAX      ; 0047cc4f
    MOV dword ptr [EBP + 0x4a],EAX      ; 0047cc52
    MOV EAX,[0x00679398]                ; 0047cc55 | g_WindowHeight
        ;   Label: LAB_0047cc55
    PUSH 0xf8                           ; 0047cc5a
    DEC EAX                             ; 0047cc5f
    PUSH EAX                            ; 0047cc60
    MOV EAX,[0x00679394]                ; 0047cc61 | g_WindowWidth
    DEC EAX                             ; 0047cc66
    PUSH EAX                            ; 0047cc67
    PUSH 0x0                            ; 0047cc68
    PUSH 0x0                            ; 0047cc6a
    CALL engine_2d.c_fillRectColor_FUN_00403170 ; 0047cc6c
        ;   XREF to: 00403170 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_00403170(int x1, int y1, int x2, int y2, ...)
    MOV EAX,[0x006810c8]                ; 0047cc71 | g_CDemonSetPtr
    MOV dword ptr [EAX + 0x15ae70],0x1  ; 0047cc76 | g_CDemonSetInstance.rendering_mode
    MOV dword ptr [EAX + 0x15ae74],0xffffb7bc ; 0047cc80 | g_CDemonSetInstance.light_direction.x
    MOV dword ptr [EAX + 0x15ae78],0xffffb7bc ; 0047cc8a | g_CDemonSetInstance.light_direction.y
    MOV dword ptr [EAX + 0x15ae7c],0x4844 ; 0047cc94 | g_CDemonSetInstance.light_direction.z
    ADD ESP,0x14                        ; 0047cc9e
    MOV dword ptr [EAX + 0x15ae80],0x7d00 ; 0047cca1 | g_CDemonSetInstance.ambient_base_quick
    CALL wincore_windll.cpp_clearZBufferNative_FUN_005b3ed4 ; 0047ccab
        ;   XREF to: 005b3ed4 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearZBufferNative_FUN_005b3ed4()
    MOV EAX,[0x00679394]                ; 0047ccb0 | g_WindowWidth
    MOV EDX,EAX                         ; 0047ccb5
    SAR EDX,0x1f                        ; 0047ccb7
    SUB EAX,EDX                         ; 0047ccba
    SAR EAX,0x1                         ; 0047ccbc
    MOV EBX,EAX                         ; 0047ccbe
    MOV EAX,[0x00679398]                ; 0047ccc0 | g_WindowHeight
    MOV EDX,EAX                         ; 0047ccc5
    SAR EDX,0x1f                        ; 0047ccc7
    SUB EAX,EDX                         ; 0047ccca
    SAR EAX,0x1                         ; 0047cccc
    MOV ESI,dword ptr [EBP + 0x92]      ; 0047ccce
    MOV ESI,dword ptr [ESI + 0x100]     ; 0047ccd4
    SUB EBX,0x28                        ; 0047ccda
    CMP ESI,0x1                         ; 0047ccdd
    JL 0x0047d194                       ; 0047cce0
        ;   XREF to: 0047d194 (CONDITIONAL_JUMP)  ; LAB_0047d194
    CMP dword ptr [EBP + 0x2a],0x0      ; 0047cce6
    JZ 0x0047d1a8                       ; 0047ccea
        ;   XREF to: 0047d1a8 (CONDITIONAL_JUMP)  ; LAB_0047d1a8
    LEA EAX,[EBP + -0x4a]               ; 0047ccf0
    PUSH EAX                            ; 0047ccf3
    LEA EAX,[EBP + 0xfffffeaa]          ; 0047ccf4
    PUSH EAX                            ; 0047ccfa
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 0047ccfb
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    FLD float ptr [EBP + 0x12]          ; 0047cd00
    MOV EAX,dword ptr [EBP + 0x16]      ; 0047cd03
    FCHS                                ; 0047cd06
    MOV dword ptr [EBP + -0x2],EAX      ; 0047cd08
    MOV EAX,dword ptr [EBP + 0x1a]      ; 0047cd0b
    FSTP float ptr [EBP + 0x72]         ; 0047cd0e
    MOV dword ptr [EBP + 0x2],EAX       ; 0047cd11
    MOV EAX,dword ptr [EBP + 0x72]      ; 0047cd14
    ADD ESP,0x8                         ; 0047cd17
    MOV dword ptr [EBP + 0x6],EAX       ; 0047cd1a
    LEA EAX,[EBP + -0x2]                ; 0047cd1d
    PUSH EAX                            ; 0047cd20
    LEA EAX,[EBP + -0x26]               ; 0047cd21
    PUSH EAX                            ; 0047cd24
    LEA EAX,[EBP + 0xfffffeaa]          ; 0047cd25
    PUSH EAX                            ; 0047cd2b
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 0047cd2c
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    MOV EBX,EAX                         ; 0047cd31
    LEA EAX,[EBP + -0x2]                ; 0047cd33
    ADD ESP,0xc                         ; 0047cd36
    CMP EAX,EBX                         ; 0047cd39
    JZ 0x0047cd4e                       ; 0047cd3b
        ;   XREF to: 0047cd4e (CONDITIONAL_JUMP)  ; LAB_0047cd4e
    MOV EAX,dword ptr [EBX]             ; 0047cd3d
    MOV dword ptr [EBP + -0x2],EAX      ; 0047cd3f
    MOV EAX,dword ptr [EBX + 0x4]       ; 0047cd42
    MOV dword ptr [EBP + 0x2],EAX       ; 0047cd45
    MOV EAX,dword ptr [EBX + 0x8]       ; 0047cd48
    MOV dword ptr [EBP + 0x6],EAX       ; 0047cd4b
    LEA EAX,[EBP + -0x2]                ; 0047cd4e
        ;   Label: LAB_0047cd4e
    PUSH EAX                            ; 0047cd51
    MOV EAX,[0x006703ec]                ; 0047cd52 | g_CDemonRendererPtr2
    PUSH EAX                            ; 0047cd57 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150 ; 0047cd58
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150(CDemonRenderer * this_ptr, CVector3f * point_ptr)
    ADD ESP,0x8                         ; 0047cd5d
    LEA EAX,[EBP + -0x4a]               ; 0047cd60
    PUSH EAX                            ; 0047cd63
    MOV EDX,dword ptr [0x006703ec]      ; 0047cd64 | g_CDemonRendererPtr2
    PUSH EDX                            ; 0047cd6a | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0 ; 0047cd6b
        ;   XREF to: 0048c1d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0(CDemonRenderer * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0047cd70
    MOV ECX,dword ptr [0x006703ec]      ; 0047cd73 | g_CDemonRendererPtr2
    PUSH dword ptr [EBP + 0xe]          ; 0047cd79
    PUSH ECX                            ; 0047cd7c | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650 ; 0047cd7d
        ;   XREF to: 0048c650 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650(CDemonRenderer * this_ptr, float field_of_view)
    ADD ESP,0x8                         ; 0047cd82
    LEA EAX,[EBP + 0xffffff7a]          ; 0047cd85
    XOR EBX,EBX                         ; 0047cd8b
    PUSH EAX                            ; 0047cd8d
    MOV EAX,[0x006703e8]                ; 0047cd8e | g_CDemonRendererPtr1
    MOV dword ptr [EBP + 0xffffff7a],EBX ; 0047cd93
    PUSH EAX                            ; 0047cd99 | g_CDemonRendererInstance
    MOV dword ptr [EBP + 0xffffff7e],EBX ; 0047cd9a
    MOV dword ptr [EBP + -0x7e],EBX     ; 0047cda0
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 0047cda3
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0047cda8
    PUSH EBX                            ; 0047cdab
    LEA EAX,[EBP + 0xffffff7a]          ; 0047cdac
    PUSH EAX                            ; 0047cdb2
    MOV EDX,dword ptr [0x006703e8]      ; 0047cdb3 | g_CDemonRendererPtr1
    PUSH EDX                            ; 0047cdb9 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 0047cdba
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    ADD ESP,0xc                         ; 0047cdbf
    FLD float ptr [EBP + 0x1e]          ; 0047cdc2
    PUSH -0x1                           ; 0047cdc5
    CALL crt_math.c_round_FUN_005fe6b0  ; 0047cdc7
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    PUSH EBX                            ; 0047cdcc
    FISTP dword ptr [EBP + 0x72]        ; 0047cdcd
    MOV ECX,dword ptr [EBP + 0x72]      ; 0047cdd0
    PUSH ECX                            ; 0047cdd3
    MOV EBX,dword ptr [EBP + 0x92]      ; 0047cdd4
    PUSH EBX                            ; 0047cdda
    CALL core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850 ; 0047cddb
        ;   XREF to: 00477850 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850(CKeyFramedModel * this_ptr, int frame_index, CKeyFramedModelInstance * instance, int render_flags)
    ADD ESP,0x10                        ; 0047cde0
    MOV ESI,dword ptr [0x006703e8]      ; 0047cde3 | g_CDemonRendererPtr1
    PUSH ESI                            ; 0047cde9 | g_CDemonRendererInstance
    MOV EDI,dword ptr [EBP + 0x26]      ; 0047cdea
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640 ; 0047cded
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0047cdf2
    TEST EDI,EDI                        ; 0047cdf5
    JZ 0x0047ce34                       ; 0047cdf7
        ;   XREF to: 0047ce34 (CONDITIONAL_JUMP)  ; LAB_0047ce34
    MOV EAX,dword ptr [EBP + 0x92]      ; 0047cdf9
    MOV EDX,dword ptr [EAX + 0x104]     ; 0047cdff
    XOR EBX,EBX                         ; 0047ce05
    TEST EDX,EDX                        ; 0047ce07
    JLE 0x0047ce34                      ; 0047ce09
        ;   XREF to: 0047ce34 (CONDITIONAL_JUMP)  ; LAB_0047ce34
    XOR ESI,ESI                         ; 0047ce0b
    MOV EAX,[0x006703ec]                ; 0047ce0d | g_CDemonRendererPtr2
        ;   Label: LAB_0047ce0d
    MOV EAX,dword ptr [EAX]             ; 0047ce12 | g_CDemonRendererInstance
    ADD EAX,ESI                         ; 0047ce14
    TEST byte ptr [EAX + 0x13],0x80     ; 0047ce16
    JZ 0x0047d1bc                       ; 0047ce1a
        ;   XREF to: 0047d1bc (CONDITIONAL_JUMP)  ; LAB_0047d1bc
    MOV EAX,dword ptr [EBP + 0x92]      ; 0047ce20
        ;   Label: LAB_0047ce20
    INC EBX                             ; 0047ce26
    MOV EDI,dword ptr [EAX + 0x104]     ; 0047ce27
    ADD ESI,0x30                        ; 0047ce2d
    CMP EBX,EDI                         ; 0047ce30
    JL 0x0047ce0d                       ; 0047ce32
        ;   XREF to: 0047ce0d (CONDITIONAL_JUMP)  ; LAB_0047ce0d
    CMP dword ptr [EBP + 0x22],0x0      ; 0047ce34
        ;   Label: LAB_0047ce34
    JZ 0x0047ce50                       ; 0047ce38
        ;   XREF to: 0047ce50 (CONDITIONAL_JUMP)  ; LAB_0047ce50
    PUSH 0x3                            ; 0047ce3a
    MOV EDX,dword ptr [0x00678a60]      ; 0047ce3c | g_CEditorToolsPtr
    PUSH 0x40800000                     ; 0047ce42
    PUSH EDX                            ; 0047ce47 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0 ; 0047ce48
        ;   XREF to: 004a1ca0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0(CEditorTools * this_ptr, float scale_factor, int text_color)
    ADD ESP,0xc                         ; 0047ce4d
    CMP dword ptr [EBP + 0x2e],0x0      ; 0047ce50
        ;   Label: LAB_0047ce50
    JZ 0x0047d201                       ; 0047ce54
        ;   XREF to: 0047d201 (CONDITIONAL_JUMP)  ; LAB_0047d201
    MOV ESI,dword ptr [EBP + 0x2e]      ; 0047ce5a
        ;   Label: LAB_0047ce5a
    TEST ESI,ESI                        ; 0047ce5d
    JZ 0x0047d250                       ; 0047ce5f
        ;   XREF to: 0047d250 (CONDITIONAL_JUMP)  ; LAB_0047d250
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0047ce65
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   Label: LAB_0047ce65
    MOV EBX,dword ptr [0x0067b654]      ; 0047ce6a | g_CGamePtr
    PUSH EBX                            ; 0047ce70 | g_CGameInstance
    CALL core_game.cpp_CGame_updateDT_FUN_004d7d90 ; 0047ce71
        ;   XREF to: 004d7d90 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_updateDT_FUN_004d7d90(CGame * this_ptr)
    MOV EAX,[0x0067b654]                ; 0047ce76 | g_CGamePtr
    ADD ESP,0x4                         ; 0047ce7b
    MOV EAX,dword ptr [EAX + 0x264]     ; 0047ce7e | g_CGameInstance.delta_time_float
    PUSH 0x38                           ; 0047ce84
    MOV dword ptr [EBP + 0x46],EAX      ; 0047ce86
    MOV dword ptr [EBP + 0x32],EAX      ; 0047ce89
    MOV EAX,[0x0067cf44]                ; 0047ce8c | g_CKeysPtr
    PUSH EAX                            ; 0047ce91 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0047ce92 | g_CKeysInstance
    CALL dword ptr [EBX]                ; 0047ce94
    ADD ESP,0x8                         ; 0047ce96
    TEST EAX,EAX                        ; 0047ce99
    JZ 0x0047cea9                       ; 0047ce9b
        ;   XREF to: 0047cea9 (CONDITIONAL_JUMP)  ; LAB_0047cea9
    FLD float ptr [EBP + 0x46]          ; 0047ce9d
    FMUL float ptr [0x00620def]         ; 0047cea0 | FLOAT_00620def
    FSTP float ptr [EBP + 0x32]         ; 0047cea6
    PUSH 0x2a                           ; 0047cea9
        ;   Label: LAB_0047cea9
    MOV EAX,[0x0067cf44]                ; 0047ceab | g_CKeysPtr
    PUSH EAX                            ; 0047ceb0 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0047ceb1 | g_CKeysInstance
    CALL dword ptr [EBX]                ; 0047ceb3
    ADD ESP,0x8                         ; 0047ceb5
    TEST EAX,EAX                        ; 0047ceb8
    JZ 0x0047cec8                       ; 0047ceba
        ;   XREF to: 0047cec8 (CONDITIONAL_JUMP)  ; LAB_0047cec8
    FLD float ptr [EBP + 0x32]          ; 0047cebc
    FMUL float ptr [0x00620df3]         ; 0047cebf | FLOAT_00620df3
    FSTP float ptr [EBP + 0x32]         ; 0047cec5
    FLD float ptr [EBP + 0x32]          ; 0047cec8
        ;   Label: LAB_0047cec8
    FLD ST0                             ; 0047cecb
    FMUL double ptr [0x00620dfb]        ; 0047cecd | DOUBLE_00620dfb
    FXCH                                ; 0047ced3
    FMUL float ptr [0x00620e03]         ; 0047ced5 | FLOAT_00620e03
    MOV ESI,0x1                         ; 0047cedb
    PUSH 0x52                           ; 0047cee0
    MOV EAX,[0x0067cf44]                ; 0047cee2 | g_CKeysPtr
    MOV dword ptr [EBP + 0x3e],ESI      ; 0047cee7
    PUSH EAX                            ; 0047ceea | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0047ceeb | g_CKeysInstance
    FXCH                                ; 0047ceed
    FSTP float ptr [EBP + 0x36]         ; 0047ceef
    FSTP float ptr [EBP + 0x3a]         ; 0047cef2
    CALL dword ptr [EBX]                ; 0047cef5
    ADD ESP,0x8                         ; 0047cef7
    TEST EAX,EAX                        ; 0047cefa
    JZ 0x0047cf0c                       ; 0047cefc
        ;   XREF to: 0047cf0c (CONDITIONAL_JUMP)  ; LAB_0047cf0c
    FLD float ptr [EBP + -0x46]         ; 0047cefe
    XOR EDI,EDI                         ; 0047cf01
    FADD float ptr [EBP + 0x36]         ; 0047cf03
    MOV dword ptr [EBP + 0x3e],EDI      ; 0047cf06
    FSTP float ptr [EBP + -0x46]        ; 0047cf09
    PUSH 0x53                           ; 0047cf0c
        ;   Label: LAB_0047cf0c
    MOV EAX,[0x0067cf44]                ; 0047cf0e | g_CKeysPtr
    PUSH EAX                            ; 0047cf13 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0047cf14 | g_CKeysInstance
    CALL dword ptr [EBX]                ; 0047cf16
    ADD ESP,0x8                         ; 0047cf18
    TEST EAX,EAX                        ; 0047cf1b
    JZ 0x0047cf2d                       ; 0047cf1d
        ;   XREF to: 0047cf2d (CONDITIONAL_JUMP)  ; LAB_0047cf2d
    FLD float ptr [EBP + -0x46]         ; 0047cf1f
    XOR EAX,EAX                         ; 0047cf22
    FSUB float ptr [EBP + 0x36]         ; 0047cf24
    MOV dword ptr [EBP + 0x3e],EAX      ; 0047cf27
    FSTP float ptr [EBP + -0x46]        ; 0047cf2a
    PUSH 0x4a                           ; 0047cf2d
        ;   Label: LAB_0047cf2d
    MOV EAX,[0x0067cf44]                ; 0047cf2f | g_CKeysPtr
    PUSH EAX                            ; 0047cf34 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0047cf35 | g_CKeysInstance
    CALL dword ptr [EBX]                ; 0047cf37
    ADD ESP,0x8                         ; 0047cf39
    TEST EAX,EAX                        ; 0047cf3c
    JZ 0x0047cf4e                       ; 0047cf3e
        ;   XREF to: 0047cf4e (CONDITIONAL_JUMP)  ; LAB_0047cf4e
    FLD float ptr [EBP + -0x4a]         ; 0047cf40
    XOR EDX,EDX                         ; 0047cf43
    FADD float ptr [EBP + 0x36]         ; 0047cf45
    MOV dword ptr [EBP + 0x3e],EDX      ; 0047cf48
    FSTP float ptr [EBP + -0x4a]        ; 0047cf4b
    PUSH 0x4e                           ; 0047cf4e
        ;   Label: LAB_0047cf4e
    MOV EAX,[0x0067cf44]                ; 0047cf50 | g_CKeysPtr
    PUSH EAX                            ; 0047cf55 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0047cf56 | g_CKeysInstance
    CALL dword ptr [EBX]                ; 0047cf58
    ADD ESP,0x8                         ; 0047cf5a
    TEST EAX,EAX                        ; 0047cf5d
    JZ 0x0047cf6f                       ; 0047cf5f
        ;   XREF to: 0047cf6f (CONDITIONAL_JUMP)  ; LAB_0047cf6f
    FLD float ptr [EBP + -0x4a]         ; 0047cf61
    XOR ECX,ECX                         ; 0047cf64
    FSUB float ptr [EBP + 0x36]         ; 0047cf66
    MOV dword ptr [EBP + 0x3e],ECX      ; 0047cf69
    FSTP float ptr [EBP + -0x4a]        ; 0047cf6c
    FLD float ptr [EBP + -0x4a]         ; 0047cf6f
        ;   Label: LAB_0047cf6f
    FCOMP double ptr [0x00620e2b]       ; 0047cf72 | DOUBLE_00620e2b
    FNSTSW AX                           ; 0047cf78
    SAHF                                ; 0047cf7a
    JNC 0x0047cf84                      ; 0047cf7b
        ;   XREF to: 0047cf84 (CONDITIONAL_JUMP)  ; LAB_0047cf84
    MOV dword ptr [EBP + -0x4a],0xbfc90fdb ; 0047cf7d
    FLD float ptr [EBP + -0x4a]         ; 0047cf84
        ;   Label: LAB_0047cf84
    FCOMP double ptr [0x00620e33]       ; 0047cf87 | DOUBLE_00620e33
    FNSTSW AX                           ; 0047cf8d
    SAHF                                ; 0047cf8f
    JBE 0x0047cf99                      ; 0047cf90
        ;   XREF to: 0047cf99 (CONDITIONAL_JUMP)  ; LAB_0047cf99
    MOV dword ptr [EBP + -0x4a],0x3fc90fdb ; 0047cf92
    PUSH 0xd                            ; 0047cf99
        ;   Label: LAB_0047cf99
    MOV EAX,[0x0067cf44]                ; 0047cf9b | g_CKeysPtr
    PUSH EAX                            ; 0047cfa0 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0047cfa1 | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 0047cfa3
    ADD ESP,0x8                         ; 0047cfa6
    TEST EAX,EAX                        ; 0047cfa9
    JZ 0x0047cfb5                       ; 0047cfab
        ;   XREF to: 0047cfb5 (CONDITIONAL_JUMP)  ; LAB_0047cfb5
    FLD1                                ; 0047cfad
    FADD float ptr [EBP + 0xe]          ; 0047cfaf
    FSTP float ptr [EBP + 0xe]          ; 0047cfb2
    PUSH 0xc                            ; 0047cfb5
        ;   Label: LAB_0047cfb5
    MOV EAX,[0x0067cf44]                ; 0047cfb7 | g_CKeysPtr
    PUSH EAX                            ; 0047cfbc | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0047cfbd | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 0047cfbf
    ADD ESP,0x8                         ; 0047cfc2
    TEST EAX,EAX                        ; 0047cfc5
    JZ 0x0047cfd5                       ; 0047cfc7
        ;   XREF to: 0047cfd5 (CONDITIONAL_JUMP)  ; LAB_0047cfd5
    FLD float ptr [EBP + 0xe]           ; 0047cfc9
    FADD float ptr [0x00620e23]         ; 0047cfcc | FLOAT_00620e23
    FSTP float ptr [EBP + 0xe]          ; 0047cfd2
    FLD float ptr [EBP + 0xe]           ; 0047cfd5
        ;   Label: LAB_0047cfd5
    FCOMP double ptr [0x00620e3b]       ; 0047cfd8 | DOUBLE_00620e3b
    FNSTSW AX                           ; 0047cfde
    SAHF                                ; 0047cfe0
    JBE 0x0047cfea                      ; 0047cfe1
        ;   XREF to: 0047cfea (CONDITIONAL_JUMP)  ; LAB_0047cfea
    MOV dword ptr [EBP + 0xe],0x42200000 ; 0047cfe3
    FLD float ptr [EBP + 0xe]           ; 0047cfea
        ;   Label: LAB_0047cfea
    FLD1                                ; 0047cfed
    FCOMPP                              ; 0047cfef
    FNSTSW AX                           ; 0047cff1
    SAHF                                ; 0047cff3
    JBE 0x0047cffd                      ; 0047cff4
        ;   XREF to: 0047cffd (CONDITIONAL_JUMP)  ; LAB_0047cffd
    MOV dword ptr [EBP + 0xe],0x3f800000 ; 0047cff6
    CMP dword ptr [EBP + 0x22],0x0      ; 0047cffd
        ;   Label: LAB_0047cffd
    JZ 0x0047d706                       ; 0047d001
        ;   XREF to: 0047d706 (CONDITIONAL_JUMP)  ; LAB_0047d706
    PUSH 0x48                           ; 0047d007
    XOR EDI,EDI                         ; 0047d009
    MOV EAX,[0x0067cf44]                ; 0047d00b | g_CKeysPtr
    MOV dword ptr [EBP + 0xffffff02],EDI ; 0047d010
    MOV dword ptr [EBP + 0xffffff06],EDI ; 0047d016
    MOV dword ptr [EBP + 0xffffff0a],EDI ; 0047d01c
    PUSH EAX                            ; 0047d022 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0047d023 | g_CKeysInstance
    CALL dword ptr [EBX]                ; 0047d025
    ADD ESP,0x8                         ; 0047d027
    TEST EAX,EAX                        ; 0047d02a
    JZ 0x0047d040                       ; 0047d02c
        ;   XREF to: 0047d040 (CONDITIONAL_JUMP)  ; LAB_0047d040
    FLD float ptr [EBP + 0xffffff0a]    ; 0047d02e
    FSUB float ptr [EBP + 0x3a]         ; 0047d034
    MOV dword ptr [EBP + 0x3e],EDI      ; 0047d037
    FSTP float ptr [EBP + 0xffffff0a]   ; 0047d03a
    PUSH 0x50                           ; 0047d040
        ;   Label: LAB_0047d040
    MOV EAX,[0x0067cf44]                ; 0047d042 | g_CKeysPtr
    PUSH EAX                            ; 0047d047 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0047d048 | g_CKeysInstance
    CALL dword ptr [EBX]                ; 0047d04a
    ADD ESP,0x8                         ; 0047d04c
    TEST EAX,EAX                        ; 0047d04f
    JZ 0x0047d067                       ; 0047d051
        ;   XREF to: 0047d067 (CONDITIONAL_JUMP)  ; LAB_0047d067
    FLD float ptr [EBP + 0xffffff0a]    ; 0047d053
    XOR EBX,EBX                         ; 0047d059
    FADD float ptr [EBP + 0x3a]         ; 0047d05b
    MOV dword ptr [EBP + 0x3e],EBX      ; 0047d05e
    FSTP float ptr [EBP + 0xffffff0a]   ; 0047d061
    PUSH 0x4b                           ; 0047d067
        ;   Label: LAB_0047d067
    MOV EAX,[0x0067cf44]                ; 0047d069 | g_CKeysPtr
    PUSH EAX                            ; 0047d06e | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0047d06f | g_CKeysInstance
    CALL dword ptr [EBX]                ; 0047d071
    ADD ESP,0x8                         ; 0047d073
    TEST EAX,EAX                        ; 0047d076
    JZ 0x0047d08e                       ; 0047d078
        ;   XREF to: 0047d08e (CONDITIONAL_JUMP)  ; LAB_0047d08e
    FLD float ptr [EBP + 0xffffff02]    ; 0047d07a
    XOR ESI,ESI                         ; 0047d080
    FSUB float ptr [EBP + 0x3a]         ; 0047d082
    MOV dword ptr [EBP + 0x3e],ESI      ; 0047d085
    FSTP float ptr [EBP + 0xffffff02]   ; 0047d088
    PUSH 0x4d                           ; 0047d08e
        ;   Label: LAB_0047d08e
    MOV EAX,[0x0067cf44]                ; 0047d090 | g_CKeysPtr
    PUSH EAX                            ; 0047d095 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0047d096 | g_CKeysInstance
    CALL dword ptr [EBX]                ; 0047d098
    ADD ESP,0x8                         ; 0047d09a
    TEST EAX,EAX                        ; 0047d09d
    JZ 0x0047d0b5                       ; 0047d09f
        ;   XREF to: 0047d0b5 (CONDITIONAL_JUMP)  ; LAB_0047d0b5
    FLD float ptr [EBP + 0xffffff02]    ; 0047d0a1
    XOR EDI,EDI                         ; 0047d0a7
    FADD float ptr [EBP + 0x3a]         ; 0047d0a9
    MOV dword ptr [EBP + 0x3e],EDI      ; 0047d0ac
    FSTP float ptr [EBP + 0xffffff02]   ; 0047d0af
    PUSH 0x1e                           ; 0047d0b5
        ;   Label: LAB_0047d0b5
    MOV EAX,[0x0067cf44]                ; 0047d0b7 | g_CKeysPtr
    PUSH EAX                            ; 0047d0bc | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0047d0bd | g_CKeysInstance
    CALL dword ptr [EBX]                ; 0047d0bf
    ADD ESP,0x8                         ; 0047d0c1
    TEST EAX,EAX                        ; 0047d0c4
    JZ 0x0047d0dc                       ; 0047d0c6
        ;   XREF to: 0047d0dc (CONDITIONAL_JUMP)  ; LAB_0047d0dc
    FLD float ptr [EBP + 0xffffff06]    ; 0047d0c8
    XOR EAX,EAX                         ; 0047d0ce
    FSUB float ptr [EBP + 0x3a]         ; 0047d0d0
    MOV dword ptr [EBP + 0x3e],EAX      ; 0047d0d3
    FSTP float ptr [EBP + 0xffffff06]   ; 0047d0d6
    PUSH 0x10                           ; 0047d0dc
        ;   Label: LAB_0047d0dc
    MOV EAX,[0x0067cf44]                ; 0047d0de | g_CKeysPtr
    PUSH EAX                            ; 0047d0e3 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0047d0e4 | g_CKeysInstance
    CALL dword ptr [EBX]                ; 0047d0e6
    ADD ESP,0x8                         ; 0047d0e8
    TEST EAX,EAX                        ; 0047d0eb
    JZ 0x0047d103                       ; 0047d0ed
        ;   XREF to: 0047d103 (CONDITIONAL_JUMP)  ; LAB_0047d103
    FLD float ptr [EBP + 0xffffff06]    ; 0047d0ef
    XOR EDX,EDX                         ; 0047d0f5
    FADD float ptr [EBP + 0x3a]         ; 0047d0f7
    MOV dword ptr [EBP + 0x3e],EDX      ; 0047d0fa
    FSTP float ptr [EBP + 0xffffff06]   ; 0047d0fd
    LEA EBX,[EBP + -0x3e]               ; 0047d103
        ;   Label: LAB_0047d103
    LEA EAX,[EBP + 0xffffff02]          ; 0047d106
    FLD float ptr [EAX]                 ; 0047d10c
    FMUL float ptr [0x0065c96c]         ; 0047d10e | FLOAT_0065c96c
    FISTP dword ptr [EBX]               ; 0047d114
    FLD float ptr [EAX + 0x4]           ; 0047d116
    FMUL float ptr [0x0065c96c]         ; 0047d119 | FLOAT_0065c96c
    FISTP dword ptr [EBX + 0x4]         ; 0047d11f
    FLD float ptr [EAX + 0x8]           ; 0047d122
    FMUL float ptr [0x0065c96c]         ; 0047d125 | FLOAT_0065c96c
    FISTP dword ptr [EBX + 0x8]         ; 0047d12b
    MOV EAX,dword ptr [EBP + -0x3e]     ; 0047d12e
    MOV ECX,dword ptr [EBP + -0x3a]     ; 0047d131
    MOV EBX,dword ptr [EBP + -0x36]     ; 0047d134
    OR EAX,ECX                          ; 0047d137
    OR EAX,EBX                          ; 0047d139
    JZ 0x0047d546                       ; 0047d13b
        ;   XREF to: 0047d546 (CONDITIONAL_JUMP)  ; LAB_0047d546
    XOR ESI,ESI                         ; 0047d141
    XOR EDI,EDI                         ; 0047d143
    MOV EBX,dword ptr [EBP + 0x92]      ; 0047d145
        ;   Label: LAB_0047d145
    MOV EAX,dword ptr [EBP + 0x92]      ; 0047d14b
    MOV EDX,dword ptr [EBX + 0x100]     ; 0047d151
    MOV EAX,dword ptr [EAX + 0x104]     ; 0047d157
    IMUL EAX,EDX                        ; 0047d15d
    CMP EDI,EAX                         ; 0047d160
    JGE 0x0047d53d                      ; 0047d162
        ;   XREF to: 0047d53d (CONDITIONAL_JUMP)  ; LAB_0047d53d
    MOV EBX,dword ptr [EBX + 0x10c]     ; 0047d168
    MOV EAX,dword ptr [EBP + -0x3e]     ; 0047d16e
    ADD dword ptr [ESI + EBX*0x1],EAX   ; 0047d171
    MOV ECX,dword ptr [ESI + EBX*0x1 + 0x4] ; 0047d174
    MOV EAX,dword ptr [EBP + -0x3a]     ; 0047d178
    ADD ECX,EAX                         ; 0047d17b
    MOV dword ptr [ESI + EBX*0x1 + 0x4],ECX ; 0047d17d
    MOV EDX,dword ptr [ESI + EBX*0x1 + 0x8] ; 0047d181
    MOV EAX,dword ptr [EBP + -0x36]     ; 0047d185
    ADD ESI,0xc                         ; 0047d188
    ADD EDX,EAX                         ; 0047d18b
    INC EDI                             ; 0047d18d
    MOV dword ptr [ESI + EBX*0x1 + -0x4],EDX ; 0047d18e
    JMP 0x0047d145                      ; 0047d192
        ;   XREF to: 0047d145 (UNCONDITIONAL_JUMP)  ; LAB_0047d145
    PUSH EAX                            ; 0047d194
        ;   Label: LAB_0047d194
    PUSH EBX                            ; 0047d195
    PUSH 0x620667                       ; 0047d196 | = "(No model)"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0047d19b
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0047d1a0
    JMP 0x0047ce5a                      ; 0047d1a3
        ;   XREF to: 0047ce5a (UNCONDITIONAL_JUMP)  ; LAB_0047ce5a
    PUSH EAX                            ; 0047d1a8
        ;   Label: LAB_0047d1a8
    PUSH EBX                            ; 0047d1a9
    PUSH 0x620672                       ; 0047d1aa | = "(Model not crammed)"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0047d1af
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0047d1b4
    JMP 0x0047ce5a                      ; 0047d1b7
        ;   XREF to: 0047ce5a (UNCONDITIONAL_JUMP)  ; LAB_0047ce5a
    MOV EDI,dword ptr [EAX + 0x10]      ; 0047d1bc
        ;   Label: LAB_0047d1bc
    MOV EAX,dword ptr [EAX + 0x14]      ; 0047d1bf
    SAR EAX,0x10                        ; 0047d1c2
    SAR EDI,0x10                        ; 0047d1c5
    MOV dword ptr [EBP + 0x42],EAX      ; 0047d1c8
    TEST EDI,EDI                        ; 0047d1cb
    JL 0x0047ce20                       ; 0047d1cd
        ;   XREF to: 0047ce20 (CONDITIONAL_JUMP)  ; LAB_0047ce20
    PUSH EBX                            ; 0047d1d3
    PUSH 0x620686                       ; 0047d1d4 | = "%d"
    LEA EAX,[EBP + 0xfffffdb2]          ; 0047d1d9
    PUSH EAX                            ; 0047d1df
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0047d1e0
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0047d1e5
    MOV ECX,dword ptr [EBP + 0x42]      ; 0047d1e8
    PUSH ECX                            ; 0047d1eb
    PUSH EDI                            ; 0047d1ec
    LEA EAX,[EBP + 0xfffffdb2]          ; 0047d1ed
    PUSH EAX                            ; 0047d1f3
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0047d1f4
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0047d1f9
    JMP 0x0047ce20                      ; 0047d1fc
        ;   XREF to: 0047ce20 (UNCONDITIONAL_JUMP)  ; LAB_0047ce20
    MOV EAX,dword ptr [EBP + 0x92]      ; 0047d201
        ;   Label: LAB_0047d201
    FLD float ptr [EBP + 0x1e]          ; 0047d207
    MOV EAX,dword ptr [EAX + 0x100]     ; 0047d20a
    CALL crt_math.c_round_FUN_005fe6b0  ; 0047d210
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    PUSH EAX                            ; 0047d215
    FISTP dword ptr [EBP + 0x72]        ; 0047d216
    MOV EBX,dword ptr [EBP + 0x72]      ; 0047d219
    PUSH EBX                            ; 0047d21c
    PUSH 0x620689                       ; 0047d21d | = "Frame: %d of %d"
    LEA EAX,[EBP + 0xfffffc86]          ; 0047d222
    PUSH EAX                            ; 0047d228
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0047d229
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EAX,[0x00679398]                ; 0047d22e | g_WindowHeight
    ADD ESP,0x10                        ; 0047d233
    SUB EAX,0x37                        ; 0047d236
    PUSH EAX                            ; 0047d239
    PUSH 0x0                            ; 0047d23a
    LEA EAX,[EBP + 0xfffffc86]          ; 0047d23c
    PUSH EAX                            ; 0047d242
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0047d243
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0047d248
    JMP 0x0047ce5a                      ; 0047d24b
        ;   XREF to: 0047ce5a (UNCONDITIONAL_JUMP)  ; LAB_0047ce5a
    PUSH ESI                            ; 0047d250
        ;   Label: LAB_0047d250
    PUSH ESI                            ; 0047d251
    PUSH 0x620699                       ; 0047d252 | = "Nocturne(R) Keyframed Model Editor(TM)"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0047d257
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0047d25c
    PUSH 0x16                           ; 0047d25f
    PUSH ESI                            ; 0047d261
    PUSH 0x6206c0                       ; 0047d262 | = "1.  Load model"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0047d267
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0047d26c
    PUSH 0x21                           ; 0047d26f
    PUSH ESI                            ; 0047d271
    PUSH 0x6206cf                       ; 0047d272 | = "2.  Save model"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0047d277
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0047d27c
    PUSH 0x37                           ; 0047d27f
    PUSH ESI                            ; 0047d281
    PUSH 0x6206de                       ; 0047d282 | = "3.  Import .S3D"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0047d287
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0047d28c
    PUSH 0x4d                           ; 0047d28f
    PUSH ESI                            ; 0047d291
    PUSH 0x6206ee                       ; 0047d292 | = "4.  Get model and textures from network"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0047d297
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0047d29c
    PUSH 0x58                           ; 0047d29f
    PUSH ESI                            ; 0047d2a1
    PUSH 0x620716                       ; 0047d2a2 | = "5.  Put model and textures to network"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0047d2a7
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0047d2ac
    PUSH 0x6e                           ; 0047d2af
    PUSH ESI                            ; 0047d2b1
    PUSH 0x62073c                       ; 0047d2b2 | = "6.  CramTex"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0047d2b7
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0047d2bc
    PUSH 0x79                           ; 0047d2bf
    PUSH ESI                            ; 0047d2c1
    PUSH 0x620748                       ; 0047d2c2 | = "7.  Reduce"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0047d2c7
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0047d2cc
    PUSH 0x84                           ; 0047d2cf
    PUSH ESI                            ; 0047d2d4
    PUSH 0x620753                       ; 0047d2d5 | = "8.  Remove Null/duplicate faces."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0047d2da
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0047d2df
    PUSH 0x8f                           ; 0047d2e2
    PUSH ESI                            ; 0047d2e7
    PUSH 0x620774                       ; 0047d2e8 | = "9.  Export S3D."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0047d2ed
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0047d2f2
    PUSH 0xa5                           ; 0047d2f5
    PUSH ESI                            ; 0047d2fa
    PUSH 0x620784                       ; 0047d2fb | = "R.  Recenter bias"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0047d300
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0047d305
    PUSH 0xb0                           ; 0047d308
    PUSH ESI                            ; 0047d30d
    PUSH 0x620796                       ; 0047d30e | = "G.  Ground bias"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0047d313
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0047d318
    PUSH 0xbb                           ; 0047d31b
    PUSH ESI                            ; 0047d320
    PUSH 0x6207a6                       ; 0047d321 | = "B.  Bias model using manual value"
    MOV EDI,dword ptr [EBP + 0x22]      ; 0047d326
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0047d329
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0047d32e
    TEST EDI,EDI                        ; 0047d331
    JZ 0x0047d51f                       ; 0047d333
        ;   XREF to: 0047d51f (CONDITIONAL_JUMP)  ; LAB_0047d51f
    MOV EAX,0x6207c8                    ; 0047d339 | = "ACTIVE"
    PUSH EAX                            ; 0047d33e | = "ACTIVE" | s_INACTIVE_006207cf
        ;   Label: LAB_0047d33e
    PUSH 0x6207d8                       ; 0047d33f | = "I.  Interactive bias is now %s"
    LEA EAX,[EBP + 0xfffffc86]          ; 0047d344
    PUSH EAX                            ; 0047d34a
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0047d34b
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0047d350
    PUSH 0xc6                           ; 0047d353
    PUSH 0x0                            ; 0047d358
    LEA EAX,[EBP + 0xfffffc86]          ; 0047d35a
    PUSH EAX                            ; 0047d360
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0047d361
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0047d366
    PUSH 0xd1                           ; 0047d369
    PUSH 0x0                            ; 0047d36e
    PUSH 0x6207f7                       ; 0047d370 | = "S.  Scale"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0047d375
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0047d37a
    PUSH 0xe7                           ; 0047d37d
    PUSH 0x0                            ; 0047d382
    PUSH 0x620801                       ; 0047d384 | = "X.  Reorient model"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0047d389
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0047d38e
    PUSH 0xf2                           ; 0047d391
    PUSH 0x0                            ; 0047d396
    PUSH 0x620814                       ; 0047d398 | = "C.  Reorient to put model on course"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0047d39d
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0047d3a2
    PUSH 0x108                          ; 0047d3a5
    PUSH 0x0                            ; 0047d3aa
    PUSH 0x620838                       ; 0047d3ac | = "F1. Hide menu"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0047d3b1
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0047d3b6
    PUSH 0x11e                          ; 0047d3b9
    PUSH 0x0                            ; 0047d3be
    PUSH 0x620846                       ; 0047d3c0 | = "D.  Demented(TM) Shape Editor"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0047d3c5
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0047d3ca
    PUSH 0x134                          ; 0047d3cd
    PUSH 0x0                            ; 0047d3d2
    PUSH 0x620864                       ; 0047d3d4 | = "Model options:"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0047d3d9
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,dword ptr [EBP + 0x92]      ; 0047d3de
    MOV EDX,dword ptr [EAX + 0x5698]    ; 0047d3e4
    ADD ESP,0xc                         ; 0047d3ea
    TEST EDX,EDX                        ; 0047d3ed
    JZ 0x0047d529                       ; 0047d3ef
        ;   XREF to: 0047d529 (CONDITIONAL_JUMP)  ; LAB_0047d529
    MOV EAX,0x620873                    ; 0047d3f5 | = "ENABLED"
    PUSH EAX                            ; 0047d3fa | = "ENABLED" | s_DISABLED_0062087b
        ;   Label: LAB_0047d3fa
    PUSH 0x620884                       ; 0047d3fb | = "E.  Exact collision (currently %s)"
    LEA EAX,[EBP + 0xfffffc86]          ; 0047d400
    PUSH EAX                            ; 0047d406
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0047d407
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0047d40c
    PUSH 0x13f                          ; 0047d40f
    PUSH 0x0                            ; 0047d414
    LEA EAX,[EBP + 0xfffffc86]          ; 0047d416
    PUSH EAX                            ; 0047d41c
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0047d41d
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,dword ptr [EBP + 0x92]      ; 0047d422
    MOV ECX,dword ptr [EAX + 0x569c]    ; 0047d428
    ADD ESP,0xc                         ; 0047d42e
    TEST ECX,ECX                        ; 0047d431
    JZ 0x0047d533                       ; 0047d433
        ;   XREF to: 0047d533 (CONDITIONAL_JUMP)  ; LAB_0047d533
    MOV EAX,0x6208a7                    ; 0047d439 | = "ENABLED"
    PUSH EAX                            ; 0047d43e | = "ENABLED" | s_DISABLED_006208af
        ;   Label: LAB_0047d43e
    PUSH 0x6208b8                       ; 0047d43f | = "T.  Transparent pixel (currently %s)"
    LEA EAX,[EBP + 0xfffffc86]          ; 0047d444
    PUSH EAX                            ; 0047d44a
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0047d44b
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0047d450
    PUSH 0x14a                          ; 0047d453
    PUSH 0x0                            ; 0047d458
    LEA EAX,[EBP + 0xfffffc86]          ; 0047d45a
    PUSH EAX                            ; 0047d460
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0047d461
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,dword ptr [EBP + 0x92]      ; 0047d466
    ADD ESP,0xc                         ; 0047d46c
    MOV EAX,dword ptr [EAX + 0x104]     ; 0047d46f
    PUSH EAX                            ; 0047d475
    PUSH 0x6208dd                       ; 0047d476 | = "Vertex count: %d"
    LEA EAX,[EBP + 0xfffffc86]          ; 0047d47b
    PUSH EAX                            ; 0047d481
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0047d482
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EAX,[0x00679398]                ; 0047d487 | g_WindowHeight
    ADD ESP,0xc                         ; 0047d48c
    SUB EAX,0x2c                        ; 0047d48f
    PUSH EAX                            ; 0047d492
    PUSH 0x0                            ; 0047d493
    LEA EAX,[EBP + 0xfffffc86]          ; 0047d495
    PUSH EAX                            ; 0047d49b
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0047d49c
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,dword ptr [EBP + 0x92]      ; 0047d4a1
    ADD ESP,0xc                         ; 0047d4a7
    MOV EAX,dword ptr [EAX + 0x110]     ; 0047d4aa
    PUSH EAX                            ; 0047d4b0
    PUSH 0x6208ee                       ; 0047d4b1 | = "Poly count: %d"
    LEA EAX,[EBP + 0xfffffc86]          ; 0047d4b6
    PUSH EAX                            ; 0047d4bc
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0047d4bd
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EAX,[0x00679398]                ; 0047d4c2 | g_WindowHeight
    ADD ESP,0xc                         ; 0047d4c7
    SUB EAX,0x21                        ; 0047d4ca
    PUSH EAX                            ; 0047d4cd
    PUSH 0x0                            ; 0047d4ce
    LEA EAX,[EBP + 0xfffffc86]          ; 0047d4d0
    PUSH EAX                            ; 0047d4d6
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0047d4d7
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,dword ptr [EBP + 0x92]      ; 0047d4dc
    ADD ESP,0xc                         ; 0047d4e2
    MOV EAX,dword ptr [EAX + 0x100]     ; 0047d4e5
    PUSH EAX                            ; 0047d4eb
    PUSH 0x6208fd                       ; 0047d4ec | = "Frame count: %d"
    LEA EAX,[EBP + 0xfffffc86]          ; 0047d4f1
    PUSH EAX                            ; 0047d4f7
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0047d4f8
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EAX,[0x00679398]                ; 0047d4fd | g_WindowHeight
    ADD ESP,0xc                         ; 0047d502
    SUB EAX,0x16                        ; 0047d505
    PUSH EAX                            ; 0047d508
    PUSH 0x0                            ; 0047d509
    LEA EAX,[EBP + 0xfffffc86]          ; 0047d50b
    PUSH EAX                            ; 0047d511
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0047d512
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0047d517
    JMP 0x0047ce65                      ; 0047d51a
        ;   XREF to: 0047ce65 (UNCONDITIONAL_JUMP)  ; LAB_0047ce65
    MOV EAX,0x6207cf                    ; 0047d51f | = "INACTIVE"
        ;   Label: LAB_0047d51f
    JMP 0x0047d33e                      ; 0047d524
        ;   XREF to: 0047d33e (UNCONDITIONAL_JUMP)  ; LAB_0047d33e
    MOV EAX,0x62087b                    ; 0047d529 | = "DISABLED"
        ;   Label: LAB_0047d529
    JMP 0x0047d3fa                      ; 0047d52e
        ;   XREF to: 0047d3fa (UNCONDITIONAL_JUMP)  ; LAB_0047d3fa
    MOV EAX,0x6208af                    ; 0047d533 | = "DISABLED"
        ;   Label: LAB_0047d533
    JMP 0x0047d43e                      ; 0047d538
        ;   XREF to: 0047d43e (UNCONDITIONAL_JUMP)  ; LAB_0047d43e
    PUSH EBX                            ; 0047d53d
        ;   Label: LAB_0047d53d
    CALL core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010 ; 0047d53e
        ;   XREF to: 00478010 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(CKeyFramedModel * model_ptr)
    ADD ESP,0x4                         ; 0047d543
    PUSH 0x3e                           ; 0047d546
        ;   Label: LAB_0047d546
    MOV EAX,[0x0067cf44]                ; 0047d548 | g_CKeysPtr
    PUSH EAX                            ; 0047d54d | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0047d54e | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 0047d550
    ADD ESP,0x8                         ; 0047d553
    TEST EAX,EAX                        ; 0047d556
    JZ 0x0047d587                       ; 0047d558
        ;   XREF to: 0047d587 (CONDITIONAL_JUMP)  ; LAB_0047d587
    MOV ECX,dword ptr [0x02c14c84]      ; 0047d55a | g_KeyFrameModelPoolEnd
    INC ECX                             ; 0047d560
    PUSH ECX                            ; 0047d561
    PUSH 0x62090d                       ; 0047d562 | = "noc%d.pcx"
    PUSH 0x2c14c88                      ; 0047d567 | g_KFMShowEditorScreenshotFile
    MOV dword ptr [0x02c14c84],ECX      ; 0047d56c | g_KeyFrameModelPoolEnd
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0047d572
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0047d577
    PUSH 0x2c14c88                      ; 0047d57a | g_KFMShowEditorScreenshotFile
    CALL engine_pcx.c_saveScreenshotGeneral_FUN_005490c0 ; 0047d57f
        ;   XREF to: 005490c0 (UNCONDITIONAL_CALL)  ; void engine_pcx.c_saveScreenshotGeneral_FUN_005490c0(char * filename)
    ADD ESP,0x4                         ; 0047d584
    PUSH 0x4c                           ; 0047d587
        ;   Label: LAB_0047d587
    MOV EAX,[0x0067cf44]                ; 0047d589 | g_CKeysPtr
    PUSH EAX                            ; 0047d58e | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0047d58f | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 0047d591
    ADD ESP,0x8                         ; 0047d594
    TEST EAX,EAX                        ; 0047d597
    JZ 0x0047d5ae                       ; 0047d599
        ;   XREF to: 0047d5ae (CONDITIONAL_JUMP)  ; LAB_0047d5ae
    XOR ESI,ESI                         ; 0047d59b
    MOV EDX,0x41700000                  ; 0047d59d
    MOV dword ptr [EBP + -0x46],ESI     ; 0047d5a2
    MOV dword ptr [EBP + -0x4a],ESI     ; 0047d5a5
    MOV dword ptr [EBP + 0x12],EDX      ; 0047d5a8
    MOV dword ptr [EBP + -0x42],ESI     ; 0047d5ab
    PUSH 0x3b                           ; 0047d5ae
        ;   Label: LAB_0047d5ae
    MOV EAX,[0x0067cf44]                ; 0047d5b0 | g_CKeysPtr
    PUSH EAX                            ; 0047d5b5 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0047d5b6 | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 0047d5b8
    ADD ESP,0x8                         ; 0047d5bb
    TEST EAX,EAX                        ; 0047d5be
    JZ 0x0047d5d1                       ; 0047d5c0
        ;   XREF to: 0047d5d1 (CONDITIONAL_JUMP)  ; LAB_0047d5d1
    CMP dword ptr [EBP + 0x2e],0x0      ; 0047d5c2
    SETZ AL                             ; 0047d5c6
    AND EAX,0xff                        ; 0047d5c9
    MOV dword ptr [EBP + 0x2e],EAX      ; 0047d5ce
    PUSH 0x34                           ; 0047d5d1
        ;   Label: LAB_0047d5d1
    MOV EAX,[0x0067cf44]                ; 0047d5d3 | g_CKeysPtr
    PUSH EAX                            ; 0047d5d8 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0047d5d9 | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 0047d5db
    ADD ESP,0x8                         ; 0047d5de
    TEST EAX,EAX                        ; 0047d5e1
    JZ 0x0047d5ed                       ; 0047d5e3
        ;   XREF to: 0047d5ed (CONDITIONAL_JUMP)  ; LAB_0047d5ed
    FLD1                                ; 0047d5e5
    FADD float ptr [EBP + 0x1e]         ; 0047d5e7
    FSTP float ptr [EBP + 0x1e]         ; 0047d5ea
    PUSH 0x33                           ; 0047d5ed
        ;   Label: LAB_0047d5ed
    MOV EAX,[0x0067cf44]                ; 0047d5ef | g_CKeysPtr
    PUSH EAX                            ; 0047d5f4 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0047d5f5 | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 0047d5f7
    ADD ESP,0x8                         ; 0047d5fa
    TEST EAX,EAX                        ; 0047d5fd
    JZ 0x0047d60d                       ; 0047d5ff
        ;   XREF to: 0047d60d (CONDITIONAL_JUMP)  ; LAB_0047d60d
    FLD float ptr [EBP + 0x1e]          ; 0047d601
    FADD float ptr [0x00620e23]         ; 0047d604 | FLOAT_00620e23
    FSTP float ptr [EBP + 0x1e]         ; 0047d60a
    MOV EBX,dword ptr [EBP + 0x92]      ; 0047d60d
        ;   Label: LAB_0047d60d
    MOV EBX,dword ptr [EBX + 0x100]     ; 0047d613
    MOV dword ptr [EBP + 0x72],EBX      ; 0047d619
    FILD dword ptr [EBP + 0x72]         ; 0047d61c
    FCOMP float ptr [EBP + 0x1e]        ; 0047d61f
    FNSTSW AX                           ; 0047d622
    SAHF                                ; 0047d624
    JA 0x0047d7f3                       ; 0047d625
        ;   XREF to: 0047d7f3 (CONDITIONAL_JUMP)  ; LAB_0047d7f3
    XOR EBX,EBX                         ; 0047d62b
    MOV dword ptr [EBP + 0x1e],EBX      ; 0047d62d
    CMP dword ptr [EBP + 0x3e],0x0      ; 0047d630
        ;   Label: LAB_0047d630
    JZ 0x0047d810                       ; 0047d634
        ;   XREF to: 0047d810 (CONDITIONAL_JUMP)  ; LAB_0047d810
    CALL wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00 ; 0047d63a
        ;   XREF to: 005f2f00 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00()
    TEST EAX,EAX                        ; 0047d63f
    JZ 0x0047d6c7                       ; 0047d641
        ;   XREF to: 0047d6c7 (CONDITIONAL_JUMP)  ; LAB_0047d6c7
    MOV EDI,dword ptr [0x0067cf44]      ; 0047d647 | g_CKeysPtr
    PUSH EDI                            ; 0047d64d | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470 ; 0047d64e
        ;   XREF to: 00502470 (UNCONDITIONAL_CALL)  ; int engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470(CKeys * this_ptr)
    ADD ESP,0x4                         ; 0047d653
    MOV dword ptr [EBP + 0xa],EAX       ; 0047d656
    MOV EDI,EAX                         ; 0047d659
    CMP EAX,0x42                        ; 0047d65b
    JNC 0x0047e48a                      ; 0047d65e
        ;   XREF to: 0047e48a (CONDITIONAL_JUMP)  ; LAB_0047e48a
    CMP EAX,0x35                        ; 0047d664
    JNC 0x0047e708                      ; 0047d667
        ;   XREF to: 0047e708 (CONDITIONAL_JUMP)  ; LAB_0047e708
    CMP EAX,0x32                        ; 0047d66d
    JNC 0x0047e734                      ; 0047d670
        ;   XREF to: 0047e734 (CONDITIONAL_JUMP)  ; LAB_0047e734
    CMP EAX,0x31                        ; 0047d676
    JNZ 0x0047d6c7                      ; 0047d679
        ;   XREF to: 0047d6c7 (CONDITIONAL_JUMP)  ; LAB_0047d6c7
    PUSH 0x0                            ; 0047d67b
    LEA EAX,[EBP + 0xfffffc86]          ; 0047d67d
    PUSH EAX                            ; 0047d683
    MOV EAX,0x620917                    ; 0047d684 | = "*.kfm"
    PUSH EAX                            ; 0047d689 | = "*.kfm"
    MOV EAX,0x62091d                    ; 0047d68a | = "models"
    PUSH EAX                            ; 0047d68f | = "models"
    MOV EAX,0x620924                    ; 0047d690 | = "Load Keyframed model"
    PUSH EAX                            ; 0047d695 | = "Load Keyframed model"
    MOV ESI,dword ptr [0x00678a60]      ; 0047d696 | g_CEditorToolsPtr
    PUSH ESI                            ; 0047d69c | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270 ; 0047d69d
        ;   XREF to: 0049f270 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270(CEditorTools * this_ptr, char * dialog_title, char * search_directory, char * file_pattern, ...)
    ADD ESP,0x18                        ; 0047d6a2
    TEST EAX,EAX                        ; 0047d6a5
    JZ 0x0047d6c7                       ; 0047d6a7
        ;   XREF to: 0047d6c7 (CONDITIONAL_JUMP)  ; LAB_0047d6c7
    LEA EAX,[EBP + 0xfffffc86]          ; 0047d6a9
    PUSH EAX                            ; 0047d6af
    MOV EDI,dword ptr [EBP + 0x92]      ; 0047d6b0
    PUSH EDI                            ; 0047d6b6
    CALL core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0 ; 0047d6b7
        ;   XREF to: 00476db0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0(CKeyFramedModel * this_ptr, char * filename)
    MOV EAX,0x1                         ; 0047d6bc
    ADD ESP,0x8                         ; 0047d6c1
    MOV dword ptr [EBP + 0x2a],EAX      ; 0047d6c4
    CMP dword ptr [EBP + 0xa],0x1b      ; 0047d6c7
        ;   Label: LAB_0047d6c7
    JNZ 0x0047cc55                      ; 0047d6cb
        ;   XREF to: 0047cc55 (CONDITIONAL_JUMP)  ; LAB_0047cc55
    PUSH 0x20                           ; 0047d6d1
    PUSH 0x1e0                          ; 0047d6d3
    PUSH 0x280                          ; 0047d6d8
    CALL wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0 ; 0047d6dd
        ;   XREF to: 005ecef0 (UNCONDITIONAL_CALL)  ; int wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0(int width, int height, int bits_per_pixel)
    ADD ESP,0xc                         ; 0047d6e2
    CALL core_dmodel.cpp_freeAllModels_FUN_00478cb0 ; 0047d6e5
        ;   XREF to: 00478cb0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_freeAllModels_FUN_00478cb0()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0047d6ea
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    MOV EAX,[0x006810c8]                ; 0047d6ef | g_CDemonSetPtr
    MOV dword ptr [EAX + 0x15ae70],0x0  ; 0047d6f4 | g_CDemonSetInstance.rendering_mode
    LEA ESP,[EBP + 0x7e]                ; 0047d6fe
    POP EBP                             ; 0047d701
    POP EDI                             ; 0047d702
    POP ESI                             ; 0047d703
    POP EBX                             ; 0047d704
    RET                                 ; 0047d705
    PUSH 0x48                           ; 0047d706
        ;   Label: LAB_0047d706
    MOV EAX,[0x0067cf44]                ; 0047d708 | g_CKeysPtr
    PUSH EAX                            ; 0047d70d | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0047d70e | g_CKeysInstance
    CALL dword ptr [EBX]                ; 0047d710
    ADD ESP,0x8                         ; 0047d712
    TEST EAX,EAX                        ; 0047d715
    JZ 0x0047d727                       ; 0047d717
        ;   XREF to: 0047d727 (CONDITIONAL_JUMP)  ; LAB_0047d727
    FLD float ptr [EBP + 0x12]          ; 0047d719
    XOR ECX,ECX                         ; 0047d71c
    FSUB float ptr [EBP + 0x3a]         ; 0047d71e
    MOV dword ptr [EBP + 0x3e],ECX      ; 0047d721
    FSTP float ptr [EBP + 0x12]         ; 0047d724
    PUSH 0x50                           ; 0047d727
        ;   Label: LAB_0047d727
    MOV EAX,[0x0067cf44]                ; 0047d729 | g_CKeysPtr
    PUSH EAX                            ; 0047d72e | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0047d72f | g_CKeysInstance
    CALL dword ptr [EBX]                ; 0047d731
    ADD ESP,0x8                         ; 0047d733
    TEST EAX,EAX                        ; 0047d736
    JZ 0x0047d748                       ; 0047d738
        ;   XREF to: 0047d748 (CONDITIONAL_JUMP)  ; LAB_0047d748
    FLD float ptr [EBP + 0x12]          ; 0047d73a
    XOR EBX,EBX                         ; 0047d73d
    FADD float ptr [EBP + 0x3a]         ; 0047d73f
    MOV dword ptr [EBP + 0x3e],EBX      ; 0047d742
    FSTP float ptr [EBP + 0x12]         ; 0047d745
    PUSH 0x4b                           ; 0047d748
        ;   Label: LAB_0047d748
    MOV EAX,[0x0067cf44]                ; 0047d74a | g_CKeysPtr
    PUSH EAX                            ; 0047d74f | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0047d750 | g_CKeysInstance
    CALL dword ptr [EBX]                ; 0047d752
    ADD ESP,0x8                         ; 0047d754
    TEST EAX,EAX                        ; 0047d757
    JZ 0x0047d769                       ; 0047d759
        ;   XREF to: 0047d769 (CONDITIONAL_JUMP)  ; LAB_0047d769
    FLD float ptr [EBP + 0x16]          ; 0047d75b
    XOR ESI,ESI                         ; 0047d75e
    FSUB float ptr [EBP + 0x3a]         ; 0047d760
    MOV dword ptr [EBP + 0x3e],ESI      ; 0047d763
    FSTP float ptr [EBP + 0x16]         ; 0047d766
    PUSH 0x4d                           ; 0047d769
        ;   Label: LAB_0047d769
    MOV EAX,[0x0067cf44]                ; 0047d76b | g_CKeysPtr
    PUSH EAX                            ; 0047d770 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0047d771 | g_CKeysInstance
    CALL dword ptr [EBX]                ; 0047d773
    ADD ESP,0x8                         ; 0047d775
    TEST EAX,EAX                        ; 0047d778
    JZ 0x0047d78a                       ; 0047d77a
        ;   XREF to: 0047d78a (CONDITIONAL_JUMP)  ; LAB_0047d78a
    FLD float ptr [EBP + 0x16]          ; 0047d77c
    XOR EDI,EDI                         ; 0047d77f
    FADD float ptr [EBP + 0x3a]         ; 0047d781
    MOV dword ptr [EBP + 0x3e],EDI      ; 0047d784
    FSTP float ptr [EBP + 0x16]         ; 0047d787
    PUSH 0x1e                           ; 0047d78a
        ;   Label: LAB_0047d78a
    MOV EAX,[0x0067cf44]                ; 0047d78c | g_CKeysPtr
    PUSH EAX                            ; 0047d791 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0047d792 | g_CKeysInstance
    CALL dword ptr [EBX]                ; 0047d794
    ADD ESP,0x8                         ; 0047d796
    TEST EAX,EAX                        ; 0047d799
    JZ 0x0047d7ab                       ; 0047d79b
        ;   XREF to: 0047d7ab (CONDITIONAL_JUMP)  ; LAB_0047d7ab
    FLD float ptr [EBP + 0x1a]          ; 0047d79d
    XOR EAX,EAX                         ; 0047d7a0
    FSUB float ptr [EBP + 0x3a]         ; 0047d7a2
    MOV dword ptr [EBP + 0x3e],EAX      ; 0047d7a5
    FSTP float ptr [EBP + 0x1a]         ; 0047d7a8
    PUSH 0x10                           ; 0047d7ab
        ;   Label: LAB_0047d7ab
    MOV EAX,[0x0067cf44]                ; 0047d7ad | g_CKeysPtr
    PUSH EAX                            ; 0047d7b2 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0047d7b3 | g_CKeysInstance
    CALL dword ptr [EBX]                ; 0047d7b5
    ADD ESP,0x8                         ; 0047d7b7
    TEST EAX,EAX                        ; 0047d7ba
    JZ 0x0047d7cc                       ; 0047d7bc
        ;   XREF to: 0047d7cc (CONDITIONAL_JUMP)  ; LAB_0047d7cc
    FLD float ptr [EBP + 0x1a]          ; 0047d7be
    XOR EDX,EDX                         ; 0047d7c1
    FADD float ptr [EBP + 0x3a]         ; 0047d7c3
    MOV dword ptr [EBP + 0x3e],EDX      ; 0047d7c6
    FSTP float ptr [EBP + 0x1a]         ; 0047d7c9
    PUSH 0x4c                           ; 0047d7cc
        ;   Label: LAB_0047d7cc
    MOV EAX,[0x0067cf44]                ; 0047d7ce | g_CKeysPtr
    PUSH EAX                            ; 0047d7d3 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0047d7d4 | g_CKeysInstance
    CALL dword ptr [EBX]                ; 0047d7d6
    ADD ESP,0x8                         ; 0047d7d8
    TEST EAX,EAX                        ; 0047d7db
    JZ 0x0047d546                       ; 0047d7dd
        ;   XREF to: 0047d546 (CONDITIONAL_JUMP)  ; LAB_0047d546
    XOR ECX,ECX                         ; 0047d7e3
    MOV dword ptr [EBP + 0x16],ECX      ; 0047d7e5
    MOV dword ptr [EBP + 0x3e],ECX      ; 0047d7e8
    MOV dword ptr [EBP + 0x1a],ECX      ; 0047d7eb
    JMP 0x0047d546                      ; 0047d7ee
        ;   XREF to: 0047d546 (UNCONDITIONAL_JUMP)  ; LAB_0047d546
    FLDZ                                ; 0047d7f3
        ;   Label: LAB_0047d7f3
    FCOMP float ptr [EBP + 0x1e]        ; 0047d7f5
    FNSTSW AX                           ; 0047d7f8
    SAHF                                ; 0047d7fa
    JBE 0x0047d630                      ; 0047d7fb
        ;   XREF to: 0047d630 (CONDITIONAL_JUMP)  ; LAB_0047d630
    DEC EBX                             ; 0047d801
    MOV dword ptr [EBP + 0x72],EBX      ; 0047d802
    FILD dword ptr [EBP + 0x72]         ; 0047d805
    FSTP float ptr [EBP + 0x1e]         ; 0047d808
    JMP 0x0047d630                      ; 0047d80b
        ;   XREF to: 0047d630 (UNCONDITIONAL_JUMP)  ; LAB_0047d630
    CALL wincore_winrun.cpp_processWindowMessages_FUN_005f35e0 ; 0047d810
        ;   XREF to: 005f35e0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_processWindowMessages_FUN_005f35e0()
        ;   Label: LAB_0047d810
    CALL wincore_winrun.cpp_clearKeypresses_FUN_005f2e70 ; 0047d815
        ;   XREF to: 005f2e70 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_clearKeypresses_FUN_005f2e70()
    CALL wincore_winrun.cpp_processWindowMessages_FUN_005f35e0 ; 0047d81a
        ;   XREF to: 005f35e0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_processWindowMessages_FUN_005f35e0()
    CALL wincore_winrun.cpp_clearKeypresses_FUN_005f2e70 ; 0047d81f
        ;   XREF to: 005f2e70 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_clearKeypresses_FUN_005f2e70()
    JMP 0x0047d6c7                      ; 0047d824
        ;   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)  ; LAB_0047d6c7
    MOV EAX,dword ptr [EBP + 0x92]      ; 0047d829
        ;   Label: LAB_0047d829
    MOV EAX,dword ptr [EAX + 0x100]     ; 0047d82f
    TEST EAX,EAX                        ; 0047d835
    JLE 0x0047d8a2                      ; 0047d837
        ;   XREF to: 0047d8a2 (CONDITIONAL_JUMP)  ; LAB_0047d8a2
    CMP dword ptr [EBP + 0x2a],0x0      ; 0047d839
    JZ 0x0047d884                       ; 0047d83d
        ;   XREF to: 0047d884 (CONDITIONAL_JUMP)  ; LAB_0047d884
    PUSH 0x1                            ; 0047d83f
        ;   Label: LAB_0047d83f
    MOV EDI,dword ptr [EBP + 0x92]      ; 0047d841
    PUSH EDI                            ; 0047d847
    PUSH 0x620967                       ; 0047d848 | = "kfm"
    PUSH 0x62096b                       ; 0047d84d | = "models"
    PUSH 0x620972                       ; 0047d852 | = "Save Keyframed model"
    MOV EAX,[0x00678a60]                ; 0047d857 | g_CEditorToolsPtr
    PUSH EAX                            ; 0047d85c | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70 ; 0047d85d
        ;   XREF to: 0049fb70 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70(CEditorTools * this_ptr, char * dialog_title, char * directory_path, char * file_extension, ...)
    ADD ESP,0x18                        ; 0047d862
    TEST EAX,EAX                        ; 0047d865
    JZ 0x0047d6c7                       ; 0047d867
        ;   XREF to: 0047d6c7 (CONDITIONAL_JUMP)  ; LAB_0047d6c7
    PUSH EDI                            ; 0047d86d
    PUSH EDI                            ; 0047d86e
    MOV EBX,0x1                         ; 0047d86f
    CALL core_dmodel.cpp_CKeyFramedModel_export_FUN_00478e10 ; 0047d874
        ;   XREF to: 00478e10 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_export_FUN_00478e10(CKeyFramedModel * this_ptr, char * output_filename)
    MOV dword ptr [EBP + 0x2a],EBX      ; 0047d879
    ADD ESP,0x8                         ; 0047d87c
    JMP 0x0047d6c7                      ; 0047d87f
        ;   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)  ; LAB_0047d6c7
    MOV EAX,0x620939                    ; 0047d884 | = "You haven't crammed this model.  Save..."
        ;   Label: LAB_0047d884
    PUSH EAX                            ; 0047d889 | = "You haven't crammed this model.  Save..."
    MOV ESI,dword ptr [0x00678a60]      ; 0047d88a | g_CEditorToolsPtr
    PUSH ESI                            ; 0047d890 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showYesNoDialog1_FUN_0049f060 ; 0047d891
        ;   XREF to: 0049f060 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showYesNoDialog1_FUN_0049f060(CEditorTools * this_ptr, char * format_string)
    ADD ESP,0x8                         ; 0047d896
    TEST EAX,EAX                        ; 0047d899
    JNZ 0x0047d83f                      ; 0047d89b
        ;   XREF to: 0047d83f (CONDITIONAL_JUMP)  ; LAB_0047d83f
    JMP 0x0047d6c7                      ; 0047d89d
        ;   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)  ; LAB_0047d6c7
    MOV EAX,0x620987                    ; 0047d8a2 | = "Nothing to save!"
        ;   Label: LAB_0047d8a2
    PUSH EAX                            ; 0047d8a7 | = "Nothing to save!"
    MOV ECX,dword ptr [0x00678a60]      ; 0047d8a8 | g_CEditorToolsPtr
    PUSH ECX                            ; 0047d8ae | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0047d8af
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0047d8b4
    JMP 0x0047d6c7                      ; 0047d8b7
        ;   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)  ; LAB_0047d6c7
    MOV ESI,0x620998                    ; 0047d8bc | = "models\\"
        ;   Label: LAB_0047d8bc
    LEA EDI,[EBP + 0xfffffc86]          ; 0047d8c1
    PUSH EDI                            ; 0047d8c7
    MOV AL,byte ptr [ESI]               ; 0047d8c8 | = "models\\" | s_dels\_0062099a
        ;   Label: LAB_0047d8c8
    MOV byte ptr [EDI],AL               ; 0047d8ca
    CMP AL,0x0                          ; 0047d8cc
    JZ 0x0047d8e0                       ; 0047d8ce
        ;   XREF to: 0047d8e0 (CONDITIONAL_JUMP)  ; LAB_0047d8e0
    MOV AL,byte ptr [ESI + 0x1]         ; 0047d8d0 | s_odels_00620999 | s_els\_0062099b
    ADD ESI,0x2                         ; 0047d8d3
    MOV byte ptr [EDI + 0x1],AL         ; 0047d8d6
    ADD EDI,0x2                         ; 0047d8d9
    CMP AL,0x0                          ; 0047d8dc
    JNZ 0x0047d8c8                      ; 0047d8de
        ;   XREF to: 0047d8c8 (CONDITIONAL_JUMP)  ; LAB_0047d8c8
    POP EDI                             ; 0047d8e0
        ;   Label: LAB_0047d8e0
    PUSH 0x1                            ; 0047d8e1
    LEA EAX,[EBP + 0xfffffc86]          ; 0047d8e3
    PUSH EAX                            ; 0047d8e9
    MOV EAX,0x6209a0                    ; 0047d8ea | = "*.s3d"
    PUSH EAX                            ; 0047d8ef | = "*.s3d"
    MOV EAX,0x6209a6                    ; 0047d8f0 | = "Import Keyframed model"
    PUSH EAX                            ; 0047d8f5 | = "Import Keyframed model"
    MOV ESI,dword ptr [0x00678a60]      ; 0047d8f6 | g_CEditorToolsPtr
    PUSH ESI                            ; 0047d8fc | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420 ; 0047d8fd
        ;   XREF to: 0049f420 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420(CEditorTools * this_ptr, char * title_text, char * search_pattern, char * initial_path, ...)
    ADD ESP,0x14                        ; 0047d902
    TEST EAX,EAX                        ; 0047d905
    JZ 0x0047d6c7                       ; 0047d907
        ;   XREF to: 0047d6c7 (CONDITIONAL_JUMP)  ; LAB_0047d6c7
    LEA EAX,[EBP + 0xfffffc86]          ; 0047d90d
    PUSH EAX                            ; 0047d913
    MOV EDI,dword ptr [EBP + 0x92]      ; 0047d914
    PUSH EDI                            ; 0047d91a
    CALL core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330 ; 0047d91b
        ;   XREF to: 00479330 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330(CKeyFramedModel * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0047d920
    XOR EAX,EAX                         ; 0047d923
    PUSH EAX                            ; 0047d925
    PUSH EDI                            ; 0047d926
    PUSH EAX                            ; 0047d927
    PUSH EAX                            ; 0047d928
    MOV dword ptr [EBP + 0x2a],EAX      ; 0047d929
    LEA EAX,[EBP + 0xfffffc86]          ; 0047d92c
    PUSH EAX                            ; 0047d932
    CALL crt_string.c_splitpath_FUN_005ff178 ; 0047d933
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 0047d938
    MOV ESI,0x6209bd                    ; 0047d93b | = ".kfm"
    PUSH EDI                            ; 0047d940
    SUB ECX,ECX                         ; 0047d941
    DEC ECX                             ; 0047d943
    MOV AL,0x0                          ; 0047d944
    SCASB.REPNE ES:EDI                  ; 0047d946
    DEC EDI                             ; 0047d948
    MOV AL,byte ptr [ESI]               ; 0047d949 | = ".kfm" | s_fm_006209bf
        ;   Label: LAB_0047d949
    MOV byte ptr [EDI],AL               ; 0047d94b
    CMP AL,0x0                          ; 0047d94d
    JZ 0x0047d961                       ; 0047d94f
        ;   XREF to: 0047d961 (CONDITIONAL_JUMP)  ; LAB_0047d961
    MOV AL,byte ptr [ESI + 0x1]         ; 0047d951 | s_kfm_006209bd+1 | s_m_006209c0
    ADD ESI,0x2                         ; 0047d954
    MOV byte ptr [EDI + 0x1],AL         ; 0047d957
    ADD EDI,0x2                         ; 0047d95a
    CMP AL,0x0                          ; 0047d95d
    JNZ 0x0047d949                      ; 0047d95f
        ;   XREF to: 0047d949 (CONDITIONAL_JUMP)  ; LAB_0047d949
    POP EDI                             ; 0047d961
        ;   Label: LAB_0047d961
    JMP 0x0047d6c7                      ; 0047d962
        ;   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)  ; LAB_0047d6c7
    PUSH 0x1                            ; 0047d967
        ;   Label: LAB_0047d967
    LEA EAX,[EBP + 0xfffff1de]          ; 0047d969
    PUSH EAX                            ; 0047d96f
    PUSH 0x670108                       ; 0047d970 | g_NetworkModelFilename
    CALL core_dmodel.cpp_copyFile_FUN_0047c930 ; 0047d975
        ;   XREF to: 0047c930 (UNCONDITIONAL_CALL)  ; int core_dmodel.cpp_copyFile_FUN_0047c930(char * source_filename, char * destination_filename, int show_error_if_missing)
    ADD ESP,0xc                         ; 0047d97a
    TEST EAX,EAX                        ; 0047d97d
    JZ 0x0047d6c7                       ; 0047d97f
        ;   XREF to: 0047d6c7 (CONDITIONAL_JUMP)  ; LAB_0047d6c7
    LEA EAX,[EBP + 0xfffff4f6]          ; 0047d985
    PUSH EAX                            ; 0047d98b
    LEA EAX,[EBP + 0xfffff9f6]          ; 0047d98c
    PUSH EAX                            ; 0047d992
    PUSH 0x0                            ; 0047d993
    PUSH 0x0                            ; 0047d995
    LEA EAX,[EBP + 0xfffffc86]          ; 0047d997
    PUSH EAX                            ; 0047d99d
    CALL crt_file.c_makepath_FUN_005febfc ; 0047d99e
        ;   XREF to: 005febfc (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005febfc(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0047d9a3
    LEA EAX,[EBP + 0xfffffc86]          ; 0047d9a6
    PUSH EAX                            ; 0047d9ac
    MOV EAX,dword ptr [EBP + 0x92]      ; 0047d9ad
    PUSH EAX                            ; 0047d9b3
    XOR EDI,EDI                         ; 0047d9b4
    CALL core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0 ; 0047d9b6
        ;   XREF to: 00476db0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0(CKeyFramedModel * this_ptr, char * filename)
    MOV EAX,dword ptr [EBP + 0x92]      ; 0047d9bb
    MOV EDX,0x1                         ; 0047d9c1
    ADD ESP,0x8                         ; 0047d9c6
    MOV ECX,dword ptr [EAX + 0x120]     ; 0047d9c9
    MOV dword ptr [EBP + 0x2a],EDX      ; 0047d9cf
    TEST ECX,ECX                        ; 0047d9d2
    JLE 0x0047d6c7                      ; 0047d9d4
        ;   XREF to: 0047d6c7 (CONDITIONAL_JUMP)  ; LAB_0047d6c7
    MOV EBX,dword ptr [EBP + 0x4a]      ; 0047d9da
    ADD EBX,0x8                         ; 0047d9dd
    XOR ESI,ESI                         ; 0047d9e0
    PUSH 0x620a0b                       ; 0047d9e2 | = "art"
        ;   Label: LAB_0047d9e2
    PUSH ESI                            ; 0047d9e7
    LEA EAX,[EBP + 0xfffff6f6]          ; 0047d9e8
    PUSH EAX                            ; 0047d9ee
    LEA EAX,[EBP + 0x76]                ; 0047d9ef
    PUSH EAX                            ; 0047d9f2
    PUSH EBX                            ; 0047d9f3
    CALL core_dmodel.cpp_copyTextureFiles_FUN_0047ca50 ; 0047d9f4
        ;   XREF to: 0047ca50 (UNCONDITIONAL_CALL)  ; int core_dmodel.cpp_copyTextureFiles_FUN_0047ca50(char * filename, char * source_drive, char * source_directory, char * destination_drive, ...)
    ADD ESP,0x14                        ; 0047d9f9
    TEST EAX,EAX                        ; 0047d9fc
    JZ 0x0047da19                       ; 0047d9fe
        ;   XREF to: 0047da19 (CONDITIONAL_JUMP)  ; LAB_0047da19
    MOV EAX,dword ptr [EBP + 0x92]      ; 0047da00
    INC EDI                             ; 0047da06
    MOV EDX,dword ptr [EAX + 0x120]     ; 0047da07
    ADD EBX,0x48                        ; 0047da0d
    CMP EDI,EDX                         ; 0047da10
    JL 0x0047d9e2                       ; 0047da12
        ;   XREF to: 0047d9e2 (CONDITIONAL_JUMP)  ; LAB_0047d9e2
    JMP 0x0047d6c7                      ; 0047da14
        ;   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)  ; LAB_0047d6c7
    MOV EAX,dword ptr [EBP + 0x92]      ; 0047da19
        ;   Label: LAB_0047da19
    PUSH EAX                            ; 0047da1f
    CALL core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690 ; 0047da20
        ;   XREF to: 00477690 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 0047da25
    JMP 0x0047d6c7                      ; 0047da28
        ;   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)  ; LAB_0047d6c7
    MOV EAX,dword ptr [EBP + 0x92]      ; 0047da2d
        ;   Label: LAB_0047da2d
    MOV EAX,dword ptr [EAX + 0x100]     ; 0047da33
    CMP EAX,0x1                         ; 0047da39
    JL 0x0047db0d                       ; 0047da3c
        ;   XREF to: 0047db0d (CONDITIONAL_JUMP)  ; LAB_0047db0d
    MOV EDI,0x670108                    ; 0047da42 | g_NetworkModelFilename
    PUSH 0x1                            ; 0047da47
        ;   Label: LAB_0047da47
    PUSH 0xc8                           ; 0047da49
    PUSH EDI                            ; 0047da4e | g_NetworkModelFilename
    PUSH 0x620a18                       ; 0047da4f | = "Enter network model filename (*.KFM)"
    MOV ECX,dword ptr [0x00678a60]      ; 0047da54 | g_CEditorToolsPtr
    PUSH ECX                            ; 0047da5a | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 0047da5b
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 0047da60
    TEST EAX,EAX                        ; 0047da63
    JZ 0x0047d6c7                       ; 0047da65
        ;   XREF to: 0047d6c7 (CONDITIONAL_JUMP)  ; LAB_0047d6c7
    LEA EAX,[EBP + 0xfffff7f6]          ; 0047da6b
    PUSH EAX                            ; 0047da71
    LEA EAX,[EBP + 0xfffff8f6]          ; 0047da72
    PUSH EAX                            ; 0047da78
    LEA EAX,[EBP + 0xfffff5f6]          ; 0047da79
    PUSH EAX                            ; 0047da7f
    LEA EAX,[EBP + 0x7a]                ; 0047da80
    PUSH EAX                            ; 0047da83
    PUSH EDI                            ; 0047da84 | g_NetworkModelFilename
    CALL crt_string.c_splitpath_FUN_005ff178 ; 0047da85
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    MOV CH,byte ptr [EBP + 0xfffff7f6]  ; 0047da8a
    ADD ESP,0x14                        ; 0047da90
    TEST CH,CH                          ; 0047da93
    JZ 0x0047db27                       ; 0047da95
        ;   XREF to: 0047db27 (CONDITIONAL_JUMP)  ; LAB_0047db27
    PUSH EDI                            ; 0047da9b | g_NetworkModelFilename
    MOV EBX,dword ptr [EBP + 0x92]      ; 0047da9c
    PUSH EBX                            ; 0047daa2
    CALL core_dmodel.cpp_CKeyFramedModel_export_FUN_00478e10 ; 0047daa3
        ;   XREF to: 00478e10 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_export_FUN_00478e10(CKeyFramedModel * this_ptr, char * output_filename)
    MOV EAX,dword ptr [EBP + 0x92]      ; 0047daa8
    ADD ESP,0x8                         ; 0047daae
    MOV ESI,dword ptr [EAX + 0x120]     ; 0047dab1
    XOR EBX,EBX                         ; 0047dab7
    TEST ESI,ESI                        ; 0047dab9
    JLE 0x0047daf6                      ; 0047dabb
        ;   XREF to: 0047daf6 (CONDITIONAL_JUMP)  ; LAB_0047daf6
    MOV ESI,dword ptr [EBP + 0x4e]      ; 0047dabd
    ADD ESI,0x8                         ; 0047dac0
    LEA EAX,[EBP + 0xfffff5f6]          ; 0047dac3
        ;   Label: LAB_0047dac3
    PUSH EAX                            ; 0047dac9
    LEA EAX,[EBP + 0x7a]                ; 0047daca
    PUSH EAX                            ; 0047dacd
    PUSH 0x620a41                       ; 0047dace | = "art"
    PUSH 0x0                            ; 0047dad3
    PUSH ESI                            ; 0047dad5
    CALL core_dmodel.cpp_copyTextureFiles_FUN_0047ca50 ; 0047dad6
        ;   XREF to: 0047ca50 (UNCONDITIONAL_CALL)  ; int core_dmodel.cpp_copyTextureFiles_FUN_0047ca50(char * filename, char * source_drive, char * source_directory, char * destination_drive, ...)
    ADD ESP,0x14                        ; 0047dadb
    TEST EAX,EAX                        ; 0047dade
    JZ 0x0047daf6                       ; 0047dae0
        ;   XREF to: 0047daf6 (CONDITIONAL_JUMP)  ; LAB_0047daf6
    MOV EAX,dword ptr [EBP + 0x92]      ; 0047dae2
    INC EBX                             ; 0047dae8
    MOV EDX,dword ptr [EAX + 0x120]     ; 0047dae9
    ADD ESI,0x48                        ; 0047daef
    CMP EBX,EDX                         ; 0047daf2
    JL 0x0047dac3                       ; 0047daf4
        ;   XREF to: 0047dac3 (CONDITIONAL_JUMP)  ; LAB_0047dac3
    MOV EAX,dword ptr [EBP + 0x92]      ; 0047daf6
        ;   Label: LAB_0047daf6
    CMP EBX,dword ptr [EAX + 0x120]     ; 0047dafc
    JGE 0x0047d6c7                      ; 0047db02
        ;   XREF to: 0047d6c7 (CONDITIONAL_JUMP)  ; LAB_0047d6c7
    JMP 0x0047da47                      ; 0047db08
        ;   XREF to: 0047da47 (UNCONDITIONAL_JUMP)  ; LAB_0047da47
    MOV EAX,0x620a0f                    ; 0047db0d | = "No model"
        ;   Label: LAB_0047db0d
    PUSH EAX                            ; 0047db12 | = "No model"
    MOV EBX,dword ptr [0x00678a60]      ; 0047db13 | g_CEditorToolsPtr
    PUSH EBX                            ; 0047db19 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0047db1a
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0047db1f
    JMP 0x0047d6c7                      ; 0047db22
        ;   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)  ; LAB_0047d6c7
    PUSH 0x620a3d                       ; 0047db27 | = "kfm"
        ;   Label: LAB_0047db27
    LEA EAX,[EBP + 0xfffff8f6]          ; 0047db2c
    PUSH EAX                            ; 0047db32
    LEA EAX,[EBP + 0xfffff5f6]          ; 0047db33
    PUSH EAX                            ; 0047db39
    LEA EAX,[EBP + 0x7a]                ; 0047db3a
    PUSH EAX                            ; 0047db3d
    PUSH EDI                            ; 0047db3e | g_NetworkModelFilename
    CALL crt_file.c_makepath_FUN_005febfc ; 0047db3f
        ;   XREF to: 005febfc (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005febfc(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0047db44
    JMP 0x0047da47                      ; 0047db47
        ;   XREF to: 0047da47 (UNCONDITIONAL_JUMP)  ; LAB_0047da47
    MOV EAX,dword ptr [EBP + 0x92]      ; 0047db4c
        ;   Label: LAB_0047db4c
    MOV EAX,dword ptr [EAX + 0x100]     ; 0047db52
    CMP EAX,0x1                         ; 0047db58
    JGE 0x0047db77                      ; 0047db5b
        ;   XREF to: 0047db77 (CONDITIONAL_JUMP)  ; LAB_0047db77
    MOV EAX,0x620a45                    ; 0047db5d | = "Nothing to cram!"
    PUSH EAX                            ; 0047db62 | = "Nothing to cram!"
    MOV ECX,dword ptr [0x00678a60]      ; 0047db63 | g_CEditorToolsPtr
    PUSH ECX                            ; 0047db69 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0047db6a
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0047db6f
    JMP 0x0047d6c7                      ; 0047db72
        ;   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)  ; LAB_0047d6c7
    MOV ESI,0x1                         ; 0047db77
        ;   Label: LAB_0047db77
    PUSH ESI                            ; 0047db7c
    PUSH 0x4                            ; 0047db7d
    PUSH ESI                            ; 0047db7f
    PUSH ESI                            ; 0047db80
    LEA EAX,[EBP + 0x52]                ; 0047db81
    PUSH EAX                            ; 0047db84
    MOV EAX,0x620a56                    ; 0047db85 | = "Enter number of crams"
    PUSH EAX                            ; 0047db8a | = "Enter number of crams"
    MOV EDI,dword ptr [0x00678a60]      ; 0047db8b | g_CEditorToolsPtr
    PUSH EDI                            ; 0047db91 | g_CEditorToolsInstance
    MOV dword ptr [EBP + 0x52],ESI      ; 0047db92
    CALL shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020 ; 0047db95
        ;   XREF to: 004a0020 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020(CEditorTools * this_ptr, char * prompt_text, int * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 0047db9a
    TEST EAX,EAX                        ; 0047db9d
    JZ 0x0047d6c7                       ; 0047db9f
        ;   XREF to: 0047d6c7 (CONDITIONAL_JUMP)  ; LAB_0047d6c7
    PUSH 0x0                            ; 0047dba5
    LEA EAX,[EBP + 0xfffffc86]          ; 0047dba7
    PUSH EAX                            ; 0047dbad
    PUSH 0x0                            ; 0047dbae
    PUSH 0x0                            ; 0047dbb0
    MOV EAX,dword ptr [EBP + 0x92]      ; 0047dbb2
    PUSH EAX                            ; 0047dbb8
    CALL crt_string.c_splitpath_FUN_005ff178 ; 0047dbb9
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 0047dbbe
    PUSH ESI                            ; 0047dbc1
    CALL shape_design.c_initializeTextureManager_FUN_0046a880 ; 0047dbc2
        ;   XREF to: 0046a880 (UNCONDITIONAL_CALL)  ; void shape_design.c_initializeTextureManager_FUN_0046a880(int initialization_mode)
    ADD ESP,0x4                         ; 0047dbc7
    PUSH 0x40                           ; 0047dbca
    CALL shape_design.c_setTextureQualityParameter_FUN_0046a8e0 ; 0047dbcc
        ;   XREF to: 0046a8e0 (UNCONDITIONAL_CALL)  ; void shape_design.c_setTextureQualityParameter_FUN_0046a8e0(int texture_quality_param)
    ADD ESP,0x4                         ; 0047dbd1
    MOV EDX,dword ptr [EBP + 0x52]      ; 0047dbd4
    PUSH EDX                            ; 0047dbd7
    CALL shape_design.c_calculateTextureQualityLevel_FUN_0046a930 ; 0047dbd8
        ;   XREF to: 0046a930 (UNCONDITIONAL_CALL)  ; int shape_design.c_calculateTextureQualityLevel_FUN_0046a930(int texture_parameter)
    ADD ESP,0x4                         ; 0047dbdd
    XOR DH,DH                           ; 0047dbe0
    LEA EDI,[EAX + ESI*0x1]             ; 0047dbe2
    MOV byte ptr [EAX + EBP*0x1 + 0xfffffc86],DH ; 0047dbe5
    XOR EBX,EBX                         ; 0047dbec
    PUSH 0x1                            ; 0047dbee
        ;   Label: LAB_0047dbee
    PUSH EDI                            ; 0047dbf0
    LEA EAX,[EBP + 0xfffffc86]          ; 0047dbf1
    PUSH EAX                            ; 0047dbf7
    PUSH 0x620a6c                       ; 0047dbf8 | = "Enter base name for cram"
    MOV EAX,[0x00678a60]                ; 0047dbfd | g_CEditorToolsPtr
    PUSH EAX                            ; 0047dc02 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 0047dc03
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 0047dc08
    TEST EAX,EAX                        ; 0047dc0b
    JZ 0x0047d6c7                       ; 0047dc0d
        ;   XREF to: 0047d6c7 (CONDITIONAL_JUMP)  ; LAB_0047d6c7
    CMP BL,byte ptr [EBP + 0xfffffc86]  ; 0047dc13
    JZ 0x0047dcaa                       ; 0047dc19
        ;   XREF to: 0047dcaa (CONDITIONAL_JUMP)  ; LAB_0047dcaa
    MOV EDX,0x40                        ; 0047dc1f
    MOV EBX,EDX                         ; 0047dc24
    MOV dword ptr [EBP + 0x56],EDX      ; 0047dc26
    MOV ESI,0x100                       ; 0047dc29
    MOV EDI,0x1                         ; 0047dc2e
    PUSH EDI                            ; 0047dc33
        ;   Label: LAB_0047dc33
    PUSH ESI                            ; 0047dc34
    PUSH EBX                            ; 0047dc35
    PUSH EDI                            ; 0047dc36
    LEA EAX,[EBP + 0x56]                ; 0047dc37
    PUSH EAX                            ; 0047dc3a
    PUSH 0x620a9b                       ; 0047dc3b | = "Enter crams output size"
    MOV EAX,[0x00678a60]                ; 0047dc40 | g_CEditorToolsPtr
    PUSH EAX                            ; 0047dc45 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020 ; 0047dc46
        ;   XREF to: 004a0020 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020(CEditorTools * this_ptr, char * prompt_text, int * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 0047dc4b
    TEST EAX,EAX                        ; 0047dc4e
    JZ 0x0047d6c7                       ; 0047dc50
        ;   XREF to: 0047d6c7 (CONDITIONAL_JUMP)  ; LAB_0047d6c7
    MOV EDX,dword ptr [EBP + 0x56]      ; 0047dc56
    CMP EBX,EDX                         ; 0047dc59
    JZ 0x0047dc7f                       ; 0047dc5b
        ;   XREF to: 0047dc7f (CONDITIONAL_JUMP)  ; LAB_0047dc7f
    CMP ESI,EDX                         ; 0047dc5d
    JZ 0x0047dc7f                       ; 0047dc5f
        ;   XREF to: 0047dc7f (CONDITIONAL_JUMP)  ; LAB_0047dc7f
    CMP EDX,0x80                        ; 0047dc61
    JZ 0x0047dc7f                       ; 0047dc67
        ;   XREF to: 0047dc7f (CONDITIONAL_JUMP)  ; LAB_0047dc7f
    PUSH 0x620ab3                       ; 0047dc69 | = "Cram size must be 64, 128, or 256"
    MOV EDX,dword ptr [0x00678a60]      ; 0047dc6e | g_CEditorToolsPtr
    PUSH EDX                            ; 0047dc74 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0047dc75
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0047dc7a
    JMP 0x0047dc33                      ; 0047dc7d
        ;   XREF to: 0047dc33 (UNCONDITIONAL_JUMP)  ; LAB_0047dc33
    MOV ECX,dword ptr [EBP + 0x56]      ; 0047dc7f
        ;   Label: LAB_0047dc7f
    PUSH ECX                            ; 0047dc82
    MOV EBX,dword ptr [EBP + 0x52]      ; 0047dc83
    PUSH EBX                            ; 0047dc86
    LEA EAX,[EBP + 0xfffffc86]          ; 0047dc87
    PUSH EAX                            ; 0047dc8d
    MOV ESI,dword ptr [EBP + 0x92]      ; 0047dc8e
    MOV EDI,0x1                         ; 0047dc94
    PUSH ESI                            ; 0047dc99
    MOV dword ptr [EBP + 0x2a],EDI      ; 0047dc9a
    CALL core_dmodel.cpp_CKeyFramedModel_packTexturesToAtlases_FUN_0047a3e0 ; 0047dc9d
        ;   XREF to: 0047a3e0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_packTexturesToAtlases_FUN_0047a3e0(CKeyFramedModel * model_ptr, char * atlas_filename, int quality_parameter, int pack_parameter)
    ADD ESP,0x10                        ; 0047dca2
    JMP 0x0047d6c7                      ; 0047dca5
        ;   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)  ; LAB_0047d6c7
    PUSH 0x620a85                       ; 0047dcaa | = "Must enter something!"
        ;   Label: LAB_0047dcaa
    MOV ECX,dword ptr [0x00678a60]      ; 0047dcaf | g_CEditorToolsPtr
    PUSH ECX                            ; 0047dcb5 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0047dcb6
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0047dcbb
    JMP 0x0047dbee                      ; 0047dcbe
        ;   XREF to: 0047dbee (UNCONDITIONAL_JUMP)  ; LAB_0047dbee
    MOV EAX,dword ptr [EBP + 0x92]      ; 0047dcc3
        ;   Label: LAB_0047dcc3
    MOV EAX,dword ptr [EAX + 0x100]     ; 0047dcc9
    TEST EAX,EAX                        ; 0047dccf
    JLE 0x0047dd6a                      ; 0047dcd1
        ;   XREF to: 0047dd6a (CONDITIONAL_JUMP)  ; LAB_0047dd6a
    PUSH 0x1                            ; 0047dcd7
    PUSH 0x40000000                     ; 0047dcd9
    PUSH 0x0                            ; 0047dcde
    PUSH 0x1                            ; 0047dce0
    LEA EAX,[EBP + 0x5a]                ; 0047dce2
    PUSH EAX                            ; 0047dce5
    MOV EAX,0x620ad5                    ; 0047dce6 | = "Enter vertex tolerance"
    PUSH EAX                            ; 0047dceb | = "Enter vertex tolerance"
    MOV EAX,[0x00678a60]                ; 0047dcec | g_CEditorToolsPtr
    MOV EDI,0x3c23d70a                  ; 0047dcf1
    PUSH EAX                            ; 0047dcf6 | g_CEditorToolsInstance
    MOV dword ptr [EBP + 0x5a],EDI      ; 0047dcf7
    CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0 ; 0047dcfa
        ;   XREF to: 004a00f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0(CEditorTools * this_ptr, char * prompt_text, float * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 0047dcff
    TEST EAX,EAX                        ; 0047dd02
    JZ 0x0047d6c7                       ; 0047dd04
        ;   XREF to: 0047d6c7 (CONDITIONAL_JUMP)  ; LAB_0047d6c7
    PUSH 0x1                            ; 0047dd0a
    PUSH 0x42b40000                     ; 0047dd0c
    PUSH 0x0                            ; 0047dd11
    PUSH 0x1                            ; 0047dd13
    LEA EAX,[EBP + 0x5e]                ; 0047dd15
    PUSH EAX                            ; 0047dd18
    MOV EAX,0x620aec                    ; 0047dd19 | = "Enter angle tolerance (degrees)"
    PUSH EAX                            ; 0047dd1e | = "Enter angle tolerance (degrees)"
    MOV ECX,dword ptr [0x00678a60]      ; 0047dd1f | g_CEditorToolsPtr
    MOV EDX,0x40800000                  ; 0047dd25
    PUSH ECX                            ; 0047dd2a | g_CEditorToolsInstance
    MOV dword ptr [EBP + 0x5e],EDX      ; 0047dd2b
    CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0 ; 0047dd2e
        ;   XREF to: 004a00f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0(CEditorTools * this_ptr, char * prompt_text, float * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 0047dd33
    TEST EAX,EAX                        ; 0047dd36
    JZ 0x0047d6c7                       ; 0047dd38
        ;   XREF to: 0047d6c7 (CONDITIONAL_JUMP)  ; LAB_0047d6c7
    FLD float ptr [EBP + 0x5e]          ; 0047dd3e
    FMUL double ptr [0x00620dfb]        ; 0047dd41 | DOUBLE_00620dfb
    FMUL double ptr [0x00620e0b]        ; 0047dd47 | DOUBLE_00620e0b
    SUB ESP,0x4                         ; 0047dd4d
    MOV EBX,dword ptr [EBP + 0x92]      ; 0047dd50
    FSTP float ptr [ESP]                ; 0047dd56
    PUSH dword ptr [EBP + 0x5a]         ; 0047dd59
    PUSH EBX                            ; 0047dd5c
    CALL core_dmodel.cpp_CKeyFramedModel_reducePolygons_FUN_0047aa00 ; 0047dd5d
        ;   XREF to: 0047aa00 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_reducePolygons_FUN_0047aa00(CKeyFramedModel * this_ptr, float weld_tolerance, float angle_threshold_radians)
    ADD ESP,0xc                         ; 0047dd62
    JMP 0x0047d6c7                      ; 0047dd65
        ;   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)  ; LAB_0047d6c7
    MOV EAX,0x620b0c                    ; 0047dd6a | = "Nothing to reduce!"
        ;   Label: LAB_0047dd6a
    PUSH EAX                            ; 0047dd6f | = "Nothing to reduce!"
    MOV ESI,dword ptr [0x00678a60]      ; 0047dd70 | g_CEditorToolsPtr
    PUSH ESI                            ; 0047dd76 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0047dd77
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0047dd7c
    JMP 0x0047d6c7                      ; 0047dd7f
        ;   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)  ; LAB_0047d6c7
    MOV EAX,dword ptr [EBP + 0x92]      ; 0047dd84
        ;   Label: LAB_0047dd84
    MOV EAX,dword ptr [EAX + 0x100]     ; 0047dd8a
    TEST EAX,EAX                        ; 0047dd90
    JLE 0x0047ddb7                      ; 0047dd92
        ;   XREF to: 0047ddb7 (CONDITIONAL_JUMP)  ; LAB_0047ddb7
    MOV ECX,dword ptr [EBP + 0x92]      ; 0047dd94
    PUSH ECX                            ; 0047dd9a
    CALL core_dmodel.cpp_CKeyFramedModel_removeDegeneratePolygons_FUN_0047bdb0 ; 0047dd9b
        ;   XREF to: 0047bdb0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_removeDegeneratePolygons_FUN_0047bdb0(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 0047dda0
    MOV EBX,dword ptr [EBP + 0x92]      ; 0047dda3
    PUSH EBX                            ; 0047dda9
    CALL core_dmodel.cpp_CKeyFramedModel_removeDuplicatePolygons_FUN_0047bbc0 ; 0047ddaa
        ;   XREF to: 0047bbc0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_removeDuplicatePolygons_FUN_0047bbc0(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 0047ddaf
    JMP 0x0047d6c7                      ; 0047ddb2
        ;   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)  ; LAB_0047d6c7
    MOV EAX,0x620b1f                    ; 0047ddb7 | = "Nothing to do!"
        ;   Label: LAB_0047ddb7
    PUSH EAX                            ; 0047ddbc | = "Nothing to do!"
    MOV EDX,dword ptr [0x00678a60]      ; 0047ddbd | g_CEditorToolsPtr
    PUSH EDX                            ; 0047ddc3 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0047ddc4
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0047ddc9
    JMP 0x0047d6c7                      ; 0047ddcc
        ;   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)  ; LAB_0047d6c7
    MOV EAX,dword ptr [EBP + 0x92]      ; 0047ddd1
        ;   Label: LAB_0047ddd1
    MOV EAX,dword ptr [EAX + 0x100]     ; 0047ddd7
    TEST EAX,EAX                        ; 0047dddd
    JLE 0x0047de27                      ; 0047dddf
        ;   XREF to: 0047de27 (CONDITIONAL_JUMP)  ; LAB_0047de27
    PUSH 0x0                            ; 0047dde1
    PUSH 0x104                          ; 0047dde3
    LEA EAX,[EBP + 0xfffff3f2]          ; 0047dde8
    PUSH EAX                            ; 0047ddee
    MOV EAX,0x620b2e                    ; 0047ddef | = "Enter S3D filename"
    PUSH EAX                            ; 0047ddf4 | = "Enter S3D filename"
    MOV EDI,dword ptr [0x00678a60]      ; 0047ddf5 | g_CEditorToolsPtr
    PUSH EDI                            ; 0047ddfb | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 0047ddfc
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 0047de01
    TEST EAX,EAX                        ; 0047de04
    JZ 0x0047d6c7                       ; 0047de06
        ;   XREF to: 0047d6c7 (CONDITIONAL_JUMP)  ; LAB_0047d6c7
    LEA EAX,[EBP + 0xfffff3f2]          ; 0047de0c
    PUSH EAX                            ; 0047de12
    MOV EAX,dword ptr [EBP + 0x92]      ; 0047de13
    PUSH EAX                            ; 0047de19
    CALL core_dmodel.cpp_CKeyFramedModel_exportToS3D_FUN_00479f30 ; 0047de1a
        ;   XREF to: 00479f30 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_exportToS3D_FUN_00479f30(CKeyFramedModel * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0047de1f
    JMP 0x0047d6c7                      ; 0047de22
        ;   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)  ; LAB_0047d6c7
    MOV EAX,0x620b41                    ; 0047de27 | = "Nothing to export!"
        ;   Label: LAB_0047de27
    PUSH EAX                            ; 0047de2c | = "Nothing to export!"
    MOV ESI,dword ptr [0x00678a60]      ; 0047de2d | g_CEditorToolsPtr
    PUSH ESI                            ; 0047de33 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0047de34
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0047de39
    JMP 0x0047d6c7                      ; 0047de3c
        ;   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)  ; LAB_0047d6c7
    MOV EAX,dword ptr [EBP + 0x92]      ; 0047de41
        ;   Label: LAB_0047de41
    MOV EAX,dword ptr [EAX + 0x100]     ; 0047de47
    TEST EAX,EAX                        ; 0047de4d
    JLE 0x0047de74                      ; 0047de4f
        ;   XREF to: 0047de74 (CONDITIONAL_JUMP)  ; LAB_0047de74
    FLD float ptr [EBP + 0x1e]          ; 0047de51
    CALL crt_math.c_round_FUN_005fe6b0  ; 0047de54
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + 0x72]        ; 0047de59
    MOV EBX,dword ptr [EBP + 0x72]      ; 0047de5c
    PUSH EBX                            ; 0047de5f
    MOV ESI,dword ptr [EBP + 0x92]      ; 0047de60
    PUSH ESI                            ; 0047de66
    CALL core_dmodel.cpp_CKeyFramedModel_recenter_FUN_0047c220 ; 0047de67
        ;   XREF to: 0047c220 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_recenter_FUN_0047c220(CKeyFramedModel * this_ptr, int frame_index)
    ADD ESP,0x8                         ; 0047de6c
    JMP 0x0047d6c7                      ; 0047de6f
        ;   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)  ; LAB_0047d6c7
    PUSH 0x620b54                       ; 0047de74 | = "Nothing to recenter!"
        ;   Label: LAB_0047de74
    MOV ECX,dword ptr [0x00678a60]      ; 0047de79 | g_CEditorToolsPtr
    PUSH ECX                            ; 0047de7f | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0047de80
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0047de85
    JMP 0x0047d6c7                      ; 0047de88
        ;   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)  ; LAB_0047d6c7
    MOV EAX,dword ptr [EBP + 0x92]      ; 0047de8d
        ;   Label: LAB_0047de8d
    MOV EAX,dword ptr [EAX + 0x100]     ; 0047de93
    TEST EAX,EAX                        ; 0047de99
    JLE 0x0047dec0                      ; 0047de9b
        ;   XREF to: 0047dec0 (CONDITIONAL_JUMP)  ; LAB_0047dec0
    FLD float ptr [EBP + 0x1e]          ; 0047de9d
    CALL crt_math.c_round_FUN_005fe6b0  ; 0047dea0
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + 0x72]        ; 0047dea5
    MOV EBX,dword ptr [EBP + 0x72]      ; 0047dea8
    PUSH EBX                            ; 0047deab
    MOV ESI,dword ptr [EBP + 0x92]      ; 0047deac
    PUSH ESI                            ; 0047deb2
    CALL core_dmodel.cpp_CKeyFramedModel_applyVertexBias_FUN_0047c2d0 ; 0047deb3
        ;   XREF to: 0047c2d0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_applyVertexBias_FUN_0047c2d0(CKeyFramedModel * this_ptr, int frame_index)
    ADD ESP,0x8                         ; 0047deb8
    JMP 0x0047d6c7                      ; 0047debb
        ;   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)  ; LAB_0047d6c7
    PUSH 0x620b69                       ; 0047dec0 | = "Nothing to bias!"
        ;   Label: LAB_0047dec0
    MOV ECX,dword ptr [0x00678a60]      ; 0047dec5 | g_CEditorToolsPtr
    PUSH ECX                            ; 0047decb | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0047decc
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0047ded1
    JMP 0x0047d6c7                      ; 0047ded4
        ;   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)  ; LAB_0047d6c7
    MOV EAX,dword ptr [EBP + 0x92]      ; 0047ded9
        ;   Label: LAB_0047ded9
    MOV EAX,dword ptr [EAX + 0x100]     ; 0047dedf
    TEST EAX,EAX                        ; 0047dee5
    JLE 0x0047e129                      ; 0047dee7
        ;   XREF to: 0047e129 (CONDITIONAL_JUMP)  ; LAB_0047e129
    FLD float ptr [EBP + 0x1e]          ; 0047deed
    CALL crt_math.c_round_FUN_005fe6b0  ; 0047def0
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + 0x72]        ; 0047def5
    MOV EBX,dword ptr [EBP + 0x72]      ; 0047def8
    LEA EAX,[EBX*0x4 + 0x0]             ; 0047defb
    SUB EAX,EBX                         ; 0047df02
    MOV ESI,dword ptr [EBP + 0x92]      ; 0047df04
    LEA EBX,[EAX*0x8 + 0x0]             ; 0047df0a
    MOV EAX,dword ptr [ESI + 0x5690]    ; 0047df11
    LEA ESI,[EAX + EBX*0x1]             ; 0047df17
    MOV EAX,dword ptr [ESI]             ; 0047df1a
    MOV dword ptr [EBP + 0xfffffeea],EAX ; 0047df1c
    LEA EAX,[ESI + 0x4]                 ; 0047df22
    MOV EAX,dword ptr [EAX]             ; 0047df25
    MOV dword ptr [EBP + 0xfffffeee],EAX ; 0047df27
    LEA EAX,[ESI + 0x8]                 ; 0047df2d
    MOV EAX,dword ptr [EAX]             ; 0047df30
    LEA EBX,[ESI + 0xc]                 ; 0047df32
    MOV dword ptr [EBP + 0xfffffef2],EAX ; 0047df35
    MOV EAX,dword ptr [EBX]             ; 0047df3b
    MOV dword ptr [EBP + 0xfffffef6],EAX ; 0047df3d
    LEA EAX,[EBX + 0x4]                 ; 0047df43
    MOV EAX,dword ptr [EAX]             ; 0047df46
    MOV dword ptr [EBP + 0xfffffefa],EAX ; 0047df48
    LEA EAX,[EBX + 0x8]                 ; 0047df4e
    LEA ESI,[EBP + -0x32]               ; 0047df51
    MOV EAX,dword ptr [EAX]             ; 0047df54
    MOV EBX,0x3f000000                  ; 0047df56
    MOV dword ptr [EBP + 0xfffffefe],EAX ; 0047df5b
    MOV dword ptr [EBP + 0x62],EBX      ; 0047df61
    LEA EBX,[EBP + 0xfffffeea]          ; 0047df64
    LEA EAX,[EBP + 0xfffffef6]          ; 0047df6a
    FLD float ptr [EBX]                 ; 0047df70
    FADD float ptr [EAX]                ; 0047df72
    FSTP float ptr [EBP + 0xffffff0e]   ; 0047df74
    FLD float ptr [EBX + 0x4]           ; 0047df7a
    FADD float ptr [EAX + 0x4]          ; 0047df7d
    FSTP float ptr [EBP + 0xffffff12]   ; 0047df80
    FLD float ptr [EBX + 0x8]           ; 0047df86
    FADD float ptr [EAX + 0x8]          ; 0047df89
    LEA EBX,[EBP + 0xffffff0e]          ; 0047df8c
    FSTP float ptr [EBP + 0xffffff16]   ; 0047df92
    LEA EAX,[EBP + 0x62]                ; 0047df98
    FLD float ptr [EBX]                 ; 0047df9b
    FMUL float ptr [EAX]                ; 0047df9d
    FSTP float ptr [EBP + -0x32]        ; 0047df9f
    FLD float ptr [EBX + 0x4]           ; 0047dfa2
    FMUL float ptr [EAX]                ; 0047dfa5
    FSTP float ptr [EBP + -0x2e]        ; 0047dfa7
    FLD float ptr [EBX + 0x8]           ; 0047dfaa
    FMUL float ptr [EAX]                ; 0047dfad
    SUB ESP,0x8                         ; 0047dfaf
    FSTP float ptr [EBP + -0x2a]        ; 0047dfb2
    FLD float ptr [ESI + 0x8]           ; 0047dfb5
    FSTP double ptr [ESP]               ; 0047dfb8
    MOV EDI,0x3f000000                  ; 0047dfbb
    SUB ESP,0x8                         ; 0047dfc0
    FLD float ptr [EBP + 0xfffffefe]    ; 0047dfc3
    FSTP double ptr [ESP]               ; 0047dfc9
    LEA EBX,[EBP + 0xfffffeea]          ; 0047dfcc
    SUB ESP,0x8                         ; 0047dfd2
    FLD float ptr [EBP + 0xfffffef2]    ; 0047dfd5
    FSTP double ptr [ESP]               ; 0047dfdb
    MOV dword ptr [EBP + 0x66],EDI      ; 0047dfde
    LEA EAX,[EBP + 0xfffffef6]          ; 0047dfe1
    FLD float ptr [EBX]                 ; 0047dfe7
    FADD float ptr [EAX]                ; 0047dfe9
    FSTP float ptr [EBP + 0xffffff3e]   ; 0047dfeb
    FLD float ptr [EBX + 0x4]           ; 0047dff1
    FADD float ptr [EAX + 0x4]          ; 0047dff4
    FSTP float ptr [EBP + 0xffffff42]   ; 0047dff7
    FLD float ptr [EBX + 0x8]           ; 0047dffd
    FADD float ptr [EAX + 0x8]          ; 0047e000
    LEA EBX,[EBP + 0xffffff3e]          ; 0047e003
    FSTP float ptr [EBP + 0xffffff46]   ; 0047e009
    LEA EAX,[EBP + 0x66]                ; 0047e00f
    FLD float ptr [EBX]                 ; 0047e012
    FMUL float ptr [EAX]                ; 0047e014
    FSTP float ptr [EBP + -0x56]        ; 0047e016
    FLD float ptr [EBX + 0x4]           ; 0047e019
    FMUL float ptr [EAX]                ; 0047e01c
    FSTP float ptr [EBP + -0x52]        ; 0047e01e
    FLD float ptr [EBX + 0x8]           ; 0047e021
    FMUL float ptr [EAX]                ; 0047e024
    LEA ESI,[EBP + -0x56]               ; 0047e026
    SUB ESP,0x8                         ; 0047e029
    FSTP float ptr [EBP + -0x4e]        ; 0047e02c
    FLD float ptr [ESI + 0x4]           ; 0047e02f
    FSTP double ptr [ESP]               ; 0047e032
    SUB ESP,0x8                         ; 0047e035
    FLD float ptr [EBP + 0xfffffefa]    ; 0047e038
    FSTP double ptr [ESP]               ; 0047e03e
    LEA ESI,[EBP + 0xffffff4a]          ; 0047e041
    SUB ESP,0x8                         ; 0047e047
    FLD float ptr [EBP + 0xfffffeee]    ; 0047e04a
    FSTP double ptr [ESP]               ; 0047e050
    MOV dword ptr [EBP + 0x6a],EDI      ; 0047e053
    LEA EBX,[EBP + 0xfffffeea]          ; 0047e056
    LEA EAX,[EBP + 0xfffffef6]          ; 0047e05c
    FLD float ptr [EBX]                 ; 0047e062
    FADD float ptr [EAX]                ; 0047e064
    FSTP float ptr [EBP + -0x1a]        ; 0047e066
    FLD float ptr [EBX + 0x4]           ; 0047e069
    FADD float ptr [EAX + 0x4]          ; 0047e06c
    FSTP float ptr [EBP + -0x16]        ; 0047e06f
    FLD float ptr [EBX + 0x8]           ; 0047e072
    LEA EBX,[EBP + 0x6a]                ; 0047e075
    FADD float ptr [EAX + 0x8]          ; 0047e078
    LEA EAX,[EBP + -0x1a]               ; 0047e07b
    FSTP float ptr [EBP + -0x12]        ; 0047e07e
    FLD float ptr [EAX]                 ; 0047e081
    FMUL float ptr [EBX]                ; 0047e083
    FSTP float ptr [EBP + 0xffffff4a]   ; 0047e085
    FLD float ptr [EAX + 0x4]           ; 0047e08b
    FMUL float ptr [EBX]                ; 0047e08e
    FSTP float ptr [EBP + 0xffffff4e]   ; 0047e090
    FLD float ptr [EAX + 0x8]           ; 0047e096
    FMUL float ptr [EBX]                ; 0047e099
    FLD float ptr [EBP + 0x1e]          ; 0047e09b
    SUB ESP,0x8                         ; 0047e09e
    CALL crt_math.c_round_FUN_005fe6b0  ; 0047e0a1
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 0047e0a6
    FSTP float ptr [EBP + 0xffffff52]   ; 0047e0a8
    FLD float ptr [ESI]                 ; 0047e0ae
    FSTP double ptr [ESP]               ; 0047e0b0
    FISTP dword ptr [EBP + 0x72]        ; 0047e0b3
    SUB ESP,0x8                         ; 0047e0b6
    FLD float ptr [EBP + 0xfffffef6]    ; 0047e0b9
    FSTP double ptr [ESP]               ; 0047e0bf
    MOV EDX,dword ptr [EBP + 0x72]      ; 0047e0c2
    SUB ESP,0x8                         ; 0047e0c5
    FLD float ptr [EBP + 0xfffffeea]    ; 0047e0c8
    FSTP double ptr [ESP]               ; 0047e0ce
    PUSH EDX                            ; 0047e0d1
    MOV EAX,0x620b7a                    ; 0047e0d2 | = "Current dimensions on frame %d\nX: (%..."
    PUSH EAX                            ; 0047e0d7 | = "Current dimensions on frame %d\nX: (%..."
    LEA EAX,[EBP + 0xfffffaf6]          ; 0047e0d8
    PUSH EAX                            ; 0047e0de
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0047e0df
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x54                        ; 0047e0e4
    PUSH 0x0                            ; 0047e0e7
    LEA EAX,[EBP + 0xffffff56]          ; 0047e0e9
    PUSH EAX                            ; 0047e0ef
    LEA EAX,[EBP + 0xfffffaf6]          ; 0047e0f0
    PUSH EAX                            ; 0047e0f6
    MOV ECX,dword ptr [0x00678a60]      ; 0047e0f7 | g_CEditorToolsPtr
    PUSH ECX                            ; 0047e0fd | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_promptForValidVector_FUN_004a0300 ; 0047e0fe
        ;   XREF to: 004a0300 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidVector_FUN_004a0300(CEditorTools * editor_tools, char * prompt_text, CVector3f * result_ptr, int show_current_value)
    ADD ESP,0x10                        ; 0047e103
    TEST EAX,EAX                        ; 0047e106
    JZ 0x0047d6c7                       ; 0047e108
        ;   XREF to: 0047d6c7 (CONDITIONAL_JUMP)  ; LAB_0047d6c7
    LEA EAX,[EBP + 0xffffff56]          ; 0047e10e
    PUSH EAX                            ; 0047e114
    MOV EBX,dword ptr [EBP + 0x92]      ; 0047e115
    PUSH EBX                            ; 0047e11b
    CALL core_dmodel.cpp_CKeyFramedModel_applyBias_FUN_0047c370 ; 0047e11c
        ;   XREF to: 0047c370 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_applyBias_FUN_0047c370(CKeyFramedModel * this_ptr, CVector3f * bias_offset)
    ADD ESP,0x8                         ; 0047e121
    JMP 0x0047d6c7                      ; 0047e124
        ;   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)  ; LAB_0047d6c7
    MOV EAX,0x620c19                    ; 0047e129 | = "Nothing to bias!"
        ;   Label: LAB_0047e129
    PUSH EAX                            ; 0047e12e | = "Nothing to bias!"
    MOV ECX,dword ptr [0x00678a60]      ; 0047e12f | g_CEditorToolsPtr
    PUSH ECX                            ; 0047e135 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0047e136
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0047e13b
    JMP 0x0047d6c7                      ; 0047e13e
        ;   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)  ; LAB_0047d6c7
    MOV EAX,dword ptr [EBP + 0x92]      ; 0047e143
        ;   Label: LAB_0047e143
    MOV EAX,dword ptr [EAX + 0x100]     ; 0047e149
    TEST EAX,EAX                        ; 0047e14f
    JLE 0x0047e167                      ; 0047e151
        ;   XREF to: 0047e167 (CONDITIONAL_JUMP)  ; LAB_0047e167
    CMP dword ptr [EBP + 0x22],0x0      ; 0047e153
    SETZ AL                             ; 0047e157
    AND EAX,0xff                        ; 0047e15a
    MOV dword ptr [EBP + 0x22],EAX      ; 0047e15f
    JMP 0x0047d6c7                      ; 0047e162
        ;   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)  ; LAB_0047d6c7
    PUSH 0x620c2a                       ; 0047e167 | = "Nothing to bias!"
        ;   Label: LAB_0047e167
    MOV EDI,dword ptr [0x00678a60]      ; 0047e16c | g_CEditorToolsPtr
    PUSH EDI                            ; 0047e172 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0047e173
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0047e178
    JMP 0x0047d6c7                      ; 0047e17b
        ;   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)  ; LAB_0047d6c7
    LEA EAX,[EBP + 0xffffff62]          ; 0047e180
        ;   Label: LAB_0047e180
    PUSH EAX                            ; 0047e186
    MOV ESI,dword ptr [EBP + 0x92]      ; 0047e187
    PUSH ESI                            ; 0047e18d
    CALL core_dmodel.cpp_CKeyFramedModel_scale_FUN_0047c4d0 ; 0047e18e
        ;   XREF to: 0047c4d0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_scale_FUN_0047c4d0(CKeyFramedModel * this_ptr, CVector3f * scale_factors)
    ADD ESP,0x8                         ; 0047e193
    JMP 0x0047d6c7                      ; 0047e196
        ;   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)  ; LAB_0047d6c7
    MOV EBX,dword ptr [EBP + 0x92]      ; 0047e19b
        ;   Label: LAB_0047e19b
    PUSH dword ptr [EBP + 0xffffff62]   ; 0047e1a1
    PUSH EBX                            ; 0047e1a7
    CALL core_dmodel.cpp_CKeyFramedModel_scaleUniform_FUN_0047c4a0 ; 0047e1a8
        ;   XREF to: 0047c4a0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_scaleUniform_FUN_0047c4a0(CKeyFramedModel * this_ptr, float uniform_scale)
    ADD ESP,0x8                         ; 0047e1ad
    JMP 0x0047d6c7                      ; 0047e1b0
        ;   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)  ; LAB_0047d6c7
    PUSH 0x620d47                       ; 0047e1b5 | = "Nothing to scale!"
        ;   Label: LAB_0047e1b5
    MOV EAX,[0x00678a60]                ; 0047e1ba | g_CEditorToolsPtr
    PUSH EAX                            ; 0047e1bf | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0047e1c0
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0047e1c5
    JMP 0x0047d6c7                      ; 0047e1c8
        ;   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)  ; LAB_0047d6c7
    CMP dword ptr [EBP + 0x26],0x0      ; 0047e1cd
        ;   Label: LAB_0047e1cd
    SETZ AL                             ; 0047e1d1
    AND EAX,0xff                        ; 0047e1d4
    MOV dword ptr [EBP + 0x26],EAX      ; 0047e1d9
    JMP 0x0047d6c7                      ; 0047e1dc
        ;   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)  ; LAB_0047d6c7
    LEA EAX,[EBP + -0x4a]               ; 0047e1e1
        ;   Label: LAB_0047e1e1
    PUSH EAX                            ; 0047e1e4
    MOV EAX,dword ptr [EBP + 0x92]      ; 0047e1e5
    PUSH EAX                            ; 0047e1eb
    CALL core_dmodel.cpp_CKeyFramedModel_snapRotationToAxis_FUN_0047c5f0 ; 0047e1ec
        ;   XREF to: 0047c5f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_snapRotationToAxis_FUN_0047c5f0(CKeyFramedModel * this_ptr, CVector3f * rotation_angles)
    XOR EDX,EDX                         ; 0047e1f1
    ADD ESP,0x8                         ; 0047e1f3
    MOV dword ptr [EBP + -0x42],EDX     ; 0047e1f6
    MOV dword ptr [EBP + -0x46],EDX     ; 0047e1f9
    MOV dword ptr [EBP + -0x4a],EDX     ; 0047e1fc
    JMP 0x0047d6c7                      ; 0047e1ff
        ;   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)  ; LAB_0047d6c7
    PUSH 0x0                            ; 0047e204
        ;   Label: LAB_0047e204
    LEA EAX,[EBP + 0xfffffd4e]          ; 0047e206
    PUSH EAX                            ; 0047e20c
    MOV EAX,0x620d59                    ; 0047e20d | = "*.pth"
    PUSH EAX                            ; 0047e212 | = "*.pth"
    MOV EAX,0x620d5f                    ; 0047e213 | = "data"
    PUSH EAX                            ; 0047e218 | = "data"
    MOV EAX,0x620d64                    ; 0047e219 | = "Reorient using course"
    PUSH EAX                            ; 0047e21e | = "Reorient using course"
    MOV EDX,dword ptr [0x00678a60]      ; 0047e21f | g_CEditorToolsPtr
    PUSH EDX                            ; 0047e225 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270 ; 0047e226
        ;   XREF to: 0049f270 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270(CEditorTools * this_ptr, char * dialog_title, char * search_directory, char * file_pattern, ...)
    ADD ESP,0x18                        ; 0047e22b
    TEST EAX,EAX                        ; 0047e22e
    JZ 0x0047d6c7                       ; 0047e230
        ;   XREF to: 0047d6c7 (CONDITIONAL_JUMP)  ; LAB_0047d6c7
    XOR EDI,EDI                         ; 0047e236
    IMUL ESI,EDI,0xc                    ; 0047e238
    LEA EAX,[EBP + -0x62]               ; 0047e23b
    PUSH EAX                            ; 0047e23e
    CALL core_course.cpp_CCourse_ctor_FUN_004424c0 ; 0047e23f
        ;   XREF to: 004424c0 (UNCONDITIONAL_CALL)  ; CCourse * core_course.cpp_CCourse_ctor_FUN_004424c0(CCourse * this_ptr)
    ADD ESP,0x4                         ; 0047e244
    LEA EAX,[EBP + 0xfffffd4e]          ; 0047e247
    PUSH EAX                            ; 0047e24d
    LEA EAX,[EBP + -0x62]               ; 0047e24e
    PUSH EAX                            ; 0047e251
    CALL core_course.cpp_CCourse_load_FUN_00442580 ; 0047e252
        ;   XREF to: 00442580 (UNCONDITIONAL_CALL)  ; void core_course.cpp_CCourse_load_FUN_00442580(CCourse * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0047e257
    LEA EAX,[EBP + -0xe]                ; 0047e25a
    PUSH EAX                            ; 0047e25d
    LEA EAX,[EBP + -0x6e]               ; 0047e25e
    PUSH EAX                            ; 0047e261
    LEA EAX,[EBP + -0x62]               ; 0047e262
    PUSH 0x0                            ; 0047e265
    PUSH EAX                            ; 0047e267
    CALL core_course.cpp_CCourse_evaluate_FUN_00442710 ; 0047e268
        ;   XREF to: 00442710 (UNCONDITIONAL_CALL)  ; void core_course.cpp_CCourse_evaluate_FUN_00442710(CCourse * this_ptr, float time, CVector3f * out_pos, CVector3f * out_euler)
    ADD ESP,0x10                        ; 0047e26d
    LEA EAX,[EBP + -0xe]                ; 0047e270
    PUSH EAX                            ; 0047e273
    LEA EAX,[EBP + -0x6e]               ; 0047e274
    PUSH EAX                            ; 0047e277
    LEA EAX,[EBP + 0xfffffe7a]          ; 0047e278
    PUSH EAX                            ; 0047e27e
    CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390 ; 0047e27f
        ;   XREF to: 005f5390 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0047e284
    MOV EAX,dword ptr [EBP + 0x92]      ; 0047e287
        ;   Label: LAB_0047e287
    MOV EAX,dword ptr [EAX + 0x104]     ; 0047e28d
    CMP EDI,EAX                         ; 0047e293
    JGE 0x0047e388                      ; 0047e295
        ;   XREF to: 0047e388 (CONDITIONAL_JUMP)  ; LAB_0047e388
    MOV EAX,dword ptr [EBP + 0x92]      ; 0047e29b
    MOV EAX,dword ptr [EAX + 0x10c]     ; 0047e2a1
    FLD double ptr [0x00620e13]         ; 0047e2a7 | DOUBLE_00620e13
    FILD dword ptr [ESI + EAX*0x1]      ; 0047e2ad
    FMUL ST1                            ; 0047e2b0
    MOV EAX,dword ptr [EBP + 0x92]      ; 0047e2b2
    FSTP float ptr [EBP + -0x7a]        ; 0047e2b8
    MOV EAX,dword ptr [EAX + 0x10c]     ; 0047e2bb
    FILD dword ptr [ESI + EAX*0x1 + 0x4] ; 0047e2c1
    FMUL ST1                            ; 0047e2c5
    MOV EAX,dword ptr [EBP + 0x92]      ; 0047e2c7
    FSTP float ptr [EBP + -0x76]        ; 0047e2cd
    MOV EAX,dword ptr [EAX + 0x10c]     ; 0047e2d0
    FILD dword ptr [ESI + EAX*0x1 + 0x8] ; 0047e2d6
    LEA EAX,[EBP + 0xfffffe7a]          ; 0047e2da
    FMULP                               ; 0047e2e0
    PUSH EAX                            ; 0047e2e2
    LEA EAX,[EBP + -0x7a]               ; 0047e2e3
    PUSH EAX                            ; 0047e2e6
    LEA EAX,[EBP + 0xffffff32]          ; 0047e2e7
    PUSH EAX                            ; 0047e2ed
    FSTP float ptr [EBP + -0x72]        ; 0047e2ee
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 0047e2f1
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    MOV EBX,EAX                         ; 0047e2f6
    LEA EAX,[EBP + -0x7a]               ; 0047e2f8
    ADD ESP,0xc                         ; 0047e2fb
    CMP EAX,EBX                         ; 0047e2fe
    JNZ 0x0047e372                      ; 0047e300
        ;   XREF to: 0047e372 (CONDITIONAL_JUMP)  ; LAB_0047e372
    FLD float ptr [EBP + -0x7a]         ; 0047e302
        ;   Label: LAB_0047e302
    MOV EBX,dword ptr [EBP + 0x92]      ; 0047e305
    FLD double ptr [0x00620e1b]         ; 0047e30b | DOUBLE_00620e1b
    FXCH                                ; 0047e311
    FMUL ST1                            ; 0047e313
    MOV EBX,dword ptr [EBX + 0x10c]     ; 0047e315
    CALL crt_math.c_round_FUN_005fe6b0  ; 0047e31b
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + 0x72]        ; 0047e320
    MOV EAX,dword ptr [EBP + 0x72]      ; 0047e323
    MOV dword ptr [ESI + EBX*0x1],EAX   ; 0047e326
    FLD float ptr [EBP + -0x76]         ; 0047e329
    MOV EAX,dword ptr [EBP + 0x92]      ; 0047e32c
    FMUL ST1                            ; 0047e332
    MOV EAX,dword ptr [EAX + 0x10c]     ; 0047e334
    CALL crt_math.c_round_FUN_005fe6b0  ; 0047e33a
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    LEA EBX,[EAX + ESI*0x1]             ; 0047e33f
    FISTP dword ptr [EBP + 0x72]        ; 0047e342
    MOV EAX,dword ptr [EBP + 0x72]      ; 0047e345
    MOV dword ptr [EBX + 0x4],EAX       ; 0047e348
    FMUL float ptr [EBP + -0x72]        ; 0047e34b
    MOV EBX,dword ptr [EBP + 0x92]      ; 0047e34e
    ADD ESI,0xc                         ; 0047e354
    MOV EBX,dword ptr [EBX + 0x10c]     ; 0047e357
    CALL crt_math.c_round_FUN_005fe6b0  ; 0047e35d
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + 0x72]        ; 0047e362
    MOV EAX,dword ptr [EBP + 0x72]      ; 0047e365
    INC EDI                             ; 0047e368
    MOV dword ptr [ESI + EBX*0x1 + -0x4],EAX ; 0047e369
    JMP 0x0047e287                      ; 0047e36d
        ;   XREF to: 0047e287 (UNCONDITIONAL_JUMP)  ; LAB_0047e287
    MOV EAX,dword ptr [EBX]             ; 0047e372
        ;   Label: LAB_0047e372
    MOV dword ptr [EBP + -0x7a],EAX     ; 0047e374
    MOV EAX,dword ptr [EBX + 0x4]       ; 0047e377
    MOV dword ptr [EBP + -0x76],EAX     ; 0047e37a
    MOV EAX,dword ptr [EBX + 0x8]       ; 0047e37d
    MOV dword ptr [EBP + -0x72],EAX     ; 0047e380
    JMP 0x0047e302                      ; 0047e383
        ;   XREF to: 0047e302 (UNCONDITIONAL_JUMP)  ; LAB_0047e302
    PUSH 0x0                            ; 0047e388
        ;   Label: LAB_0047e388
    LEA EAX,[EBP + -0x62]               ; 0047e38a
    PUSH EAX                            ; 0047e38d
    CALL core_course.cpp_CCourse_dtor_FUN_004424e0 ; 0047e38e
        ;   XREF to: 004424e0 (UNCONDITIONAL_CALL)  ; CCourse * core_course.cpp_CCourse_dtor_FUN_004424e0(CCourse * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0047e393
    JMP 0x0047d6c7                      ; 0047e396
        ;   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)  ; LAB_0047d6c7
    MOV EAX,dword ptr [EBP + 0x92]      ; 0047e39b
        ;   Label: LAB_0047e39b
    MOV EAX,dword ptr [EAX + 0x100]     ; 0047e3a1
    CMP EAX,0x1                         ; 0047e3a7
    JLE 0x0047e3c5                      ; 0047e3aa
        ;   XREF to: 0047e3c5 (CONDITIONAL_JUMP)  ; LAB_0047e3c5
    MOV EAX,0x620d7a                    ; 0047e3ac | = "Can't import multi-frame model into t..."
    PUSH EAX                            ; 0047e3b1 | = "Can't import multi-frame model into t..."
    MOV EAX,[0x00678a60]                ; 0047e3b2 | g_CEditorToolsPtr
    PUSH EAX                            ; 0047e3b7 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0047e3b8
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0047e3bd
    JMP 0x0047d6c7                      ; 0047e3c0
        ;   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)  ; LAB_0047d6c7
    MOV ESI,dword ptr [EBP + 0x92]      ; 0047e3c5
        ;   Label: LAB_0047e3c5
    PUSH ESI                            ; 0047e3cb
    CALL core_dmodel.cpp_CKeyFramedModel_exportToDSE_FUN_0047e810 ; 0047e3cc
        ;   XREF to: 0047e810 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_exportToDSE_FUN_0047e810(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 0047e3d1
    CALL shape_design.c_showShapeEditorMenu_FUN_0046f290 ; 0047e3d4
        ;   XREF to: 0046f290 (UNCONDITIONAL_CALL)  ; void shape_design.c_showShapeEditorMenu_FUN_0046f290()
    PUSH ESI                            ; 0047e3d9
    CALL core_dmodel.cpp_CKeyFramedModel_importFromDSE_FUN_0047ea10 ; 0047e3da
        ;   XREF to: 0047ea10 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_importFromDSE_FUN_0047ea10(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 0047e3df
    JMP 0x0047d6c7                      ; 0047e3e2
        ;   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)  ; LAB_0047d6c7
    MOV EAX,dword ptr [EBP + 0x92]      ; 0047e3e7
        ;   Label: LAB_0047e3e7
    MOV EDI,dword ptr [EAX + 0x5698]    ; 0047e3ed
    TEST EDI,EDI                        ; 0047e3f3
    JZ 0x0047e43c                       ; 0047e3f5
        ;   XREF to: 0047e43c (CONDITIONAL_JUMP)  ; LAB_0047e43c
    MOV EBX,0xdca                       ; 0047e3f7
    MOV ECX,0x620dbb                    ; 0047e3fc | = "..\\core\\dmodel.cpp"
    MOV EAX,EDI                         ; 0047e401
    MOV dword ptr [0x02f0d944],EBX      ; 0047e403 | g_CurrentDebugLine
    MOV dword ptr [0x0067d20c],ECX      ; 0047e409 | g_CurrentDebugFilename
    JZ 0x0047e41d                       ; 0047e40f
        ;   XREF to: 0047e41d (CONDITIONAL_JUMP)  ; LAB_0047e41d
    LEA EAX,[EDI + -0x4]                ; 0047e411
    PUSH EAX                            ; 0047e414
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 0047e415
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 0047e41a
    MOV EAX,dword ptr [EBP + 0x92]      ; 0047e41d
        ;   Label: LAB_0047e41d
    MOV dword ptr [EAX + 0x5694],0x0    ; 0047e423
    MOV dword ptr [EAX + 0x5698],0x0    ; 0047e42d
    JMP 0x0047d6c7                      ; 0047e437
        ;   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)  ; LAB_0047d6c7
    MOV EAX,0x620dce                    ; 0047e43c | = "Building exact collision list"
        ;   Label: LAB_0047e43c
    PUSH EAX                            ; 0047e441 | = "Building exact collision list"
    MOV EAX,[0x00678a60]                ; 0047e442 | g_CEditorToolsPtr
    PUSH EAX                            ; 0047e447 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0047e448
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0047e44d
    MOV EDX,dword ptr [EBP + 0x92]      ; 0047e450
    PUSH EDX                            ; 0047e456
    CALL core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00478830 ; 0047e457
        ;   XREF to: 00478830 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00478830(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 0047e45c
    JMP 0x0047d6c7                      ; 0047e45f
        ;   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)  ; LAB_0047d6c7
    MOV EAX,dword ptr [EBP + 0x92]      ; 0047e464
        ;   Label: LAB_0047e464
    CMP dword ptr [EAX + 0x569c],0x0    ; 0047e46a
    SETZ AL                             ; 0047e471
    MOV EBX,dword ptr [EBP + 0x92]      ; 0047e474
    AND EAX,0xff                        ; 0047e47a
    MOV dword ptr [EBX + 0x569c],EAX    ; 0047e47f
    JMP 0x0047d6c7                      ; 0047e485
        ;   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)  ; LAB_0047d6c7
    JBE 0x0047ded9                      ; 0047e48a
        ;   XREF to: 0047ded9 (CONDITIONAL_JUMP)  ; LAB_0047ded9
        ;   Label: LAB_0047e48a
    CMP EAX,0x49                        ; 0047e490
    JNC 0x0047e4bb                      ; 0047e493
        ;   XREF to: 0047e4bb (CONDITIONAL_JUMP)  ; LAB_0047e4bb
    CMP EAX,0x44                        ; 0047e495
    JC 0x0047e204                       ; 0047e498
        ;   XREF to: 0047e204 (CONDITIONAL_JUMP)  ; LAB_0047e204
    JBE 0x0047e39b                      ; 0047e49e
        ;   XREF to: 0047e39b (CONDITIONAL_JUMP)  ; LAB_0047e39b
    CMP EAX,0x45                        ; 0047e4a4
    JBE 0x0047e3e7                      ; 0047e4a7
        ;   XREF to: 0047e3e7 (CONDITIONAL_JUMP)  ; LAB_0047e3e7
    CMP EAX,0x47                        ; 0047e4ad
    JZ 0x0047de8d                       ; 0047e4b0
        ;   XREF to: 0047de8d (CONDITIONAL_JUMP)  ; LAB_0047de8d
    JMP 0x0047d6c7                      ; 0047e4b6
        ;   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)  ; LAB_0047d6c7
    JBE 0x0047e143                      ; 0047e4bb
        ;   XREF to: 0047e143 (CONDITIONAL_JUMP)  ; LAB_0047e143
        ;   Label: LAB_0047e4bb
    CMP EAX,0x54                        ; 0047e4c1
    JNC 0x0047e6e5                      ; 0047e4c4
        ;   XREF to: 0047e6e5 (CONDITIONAL_JUMP)  ; LAB_0047e6e5
    CMP EAX,0x52                        ; 0047e4ca
    JC 0x0047d6c7                       ; 0047e4cd
        ;   XREF to: 0047d6c7 (CONDITIONAL_JUMP)  ; LAB_0047d6c7
    JBE 0x0047de41                      ; 0047e4d3
        ;   XREF to: 0047de41 (CONDITIONAL_JUMP)  ; LAB_0047de41
    MOV EAX,dword ptr [EBP + 0x92]      ; 0047e4d9
    MOV EAX,dword ptr [EAX + 0x100]     ; 0047e4df
    TEST EAX,EAX                        ; 0047e4e5
    JLE 0x0047e1b5                      ; 0047e4e7
        ;   XREF to: 0047e1b5 (CONDITIONAL_JUMP)  ; LAB_0047e1b5
    FLD float ptr [EBP + 0x1e]          ; 0047e4ed
    CALL crt_math.c_round_FUN_005fe6b0  ; 0047e4f0
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + 0x6e]        ; 0047e4f5
    MOV EBX,dword ptr [EBP + 0x6e]      ; 0047e4f8
    LEA EAX,[EBX*0x4 + 0x0]             ; 0047e4fb
    SUB EAX,EBX                         ; 0047e502
    MOV EBX,dword ptr [EBP + 0x92]      ; 0047e504
    SHL EAX,0x3                         ; 0047e50a
    MOV EBX,dword ptr [EBX + 0x5690]    ; 0047e50d
    ADD EBX,EAX                         ; 0047e513
    MOV EAX,dword ptr [EBX]             ; 0047e515
    MOV dword ptr [EBP + 0xfffffed2],EAX ; 0047e517
    LEA EAX,[EBX + 0x4]                 ; 0047e51d
    MOV EAX,dword ptr [EAX]             ; 0047e520
    MOV dword ptr [EBP + 0xfffffed6],EAX ; 0047e522
    LEA EAX,[EBX + 0x8]                 ; 0047e528
    MOV EAX,dword ptr [EAX]             ; 0047e52b
    MOV dword ptr [EBP + 0xfffffeda],EAX ; 0047e52d
    SUB ESP,0x8                         ; 0047e533
    MOV EAX,dword ptr [EBX + 0xc]       ; 0047e536
    ADD EBX,0xc                         ; 0047e539
    MOV dword ptr [EBP + 0xfffffede],EAX ; 0047e53c
    LEA EAX,[EBX + 0x4]                 ; 0047e542
    FLD float ptr [EBP + 0xfffffede]    ; 0047e545
    MOV EAX,dword ptr [EAX]             ; 0047e54b
    FSUB float ptr [EBP + 0xfffffed2]   ; 0047e54d
    MOV dword ptr [EBP + 0xfffffee2],EAX ; 0047e553
    LEA EAX,[EBX + 0x8]                 ; 0047e559
    FLD float ptr [EBP + 0xfffffee2]    ; 0047e55c
    MOV EAX,dword ptr [EAX]             ; 0047e562
    FSUB float ptr [EBP + 0xfffffed6]   ; 0047e564
    MOV dword ptr [EBP + 0xfffffee6],EAX ; 0047e56a
    FXCH                                ; 0047e570
    FSTP float ptr [EBP + 0xffffff26]   ; 0047e572
    FLD float ptr [EBP + 0xfffffee6]    ; 0047e578
    FSUB float ptr [EBP + 0xfffffeda]   ; 0047e57e
    FXCH                                ; 0047e584
    FSTP float ptr [EBP + 0xffffff2a]   ; 0047e586
    FST float ptr [EBP + 0xffffff2e]    ; 0047e58c
    FSTP double ptr [ESP]               ; 0047e592
    SUB ESP,0x8                         ; 0047e595
    FLD float ptr [EBP + 0xfffffee6]    ; 0047e598
    FSTP double ptr [ESP]               ; 0047e59e
    SUB ESP,0x8                         ; 0047e5a1
    FLD float ptr [EBP + 0xfffffeda]    ; 0047e5a4
    FSTP double ptr [ESP]               ; 0047e5aa
    MOV EAX,dword ptr [EBP + 0xffffff26] ; 0047e5ad
    MOV dword ptr [EBP + 0xffffff1a],EAX ; 0047e5b3
    MOV EAX,dword ptr [EBP + 0xffffff2a] ; 0047e5b9
    MOV dword ptr [EBP + 0xffffff1e],EAX ; 0047e5bf
    MOV EAX,dword ptr [EBP + 0xffffff2e] ; 0047e5c5
    SUB ESP,0x8                         ; 0047e5cb
    MOV dword ptr [EBP + 0xffffff22],EAX ; 0047e5ce
    FLD float ptr [EBP + 0xffffff2a]    ; 0047e5d4
    FSTP double ptr [ESP]               ; 0047e5da
    SUB ESP,0x8                         ; 0047e5dd
    FLD float ptr [EBP + 0xfffffee2]    ; 0047e5e0
    FSTP double ptr [ESP]               ; 0047e5e6
    SUB ESP,0x8                         ; 0047e5e9
    FLD float ptr [EBP + 0xfffffed6]    ; 0047e5ec
    FSTP double ptr [ESP]               ; 0047e5f2
    MOV EAX,dword ptr [EBP + 0xffffff26] ; 0047e5f5
    MOV dword ptr [EBP + 0xffffff6e],EAX ; 0047e5fb
    MOV EAX,dword ptr [EBP + 0xffffff2a] ; 0047e601
    MOV dword ptr [EBP + 0xffffff72],EAX ; 0047e607
    MOV EAX,dword ptr [EBP + 0xffffff2e] ; 0047e60d
    SUB ESP,0x8                         ; 0047e613
    MOV dword ptr [EBP + 0xffffff76],EAX ; 0047e616
    FLD float ptr [EBP + 0xffffff26]    ; 0047e61c
    FSTP double ptr [ESP]               ; 0047e622
    SUB ESP,0x8                         ; 0047e625
    FLD float ptr [EBP + 0xfffffede]    ; 0047e628
    FSTP double ptr [ESP]               ; 0047e62e
    MOV EDX,dword ptr [EBP + 0x6e]      ; 0047e631
    SUB ESP,0x8                         ; 0047e634
    FLD float ptr [EBP + 0xfffffed2]    ; 0047e637
    FSTP double ptr [ESP]               ; 0047e63d
    PUSH EDX                            ; 0047e640
    PUSH 0x620c3b                       ; 0047e641 | = "Current dimensions on frame %d\nX: (%..."
    LEA EAX,[EBP + 0xfffffbbe]          ; 0047e646
    PUSH EAX                            ; 0047e64c
    LEA EDI,[EBP + 0xfffffe16]          ; 0047e64d
    MOV ESI,0x670210                    ; 0047e653 | g_ModelLastScaleInput
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0047e658
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV ECX,0x19                        ; 0047e65d
    ADD ESP,0x54                        ; 0047e662
    MOVSD.REP ES:EDI,ESI                ; 0047e665 | g_ModelLastScaleInput | g_ModelLastScaleInput+4
    MOV EBX,0x1                         ; 0047e667
    PUSH EBX                            ; 0047e66c
        ;   Label: LAB_0047e66c
    PUSH 0x64                           ; 0047e66d
    LEA EAX,[EBP + 0xfffffe16]          ; 0047e66f
    PUSH EAX                            ; 0047e675
    LEA EAX,[EBP + 0xfffffbbe]          ; 0047e676
    PUSH EAX                            ; 0047e67c
    MOV EDX,dword ptr [0x00678a60]      ; 0047e67d | g_CEditorToolsPtr
    PUSH EDX                            ; 0047e683 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 0047e684
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 0047e689
    TEST EAX,EAX                        ; 0047e68c
    JZ 0x0047d6c7                       ; 0047e68e
        ;   XREF to: 0047d6c7 (CONDITIONAL_JUMP)  ; LAB_0047d6c7
    LEA EAX,[EBP + 0xffffff6a]          ; 0047e694
    PUSH EAX                            ; 0047e69a
    LEA EAX,[EBP + 0xffffff66]          ; 0047e69b
    PUSH EAX                            ; 0047e6a1
    LEA EAX,[EBP + 0xffffff62]          ; 0047e6a2
    PUSH EAX                            ; 0047e6a8
    PUSH 0x620cee                       ; 0047e6a9 | = "%f,%f,%f"
    LEA EAX,[EBP + 0xfffffe16]          ; 0047e6ae
    PUSH EAX                            ; 0047e6b4
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0047e6b5
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x14                        ; 0047e6ba
    CMP EAX,0x3                         ; 0047e6bd
    JZ 0x0047e180                       ; 0047e6c0
        ;   XREF to: 0047e180 (CONDITIONAL_JUMP)  ; LAB_0047e180
    CMP EAX,0x1                         ; 0047e6c6
    JZ 0x0047e19b                       ; 0047e6c9
        ;   XREF to: 0047e19b (CONDITIONAL_JUMP)  ; LAB_0047e19b
    PUSH 0x620cf7                       ; 0047e6cf | = "Please enter either a single scale fa..."
    MOV ECX,dword ptr [0x00678a60]      ; 0047e6d4 | g_CEditorToolsPtr
    PUSH ECX                            ; 0047e6da | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0047e6db
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0047e6e0
    JMP 0x0047e66c                      ; 0047e6e3
        ;   XREF to: 0047e66c (UNCONDITIONAL_JUMP)  ; LAB_0047e66c
    JBE 0x0047e464                      ; 0047e6e5
        ;   XREF to: 0047e464 (CONDITIONAL_JUMP)  ; LAB_0047e464
        ;   Label: LAB_0047e6e5
    CMP EAX,0x56                        ; 0047e6eb
    JC 0x0047d6c7                       ; 0047e6ee
        ;   XREF to: 0047d6c7 (CONDITIONAL_JUMP)  ; LAB_0047d6c7
    JBE 0x0047e1cd                      ; 0047e6f4
        ;   XREF to: 0047e1cd (CONDITIONAL_JUMP)  ; LAB_0047e1cd
    CMP EAX,0x58                        ; 0047e6fa
    JZ 0x0047e1e1                       ; 0047e6fd
        ;   XREF to: 0047e1e1 (CONDITIONAL_JUMP)  ; LAB_0047e1e1
    JMP 0x0047d6c7                      ; 0047e703
        ;   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)  ; LAB_0047d6c7
    JBE 0x0047da2d                      ; 0047e708
        ;   XREF to: 0047da2d (CONDITIONAL_JUMP)  ; LAB_0047da2d
        ;   Label: LAB_0047e708
    CMP EAX,0x37                        ; 0047e70e
    JC 0x0047db4c                       ; 0047e711
        ;   XREF to: 0047db4c (CONDITIONAL_JUMP)  ; LAB_0047db4c
    JBE 0x0047dcc3                      ; 0047e717
        ;   XREF to: 0047dcc3 (CONDITIONAL_JUMP)  ; LAB_0047dcc3
    CMP EAX,0x38                        ; 0047e71d
    JBE 0x0047dd84                      ; 0047e720
        ;   XREF to: 0047dd84 (CONDITIONAL_JUMP)  ; LAB_0047dd84
    CMP EAX,0x39                        ; 0047e726
    JZ 0x0047ddd1                       ; 0047e729
        ;   XREF to: 0047ddd1 (CONDITIONAL_JUMP)  ; LAB_0047ddd1
    JMP 0x0047d6c7                      ; 0047e72f
        ;   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)  ; LAB_0047d6c7
    JBE 0x0047d829                      ; 0047e734
        ;   XREF to: 0047d829 (CONDITIONAL_JUMP)  ; LAB_0047d829
        ;   Label: LAB_0047e734
    CMP EAX,0x33                        ; 0047e73a
    JBE 0x0047d8bc                      ; 0047e73d
        ;   XREF to: 0047d8bc (CONDITIONAL_JUMP)  ; LAB_0047d8bc
    PUSH 0x1                            ; 0047e743
    MOV EAX,0x670108                    ; 0047e745 | g_NetworkModelFilename
    PUSH EAX                            ; 0047e74a | g_NetworkModelFilename
    MOV EAX,0x6209c2                    ; 0047e74b | = "*.kfm"
    PUSH EAX                            ; 0047e750 | = "*.kfm"
    MOV EAX,0x6209c8                    ; 0047e751 | = "Get model and textures from network"
    PUSH EAX                            ; 0047e756 | = "Get model and textures from network"
    MOV ESI,dword ptr [0x00678a60]      ; 0047e757 | g_CEditorToolsPtr
    PUSH ESI                            ; 0047e75d | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420 ; 0047e75e
        ;   XREF to: 0049f420 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420(CEditorTools * this_ptr, char * title_text, char * search_pattern, char * initial_path, ...)
    ADD ESP,0x14                        ; 0047e763
    TEST EAX,EAX                        ; 0047e766
    JZ 0x0047d6c7                       ; 0047e768
        ;   XREF to: 0047d6c7 (CONDITIONAL_JUMP)  ; LAB_0047d6c7
    LEA EAX,[EBP + 0xfffff4f6]          ; 0047e76e
    PUSH EAX                            ; 0047e774
    LEA EAX,[EBP + 0xfffff9f6]          ; 0047e775
    PUSH EAX                            ; 0047e77b
    LEA EAX,[EBP + 0xfffff6f6]          ; 0047e77c
    PUSH EAX                            ; 0047e782
    LEA EAX,[EBP + 0x76]                ; 0047e783
    PUSH EAX                            ; 0047e786
    MOV EAX,0x670108                    ; 0047e787 | g_NetworkModelFilename
    PUSH EAX                            ; 0047e78c | g_NetworkModelFilename
    CALL crt_string.c_splitpath_FUN_005ff178 ; 0047e78d
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 0047e792
    LEA EAX,[EBP + 0xfffff4f6]          ; 0047e795
    PUSH EAX                            ; 0047e79b
    LEA EAX,[EBP + 0xfffff9f6]          ; 0047e79c
    PUSH EAX                            ; 0047e7a2
    MOV EAX,0x6209ec                    ; 0047e7a3 | = "models"
    PUSH EAX                            ; 0047e7a8 | = "models"
    PUSH 0x0                            ; 0047e7a9
    LEA EAX,[EBP + 0xfffff1de]          ; 0047e7ab
    PUSH EAX                            ; 0047e7b1
    CALL crt_file.c_makepath_FUN_005febfc ; 0047e7b2
        ;   XREF to: 005febfc (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005febfc(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0047e7b7
    LEA EAX,[EBP + 0xfffff1de]          ; 0047e7ba
    PUSH EAX                            ; 0047e7c0
    CALL engine_dosio.c_findFile_FUN_00481760 ; 0047e7c1
        ;   XREF to: 00481760 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_findFile_FUN_00481760(SFoundFileInfo * context)
    ADD ESP,0x4                         ; 0047e7c6
    TEST EAX,EAX                        ; 0047e7c9
    JZ 0x0047d967                       ; 0047e7cb
        ;   XREF to: 0047d967 (CONDITIONAL_JUMP)  ; LAB_0047d967
    CMP dword ptr [EBP + 0xfffff3e6],0x0 ; 0047e7d1
    JZ 0x0047d967                       ; 0047e7d8
        ;   XREF to: 0047d967 (CONDITIONAL_JUMP)  ; LAB_0047d967
    LEA EAX,[EBP + 0xfffff2de]          ; 0047e7de
    PUSH EAX                            ; 0047e7e4
    LEA EAX,[EBP + 0xfffff1de]          ; 0047e7e5
    PUSH EAX                            ; 0047e7eb
    MOV EAX,0x6209f3                    ; 0047e7ec | = "%s is in mounted pod %s"
    PUSH EAX                            ; 0047e7f1 | = "%s is in mounted pod %s"
    MOV EBX,dword ptr [0x00678a60]      ; 0047e7f2 | g_CEditorToolsPtr
    PUSH EBX                            ; 0047e7f8 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0047e7f9
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 0047e7fe
    JMP 0x0047d6c7                      ; 0047e801
        ;   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)  ; LAB_0047d6c7

