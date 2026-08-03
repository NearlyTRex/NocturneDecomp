; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mimic_cpp_CMimic_renderBackground_FUN_004d5b20(CMimic *this_ptr,int layer_flag)
;
; Parameters:
; CMimic *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   layer_flag
; Local Variables:
; undefined        Stack[-0x1c]:1  local_1c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;   core_cloth.cpp_CCloth_render_FUN_00437db0
;   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d5b20
        ;   Label: core_mimic.cpp_CMimic_renderBackground_FUN_004d5b20
    SUB ESP,0x18                        ; 004d5b21
    MOV EBX,dword ptr [ESP + 0x20]      ; 004d5b24
    CMP dword ptr [EBX + 0xbc90],0x0    ; 004d5b28
    JZ 0x004d5b9d                       ; 004d5b2f
        ;   XREF to: 004d5b9d (CONDITIONAL_JUMP)  ; LAB_004d5b9d
    CMP dword ptr [ESP + 0x24],0x0      ; 004d5b31
    JZ 0x004d5b42                       ; 004d5b36
        ;   XREF to: 004d5b42 (CONDITIONAL_JUMP)  ; LAB_004d5b42
    MOV dword ptr [EBX + 0x2404],0x1    ; 004d5b38
    PUSH EBX                            ; 004d5b42
        ;   Label: LAB_004d5b42
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 004d5b43
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20(CDemonActor * actor)
    ADD ESP,0x4                         ; 004d5b48
    PUSH 0x0                            ; 004d5b4b
    LEA EAX,[ESP + 0x4]                 ; 004d5b4d
    PUSH EAX                            ; 004d5b51
    MOV EDX,dword ptr [EBX + 0x14c]     ; 004d5b52
    PUSH EBX                            ; 004d5b58
    CALL dword ptr [EDX + 0x14]         ; 004d5b59
    ADD ESP,0x8                         ; 004d5b5c
    PUSH EAX                            ; 004d5b5f
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 004d5b60
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(CBoundingBox3D * this_ptr)
    ADD ESP,0x8                         ; 004d5b65
    TEST EAX,EAX                        ; 004d5b68
    JZ 0x004d5b94                       ; 004d5b6a
        ;   XREF to: 004d5b94 (CONDITIONAL_JUMP)  ; LAB_004d5b94
    PUSH 0x0                            ; 004d5b6c
    PUSH 0x1                            ; 004d5b6e
    PUSH -0x1                           ; 004d5b70
    PUSH -0x1                           ; 004d5b72
    LEA EAX,[EBX + 0x150]               ; 004d5b74
    PUSH EAX                            ; 004d5b7a
    CALL core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0 ; 004d5b7b
        ;   XREF to: 0051d9d0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0(CDeformableModelInstance * this_ptr, int lod_index, uint render_flags, int lighting_mode, ...)
    ADD ESP,0x14                        ; 004d5b80
    PUSH 0x0                            ; 004d5b83
    LEA EAX,[EBX + 0xbdec]              ; 004d5b85
    PUSH EAX                            ; 004d5b8b
    CALL core_cloth.cpp_CCloth_render_FUN_00437db0 ; 004d5b8c
        ;   XREF to: 00437db0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_render_FUN_00437db0(CCloth * this_ptr, CDeformableModelInstance * deformable_model)
    ADD ESP,0x8                         ; 004d5b91
    PUSH EBX                            ; 004d5b94
        ;   Label: LAB_004d5b94
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 004d5b95
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004d5b9a
    ADD ESP,0x18                        ; 004d5b9d
        ;   Label: LAB_004d5b9d
    POP EBX                             ; 004d5ba0
    RET                                 ; 004d5ba1

