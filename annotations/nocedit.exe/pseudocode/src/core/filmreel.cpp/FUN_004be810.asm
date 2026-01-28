; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown int core_filmreel_cpp_FUN_004be810(void)
;
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

    PUSH EBX                            ; 004be810
        ;   Label: core_filmreel.cpp_FUN_004be810
    PUSH ESI                            ; 004be811
    SUB ESP,0x18                        ; 004be812
    MOV EBX,dword ptr [ESP + 0x24]      ; 004be815
    LEA EAX,[EBX + 0x20]                ; 004be819
    PUSH EAX                            ; 004be81c
    MOV EDX,dword ptr [0x006703ec]      ; 004be81d | g_CDemonRendererPtr2
    PUSH EDX                            ; 004be823 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 004be824
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004be829
    PUSH 0x0                            ; 004be82c
    LEA EAX,[EBX + 0x30]                ; 004be82e
    PUSH EAX                            ; 004be831
    MOV ECX,dword ptr [0x006703ec]      ; 004be832 | g_CDemonRendererPtr2
    PUSH ECX                            ; 004be838 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 004be839
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 004be83e
    MOV EAX,ESP                         ; 004be841
    PUSH EAX                            ; 004be843
    MOV ESI,dword ptr [EBX + 0x154]     ; 004be844
    PUSH EBX                            ; 004be84a
    CALL dword ptr [ESI + 0x14]         ; 004be84b
    ADD ESP,0x8                         ; 004be84e
    PUSH EAX                            ; 004be851
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 004be852
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 004be857
    MOV ESI,EAX                         ; 004be85a
    TEST EAX,EAX                        ; 004be85c
    JNZ 0x004be881                      ; 004be85e
        ;   XREF to: 004be881 (CONDITIONAL_JUMP)  ; LAB_004be881
    MOV EBX,dword ptr [0x006703ec]      ; 004be860 | g_CDemonRendererPtr2
        ;   Label: LAB_004be860
    PUSH EBX                            ; 004be866 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 004be867
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()
    PUSH -0x1                           ; 004be881
        ;   Label: LAB_004be881
    ADD EBX,0x158                       ; 004be883
    PUSH 0x0                            ; 004be889
    PUSH EBX                            ; 004be88b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 004be88c
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004be891
    JMP 0x004be860                      ; 004be894
        ;   XREF to: 004be860 (UNCONDITIONAL_JUMP)  ; LAB_004be860

