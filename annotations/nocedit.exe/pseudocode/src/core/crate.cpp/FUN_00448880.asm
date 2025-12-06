; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_crate.cpp_FUN_00448880()
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

    PUSH EBX                            ; 00448880
        ;   Label: core_crate.cpp_FUN_00448880
    PUSH ESI                            ; 00448881
    SUB ESP,0x18                        ; 00448882
    MOV EBX,dword ptr [ESP + 0x24]      ; 00448885
    LEA EAX,[EBX + 0x20]                ; 00448889
    PUSH EAX                            ; 0044888c
    MOV EDX,dword ptr [0x006703ec]      ; 0044888d | CDemonRenderer * g_CDemonRendererPtr
    PUSH EDX                            ; 00448893 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 00448894 | void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00448899
    PUSH 0x0                            ; 0044889c
    LEA EAX,[EBX + 0x30]                ; 0044889e
    PUSH EAX                            ; 004488a1
    MOV ECX,dword ptr [0x006703ec]      ; 004488a2 | CDemonRenderer * g_CDemonRendererPtr
    PUSH ECX                            ; 004488a8 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 004488a9 | void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004488ae
    MOV EAX,ESP                         ; 004488b1
    PUSH EAX                            ; 004488b3
    MOV ESI,dword ptr [EBX + 0x154]     ; 004488b4
    PUSH EBX                            ; 004488ba
    CALL dword ptr [ESI + 0x14]         ; 004488bb
    ADD ESP,0x8                         ; 004488be
    PUSH EAX                            ; 004488c1
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 004488c2 | int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004488c7
    MOV ESI,EAX                         ; 004488ca
    TEST EAX,EAX                        ; 004488cc
    JNZ 0x004488f1                      ; 004488ce | LAB_004488f1
        ;   XREF to: 004488f1 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [0x006703ec]      ; 004488d0 | CDemonRenderer * g_CDemonRendererPtr
        ;   Label: LAB_004488d0
    PUSH EBX                            ; 004488d6 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 004488d7 | void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)
    PUSH -0x1                           ; 004488f1
        ;   Label: LAB_004488f1
    ADD EBX,0x158                       ; 004488f3
    PUSH 0x0                            ; 004488f9
    PUSH EBX                            ; 004488fb
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 004488fc | void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00448901
    JMP 0x004488d0                      ; 00448904 | LAB_004488d0
        ;   XREF to: 004488d0 (UNCONDITIONAL_JUMP)

