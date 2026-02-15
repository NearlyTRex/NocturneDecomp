; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_vampboss_cpp_CVampireBoss_renderOpaque_FUN_005e6da0(CVampireBoss *this_ptr)
;
; Parameters:
; CVampireBoss *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x2c]:1  local_2c
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;   undefined4 DAT_02f43978
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_charactr.cpp_CCharacter_renderAttachedModels_FUN_0042a420
;   core_cloth.cpp_CCloth_render_FUN_0043bae0
;   core_morph.cpp_CMorph_FUN_0052b600
;   core_morph.cpp_CMorph_FUN_0052b640
;   core_morph.cpp_CMorph_FUN_0052bae0
;   core_motion.cpp_CMotionController_render_FUN_0052e700
;   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e6da0
        ;   Label: core_vampboss.cpp_CVampireBoss_renderOpaque_FUN_005e6da0
    PUSH EBP                            ; 005e6da1
    SUB ESP,0x24                        ; 005e6da2
    MOV EBX,dword ptr [ESP + 0x30]      ; 005e6da5
    CMP dword ptr [EBX + 0x240c],0x0    ; 005e6da9
    JZ 0x005e6dba                       ; 005e6db0
        ;   XREF to: 005e6dba (CONDITIONAL_JUMP)  ; LAB_005e6dba
    XOR EAX,EAX                         ; 005e6db2
    ADD ESP,0x24                        ; 005e6db4
    POP EBP                             ; 005e6db7
    POP EBX                             ; 005e6db8
    RET                                 ; 005e6db9
    PUSH EDI                            ; 005e6dba
        ;   Label: LAB_005e6dba
    PUSH ESI                            ; 005e6dbb
    PUSH EBX                            ; 005e6dbc
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 005e6dbd
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 005e6dc2
    LEA EAX,[ESP + 0x8]                 ; 005e6dc5
    PUSH EAX                            ; 005e6dc9
    MOV ESI,dword ptr [EBX + 0x154]     ; 005e6dca
    PUSH EBX                            ; 005e6dd0
    CALL dword ptr [ESI + 0x14]         ; 005e6dd1
    ADD ESP,0x8                         ; 005e6dd4
    PUSH EAX                            ; 005e6dd7
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 005e6dd8
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 005e6ddd
    MOV dword ptr [ESP + 0x20],EAX      ; 005e6de0
    TEST EAX,EAX                        ; 005e6de4
    JZ 0x005e6e6c                       ; 005e6de6
        ;   XREF to: 005e6e6c (CONDITIONAL_JUMP)  ; LAB_005e6e6c
    LEA EAX,[EBX + 0x8de50]             ; 005e6dec
    MOV ECX,dword ptr [EBX + 0xcdcc0]   ; 005e6df2
    LEA EDI,[EBX + 0x4dfe0]             ; 005e6df8
    MOV dword ptr [ESP + 0x28],EAX      ; 005e6dfe
    LEA EAX,[EBX + 0x158]               ; 005e6e02
    TEST ECX,ECX                        ; 005e6e08
    JNZ 0x005e6e81                      ; 005e6e0a
        ;   XREF to: 005e6e81 (CONDITIONAL_JUMP)  ; LAB_005e6e81
    PUSH ECX                            ; 005e6e0c
    PUSH 0x1                            ; 005e6e0d
    PUSH -0x1                           ; 005e6e0f
    PUSH -0x1                           ; 005e6e11
    PUSH EAX                            ; 005e6e13
    CALL core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150 ; 005e6e14
        ;   XREF to: 005a0150 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150(CDeformableModelInstance * this_ptr, int lod_index, uint render_flags, int lighting_mode, ...)
    ADD ESP,0x14                        ; 005e6e19
    PUSH 0x0                            ; 005e6e1c
    PUSH EDI                            ; 005e6e1e
    CALL core_cloth.cpp_CCloth_render_FUN_0043bae0 ; 005e6e1f
        ;   XREF to: 0043bae0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_render_FUN_0043bae0(CCloth * this_ptr, int use_joined_light)
    ADD ESP,0x8                         ; 005e6e24
    PUSH 0x0                            ; 005e6e27
    MOV ESI,dword ptr [ESP + 0x2c]      ; 005e6e29
    PUSH ESI                            ; 005e6e2d
    CALL core_cloth.cpp_CCloth_render_FUN_0043bae0 ; 005e6e2e
        ;   XREF to: 0043bae0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_render_FUN_0043bae0(CCloth * this_ptr, int use_joined_light)
        ;   Label: LAB_005e6e2e
    ADD ESP,0x8                         ; 005e6e33
        ;   Label: LAB_005e6e33
    PUSH EBX                            ; 005e6e36
    CALL core_charactr.cpp_CCharacter_renderAttachedModels_FUN_0042a420 ; 005e6e37
        ;   XREF to: 0042a420 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_renderAttachedModels_FUN_0042a420(CCharacter * this_ptr)
    MOV EDI,dword ptr [0x02f43978]      ; 005e6e3c | DAT_02f43978
    ADD ESP,0x4                         ; 005e6e42
    TEST EDI,EDI                        ; 005e6e45
    JZ 0x005e6e6c                       ; 005e6e47
        ;   XREF to: 005e6e6c (CONDITIONAL_JUMP)  ; LAB_005e6e6c
    MOV EBP,dword ptr [0x006703ec]      ; 005e6e49 | g_CDemonRendererPtr2
    PUSH EBP                            ; 005e6e4f | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 005e6e50
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 005e6e55
    TEST EAX,EAX                        ; 005e6e58
    JNZ 0x005e6e6c                      ; 005e6e5a
        ;   XREF to: 005e6e6c (CONDITIONAL_JUMP)  ; LAB_005e6e6c
    PUSH EBX                            ; 005e6e5c
    LEA EAX,[EBX + 0x158]               ; 005e6e5d
    PUSH EAX                            ; 005e6e63
    CALL core_motion.cpp_CMotionController_render_FUN_0052e700 ; 005e6e64
        ;   XREF to: 0052e700 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_render_FUN_0052e700(CMotionController * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005e6e69
    PUSH EBX                            ; 005e6e6c
        ;   Label: LAB_005e6e6c
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 005e6e6d
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005e6e72
    MOV EAX,dword ptr [ESP + 0x20]      ; 005e6e75
    POP ESI                             ; 005e6e79
    POP EDI                             ; 005e6e7a
    ADD ESP,0x24                        ; 005e6e7b
    POP EBP                             ; 005e6e7e
    POP EBX                             ; 005e6e7f
    RET                                 ; 005e6e80
    LEA EBP,[EBX + 0xe170]              ; 005e6e81
        ;   Label: LAB_005e6e81
    LEA ESI,[EBX + 0xbebc]              ; 005e6e87
    MOV dword ptr [ESP + 0x24],ESI      ; 005e6e8d
    CMP ECX,0x2                         ; 005e6e91
    JNZ 0x005e6eac                      ; 005e6e94
        ;   XREF to: 005e6eac (CONDITIONAL_JUMP)  ; LAB_005e6eac
    PUSH 0x0                            ; 005e6e96
    PUSH 0x1                            ; 005e6e98
    PUSH -0x1                           ; 005e6e9a
    PUSH -0x1                           ; 005e6e9c
    PUSH ESI                            ; 005e6e9e
    CALL core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150 ; 005e6e9f
        ;   XREF to: 005a0150 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150(CDeformableModelInstance * this_ptr, int lod_index, uint render_flags, int lighting_mode, ...)
    ADD ESP,0x14                        ; 005e6ea4
    PUSH 0x0                            ; 005e6ea7
    PUSH EBP                            ; 005e6ea9
    JMP 0x005e6e2e                      ; 005e6eaa
        ;   XREF to: 005e6e2e (UNCONDITIONAL_JUMP)  ; LAB_005e6e2e
    PUSH 0x0                            ; 005e6eac
        ;   Label: LAB_005e6eac
    PUSH EAX                            ; 005e6eae
    PUSH 0x0                            ; 005e6eaf
    LEA ESI,[EBX + 0xcdcc4]             ; 005e6eb1
    PUSH ESI                            ; 005e6eb7
    CALL core_morph.cpp_CMorph_FUN_0052b600 ; 005e6eb8
        ;   XREF to: 0052b600 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_FUN_0052b600(CMorph * this_ptr, int model_index)
    ADD ESP,0x10                        ; 005e6ebd
    PUSH 0x1                            ; 005e6ec0
    PUSH 0x0                            ; 005e6ec2
    PUSH EDI                            ; 005e6ec4
    PUSH 0x0                            ; 005e6ec5
    PUSH ESI                            ; 005e6ec7
    CALL core_morph.cpp_CMorph_FUN_0052b640 ; 005e6ec8
        ;   XREF to: 0052b640 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_FUN_0052b640(CMorph * this_ptr, int model_index)
    ADD ESP,0x14                        ; 005e6ecd
    PUSH 0x2                            ; 005e6ed0
    PUSH 0x0                            ; 005e6ed2
    PUSH EDI                            ; 005e6ed4
    PUSH 0x0                            ; 005e6ed5
    PUSH ESI                            ; 005e6ed7
    CALL core_morph.cpp_CMorph_FUN_0052b640 ; 005e6ed8
        ;   XREF to: 0052b640 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_FUN_0052b640(CMorph * this_ptr, int model_index)
    ADD ESP,0x14                        ; 005e6edd
    PUSH 0x3                            ; 005e6ee0
    PUSH 0x0                            ; 005e6ee2
    MOV EDI,dword ptr [ESP + 0x30]      ; 005e6ee4
    PUSH EDI                            ; 005e6ee8
    PUSH 0x0                            ; 005e6ee9
    PUSH ESI                            ; 005e6eeb
    CALL core_morph.cpp_CMorph_FUN_0052b640 ; 005e6eec
        ;   XREF to: 0052b640 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_FUN_0052b640(CMorph * this_ptr, int model_index)
    ADD ESP,0x14                        ; 005e6ef1
    PUSH 0x4                            ; 005e6ef4
    PUSH 0x0                            ; 005e6ef6
    PUSH EDI                            ; 005e6ef8
    PUSH 0x0                            ; 005e6ef9
    PUSH ESI                            ; 005e6efb
    CALL core_morph.cpp_CMorph_FUN_0052b640 ; 005e6efc
        ;   XREF to: 0052b640 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_FUN_0052b640(CMorph * this_ptr, int model_index)
    ADD ESP,0x14                        ; 005e6f01
    PUSH 0x0                            ; 005e6f04
    MOV EDX,dword ptr [ESP + 0x28]      ; 005e6f06
    PUSH EDX                            ; 005e6f0a
    PUSH 0x1                            ; 005e6f0b
    PUSH ESI                            ; 005e6f0d
    CALL core_morph.cpp_CMorph_FUN_0052b600 ; 005e6f0e
        ;   XREF to: 0052b600 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_FUN_0052b600(CMorph * this_ptr, int model_index)
    ADD ESP,0x10                        ; 005e6f13
    PUSH 0x1                            ; 005e6f16
    PUSH 0x0                            ; 005e6f18
    PUSH EBP                            ; 005e6f1a
    PUSH 0x1                            ; 005e6f1b
    PUSH ESI                            ; 005e6f1d
    CALL core_morph.cpp_CMorph_FUN_0052b640 ; 005e6f1e
        ;   XREF to: 0052b640 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_FUN_0052b640(CMorph * this_ptr, int model_index)
    ADD ESP,0x14                        ; 005e6f23
    PUSH 0x2                            ; 005e6f26
    PUSH 0x0                            ; 005e6f28
    PUSH EBP                            ; 005e6f2a
    PUSH 0x1                            ; 005e6f2b
    PUSH ESI                            ; 005e6f2d
    CALL core_morph.cpp_CMorph_FUN_0052b640 ; 005e6f2e
        ;   XREF to: 0052b640 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_FUN_0052b640(CMorph * this_ptr, int model_index)
    ADD ESP,0x14                        ; 005e6f33
    PUSH dword ptr [EBX + 0xce8f0]      ; 005e6f36
    PUSH ESI                            ; 005e6f3c
    CALL core_morph.cpp_CMorph_FUN_0052bae0 ; 005e6f3d
        ;   XREF to: 0052bae0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_FUN_0052bae0(CMorph * this_ptr)
    JMP 0x005e6e33                      ; 005e6f42
        ;   XREF to: 005e6e33 (UNCONDITIONAL_JUMP)  ; LAB_005e6e33

