; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_moon_cpp_CMoon_render_FUN_00529ed0(CMoon *this_ptr)
;
; Parameters:
; CMoon *          Stack[0x4]:4   this_ptr
; Local Variables:
; CVector3f        Stack[-0x5c]:12  local_5c
; CVector3f        Stack[-0x50]:12  local_50
; CVector3f        Stack[-0x44]:12  local_44
; double           Stack[-0x38]:8  local_38
; int              Stack[-0x30]:4  local_30
; char *           Stack[-0x2c]:4  local_2c
; uint             Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; undefined8 *     Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[5]:
;   core_menu.cpp_configureCustomKeys_FUN_00511890 at 005118ff
;   core_menu.cpp_configureGraphicsOptions_FUN_00510c80 at 00510d65
;   core_menu.cpp_configureSoundOptions_FUN_00511e50 at 00511ec4
;   core_menu.cpp_showMainGameMenu_FUN_00512f40 at 00513042
;   core_menu.cpp_showOptionsScreen_FUN_00512d30 at 00512da0
;
; Referenced Globals:
;   double DOUBLE_00639f99 = -0.5
;   double DOUBLE_00639fa1 = 48
;   double DOUBLE_00639fa9 = 8192
;   float FLOAT_00639fb1 = 16384
;   float FLOAT_00639fb5 = 8192
;   float FLOAT_00639fb9 = 1.570796
;   double DOUBLE_00639fc1 = 0.5
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   int g_MoonBatsEnabled = 0x1
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonRenderer g_CDemonRendererInstance
;   void*[1200] g_ScreenBufferArray
;   uint[256] g_Hardware32BitPalette
;   CAlphaBitmap g_MoonCloudTexture
;   CAlphaBitmap[30] g_MoonAnimTextures
;   ... and 24 more
;
; Called Functions:
;   core_course.cpp_CCourse_evaluate_FUN_00442710
;   core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850
;   core_set.cpp_CDemonSet_setFlatColor_FUN_00570ca0
;   crt_math.c_round_FUN_005fe6b0
;   engine_3d.c_setBlendMode_FUN_00406dd0
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950
;   engine_alphabit.cpp_CAlphaBitmap_initPalette_FUN_00410cf0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
;   engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
;   engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0
;   sound_sndmain.cpp_processAudio_FUN_005abe20
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00529ed0
        ;   Label: core_moon.cpp_CMoon_render_FUN_00529ed0
    PUSH ESI                            ; 00529ed1
    PUSH EDI                            ; 00529ed2
    PUSH EBP                            ; 00529ed3
    MOV EBP,ESP                         ; 00529ed4
    SUB ESP,0x4c                        ; 00529ed6
    MOV ESI,dword ptr [EBP + 0x14]      ; 00529ed9
    CALL sound_sndmain.cpp_processAudio_FUN_005abe20 ; 00529edc
        ;   XREF to: 005abe20 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_processAudio_FUN_005abe20()
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00529ee1
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    CALL wincore_windll.cpp_clearZBufferNative_FUN_005b3ed4 ; 00529ee6
        ;   XREF to: 005b3ed4 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearZBufferNative_FUN_005b3ed4()
    PUSH 0x3f87558                      ; 00529eeb | g_ZeroVector
    MOV EDX,dword ptr [0x006703ec]      ; 00529ef0 | g_CDemonRendererPtr2
    PUSH EDX                            ; 00529ef6 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150 ; 00529ef7
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150(CDemonRenderer * this_ptr, CVector3f * point_ptr)
    ADD ESP,0x8                         ; 00529efc
    MOV ECX,dword ptr [0x006703ec]      ; 00529eff | g_CDemonRendererPtr2
    PUSH 0x42e00000                     ; 00529f05
    PUSH ECX                            ; 00529f0a | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650 ; 00529f0b
        ;   XREF to: 0048c650 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650(CDemonRenderer * this_ptr, float field_of_view)
    ADD ESP,0x8                         ; 00529f10
    PUSH 0x3f87558                      ; 00529f13 | g_ZeroVector
    MOV EBX,dword ptr [0x006703ec]      ; 00529f18 | g_CDemonRendererPtr2 | g_CDemonRendererInstance
    PUSH EBX                            ; 00529f1e | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0 ; 00529f1f
        ;   XREF to: 0048c1d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0(CDemonRenderer * this_ptr, CVector3f * euler_angles)
    FLD double ptr [0x00639f99]         ; 00529f24 | DOUBLE_00639f99
    FLD float ptr [ESI + 0x4]           ; 00529f2a
    FADD ST0,ST1                        ; 00529f2d
    FLD double ptr [0x00639fa1]         ; 00529f2f | DOUBLE_00639fa1
    FXCH                                ; 00529f35
    FMUL ST1                            ; 00529f37
    LEA EAX,[EBP + -0x4c]               ; 00529f39
    FSTP float ptr [EBP + -0x4c]        ; 00529f3c
    FLD float ptr [ESI + 0x4]           ; 00529f3f
    FADDP ST2,ST0                       ; 00529f42
    ADD ESP,0x8                         ; 00529f44
    FMULP                               ; 00529f47
    PUSH EAX                            ; 00529f49
    MOV EAX,[0x006703ec]                ; 00529f4a | g_CDemonRendererPtr2
    MOV EDI,0x42900000                  ; 00529f4f
    PUSH EAX                            ; 00529f54 | g_CDemonRendererInstance
    MOV dword ptr [EBP + -0x44],EDI     ; 00529f55
    FSTP float ptr [EBP + -0x48]        ; 00529f58
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 00529f5b
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    MOV EAX,[0x006810c8]                ; 00529f60 | g_CDemonSetPtr | g_CDemonSetInstance
    ADD ESP,0x8                         ; 00529f65
    MOV dword ptr [EAX + 0x15ae70],0x1  ; 00529f68 | g_CDemonSetInstance.rendering_mode
    PUSH 0x10000                        ; 00529f72
    MOV dword ptr [EAX + 0x15ae74],0xffff6f78 ; 00529f77 | g_CDemonSetInstance.light_direction.x
    PUSH 0x10000                        ; 00529f81
    MOV dword ptr [EAX + 0x15ae78],0xffff6f78 ; 00529f86 | g_CDemonSetInstance.light_direction.y
    PUSH 0x10000                        ; 00529f90
    MOV dword ptr [EAX + 0x15ae7c],0x9088 ; 00529f95 | g_CDemonSetInstance.light_direction.z
    PUSH EAX                            ; 00529f9f | g_CDemonSetInstance
    MOV dword ptr [EAX + 0x15ae80],0x280 ; 00529fa0 | g_CDemonSetInstance.ambient_base_quick
    CALL core_set.cpp_CDemonSet_setFlatColor_FUN_00570ca0 ; 00529faa
        ;   XREF to: 00570ca0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setFlatColor_FUN_00570ca0(CDemonSet * this_ptr, int light_scale, int color_scale, int fog_scale)
    ADD ESP,0x10                        ; 00529faf
    PUSH 0x205                          ; 00529fb2
    PUSH 0x0                            ; 00529fb7
    PUSH 0x0                            ; 00529fb9
    LEA EAX,[ESI + 0x8]                 ; 00529fbb
    PUSH EAX                            ; 00529fbe
    CALL core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850 ; 00529fbf
        ;   XREF to: 00477850 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850(CKeyFramedModel * this_ptr, int frame_index, CKeyFramedModelInstance * instance, int render_flags)
    MOV EAX,[0x006810c8]                ; 00529fc4 | g_CDemonSetPtr
    MOV dword ptr [EAX + 0x15ae74],0xffffb7bc ; 00529fc9 | g_CDemonSetInstance.light_direction.x
    MOV dword ptr [EAX + 0x15ae78],0xffffb7bc ; 00529fd3 | g_CDemonSetInstance.light_direction.y
    MOV EDX,dword ptr [0x0067d7d0]      ; 00529fdd | g_MoonBatsEnabled
    MOV dword ptr [EAX + 0x15ae7c],0x4844 ; 00529fe3 | g_CDemonSetInstance.light_direction.z
    ADD ESP,0x10                        ; 00529fed
    MOV dword ptr [EAX + 0x15ae80],0x2000 ; 00529ff0 | g_CDemonSetInstance.ambient_base_quick
    TEST EDX,EDX                        ; 00529ffa
    JZ 0x0052a12e                       ; 00529ffc
        ;   XREF to: 0052a12e (CONDITIONAL_JUMP)  ; LAB_0052a12e
    XOR EBX,EBX                         ; 0052a002
    MOV ESI,0x2f381e8                   ; 0052a004 | g_MoonBatCourses
    FLD float ptr [EBX + 0x2f38210]     ; 0052a009 | g_MoonBats[0].course_position | g_MoonBats[1].course_position
        ;   Label: LAB_0052a009
    FLDZ                                ; 0052a00f
    FCOMPP                              ; 0052a011
    FNSTSW AX                           ; 0052a013
    SAHF                                ; 0052a015
    JA 0x0052a11f                       ; 0052a016
        ;   XREF to: 0052a11f (CONDITIONAL_JUMP)  ; LAB_0052a11f
    LEA EAX,[EBP + -0x40]               ; 0052a01c
    PUSH EAX                            ; 0052a01f
    LEA EAX,[EBP + -0x34]               ; 0052a020
    MOV ECX,dword ptr [EBX + 0x2f3820c] ; 0052a023 | g_MoonBats | g_MoonBats[1].course_index
    PUSH EAX                            ; 0052a029
    IMUL EAX,ECX,0xc                    ; 0052a02a
    ADD EAX,ESI                         ; 0052a02d
    PUSH dword ptr [EBX + 0x2f38210]    ; 0052a02f | g_MoonBats[0].course_position | g_MoonBats[1].course_position
    PUSH EAX                            ; 0052a035
    CALL core_course.cpp_CCourse_evaluate_FUN_00442710 ; 0052a036
        ;   XREF to: 00442710 (UNCONDITIONAL_CALL)  ; void core_course.cpp_CCourse_evaluate_FUN_00442710(CCourse * this_ptr, float time, CVector3f * out_pos, CVector3f * out_euler)
    FLD float ptr [EBP + -0x34]         ; 0052a03b
    FLD float ptr [EBP + -0x30]         ; 0052a03e
    FLD float ptr [EBP + -0x2c]         ; 0052a041
    MOV EAX,0x2f3820c                   ; 0052a044 | g_MoonBats
    FLD float ptr [EBP + -0x3c]         ; 0052a049
    FXCH ST3                            ; 0052a04c
    FADD float ptr [EBX + EAX*0x1 + 0xc] ; 0052a04e | g_MoonBats[1].random_offset.x | g_MoonBats[0].random_offset.x
    MOV EDI,dword ptr [0x006703ec]      ; 0052a052 | g_CDemonRendererPtr2
    FSTP float ptr [EBP + -0x34]        ; 0052a058
    FXCH                                ; 0052a05b
    FADD float ptr [EBX + EAX*0x1 + 0x10] ; 0052a05d | g_MoonBats[1].random_offset.y | g_MoonBats[0].random_offset.y
    ADD ESP,0x10                        ; 0052a061
    FSTP float ptr [EBP + -0x30]        ; 0052a064
    FADD float ptr [EBX + EAX*0x1 + 0x14] ; 0052a067 | g_MoonBats[1].random_offset.z | g_MoonBats[0].random_offset.z
    LEA EAX,[EBP + -0x34]               ; 0052a06b
    FXCH                                ; 0052a06e
    FADD float ptr [0x00639fb9]         ; 0052a070 | FLOAT_00639fb9
    PUSH EAX                            ; 0052a076
    FXCH                                ; 0052a077
    FSTP float ptr [EBP + -0x2c]        ; 0052a079
    PUSH EDI                            ; 0052a07c | g_CDemonRendererInstance
    FSTP float ptr [EBP + -0x3c]        ; 0052a07d
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 0052a080
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0052a085
    PUSH 0x0                            ; 0052a088
    LEA EAX,[EBP + -0x40]               ; 0052a08a
    PUSH EAX                            ; 0052a08d
    MOV EAX,[0x006703ec]                ; 0052a08e | g_CDemonRendererPtr2
    PUSH EAX                            ; 0052a093 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 0052a094
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 0052a099
    FLD float ptr [EBX + 0x2f38214]     ; 0052a09c | g_MoonBats[1].animation_frame | g_MoonBats[0].animation_frame
    PUSH -0x1                           ; 0052a0a2
    CALL crt_math.c_round_FUN_005fe6b0  ; 0052a0a4
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    PUSH 0x0                            ; 0052a0a9
    FISTP dword ptr [EBP + -0x4]        ; 0052a0ab
    MOV EDX,dword ptr [EBP + -0x4]      ; 0052a0ae
    PUSH EDX                            ; 0052a0b1
    PUSH 0x2f384dc                      ; 0052a0b2 | g_MoonBatModel
    CALL core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850 ; 0052a0b7
        ;   XREF to: 00477850 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850(CKeyFramedModel * this_ptr, int frame_index, CKeyFramedModelInstance * instance, int render_flags)
    ADD ESP,0x10                        ; 0052a0bc
    MOV ECX,dword ptr [0x006703ec]      ; 0052a0bf | g_CDemonRendererPtr2
    PUSH ECX                            ; 0052a0c5 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640 ; 0052a0c6
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640(CDemonRenderer * this_ptr)
    IMUL EAX,dword ptr [EBX + 0x2f3820c],0xc ; 0052a0cb | g_MoonBats | g_MoonBats[1].course_index
    MOV EAX,dword ptr [ESI + EAX*0x1]   ; 0052a0d2
    MOV dword ptr [EBP + -0x4],EAX      ; 0052a0d5
    FILD dword ptr [EBP + -0x4]         ; 0052a0d8
    FDIVR float ptr [EBX + 0x2f38210]   ; 0052a0db | g_MoonBats[0].course_position | g_MoonBats[1].course_position
    ADD ESP,0x4                         ; 0052a0e1
    FST float ptr [EBP + -0x8]          ; 0052a0e4
    FST double ptr [EBP + -0x28]        ; 0052a0e7
    FCOMP double ptr [0x00639fc1]       ; 0052a0ea | DOUBLE_00639fc1
    FNSTSW AX                           ; 0052a0f0
    SAHF                                ; 0052a0f2
    JNC 0x0052a2ac                      ; 0052a0f3
        ;   XREF to: 0052a2ac (CONDITIONAL_JUMP)  ; LAB_0052a2ac
    FLD float ptr [EBP + -0x8]          ; 0052a0f9
    FMUL float ptr [0x00639fb1]         ; 0052a0fc | FLOAT_00639fb1
    FSUBR float ptr [0x00639fb5]        ; 0052a102 | FLOAT_00639fb5
    MOV EDX,dword ptr [0x006810c8]      ; 0052a108 | g_CDemonSetPtr | g_CDemonSetInstance
        ;   Label: LAB_0052a108
    CALL crt_math.c_round_FUN_005fe6b0  ; 0052a10e
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + -0x4]        ; 0052a113
    MOV EAX,dword ptr [EBP + -0x4]      ; 0052a116
    MOV dword ptr [EDX + 0x15ae80],EAX  ; 0052a119 | g_CDemonSetInstance.ambient_base_quick
    ADD EBX,0x18                        ; 0052a11f
        ;   Label: LAB_0052a11f
    CMP EBX,0x2d0                       ; 0052a122
    JNZ 0x0052a009                      ; 0052a128
        ;   XREF to: 0052a009 (CONDITIONAL_JUMP)  ; LAB_0052a009
    MOV EAX,[0x006810c8]                ; 0052a12e | g_CDemonSetPtr
        ;   Label: LAB_0052a12e
    PUSH 0x2f37f70                      ; 0052a133 | g_MoonCloudTexture
    MOV dword ptr [EAX + 0x15ae70],0x0  ; 0052a138 | g_CDemonSetInstance.rendering_mode
    CALL engine_alphabit.cpp_CAlphaBitmap_initPalette_FUN_00410cf0 ; 0052a142
        ;   XREF to: 00410cf0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_initPalette_FUN_00410cf0(CAlphaBitmap * this_ptr)
    MOV EAX,[0x02f381dc]                ; 0052a147 | g_MoonCloudScrollX
    ADD ESP,0x4                         ; 0052a14c
    SAR EAX,0x10                        ; 0052a14f
    MOV dword ptr [EBP + -0x20],EAX     ; 0052a152
    MOV EAX,[0x02f381e0]                ; 0052a155 | g_MoonCloudScrollY
    SAR EAX,0x10                        ; 0052a15a
    MOV dword ptr [EBP + -0x14],EAX     ; 0052a15d
    MOV EAX,[0x02f37f70]                ; 0052a160 | g_MoonCloudTexture
    MOV dword ptr [EBP + -0x1c],EAX     ; 0052a165
    XOR EAX,EAX                         ; 0052a168
    MOV dword ptr [EBP + -0x18],EAX     ; 0052a16a
    CMP dword ptr [EBP + -0x18],0x1e0   ; 0052a16d
    JGE 0x0052a250                      ; 0052a174
        ;   XREF to: 0052a250 (CONDITIONAL_JUMP)  ; LAB_0052a250
    MOV EAX,dword ptr [EBP + -0x18]     ; 0052a17a
        ;   Label: LAB_0052a17a
    MOV EAX,dword ptr [EAX*0x4 + 0x2cf6a9c] ; 0052a17d | g_ScreenBufferArray
    MOV dword ptr [EBP + -0x10],EAX     ; 0052a184
    XOR ECX,ECX                         ; 0052a187
    MOV EDI,dword ptr [EBP + 0xfffffff0] ; 0052a189
    MOVQ MM0,qword ptr [EDI]            ; 0052a18f
        ;   Label: LAB_0052a18f
    MOV EAX,ECX                         ; 0052a192
    MOV EBX,dword ptr [EBP + 0xffffffe8] ; 0052a194
    SHR EAX,0x1                         ; 0052a19a
    SHR EBX,0x1                         ; 0052a19c
    ADD EAX,dword ptr [EBP + 0xffffffe0] ; 0052a19e
    ADD EBX,dword ptr [EBP + 0xffffffec] ; 0052a1a4
    AND EAX,0xff                        ; 0052a1aa
    AND EBX,0xff                        ; 0052a1af
    SHL EAX,0x8                         ; 0052a1b5
    ADD EAX,EBX                         ; 0052a1b8
    ADD EAX,dword ptr [EBP + 0xffffffe4] ; 0052a1ba
    MOVZX EAX,byte ptr [EAX]            ; 0052a1c0
    SHR EAX,0x2                         ; 0052a1c3
    MOVD MM1,dword ptr [EAX*0x4 + 0x2d01924] ; 0052a1c6 | g_Hardware32BitPalette
    MOVQ MM2,MM1                        ; 0052a1ce
    PSLLQ MM2,0x20                      ; 0052a1d1
    POR MM1,MM2                         ; 0052a1d5
    PADDUSB MM0,MM1                     ; 0052a1d8
    MOV EAX,ECX                         ; 0052a1db
    MOV EBX,dword ptr [EBP + 0xffffffe8] ; 0052a1dd
    SHR EAX,0x2                         ; 0052a1e3
    SHR EBX,0x2                         ; 0052a1e6
    ADD EAX,dword ptr [EBP + 0xffffffe0] ; 0052a1e9
    ADD EBX,dword ptr [EBP + 0xffffffec] ; 0052a1ef
    AND EAX,0xff                        ; 0052a1f5
    AND EBX,0xff                        ; 0052a1fa
    SHL EAX,0x8                         ; 0052a200
    ADD EAX,EBX                         ; 0052a203
    ADD EAX,dword ptr [EBP + 0xffffffe4] ; 0052a205
    MOVZX EAX,byte ptr [EAX]            ; 0052a20b
    SHR EAX,0x2                         ; 0052a20e
    MOVD MM1,dword ptr [EAX*0x4 + 0x2d01924] ; 0052a211 | g_Hardware32BitPalette
    MOVQ MM2,MM1                        ; 0052a219
    PSLLQ MM2,0x20                      ; 0052a21c
    POR MM1,MM2                         ; 0052a220
    PADDUSB MM0,MM1                     ; 0052a223
    MOVQ qword ptr [EDI],MM0            ; 0052a226
    ADD EDI,0x8                         ; 0052a229
    ADD ECX,0x2                         ; 0052a22c
    CMP ECX,0x280                       ; 0052a22f
    JC 0x0052a18f                       ; 0052a235
        ;   XREF to: 0052a18f (CONDITIONAL_JUMP)  ; LAB_0052a18f
    EMMS                                ; 0052a23b
    MOV EAX,dword ptr [EBP + -0x18]     ; 0052a23d
    INC dword ptr [EBP + -0x18]         ; 0052a240
    CMP dword ptr [EBP + -0x18],0x1e0   ; 0052a243
    JL 0x0052a17a                       ; 0052a24a
        ;   XREF to: 0052a17a (CONDITIONAL_JUMP)  ; LAB_0052a17a
    PUSH 0x1                            ; 0052a250
        ;   Label: LAB_0052a250
    CALL engine_3d.c_setBlendMode_FUN_00406dd0 ; 0052a252
        ;   XREF to: 00406dd0 (UNCONDITIONAL_CALL)  ; void engine_3d.c_setBlendMode_FUN_00406dd0(int blend_mode)
    FLD float ptr [0x02f381e4]          ; 0052a257 | g_MoonAnimationTimer
    CALL crt_math.c_round_FUN_005fe6b0  ; 0052a25d
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + -0xc]        ; 0052a262
    MOV ESI,dword ptr [EBP + -0xc]      ; 0052a265
    ADD ESP,0x4                         ; 0052a268
    CMP ESI,0x1d                        ; 0052a26b
    JLE 0x0052a275                      ; 0052a26e
        ;   XREF to: 0052a275 (CONDITIONAL_JUMP)  ; LAB_0052a275
    XOR EDI,EDI                         ; 0052a270
    MOV dword ptr [EBP + -0xc],EDI      ; 0052a272
    MOV EDX,dword ptr [EBP + -0xc]      ; 0052a275
        ;   Label: LAB_0052a275
    LEA EAX,[EDX*0x4 + 0x0]             ; 0052a278
    PUSH 0xbb80                         ; 0052a27f
    ADD EAX,EDX                         ; 0052a284
    PUSH 0x0                            ; 0052a286
    SHL EAX,0x2                         ; 0052a288
    PUSH 0x0                            ; 0052a28b
    ADD EAX,0x2f37f84                   ; 0052a28d | g_MoonAnimTextures
    PUSH EAX                            ; 0052a292
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950 ; 0052a293
        ;   XREF to: 00410950 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 0052a298
    PUSH 0x0                            ; 0052a29b
    CALL engine_3d.c_setBlendMode_FUN_00406dd0 ; 0052a29d
        ;   XREF to: 00406dd0 (UNCONDITIONAL_CALL)  ; void engine_3d.c_setBlendMode_FUN_00406dd0(int blend_mode)
    ADD ESP,0x4                         ; 0052a2a2
    MOV ESP,EBP                         ; 0052a2a5
    POP EBP                             ; 0052a2a7
    POP EDI                             ; 0052a2a8
    POP ESI                             ; 0052a2a9
    POP EBX                             ; 0052a2aa
    RET                                 ; 0052a2ab
    FLD double ptr [EBP + -0x28]        ; 0052a2ac
        ;   Label: LAB_0052a2ac
    FADD double ptr [0x00639f99]        ; 0052a2af | DOUBLE_00639f99
    FMUL double ptr [0x00639fa9]        ; 0052a2b5 | DOUBLE_00639fa9
    JMP 0x0052a108                      ; 0052a2bb
        ;   XREF to: 0052a108 (UNCONDITIONAL_JUMP)  ; LAB_0052a108

