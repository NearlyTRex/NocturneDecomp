; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_boxactor_cpp_CBoxActor_renderOpaque_FUN_00421e00(CBoxActor *this_ptr)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x20]:1  local_20
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr1 = 02c6d578
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00421e00
        ;   Label: core_boxactor.cpp_CBoxActor_renderOpaque_FUN_00421e00
    PUSH EBP                            ; 00421e01
    SUB ESP,0x18                        ; 00421e02
    MOV EBX,dword ptr [ESP + 0x24]      ; 00421e05
    LEA EAX,[EBX + 0x158]               ; 00421e09
    PUSH EAX                            ; 00421e0f
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 00421e10
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    MOV EDX,dword ptr [EAX + 0x110]     ; 00421e15
    ADD ESP,0x4                         ; 00421e1b
    CMP EDX,0x1                         ; 00421e1e
    JGE 0x00421e2b                      ; 00421e21
        ;   XREF to: 00421e2b (CONDITIONAL_JUMP)  ; LAB_00421e2b
    XOR EAX,EAX                         ; 00421e23
    ADD ESP,0x18                        ; 00421e25
        ;   Label: LAB_00421e25
    POP EBP                             ; 00421e28
    POP EBX                             ; 00421e29
    RET                                 ; 00421e2a
    MOV ECX,dword ptr [0x006703ec]      ; 00421e2b | g_CDemonRendererPtr2
        ;   Label: LAB_00421e2b
    PUSH ECX                            ; 00421e31 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 00421e32
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00421e37
    TEST EAX,EAX                        ; 00421e3a
    JNZ 0x00421e47                      ; 00421e3c
        ;   XREF to: 00421e47 (CONDITIONAL_JUMP)  ; LAB_00421e47
    CMP dword ptr [EBX + 0xfc],0x0      ; 00421e3e
    JNZ 0x00421e25                      ; 00421e45
        ;   XREF to: 00421e25 (CONDITIONAL_JUMP)  ; LAB_00421e25
    CMP dword ptr [EBX + 0x5f4],0x0     ; 00421e47
        ;   Label: LAB_00421e47
    JZ 0x00421ec8                       ; 00421e4e
        ;   XREF to: 00421ec8 (CONDITIONAL_JUMP)  ; LAB_00421ec8
    PUSH ESI                            ; 00421e50
        ;   Label: LAB_00421e50
    LEA EAX,[EBX + 0x20]                ; 00421e51
    PUSH EAX                            ; 00421e54
    MOV EAX,[0x006703e8]                ; 00421e55 | g_CDemonRendererPtr1
    PUSH EAX                            ; 00421e5a | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 00421e5b
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00421e60
    PUSH 0x0                            ; 00421e63
    LEA EAX,[EBX + 0x30]                ; 00421e65
    PUSH EAX                            ; 00421e68
    MOV EDX,dword ptr [0x006703e8]      ; 00421e69 | g_CDemonRendererPtr1
    PUSH EDX                            ; 00421e6f | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 00421e70
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 00421e75
    LEA EAX,[ESP + 0x4]                 ; 00421e78
    PUSH EAX                            ; 00421e7c
    MOV EDX,dword ptr [EBX + 0x154]     ; 00421e7d
    PUSH EBX                            ; 00421e83
    CALL dword ptr [EDX + 0x14]         ; 00421e84
    ADD ESP,0x8                         ; 00421e87
    PUSH EAX                            ; 00421e8a
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 00421e8b
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 00421e90
    MOV ESI,EAX                         ; 00421e93
    TEST EAX,EAX                        ; 00421e95
    JZ 0x00421eb0                       ; 00421e97
        ;   XREF to: 00421eb0 (CONDITIONAL_JUMP)  ; LAB_00421eb0
    PUSH -0x1                           ; 00421e99
    ADD EBX,0x158                       ; 00421e9b
    PUSH dword ptr [EBX + 0x1b8]        ; 00421ea1
    PUSH EBX                            ; 00421ea7
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 00421ea8
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00421ead
    MOV ECX,dword ptr [0x006703e8]      ; 00421eb0 | g_CDemonRendererPtr1
        ;   Label: LAB_00421eb0
    PUSH ECX                            ; 00421eb6 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 00421eb7
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()
    MOV EBP,dword ptr [0x006703ec]      ; 00421ec8 | g_CDemonRendererPtr2
        ;   Label: LAB_00421ec8
    PUSH EBP                            ; 00421ece | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 00421ecf
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00421ed4
    TEST EAX,EAX                        ; 00421ed7
    JZ 0x00421e50                       ; 00421ed9
        ;   XREF to: 00421e50 (CONDITIONAL_JUMP)  ; LAB_00421e50
    XOR EAX,EAX                         ; 00421edf
    ADD ESP,0x18                        ; 00421ee1
    POP EBP                             ; 00421ee4
    POP EBX                             ; 00421ee5
    RET                                 ; 00421ee6

