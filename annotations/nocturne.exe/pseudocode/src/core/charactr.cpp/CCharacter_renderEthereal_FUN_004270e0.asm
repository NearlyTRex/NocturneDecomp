; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_renderEthereal_FUN_004270e0(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x1aac]:1  local_1aac
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_renderCharacter_FUN_00425c20 at 00425c63
;
; Referenced Globals:
;   float FLOAT_0057a00a = 8388608
;   undefined4 DAT_005ad140
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   CGame* g_CGame_PTR_005b9354 = 01c775ec
;   undefined4 DAT_007658dc
;   undefined4 DAT_007658e0
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01b4d758
;   undefined4 g_CGame_01c775ec.delta_time_float
;   int g_LocalHeroIndex
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_selectLOD_FUN_0051a700
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0
;   core_skeleton.cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_0051f080
;   core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_0051ed90
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
;   core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_0051dbc0
;   core_skeleton.cpp_CDeformableModelInstance_scalePoseDataForHierarchy_FUN_0051d970
;   core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_0051ee60
;   core_skeleton.cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_0051dad0
;   crt_math.c_round_FUN_00563a30
;   crt_stdlib.c_rand_FUN_0056488c
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
;   engine_texture.cpp_ensureTextureLoaded_FUN_00545920
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004270e0
        ;   Label: core_charactr.cpp_CCharacter_renderEthereal_FUN_004270e0
    PUSH ESI                            ; 004270e1
    PUSH EBP                            ; 004270e2
    SUB ESP,0x1aa0                      ; 004270e3
    MOV ESI,dword ptr [ESP + 0x1ab0]    ; 004270e9
    PUSH 0x1                            ; 004270f0
    MOV EDX,dword ptr [0x005ae704]      ; 004270f2 | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 004270f8 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 004270f9
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004270fe
    PUSH 0xc000                         ; 00427101
    MOV ECX,dword ptr [0x005ae704]      ; 00427106 | g_CDemonRenderer_PTR_005ae704
    PUSH ECX                            ; 0042710c | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010 ; 0042710d
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(CDemonRenderer * this_ptr, int render_alpha)
    MOV EAX,[0x01cae0e8]                ; 00427112 | g_LocalHeroIndex
    MOV EBX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 00427117
    ADD ESP,0x8                         ; 0042711e
    CMP ESI,EBX                         ; 00427121
    JNZ 0x00427149                      ; 00427123
        ;   XREF to: 00427149 (CONDITIONAL_JUMP)  ; LAB_00427149
    MOV EAX,[0x005b9354]                ; 00427125 | g_CGame_PTR_005b9354
    FLD float ptr [EAX + 0x264]         ; 0042712a | g_CGame_01c775ec.delta_time_float
    FMUL float ptr [0x0057a00a]         ; 00427130 | FLOAT_0057a00a
    FILD dword ptr [0x007658dc]         ; 00427136 | DAT_007658dc
    FADDP                               ; 0042713c
    CALL crt_math.c_round_FUN_00563a30  ; 0042713e
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [0x007658dc]        ; 00427143 | DAT_007658dc
    PUSH EDI                            ; 00427149
        ;   Label: LAB_00427149
    CALL crt_stdlib.c_rand_FUN_0056488c ; 0042714a
        ;   XREF to: 0056488c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_0056488c()
    MOV EDX,EAX                         ; 0042714f
    MOV ECX,0x6                         ; 00427151
    SAR EDX,0x1f                        ; 00427156
    IDIV ECX                            ; 00427159
    MOV EAX,[0x005ae704]                ; 0042715b | g_CDemonRenderer_PTR_005ae704
    MOV dword ptr [0x007658e0],EDX      ; 00427160 | DAT_007658e0
    MOV dword ptr [EAX + 0x20],0x1      ; 00427166 | DAT_01b4d758
    LEA EAX,[EDX*0x4 + 0x0]             ; 0042716d
    SUB EAX,EDX                         ; 00427174
    SHL EAX,0x3                         ; 00427176
    ADD EAX,0x5ad140                    ; 00427179 | DAT_005ad140
    PUSH EAX                            ; 0042717e
    CALL engine_texture.cpp_ensureTextureLoaded_FUN_00545920 ; 0042717f
        ;   XREF to: 00545920 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_texture.cpp_ensureTextureLoaded_FUN_00545920(SMRGLTextureBasic * texture)
    ADD ESP,0x4                         ; 00427184
    LEA EAX,[ESP + 0x4]                 ; 00427187
    PUSH EAX                            ; 0042718b
    LEA EBX,[ESI + 0x150]               ; 0042718c
    PUSH EBX                            ; 00427192
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_0051ed90 ; 00427193
        ;   XREF to: 0051ed90 (UNCONDITIONAL_CALL)  ; SPose * core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_0051ed90(CDeformableModelInstance * this_ptr, SPose * bone_transform)
    ADD ESP,0x8                         ; 00427198
    PUSH -0x1                           ; 0042719b
    PUSH 0x3f8ccccd                     ; 0042719d
    PUSH EBX                            ; 004271a2
    CALL core_skeleton.cpp_CDeformableModelInstance_scalePoseDataForHierarchy_FUN_0051d970 ; 004271a3
        ;   XREF to: 0051d970 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_scalePoseDataForHierarchy_FUN_0051d970(CDeformableModelInstance * this_ptr, float scale_factor, int target_bone_index)
    ADD ESP,0xc                         ; 004271a8
    PUSH EBX                            ; 004271ab
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0 ; 004271ac
        ;   XREF to: 0051d3c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004271b1
    LEA EAX,[ESI + 0x2388]              ; 004271b4
    PUSH EAX                            ; 004271ba
    PUSH EBX                            ; 004271bb
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020 ; 004271bc
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004271c1
    PUSH EAX                            ; 004271c4
    CALL core_skeleton.cpp_CDeformableModel_selectLOD_FUN_0051a700 ; 004271c5
        ;   XREF to: 0051a700 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_selectLOD_FUN_0051a700(CDeformableModel * this_ptr, CBoundingBox3D * bounding_box)
    ADD ESP,0x8                         ; 004271ca
    PUSH EAX                            ; 004271cd
    PUSH EBX                            ; 004271ce
    CALL core_skeleton.cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_0051dad0 ; 004271cf
        ;   XREF to: 0051dad0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_0051dad0(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 004271d4
    PUSH 0x0                            ; 004271d7
    MOV EDI,dword ptr [0x007658dc]      ; 004271d9 | DAT_007658dc
    PUSH EDI                            ; 004271df
    PUSH EBX                            ; 004271e0
    CALL core_skeleton.cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_0051f080 ; 004271e1
        ;   XREF to: 0051f080 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_0051f080(CDeformableModelInstance * this_ptr, int u_offset, int v_offset)
    ADD ESP,0xc                         ; 004271e6
    XOR EAX,EAX                         ; 004271e9
    MOV EBX,0xb332                      ; 004271eb
    POP EDI                             ; 004271f0
    MOV EDX,dword ptr [0x005ae704]      ; 004271f1 | g_CDemonRenderer_PTR_005ae704
        ;   Label: LAB_004271f1
    MOV ECX,dword ptr [EDX]             ; 004271f7 | DAT_01b4d738
    MOV dword ptr [ECX + EAX*0x1 + 0x20],EBX ; 004271f9
    MOV ECX,dword ptr [EDX]             ; 004271fd | DAT_01b4d738
    MOV dword ptr [ECX + EAX*0x1 + 0x24],EBX ; 004271ff
    ADD EAX,0x30                        ; 00427203
    MOV EDX,dword ptr [EDX]             ; 00427206 | DAT_01b4d738
    MOV dword ptr [EDX + EAX*0x1 + -0x8],0xffff ; 00427208
    CMP EAX,0x17700                     ; 00427210
    JNZ 0x004271f1                      ; 00427215
        ;   XREF to: 004271f1 (CONDITIONAL_JUMP)  ; LAB_004271f1
    PUSH 0x1                            ; 00427217
    PUSH 0x267                          ; 00427219
    LEA EBX,[ESI + 0x150]               ; 0042721e
    PUSH EBX                            ; 00427224
    CALL core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_0051dbc0 ; 00427225
        ;   XREF to: 0051dbc0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_0051dbc0(CDeformableModelInstance * this_ptr, int render_flags, int skip_texture_capture)
    MOV EAX,[0x005ae704]                ; 0042722a | g_CDemonRenderer_PTR_005ae704
    ADD ESP,0xc                         ; 0042722f
    MOV dword ptr [EAX + 0x20],0x0      ; 00427232 | DAT_01b4d758
    MOV EAX,ESP                         ; 00427239
    PUSH EAX                            ; 0042723b
    PUSH EBX                            ; 0042723c
    CALL core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_0051ee60 ; 0042723d
        ;   XREF to: 0051ee60 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_0051ee60(CDeformableModelInstance * this_ptr, SPose * bone_transform)
    ADD ESP,0x8                         ; 00427242
    PUSH 0x0                            ; 00427245
    MOV EBP,dword ptr [0x005ae704]      ; 00427247 | g_CDemonRenderer_PTR_005ae704
    PUSH EBP                            ; 0042724d | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 0042724e
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00427253
    ADD ESP,0x1aa0                      ; 00427256
    POP EBP                             ; 0042725c
    POP ESI                             ; 0042725d
    POP EBX                             ; 0042725e
    RET                                 ; 0042725f

