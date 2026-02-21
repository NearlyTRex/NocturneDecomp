; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_renderEthereal_FUN_0042af60(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x1aac]:1  local_1aac
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_renderCharacter_FUN_00429aa0 at 00429ae3
;
; Referenced Globals:
;   float FLOAT_0061713a = 8388608
;   SMRGLTextureBasic[6] SMRGLTextureBasic_ARRAY_0066e6b0
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CGame* g_CGamePtr = 02d81a9c
;   int INT_00823a90
;   int INT_00823a94
;   CDemonRenderer g_CDemonRendererInstance
;   undefined4 DAT_02c6d598
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.delta_time_float
;   CHero*[4] g_HeroActors
;   int g_LocalHeroIndex
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_selectLOD_FUN_0059ce40
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
;   core_skeleton.cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_005a1800
;   core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;   core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_005a0340
;   core_skeleton.cpp_CDeformableModelInstance_scalePoseDataForHierarchy_FUN_005a00f0
;   core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_005a15e0
;   core_skeleton.cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_005a0250
;   crt_math.c_round_FUN_005fe6b0
;   crt_stdlib.c_rand_FUN_005feb5c
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
;   engine_texture.cpp_ensureTextureLoaded_FUN_005dd800
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042af60
        ;   Label: core_charactr.cpp_CCharacter_renderEthereal_FUN_0042af60
    PUSH ESI                            ; 0042af61
    PUSH EBP                            ; 0042af62
    SUB ESP,0x1aa0                      ; 0042af63
    MOV ESI,dword ptr [ESP + 0x1ab0]    ; 0042af69
    PUSH 0x1                            ; 0042af70
    MOV EDX,dword ptr [0x006703ec]      ; 0042af72 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 0042af78 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 0042af79
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0042af7e
    PUSH 0xc000                         ; 0042af81
    MOV ECX,dword ptr [0x006703ec]      ; 0042af86 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH ECX                            ; 0042af8c | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 0042af8d
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
    MOV EAX,[0x02db87d0]                ; 0042af92 | g_LocalHeroIndex
    MOV EBX,dword ptr [EAX*0x4 + 0x2db87c0] ; 0042af97 | g_HeroActors
    ADD ESP,0x8                         ; 0042af9e
    CMP ESI,EBX                         ; 0042afa1
    JNZ 0x0042afc9                      ; 0042afa3
        ;   XREF to: 0042afc9 (CONDITIONAL_JUMP)  ; LAB_0042afc9
    MOV EAX,[0x0067b654]                ; 0042afa5 | g_CGameInstance | g_CGamePtr
    FLD float ptr [EAX + 0x264]         ; 0042afaa | g_CGameInstance.delta_time_float
    FMUL float ptr [0x0061713a]         ; 0042afb0 | FLOAT_0061713a
    FILD dword ptr [0x00823a90]         ; 0042afb6 | INT_00823a90
    FADDP                               ; 0042afbc
    CALL crt_math.c_round_FUN_005fe6b0  ; 0042afbe
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [0x00823a90]        ; 0042afc3 | INT_00823a90
    PUSH EDI                            ; 0042afc9
        ;   Label: LAB_0042afc9
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 0042afca
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005feb5c()
    MOV EDX,EAX                         ; 0042afcf
    MOV ECX,0x6                         ; 0042afd1
    SAR EDX,0x1f                        ; 0042afd6
    IDIV ECX                            ; 0042afd9
    MOV EAX,[0x006703ec]                ; 0042afdb | g_CDemonRendererPtr2
    MOV dword ptr [0x00823a94],EDX      ; 0042afe0 | INT_00823a94
    MOV dword ptr [EAX + 0x20],0x1      ; 0042afe6 | DAT_02c6d598
    LEA EAX,[EDX*0x4 + 0x0]             ; 0042afed
    SUB EAX,EDX                         ; 0042aff4
    SHL EAX,0x3                         ; 0042aff6
    ADD EAX,0x66e6b0                    ; 0042aff9 | SMRGLTextureBasic_ARRAY_0066e6b0
    PUSH EAX                            ; 0042affe
    CALL engine_texture.cpp_ensureTextureLoaded_FUN_005dd800 ; 0042afff
        ;   XREF to: 005dd800 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_texture.cpp_ensureTextureLoaded_FUN_005dd800(SMRGLTextureBasic * texture)
    ADD ESP,0x4                         ; 0042b004
    LEA EAX,[ESP + 0x4]                 ; 0042b007
    PUSH EAX                            ; 0042b00b
    LEA EBX,[ESI + 0x158]               ; 0042b00c
    PUSH EBX                            ; 0042b012
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510 ; 0042b013
        ;   XREF to: 005a1510 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510(CDeformableModelInstance * this_ptr, SPose * bone_transform)
    ADD ESP,0x8                         ; 0042b018
    PUSH -0x1                           ; 0042b01b
    PUSH 0x3f8ccccd                     ; 0042b01d
    PUSH EBX                            ; 0042b022
    CALL core_skeleton.cpp_CDeformableModelInstance_scalePoseDataForHierarchy_FUN_005a00f0 ; 0042b023
        ;   XREF to: 005a00f0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_scalePoseDataForHierarchy_FUN_005a00f0(CDeformableModelInstance * this_ptr, float scale_factor, int target_bone_index)
    ADD ESP,0xc                         ; 0042b028
    PUSH EBX                            ; 0042b02b
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40 ; 0042b02c
        ;   XREF to: 0059fb40 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042b031
    LEA EAX,[ESI + 0x2390]              ; 0042b034
    PUSH EAX                            ; 0042b03a
    PUSH EBX                            ; 0042b03b
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 0042b03c
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042b041
    PUSH EAX                            ; 0042b044
    CALL core_skeleton.cpp_CDeformableModel_selectLOD_FUN_0059ce40 ; 0042b045
        ;   XREF to: 0059ce40 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_selectLOD_FUN_0059ce40(CDeformableModel * this_ptr, CBoundingBox3D * bounding_box)
    ADD ESP,0x8                         ; 0042b04a
    PUSH EAX                            ; 0042b04d
    PUSH EBX                            ; 0042b04e
    CALL core_skeleton.cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_005a0250 ; 0042b04f
        ;   XREF to: 005a0250 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_005a0250(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 0042b054
    PUSH 0x0                            ; 0042b057
    MOV EDI,dword ptr [0x00823a90]      ; 0042b059 | INT_00823a90
    PUSH EDI                            ; 0042b05f
    PUSH EBX                            ; 0042b060
    CALL core_skeleton.cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_005a1800 ; 0042b061
        ;   XREF to: 005a1800 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_005a1800(CDeformableModelInstance * this_ptr, int param_2, int param_3)
    ADD ESP,0xc                         ; 0042b066
    XOR EAX,EAX                         ; 0042b069
    MOV EBX,0xb332                      ; 0042b06b
    POP EDI                             ; 0042b070
    MOV EDX,dword ptr [0x006703ec]      ; 0042b071 | g_CDemonRendererPtr2
        ;   Label: LAB_0042b071
    MOV ECX,dword ptr [EDX]             ; 0042b077 | g_CDemonRendererInstance
    MOV dword ptr [ECX + EAX*0x1 + 0x20],EBX ; 0042b079
    MOV ECX,dword ptr [EDX]             ; 0042b07d | g_CDemonRendererInstance
    MOV dword ptr [ECX + EAX*0x1 + 0x24],EBX ; 0042b07f
    ADD EAX,0x30                        ; 0042b083
    MOV EDX,dword ptr [EDX]             ; 0042b086 | g_CDemonRendererInstance
    MOV dword ptr [EDX + EAX*0x1 + -0x8],0xffff ; 0042b088
    CMP EAX,0x17700                     ; 0042b090
    JNZ 0x0042b071                      ; 0042b095
        ;   XREF to: 0042b071 (CONDITIONAL_JUMP)  ; LAB_0042b071
    PUSH 0x1                            ; 0042b097
    PUSH 0x267                          ; 0042b099
    LEA EBX,[ESI + 0x158]               ; 0042b09e
    PUSH EBX                            ; 0042b0a4
    CALL core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_005a0340 ; 0042b0a5
        ;   XREF to: 005a0340 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_005a0340(CDeformableModelInstance * this_ptr)
    MOV EAX,[0x006703ec]                ; 0042b0aa | g_CDemonRendererPtr2
    ADD ESP,0xc                         ; 0042b0af
    MOV dword ptr [EAX + 0x20],0x0      ; 0042b0b2 | DAT_02c6d598
    MOV EAX,ESP                         ; 0042b0b9
    PUSH EAX                            ; 0042b0bb
    PUSH EBX                            ; 0042b0bc
    CALL core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_005a15e0 ; 0042b0bd
        ;   XREF to: 005a15e0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_005a15e0(CDeformableModelInstance * this_ptr, SPose * bone_transform)
    ADD ESP,0x8                         ; 0042b0c2
    PUSH 0x0                            ; 0042b0c5
    MOV EBP,dword ptr [0x006703ec]      ; 0042b0c7 | g_CDemonRendererPtr2
    PUSH EBP                            ; 0042b0cd | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 0042b0ce
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0042b0d3
    ADD ESP,0x1aa0                      ; 0042b0d6
    POP EBP                             ; 0042b0dc
    POP ESI                             ; 0042b0dd
    POP EBX                             ; 0042b0de
    RET                                 ; 0042b0df

