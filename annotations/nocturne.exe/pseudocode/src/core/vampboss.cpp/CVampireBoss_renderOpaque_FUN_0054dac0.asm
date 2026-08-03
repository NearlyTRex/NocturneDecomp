; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_vampboss_cpp_CVampireBoss_renderOpaque_FUN_0054dac0(CVampireBoss *this_ptr)
;
; Parameters:
; CVampireBoss *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x2c]:1  local_2c
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01cd4318
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;   core_charactr.cpp_CCharacter_renderAttachedModels_FUN_004265a0
;   core_cloth.cpp_CCloth_render_FUN_00437db0
;   core_morph.cpp_CMorph_render_FUN_004e0820
;   core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004e0340
;   core_morph.cpp_CMorph_updateModelFromKeyframed_FUN_004e0380
;   core_motion.cpp_CMotionController_render_FUN_004e22b0
;   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054dac0
        ;   Label: core_vampboss.cpp_CVampireBoss_renderOpaque_FUN_0054dac0
    PUSH EBP                            ; 0054dac1
    SUB ESP,0x24                        ; 0054dac2
    MOV EBX,dword ptr [ESP + 0x30]      ; 0054dac5
    CMP dword ptr [EBX + 0x2404],0x0    ; 0054dac9
    JZ 0x0054dada                       ; 0054dad0
        ;   XREF to: 0054dada (CONDITIONAL_JUMP)  ; LAB_0054dada
    XOR EAX,EAX                         ; 0054dad2
    ADD ESP,0x24                        ; 0054dad4
    POP EBP                             ; 0054dad7
    POP EBX                             ; 0054dad8
    RET                                 ; 0054dad9
    PUSH EDI                            ; 0054dada
        ;   Label: LAB_0054dada
    PUSH ESI                            ; 0054dadb
    PUSH EBX                            ; 0054dadc
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 0054dadd
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20(CDemonActor * actor)
    ADD ESP,0x4                         ; 0054dae2
    PUSH 0x0                            ; 0054dae5
    LEA EAX,[ESP + 0xc]                 ; 0054dae7
    PUSH EAX                            ; 0054daeb
    MOV ESI,dword ptr [EBX + 0x14c]     ; 0054daec
    PUSH EBX                            ; 0054daf2
    CALL dword ptr [ESI + 0x14]         ; 0054daf3
    ADD ESP,0x8                         ; 0054daf6
    PUSH EAX                            ; 0054daf9
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 0054dafa
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(CBoundingBox3D * this_ptr)
    ADD ESP,0x8                         ; 0054daff
    MOV dword ptr [ESP + 0x20],EAX      ; 0054db02
    TEST EAX,EAX                        ; 0054db06
    JZ 0x0054db8e                       ; 0054db08
        ;   XREF to: 0054db8e (CONDITIONAL_JUMP)  ; LAB_0054db8e
    LEA EAX,[EBX + 0x83638]             ; 0054db0e
    MOV ECX,dword ptr [EBX + 0xbe168]   ; 0054db14
    LEA EDI,[EBX + 0x48b08]             ; 0054db1a
    MOV dword ptr [ESP + 0x28],EAX      ; 0054db20
    LEA EAX,[EBX + 0x150]               ; 0054db24
    TEST ECX,ECX                        ; 0054db2a
    JNZ 0x0054dba3                      ; 0054db2c
        ;   XREF to: 0054dba3 (CONDITIONAL_JUMP)  ; LAB_0054dba3
    PUSH ECX                            ; 0054db2e
    PUSH 0x1                            ; 0054db2f
    PUSH -0x1                           ; 0054db31
    PUSH -0x1                           ; 0054db33
    PUSH EAX                            ; 0054db35
    CALL core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0 ; 0054db36
        ;   XREF to: 0051d9d0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0(CDeformableModelInstance * this_ptr, int lod_index, uint render_flags, int lighting_mode, ...)
    ADD ESP,0x14                        ; 0054db3b
    PUSH 0x0                            ; 0054db3e
    PUSH EDI                            ; 0054db40
    CALL core_cloth.cpp_CCloth_render_FUN_00437db0 ; 0054db41
        ;   XREF to: 00437db0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_render_FUN_00437db0(CCloth * this_ptr, CDeformableModelInstance * deformable_model)
    ADD ESP,0x8                         ; 0054db46
    PUSH 0x0                            ; 0054db49
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0054db4b
    PUSH ESI                            ; 0054db4f
    CALL core_cloth.cpp_CCloth_render_FUN_00437db0 ; 0054db50
        ;   XREF to: 00437db0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_render_FUN_00437db0(CCloth * this_ptr, CDeformableModelInstance * deformable_model)
        ;   Label: LAB_0054db50
    ADD ESP,0x8                         ; 0054db55
        ;   Label: LAB_0054db55
    PUSH EBX                            ; 0054db58
    CALL core_charactr.cpp_CCharacter_renderAttachedModels_FUN_004265a0 ; 0054db59
        ;   XREF to: 004265a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_renderAttachedModels_FUN_004265a0(CCharacter * this_ptr)
    MOV EDI,dword ptr [0x01cd4318]      ; 0054db5e | DAT_01cd4318
    ADD ESP,0x4                         ; 0054db64
    TEST EDI,EDI                        ; 0054db67
    JZ 0x0054db8e                       ; 0054db69
        ;   XREF to: 0054db8e (CONDITIONAL_JUMP)  ; LAB_0054db8e
    MOV EBP,dword ptr [0x005ae704]      ; 0054db6b | DAT_005ae704
    PUSH EBP                            ; 0054db71 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 0054db72
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0054db77
    TEST EAX,EAX                        ; 0054db7a
    JNZ 0x0054db8e                      ; 0054db7c
        ;   XREF to: 0054db8e (CONDITIONAL_JUMP)  ; LAB_0054db8e
    PUSH EBX                            ; 0054db7e
    LEA EAX,[EBX + 0x150]               ; 0054db7f
    PUSH EAX                            ; 0054db85
    CALL core_motion.cpp_CMotionController_render_FUN_004e22b0 ; 0054db86
        ;   XREF to: 004e22b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_render_FUN_004e22b0(CMotionController * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0054db8b
    PUSH EBX                            ; 0054db8e
        ;   Label: LAB_0054db8e
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 0054db8f
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0054db94
    MOV EAX,dword ptr [ESP + 0x20]      ; 0054db97
    POP ESI                             ; 0054db9b
    POP EDI                             ; 0054db9c
    ADD ESP,0x24                        ; 0054db9d
    POP EBP                             ; 0054dba0
    POP EBX                             ; 0054dba1
    RET                                 ; 0054dba2
    LEA EBP,[EBX + 0xdfd8]              ; 0054dba3
        ;   Label: LAB_0054dba3
    LEA ESI,[EBX + 0xbd24]              ; 0054dba9
    MOV dword ptr [ESP + 0x24],ESI      ; 0054dbaf
    CMP ECX,0x2                         ; 0054dbb3
    JNZ 0x0054dbce                      ; 0054dbb6
        ;   XREF to: 0054dbce (CONDITIONAL_JUMP)  ; LAB_0054dbce
    PUSH 0x0                            ; 0054dbb8
    PUSH 0x1                            ; 0054dbba
    PUSH -0x1                           ; 0054dbbc
    PUSH -0x1                           ; 0054dbbe
    PUSH ESI                            ; 0054dbc0
    CALL core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0 ; 0054dbc1
        ;   XREF to: 0051d9d0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0(CDeformableModelInstance * this_ptr, int lod_index, uint render_flags, int lighting_mode, ...)
    ADD ESP,0x14                        ; 0054dbc6
    PUSH 0x0                            ; 0054dbc9
    PUSH EBP                            ; 0054dbcb
    JMP 0x0054db50                      ; 0054dbcc
        ;   XREF to: 0054db50 (UNCONDITIONAL_JUMP)  ; LAB_0054db50
    PUSH 0x0                            ; 0054dbce
        ;   Label: LAB_0054dbce
    PUSH EAX                            ; 0054dbd0
    PUSH 0x0                            ; 0054dbd1
    LEA ESI,[EBX + 0xbe16c]             ; 0054dbd3
    PUSH ESI                            ; 0054dbd9
    CALL core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004e0340 ; 0054dbda
        ;   XREF to: 004e0340 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004e0340(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr, int part_index)
    ADD ESP,0x10                        ; 0054dbdf
    PUSH 0x1                            ; 0054dbe2
    PUSH 0x0                            ; 0054dbe4
    PUSH EDI                            ; 0054dbe6
    PUSH 0x0                            ; 0054dbe7
    PUSH ESI                            ; 0054dbe9
    CALL core_morph.cpp_CMorph_updateModelFromKeyframed_FUN_004e0380 ; 0054dbea
        ;   XREF to: 004e0380 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromKeyframed_FUN_004e0380(CMorph * this_ptr, int model_index, CKeyFramedModel * model_ptr, int frame_index, ...)
    ADD ESP,0x14                        ; 0054dbef
    PUSH 0x2                            ; 0054dbf2
    PUSH 0x0                            ; 0054dbf4
    PUSH EDI                            ; 0054dbf6
    PUSH 0x0                            ; 0054dbf7
    PUSH ESI                            ; 0054dbf9
    CALL core_morph.cpp_CMorph_updateModelFromKeyframed_FUN_004e0380 ; 0054dbfa
        ;   XREF to: 004e0380 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromKeyframed_FUN_004e0380(CMorph * this_ptr, int model_index, CKeyFramedModel * model_ptr, int frame_index, ...)
    ADD ESP,0x14                        ; 0054dbff
    PUSH 0x3                            ; 0054dc02
    PUSH 0x0                            ; 0054dc04
    MOV EDI,dword ptr [ESP + 0x30]      ; 0054dc06
    PUSH EDI                            ; 0054dc0a
    PUSH 0x0                            ; 0054dc0b
    PUSH ESI                            ; 0054dc0d
    CALL core_morph.cpp_CMorph_updateModelFromKeyframed_FUN_004e0380 ; 0054dc0e
        ;   XREF to: 004e0380 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromKeyframed_FUN_004e0380(CMorph * this_ptr, int model_index, CKeyFramedModel * model_ptr, int frame_index, ...)
    ADD ESP,0x14                        ; 0054dc13
    PUSH 0x4                            ; 0054dc16
    PUSH 0x0                            ; 0054dc18
    PUSH EDI                            ; 0054dc1a
    PUSH 0x0                            ; 0054dc1b
    PUSH ESI                            ; 0054dc1d
    CALL core_morph.cpp_CMorph_updateModelFromKeyframed_FUN_004e0380 ; 0054dc1e
        ;   XREF to: 004e0380 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromKeyframed_FUN_004e0380(CMorph * this_ptr, int model_index, CKeyFramedModel * model_ptr, int frame_index, ...)
    ADD ESP,0x14                        ; 0054dc23
    PUSH 0x0                            ; 0054dc26
    MOV EDX,dword ptr [ESP + 0x28]      ; 0054dc28
    PUSH EDX                            ; 0054dc2c
    PUSH 0x1                            ; 0054dc2d
    PUSH ESI                            ; 0054dc2f
    CALL core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004e0340 ; 0054dc30
        ;   XREF to: 004e0340 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004e0340(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr, int part_index)
    ADD ESP,0x10                        ; 0054dc35
    PUSH 0x1                            ; 0054dc38
    PUSH 0x0                            ; 0054dc3a
    PUSH EBP                            ; 0054dc3c
    PUSH 0x1                            ; 0054dc3d
    PUSH ESI                            ; 0054dc3f
    CALL core_morph.cpp_CMorph_updateModelFromKeyframed_FUN_004e0380 ; 0054dc40
        ;   XREF to: 004e0380 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromKeyframed_FUN_004e0380(CMorph * this_ptr, int model_index, CKeyFramedModel * model_ptr, int frame_index, ...)
    ADD ESP,0x14                        ; 0054dc45
    PUSH 0x2                            ; 0054dc48
    PUSH 0x0                            ; 0054dc4a
    PUSH EBP                            ; 0054dc4c
    PUSH 0x1                            ; 0054dc4d
    PUSH ESI                            ; 0054dc4f
    CALL core_morph.cpp_CMorph_updateModelFromKeyframed_FUN_004e0380 ; 0054dc50
        ;   XREF to: 004e0380 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromKeyframed_FUN_004e0380(CMorph * this_ptr, int model_index, CKeyFramedModel * model_ptr, int frame_index, ...)
    ADD ESP,0x14                        ; 0054dc55
    PUSH dword ptr [EBX + 0xbed98]      ; 0054dc58
    PUSH ESI                            ; 0054dc5e
    CALL core_morph.cpp_CMorph_render_FUN_004e0820 ; 0054dc5f
        ;   XREF to: 004e0820 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_render_FUN_004e0820(CMorph * this_ptr, float morph_t)
    JMP 0x0054db55                      ; 0054dc64
        ;   XREF to: 0054db55 (UNCONDITIONAL_JUMP)  ; LAB_0054db55

