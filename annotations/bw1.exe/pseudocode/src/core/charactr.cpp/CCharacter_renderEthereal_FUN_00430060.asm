; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_renderEthereal_FUN_00430060(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x1aac]:1  local_1aac
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_renderCharacter_FUN_0042e960 at 0042e9a2
;
; Referenced Globals:
;   undefined4 DAT_005d5a2f
;   undefined4 DAT_00610c20
;   undefined4 DAT_00612560
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 DAT_007c6178
;   undefined4 DAT_007c617c
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01bc122c
;   undefined4 g_CGameInstance.delta_time_float
;   undefined4 DAT_01d06ab4
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_selectLOD_FUN_00566380
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180
;   core_skeleton.cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_0056afe0
;   core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_0056acc0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
;   core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_00569a10
;   core_skeleton.cpp_CDeformableModelInstance_scalePoseDataForHierarchy_FUN_005697b0
;   core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_0056ad90
;   core_skeleton.cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_00569920
;   crt_math.c_round_FUN_005c03a0
;   crt_stdlib.c_rand_FUN_005c084c
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0
;   engine_texture.cpp_FUN_00597a20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00430060
        ;   Label: core_charactr.cpp_CCharacter_renderEthereal_FUN_00430060
    PUSH ESI                            ; 00430061
    PUSH EBP                            ; 00430062
    SUB ESP,0x1aa0                      ; 00430063
    MOV ESI,dword ptr [ESP + 0x1ab0]    ; 00430069
    PUSH 0x1                            ; 00430070
    MOV EDX,dword ptr [0x00612560]      ; 00430072 | DAT_00612560
    PUSH EDX                            ; 00430078 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 00430079
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0043007e
    PUSH 0xc000                         ; 00430081
    MOV ECX,dword ptr [0x00612560]      ; 00430086 | DAT_00612560
    PUSH ECX                            ; 0043008c | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0 ; 0043008d
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(CDemonRenderer * this_ptr, int render_alpha)
    MOV EAX,[0x01d06ab4]                ; 00430092 | DAT_01d06ab4
    MOV EBX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 00430097
    ADD ESP,0x8                         ; 0043009e
    CMP ESI,EBX                         ; 004300a1
    JNZ 0x004300c9                      ; 004300a3
        ;   XREF to: 004300c9 (CONDITIONAL_JUMP)  ; LAB_004300c9
    MOV EAX,[0x0061d95c]                ; 004300a5 | g_CGamePtr
    FLD float ptr [EAX + 0x294]         ; 004300aa | g_CGameInstance.delta_time_float
    FMUL float ptr [0x005d5a2f]         ; 004300b0 | DAT_005d5a2f
    FILD dword ptr [0x007c6178]         ; 004300b6 | DAT_007c6178
    FADDP                               ; 004300bc
    CALL crt_math.c_round_FUN_005c03a0  ; 004300be
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [0x007c6178]        ; 004300c3 | DAT_007c6178
    PUSH EDI                            ; 004300c9
        ;   Label: LAB_004300c9
    CALL crt_stdlib.c_rand_FUN_005c084c ; 004300ca
        ;   XREF to: 005c084c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005c084c()
    MOV EDX,EAX                         ; 004300cf
    MOV ECX,0x6                         ; 004300d1
    SAR EDX,0x1f                        ; 004300d6
    IDIV ECX                            ; 004300d9
    MOV EAX,[0x00612560]                ; 004300db | DAT_00612560
    MOV dword ptr [0x007c617c],EDX      ; 004300e0 | DAT_007c617c
    MOV dword ptr [EAX + 0x20],0x1      ; 004300e6 | DAT_01bc122c
    LEA EAX,[EDX*0x4 + 0x0]             ; 004300ed
    SUB EAX,EDX                         ; 004300f4
    SHL EAX,0x3                         ; 004300f6
    ADD EAX,0x610c20                    ; 004300f9 | DAT_00610c20
    PUSH EAX                            ; 004300fe
    CALL engine_texture.cpp_FUN_00597a20 ; 004300ff
        ;   XREF to: 00597a20 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00597a20()
    ADD ESP,0x4                         ; 00430104
    LEA EAX,[ESP + 0x4]                 ; 00430107
    PUSH EAX                            ; 0043010b
    LEA EBX,[ESI + 0x158]               ; 0043010c
    PUSH EBX                            ; 00430112
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_0056acc0 ; 00430113
        ;   XREF to: 0056acc0 (UNCONDITIONAL_CALL)  ; SPose * core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_0056acc0(CDeformableModelInstance * this_ptr, SPose * bone_transform)
    ADD ESP,0x8                         ; 00430118
    PUSH -0x1                           ; 0043011b
    PUSH 0x3f8ccccd                     ; 0043011d
    PUSH EBX                            ; 00430122
    CALL core_skeleton.cpp_CDeformableModelInstance_scalePoseDataForHierarchy_FUN_005697b0 ; 00430123
        ;   XREF to: 005697b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_scalePoseDataForHierarchy_FUN_005697b0(CDeformableModelInstance * this_ptr, float scale_factor, int target_bone_index)
    ADD ESP,0xc                         ; 00430128
    PUSH EBX                            ; 0043012b
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180 ; 0043012c
        ;   XREF to: 00569180 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00430131
    LEA EAX,[ESI + 0x2480]              ; 00430134
    PUSH EAX                            ; 0043013a
    PUSH EBX                            ; 0043013b
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0 ; 0043013c
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00430141
    PUSH EAX                            ; 00430144
    CALL core_skeleton.cpp_CDeformableModel_selectLOD_FUN_00566380 ; 00430145
        ;   XREF to: 00566380 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_selectLOD_FUN_00566380(CDeformableModel * this_ptr, CBoundingBox3D * bounding_box)
    ADD ESP,0x8                         ; 0043014a
    PUSH EAX                            ; 0043014d
    PUSH EBX                            ; 0043014e
    CALL core_skeleton.cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_00569920 ; 0043014f
        ;   XREF to: 00569920 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_00569920(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 00430154
    PUSH 0x0                            ; 00430157
    MOV EDI,dword ptr [0x007c6178]      ; 00430159 | DAT_007c6178
    PUSH EDI                            ; 0043015f
    PUSH EBX                            ; 00430160
    CALL core_skeleton.cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_0056afe0 ; 00430161
        ;   XREF to: 0056afe0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_0056afe0(CDeformableModelInstance * this_ptr, int u_offset, int v_offset)
    ADD ESP,0xc                         ; 00430166
    XOR EAX,EAX                         ; 00430169
    MOV EBX,0xb332                      ; 0043016b
    POP EDI                             ; 00430170
    MOV EDX,dword ptr [0x00612560]      ; 00430171 | DAT_00612560
        ;   Label: LAB_00430171
    MOV ECX,dword ptr [EDX]             ; 00430177 | DAT_01bc120c
    MOV dword ptr [ECX + EAX*0x1 + 0x20],EBX ; 00430179
    MOV ECX,dword ptr [EDX]             ; 0043017d | DAT_01bc120c
    MOV dword ptr [ECX + EAX*0x1 + 0x24],EBX ; 0043017f
    ADD EAX,0x30                        ; 00430183
    MOV EDX,dword ptr [EDX]             ; 00430186 | DAT_01bc120c
    MOV dword ptr [EDX + EAX*0x1 + -0x8],0xffff ; 00430188
    CMP EAX,0x17700                     ; 00430190
    JNZ 0x00430171                      ; 00430195
        ;   XREF to: 00430171 (CONDITIONAL_JUMP)  ; LAB_00430171
    PUSH 0x1                            ; 00430197
    PUSH 0x267                          ; 00430199
    LEA EBX,[ESI + 0x158]               ; 0043019e
    PUSH EBX                            ; 004301a4
    CALL core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_00569a10 ; 004301a5
        ;   XREF to: 00569a10 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_00569a10(CDeformableModelInstance * this_ptr, int render_flags, int skip_texture_capture)
    MOV EAX,[0x00612560]                ; 004301aa | DAT_00612560
    ADD ESP,0xc                         ; 004301af
    MOV dword ptr [EAX + 0x20],0x0      ; 004301b2 | DAT_01bc122c
    MOV EAX,ESP                         ; 004301b9
    PUSH EAX                            ; 004301bb
    PUSH EBX                            ; 004301bc
    CALL core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_0056ad90 ; 004301bd
        ;   XREF to: 0056ad90 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_0056ad90(CDeformableModelInstance * this_ptr, SPose * bone_transform)
    ADD ESP,0x8                         ; 004301c2
    PUSH 0x0                            ; 004301c5
    MOV EBP,dword ptr [0x00612560]      ; 004301c7 | DAT_00612560
    PUSH EBP                            ; 004301cd | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 004301ce
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004301d3
    ADD ESP,0x1aa0                      ; 004301d6
    POP EBP                             ; 004301dc
    POP ESI                             ; 004301dd
    POP EBX                             ; 004301de
    RET                                 ; 004301df

