; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_FUN_00426730(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x1aac]:1  local_1aac
;
; XREF[1]:
;   core_charactr.cpp_FUN_00424bd0 at 00424c12
;
; Referenced Globals:
;   undefined4 DAT_005ccda6
;   undefined4 DAT_00609a10
;   undefined4 DAT_0060b280
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 DAT_007bda90
;   undefined4 DAT_007bda94
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01ba5c70
;   undefined4 g_CGameInstance.field644_0x284
;   undefined4 DAT_01cedef4
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_selectLOD_FUN_00543d00
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0
;   core_skeleton.cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_00548940
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
;   core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_00547370
;   core_skeleton.cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_00547280
;   core_skeleton.cpp_FUN_00547110
;   core_skeleton.cpp_FUN_00548620
;   core_skeleton.cpp_FUN_005486f0
;   crt_math.c_round_FUN_005b7ff0
;   crt_stdlib.c_rand_FUN_005b849c
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
;   engine_texture.cpp_FUN_00574e00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00426730
        ;   Label: core_charactr.cpp_FUN_00426730
    PUSH ESI                            ; 00426731
    PUSH EBP                            ; 00426732
    SUB ESP,0x1aa0                      ; 00426733
    MOV ESI,dword ptr [ESP + 0x1ab0]    ; 00426739
    PUSH 0x1                            ; 00426740
    MOV EDX,dword ptr [0x0060b280]      ; 00426742 | DAT_0060b280
    PUSH EDX                            ; 00426748 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 00426749
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0042674e
    PUSH 0xc000                         ; 00426751
    MOV ECX,dword ptr [0x0060b280]      ; 00426756 | DAT_0060b280
    PUSH ECX                            ; 0042675c | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0 ; 0042675d
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(CDemonRenderer * this_ptr, int render_alpha)
    MOV EAX,[0x01cedef4]                ; 00426762 | DAT_01cedef4
    MOV EBX,dword ptr [EAX*0x4 + 0x1cedee4] ; 00426767
    ADD ESP,0x8                         ; 0042676e
    CMP ESI,EBX                         ; 00426771
    JNZ 0x00426799                      ; 00426773
        ;   XREF to: 00426799 (CONDITIONAL_JUMP)  ; LAB_00426799
    MOV EAX,[0x00616494]                ; 00426775 | g_CGamePtr
    FLD float ptr [EAX + 0x284]         ; 0042677a | g_CGameInstance.field644_0x284
    FMUL float ptr [0x005ccda6]         ; 00426780 | DAT_005ccda6
    FILD dword ptr [0x007bda90]         ; 00426786 | DAT_007bda90
    FADDP                               ; 0042678c
    CALL crt_math.c_round_FUN_005b7ff0  ; 0042678e
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [0x007bda90]        ; 00426793 | DAT_007bda90
    PUSH EDI                            ; 00426799
        ;   Label: LAB_00426799
    CALL crt_stdlib.c_rand_FUN_005b849c ; 0042679a
        ;   XREF to: 005b849c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005b849c()
    MOV EDX,EAX                         ; 0042679f
    MOV ECX,0x6                         ; 004267a1
    SAR EDX,0x1f                        ; 004267a6
    IDIV ECX                            ; 004267a9
    MOV EAX,[0x0060b280]                ; 004267ab | DAT_0060b280
    MOV dword ptr [0x007bda94],EDX      ; 004267b0 | DAT_007bda94
    MOV dword ptr [EAX + 0x20],0x1      ; 004267b6 | DAT_01ba5c70
    LEA EAX,[EDX*0x4 + 0x0]             ; 004267bd
    SUB EAX,EDX                         ; 004267c4
    SHL EAX,0x3                         ; 004267c6
    ADD EAX,0x609a10                    ; 004267c9 | DAT_00609a10
    PUSH EAX                            ; 004267ce
    CALL engine_texture.cpp_FUN_00574e00 ; 004267cf
        ;   XREF to: 00574e00 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00574e00()
    ADD ESP,0x4                         ; 004267d4
    LEA EAX,[ESP + 0x4]                 ; 004267d7
    PUSH EAX                            ; 004267db
    LEA EBX,[ESI + 0x2b4]               ; 004267dc
    PUSH EBX                            ; 004267e2
    CALL core_skeleton.cpp_FUN_00548620 ; 004267e3
        ;   XREF to: 00548620 (UNCONDITIONAL_CALL)  ; SPose * core_skeleton.cpp_FUN_00548620(CDeformableModelInstance * this_ptr, SPose * bone_transform)
    ADD ESP,0x8                         ; 004267e8
    PUSH -0x1                           ; 004267eb
    PUSH 0x3f8ccccd                     ; 004267ed
    PUSH EBX                            ; 004267f2
    CALL core_skeleton.cpp_FUN_00547110 ; 004267f3
        ;   XREF to: 00547110 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_00547110(CDeformableModelInstance * this_ptr, float scale_factor, int target_bone_index)
    ADD ESP,0xc                         ; 004267f8
    PUSH EBX                            ; 004267fb
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0 ; 004267fc
        ;   XREF to: 00546ae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00426801
    LEA EAX,[ESI + 0x24ec]              ; 00426804
    PUSH EAX                            ; 0042680a
    PUSH EBX                            ; 0042680b
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810 ; 0042680c
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00426811
    PUSH EAX                            ; 00426814
    CALL core_skeleton.cpp_CDeformableModel_selectLOD_FUN_00543d00 ; 00426815
        ;   XREF to: 00543d00 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_selectLOD_FUN_00543d00(CDeformableModel * this_ptr, CBoundingBox3D * bounding_box)
    ADD ESP,0x8                         ; 0042681a
    PUSH EAX                            ; 0042681d
    PUSH EBX                            ; 0042681e
    CALL core_skeleton.cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_00547280 ; 0042681f
        ;   XREF to: 00547280 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_00547280(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 00426824
    PUSH 0x0                            ; 00426827
    MOV EDI,dword ptr [0x007bda90]      ; 00426829 | DAT_007bda90
    PUSH EDI                            ; 0042682f
    PUSH EBX                            ; 00426830
    CALL core_skeleton.cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_00548940 ; 00426831
        ;   XREF to: 00548940 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_00548940(CDeformableModelInstance * this_ptr, int u_offset, int v_offset)
    ADD ESP,0xc                         ; 00426836
    XOR EAX,EAX                         ; 00426839
    MOV EBX,0xb332                      ; 0042683b
    POP EDI                             ; 00426840
    MOV EDX,dword ptr [0x0060b280]      ; 00426841 | DAT_0060b280
        ;   Label: LAB_00426841
    MOV ECX,dword ptr [EDX]             ; 00426847 | DAT_01ba5c50
    MOV dword ptr [ECX + EAX*0x1 + 0x20],EBX ; 00426849
    MOV ECX,dword ptr [EDX]             ; 0042684d | DAT_01ba5c50
    MOV dword ptr [ECX + EAX*0x1 + 0x24],EBX ; 0042684f
    ADD EAX,0x30                        ; 00426853
    MOV EDX,dword ptr [EDX]             ; 00426856 | DAT_01ba5c50
    MOV dword ptr [EDX + EAX*0x1 + -0x8],0xffff ; 00426858
    CMP EAX,0x17700                     ; 00426860
    JNZ 0x00426841                      ; 00426865
        ;   XREF to: 00426841 (CONDITIONAL_JUMP)  ; LAB_00426841
    PUSH 0x1                            ; 00426867
    PUSH 0x267                          ; 00426869
    LEA EBX,[ESI + 0x2b4]               ; 0042686e
    PUSH EBX                            ; 00426874
    CALL core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_00547370 ; 00426875
        ;   XREF to: 00547370 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_00547370(CDeformableModelInstance * this_ptr, int render_flags, int skip_texture_capture)
    MOV EAX,[0x0060b280]                ; 0042687a | DAT_0060b280
    ADD ESP,0xc                         ; 0042687f
    MOV dword ptr [EAX + 0x20],0x0      ; 00426882 | DAT_01ba5c70
    MOV EAX,ESP                         ; 00426889
    PUSH EAX                            ; 0042688b
    PUSH EBX                            ; 0042688c
    CALL core_skeleton.cpp_FUN_005486f0 ; 0042688d
        ;   XREF to: 005486f0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_005486f0(CDeformableModelInstance * this_ptr, SPose * bone_transform)
    ADD ESP,0x8                         ; 00426892
    PUSH 0x0                            ; 00426895
    MOV EBP,dword ptr [0x0060b280]      ; 00426897 | DAT_0060b280
    PUSH EBP                            ; 0042689d | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 0042689e
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004268a3
    ADD ESP,0x1aa0                      ; 004268a6
    POP EBP                             ; 004268ac
    POP ESI                             ; 004268ad
    POP EBX                             ; 004268ae
    RET                                 ; 004268af

