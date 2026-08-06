; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CStake_render_FUN_004835d0(CStake *this_ptr)
;
; Parameters:
; CStake *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[2]:
;   core_fire.cpp_CFireEffect_renderDecals_FUN_0048a970 at 0048a9f7
;   core_fire.cpp_CFireEffect_render_FUN_0048a650 at 0048a95b
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   undefined4 DAT_01b4d738
;   CDemonSet g_CDemonSet_01e57284
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
;   core_set.cpp_CDemonSet_setLightingParameters_FUN_0050adc0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004835d0
        ;   Label: core_fire.cpp_CStake_render_FUN_004835d0
    PUSH ESI                            ; 004835d1
    PUSH EDI                            ; 004835d2
    SUB ESP,0x18                        ; 004835d3
    MOV EDI,dword ptr [ESP + 0x28]      ; 004835d6
    LEA EBX,[EDI + 0x4]                 ; 004835da
    PUSH EBX                            ; 004835dd
    MOV EDX,dword ptr [0x005ae704]      ; 004835de | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 004835e4 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 004835e5
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004835ea
    PUSH 0x0                            ; 004835ed
    LEA ESI,[EDI + 0x10]                ; 004835ef
    PUSH ESI                            ; 004835f2
    MOV ECX,dword ptr [0x005ae704]      ; 004835f3 | g_CDemonRenderer_PTR_005ae704
    PUSH ECX                            ; 004835f9 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 004835fa
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    ADD ESP,0xc                         ; 004835ff
    PUSH 0x1c08d48                      ; 00483602
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 00483607
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(CKeyFramedModelInstance * this_ptr)
    LEA EDX,[EAX + 0x338]               ; 0048360c
    ADD ESP,0x4                         ; 00483612
    MOV EAX,dword ptr [EDX]             ; 00483615
    MOV dword ptr [ESP],EAX             ; 00483617
    LEA EAX,[EDX + 0x4]                 ; 0048361a
    MOV EAX,dword ptr [EAX]             ; 0048361d
    MOV dword ptr [ESP + 0x4],EAX       ; 0048361f
    LEA EAX,[EDX + 0x8]                 ; 00483623
    MOV EAX,dword ptr [EAX]             ; 00483626
    MOV dword ptr [ESP + 0x8],EAX       ; 00483628
    MOV EAX,dword ptr [EDX + 0xc]       ; 0048362c
    ADD EDX,0xc                         ; 0048362f
    MOV dword ptr [ESP + 0xc],EAX       ; 00483632
    LEA EAX,[EDX + 0x4]                 ; 00483636
    MOV EAX,dword ptr [EAX]             ; 00483639
    MOV dword ptr [ESP + 0x10],EAX      ; 0048363b
    LEA EAX,[EDX + 0x8]                 ; 0048363f
    MOV EAX,dword ptr [EAX]             ; 00483642
    PUSH 0x0                            ; 00483644
    MOV dword ptr [ESP + 0x18],EAX      ; 00483646
    LEA EAX,[ESP + 0x4]                 ; 0048364a
    PUSH EAX                            ; 0048364e
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 0048364f
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(CBoundingBox3D * this_ptr)
    ADD ESP,0x8                         ; 00483654
    TEST EAX,EAX                        ; 00483657
    JNZ 0x00483671                      ; 00483659
        ;   XREF to: 00483671 (CONDITIONAL_JUMP)  ; LAB_00483671
    MOV ESI,dword ptr [0x005ae704]      ; 0048365b | g_CDemonRenderer_PTR_005ae704
        ;   Label: LAB_0048365b
    PUSH ESI                            ; 00483661 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 00483662
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    ADD ESP,0x4                         ; 00483667
    ADD ESP,0x18                        ; 0048366a
    POP EDI                             ; 0048366d
    POP ESI                             ; 0048366e
    POP EBX                             ; 0048366f
    RET                                 ; 00483670
    LEA EAX,[EDI + 0x1c]                ; 00483671
        ;   Label: LAB_00483671
    PUSH EAX                            ; 00483674
    LEA EAX,[ESP + 0x10]                ; 00483675
    PUSH EAX                            ; 00483679
    LEA EAX,[ESP + 0x8]                 ; 0048367a
    PUSH EAX                            ; 0048367e
    PUSH ESI                            ; 0048367f
    PUSH EBX                            ; 00483680
    MOV EBX,dword ptr [0x005be368]      ; 00483681 | g_CDemonSet_PTR_005be368
    PUSH EBX                            ; 00483687 | g_CDemonSet_01e57284
    CALL core_set.cpp_CDemonSet_setLightingParameters_FUN_0050adc0 ; 00483688
        ;   XREF to: 0050adc0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setLightingParameters_FUN_0050adc0(CDemonSet * this_ptr, CVector3f * position, UOrientationVector * orientation, CVector3f * aabb_min, ...)
    ADD ESP,0x18                        ; 0048368d
    PUSH -0x1                           ; 00483690
    PUSH 0x0                            ; 00483692
    PUSH 0x1c08d48                      ; 00483694
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 00483699
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0048369e
    JMP 0x0048365b                      ; 004836a1
        ;   XREF to: 0048365b (UNCONDITIONAL_JUMP)  ; LAB_0048365b

