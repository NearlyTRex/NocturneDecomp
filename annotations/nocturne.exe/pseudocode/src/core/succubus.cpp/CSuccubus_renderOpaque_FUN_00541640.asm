; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_succubus_cpp_CSuccubus_renderOpaque_FUN_00541640(CSuccubus *this_ptr)
;
; Parameters:
; CSuccubus *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x24]:1  local_24
;
; Referenced Globals:
;   float FLOAT_005a28d8 = 4
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01cd4318
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;   core_charactr.cpp_CCharacter_renderCharacter_FUN_00425c20
;   core_cloth.cpp_CClothList_render_FUN_004385a0
;   core_morph.cpp_CMorph_render_FUN_004e0820
;   core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004e0340
;   core_morph.cpp_CMorph_updateModelFromKeyframed_FUN_004e0380
;   core_motion.cpp_CMotionController_render_FUN_004e22b0
;   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0
;   engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_004613b0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00541640
        ;   Label: core_succubus.cpp_CSuccubus_renderOpaque_FUN_00541640
    PUSH EBP                            ; 00541641
    SUB ESP,0x1c                        ; 00541642
    MOV EBX,dword ptr [ESP + 0x28]      ; 00541645
    MOV EDX,dword ptr [0x005ae704]      ; 00541649 | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 0054164f | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_004613b0 ; 00541650
        ;   XREF to: 004613b0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_004613b0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00541655
    MOV EBP,EAX                         ; 00541658
    TEST EAX,EAX                        ; 0054165a
    JZ 0x00541726                       ; 0054165c
        ;   XREF to: 00541726 (CONDITIONAL_JUMP)  ; LAB_00541726
    CMP dword ptr [EBX + 0x2404],0x0    ; 00541662
        ;   Label: LAB_00541662
    JNZ 0x00541731                      ; 00541669
        ;   XREF to: 00541731 (CONDITIONAL_JUMP)  ; LAB_00541731
    PUSH EDI                            ; 0054166f
    PUSH ESI                            ; 00541670
    PUSH EBX                            ; 00541671
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 00541672
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20(CDemonActor * actor)
    ADD ESP,0x4                         ; 00541677
    PUSH 0x0                            ; 0054167a
    LEA EAX,[ESP + 0xc]                 ; 0054167c
    PUSH EAX                            ; 00541680
    MOV ESI,dword ptr [EBX + 0x14c]     ; 00541681
    PUSH EBX                            ; 00541687
    CALL dword ptr [ESI + 0x14]         ; 00541688
    ADD ESP,0x8                         ; 0054168b
    PUSH EAX                            ; 0054168e
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 0054168f
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(CBoundingBox3D * this_ptr)
    ADD ESP,0x8                         ; 00541694
    MOV dword ptr [ESP + 0x20],EAX      ; 00541697
    TEST EAX,EAX                        ; 0054169b
    JZ 0x00541711                       ; 0054169d
        ;   XREF to: 00541711 (CONDITIONAL_JUMP)  ; LAB_00541711
    LEA EDI,[EBX + 0xbd24]              ; 0054169f
    MOV dword ptr [EBX + 0x2618],0x1    ; 005416a5
    TEST EBP,EBP                        ; 005416af
    JZ 0x00541739                       ; 005416b1
        ;   XREF to: 00541739 (CONDITIONAL_JUMP)  ; LAB_00541739
    PUSH 0x0                            ; 005416b7
    PUSH 0x1                            ; 005416b9
    PUSH -0x1                           ; 005416bb
    PUSH -0x1                           ; 005416bd
    PUSH EDI                            ; 005416bf
    CALL core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0 ; 005416c0
        ;   XREF to: 0051d9d0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0(CDeformableModelInstance * this_ptr, int lod_index, uint render_flags, int lighting_mode, ...)
    ADD ESP,0x14                        ; 005416c5
    PUSH EDI                            ; 005416c8
    LEA EAX,[EBX + 0xdfd8]              ; 005416c9
    PUSH EAX                            ; 005416cf
    CALL core_cloth.cpp_CClothList_render_FUN_004385a0 ; 005416d0
        ;   XREF to: 004385a0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_render_FUN_004385a0(CClothList * this_ptr, CDeformableModelInstance * model_ptr)
    ADD ESP,0x8                         ; 005416d5
        ;   Label: LAB_005416d5
    CMP dword ptr [0x01cd4318],0x0      ; 005416d8 | DAT_01cd4318
        ;   Label: LAB_005416d8
    JZ 0x00541711                       ; 005416df
        ;   XREF to: 00541711 (CONDITIONAL_JUMP)  ; LAB_00541711
    MOV EDX,dword ptr [0x005ae704]      ; 005416e1 | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 005416e7 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 005416e8
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 005416ed
    TEST EAX,EAX                        ; 005416f0
    JNZ 0x00541711                      ; 005416f2
        ;   XREF to: 00541711 (CONDITIONAL_JUMP)  ; LAB_00541711
    PUSH EBX                            ; 005416f4
    LEA EAX,[EBX + 0x150]               ; 005416f5
    PUSH EAX                            ; 005416fb
    CALL core_motion.cpp_CMotionController_render_FUN_004e22b0 ; 005416fc
        ;   XREF to: 004e22b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_render_FUN_004e22b0(CMotionController * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00541701
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00541704
    PUSH EBX                            ; 0054170a
    CALL dword ptr [EAX + 0x50]         ; 0054170b
    ADD ESP,0x4                         ; 0054170e
    PUSH EBX                            ; 00541711
        ;   Label: LAB_00541711
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 00541712
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00541717
    MOV EAX,dword ptr [ESP + 0x20]      ; 0054171a
    POP ESI                             ; 0054171e
    POP EDI                             ; 0054171f
    ADD ESP,0x1c                        ; 00541720
    POP EBP                             ; 00541723
    POP EBX                             ; 00541724
    RET                                 ; 00541725
    MOV dword ptr [EBX + 0x2618],EAX    ; 00541726
        ;   Label: LAB_00541726
    JMP 0x00541662                      ; 0054172c
        ;   XREF to: 00541662 (UNCONDITIONAL_JUMP)  ; LAB_00541662
    XOR EAX,EAX                         ; 00541731
        ;   Label: LAB_00541731
    ADD ESP,0x1c                        ; 00541733
    POP EBP                             ; 00541736
    POP EBX                             ; 00541737
    RET                                 ; 00541738
    CMP dword ptr [EBX + 0xe19c],0x0    ; 00541739
        ;   Label: LAB_00541739
    JZ 0x005417ae                       ; 00541740
        ;   XREF to: 005417ae (CONDITIONAL_JUMP)  ; LAB_005417ae
    PUSH EBP                            ; 00541742
    LEA EAX,[EBX + 0x150]               ; 00541743
    PUSH EAX                            ; 00541749
    PUSH EBP                            ; 0054174a
    LEA ESI,[EBX + 0xe1a4]              ; 0054174b
    PUSH ESI                            ; 00541751
    CALL core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004e0340 ; 00541752
        ;   XREF to: 004e0340 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004e0340(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr, int part_index)
    ADD ESP,0x10                        ; 00541757
    PUSH EBP                            ; 0054175a
    PUSH EDI                            ; 0054175b
    PUSH 0x1                            ; 0054175c
    PUSH ESI                            ; 0054175e
    CALL core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004e0340 ; 0054175f
        ;   XREF to: 004e0340 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004e0340(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr, int part_index)
    ADD ESP,0x10                        ; 00541764
    PUSH 0x1                            ; 00541767
    PUSH EBP                            ; 00541769
    MOV EDI,dword ptr [EBX + 0xe16c]    ; 0054176a
    PUSH EDI                            ; 00541770
    PUSH 0x1                            ; 00541771
    PUSH ESI                            ; 00541773
    CALL core_morph.cpp_CMorph_updateModelFromKeyframed_FUN_004e0380 ; 00541774
        ;   XREF to: 004e0380 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromKeyframed_FUN_004e0380(CMorph * this_ptr, int model_index, CKeyFramedModel * model_ptr, int frame_index, ...)
    ADD ESP,0x14                        ; 00541779
    PUSH 0x2                            ; 0054177c
    PUSH EBP                            ; 0054177e
    MOV EBP,dword ptr [EBX + 0xe16c]    ; 0054177f
    PUSH EBP                            ; 00541785
    PUSH 0x1                            ; 00541786
    PUSH ESI                            ; 00541788
    CALL core_morph.cpp_CMorph_updateModelFromKeyframed_FUN_004e0380 ; 00541789
        ;   XREF to: 004e0380 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromKeyframed_FUN_004e0380(CMorph * this_ptr, int model_index, CKeyFramedModel * model_ptr, int frame_index, ...)
    FLD float ptr [EBX + 0xe1a0]        ; 0054178e
    FDIV float ptr [0x005a28d8]         ; 00541794 | FLOAT_005a28d8
    ADD ESP,0x14                        ; 0054179a
    SUB ESP,0x4                         ; 0054179d
    FSTP float ptr [ESP]                ; 005417a0
    PUSH ESI                            ; 005417a3
    CALL core_morph.cpp_CMorph_render_FUN_004e0820 ; 005417a4
        ;   XREF to: 004e0820 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_render_FUN_004e0820(CMorph * this_ptr, float morph_t)
    JMP 0x005416d5                      ; 005417a9
        ;   XREF to: 005416d5 (UNCONDITIONAL_JUMP)  ; LAB_005416d5
    PUSH EBX                            ; 005417ae
        ;   Label: LAB_005417ae
    CALL core_charactr.cpp_CCharacter_renderCharacter_FUN_00425c20 ; 005417af
        ;   XREF to: 00425c20 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_renderCharacter_FUN_00425c20(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005417b4
    JMP 0x005416d8                      ; 005417b7
        ;   XREF to: 005416d8 (UNCONDITIONAL_JUMP)  ; LAB_005416d8

