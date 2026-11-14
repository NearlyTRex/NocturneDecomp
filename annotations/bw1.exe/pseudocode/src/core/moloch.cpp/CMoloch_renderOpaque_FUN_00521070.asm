; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_moloch_cpp_CMoloch_renderOpaque_FUN_00521070(CMoloch *this_ptr)
;
; Parameters:
; CMoloch *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_00603ef8
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01d39d34
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0
;   core_box.cpp_FUN_004207b0
;   core_charactr.cpp_CCharacter_renderCharacter_FUN_0042e960
;   core_morph.cpp_CMorph_render_FUN_005237e0
;   core_morph.cpp_CMorph_updateModelFromDeformable_FUN_00523290
;   core_motion.cpp_FUN_005254b0
;   engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_00484180
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00521070
        ;   Label: core_moloch.cpp_CMoloch_renderOpaque_FUN_00521070
    SUB ESP,0x30                        ; 00521071
    MOV EBX,dword ptr [ESP + 0x38]      ; 00521074
    MOV EDX,dword ptr [0x00612560]      ; 00521078 | DAT_00612560
    PUSH EDX                            ; 0052107e | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_00484180 ; 0052107f
        ;   XREF to: 00484180 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_00484180(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00521084
    TEST EAX,EAX                        ; 00521087
    JZ 0x0052118b                       ; 00521089
        ;   XREF to: 0052118b (CONDITIONAL_JUMP)  ; LAB_0052118b
    CMP dword ptr [EBX + 0x24fc],0x0    ; 0052108f
        ;   Label: LAB_0052108f
    JNZ 0x00521196                      ; 00521096
        ;   XREF to: 00521196 (CONDITIONAL_JUMP)  ; LAB_00521196
    PUSH EDI                            ; 0052109c
    PUSH ESI                            ; 0052109d
    PUSH EBX                            ; 0052109e
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 ; 0052109f
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005210a4
    PUSH 0x0                            ; 005210a7
    MOV EAX,dword ptr [EBX + 0x154]     ; 005210a9
    PUSH EBX                            ; 005210af
    LEA ESI,[ESP + 0x10]                ; 005210b0
    LEA EDI,[ESP + 0x28]                ; 005210b4
    CALL dword ptr [EAX + 0x1c]         ; 005210b8
    MOV ECX,0x6                         ; 005210bb
    ADD ESP,0x4                         ; 005210c0
    LEA EAX,[ESP + 0x24]                ; 005210c3
    LEA ESI,[ESP + 0xc]                 ; 005210c7
    PUSH EAX                            ; 005210cb
    MOVSD.REP ES:EDI,ESI                ; 005210cc
    CALL core_box.cpp_FUN_004207b0      ; 005210ce
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_004207b0()
    ADD ESP,0x8                         ; 005210d3
    MOV EDI,EAX                         ; 005210d6
    TEST EAX,EAX                        ; 005210d8
    JZ 0x00521179                       ; 005210da
        ;   XREF to: 00521179 (CONDITIONAL_JUMP)  ; LAB_00521179
    MOV ESI,dword ptr [EBX + 0x22354]   ; 005210e0
    MOV dword ptr [EBX + 0x27bc],0x1    ; 005210e6
    TEST ESI,ESI                        ; 005210f0
    JZ 0x0052119d                       ; 005210f2
        ;   XREF to: 0052119d (CONDITIONAL_JUMP)  ; LAB_0052119d
    PUSH 0x0                            ; 005210f8
    LEA EAX,[EBX + 0x158]               ; 005210fa
    PUSH EAX                            ; 00521100
    PUSH 0x0                            ; 00521101
    LEA ESI,[EBX + 0x22424]             ; 00521103
    PUSH ESI                            ; 00521109
    CALL core_morph.cpp_CMorph_updateModelFromDeformable_FUN_00523290 ; 0052110a
        ;   XREF to: 00523290 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromDeformable_FUN_00523290(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr, int part_index)
    ADD ESP,0x10                        ; 0052110f
    PUSH 0x0                            ; 00521112
    LEA EAX,[EBX + 0x1ffac]             ; 00521114
    PUSH EAX                            ; 0052111a
    PUSH 0x1                            ; 0052111b
    PUSH ESI                            ; 0052111d
    CALL core_morph.cpp_CMorph_updateModelFromDeformable_FUN_00523290 ; 0052111e
        ;   XREF to: 00523290 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromDeformable_FUN_00523290(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr, int part_index)
    FLD float ptr [EBX + 0x22358]       ; 00521123
    FDIV float ptr [0x00603ef8]         ; 00521129 | DAT_00603ef8
    ADD ESP,0x10                        ; 0052112f
    SUB ESP,0x4                         ; 00521132
    FSTP float ptr [ESP]                ; 00521135
    PUSH ESI                            ; 00521138
    CALL core_morph.cpp_CMorph_render_FUN_005237e0 ; 00521139
        ;   XREF to: 005237e0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_render_FUN_005237e0(CMorph * this_ptr, float morph_t)
    ADD ESP,0x8                         ; 0052113e
    CMP dword ptr [0x01d39d34],0x0      ; 00521141 | DAT_01d39d34
        ;   Label: LAB_00521141
    JZ 0x00521179                       ; 00521148
        ;   XREF to: 00521179 (CONDITIONAL_JUMP)  ; LAB_00521179
    MOV EAX,[0x00612560]                ; 0052114a | DAT_00612560
    PUSH EAX                            ; 0052114f | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 00521150
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00521155
    TEST EAX,EAX                        ; 00521158
    JNZ 0x00521179                      ; 0052115a
        ;   XREF to: 00521179 (CONDITIONAL_JUMP)  ; LAB_00521179
    PUSH EBX                            ; 0052115c
    LEA EAX,[EBX + 0x158]               ; 0052115d
    PUSH EAX                            ; 00521163
    CALL core_motion.cpp_FUN_005254b0   ; 00521164
        ;   XREF to: 005254b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_FUN_005254b0(CMotionController * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00521169
    MOV EAX,dword ptr [EBX + 0x154]     ; 0052116c
    PUSH EBX                            ; 00521172
    CALL dword ptr [EAX + 0x58]         ; 00521173
    ADD ESP,0x4                         ; 00521176
    PUSH EBX                            ; 00521179
        ;   Label: LAB_00521179
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 0052117a
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0052117f
    MOV EAX,EDI                         ; 00521182
    POP ESI                             ; 00521184
    POP EDI                             ; 00521185
    ADD ESP,0x30                        ; 00521186
    POP EBX                             ; 00521189
    RET                                 ; 0052118a
    MOV dword ptr [EBX + 0x27bc],EAX    ; 0052118b
        ;   Label: LAB_0052118b
    JMP 0x0052108f                      ; 00521191
        ;   XREF to: 0052108f (UNCONDITIONAL_JUMP)  ; LAB_0052108f
    XOR EAX,EAX                         ; 00521196
        ;   Label: LAB_00521196
    ADD ESP,0x30                        ; 00521198
    POP EBX                             ; 0052119b
    RET                                 ; 0052119c
    PUSH EBX                            ; 0052119d
        ;   Label: LAB_0052119d
    CALL core_charactr.cpp_CCharacter_renderCharacter_FUN_0042e960 ; 0052119e
        ;   XREF to: 0042e960 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_renderCharacter_FUN_0042e960(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005211a3
    JMP 0x00521141                      ; 005211a6
        ;   XREF to: 00521141 (UNCONDITIONAL_JUMP)  ; LAB_00521141

