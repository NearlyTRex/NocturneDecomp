; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gasmask_cpp_CGasMask_renderOpaque_FUN_004e5da0(CGasMask *this_ptr)
;
; Parameters:
; CGasMask *       Stack[0x4]:4   this_ptr
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

    PUSH EBX                            ; 004e5da0
        ;   Label: core_gasmask.cpp_CGasMask_renderOpaque_FUN_004e5da0
    PUSH ESI                            ; 004e5da1
    SUB ESP,0x18                        ; 004e5da2
    MOV EBX,dword ptr [ESP + 0x24]      ; 004e5da5
    LEA EAX,[EBX + 0x20]                ; 004e5da9
    PUSH EAX                            ; 004e5dac
    MOV EDX,dword ptr [0x006703ec]      ; 004e5dad | g_CDemonRendererPtr2
    PUSH EDX                            ; 004e5db3 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 004e5db4
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004e5db9
    PUSH 0x0                            ; 004e5dbc
    LEA EAX,[EBX + 0x30]                ; 004e5dbe
    PUSH EAX                            ; 004e5dc1
    MOV ECX,dword ptr [0x006703ec]      ; 004e5dc2 | g_CDemonRendererPtr2
    PUSH ECX                            ; 004e5dc8 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 004e5dc9
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 004e5dce
    MOV EAX,ESP                         ; 004e5dd1
    PUSH EAX                            ; 004e5dd3
    MOV ESI,dword ptr [EBX + 0x154]     ; 004e5dd4
    PUSH EBX                            ; 004e5dda
    CALL dword ptr [ESI + 0x14]         ; 004e5ddb
    ADD ESP,0x8                         ; 004e5dde
    PUSH EAX                            ; 004e5de1
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 004e5de2
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 004e5de7
    MOV ESI,EAX                         ; 004e5dea
    TEST EAX,EAX                        ; 004e5dec
    JNZ 0x004e5e07                      ; 004e5dee
        ;   XREF to: 004e5e07 (CONDITIONAL_JUMP)  ; LAB_004e5e07
    MOV EBX,dword ptr [0x006703ec]      ; 004e5df0 | g_CDemonRendererPtr2
        ;   Label: LAB_004e5df0
    PUSH EBX                            ; 004e5df6 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 004e5df7
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()
    PUSH -0x1                           ; 004e5e07
        ;   Label: LAB_004e5e07
    ADD EBX,0x158                       ; 004e5e09
    PUSH 0x0                            ; 004e5e0f
    PUSH EBX                            ; 004e5e11
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 004e5e12
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004e5e17
    JMP 0x004e5df0                      ; 004e5e1a
        ;   XREF to: 004e5df0 (UNCONDITIONAL_JUMP)  ; LAB_004e5df0

