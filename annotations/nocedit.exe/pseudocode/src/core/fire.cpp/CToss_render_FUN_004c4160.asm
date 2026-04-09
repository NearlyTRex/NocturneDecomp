; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CToss_render_FUN_004c4160(CToss *this_ptr)
;
; Parameters:
; CToss *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_render_FUN_004c7180 at 004c73c9
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c4160
        ;   Label: core_fire.cpp_CToss_render_FUN_004c4160
    MOV EBX,dword ptr [ESP + 0x8]       ; 004c4161
    FLD float ptr [EBX + 0x3dc]         ; 004c4165
    FLDZ                                ; 004c416b
    FCOMPP                              ; 004c416d
    FNSTSW AX                           ; 004c416f
    SAHF                                ; 004c4171
    JC 0x004c4176                       ; 004c4172
        ;   XREF to: 004c4176 (CONDITIONAL_JUMP)  ; LAB_004c4176
    POP EBX                             ; 004c4174
    RET                                 ; 004c4175
    LEA EAX,[EBX + 0x180]               ; 004c4176
        ;   Label: LAB_004c4176
    PUSH EAX                            ; 004c417c
    MOV EDX,dword ptr [0x006703ec]      ; 004c417d | g_CDemonRendererPtr2
    PUSH EDX                            ; 004c4183 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 004c4184
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004c4189
    PUSH 0x0                            ; 004c418c
    LEA EAX,[EBX + 0x18c]               ; 004c418e
    PUSH EAX                            ; 004c4194
    MOV ECX,dword ptr [0x006703ec]      ; 004c4195 | g_CDemonRendererPtr2
    PUSH ECX                            ; 004c419b | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 004c419c
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 004c41a1
    PUSH -0x1                           ; 004c41a4
    ADD EBX,0x4                         ; 004c41a6
    PUSH 0x0                            ; 004c41a9
    PUSH EBX                            ; 004c41ab
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 004c41ac
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004c41b1
    MOV EBX,dword ptr [0x006703ec]      ; 004c41b4 | g_CDemonRendererPtr2
    PUSH EBX                            ; 004c41ba | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640 ; 004c41bb
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004c41c0
    POP EBX                             ; 004c41c3
    RET                                 ; 004c41c4

