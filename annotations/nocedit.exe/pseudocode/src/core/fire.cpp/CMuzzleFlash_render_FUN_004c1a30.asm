; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CMuzzleFlash_render_FUN_004c1a30(CMuzzleFlash *this_ptr)
;
; Parameters:
; CMuzzleFlash *   Stack[0x4]:4   this_ptr
; Local Variables:
; CVector3i        Stack[-0x28]:12  local_28
; CVector3i        Stack[-0x1c]:12  local_1c
; float            Stack[-0x10]:4  local_10
; float            Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_render_FUN_004c7180 at 004c72dd
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonRenderer g_CDemonRendererInstance
;   CKeyFramedModelInstance g_FireEffectGunFlashModel
;   undefined4 g_CDemonSetInstance.lighting_quality_mode
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
;   crt_stdlib.c_rand_FUN_005feb5c
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c1a30
        ;   Label: core_fire.cpp_CMuzzleFlash_render_FUN_004c1a30
    PUSH EBP                            ; 004c1a31
    SUB ESP,0x2c                        ; 004c1a32
    MOV EBX,dword ptr [ESP + 0x38]      ; 004c1a35
    CMP dword ptr [EBX],0x2             ; 004c1a39
    JZ 0x004c1a44                       ; 004c1a3c
        ;   XREF to: 004c1a44 (CONDITIONAL_JUMP)  ; LAB_004c1a44
    ADD ESP,0x2c                        ; 004c1a3e
    POP EBP                             ; 004c1a41
    POP EBX                             ; 004c1a42
    RET                                 ; 004c1a43
    PUSH EDI                            ; 004c1a44
        ;   Label: LAB_004c1a44
    PUSH ESI                            ; 004c1a45
    LEA EAX,[EBX + 0x4]                 ; 004c1a46
    PUSH EAX                            ; 004c1a49
    MOV ECX,dword ptr [0x006703ec]      ; 004c1a4a | g_CDemonRendererPtr2
    PUSH ECX                            ; 004c1a50 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 004c1a51
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004c1a56
    PUSH 0x0                            ; 004c1a59
    LEA EAX,[EBX + 0x10]                ; 004c1a5b
    PUSH EAX                            ; 004c1a5e
    MOV EBX,dword ptr [0x006703ec]      ; 004c1a5f | g_CDemonRendererPtr2 | g_CDemonRendererInstance
    PUSH EBX                            ; 004c1a65 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 004c1a66
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 004c1a6b
    PUSH 0x40c90fdb                     ; 004c1a6e
    PUSH 0x0                            ; 004c1a73
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004c1a75
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x38],EAX      ; 004c1a7a
    FLD float ptr [ESP + 0x38]          ; 004c1a7e
    ADD ESP,0x8                         ; 004c1a82
    XOR ESI,ESI                         ; 004c1a85
    FSTP float ptr [ESP + 0x2c]         ; 004c1a87
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004c1a8b
    PUSH ESI                            ; 004c1a8f
    MOV dword ptr [ESP + 0x20],EAX      ; 004c1a90
    LEA EAX,[ESP + 0x18]                ; 004c1a94
    PUSH EAX                            ; 004c1a98
    MOV EBP,dword ptr [0x006703ec]      ; 004c1a99 | g_CDemonRendererPtr2
    PUSH EBP                            ; 004c1a9f | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x20],ESI      ; 004c1aa0
    MOV dword ptr [ESP + 0x24],ESI      ; 004c1aa4
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 004c1aa8
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 004c1aad
    MOV EAX,[0x006810c8]                ; 004c1ab0 | g_CDemonSetPtr
    PUSH 0x1                            ; 004c1ab5
    MOV dword ptr [EAX + 0x15ac80],0x1  ; 004c1ab7 | g_CDemonSetInstance.lighting_quality_mode
    MOV EAX,[0x006703ec]                ; 004c1ac1 | g_CDemonRendererPtr2
    PUSH EAX                            ; 004c1ac6 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 004c1ac7
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004c1acc
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 004c1acf
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005feb5c()
    AND EAX,0x3fff                      ; 004c1ad4
    ADD EAX,0x1800                      ; 004c1ad9
    PUSH EAX                            ; 004c1ade
    MOV EDX,dword ptr [0x006703ec]      ; 004c1adf | g_CDemonRendererPtr2
    PUSH EDX                            ; 004c1ae5 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 004c1ae6
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004c1aeb
    PUSH 0x63                           ; 004c1aee
    PUSH 0x0                            ; 004c1af0
    PUSH 0x2d133e4                      ; 004c1af2 | g_FireEffectGunFlashModel
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 004c1af7
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004c1afc
    MOV dword ptr [ESP + 0x20],ESI      ; 004c1aff
    MOV dword ptr [ESP + 0x24],ESI      ; 004c1b03
    MOV dword ptr [ESP + 0x28],0x3fc90fdb ; 004c1b07
    PUSH 0x0                            ; 004c1b0f
    LEA EAX,[ESP + 0x24]                ; 004c1b11
    PUSH EAX                            ; 004c1b15
    MOV EDI,dword ptr [0x006703ec]      ; 004c1b16 | g_CDemonRendererPtr2
    PUSH EDI                            ; 004c1b1c | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 004c1b1d
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 004c1b22
    PUSH 0x63                           ; 004c1b25
    PUSH 0x0                            ; 004c1b27
    PUSH 0x2d133e4                      ; 004c1b29 | g_FireEffectGunFlashModel
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 004c1b2e
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004c1b33
    MOV EBP,dword ptr [0x006703ec]      ; 004c1b36 | g_CDemonRendererPtr2
    PUSH EBP                            ; 004c1b3c | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640 ; 004c1b3d
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004c1b42
    XOR EAX,EAX                         ; 004c1b45
    MOV dword ptr [ESP + 0x8],EAX       ; 004c1b47
    PUSH EAX                            ; 004c1b4b
    MOV dword ptr [ESP + 0x10],EAX      ; 004c1b4c
    LEA EAX,[ESP + 0xc]                 ; 004c1b50
    PUSH EAX                            ; 004c1b54
    MOV EBX,dword ptr [0x006703ec]      ; 004c1b55 | g_CDemonRendererPtr2
    MOV ECX,0x3f490fdb                  ; 004c1b5b
    PUSH EBX                            ; 004c1b60 | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x1c],ECX      ; 004c1b61
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 004c1b65
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 004c1b6a
    PUSH 0x63                           ; 004c1b6d
    PUSH 0x0                            ; 004c1b6f
    PUSH 0x2d133e4                      ; 004c1b71 | g_FireEffectGunFlashModel
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 004c1b76
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004c1b7b
    MOV ESI,dword ptr [0x006703ec]      ; 004c1b7e | g_CDemonRendererPtr2
    PUSH ESI                            ; 004c1b84 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640 ; 004c1b85
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004c1b8a
    MOV EDI,dword ptr [0x006703ec]      ; 004c1b8d | g_CDemonRendererPtr2
    MOV EAX,[0x006810c8]                ; 004c1b93 | g_CDemonSetPtr
    PUSH EDI                            ; 004c1b98 | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x15ac80],0x0  ; 004c1b99 | g_CDemonSetInstance.lighting_quality_mode
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640 ; 004c1ba3
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004c1ba8
    MOV EBP,dword ptr [0x006703ec]      ; 004c1bab | g_CDemonRendererPtr2
    PUSH EBP                            ; 004c1bb1 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640 ; 004c1bb2
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004c1bb7
    PUSH 0x0                            ; 004c1bba
    MOV EAX,[0x006703ec]                ; 004c1bbc | g_CDemonRendererPtr2
    PUSH EAX                            ; 004c1bc1 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 004c1bc2
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004c1bc7
    POP ESI                             ; 004c1bca
    POP EDI                             ; 004c1bcb
    ADD ESP,0x2c                        ; 004c1bcc
    POP EBP                             ; 004c1bcf
    POP EBX                             ; 004c1bd0
    RET                                 ; 004c1bd1

