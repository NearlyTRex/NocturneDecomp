; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_muzzle_cpp_CMuzzleEffect_render_FUN_0059d440(CMuzzleEffect *this_ptr)
;
; Parameters:
; CMuzzleEffect *  Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_render_FUN_0049c780 at 0049c941
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_01ba5c50
;   undefined4 g_CDemonSetInstance.lighting_quality_mode
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
;   crt_stdlib.c_rand_FUN_005b849c
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
;   engine_drender.cpp_pop_FUN_0046b4a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059d440
        ;   Label: core_muzzle.cpp_CMuzzleEffect_render_FUN_0059d440
    PUSH EBP                            ; 0059d441
    SUB ESP,0x2c                        ; 0059d442
    MOV EBX,dword ptr [ESP + 0x38]      ; 0059d445
    CMP dword ptr [EBX],0x2             ; 0059d449
    JZ 0x0059d454                       ; 0059d44c
        ;   XREF to: 0059d454 (CONDITIONAL_JUMP)  ; LAB_0059d454
    ADD ESP,0x2c                        ; 0059d44e
    POP EBP                             ; 0059d451
    POP EBX                             ; 0059d452
    RET                                 ; 0059d453
    PUSH EDI                            ; 0059d454
        ;   Label: LAB_0059d454
    PUSH ESI                            ; 0059d455
    LEA EAX,[EBX + 0x4]                 ; 0059d456
    PUSH EAX                            ; 0059d459
    MOV ECX,dword ptr [0x0060b280]      ; 0059d45a | DAT_0060b280
    PUSH ECX                            ; 0059d460 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 0059d461
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0059d466
    PUSH 0x0                            ; 0059d469
    LEA EAX,[EBX + 0x10]                ; 0059d46b
    PUSH EAX                            ; 0059d46e
    MOV EBX,dword ptr [0x0060b280]      ; 0059d46f | DAT_0060b280
    PUSH EBX                            ; 0059d475 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 0059d476
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0059d47b
    PUSH 0x40c90fdb                     ; 0059d47e
    PUSH 0x0                            ; 0059d483
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0059d485
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x38],EAX      ; 0059d48a
    FLD float ptr [ESP + 0x38]          ; 0059d48e
    ADD ESP,0x8                         ; 0059d492
    XOR ESI,ESI                         ; 0059d495
    FSTP float ptr [ESP + 0x2c]         ; 0059d497
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0059d49b
    PUSH ESI                            ; 0059d49f
    MOV dword ptr [ESP + 0x20],EAX      ; 0059d4a0
    LEA EAX,[ESP + 0x18]                ; 0059d4a4
    PUSH EAX                            ; 0059d4a8
    MOV EBP,dword ptr [0x0060b280]      ; 0059d4a9 | DAT_0060b280
    PUSH EBP                            ; 0059d4af | DAT_01ba5c50
    MOV dword ptr [ESP + 0x20],ESI      ; 0059d4b0
    MOV dword ptr [ESP + 0x24],ESI      ; 0059d4b4
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 0059d4b8
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0059d4bd
    MOV EAX,[0x0061b5a8]                ; 0059d4c0 | g_CDemonSetPtr
    PUSH 0x1                            ; 0059d4c5
    MOV dword ptr [EAX + 0x15ac90],0x1  ; 0059d4c7 | g_CDemonSetInstance.lighting_quality_mode
    MOV EAX,[0x0060b280]                ; 0059d4d1 | DAT_0060b280
    PUSH EAX                            ; 0059d4d6 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 0059d4d7
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0059d4dc
    CALL crt_stdlib.c_rand_FUN_005b849c ; 0059d4df
        ;   XREF to: 005b849c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005b849c()
    AND EAX,0x3fff                      ; 0059d4e4
    ADD EAX,0x1800                      ; 0059d4e9
    PUSH EAX                            ; 0059d4ee
    MOV EDX,dword ptr [0x0060b280]      ; 0059d4ef | DAT_0060b280
    PUSH EDX                            ; 0059d4f5 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0 ; 0059d4f6
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0059d4fb
    PUSH 0x63                           ; 0059d4fe
    PUSH 0x0                            ; 0059d500
    PUSH 0x26681e0                      ; 0059d502
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0 ; 0059d507
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0059d50c
    MOV dword ptr [ESP + 0x20],ESI      ; 0059d50f
    MOV dword ptr [ESP + 0x24],ESI      ; 0059d513
    MOV dword ptr [ESP + 0x28],0x3fc90fdb ; 0059d517
    PUSH 0x0                            ; 0059d51f
    LEA EAX,[ESP + 0x24]                ; 0059d521
    PUSH EAX                            ; 0059d525
    MOV EDI,dword ptr [0x0060b280]      ; 0059d526 | DAT_0060b280
    PUSH EDI                            ; 0059d52c | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 0059d52d
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0059d532
    PUSH 0x63                           ; 0059d535
    PUSH 0x0                            ; 0059d537
    PUSH 0x26681e0                      ; 0059d539
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0 ; 0059d53e
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0059d543
    MOV EBP,dword ptr [0x0060b280]      ; 0059d546 | DAT_0060b280
    PUSH EBP                            ; 0059d54c | DAT_01ba5c50
    CALL engine_drender.cpp_pop_FUN_0046b4a0 ; 0059d54d
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 0059d552
    XOR EAX,EAX                         ; 0059d555
    MOV dword ptr [ESP + 0x8],EAX       ; 0059d557
    PUSH EAX                            ; 0059d55b
    MOV dword ptr [ESP + 0x10],EAX      ; 0059d55c
    LEA EAX,[ESP + 0xc]                 ; 0059d560
    PUSH EAX                            ; 0059d564
    MOV EBX,dword ptr [0x0060b280]      ; 0059d565 | DAT_0060b280
    MOV ECX,0x3f490fdb                  ; 0059d56b
    PUSH EBX                            ; 0059d570 | DAT_01ba5c50
    MOV dword ptr [ESP + 0x1c],ECX      ; 0059d571
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 0059d575
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0059d57a
    PUSH 0x63                           ; 0059d57d
    PUSH 0x0                            ; 0059d57f
    PUSH 0x26681e0                      ; 0059d581
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0 ; 0059d586
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0059d58b
    MOV ESI,dword ptr [0x0060b280]      ; 0059d58e | DAT_0060b280
    PUSH ESI                            ; 0059d594 | DAT_01ba5c50
    CALL engine_drender.cpp_pop_FUN_0046b4a0 ; 0059d595
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 0059d59a
    MOV EDI,dword ptr [0x0060b280]      ; 0059d59d | DAT_0060b280
    MOV EAX,[0x0061b5a8]                ; 0059d5a3 | g_CDemonSetPtr
    PUSH EDI                            ; 0059d5a8 | DAT_01ba5c50
    MOV dword ptr [EAX + 0x15ac90],0x0  ; 0059d5a9 | g_CDemonSetInstance.lighting_quality_mode
    CALL engine_drender.cpp_pop_FUN_0046b4a0 ; 0059d5b3
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 0059d5b8
    MOV EBP,dword ptr [0x0060b280]      ; 0059d5bb | DAT_0060b280
    PUSH EBP                            ; 0059d5c1 | DAT_01ba5c50
    CALL engine_drender.cpp_pop_FUN_0046b4a0 ; 0059d5c2
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 0059d5c7
    PUSH 0x0                            ; 0059d5ca
    MOV EAX,[0x0060b280]                ; 0059d5cc | DAT_0060b280
    PUSH EAX                            ; 0059d5d1 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 0059d5d2
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0059d5d7
    POP ESI                             ; 0059d5da
    POP EDI                             ; 0059d5db
    ADD ESP,0x2c                        ; 0059d5dc
    POP EBP                             ; 0059d5df
    POP EBX                             ; 0059d5e0
    RET                                 ; 0059d5e1

