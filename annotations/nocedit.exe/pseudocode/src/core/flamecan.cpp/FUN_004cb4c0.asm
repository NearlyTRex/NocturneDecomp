; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_flamecan.cpp_FUN_004cb4c0()
;
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
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

    PUSH EBX                            ; 004cb4c0
        ;   Label: core_flamecan.cpp_FUN_004cb4c0
    PUSH ESI                            ; 004cb4c1
    SUB ESP,0x18                        ; 004cb4c2
    MOV EBX,dword ptr [ESP + 0x24]      ; 004cb4c5
    LEA EAX,[EBX + 0x20]                ; 004cb4c9
    PUSH EAX                            ; 004cb4cc
    MOV EDX,dword ptr [0x006703ec]      ; 004cb4cd | g_CDemonRendererPtr
    PUSH EDX                            ; 004cb4d3 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 004cb4d4
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004cb4d9
    PUSH 0x0                            ; 004cb4dc
    LEA EAX,[EBX + 0x30]                ; 004cb4de
    PUSH EAX                            ; 004cb4e1
    MOV ECX,dword ptr [0x006703ec]      ; 004cb4e2 | g_CDemonRendererPtr
    PUSH ECX                            ; 004cb4e8 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 004cb4e9
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 004cb4ee
    MOV EAX,ESP                         ; 004cb4f1
    PUSH EAX                            ; 004cb4f3
    MOV ESI,dword ptr [EBX + 0x154]     ; 004cb4f4
    PUSH EBX                            ; 004cb4fa
    CALL dword ptr [ESI + 0x14]         ; 004cb4fb
    ADD ESP,0x8                         ; 004cb4fe
    PUSH EAX                            ; 004cb501
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 004cb502
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 004cb507
    MOV ESI,EAX                         ; 004cb50a
    MOV dword ptr [EBX + 0x5e4],EAX     ; 004cb50c
    TEST EAX,EAX                        ; 004cb512
    JNZ 0x004cb52d                      ; 004cb514
        ;   XREF to: 004cb52d (CONDITIONAL_JUMP)  ; LAB_004cb52d
    MOV EBX,dword ptr [0x006703ec]      ; 004cb516 | g_CDemonRendererPtr
        ;   Label: LAB_004cb516
    PUSH EBX                            ; 004cb51c | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 004cb51d
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()
    PUSH -0x1                           ; 004cb52d
        ;   Label: LAB_004cb52d
    ADD EBX,0x158                       ; 004cb52f
    PUSH 0x0                            ; 004cb535
    PUSH EBX                            ; 004cb537
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 004cb538
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004cb53d
    JMP 0x004cb516                      ; 004cb540
        ;   XREF to: 004cb516 (UNCONDITIONAL_JUMP)  ; LAB_004cb516

