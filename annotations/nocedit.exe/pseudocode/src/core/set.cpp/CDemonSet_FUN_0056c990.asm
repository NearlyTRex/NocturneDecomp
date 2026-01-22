; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_set.cpp_CDemonSet_FUN_0056c990(CDemonSet * this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined1       Stack[-0x50]:1  local_50
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
;   core_game.cpp_CGame_processFrame_FUN_004da100 at 004da447
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Head_00645dab
;   double DOUBLE_00645dbb = 0.261799387791667
;   float FLOAT_00662850 = 256
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CGame* g_CGamePtr = 02d81a9c
;   CGore* g_CGorePtr = 02d83364
;   CDemonSet* g_CDemonSetPtr = 03114278
;   int g_RenderMirrorsFlag = 0x1
;   CWeather* g_CWeatherPtr = 03f95dc0
;   CDemonRenderer g_CDemonRendererInstance
;   int g_UseExternalRenderer
;   CFireEffect g_CFireEffectInstance
;   ... and 21 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
;   core_dlight.cpp_CDemonLight_beginScene_FUN_00472a80
;   core_dlight.cpp_CDemonLight_clearCircularShadowMapEdges_FUN_004735c0
;   core_dlight.cpp_CDemonLight_drawShadowDepthBuffer_FUN_00476670
;   core_dlight.cpp_CDemonLight_endScene_FUN_00472d30
;   core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0
;   core_fire.cpp_CFireEffect_FUN_004c93d0
;   core_fire.cpp_CFireEffect_render_FUN_004c7180
;   core_gore.cpp_CGore_FUN_004ed7b0
;   core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80
;   core_set.cpp_CDemonSet_FUN_0056aca0
;   core_set.cpp_CDemonSet_FUN_0056d380
;   core_set.cpp_CDemonSet_FUN_0056fbd0
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
;   ... and 10 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056c990
        ;   Label: core_set.cpp_CDemonSet_FUN_0056c990
    PUSH ESI                            ; 0056c991
    PUSH EDI                            ; 0056c992
    PUSH EBP                            ; 0056c993
    MOV EBP,ESP                         ; 0056c994
    SUB ESP,0x4c                        ; 0056c996
    MOV EDI,dword ptr [EBP + 0x14]      ; 0056c999
    MOV EBX,dword ptr [0x02db87d0]      ; 0056c99c | g_LocalHeroIndex
    MOV EBX,dword ptr [EBX*0x4 + 0x2db87c0] ; 0056c9a2 | g_HeroActors
    LEA ESI,[EBX + 0x158]               ; 0056c9a9
    MOV EDX,0x2d7eaf0                   ; 0056c9af | g_CDemonLightInstance
    PUSH ESI                            ; 0056c9b4
    MOV dword ptr [EBP + -0x4],EDX      ; 0056c9b5 | g_CDemonLightInstance
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 0056c9b8
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0056c9bd
    PUSH 0x0                            ; 0056c9c0
    PUSH 0x645dab                       ; 0056c9c2 | = "Bip01 Head"
    PUSH EAX                            ; 0056c9c7
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0056c9c8
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    MOV EDX,EAX                         ; 0056c9cd
    SHL EAX,0x2                         ; 0056c9cf
    SUB EAX,EDX                         ; 0056c9d2
    ADD ESI,0xe80                       ; 0056c9d4
    SHL EAX,0x4                         ; 0056c9da
    ADD ESP,0xc                         ; 0056c9dd
    ADD ESI,EAX                         ; 0056c9e0
    MOV EAX,0x3ead0e56                  ; 0056c9e2
    PUSH ESI                            ; 0056c9e7
    MOV dword ptr [EBP + -0x30],EAX     ; 0056c9e8
    LEA EAX,[EBP + -0x34]               ; 0056c9eb
    XOR ECX,ECX                         ; 0056c9ee
    PUSH EAX                            ; 0056c9f0
    LEA EAX,[EBP + -0x40]               ; 0056c9f1
    MOV EDX,0x3f400000                  ; 0056c9f4
    PUSH EAX                            ; 0056c9f9
    MOV dword ptr [EBP + -0x34],ECX     ; 0056c9fa
    MOV dword ptr [EBP + -0x2c],EDX     ; 0056c9fd
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 0056ca00
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 0056ca05
    PUSH EAX                            ; 0056ca08
    LEA EAX,[EBP + -0x1c]               ; 0056ca09
    PUSH EAX                            ; 0056ca0c
    PUSH EBX                            ; 0056ca0d
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0056ca0e
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 0056ca13
    LEA EAX,[EBP + -0x28]               ; 0056ca16
    PUSH EAX                            ; 0056ca19
    PUSH ESI                            ; 0056ca1a
    CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690 ; 0056ca1b
        ;   XREF to: 005f5690 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_005f5690(CMatrix3x3f * matrix_in, CVector3f * euler_out)
    FLD float ptr [EBP + -0x28]         ; 0056ca20
    FLD float ptr [EBP + -0x24]         ; 0056ca23
    MOV EDX,0x2d7eaf0                   ; 0056ca26 | g_CDemonLightInstance
    LEA EAX,[EBP + -0x1c]               ; 0056ca2b
    XOR ECX,ECX                         ; 0056ca2e
    ADD ESP,0x8                         ; 0056ca30
    MOV dword ptr [EBP + -0xc],ECX      ; 0056ca33
    MOV dword ptr [EBP + -0x8],ECX      ; 0056ca36
    FXCH                                ; 0056ca39
    FADD double ptr [0x00645dbb]        ; 0056ca3b | DOUBLE_00645dbb
    MOV dword ptr [0x02d807ac],ECX      ; 0056ca41 | g_CDemonLightInstance.field17_0x1cbc
    FSTP float ptr [EBP + -0x10]        ; 0056ca47
    FADD float ptr [EBX + 0x34]         ; 0056ca4a
    ADD EDX,0x4                         ; 0056ca4d | g_CDemonLightInstance.base.base.position.x
    FSTP float ptr [EBP + -0xc]         ; 0056ca50
    CMP EDX,EAX                         ; 0056ca53
    JZ 0x0056ca68                       ; 0056ca55
        ;   XREF to: 0056ca68 (CONDITIONAL_JUMP)  ; LAB_0056ca68
    MOV EAX,dword ptr [EBP + -0x1c]     ; 0056ca57
    MOV dword ptr [EDX],EAX             ; 0056ca5a | g_CDemonLightInstance.base.base.position.x
    MOV EAX,dword ptr [EBP + -0x18]     ; 0056ca5c
    MOV dword ptr [EDX + 0x4],EAX       ; 0056ca5f | g_CDemonLightInstance.base.base.position.y
    MOV EAX,dword ptr [EBP + -0x14]     ; 0056ca62
    MOV dword ptr [EDX + 0x8],EAX       ; 0056ca65 | g_CDemonLightInstance.base.base.position.z
    LEA EAX,[EBP + -0x10]               ; 0056ca68
        ;   Label: LAB_0056ca68
    PUSH EAX                            ; 0056ca6b
    MOV EAX,dword ptr [EBP + -0x4]      ; 0056ca6c
    ADD EAX,0x10                        ; 0056ca6f | DAT_02d7eb00
    PUSH EAX                            ; 0056ca72 | DAT_02d7eb00
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 0056ca73
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0056ca78
    MOV EAX,dword ptr [EBP + -0x4]      ; 0056ca7b | g_CDemonLightInstance
    PUSH 0x3f800000                     ; 0056ca7e
    MOV dword ptr [EAX + 0x140],0x42000000 ; 0056ca83 | g_CDemonLightInstance.base.max_distance
    PUSH EAX                            ; 0056ca8d | g_CDemonLightInstance
    MOV dword ptr [EAX + 0x38],0x42000000 ; 0056ca8e | g_CDemonLightInstance.base.base.projection_scale
    CALL core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0 ; 0056ca95
        ;   XREF to: 004765e0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0(CDemonLight * this_ptr, float intensity)
    LEA EAX,[EBP + -0x1c]               ; 0056ca9a
    ADD ESP,0x8                         ; 0056ca9d
    CMP EAX,0x32758e8                   ; 0056caa0 | DAT_032758e8
    JZ 0x0056cabf                       ; 0056caa5
        ;   XREF to: 0056cabf (CONDITIONAL_JUMP)  ; LAB_0056cabf
    MOV EAX,dword ptr [EBP + -0x1c]     ; 0056caa7
    MOV [0x032758e8],EAX                ; 0056caaa | DAT_032758e8
    MOV EAX,dword ptr [EBP + -0x18]     ; 0056caaf
    MOV [0x032758ec],EAX                ; 0056cab2 | g_CDemonCameraInstance.base.position.y
    MOV EAX,dword ptr [EBP + -0x14]     ; 0056cab7
    MOV [0x032758f0],EAX                ; 0056caba | g_CDemonCameraInstance.base.position.z
    MOV EAX,[0x0067b654]                ; 0056cabf | g_CGameInstance | g_CGamePtr
        ;   Label: LAB_0056cabf
    MOV ECX,dword ptr [EAX + 0x218]     ; 0056cac4 | DAT_02d81cb4
    TEST ECX,ECX                        ; 0056caca
    JNZ 0x0056cc95                      ; 0056cacc
        ;   XREF to: 0056cc95 (CONDITIONAL_JUMP)  ; LAB_0056cc95
    PUSH ECX                            ; 0056cad2
    MOV EBX,dword ptr [EBP + -0x4]      ; 0056cad3 | g_CDemonLightInstance
    PUSH EBX                            ; 0056cad6 | g_CDemonLightInstance
    CALL core_dlight.cpp_CDemonLight_beginScene_FUN_00472a80 ; 0056cad7
        ;   XREF to: 00472a80 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_beginScene_FUN_00472a80(CDemonLight * this_ptr, int skip_clear_buffers)
    ADD ESP,0x8                         ; 0056cadc
    PUSH EBX                            ; 0056cadf | g_CDemonLightInstance
    CALL core_dlight.cpp_CDemonLight_clearCircularShadowMapEdges_FUN_004735c0 ; 0056cae0
        ;   XREF to: 004735c0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_clearCircularShadowMapEdges_FUN_004735c0(CDemonLight * this_ptr)
    ADD ESP,0x4                         ; 0056cae5
    XOR EAX,EAX                         ; 0056cae8
    PUSH EAX                            ; 0056caea
    PUSH dword ptr [EBX + 0x140]        ; 0056caeb | g_CDemonLightInstance.base.max_distance
    PUSH EDI                            ; 0056caf1
    MOV [0x006810d8],EAX                ; 0056caf2 | g_RenderMirrorsFlag
    CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190 ; 0056caf7
        ;   XREF to: 0056a190 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(CDemonSet * this_ptr, float frustum_param, int render_mode)
    ADD ESP,0xc                         ; 0056cafc
    PUSH -0x1                           ; 0056caff
    MOV EDX,0x1                         ; 0056cb01
    PUSH EDI                            ; 0056cb06
    MOV dword ptr [0x006810d8],EDX      ; 0056cb07 | g_RenderMirrorsFlag
    CALL core_set.cpp_CDemonSet_FUN_0056fbd0 ; 0056cb0d
        ;   XREF to: 0056fbd0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0056fbd0(CDemonSet * this_ptr)
    ADD ESP,0x8                         ; 0056cb12
    PUSH 0x1                            ; 0056cb15
    PUSH EDI                            ; 0056cb17
    CALL core_set.cpp_CDemonSet_FUN_0056aca0 ; 0056cb18
        ;   XREF to: 0056aca0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0056aca0(CDemonSet * this_ptr)
    ADD ESP,0x8                         ; 0056cb1d
    PUSH 0x1                            ; 0056cb20
    MOV ESI,EBX                         ; 0056cb22
    PUSH EDI                            ; 0056cb24
    XOR ESI,EBX                         ; 0056cb25
    CALL core_set.cpp_CDemonSet_FUN_0056fbd0 ; 0056cb27
        ;   XREF to: 0056fbd0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0056fbd0(CDemonSet * this_ptr)
    MOV ECX,dword ptr [EDI + 0x15f6e4]  ; 0056cb2c
    ADD ESP,0x8                         ; 0056cb32
    TEST ECX,ECX                        ; 0056cb35
    JLE 0x0056cb70                      ; 0056cb37
        ;   XREF to: 0056cb70 (CONDITIONAL_JUMP)  ; LAB_0056cb70
    MOV EBX,EDI                         ; 0056cb39
    MOV EAX,dword ptr [EBX + 0x15f6e8]  ; 0056cb3b
        ;   Label: LAB_0056cb3b
    PUSH EAX                            ; 0056cb41
    MOV EDX,dword ptr [EAX + 0x154]     ; 0056cb42
    CALL dword ptr [EDX + 0x8]          ; 0056cb48
    ADD ESP,0x4                         ; 0056cb4b
    PUSH 0x1                            ; 0056cb4e
    MOV EAX,[0x006703ec]                ; 0056cb50 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EAX                            ; 0056cb55 | g_CDemonRendererInstance
    ADD EBX,0x4                         ; 0056cb56
    INC ESI                             ; 0056cb59
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0 ; 0056cb5a
        ;   XREF to: 0048caa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(CDemonRenderer * this_ptr, int enabled)
    MOV EDX,dword ptr [EDI + 0x15f6e4]  ; 0056cb5f
    ADD ESP,0x8                         ; 0056cb65
    CMP ESI,EDX                         ; 0056cb68
    JL 0x0056cb3b                       ; 0056cb6a
        ;   XREF to: 0056cb3b (CONDITIONAL_JUMP)  ; LAB_0056cb3b
    LEA EAX,[EAX]                       ; 0056cb6c
    MOV ECX,dword ptr [0x0067b9a0]      ; 0056cb70 | g_CGoreInstance | g_CGorePtr
        ;   Label: LAB_0056cb70
    PUSH ECX                            ; 0056cb76 | g_CGoreInstance
    CALL core_gore.cpp_CGore_FUN_004ed7b0 ; 0056cb77
        ;   XREF to: 004ed7b0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_FUN_004ed7b0(CGore * this_ptr)
    ADD ESP,0x4                         ; 0056cb7c
    MOV EBX,dword ptr [0x0067a3d0]      ; 0056cb7f | g_CFireEffectInstance | g_CFireEffectPtr
    PUSH EBX                            ; 0056cb85 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_render_FUN_004c7180 ; 0056cb86
        ;   XREF to: 004c7180 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_render_FUN_004c7180(CFireEffect * this_ptr)
    ADD ESP,0x4                         ; 0056cb8b
    PUSH 0x1                            ; 0056cb8e
    MOV ESI,dword ptr [EBP + -0x4]      ; 0056cb90
    PUSH ESI                            ; 0056cb93 | g_CDemonLightInstance
    CALL core_dlight.cpp_CDemonLight_endScene_FUN_00472d30 ; 0056cb94
        ;   XREF to: 00472d30 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_endScene_FUN_00472d30(CDemonLight * this_ptr)
    ADD ESP,0x8                         ; 0056cb99
    LEA EBX,[EBP + -0x4c]               ; 0056cb9c
    LEA EAX,[EBP + -0x1c]               ; 0056cb9f
    FLD float ptr [EAX]                 ; 0056cba2
    FMUL float ptr [0x00662850]         ; 0056cba4 | FLOAT_00662850
    FISTP dword ptr [EBX]               ; 0056cbaa
    FLD float ptr [EAX + 0x4]           ; 0056cbac
    FMUL float ptr [0x00662850]         ; 0056cbaf | FLOAT_00662850
    FISTP dword ptr [EBX + 0x4]         ; 0056cbb5
    FLD float ptr [EAX + 0x8]           ; 0056cbb8
    FMUL float ptr [0x00662850]         ; 0056cbbb | FLOAT_00662850
    FISTP dword ptr [EBX + 0x8]         ; 0056cbc1
    PUSH 0x0                            ; 0056cbc4
    PUSH 0x0                            ; 0056cbc6
    PUSH 0x0                            ; 0056cbc8
    PUSH 0x0                            ; 0056cbca
    PUSH 0x0                            ; 0056cbcc
    PUSH EDI                            ; 0056cbce
    CALL core_set.cpp_CDemonSet_FUN_0056d380 ; 0056cbcf
        ;   XREF to: 0056d380 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0056d380(CDemonSet * this_ptr)
    ADD ESP,0x18                        ; 0056cbd4
    PUSH 0x0                            ; 0056cbd7
    LEA EAX,[EBP + -0x4c]               ; 0056cbd9
    PUSH EAX                            ; 0056cbdc
    PUSH EDI                            ; 0056cbdd
    CALL core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80 ; 0056cbde
        ;   XREF to: 0056db80 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal)
    MOV EDX,EAX                         ; 0056cbe3
    SAR EDX,0x1f                        ; 0056cbe5
    SHL EDX,0x7                         ; 0056cbe8
    SBB EAX,EDX                         ; 0056cbeb
    SAR EAX,0x7                         ; 0056cbed
    ADD ESP,0xc                         ; 0056cbf0
    MOV EDI,dword ptr [0x0067a3d0]      ; 0056cbf3 | g_CFireEffectPtr
    PUSH EDI                            ; 0056cbf9 | g_CFireEffectInstance
    MOV ESI,EAX                         ; 0056cbfa
    CALL core_fire.cpp_CFireEffect_FUN_004c93d0 ; 0056cbfc
        ;   XREF to: 004c93d0 (UNCONDITIONAL_CALL)  ; int core_fire.cpp_CFireEffect_FUN_004c93d0(CFireEffect * this_ptr)
    SHL EAX,0x7                         ; 0056cc01
    ADD ESI,EAX                         ; 0056cc04
    MOV EAX,[0x006848fc]                ; 0056cc06 | g_CWeatherPtr
    MOV EAX,dword ptr [EAX + 0x24]      ; 0056cc0b | DAT_03f95de4
    SHL EAX,0xf                         ; 0056cc0e
    ADD ESI,EAX                         ; 0056cc11
    MOV EAX,[0x00679398]                ; 0056cc13 | g_WindowHeight
    ADD ESP,0x4                         ; 0056cc18
    CMP EAX,0xf0                        ; 0056cc1b
    JLE 0x0056cd17                      ; 0056cc20
        ;   XREF to: 0056cd17 (CONDITIONAL_JUMP)  ; LAB_0056cd17
    MOV EDX,dword ptr [EBP + -0x4]      ; 0056cc26
    MOV EDX,dword ptr [EDX + 0x1cc0]    ; 0056cc29 | DAT_02d807b0
    MOV EAX,[0x00679394]                ; 0056cc2f | g_WindowWidth
    ADD EDX,EDX                         ; 0056cc34
    SUB EAX,EDX                         ; 0056cc36
    MOV EDX,EAX                         ; 0056cc38
    SAR EDX,0x1f                        ; 0056cc3a
    SUB EAX,EDX                         ; 0056cc3d
    SAR EAX,0x1                         ; 0056cc3f
    MOV EDX,dword ptr [EBP + -0x4]      ; 0056cc41
    MOV EBX,EAX                         ; 0056cc44
    MOV EDX,dword ptr [EDX + 0x1cc4]    ; 0056cc46 | DAT_02d807b4
    MOV EAX,[0x00679398]                ; 0056cc4c | g_WindowHeight
    ADD EDX,EDX                         ; 0056cc51
    SUB EAX,EDX                         ; 0056cc53
    MOV EDX,EAX                         ; 0056cc55
    SAR EDX,0x1f                        ; 0056cc57
        ;   Label: LAB_0056cc57
    SUB EAX,EDX                         ; 0056cc5a
    SAR EAX,0x1                         ; 0056cc5c
    MOV EDX,EAX                         ; 0056cc5e
    MOV EAX,[0x02db87d0]                ; 0056cc60 | g_LocalHeroIndex
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 0056cc65 | g_HeroActors
    FLD float ptr [EAX + 0x1f738]       ; 0056cc6c
    FLDZ                                ; 0056cc72
    FCOMPP                              ; 0056cc74
    FNSTSW AX                           ; 0056cc76
    SAHF                                ; 0056cc78
    JNC 0x0056cd4b                      ; 0056cc79
        ;   XREF to: 0056cd4b (CONDITIONAL_JUMP)  ; LAB_0056cd4b
    PUSH ESI                            ; 0056cc7f
    PUSH EDX                            ; 0056cc80
    PUSH EBX                            ; 0056cc81
    MOV EAX,dword ptr [EBP + -0x4]      ; 0056cc82 | g_CDemonLightInstance
    PUSH EAX                            ; 0056cc85 | g_CDemonLightInstance
    CALL core_dlight.cpp_CDemonLight_drawShadowDepthBuffer_FUN_00476670 ; 0056cc86
        ;   XREF to: 00476670 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_drawShadowDepthBuffer_FUN_00476670(CDemonLight * this_ptr, int screen_x, int screen_y, int brightness_offset)
    ADD ESP,0x10                        ; 0056cc8b
    MOV ESP,EBP                         ; 0056cc8e
    POP EBP                             ; 0056cc90
    POP EDI                             ; 0056cc91
    POP ESI                             ; 0056cc92
    POP EBX                             ; 0056cc93
    RET                                 ; 0056cc94
    LEA EAX,[EBP + -0x1c]               ; 0056cc95
        ;   Label: LAB_0056cc95
    PUSH EAX                            ; 0056cc98
    MOV EDI,dword ptr [0x006703ec]      ; 0056cc99 | g_CDemonRendererPtr2
    XOR EBX,EBX                         ; 0056cc9f
    PUSH EDI                            ; 0056cca1 | g_CDemonRendererInstance
    MOV ESI,dword ptr [0x02d03e94]      ; 0056cca2 | g_UseExternalRenderer
    MOV dword ptr [0x02d03e94],EBX      ; 0056cca8 | g_UseExternalRenderer
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150 ; 0056ccae
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150(CDemonRenderer * this_ptr, CVector3i * point_ptr)
    ADD ESP,0x8                         ; 0056ccb3
    MOV EAX,[0x006703ec]                ; 0056ccb6 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH 0x42000000                     ; 0056ccbb
    PUSH EAX                            ; 0056ccc0 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650 ; 0056ccc1
        ;   XREF to: 0048c650 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650(CDemonRenderer * this_ptr, float field_of_view)
    ADD ESP,0x8                         ; 0056ccc6
    LEA EAX,[EBP + -0x10]               ; 0056ccc9
    PUSH EAX                            ; 0056cccc
    MOV EDX,dword ptr [0x006703ec]      ; 0056cccd | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 0056ccd3 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0 ; 0056ccd4
        ;   XREF to: 0048c1d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0(CDemonRenderer * this_ptr)
    MOV ECX,0x1                         ; 0056ccd9
    ADD ESP,0x8                         ; 0056ccde
    MOV dword ptr [0x03277d14],ECX      ; 0056cce1 | g_CDemonRaytraceInstance
    CALL wincore_windll.cpp_clearZBuffer_FUN_005b3ed4 ; 0056cce7
        ;   XREF to: 005b3ed4 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearZBuffer_FUN_005b3ed4()
    PUSH 0x0                            ; 0056ccec
    MOV EBX,dword ptr [0x006810c8]      ; 0056ccee | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH 0x461c3f9a                     ; 0056ccf4
    PUSH EBX                            ; 0056ccf9 | g_CDemonSetInstance
    XOR EDI,EDI                         ; 0056ccfa
    CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190 ; 0056ccfc
        ;   XREF to: 0056a190 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(CDemonSet * this_ptr, float frustum_param, int render_mode)
    ADD ESP,0xc                         ; 0056cd01
    MOV dword ptr [0x03277d14],EDI      ; 0056cd04 | g_CDemonRaytraceInstance
    MOV dword ptr [0x02d03e94],ESI      ; 0056cd0a | g_UseExternalRenderer
    MOV ESP,EBP                         ; 0056cd10
    POP EBP                             ; 0056cd12
    POP EDI                             ; 0056cd13
    POP ESI                             ; 0056cd14
    POP EBX                             ; 0056cd15
    RET                                 ; 0056cd16
    MOV EAX,dword ptr [EBP + -0x4]      ; 0056cd17
        ;   Label: LAB_0056cd17
    MOV EDX,dword ptr [0x00679394]      ; 0056cd1a | g_WindowWidth
    MOV ECX,dword ptr [EAX + 0x1cc0]    ; 0056cd20 | DAT_02d807b0
    SUB EDX,ECX                         ; 0056cd26
    MOV EAX,EDX                         ; 0056cd28
    SAR EDX,0x1f                        ; 0056cd2a
    SUB EAX,EDX                         ; 0056cd2d
    SAR EAX,0x1                         ; 0056cd2f
    MOV EBX,EAX                         ; 0056cd31
    MOV EAX,dword ptr [EBP + -0x4]      ; 0056cd33
    MOV EDX,dword ptr [0x00679398]      ; 0056cd36 | g_WindowHeight
    MOV EDI,dword ptr [EAX + 0x1cc4]    ; 0056cd3c | DAT_02d807b4
    SUB EDX,EDI                         ; 0056cd42
    MOV EAX,EDX                         ; 0056cd44
    JMP 0x0056cc57                      ; 0056cd46
        ;   XREF to: 0056cc57 (UNCONDITIONAL_JUMP)  ; LAB_0056cc57
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0056cd4b
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_0056cd4b
    MOV ESP,EBP                         ; 0056cd50
    POP EBP                             ; 0056cd52
    POP EDI                             ; 0056cd53
    POP ESI                             ; 0056cd54
    POP EBX                             ; 0056cd55
    RET                                 ; 0056cd56

