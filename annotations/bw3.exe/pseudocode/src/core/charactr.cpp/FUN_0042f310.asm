; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_FUN_0042f310(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; XREF[7]:
;   core_boneguy.cpp_CBoneGuy_renderTransparent_FUN_00418f90 at 00419055
;   core_charactr.cpp_FUN_0042d8e0 at 0042d98e
;   core_hecaitmx.cpp_CHecaitomix_renderTransparent_FUN_00598480 at 0059856a
;   core_hino.cpp_CHino_renderTransparent_FUN_0059d120 at 0059d303
;   core_kedward.cpp_CKedward_renderTransparent_FUN_00591680 at 005917ed
;   core_mattnntt.cpp_CMattanntote_renderTransparent_FUN_00593710 at 005938d0
;   core_shadow.cpp_FUN_00545710 at 005458c6
;
; Referenced Globals:
;   undefined4 DAT_005b8376
;   undefined4 DAT_005f0f74
;   undefined4 DAT_005f1004
;   undefined4 DAT_005f1094
;   undefined4 DAT_005f1124
;   undefined4 DAT_005f11b4
;   undefined4 DAT_005f1244
;   undefined4 DAT_005f2afc
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 DAT_007e2ae8
;   undefined4 DAT_007e2aec
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01bdd804
;   undefined4 g_CGameInstance.delta_time_float
;   undefined4 DAT_01d5ba14
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_selectLOD_FUN_0054af10
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10
;   core_skeleton.cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_0054fb70
;   core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_0054f850
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
;   core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_0054e5a0
;   core_skeleton.cpp_CDeformableModelInstance_scalePoseDataForHierarchy_FUN_0054e340
;   core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_0054f920
;   core_skeleton.cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_0054e4b0
;   crt_math.c_round_FUN_005a3120
;   crt_stdlib.c_rand_FUN_005a35cc
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
;   engine_texture.cpp_FUN_0056aa10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042f310
        ;   Label: core_charactr.cpp_FUN_0042f310
    PUSH ESI                            ; 0042f311
    PUSH EDI                            ; 0042f312
    PUSH EBP                            ; 0042f313
    SUB ESP,0x1aa0                      ; 0042f314
    MOV ESI,dword ptr [ESP + 0x1ab4]    ; 0042f31a
    PUSH 0x1                            ; 0042f321
    MOV EDX,dword ptr [0x005f2afc]      ; 0042f323 | DAT_005f2afc
    PUSH EDX                            ; 0042f329 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 0042f32a
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0042f32f
    PUSH 0xc000                         ; 0042f332
    MOV ECX,dword ptr [0x005f2afc]      ; 0042f337 | DAT_005f2afc
    PUSH ECX                            ; 0042f33d | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0 ; 0042f33e
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(CDemonRenderer * this_ptr, int render_alpha)
    MOV EAX,[0x01d5ba14]                ; 0042f343 | DAT_01d5ba14
    MOV EBX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 0042f348
    ADD ESP,0x8                         ; 0042f34f
    CMP ESI,EBX                         ; 0042f352
    JNZ 0x0042f37a                      ; 0042f354
        ;   XREF to: 0042f37a (CONDITIONAL_JUMP)  ; LAB_0042f37a
    MOV EAX,[0x005fe9dc]                ; 0042f356 | g_CGamePtr
    FLD float ptr [EAX + 0x314]         ; 0042f35b | g_CGameInstance.delta_time_float
    FMUL float ptr [0x005b8376]         ; 0042f361 | DAT_005b8376
    FILD dword ptr [0x007e2ae8]         ; 0042f367 | DAT_007e2ae8
    FADDP                               ; 0042f36d
    CALL crt_math.c_round_FUN_005a3120  ; 0042f36f
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [0x007e2ae8]        ; 0042f374 | DAT_007e2ae8
    CALL crt_stdlib.c_rand_FUN_005a35cc ; 0042f37a
        ;   XREF to: 005a35cc (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005a35cc()
        ;   Label: LAB_0042f37a
    MOV EDX,EAX                         ; 0042f37f
    MOV EBX,0x6                         ; 0042f381
    SAR EDX,0x1f                        ; 0042f386
    IDIV EBX                            ; 0042f389
    MOV EAX,[0x005f2afc]                ; 0042f38b | DAT_005f2afc
    MOV dword ptr [0x007e2aec],EDX      ; 0042f390 | DAT_007e2aec
    LEA EBX,[EDX*0x4 + 0x0]             ; 0042f396
    MOV dword ptr [EAX + 0x20],0x1      ; 0042f39d | DAT_01bdd804
    SUB EBX,EDX                         ; 0042f3a4
    MOV EDI,dword ptr [ESI + 0x3254]    ; 0042f3a6
    LEA EAX,[EBX*0x8 + 0x0]             ; 0042f3ac
    TEST EDI,0x7fffffff                 ; 0042f3b3
    JZ 0x0042f4f3                       ; 0042f3b9
        ;   XREF to: 0042f4f3 (CONDITIONAL_JUMP)  ; LAB_0042f4f3
    MOV EBP,dword ptr [ESI + 0x3258]    ; 0042f3bf
    TEST EBP,EBP                        ; 0042f3c5
    JZ 0x0042f494                       ; 0042f3c7
        ;   XREF to: 0042f494 (CONDITIONAL_JUMP)  ; LAB_0042f494
    CMP EBP,0x1                         ; 0042f3cd
    JZ 0x0042f4a7                       ; 0042f3d0
        ;   XREF to: 0042f4a7 (CONDITIONAL_JUMP)  ; LAB_0042f4a7
    CMP EBP,0x2                         ; 0042f3d6
    JZ 0x0042f4ba                       ; 0042f3d9
        ;   XREF to: 0042f4ba (CONDITIONAL_JUMP)  ; LAB_0042f4ba
    CMP EBP,0x4                         ; 0042f3df
    JZ 0x0042f4cd                       ; 0042f3e2
        ;   XREF to: 0042f4cd (CONDITIONAL_JUMP)  ; LAB_0042f4cd
    CMP EBP,0x3                         ; 0042f3e8
    JZ 0x0042f4e0                       ; 0042f3eb
        ;   XREF to: 0042f4e0 (CONDITIONAL_JUMP)  ; LAB_0042f4e0
    MOV EAX,ESP                         ; 0042f3f1
        ;   Label: LAB_0042f3f1
    PUSH EAX                            ; 0042f3f3
    LEA EBX,[ESI + 0x158]               ; 0042f3f4
    PUSH EBX                            ; 0042f3fa
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_0054f850 ; 0042f3fb
        ;   XREF to: 0054f850 (UNCONDITIONAL_CALL)  ; SPose * core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_0054f850(CDeformableModelInstance * this_ptr, SPose * bone_transform)
    ADD ESP,0x8                         ; 0042f400
    PUSH -0x1                           ; 0042f403
    PUSH 0x3f8ccccd                     ; 0042f405
    PUSH EBX                            ; 0042f40a
    CALL core_skeleton.cpp_CDeformableModelInstance_scalePoseDataForHierarchy_FUN_0054e340 ; 0042f40b
        ;   XREF to: 0054e340 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_scalePoseDataForHierarchy_FUN_0054e340(CDeformableModelInstance * this_ptr, float scale_factor, int target_bone_index)
    ADD ESP,0xc                         ; 0042f410
    PUSH EBX                            ; 0042f413
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10 ; 0042f414
        ;   XREF to: 0054dd10 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042f419
    ADD ESI,0x2480                      ; 0042f41c
    PUSH ESI                            ; 0042f422
    PUSH EBX                            ; 0042f423
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40 ; 0042f424
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042f429
    PUSH EAX                            ; 0042f42c
    CALL core_skeleton.cpp_CDeformableModel_selectLOD_FUN_0054af10 ; 0042f42d
        ;   XREF to: 0054af10 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_selectLOD_FUN_0054af10(CDeformableModel * this_ptr, CBoundingBox3D * bounding_box)
    ADD ESP,0x8                         ; 0042f432
    PUSH EAX                            ; 0042f435
    PUSH EBX                            ; 0042f436
    CALL core_skeleton.cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_0054e4b0 ; 0042f437
        ;   XREF to: 0054e4b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_0054e4b0(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 0042f43c
    PUSH 0x0                            ; 0042f43f
    MOV EBP,dword ptr [0x007e2ae8]      ; 0042f441 | DAT_007e2ae8
    PUSH EBP                            ; 0042f447
    PUSH EBX                            ; 0042f448
    CALL core_skeleton.cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_0054fb70 ; 0042f449
        ;   XREF to: 0054fb70 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_0054fb70(CDeformableModelInstance * this_ptr, int u_offset, int v_offset)
    ADD ESP,0xc                         ; 0042f44e
    PUSH 0x1                            ; 0042f451
    PUSH 0x267                          ; 0042f453
    PUSH EBX                            ; 0042f458
    CALL core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_0054e5a0 ; 0042f459
        ;   XREF to: 0054e5a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_0054e5a0(CDeformableModelInstance * this_ptr, int render_flags, int skip_texture_capture)
    MOV EAX,[0x005f2afc]                ; 0042f45e | DAT_005f2afc
    ADD ESP,0xc                         ; 0042f463
    MOV dword ptr [EAX + 0x20],0x0      ; 0042f466 | DAT_01bdd804
    MOV EAX,ESP                         ; 0042f46d
    PUSH EAX                            ; 0042f46f
    PUSH EBX                            ; 0042f470
    CALL core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_0054f920 ; 0042f471
        ;   XREF to: 0054f920 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_0054f920(CDeformableModelInstance * this_ptr, SPose * bone_transform)
    ADD ESP,0x8                         ; 0042f476
    PUSH 0x0                            ; 0042f479
    MOV EAX,[0x005f2afc]                ; 0042f47b | DAT_005f2afc
    PUSH EAX                            ; 0042f480 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 0042f481
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0042f486
    ADD ESP,0x1aa0                      ; 0042f489
    POP EBP                             ; 0042f48f
    POP EDI                             ; 0042f490
    POP ESI                             ; 0042f491
    POP EBX                             ; 0042f492
    RET                                 ; 0042f493
    ADD EAX,0x5f1124                    ; 0042f494 | DAT_005f1124
        ;   Label: LAB_0042f494
    PUSH EAX                            ; 0042f499
    CALL engine_texture.cpp_FUN_0056aa10 ; 0042f49a
        ;   XREF to: 0056aa10 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_0056aa10()
    ADD ESP,0x4                         ; 0042f49f
    JMP 0x0042f3f1                      ; 0042f4a2
        ;   XREF to: 0042f3f1 (UNCONDITIONAL_JUMP)  ; LAB_0042f3f1
    ADD EAX,0x5f1004                    ; 0042f4a7 | DAT_005f1004
        ;   Label: LAB_0042f4a7
    PUSH EAX                            ; 0042f4ac
    CALL engine_texture.cpp_FUN_0056aa10 ; 0042f4ad
        ;   XREF to: 0056aa10 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_0056aa10()
    ADD ESP,0x4                         ; 0042f4b2
    JMP 0x0042f3f1                      ; 0042f4b5
        ;   XREF to: 0042f3f1 (UNCONDITIONAL_JUMP)  ; LAB_0042f3f1
    ADD EAX,0x5f1094                    ; 0042f4ba | DAT_005f1094
        ;   Label: LAB_0042f4ba
    PUSH EAX                            ; 0042f4bf
    CALL engine_texture.cpp_FUN_0056aa10 ; 0042f4c0
        ;   XREF to: 0056aa10 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_0056aa10()
    ADD ESP,0x4                         ; 0042f4c5
    JMP 0x0042f3f1                      ; 0042f4c8
        ;   XREF to: 0042f3f1 (UNCONDITIONAL_JUMP)  ; LAB_0042f3f1
    ADD EAX,0x5f11b4                    ; 0042f4cd | DAT_005f11b4
        ;   Label: LAB_0042f4cd
    PUSH EAX                            ; 0042f4d2
    CALL engine_texture.cpp_FUN_0056aa10 ; 0042f4d3
        ;   XREF to: 0056aa10 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_0056aa10()
    ADD ESP,0x4                         ; 0042f4d8
    JMP 0x0042f3f1                      ; 0042f4db
        ;   XREF to: 0042f3f1 (UNCONDITIONAL_JUMP)  ; LAB_0042f3f1
    ADD EAX,0x5f1244                    ; 0042f4e0 | DAT_005f1244
        ;   Label: LAB_0042f4e0
    PUSH EAX                            ; 0042f4e5
    CALL engine_texture.cpp_FUN_0056aa10 ; 0042f4e6
        ;   XREF to: 0056aa10 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_0056aa10()
    ADD ESP,0x4                         ; 0042f4eb
    JMP 0x0042f3f1                      ; 0042f4ee
        ;   XREF to: 0042f3f1 (UNCONDITIONAL_JUMP)  ; LAB_0042f3f1
    ADD EAX,0x5f0f74                    ; 0042f4f3 | DAT_005f0f74
        ;   Label: LAB_0042f4f3
    PUSH EAX                            ; 0042f4f8
    CALL engine_texture.cpp_FUN_0056aa10 ; 0042f4f9
        ;   XREF to: 0056aa10 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_0056aa10()
    ADD ESP,0x4                         ; 0042f4fe
    JMP 0x0042f3f1                      ; 0042f501
        ;   XREF to: 0042f3f1 (UNCONDITIONAL_JUMP)  ; LAB_0042f3f1

