; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_succubus_cpp_CSuccubus_renderOpaque_FUN_00592aa0(CSuccubus *this_ptr)
;
; Parameters:
; CSuccubus *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_00606278
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01d39d34
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0
;   core_box.cpp_FUN_004207b0
;   core_charactr.cpp_CCharacter_renderCharacter_FUN_0042e960
;   core_cloth.cpp_CClothList_render_FUN_00441ff0
;   core_morph.cpp_CMorph_render_FUN_005237e0
;   core_morph.cpp_CMorph_updateModelFromDeformable_FUN_00523290
;   core_morph.cpp_CMorph_updateModelFromKeyframed_FUN_005232d0
;   core_motion.cpp_FUN_005254b0
;   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00569810
;   engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_00484180
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00592aa0
        ;   Label: core_succubus.cpp_CSuccubus_renderOpaque_FUN_00592aa0
    PUSH EBP                            ; 00592aa1
    SUB ESP,0x34                        ; 00592aa2
    MOV EBX,dword ptr [ESP + 0x40]      ; 00592aa5
    MOV EDX,dword ptr [0x00612560]      ; 00592aa9 | DAT_00612560
    PUSH EDX                            ; 00592aaf | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_00484180 ; 00592ab0
        ;   XREF to: 00484180 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_00484180(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00592ab5
    MOV dword ptr [ESP + 0x30],EAX      ; 00592ab8
    TEST EAX,EAX                        ; 00592abc
    JZ 0x00592b9e                       ; 00592abe
        ;   XREF to: 00592b9e (CONDITIONAL_JUMP)  ; LAB_00592b9e
    CMP dword ptr [EBX + 0x24fc],0x0    ; 00592ac4
        ;   Label: LAB_00592ac4
    JNZ 0x00592ba9                      ; 00592acb
        ;   XREF to: 00592ba9 (CONDITIONAL_JUMP)  ; LAB_00592ba9
    PUSH EDI                            ; 00592ad1
    PUSH ESI                            ; 00592ad2
    PUSH EBX                            ; 00592ad3
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 ; 00592ad4
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00592ad9
    PUSH 0x0                            ; 00592adc
    MOV EAX,dword ptr [EBX + 0x154]     ; 00592ade
    PUSH EBX                            ; 00592ae4
    LEA ESI,[ESP + 0x10]                ; 00592ae5
    LEA EDI,[ESP + 0x28]                ; 00592ae9
    CALL dword ptr [EAX + 0x1c]         ; 00592aed
    MOV ECX,0x6                         ; 00592af0
    ADD ESP,0x4                         ; 00592af5
    LEA EAX,[ESP + 0x24]                ; 00592af8
    LEA ESI,[ESP + 0xc]                 ; 00592afc
    PUSH EAX                            ; 00592b00
    MOVSD.REP ES:EDI,ESI                ; 00592b01
    CALL core_box.cpp_FUN_004207b0      ; 00592b03
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_004207b0()
    ADD ESP,0x8                         ; 00592b08
    MOV EBP,EAX                         ; 00592b0b
    TEST EAX,EAX                        ; 00592b0d
    JZ 0x00592b8b                       ; 00592b0f
        ;   XREF to: 00592b8b (CONDITIONAL_JUMP)  ; LAB_00592b8b
    MOV ESI,dword ptr [ESP + 0x38]      ; 00592b15
    LEA EDI,[EBX + 0xc268]              ; 00592b19
    MOV dword ptr [EBX + 0x27bc],0x1    ; 00592b1f
    TEST ESI,ESI                        ; 00592b29
    JZ 0x00592bb1                       ; 00592b2b
        ;   XREF to: 00592bb1 (CONDITIONAL_JUMP)  ; LAB_00592bb1
    PUSH 0x0                            ; 00592b31
    PUSH 0x1                            ; 00592b33
    PUSH -0x1                           ; 00592b35
    PUSH -0x1                           ; 00592b37
    PUSH EDI                            ; 00592b39
    CALL core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00569810 ; 00592b3a
        ;   XREF to: 00569810 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00569810(CDeformableModelInstance * this_ptr, int lod_index, uint render_flags, int lighting_mode, ...)
    ADD ESP,0x14                        ; 00592b3f
    PUSH EDI                            ; 00592b42
    LEA EAX,[EBX + 0xe60c]              ; 00592b43
    PUSH EAX                            ; 00592b49
    CALL core_cloth.cpp_CClothList_render_FUN_00441ff0 ; 00592b4a
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_render_FUN_00441ff0(CClothList * this_ptr, CDeformableModelInstance * model_ptr)
    ADD ESP,0x8                         ; 00592b4f
        ;   Label: LAB_00592b4f
    CMP dword ptr [0x01d39d34],0x0      ; 00592b52 | DAT_01d39d34
        ;   Label: LAB_00592b52
    JZ 0x00592b8b                       ; 00592b59
        ;   XREF to: 00592b8b (CONDITIONAL_JUMP)  ; LAB_00592b8b
    MOV EDI,dword ptr [0x00612560]      ; 00592b5b | DAT_00612560
    PUSH EDI                            ; 00592b61 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 00592b62
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00592b67
    TEST EAX,EAX                        ; 00592b6a
    JNZ 0x00592b8b                      ; 00592b6c
        ;   XREF to: 00592b8b (CONDITIONAL_JUMP)  ; LAB_00592b8b
    PUSH EBX                            ; 00592b6e
    LEA EAX,[EBX + 0x158]               ; 00592b6f
    PUSH EAX                            ; 00592b75
    CALL core_motion.cpp_FUN_005254b0   ; 00592b76
        ;   XREF to: 005254b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_FUN_005254b0(CMotionController * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00592b7b
    MOV EAX,dword ptr [EBX + 0x154]     ; 00592b7e
    PUSH EBX                            ; 00592b84
    CALL dword ptr [EAX + 0x58]         ; 00592b85
    ADD ESP,0x4                         ; 00592b88
    PUSH EBX                            ; 00592b8b
        ;   Label: LAB_00592b8b
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 00592b8c
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00592b91
    MOV EAX,EBP                         ; 00592b94
    POP ESI                             ; 00592b96
    POP EDI                             ; 00592b97
    ADD ESP,0x34                        ; 00592b98
    POP EBP                             ; 00592b9b
    POP EBX                             ; 00592b9c
    RET                                 ; 00592b9d
    MOV dword ptr [EBX + 0x27bc],EAX    ; 00592b9e
        ;   Label: LAB_00592b9e
    JMP 0x00592ac4                      ; 00592ba4
        ;   XREF to: 00592ac4 (UNCONDITIONAL_JUMP)  ; LAB_00592ac4
    XOR EAX,EAX                         ; 00592ba9
        ;   Label: LAB_00592ba9
    ADD ESP,0x34                        ; 00592bab
    POP EBP                             ; 00592bae
    POP EBX                             ; 00592baf
    RET                                 ; 00592bb0
    CMP dword ptr [EBX + 0xe7d0],0x0    ; 00592bb1
        ;   Label: LAB_00592bb1
    JZ 0x00592c29                       ; 00592bb8
        ;   XREF to: 00592c29 (CONDITIONAL_JUMP)  ; LAB_00592c29
    PUSH ESI                            ; 00592bba
    LEA EAX,[EBX + 0x158]               ; 00592bbb
    PUSH EAX                            ; 00592bc1
    PUSH ESI                            ; 00592bc2
    LEA ESI,[EBX + 0xe7d8]              ; 00592bc3
    PUSH ESI                            ; 00592bc9
    CALL core_morph.cpp_CMorph_updateModelFromDeformable_FUN_00523290 ; 00592bca
        ;   XREF to: 00523290 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromDeformable_FUN_00523290(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr, int part_index)
    ADD ESP,0x10                        ; 00592bcf
    PUSH 0x0                            ; 00592bd2
    PUSH EDI                            ; 00592bd4
    PUSH 0x1                            ; 00592bd5
    PUSH ESI                            ; 00592bd7
    CALL core_morph.cpp_CMorph_updateModelFromDeformable_FUN_00523290 ; 00592bd8
        ;   XREF to: 00523290 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromDeformable_FUN_00523290(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr, int part_index)
    ADD ESP,0x10                        ; 00592bdd
    PUSH 0x1                            ; 00592be0
    PUSH 0x0                            ; 00592be2
    MOV EDX,dword ptr [EBX + 0xe7a0]    ; 00592be4
    PUSH EDX                            ; 00592bea
    PUSH 0x1                            ; 00592beb
    PUSH ESI                            ; 00592bed
    CALL core_morph.cpp_CMorph_updateModelFromKeyframed_FUN_005232d0 ; 00592bee
        ;   XREF to: 005232d0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromKeyframed_FUN_005232d0(CMorph * this_ptr, int model_index, CKeyFramedModel * model_ptr, int frame_index, ...)
    ADD ESP,0x14                        ; 00592bf3
    PUSH 0x2                            ; 00592bf6
    PUSH 0x0                            ; 00592bf8
    MOV ECX,dword ptr [EBX + 0xe7a0]    ; 00592bfa
    PUSH ECX                            ; 00592c00
    PUSH 0x1                            ; 00592c01
    PUSH ESI                            ; 00592c03
    CALL core_morph.cpp_CMorph_updateModelFromKeyframed_FUN_005232d0 ; 00592c04
        ;   XREF to: 005232d0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromKeyframed_FUN_005232d0(CMorph * this_ptr, int model_index, CKeyFramedModel * model_ptr, int frame_index, ...)
    FLD float ptr [EBX + 0xe7d4]        ; 00592c09
    FDIV float ptr [0x00606278]         ; 00592c0f | DAT_00606278
    ADD ESP,0x14                        ; 00592c15
    SUB ESP,0x4                         ; 00592c18
    FSTP float ptr [ESP]                ; 00592c1b
    PUSH ESI                            ; 00592c1e
    CALL core_morph.cpp_CMorph_render_FUN_005237e0 ; 00592c1f
        ;   XREF to: 005237e0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_render_FUN_005237e0(CMorph * this_ptr, float morph_t)
    JMP 0x00592b4f                      ; 00592c24
        ;   XREF to: 00592b4f (UNCONDITIONAL_JUMP)  ; LAB_00592b4f
    PUSH EBX                            ; 00592c29
        ;   Label: LAB_00592c29
    CALL core_charactr.cpp_CCharacter_renderCharacter_FUN_0042e960 ; 00592c2a
        ;   XREF to: 0042e960 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_renderCharacter_FUN_0042e960(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00592c2f
    JMP 0x00592b52                      ; 00592c32
        ;   XREF to: 00592b52 (UNCONDITIONAL_JUMP)  ; LAB_00592b52

