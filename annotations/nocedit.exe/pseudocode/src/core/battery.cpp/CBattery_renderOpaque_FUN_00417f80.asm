; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_battery_cpp_CBattery_renderOpaque_FUN_00417f80(CBattery *this_ptr)
;
; Parameters:
; CBattery *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00417f80
        ;   Label: core_battery.cpp_CBattery_renderOpaque_FUN_00417f80
    PUSH ESI                            ; 00417f81
    SUB ESP,0x18                        ; 00417f82
    MOV EBX,dword ptr [ESP + 0x24]      ; 00417f85
    LEA EAX,[EBX + 0x20]                ; 00417f89
    PUSH EAX                            ; 00417f8c
    MOV EDX,dword ptr [0x006703ec]      ; 00417f8d | g_CDemonRendererPtr2
    PUSH EDX                            ; 00417f93 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 00417f94
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00417f99
    PUSH 0x0                            ; 00417f9c
    LEA EAX,[EBX + 0x30]                ; 00417f9e
    PUSH EAX                            ; 00417fa1
    MOV ECX,dword ptr [0x006703ec]      ; 00417fa2 | g_CDemonRendererPtr2
    PUSH ECX                            ; 00417fa8 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 00417fa9
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 00417fae
    MOV EAX,ESP                         ; 00417fb1
    PUSH EAX                            ; 00417fb3
    MOV ESI,dword ptr [EBX + 0x154]     ; 00417fb4
    PUSH EBX                            ; 00417fba
    CALL dword ptr [ESI + 0x14]         ; 00417fbb
    ADD ESP,0x8                         ; 00417fbe
    PUSH EAX                            ; 00417fc1
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 00417fc2
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 00417fc7
    MOV ESI,EAX                         ; 00417fca
    TEST EAX,EAX                        ; 00417fcc
    JNZ 0x00417fe7                      ; 00417fce
        ;   XREF to: 00417fe7 (CONDITIONAL_JUMP)  ; LAB_00417fe7
    MOV EBX,dword ptr [0x006703ec]      ; 00417fd0 | g_CDemonRendererPtr2
        ;   Label: LAB_00417fd0
    PUSH EBX                            ; 00417fd6 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 00417fd7
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()
    PUSH -0x1                           ; 00417fe7
        ;   Label: LAB_00417fe7
    ADD EBX,0x158                       ; 00417fe9
    PUSH 0x0                            ; 00417fef
    PUSH EBX                            ; 00417ff1
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 00417ff2
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00417ff7
    JMP 0x00417fd0                      ; 00417ffa
        ;   XREF to: 00417fd0 (UNCONDITIONAL_JUMP)  ; LAB_00417fd0

