; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_fire.cpp_CStake_render_FUN_004c0140(CStake * this_ptr)
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
;   core_fire.cpp_CFireEffect_renderDecals_FUN_004c74a0 at 004c752d
;   core_fire.cpp_CFireEffect_render_FUN_004c7180 at 004c748b
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonRenderer g_CDemonRendererInstance
;   CKeyFramedModelInstance g_FireEffectFlamingStakeModel
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
;   core_set.cpp_CDemonSet_FUN_0056d380
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c0140
        ;   Label: core_fire.cpp_CStake_render_FUN_004c0140
    PUSH ESI                            ; 004c0141
    PUSH EDI                            ; 004c0142
    SUB ESP,0x18                        ; 004c0143
    MOV EDI,dword ptr [ESP + 0x28]      ; 004c0146
    LEA EBX,[EDI + 0x4]                 ; 004c014a
    PUSH EBX                            ; 004c014d
    MOV EDX,dword ptr [0x006703ec]      ; 004c014e | g_CDemonRendererPtr
    PUSH EDX                            ; 004c0154 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 004c0155
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004c015a
    PUSH 0x0                            ; 004c015d
    LEA ESI,[EDI + 0x10]                ; 004c015f
    PUSH ESI                            ; 004c0162
    MOV ECX,dword ptr [0x006703ec]      ; 004c0163 | g_CDemonRendererPtr
    PUSH ECX                            ; 004c0169 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 004c016a
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 004c016f
    PUSH 0x2d12df4                      ; 004c0172 | g_FireEffectFlamingStakeModel
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 004c0177
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    LEA EDX,[EAX + 0x5678]              ; 004c017c
    ADD ESP,0x4                         ; 004c0182
    MOV EAX,dword ptr [EDX]             ; 004c0185
    MOV dword ptr [ESP],EAX             ; 004c0187
    LEA EAX,[EDX + 0x4]                 ; 004c018a
    MOV EAX,dword ptr [EAX]             ; 004c018d
    MOV dword ptr [ESP + 0x4],EAX       ; 004c018f
    LEA EAX,[EDX + 0x8]                 ; 004c0193
    MOV EAX,dword ptr [EAX]             ; 004c0196
    MOV dword ptr [ESP + 0x8],EAX       ; 004c0198
    MOV EAX,dword ptr [EDX + 0xc]       ; 004c019c
    ADD EDX,0xc                         ; 004c019f
    MOV dword ptr [ESP + 0xc],EAX       ; 004c01a2
    LEA EAX,[EDX + 0x4]                 ; 004c01a6
    MOV EAX,dword ptr [EAX]             ; 004c01a9
    MOV dword ptr [ESP + 0x10],EAX      ; 004c01ab
    LEA EAX,[EDX + 0x8]                 ; 004c01af
    MOV EAX,dword ptr [EAX]             ; 004c01b2
    MOV dword ptr [ESP + 0x14],EAX      ; 004c01b4
    MOV EAX,ESP                         ; 004c01b8
    PUSH EAX                            ; 004c01ba
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 004c01bb
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 004c01c0
    TEST EAX,EAX                        ; 004c01c3
    JNZ 0x004c01dd                      ; 004c01c5
        ;   XREF to: 004c01dd (CONDITIONAL_JUMP)  ; LAB_004c01dd
    MOV ESI,dword ptr [0x006703ec]      ; 004c01c7 | g_CDemonRendererPtr
        ;   Label: LAB_004c01c7
    PUSH ESI                            ; 004c01cd | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 004c01ce
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()
    LEA EAX,[EDI + 0x1c]                ; 004c01dd
        ;   Label: LAB_004c01dd
    PUSH EAX                            ; 004c01e0
    LEA EAX,[ESP + 0x10]                ; 004c01e1
    PUSH EAX                            ; 004c01e5
    LEA EAX,[ESP + 0x8]                 ; 004c01e6
    PUSH EAX                            ; 004c01ea
    PUSH ESI                            ; 004c01eb
    PUSH EBX                            ; 004c01ec
    MOV EBX,dword ptr [0x006810c8]      ; 004c01ed | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH EBX                            ; 004c01f3 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_FUN_0056d380 ; 004c01f4
        ;   XREF to: 0056d380 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0056d380(CDemonSet * this_ptr)
    ADD ESP,0x18                        ; 004c01f9
    PUSH -0x1                           ; 004c01fc
    PUSH 0x0                            ; 004c01fe
    PUSH 0x2d12df4                      ; 004c0200 | g_FireEffectFlamingStakeModel
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 004c0205
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004c020a
    JMP 0x004c01c7                      ; 004c020d
        ;   XREF to: 004c01c7 (UNCONDITIONAL_JUMP)  ; LAB_004c01c7

