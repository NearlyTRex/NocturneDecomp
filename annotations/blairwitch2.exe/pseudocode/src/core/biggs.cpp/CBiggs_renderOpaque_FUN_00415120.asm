; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_biggs_cpp_CBiggs_renderOpaque_FUN_00415120(CBiggs *this_ptr)
;
; Parameters:
; CBiggs *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005f3510
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01d1cdc8
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0
;   core_box.cpp_FUN_0041a840
;   core_charactr.cpp_CCharacter_renderCharacter_FUN_00424bd0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;   core_morph.cpp_CMorph_render_FUN_005b76a0
;   core_morph.cpp_CMorph_updateModelFromDeformable_FUN_005b7150
;   core_morph.cpp_CMorph_updateModelFromKeyframed_FUN_005b7190
;   core_motion.cpp_FUN_005042e0
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00415120
        ;   Label: core_biggs.cpp_CBiggs_renderOpaque_FUN_00415120
    PUSH EBP                            ; 00415121
    SUB ESP,0x30                        ; 00415122
    MOV EBX,dword ptr [ESP + 0x3c]      ; 00415125
    CMP dword ptr [EBX + 0x2568],0x0    ; 00415129
    JZ 0x0041513a                       ; 00415130
        ;   XREF to: 0041513a (CONDITIONAL_JUMP)  ; LAB_0041513a
    XOR EAX,EAX                         ; 00415132
    ADD ESP,0x30                        ; 00415134
    POP EBP                             ; 00415137
    POP EBX                             ; 00415138
    RET                                 ; 00415139
    PUSH EDI                            ; 0041513a
        ;   Label: LAB_0041513a
    PUSH ESI                            ; 0041513b
    PUSH EBX                            ; 0041513c
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 ; 0041513d
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00415142
    PUSH 0x0                            ; 00415145
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00415147
    PUSH EBX                            ; 0041514d
    LEA ESI,[ESP + 0x10]                ; 0041514e
    LEA EDI,[ESP + 0x28]                ; 00415152
    CALL dword ptr [EAX + 0x24]         ; 00415156
    MOV ECX,0x6                         ; 00415159
    ADD ESP,0x4                         ; 0041515e
    LEA EAX,[ESP + 0x24]                ; 00415161
    LEA ESI,[ESP + 0xc]                 ; 00415165
    PUSH EAX                            ; 00415169
    MOVSD.REP ES:EDI,ESI                ; 0041516a
    CALL core_box.cpp_FUN_0041a840      ; 0041516c
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a840()
    ADD ESP,0x8                         ; 00415171
    MOV EDI,EAX                         ; 00415174
    TEST EAX,EAX                        ; 00415176
    JZ 0x00415223                       ; 00415178
        ;   XREF to: 00415223 (CONDITIONAL_JUMP)  ; LAB_00415223
    MOV ECX,dword ptr [EBX + 0x10c74]   ; 0041517e
    MOV dword ptr [EBX + 0x2828],0x1    ; 00415184
    TEST ECX,ECX                        ; 0041518e
    JZ 0x00415236                       ; 00415190
        ;   XREF to: 00415236 (CONDITIONAL_JUMP)  ; LAB_00415236
    PUSH 0x0                            ; 00415196
    LEA EAX,[EBX + 0x2b4]               ; 00415198
    PUSH EAX                            ; 0041519e
    PUSH 0x0                            ; 0041519f
    LEA ESI,[EBX + 0x10c7c]             ; 004151a1
    PUSH ESI                            ; 004151a7
    CALL core_morph.cpp_CMorph_updateModelFromDeformable_FUN_005b7150 ; 004151a8
        ;   XREF to: 005b7150 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromDeformable_FUN_005b7150(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr, int part_index)
    ADD ESP,0x10                        ; 004151ad
    PUSH 0x0                            ; 004151b0
    PUSH 0x0                            ; 004151b2
    LEA EAX,[EBX + 0x10af8]             ; 004151b4
    PUSH EAX                            ; 004151ba
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 004151bb
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004151c0
    PUSH EAX                            ; 004151c3
    PUSH 0x1                            ; 004151c4
    PUSH ESI                            ; 004151c6
    CALL core_morph.cpp_CMorph_updateModelFromKeyframed_FUN_005b7190 ; 004151c7
        ;   XREF to: 005b7190 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromKeyframed_FUN_005b7190(CMorph * this_ptr, int model_index, CKeyFramedModel * model_ptr, int frame_index, ...)
    FLD float ptr [EBX + 0x10c78]       ; 004151cc
    FDIV float ptr [0x005f3510]         ; 004151d2 | DAT_005f3510
    ADD ESP,0x14                        ; 004151d8
    SUB ESP,0x4                         ; 004151db
    FSTP float ptr [ESP]                ; 004151de
    PUSH ESI                            ; 004151e1
    CALL core_morph.cpp_CMorph_render_FUN_005b76a0 ; 004151e2
        ;   XREF to: 005b76a0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_render_FUN_005b76a0(CMorph * this_ptr, float morph_t)
    ADD ESP,0x8                         ; 004151e7
    CMP dword ptr [0x01d1cdc8],0x0      ; 004151ea | DAT_01d1cdc8
        ;   Label: LAB_004151ea
    JZ 0x00415223                       ; 004151f1
        ;   XREF to: 00415223 (CONDITIONAL_JUMP)  ; LAB_00415223
    MOV EBP,dword ptr [0x0060b280]      ; 004151f3 | DAT_0060b280
    PUSH EBP                            ; 004151f9 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 004151fa
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004151ff
    TEST EAX,EAX                        ; 00415202
    JNZ 0x00415223                      ; 00415204
        ;   XREF to: 00415223 (CONDITIONAL_JUMP)  ; LAB_00415223
    PUSH EBX                            ; 00415206
    LEA EAX,[EBX + 0x2b4]               ; 00415207
    PUSH EAX                            ; 0041520d
    CALL core_motion.cpp_FUN_005042e0   ; 0041520e
        ;   XREF to: 005042e0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_FUN_005042e0(CMotionController * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00415213
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00415216
    PUSH EBX                            ; 0041521c
    CALL dword ptr [EAX + 0x60]         ; 0041521d
    ADD ESP,0x4                         ; 00415220
    PUSH EBX                            ; 00415223
        ;   Label: LAB_00415223
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 00415224
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00415229
    MOV EAX,EDI                         ; 0041522c
    POP ESI                             ; 0041522e
    POP EDI                             ; 0041522f
    ADD ESP,0x30                        ; 00415230
    POP EBP                             ; 00415233
    POP EBX                             ; 00415234
    RET                                 ; 00415235
    PUSH EBX                            ; 00415236
        ;   Label: LAB_00415236
    CALL core_charactr.cpp_CCharacter_renderCharacter_FUN_00424bd0 ; 00415237
        ;   XREF to: 00424bd0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_renderCharacter_FUN_00424bd0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0041523c
    JMP 0x004151ea                      ; 0041523f
        ;   XREF to: 004151ea (UNCONDITIONAL_JUMP)  ; LAB_004151ea

