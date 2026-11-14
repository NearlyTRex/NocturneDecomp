; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_vampboss_cpp_CVampireBoss_renderOpaque_FUN_00582ec0(CVampireBoss *this_ptr)
;
; Parameters:
; CVampireBoss *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01d1cdc8
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0
;   core_box.cpp_FUN_0041a840
;   core_charactr.cpp_CCharacter_renderAttachedModels_FUN_00425aa0
;   core_cloth.cpp_CCloth_render_FUN_005b0fe0
;   core_morph.cpp_CMorph_render_FUN_005b76a0
;   core_morph.cpp_CMorph_updateModelFromDeformable_FUN_005b7150
;   core_morph.cpp_CMorph_updateModelFromKeyframed_FUN_005b7190
;   core_motion.cpp_FUN_005042e0
;   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00547170
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00582ec0
        ;   Label: core_vampboss.cpp_CVampireBoss_renderOpaque_FUN_00582ec0
    PUSH EBP                            ; 00582ec1
    SUB ESP,0x3c                        ; 00582ec2
    MOV EBX,dword ptr [ESP + 0x48]      ; 00582ec5
    CMP dword ptr [EBX + 0x2568],0x0    ; 00582ec9
    JZ 0x00582eda                       ; 00582ed0
        ;   XREF to: 00582eda (CONDITIONAL_JUMP)  ; LAB_00582eda
    XOR EAX,EAX                         ; 00582ed2
    ADD ESP,0x3c                        ; 00582ed4
    POP EBP                             ; 00582ed7
    POP EBX                             ; 00582ed8
    RET                                 ; 00582ed9
    PUSH EDI                            ; 00582eda
        ;   Label: LAB_00582eda
    PUSH ESI                            ; 00582edb
    PUSH EBX                            ; 00582edc
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 ; 00582edd
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00582ee2
    PUSH 0x0                            ; 00582ee5
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00582ee7
    PUSH EBX                            ; 00582eed
    LEA ESI,[ESP + 0x10]                ; 00582eee
    LEA EDI,[ESP + 0x28]                ; 00582ef2
    CALL dword ptr [EAX + 0x24]         ; 00582ef6
    MOV ECX,0x6                         ; 00582ef9
    ADD ESP,0x4                         ; 00582efe
    LEA EAX,[ESP + 0x24]                ; 00582f01
    LEA ESI,[ESP + 0xc]                 ; 00582f05
    PUSH EAX                            ; 00582f09
    MOVSD.REP ES:EDI,ESI                ; 00582f0a
    CALL core_box.cpp_FUN_0041a840      ; 00582f0c
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a840()
    ADD ESP,0x8                         ; 00582f11
    MOV dword ptr [ESP + 0x38],EAX      ; 00582f14
    TEST EAX,EAX                        ; 00582f18
    JZ 0x00582f9f                       ; 00582f1a
        ;   XREF to: 00582f9f (CONDITIONAL_JUMP)  ; LAB_00582f9f
    LEA EBP,[EBX + 0x8840c]             ; 00582f20
    LEA EAX,[EBX + 0x4d8dc]             ; 00582f26
    MOV ECX,dword ptr [EBX + 0xc2f3c]   ; 00582f2c
    MOV dword ptr [ESP + 0x40],EAX      ; 00582f32
    LEA EAX,[EBX + 0x2b4]               ; 00582f36
    TEST ECX,ECX                        ; 00582f3c
    JNZ 0x00582fb4                      ; 00582f3e
        ;   XREF to: 00582fb4 (CONDITIONAL_JUMP)  ; LAB_00582fb4
    PUSH ECX                            ; 00582f40
    PUSH 0x1                            ; 00582f41
    PUSH -0x1                           ; 00582f43
    PUSH -0x1                           ; 00582f45
    PUSH EAX                            ; 00582f47
    CALL core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00547170 ; 00582f48
        ;   XREF to: 00547170 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00547170(CDeformableModelInstance * this_ptr, int lod_index, uint render_flags, int lighting_mode, ...)
    ADD ESP,0x14                        ; 00582f4d
    PUSH 0x0                            ; 00582f50
    MOV EDI,dword ptr [ESP + 0x44]      ; 00582f52
    PUSH EDI                            ; 00582f56
    CALL core_cloth.cpp_CCloth_render_FUN_005b0fe0 ; 00582f57
        ;   XREF to: 005b0fe0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_render_FUN_005b0fe0(CCloth * this_ptr, CDeformableModelInstance * deformable_model)
    ADD ESP,0x8                         ; 00582f5c
    PUSH 0x0                            ; 00582f5f
    PUSH EBP                            ; 00582f61
    CALL core_cloth.cpp_CCloth_render_FUN_005b0fe0 ; 00582f62
        ;   XREF to: 005b0fe0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_render_FUN_005b0fe0(CCloth * this_ptr, CDeformableModelInstance * deformable_model)
        ;   Label: LAB_00582f62
    ADD ESP,0x8                         ; 00582f67
        ;   Label: LAB_00582f67
    PUSH EBX                            ; 00582f6a
    CALL core_charactr.cpp_CCharacter_renderAttachedModels_FUN_00425aa0 ; 00582f6b
        ;   XREF to: 00425aa0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_renderAttachedModels_FUN_00425aa0(CCharacter * this_ptr)
    MOV EBP,dword ptr [0x01d1cdc8]      ; 00582f70 | DAT_01d1cdc8
    ADD ESP,0x4                         ; 00582f76
    TEST EBP,EBP                        ; 00582f79
    JZ 0x00582f9f                       ; 00582f7b
        ;   XREF to: 00582f9f (CONDITIONAL_JUMP)  ; LAB_00582f9f
    MOV EAX,[0x0060b280]                ; 00582f7d | DAT_0060b280
    PUSH EAX                            ; 00582f82 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 00582f83
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00582f88
    TEST EAX,EAX                        ; 00582f8b
    JNZ 0x00582f9f                      ; 00582f8d
        ;   XREF to: 00582f9f (CONDITIONAL_JUMP)  ; LAB_00582f9f
    PUSH EBX                            ; 00582f8f
    LEA EAX,[EBX + 0x2b4]               ; 00582f90
    PUSH EAX                            ; 00582f96
    CALL core_motion.cpp_FUN_005042e0   ; 00582f97
        ;   XREF to: 005042e0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_FUN_005042e0(CMotionController * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00582f9c
    PUSH EBX                            ; 00582f9f
        ;   Label: LAB_00582f9f
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 00582fa0
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00582fa5
    MOV EAX,dword ptr [ESP + 0x38]      ; 00582fa8
    POP ESI                             ; 00582fac
    POP EDI                             ; 00582fad
    ADD ESP,0x3c                        ; 00582fae
    POP EBP                             ; 00582fb1
    POP EBX                             ; 00582fb2
    RET                                 ; 00582fb3
    LEA EDI,[EBX + 0x12dac]             ; 00582fb4
        ;   Label: LAB_00582fb4
    LEA ESI,[EBX + 0x10af8]             ; 00582fba
    MOV dword ptr [ESP + 0x3c],ESI      ; 00582fc0
    CMP ECX,0x2                         ; 00582fc4
    JNZ 0x00582fdf                      ; 00582fc7
        ;   XREF to: 00582fdf (CONDITIONAL_JUMP)  ; LAB_00582fdf
    PUSH 0x0                            ; 00582fc9
    PUSH 0x1                            ; 00582fcb
    PUSH -0x1                           ; 00582fcd
    PUSH -0x1                           ; 00582fcf
    PUSH ESI                            ; 00582fd1
    CALL core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00547170 ; 00582fd2
        ;   XREF to: 00547170 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00547170(CDeformableModelInstance * this_ptr, int lod_index, uint render_flags, int lighting_mode, ...)
    ADD ESP,0x14                        ; 00582fd7
    PUSH 0x0                            ; 00582fda
    PUSH EDI                            ; 00582fdc
    JMP 0x00582f62                      ; 00582fdd
        ;   XREF to: 00582f62 (UNCONDITIONAL_JUMP)  ; LAB_00582f62
    PUSH 0x0                            ; 00582fdf
        ;   Label: LAB_00582fdf
    PUSH EAX                            ; 00582fe1
    PUSH 0x0                            ; 00582fe2
    LEA ESI,[EBX + 0xc2f40]             ; 00582fe4
    PUSH ESI                            ; 00582fea
    CALL core_morph.cpp_CMorph_updateModelFromDeformable_FUN_005b7150 ; 00582feb
        ;   XREF to: 005b7150 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromDeformable_FUN_005b7150(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr, int part_index)
    ADD ESP,0x10                        ; 00582ff0
    PUSH 0x1                            ; 00582ff3
    PUSH 0x0                            ; 00582ff5
    MOV EAX,dword ptr [ESP + 0x48]      ; 00582ff7
    PUSH EAX                            ; 00582ffb
    PUSH 0x0                            ; 00582ffc
    PUSH ESI                            ; 00582ffe
    CALL core_morph.cpp_CMorph_updateModelFromKeyframed_FUN_005b7190 ; 00582fff
        ;   XREF to: 005b7190 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromKeyframed_FUN_005b7190(CMorph * this_ptr, int model_index, CKeyFramedModel * model_ptr, int frame_index, ...)
    ADD ESP,0x14                        ; 00583004
    PUSH 0x2                            ; 00583007
    PUSH 0x0                            ; 00583009
    MOV EDX,dword ptr [ESP + 0x48]      ; 0058300b
    PUSH EDX                            ; 0058300f
    PUSH 0x0                            ; 00583010
    PUSH ESI                            ; 00583012
    CALL core_morph.cpp_CMorph_updateModelFromKeyframed_FUN_005b7190 ; 00583013
        ;   XREF to: 005b7190 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromKeyframed_FUN_005b7190(CMorph * this_ptr, int model_index, CKeyFramedModel * model_ptr, int frame_index, ...)
    ADD ESP,0x14                        ; 00583018
    PUSH 0x3                            ; 0058301b
    PUSH 0x0                            ; 0058301d
    PUSH EBP                            ; 0058301f
    PUSH 0x0                            ; 00583020
    PUSH ESI                            ; 00583022
    CALL core_morph.cpp_CMorph_updateModelFromKeyframed_FUN_005b7190 ; 00583023
        ;   XREF to: 005b7190 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromKeyframed_FUN_005b7190(CMorph * this_ptr, int model_index, CKeyFramedModel * model_ptr, int frame_index, ...)
    ADD ESP,0x14                        ; 00583028
    PUSH 0x4                            ; 0058302b
    PUSH 0x0                            ; 0058302d
    PUSH EBP                            ; 0058302f
    PUSH 0x0                            ; 00583030
    PUSH ESI                            ; 00583032
    CALL core_morph.cpp_CMorph_updateModelFromKeyframed_FUN_005b7190 ; 00583033
        ;   XREF to: 005b7190 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromKeyframed_FUN_005b7190(CMorph * this_ptr, int model_index, CKeyFramedModel * model_ptr, int frame_index, ...)
    ADD ESP,0x14                        ; 00583038
    PUSH 0x0                            ; 0058303b
    MOV ECX,dword ptr [ESP + 0x40]      ; 0058303d
    PUSH ECX                            ; 00583041
    PUSH 0x1                            ; 00583042
    PUSH ESI                            ; 00583044
    CALL core_morph.cpp_CMorph_updateModelFromDeformable_FUN_005b7150 ; 00583045
        ;   XREF to: 005b7150 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromDeformable_FUN_005b7150(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr, int part_index)
    ADD ESP,0x10                        ; 0058304a
    PUSH 0x1                            ; 0058304d
    PUSH 0x0                            ; 0058304f
    PUSH EDI                            ; 00583051
    PUSH 0x1                            ; 00583052
    PUSH ESI                            ; 00583054
    CALL core_morph.cpp_CMorph_updateModelFromKeyframed_FUN_005b7190 ; 00583055
        ;   XREF to: 005b7190 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromKeyframed_FUN_005b7190(CMorph * this_ptr, int model_index, CKeyFramedModel * model_ptr, int frame_index, ...)
    ADD ESP,0x14                        ; 0058305a
    PUSH 0x2                            ; 0058305d
    PUSH 0x0                            ; 0058305f
    PUSH EDI                            ; 00583061
    PUSH 0x1                            ; 00583062
    PUSH ESI                            ; 00583064
    CALL core_morph.cpp_CMorph_updateModelFromKeyframed_FUN_005b7190 ; 00583065
        ;   XREF to: 005b7190 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromKeyframed_FUN_005b7190(CMorph * this_ptr, int model_index, CKeyFramedModel * model_ptr, int frame_index, ...)
    ADD ESP,0x14                        ; 0058306a
    PUSH dword ptr [EBX + 0xc3b6c]      ; 0058306d
    PUSH ESI                            ; 00583073
    CALL core_morph.cpp_CMorph_render_FUN_005b76a0 ; 00583074
        ;   XREF to: 005b76a0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_render_FUN_005b76a0(CMorph * this_ptr, float morph_t)
    JMP 0x00582f67                      ; 00583079
        ;   XREF to: 00582f67 (UNCONDITIONAL_JUMP)  ; LAB_00582f67

