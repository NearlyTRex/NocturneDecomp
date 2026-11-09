; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_moloch_cpp_FUN_005020c0(CCharacter *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005fa3d8
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01d1cdc8
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0
;   core_box.cpp_FUN_0041a840
;   core_charactr.cpp_FUN_00424bd0
;   core_morph.cpp_CMorph_render_FUN_005b76a0
;   core_morph.cpp_CMorph_updateModelFromDeformable_FUN_005b7150
;   core_motion.cpp_FUN_005042e0
;   engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0046bc80
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005020c0
        ;   Label: core_moloch.cpp_FUN_005020c0
    SUB ESP,0x30                        ; 005020c1
    MOV EBX,dword ptr [ESP + 0x38]      ; 005020c4
    MOV EDX,dword ptr [0x0060b280]      ; 005020c8 | DAT_0060b280
    PUSH EDX                            ; 005020ce | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0046bc80 ; 005020cf
        ;   XREF to: 0046bc80 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0046bc80(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 005020d4
    TEST EAX,EAX                        ; 005020d7
    JZ 0x005021db                       ; 005020d9
        ;   XREF to: 005021db (CONDITIONAL_JUMP)  ; LAB_005021db
    CMP dword ptr [EBX + 0x2568],0x0    ; 005020df
        ;   Label: LAB_005020df
    JNZ 0x005021e6                      ; 005020e6
        ;   XREF to: 005021e6 (CONDITIONAL_JUMP)  ; LAB_005021e6
    PUSH EDI                            ; 005020ec
    PUSH ESI                            ; 005020ed
    PUSH EBX                            ; 005020ee
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 ; 005020ef
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005020f4
    PUSH 0x0                            ; 005020f7
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005020f9
    PUSH EBX                            ; 005020ff
    LEA ESI,[ESP + 0x10]                ; 00502100
    LEA EDI,[ESP + 0x28]                ; 00502104
    CALL dword ptr [EAX + 0x24]         ; 00502108
    MOV ECX,0x6                         ; 0050210b
    ADD ESP,0x4                         ; 00502110
    LEA EAX,[ESP + 0x24]                ; 00502113
    LEA ESI,[ESP + 0xc]                 ; 00502117
    PUSH EAX                            ; 0050211b
    MOVSD.REP ES:EDI,ESI                ; 0050211c
    CALL core_box.cpp_FUN_0041a840      ; 0050211e
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a840()
    ADD ESP,0x8                         ; 00502123
    MOV EDI,EAX                         ; 00502126
    TEST EAX,EAX                        ; 00502128
    JZ 0x005021c9                       ; 0050212a
        ;   XREF to: 005021c9 (CONDITIONAL_JUMP)  ; LAB_005021c9
    MOV ESI,dword ptr [EBX + 0x278f8]   ; 00502130
    MOV dword ptr [EBX + 0x2828],0x1    ; 00502136
    TEST ESI,ESI                        ; 00502140
    JZ 0x005021ed                       ; 00502142
        ;   XREF to: 005021ed (CONDITIONAL_JUMP)  ; LAB_005021ed
    PUSH 0x0                            ; 00502148
    LEA EAX,[EBX + 0x2b4]               ; 0050214a
    PUSH EAX                            ; 00502150
    PUSH 0x0                            ; 00502151
    LEA ESI,[EBX + 0x279c8]             ; 00502153
    PUSH ESI                            ; 00502159
    CALL core_morph.cpp_CMorph_updateModelFromDeformable_FUN_005b7150 ; 0050215a
        ;   XREF to: 005b7150 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromDeformable_FUN_005b7150(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr, int part_index)
    ADD ESP,0x10                        ; 0050215f
    PUSH 0x0                            ; 00502162
    LEA EAX,[EBX + 0x25640]             ; 00502164
    PUSH EAX                            ; 0050216a
    PUSH 0x1                            ; 0050216b
    PUSH ESI                            ; 0050216d
    CALL core_morph.cpp_CMorph_updateModelFromDeformable_FUN_005b7150 ; 0050216e
        ;   XREF to: 005b7150 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromDeformable_FUN_005b7150(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr, int part_index)
    FLD float ptr [EBX + 0x278fc]       ; 00502173
    FDIV float ptr [0x005fa3d8]         ; 00502179 | DAT_005fa3d8
    ADD ESP,0x10                        ; 0050217f
    SUB ESP,0x4                         ; 00502182
    FSTP float ptr [ESP]                ; 00502185
    PUSH ESI                            ; 00502188
    CALL core_morph.cpp_CMorph_render_FUN_005b76a0 ; 00502189
        ;   XREF to: 005b76a0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_render_FUN_005b76a0(CMorph * this_ptr, float morph_t)
    ADD ESP,0x8                         ; 0050218e
    CMP dword ptr [0x01d1cdc8],0x0      ; 00502191 | DAT_01d1cdc8
        ;   Label: LAB_00502191
    JZ 0x005021c9                       ; 00502198
        ;   XREF to: 005021c9 (CONDITIONAL_JUMP)  ; LAB_005021c9
    MOV EAX,[0x0060b280]                ; 0050219a | DAT_0060b280
    PUSH EAX                            ; 0050219f | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 005021a0
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 005021a5
    TEST EAX,EAX                        ; 005021a8
    JNZ 0x005021c9                      ; 005021aa
        ;   XREF to: 005021c9 (CONDITIONAL_JUMP)  ; LAB_005021c9
    PUSH EBX                            ; 005021ac
    LEA EAX,[EBX + 0x2b4]               ; 005021ad
    PUSH EAX                            ; 005021b3
    CALL core_motion.cpp_FUN_005042e0   ; 005021b4
        ;   XREF to: 005042e0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_FUN_005042e0(CMotionController * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005021b9
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005021bc
    PUSH EBX                            ; 005021c2
    CALL dword ptr [EAX + 0x60]         ; 005021c3
    ADD ESP,0x4                         ; 005021c6
    PUSH EBX                            ; 005021c9
        ;   Label: LAB_005021c9
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 005021ca
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005021cf
    MOV EAX,EDI                         ; 005021d2
    POP ESI                             ; 005021d4
    POP EDI                             ; 005021d5
    ADD ESP,0x30                        ; 005021d6
    POP EBX                             ; 005021d9
    RET                                 ; 005021da
    MOV dword ptr [EBX + 0x2828],EAX    ; 005021db
        ;   Label: LAB_005021db
    JMP 0x005020df                      ; 005021e1
        ;   XREF to: 005020df (UNCONDITIONAL_JUMP)  ; LAB_005020df
    XOR EAX,EAX                         ; 005021e6
        ;   Label: LAB_005021e6
    ADD ESP,0x30                        ; 005021e8
    POP EBX                             ; 005021eb
    RET                                 ; 005021ec
    PUSH EBX                            ; 005021ed
        ;   Label: LAB_005021ed
    CALL core_charactr.cpp_FUN_00424bd0 ; 005021ee
        ;   XREF to: 00424bd0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00424bd0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005021f3
    JMP 0x00502191                      ; 005021f6
        ;   XREF to: 00502191 (UNCONDITIONAL_JUMP)  ; LAB_00502191

