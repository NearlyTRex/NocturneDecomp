; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_trash_cpp_CTrash_renderOpaque_FUN_005df550(CTrash *this_ptr)
;
; Parameters:
; CTrash *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;   UVector3 g_ZeroVector
;
; Called Functions:
;   core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005df550
        ;   Label: core_trash.cpp_CTrash_renderOpaque_FUN_005df550
    PUSH ESI                            ; 005df551
    PUSH EBP                            ; 005df552
    SUB ESP,0x30                        ; 005df553
    MOV EBX,dword ptr [ESP + 0x40]      ; 005df556
    PUSH EBX                            ; 005df55a
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 005df55b
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 005df560
    MOV ESI,ESP                         ; 005df563
    PUSH ESI                            ; 005df565
    MOV EAX,dword ptr [EBX + 0x154]     ; 005df566
    PUSH EBX                            ; 005df56c
    CALL dword ptr [EAX + 0x14]         ; 005df56d
    ADD ESP,0x8                         ; 005df570
    PUSH EAX                            ; 005df573
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 005df574
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 005df579
    MOV ESI,EAX                         ; 005df57c
    TEST EAX,EAX                        ; 005df57e
    JNZ 0x005df594                      ; 005df580
        ;   XREF to: 005df594 (CONDITIONAL_JUMP)  ; LAB_005df594
    PUSH EBX                            ; 005df582
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 005df583
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005df588
    MOV EAX,ESI                         ; 005df58b
    ADD ESP,0x30                        ; 005df58d
    POP EBP                             ; 005df590
    POP ESI                             ; 005df591
    POP EBX                             ; 005df592
    RET                                 ; 005df593
    PUSH EDI                            ; 005df594
        ;   Label: LAB_005df594
    MOV EAX,dword ptr [EBX + 0x310]     ; 005df595
    MOV dword ptr [ESP + 0x20],EAX      ; 005df59b
    LEA EAX,[ESP + 0x1c]                ; 005df59f
    PUSH EAX                            ; 005df5a3
    LEA EAX,[ESP + 0x2c]                ; 005df5a4
    PUSH EAX                            ; 005df5a8
    XOR EDX,EDX                         ; 005df5a9
    PUSH EBX                            ; 005df5ab
    MOV dword ptr [ESP + 0x28],EDX      ; 005df5ac
    MOV dword ptr [ESP + 0x30],EDX      ; 005df5b0
    CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0 ; 005df5b4
        ;   XREF to: 00408ea0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0(CDemonActor * this_ptr, CVector3f * output_vector, CVector3f * input_vector)
    ADD ESP,0xc                         ; 005df5b9
    LEA EAX,[ESP + 0x28]                ; 005df5bc
    PUSH EAX                            ; 005df5c0
    PUSH 0x3f87558                      ; 005df5c1 | g_ZeroVector
    MOV EDI,dword ptr [0x006703ec]      ; 005df5c6 | g_CDemonRendererPtr2
    PUSH EDI                            ; 005df5cc | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 005df5cd
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    ADD ESP,0xc                         ; 005df5d2
    PUSH -0x1                           ; 005df5d5
    LEA EAX,[EBX + 0x158]               ; 005df5d7
    PUSH 0x0                            ; 005df5dd
    PUSH EAX                            ; 005df5df
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 005df5e0
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 005df5e5
    MOV EBP,dword ptr [0x006703ec]      ; 005df5e8 | g_CDemonRendererPtr2
    PUSH EBP                            ; 005df5ee | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640 ; 005df5ef
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 005df5f4
    POP EDI                             ; 005df5f7
    PUSH EBX                            ; 005df5f8
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 005df5f9
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005df5fe
    MOV EAX,ESI                         ; 005df601
    ADD ESP,0x30                        ; 005df603
    POP EBP                             ; 005df606
    POP ESI                             ; 005df607
    POP EBX                             ; 005df608
    RET                                 ; 005df609

