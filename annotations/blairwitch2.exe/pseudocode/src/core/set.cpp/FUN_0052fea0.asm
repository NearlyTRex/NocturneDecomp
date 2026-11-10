; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_set_cpp_FUN_0052fea0(CDemonSet *param_1)
;
; Local Variables:
; undefined        Stack[-0x84]:1  local_84
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined        Stack[-0x6c]:1  local_6c
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined        Stack[-0x48]:1  local_48
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_FUN_004b5190 at 004b5d27
;
; Referenced Globals:
;   undefined4 s_Bip01_Head_005e5911+1
;   undefined4 DAT_005e5922
;   undefined4 DAT_005fb210
;   undefined4 DAT_0060b280
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_00614d30
;   CGore* g_CGorePtr = 01cb8284
;   CScript* g_CScriptPtr = 01e65cd0
;   undefined4 DAT_0061b5b8
;   undefined4 DAT_0061e8f4
;   undefined4 DAT_01ba5c50
;   undefined4 g_CDemonLightInstance.base.base.position
;   undefined4 g_CDemonLightInstance.base.base.position+4
;   undefined4 g_CDemonLightInstance.base.base.position+8
;   ... and 11 more
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
;   core_dlight.cpp_CDemonLight_beginScene_FUN_0044a020
;   core_dlight.cpp_CDemonLight_drawShadowDepthBuffer_FUN_0044d600
;   core_dlight.cpp_CDemonLight_endScene_FUN_0044a2d0
;   core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_0044d570
;   core_fire.cpp_CFireEffect_render_FUN_0049c780
;   core_fire.cpp_FUN_0049eb50
;   core_gore.cpp_CGore_renderParticles_FUN_004c9440
;   core_set.cpp_CDemonSet_buildDisplayList_FUN_005332f0
;   core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_005311e0
;   core_set.cpp_CDemonSet_renderBackgroundActors_FUN_0052dc10
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0052d0e0
;   core_set.cpp_CDemonSet_setLightingParameters_FUN_00530980
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   ... and 4 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052fea0
        ;   Label: core_set.cpp_FUN_0052fea0
    PUSH ESI                            ; 0052fea1
    PUSH EDI                            ; 0052fea2
    PUSH EBP                            ; 0052fea3
    MOV EBP,ESP                         ; 0052fea4
    SUB ESP,0x74                        ; 0052fea6
    MOV EBX,dword ptr [0x0061b460]      ; 0052fea9 | g_CScriptPtr
    MOV EDX,0x1cb3950                   ; 0052feaf
    MOV EBX,dword ptr [EBX + 0x18]      ; 0052feb4 | g_CScriptInstance.field6_0x18
    MOV dword ptr [EBP + -0x4],EDX      ; 0052feb7
    TEST EBX,EBX                        ; 0052feba
    JNZ 0x0052fec5                      ; 0052febc
        ;   XREF to: 0052fec5 (CONDITIONAL_JUMP)  ; LAB_0052fec5
    MOV ESP,EBP                         ; 0052febe
    POP EBP                             ; 0052fec0
    POP EDI                             ; 0052fec1
    POP ESI                             ; 0052fec2
    POP EBX                             ; 0052fec3
    RET                                 ; 0052fec4
    LEA ESI,[EBX + 0x2b4]               ; 0052fec5
        ;   Label: LAB_0052fec5
    PUSH ESI                            ; 0052fecb
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 0052fecc
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0052fed1
    PUSH 0x0                            ; 0052fed4
    PUSH 0x5e5912                       ; 0052fed6 | s_Bip01_Head_005e5911+1
    PUSH EAX                            ; 0052fedb
    MOV EDI,0x3ead0e56                  ; 0052fedc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 0052fee1
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    MOV EDX,EAX                         ; 0052fee6
    SHL EAX,0x2                         ; 0052fee8
    ADD ESI,0xe80                       ; 0052feeb
    SUB EAX,EDX                         ; 0052fef1
    ADD ESP,0xc                         ; 0052fef3
    SHL EAX,0x4                         ; 0052fef6
    MOV dword ptr [EBP + -0x10],EDI     ; 0052fef9
    ADD ESI,EAX                         ; 0052fefc
    MOV EAX,0x3f400000                  ; 0052fefe
    MOV dword ptr [EBP + -0x8],ESI      ; 0052ff03
    PUSH ESI                            ; 0052ff06
    MOV dword ptr [EBP + -0xc],EAX      ; 0052ff07
    XOR ESI,ESI                         ; 0052ff0a
    LEA EAX,[EBP + -0x14]               ; 0052ff0c
    MOV dword ptr [EBP + -0x14],ESI     ; 0052ff0f
    PUSH EAX                            ; 0052ff12
    LEA ESI,[EBP + -0x5c]               ; 0052ff13
    LEA EDI,[EBP + -0x74]               ; 0052ff16
    CALL core_xform.cpp_FUN_00591530    ; 0052ff19
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    ADD ESP,0x8                         ; 0052ff1e
    LEA EAX,[EBP + -0x74]               ; 0052ff21
    LEA ESI,[EBP + -0x5c]               ; 0052ff24
    PUSH EAX                            ; 0052ff27
    MOVSD ES:EDI,ESI                    ; 0052ff28
    MOVSD ES:EDI,ESI                    ; 0052ff29
    MOVSD ES:EDI,ESI                    ; 0052ff2a
    PUSH EBX                            ; 0052ff2b
    LEA ESI,[EBP + -0x20]               ; 0052ff2c
    LEA EDI,[EBP + -0x44]               ; 0052ff2f
    CALL core_actor.cpp_FUN_00408d70    ; 0052ff32
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[EBP + -0x20]               ; 0052ff37
    MOV EDX,dword ptr [EBP + -0x8]      ; 0052ff3a
    ADD ESP,0x8                         ; 0052ff3d
    MOVSD ES:EDI,ESI                    ; 0052ff40
    MOVSD ES:EDI,ESI                    ; 0052ff41
    MOVSD ES:EDI,ESI                    ; 0052ff42
    PUSH EDX                            ; 0052ff43
    LEA ESI,[EBP + -0x38]               ; 0052ff44
    LEA EDI,[EBP + -0x68]               ; 0052ff47
    CALL core_xform.cpp_matrixToEulerAngles_FUN_00591de0 ; 0052ff4a
        ;   XREF to: 00591de0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_matrixToEulerAngles_FUN_00591de0()
    LEA ESI,[EBP + -0x38]               ; 0052ff4f
    MOV EDX,0x1cb3950                   ; 0052ff52
    LEA EAX,[EBP + -0x44]               ; 0052ff57
    XOR ECX,ECX                         ; 0052ff5a
    ADD ESP,0x4                         ; 0052ff5c
    MOV dword ptr [EBP + -0x4c],ECX     ; 0052ff5f
    MOV dword ptr [EBP + -0x48],ECX     ; 0052ff62
    MOVSD ES:EDI,ESI                    ; 0052ff65
    MOVSD ES:EDI,ESI                    ; 0052ff66
    MOVSD ES:EDI,ESI                    ; 0052ff67
    MOV dword ptr [0x01cb560c],ECX      ; 0052ff68 | g_CDemonLightInstance.volumetric_enabled
    FLD float ptr [EBP + -0x68]         ; 0052ff6e
    FADD double ptr [0x005e5922]        ; 0052ff71 | DAT_005e5922
    FLD float ptr [EBP + -0x64]         ; 0052ff77
    FXCH                                ; 0052ff7a
    FSTP float ptr [EBP + -0x50]        ; 0052ff7c
    FADD float ptr [EBX + 0x34]         ; 0052ff7f
    ADD EDX,0x4                         ; 0052ff82
    FSTP float ptr [EBP + -0x4c]        ; 0052ff85
    CMP EDX,EAX                         ; 0052ff88
    JZ 0x0052ff9d                       ; 0052ff8a
        ;   XREF to: 0052ff9d (CONDITIONAL_JUMP)  ; LAB_0052ff9d
    MOV EAX,dword ptr [EBP + -0x44]     ; 0052ff8c
    MOV dword ptr [EDX],EAX             ; 0052ff8f | g_CDemonLightInstance.base.base.position
    MOV EAX,dword ptr [EBP + -0x40]     ; 0052ff91
    MOV dword ptr [EDX + 0x4],EAX       ; 0052ff94 | g_CDemonLightInstance.base.base.position+4
    MOV EAX,dword ptr [EBP + -0x3c]     ; 0052ff97
    MOV dword ptr [EDX + 0x8],EAX       ; 0052ff9a | g_CDemonLightInstance.base.base.position+8
    LEA EAX,[EBP + -0x50]               ; 0052ff9d
        ;   Label: LAB_0052ff9d
    PUSH EAX                            ; 0052ffa0
    MOV EAX,dword ptr [EBP + -0x4]      ; 0052ffa1
    ADD EAX,0x10                        ; 0052ffa4
    PUSH EAX                            ; 0052ffa7 | g_CDemonLightInstance.base.base.rotation_matrix.m[0].x
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280 ; 0052ffa8
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0052ffad
    MOV EAX,dword ptr [EBP + -0x4]      ; 0052ffb0
    PUSH 0x3f800000                     ; 0052ffb3
    MOV dword ptr [EAX + 0x140],0x42280000 ; 0052ffb8 | g_CDemonLightInstance.base.max_distance
    PUSH EAX                            ; 0052ffc2
    MOV dword ptr [EAX + 0x38],0x41d00000 ; 0052ffc3 | g_CDemonLightInstance.base.base.focal_length
    CALL core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_0044d570 ; 0052ffca
        ;   XREF to: 0044d570 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_0044d570(CDemonLight * this_ptr, float intensity)
    LEA EAX,[EBP + -0x44]               ; 0052ffcf
    ADD ESP,0x8                         ; 0052ffd2
    CMP EAX,0x1fc783c                   ; 0052ffd5
    JZ 0x0052fff4                       ; 0052ffda
        ;   XREF to: 0052fff4 (CONDITIONAL_JUMP)  ; LAB_0052fff4
    MOV EAX,dword ptr [EBP + -0x44]     ; 0052ffdc
    MOV [0x01fc783c],EAX                ; 0052ffdf | g_CDemonCameraInstance.base.position
    MOV EAX,dword ptr [EBP + -0x40]     ; 0052ffe4
    MOV [0x01fc7840],EAX                ; 0052ffe7 | g_CDemonCameraInstance.base.position+4
    MOV EAX,dword ptr [EBP + -0x3c]     ; 0052ffec
    MOV [0x01fc7844],EAX                ; 0052ffef | g_CDemonCameraInstance.base.position+8
    PUSH 0x0                            ; 0052fff4
        ;   Label: LAB_0052fff4
    MOV EDX,dword ptr [EBP + -0x4]      ; 0052fff6
    PUSH EDX                            ; 0052fff9
    CALL core_dlight.cpp_CDemonLight_beginScene_FUN_0044a020 ; 0052fffa
        ;   XREF to: 0044a020 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_beginScene_FUN_0044a020(CDemonLight * this_ptr, int skip_clear_buffers)
    ADD ESP,0x8                         ; 0052ffff
    XOR ECX,ECX                         ; 00530002
    MOV EAX,dword ptr [EBP + -0x4]      ; 00530004
    PUSH ECX                            ; 00530007
    MOV EBX,dword ptr [EBP + 0x14]      ; 00530008
    PUSH dword ptr [EAX + 0x140]        ; 0053000b | g_CDemonLightInstance.base.max_distance
    PUSH EBX                            ; 00530011
    MOV dword ptr [0x0061b5b8],ECX      ; 00530012 | DAT_0061b5b8
    CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0052d0e0 ; 00530018
        ;   XREF to: 0052d0e0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0052d0e0(CDemonSet * this_ptr, float frustum_param, int render_mode)
    ADD ESP,0xc                         ; 0053001d
    PUSH -0x1                           ; 00530020
    MOV ESI,0x1                         ; 00530022
    PUSH EBX                            ; 00530027
    MOV dword ptr [0x0061b5b8],ESI      ; 00530028 | DAT_0061b5b8
    CALL core_set.cpp_CDemonSet_buildDisplayList_FUN_005332f0 ; 0053002e
        ;   XREF to: 005332f0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_buildDisplayList_FUN_005332f0(CDemonSet * this_ptr, uint dirty_flags_mask)
    ADD ESP,0x8                         ; 00530033
    PUSH ESI                            ; 00530036
    PUSH EBX                            ; 00530037
    CALL core_set.cpp_CDemonSet_renderBackgroundActors_FUN_0052dc10 ; 00530038
        ;   XREF to: 0052dc10 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderBackgroundActors_FUN_0052dc10(CDemonSet * this_ptr, int layer_flag)
    ADD ESP,0x8                         ; 0053003d
    PUSH ESI                            ; 00530040
    PUSH EBX                            ; 00530041
    MOV EDI,EBX                         ; 00530042
    CALL core_set.cpp_CDemonSet_buildDisplayList_FUN_005332f0 ; 00530044
        ;   XREF to: 005332f0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_buildDisplayList_FUN_005332f0(CDemonSet * this_ptr, uint dirty_flags_mask)
    MOV EAX,EDI                         ; 00530049
    ADD ESP,0x8                         ; 0053004b
    MOV ECX,dword ptr [EAX + 0x15f6f8]  ; 0053004e
    XOR EBX,EBX                         ; 00530054
    TEST ECX,ECX                        ; 00530056
    JLE 0x005300a0                      ; 00530058
        ;   XREF to: 005300a0 (CONDITIONAL_JUMP)  ; LAB_005300a0
    MOV ESI,EAX                         ; 0053005a
    MOV EAX,dword ptr [ESI + 0x15f6fc]  ; 0053005c
        ;   Label: LAB_0053005c
    PUSH EAX                            ; 00530062
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 00530063
    CALL dword ptr [EDX + 0x18]         ; 00530069
    ADD ESP,0x4                         ; 0053006c
    PUSH 0x1                            ; 0053006f
    MOV EDI,dword ptr [0x0060b280]      ; 00530071 | DAT_0060b280
    PUSH EDI                            ; 00530077 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920 ; 00530078
        ;   XREF to: 0046b920 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920(CDemonRenderer * this_ptr, int enabled)
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053007d
    ADD ESI,0x4                         ; 00530080
    INC EBX                             ; 00530083
    MOV EDX,dword ptr [EAX + 0x15f6f8]  ; 00530084
    ADD ESP,0x8                         ; 0053008a
    CMP EBX,EDX                         ; 0053008d
    JL 0x0053005c                       ; 0053008f
        ;   XREF to: 0053005c (CONDITIONAL_JUMP)  ; LAB_0053005c
    LEA EAX,[EAX]                       ; 00530091
    LEA EDX,[EDX]                       ; 00530097
    LEA EAX,[EAX]                       ; 0053009d
    MOV ECX,dword ptr [0x006167e0]      ; 005300a0 | g_CGorePtr
        ;   Label: LAB_005300a0
    PUSH ECX                            ; 005300a6
    CALL core_gore.cpp_CGore_renderParticles_FUN_004c9440 ; 005300a7
        ;   XREF to: 004c9440 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_renderParticles_FUN_004c9440(CGore * this_ptr)
    ADD ESP,0x4                         ; 005300ac
    MOV EBX,dword ptr [0x00614d30]      ; 005300af | DAT_00614d30
    PUSH EBX                            ; 005300b5
    CALL core_fire.cpp_CFireEffect_render_FUN_0049c780 ; 005300b6
        ;   XREF to: 0049c780 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_render_FUN_0049c780(CFireEffect * this_ptr)
    ADD ESP,0x4                         ; 005300bb
    PUSH 0x1                            ; 005300be
    MOV ESI,dword ptr [EBP + -0x4]      ; 005300c0
    PUSH ESI                            ; 005300c3
    CALL core_dlight.cpp_CDemonLight_endScene_FUN_0044a2d0 ; 005300c4
        ;   XREF to: 0044a2d0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_endScene_FUN_0044a2d0(CDemonLight * this_ptr, int restore_viewport_state)
    ADD ESP,0x8                         ; 005300c9
    LEA EBX,[EBP + -0x2c]               ; 005300cc
    LEA EAX,[EBP + -0x44]               ; 005300cf
    FLD float ptr [EAX]                 ; 005300d2
    FMUL float ptr [0x005fb210]         ; 005300d4 | DAT_005fb210
    FISTP dword ptr [EBX]               ; 005300da
    FLD float ptr [EAX + 0x4]           ; 005300dc
    FMUL float ptr [0x005fb210]         ; 005300df | DAT_005fb210
    FISTP dword ptr [EBX + 0x4]         ; 005300e5
    FLD float ptr [EAX + 0x8]           ; 005300e8
    FMUL float ptr [0x005fb210]         ; 005300eb | DAT_005fb210
    FISTP dword ptr [EBX + 0x8]         ; 005300f1
    PUSH 0x0                            ; 005300f4
    PUSH 0x0                            ; 005300f6
    PUSH 0x0                            ; 005300f8
    PUSH 0x0                            ; 005300fa
    PUSH 0x0                            ; 005300fc
    MOV EDI,dword ptr [EBP + 0x14]      ; 005300fe
    PUSH EDI                            ; 00530101
    CALL core_set.cpp_CDemonSet_setLightingParameters_FUN_00530980 ; 00530102
        ;   XREF to: 00530980 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setLightingParameters_FUN_00530980(CDemonSet * this_ptr, CVector3f * position, UOrientationVector * orientation, CVector3f * aabb_min, ...)
    ADD ESP,0x18                        ; 00530107
    PUSH 0x0                            ; 0053010a
    LEA EAX,[EBP + -0x2c]               ; 0053010c
    PUSH EAX                            ; 0053010f
    PUSH EDI                            ; 00530110
    CALL core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_005311e0 ; 00530111
        ;   XREF to: 005311e0 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_005311e0(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal)
    MOV EDX,EAX                         ; 00530116
    SAR EDX,0x1f                        ; 00530118
    SHL EDX,0x7                         ; 0053011b
    SBB EAX,EDX                         ; 0053011e
    SAR EAX,0x7                         ; 00530120
    ADD ESP,0xc                         ; 00530123
    MOV EDX,dword ptr [0x00614d30]      ; 00530126 | DAT_00614d30
    PUSH EDX                            ; 0053012c
    MOV ESI,EAX                         ; 0053012d
    CALL core_fire.cpp_FUN_0049eb50     ; 0053012f
        ;   XREF to: 0049eb50 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_0049eb50()
    SHL EAX,0x7                         ; 00530134
    ADD ESI,EAX                         ; 00530137
    MOV EAX,[0x0061e8f4]                ; 00530139 | DAT_0061e8f4
    MOV EAX,dword ptr [EAX + 0x24]      ; 0053013e | DAT_02661fa4
    MOV ECX,dword ptr [0x006141bc]      ; 00530141 | DAT_006141bc
    SHL EAX,0xf                         ; 00530147
    ADD ESP,0x4                         ; 0053014a
    ADD ESI,EAX                         ; 0053014d
    CMP ECX,0xf0                        ; 0053014f
    JLE 0x005301a2                      ; 00530155
        ;   XREF to: 005301a2 (CONDITIONAL_JUMP)  ; LAB_005301a2
    MOV EDX,dword ptr [EBP + -0x4]      ; 00530157
    MOV EDX,dword ptr [EDX + 0x1cc0]    ; 0053015a | g_CDemonLightInstance.shadow_map_width
    MOV EAX,[0x006141b8]                ; 00530160 | DAT_006141b8
    ADD EDX,EDX                         ; 00530165
    SUB EAX,EDX                         ; 00530167
    MOV EDX,EAX                         ; 00530169
    SAR EDX,0x1f                        ; 0053016b
    SUB EAX,EDX                         ; 0053016e
    SAR EAX,0x1                         ; 00530170
    MOV EDX,dword ptr [EBP + -0x4]      ; 00530172
    MOV EBX,EAX                         ; 00530175
    MOV EDX,dword ptr [EDX + 0x1cc4]    ; 00530177 | g_CDemonLightInstance.shadow_map_height
    MOV EAX,ECX                         ; 0053017d
    ADD EDX,EDX                         ; 0053017f
    SUB EAX,EDX                         ; 00530181
    MOV EDX,EAX                         ; 00530183
    SAR EDX,0x1f                        ; 00530185
        ;   Label: LAB_00530185
    SUB EAX,EDX                         ; 00530188
    SAR EAX,0x1                         ; 0053018a
    PUSH ESI                            ; 0053018c
    PUSH EAX                            ; 0053018d
    PUSH EBX                            ; 0053018e
    MOV EAX,dword ptr [EBP + -0x4]      ; 0053018f
    PUSH EAX                            ; 00530192
    CALL core_dlight.cpp_CDemonLight_drawShadowDepthBuffer_FUN_0044d600 ; 00530193
        ;   XREF to: 0044d600 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_drawShadowDepthBuffer_FUN_0044d600(CDemonLight * this_ptr, int screen_x, int screen_y, int brightness_offset)
    ADD ESP,0x10                        ; 00530198
    MOV ESP,EBP                         ; 0053019b
    POP EBP                             ; 0053019d
    POP EDI                             ; 0053019e
    POP ESI                             ; 0053019f
    POP EBX                             ; 005301a0
    RET                                 ; 005301a1
    MOV EAX,dword ptr [EBP + -0x4]      ; 005301a2
        ;   Label: LAB_005301a2
    MOV EDX,dword ptr [0x006141b8]      ; 005301a5 | DAT_006141b8
    MOV EBX,dword ptr [EAX + 0x1cc0]    ; 005301ab | g_CDemonLightInstance.shadow_map_width
    SUB EDX,EBX                         ; 005301b1
    MOV EAX,EDX                         ; 005301b3
    SAR EDX,0x1f                        ; 005301b5
    SUB EAX,EDX                         ; 005301b8
    SAR EAX,0x1                         ; 005301ba
    MOV EBX,EAX                         ; 005301bc
    MOV EAX,dword ptr [EBP + -0x4]      ; 005301be
    MOV EDX,ECX                         ; 005301c1
    MOV EDI,dword ptr [EAX + 0x1cc4]    ; 005301c3 | g_CDemonLightInstance.shadow_map_height
    SUB EDX,EDI                         ; 005301c9
    MOV EAX,EDX                         ; 005301cb
    JMP 0x00530185                      ; 005301cd
        ;   XREF to: 00530185 (UNCONDITIONAL_JUMP)  ; LAB_00530185

