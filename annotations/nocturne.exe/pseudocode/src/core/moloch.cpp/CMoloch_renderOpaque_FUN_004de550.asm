; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_moloch_cpp_CMoloch_renderOpaque_FUN_004de550(CCharacter *param_1)
;
; Local Variables:
; undefined        Stack[-0x1c]:1  local_1c
;
; Referenced Globals:
;   undefined4 DAT_005a0ab8
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01cd4318
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;   core_charactr.cpp_CCharacter_renderCharacter_FUN_00425c20
;   core_morph.cpp_CMorph_render_FUN_004e0820
;   core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004e0340
;   core_motion.cpp_CMotionController_render_FUN_004e22b0
;   engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_004613b0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004de550
        ;   Label: core_moloch.cpp_CMoloch_renderOpaque_FUN_004de550
    SUB ESP,0x18                        ; 004de551
    MOV EBX,dword ptr [ESP + 0x20]      ; 004de554
    MOV EDX,dword ptr [0x005ae704]      ; 004de558 | DAT_005ae704
    PUSH EDX                            ; 004de55e | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_004613b0 ; 004de55f
        ;   XREF to: 004613b0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_004613b0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004de564
    TEST EAX,EAX                        ; 004de567
    JZ 0x004de659                       ; 004de569
        ;   XREF to: 004de659 (CONDITIONAL_JUMP)  ; LAB_004de659
    CMP dword ptr [EBX + 0x2404],0x0    ; 004de56f
        ;   Label: LAB_004de56f
    JNZ 0x004de664                      ; 004de576
        ;   XREF to: 004de664 (CONDITIONAL_JUMP)  ; LAB_004de664
    PUSH EDI                            ; 004de57c
    PUSH ESI                            ; 004de57d
    PUSH EBX                            ; 004de57e
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 004de57f
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20(CDemonActor * actor)
    ADD ESP,0x4                         ; 004de584
    PUSH 0x0                            ; 004de587
    LEA EAX,[ESP + 0xc]                 ; 004de589
    PUSH EAX                            ; 004de58d
    MOV ESI,dword ptr [EBX + 0x14c]     ; 004de58e
    PUSH EBX                            ; 004de594
    CALL dword ptr [ESI + 0x14]         ; 004de595
    ADD ESP,0x8                         ; 004de598
    PUSH EAX                            ; 004de59b
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 004de59c
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(CBoundingBox3D * this_ptr)
    ADD ESP,0x8                         ; 004de5a1
    MOV EDI,EAX                         ; 004de5a4
    TEST EAX,EAX                        ; 004de5a6
    JZ 0x004de647                       ; 004de5a8
        ;   XREF to: 004de647 (CONDITIONAL_JUMP)  ; LAB_004de647
    MOV ESI,dword ptr [EBX + 0x21cf4]   ; 004de5ae
    MOV dword ptr [EBX + 0x2618],0x1    ; 004de5b4
    TEST ESI,ESI                        ; 004de5be
    JZ 0x004de66b                       ; 004de5c0
        ;   XREF to: 004de66b (CONDITIONAL_JUMP)  ; LAB_004de66b
    PUSH 0x0                            ; 004de5c6
    LEA EAX,[EBX + 0x150]               ; 004de5c8
    PUSH EAX                            ; 004de5ce
    PUSH 0x0                            ; 004de5cf
    LEA ESI,[EBX + 0x21dc4]             ; 004de5d1
    PUSH ESI                            ; 004de5d7
    CALL core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004e0340 ; 004de5d8
        ;   XREF to: 004e0340 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004e0340(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr, int part_index)
    ADD ESP,0x10                        ; 004de5dd
    PUSH 0x0                            ; 004de5e0
    LEA EAX,[EBX + 0x1fa3c]             ; 004de5e2
    PUSH EAX                            ; 004de5e8
    PUSH 0x1                            ; 004de5e9
    PUSH ESI                            ; 004de5eb
    CALL core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004e0340 ; 004de5ec
        ;   XREF to: 004e0340 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004e0340(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr, int part_index)
    FLD float ptr [EBX + 0x21cf8]       ; 004de5f1
    FDIV float ptr [0x005a0ab8]         ; 004de5f7 | DAT_005a0ab8
    ADD ESP,0x10                        ; 004de5fd
    SUB ESP,0x4                         ; 004de600
    FSTP float ptr [ESP]                ; 004de603
    PUSH ESI                            ; 004de606
    CALL core_morph.cpp_CMorph_render_FUN_004e0820 ; 004de607
        ;   XREF to: 004e0820 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_render_FUN_004e0820(CMorph * this_ptr, float morph_t)
    ADD ESP,0x8                         ; 004de60c
    CMP dword ptr [0x01cd4318],0x0      ; 004de60f | DAT_01cd4318
        ;   Label: LAB_004de60f
    JZ 0x004de647                       ; 004de616
        ;   XREF to: 004de647 (CONDITIONAL_JUMP)  ; LAB_004de647
    MOV EAX,[0x005ae704]                ; 004de618 | DAT_005ae704
    PUSH EAX                            ; 004de61d | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 004de61e
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004de623
    TEST EAX,EAX                        ; 004de626
    JNZ 0x004de647                      ; 004de628
        ;   XREF to: 004de647 (CONDITIONAL_JUMP)  ; LAB_004de647
    PUSH EBX                            ; 004de62a
    LEA EAX,[EBX + 0x150]               ; 004de62b
    PUSH EAX                            ; 004de631
    CALL core_motion.cpp_CMotionController_render_FUN_004e22b0 ; 004de632
        ;   XREF to: 004e22b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_render_FUN_004e22b0(CMotionController * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004de637
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004de63a
    PUSH EBX                            ; 004de640
    CALL dword ptr [EAX + 0x50]         ; 004de641
    ADD ESP,0x4                         ; 004de644
    PUSH EBX                            ; 004de647
        ;   Label: LAB_004de647
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 004de648
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004de64d
    MOV EAX,EDI                         ; 004de650
    POP ESI                             ; 004de652
    POP EDI                             ; 004de653
    ADD ESP,0x18                        ; 004de654
    POP EBX                             ; 004de657
    RET                                 ; 004de658
    MOV dword ptr [EBX + 0x2618],EAX    ; 004de659
        ;   Label: LAB_004de659
    JMP 0x004de56f                      ; 004de65f
        ;   XREF to: 004de56f (UNCONDITIONAL_JUMP)  ; LAB_004de56f
    XOR EAX,EAX                         ; 004de664
        ;   Label: LAB_004de664
    ADD ESP,0x18                        ; 004de666
    POP EBX                             ; 004de669
    RET                                 ; 004de66a
    PUSH EBX                            ; 004de66b
        ;   Label: LAB_004de66b
    CALL core_charactr.cpp_CCharacter_renderCharacter_FUN_00425c20 ; 004de66c
        ;   XREF to: 00425c20 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_renderCharacter_FUN_00425c20(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004de671
    JMP 0x004de60f                      ; 004de674
        ;   XREF to: 004de60f (UNCONDITIONAL_JUMP)  ; LAB_004de60f

