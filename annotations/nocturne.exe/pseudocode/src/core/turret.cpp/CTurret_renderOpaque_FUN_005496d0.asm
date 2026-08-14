; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_turret_cpp_CTurret_renderOpaque_FUN_005496d0(CTurret *this_ptr)
;
; Parameters:
; CTurret *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
;   core_turret.cpp_CTurret_getCurFrame_FUN_00549ef0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005496d0
        ;   Label: core_turret.cpp_CTurret_renderOpaque_FUN_005496d0
    PUSH ESI                            ; 005496d1
    PUSH EBP                            ; 005496d2
    SUB ESP,0x1c                        ; 005496d3
    MOV EBX,dword ptr [ESP + 0x2c]      ; 005496d6
    PUSH EBX                            ; 005496da
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 005496db
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005496e0
    PUSH 0x0                            ; 005496e3
    LEA ESI,[ESP + 0x4]                 ; 005496e5
    PUSH ESI                            ; 005496e9
    MOV EAX,dword ptr [EBX + 0x14c]     ; 005496ea
    PUSH EBX                            ; 005496f0
    CALL dword ptr [EAX + 0x14]         ; 005496f1
    ADD ESP,0x8                         ; 005496f4
    PUSH EAX                            ; 005496f7
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 005496f8
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(CBoundingBox3D * this_ptr)
    ADD ESP,0x8                         ; 005496fd
    MOV ESI,EAX                         ; 00549700
    TEST EAX,EAX                        ; 00549702
    JZ 0x00549730                       ; 00549704
        ;   XREF to: 00549730 (CONDITIONAL_JUMP)  ; LAB_00549730
    PUSH -0x1                           ; 00549706
    PUSH 0x0                            ; 00549708
    PUSH EBX                            ; 0054970a
    CALL core_turret.cpp_CTurret_getCurFrame_FUN_00549ef0 ; 0054970b
        ;   XREF to: 00549ef0 (UNCONDITIONAL_CALL)  ; float core_turret.cpp_CTurret_getCurFrame_FUN_00549ef0(CTurret * this_ptr, int model_index)
    MOV dword ptr [ESP + 0x24],EAX      ; 00549710
    FLD float ptr [ESP + 0x24]          ; 00549714
    ADD ESP,0x8                         ; 00549718
    SUB ESP,0x4                         ; 0054971b
    LEA EAX,[EBX + 0x150]               ; 0054971e
    FSTP float ptr [ESP]                ; 00549724
    PUSH EAX                            ; 00549727
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 00549728
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0054972d
    PUSH EBX                            ; 00549730
        ;   Label: LAB_00549730
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 00549731
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00549736
    TEST ESI,ESI                        ; 00549739
    JNZ 0x00549746                      ; 0054973b
        ;   XREF to: 00549746 (CONDITIONAL_JUMP)  ; LAB_00549746
    MOV EAX,ESI                         ; 0054973d
        ;   Label: LAB_0054973d
    ADD ESP,0x1c                        ; 0054973f
    POP EBP                             ; 00549742
    POP ESI                             ; 00549743
    POP EBX                             ; 00549744
    RET                                 ; 00549745
    LEA EAX,[EBX + 0x57c]               ; 00549746
        ;   Label: LAB_00549746
    PUSH EAX                            ; 0054974c
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 0054974d
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(CKeyFramedModelInstance * this_ptr)
    MOV EDX,dword ptr [EAX + 0x110]     ; 00549752
    ADD ESP,0x4                         ; 00549758
    CMP EDX,0x1                         ; 0054975b
    JL 0x0054973d                       ; 0054975e
        ;   XREF to: 0054973d (CONDITIONAL_JUMP)  ; LAB_0054973d
    PUSH EDI                            ; 00549760
    LEA EAX,[EBX + 0x20]                ; 00549761
    PUSH EAX                            ; 00549764
    MOV ECX,dword ptr [0x005ae704]      ; 00549765 | g_CDemonRenderer_PTR_005ae704
    PUSH ECX                            ; 0054976b | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 0054976c
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00549771
    PUSH 0x0                            ; 00549774
    LEA EAX,[EBX + 0x570]               ; 00549776
    PUSH EAX                            ; 0054977c
    MOV EDI,dword ptr [0x005ae704]      ; 0054977d | g_CDemonRenderer_PTR_005ae704
    PUSH EDI                            ; 00549783 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 00549784
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    ADD ESP,0xc                         ; 00549789
    PUSH -0x1                           ; 0054978c
    PUSH 0x1                            ; 0054978e
    PUSH EBX                            ; 00549790
    CALL core_turret.cpp_CTurret_getCurFrame_FUN_00549ef0 ; 00549791
        ;   XREF to: 00549ef0 (UNCONDITIONAL_CALL)  ; float core_turret.cpp_CTurret_getCurFrame_FUN_00549ef0(CTurret * this_ptr, int model_index)
    MOV dword ptr [ESP + 0x28],EAX      ; 00549796
    FLD float ptr [ESP + 0x28]          ; 0054979a
    ADD ESP,0x8                         ; 0054979e
    SUB ESP,0x4                         ; 005497a1
    ADD EBX,0x57c                       ; 005497a4
    FSTP float ptr [ESP]                ; 005497aa
    PUSH EBX                            ; 005497ad
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 005497ae
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 005497b3
    MOV EBP,dword ptr [0x005ae704]      ; 005497b6 | g_CDemonRenderer_PTR_005ae704
    PUSH EBP                            ; 005497bc | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 005497bd
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 005497c2
    POP EDI                             ; 005497c5
    MOV EAX,ESI                         ; 005497c6
    ADD ESP,0x1c                        ; 005497c8
    POP EBP                             ; 005497cb
    POP ESI                             ; 005497cc
    POP EBX                             ; 005497cd
    RET                                 ; 005497ce

