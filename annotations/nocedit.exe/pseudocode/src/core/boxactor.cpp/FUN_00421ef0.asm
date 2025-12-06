; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_boxactor.cpp_FUN_00421ef0()
;
; Local Variables:
; undefined1       Stack[-0x20]:1  local_20
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonRenderer g_CDemonRendererInstance
;   undefined4 DAT_0326ef00
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00421ef0
        ;   Label: core_boxactor.cpp_FUN_00421ef0
    PUSH EBP                            ; 00421ef1
    SUB ESP,0x18                        ; 00421ef2
    MOV EBX,dword ptr [ESP + 0x24]      ; 00421ef5
    LEA EAX,[EBX + 0x158]               ; 00421ef9
    PUSH EAX                            ; 00421eff
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 00421f00 | CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [EAX + 0x110]     ; 00421f05
    ADD ESP,0x4                         ; 00421f0b
    CMP EDX,0x1                         ; 00421f0e
    JGE 0x00421f1b                      ; 00421f11 | LAB_00421f1b
        ;   XREF to: 00421f1b (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 00421f13
    ADD ESP,0x18                        ; 00421f15
    POP EBP                             ; 00421f18
    POP EBX                             ; 00421f19
    RET                                 ; 00421f1a
    PUSH EDI                            ; 00421f1b
        ;   Label: LAB_00421f1b
    PUSH ESI                            ; 00421f1c
    LEA EAX,[EBX + 0x20]                ; 00421f1d
    PUSH EAX                            ; 00421f20
    MOV ECX,dword ptr [0x006703e8]      ; 00421f21 | CDemonRenderer * g_CDemonRendererPtr
    PUSH ECX                            ; 00421f27 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 00421f28 | void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00421f2d
    PUSH 0x0                            ; 00421f30
    LEA EAX,[EBX + 0x30]                ; 00421f32
    PUSH EAX                            ; 00421f35
    MOV ESI,dword ptr [0x006703e8]      ; 00421f36 | CDemonRenderer * g_CDemonRendererPtr
    PUSH ESI                            ; 00421f3c | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 00421f3d | void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00421f42
    LEA EAX,[ESP + 0x8]                 ; 00421f45
    PUSH EAX                            ; 00421f49
    MOV ESI,dword ptr [EBX + 0x154]     ; 00421f4a
    PUSH EBX                            ; 00421f50
    CALL dword ptr [ESI + 0x14]         ; 00421f51
    ADD ESP,0x8                         ; 00421f54
    PUSH EAX                            ; 00421f57
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 00421f58 | int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00421f5d
    PUSH 0xffff                         ; 00421f60
    MOV EDI,dword ptr [0x006703ec]      ; 00421f65 | CDemonRenderer * g_CDemonRendererPtr
    PUSH EDI                            ; 00421f6b | CDemonRenderer g_CDemonRendererInstance
    MOV ESI,EAX                         ; 00421f6c
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 00421f6e | void engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
    MOV EBP,dword ptr [EBX + 0x5fc]     ; 00421f73
    ADD ESP,0x8                         ; 00421f79
    TEST EBP,EBP                        ; 00421f7c
    JZ 0x00421f8f                       ; 00421f7e | LAB_00421f8f
        ;   XREF to: 00421f8f (CONDITIONAL_JUMP)
    MOV EAX,[0x006810c8]                ; 00421f80 | CDemonSet * g_CDemonSetPtr
    MOV dword ptr [EAX + 0x15ac88],0x1  ; 00421f85 | DAT_0326ef00
    TEST ESI,ESI                        ; 00421f8f
        ;   Label: LAB_00421f8f
    JZ 0x00421faa                       ; 00421f91 | LAB_00421faa
        ;   XREF to: 00421faa (CONDITIONAL_JUMP)
    PUSH -0x1                           ; 00421f93
    LEA EAX,[EBX + 0x158]               ; 00421f95
    PUSH dword ptr [EBX + 0x310]        ; 00421f9b
    PUSH EAX                            ; 00421fa1
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 00421fa2 | void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00421fa7
    CMP dword ptr [EBX + 0x5fc],0x0     ; 00421faa
        ;   Label: LAB_00421faa
    JZ 0x00421fc2                       ; 00421fb1 | LAB_00421fc2
        ;   XREF to: 00421fc2 (CONDITIONAL_JUMP)
    MOV EAX,[0x006810c8]                ; 00421fb3 | CDemonSet * g_CDemonSetPtr
    MOV dword ptr [EAX + 0x15ac88],0x0  ; 00421fb8 | DAT_0326ef00
    MOV EDX,dword ptr [0x006703e8]      ; 00421fc2 | CDemonRenderer * g_CDemonRendererPtr
        ;   Label: LAB_00421fc2
    PUSH EDX                            ; 00421fc8 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 00421fc9 | void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)

