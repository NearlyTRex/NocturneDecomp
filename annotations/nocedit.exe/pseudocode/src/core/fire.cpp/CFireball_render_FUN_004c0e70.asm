; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireball_render_FUN_004c0e70(CFireball *this_ptr)
;
; Parameters:
; CFireball *      Stack[0x4]:4   this_ptr
; Local Variables:
; CBoundingBox3D   Stack[-0xe0]:24  local_e0
; CVector3i        Stack[-0xc8]:12  local_c8
; CVector3i        Stack[-0xbc]:12  local_bc
; CVector3f        Stack[-0xb0]:12  local_b0
; float            Stack[-0xa4]:4  local_a4
; float            Stack[-0xa0]:4  local_a0
; float            Stack[-0x9c]:4  local_9c
; CVector3i        Stack[-0x98]:12  local_98
; CVector3i        Stack[-0x8c]:12  local_8c
; CVector3i        Stack[-0x80]:12  local_80
; CVector3i        Stack[-0x74]:12  local_74
; float            Stack[-0x68]:4  local_68
; float            Stack[-0x64]:4  local_64
; float            Stack[-0x60]:4  local_60
; CVector3i        Stack[-0x5c]:12  local_5c
; float            Stack[-0x50]:4  local_50
; float            Stack[-0x4c]:4  local_4c
; CVector3i[2]     Stack[-0x44]:24  local_44
; float            Stack[-0x28]:4  local_28
; float            Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonRenderer g_CDemonRendererInstance
;   CKeyFramedModelInstance g_FireEffectFireballModel
;   CKeyFramedModelInstance g_FireEffectFireballSmallModel
;   CKeyFramedModelInstance g_FireEffectFireballGreenModel
;   CDemonSet g_CDemonSetInstance
;   UVector3 g_ZeroVector
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
;   core_set.cpp_CDemonSet_setLightingParameters_FUN_0056d380
;   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c0e70
        ;   Label: core_fire.cpp_CFireball_render_FUN_004c0e70
    PUSH ESI                            ; 004c0e71
    PUSH EDI                            ; 004c0e72
    PUSH EBP                            ; 004c0e73
    MOV EBP,ESP                         ; 004c0e74
    SUB ESP,0xd4                        ; 004c0e76
    AND ESP,0xfffffff8                  ; 004c0e7c
    MOV ESI,dword ptr [EBP + 0x14]      ; 004c0e7f
    MOV EDX,0x3f000000                  ; 004c0e82
    MOV ECX,dword ptr [ESI + 0x44]      ; 004c0e87
    MOV dword ptr [ESP + 0xc8],EDX      ; 004c0e8a
    TEST ECX,ECX                        ; 004c0e91
    JZ 0x004c0f7c                       ; 004c0e93
        ;   XREF to: 004c0f7c (CONDITIONAL_JUMP)  ; LAB_004c0f7c
    CMP dword ptr [ESI + 0x44],0x2      ; 004c0e99
        ;   Label: LAB_004c0e99
    JNZ 0x004c0eaa                      ; 004c0e9d
        ;   XREF to: 004c0eaa (CONDITIONAL_JUMP)  ; LAB_004c0eaa
    MOV dword ptr [ESP + 0xc8],0x3f2a7efa ; 004c0e9f
    PUSH ESI                            ; 004c0eaa
        ;   Label: LAB_004c0eaa
    MOV EDX,dword ptr [0x006703ec]      ; 004c0eab | g_CDemonRendererPtr2
    PUSH EDX                            ; 004c0eb1 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 004c0eb2
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004c0eb7
    PUSH 0x0                            ; 004c0eba
    LEA EAX,[ESI + 0x4c]                ; 004c0ebc
    PUSH EAX                            ; 004c0ebf
    MOV ECX,dword ptr [0x006703ec]      ; 004c0ec0 | g_CDemonRendererPtr2
    PUSH ECX                            ; 004c0ec6 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0 ; 004c0ec7
        ;   XREF to: 0048c4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    MOV EBX,dword ptr [ESI + 0x44]      ; 004c0ecc
    ADD ESP,0xc                         ; 004c0ecf
    TEST EBX,EBX                        ; 004c0ed2
    JNZ 0x004c0f8c                      ; 004c0ed4
        ;   XREF to: 004c0f8c (CONDITIONAL_JUMP)  ; LAB_004c0f8c
    MOV EBX,0x2d12f70                   ; 004c0eda | g_FireEffectFireballModel
    PUSH EBX                            ; 004c0edf | g_FireEffectFireballModel | g_FireEffectFireballSmallModel | g_FireEffectFireballGreenModel
        ;   Label: LAB_004c0edf
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 004c0ee0
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    MOV EDX,dword ptr [EAX + 0x5690]    ; 004c0ee5
    ADD ESP,0x4                         ; 004c0eeb
    MOV EAX,dword ptr [EDX]             ; 004c0eee
    MOV dword ptr [ESP + 0x8],EAX       ; 004c0ef0
    LEA EAX,[EDX + 0x4]                 ; 004c0ef4
    MOV EAX,dword ptr [EAX]             ; 004c0ef7
    MOV dword ptr [ESP + 0xc],EAX       ; 004c0ef9
    LEA EAX,[EDX + 0x8]                 ; 004c0efd
    MOV EAX,dword ptr [EAX]             ; 004c0f00
    MOV dword ptr [ESP + 0x10],EAX      ; 004c0f02
    MOV EAX,dword ptr [EDX + 0xc]       ; 004c0f06
    ADD EDX,0xc                         ; 004c0f09
    MOV dword ptr [ESP + 0x14],EAX      ; 004c0f0c
    LEA EAX,[EDX + 0x4]                 ; 004c0f10
    MOV EAX,dword ptr [EAX]             ; 004c0f13
    MOV dword ptr [ESP + 0x18],EAX      ; 004c0f15
    LEA EAX,[EDX + 0x8]                 ; 004c0f19
    MOV EAX,dword ptr [EAX]             ; 004c0f1c
    MOV dword ptr [ESP + 0x1c],EAX      ; 004c0f1e
    LEA EAX,[ESP + 0x8]                 ; 004c0f22
    PUSH EAX                            ; 004c0f26
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 004c0f27
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 004c0f2c
    MOV EDI,EAX                         ; 004c0f2f
    TEST EAX,EAX                        ; 004c0f31
    JZ 0x004c0f62                       ; 004c0f33
        ;   XREF to: 004c0f62 (CONDITIONAL_JUMP)  ; LAB_004c0f62
    PUSH 0x0                            ; 004c0f35
    LEA EAX,[ESP + 0x18]                ; 004c0f37
    PUSH EAX                            ; 004c0f3b
    LEA EAX,[ESP + 0x10]                ; 004c0f3c
    PUSH EAX                            ; 004c0f40
    PUSH 0x3f87558                      ; 004c0f41 | g_ZeroVector
    PUSH ESI                            ; 004c0f46
    MOV EAX,[0x006810c8]                ; 004c0f47 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH EAX                            ; 004c0f4c | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setLightingParameters_FUN_0056d380 ; 004c0f4d
        ;   XREF to: 0056d380 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setLightingParameters_FUN_0056d380(CDemonSet * this_ptr, CVector3f * position, UOrientationVector * orientation, CVector3f * aabb_min, ...)
    ADD ESP,0x18                        ; 004c0f52
    PUSH -0x1                           ; 004c0f55
    PUSH 0x0                            ; 004c0f57
    PUSH EBX                            ; 004c0f59 | g_FireEffectFireballModel
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 004c0f5a
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004c0f5f
    MOV EDX,dword ptr [0x006703ec]      ; 004c0f62 | g_CDemonRendererPtr2
        ;   Label: LAB_004c0f62
    PUSH EDX                            ; 004c0f68 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640 ; 004c0f69
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640(CDemonRenderer * this_ptr)
    MOV dword ptr [ESP + 0xc8],0x40800000 ; 004c0f7c
        ;   Label: LAB_004c0f7c
    JMP 0x004c0e99                      ; 004c0f87
        ;   XREF to: 004c0e99 (UNCONDITIONAL_JUMP)  ; LAB_004c0e99
    CMP EBX,0x1                         ; 004c0f8c
        ;   Label: LAB_004c0f8c
    JNZ 0x004c0f9b                      ; 004c0f8f
        ;   XREF to: 004c0f9b (CONDITIONAL_JUMP)  ; LAB_004c0f9b
    MOV EBX,0x2d130ec                   ; 004c0f91 | g_FireEffectFireballSmallModel
    JMP 0x004c0edf                      ; 004c0f96
        ;   XREF to: 004c0edf (UNCONDITIONAL_JUMP)  ; LAB_004c0edf
    MOV EBX,0x2d13268                   ; 004c0f9b | g_FireEffectFireballGreenModel
        ;   Label: LAB_004c0f9b
    JMP 0x004c0edf                      ; 004c0fa0
        ;   XREF to: 004c0edf (UNCONDITIONAL_JUMP)  ; LAB_004c0edf

