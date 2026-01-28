; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_turret_cpp_CTurret_FUN_005e2320(CTurret *this_ptr)
;
; Parameters:
; CTurret *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
;   core_turret.cpp_CTurret_getCurFrame_FUN_005e2b30
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e2320
        ;   Label: core_turret.cpp_CTurret_FUN_005e2320
    PUSH ESI                            ; 005e2321
    PUSH EBP                            ; 005e2322
    SUB ESP,0x1c                        ; 005e2323
    MOV EBX,dword ptr [ESP + 0x2c]      ; 005e2326
    PUSH EBX                            ; 005e232a
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 005e232b
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 005e2330
    MOV ESI,ESP                         ; 005e2333
    PUSH ESI                            ; 005e2335
    MOV EAX,dword ptr [EBX + 0x154]     ; 005e2336
    PUSH EBX                            ; 005e233c
    CALL dword ptr [EAX + 0x14]         ; 005e233d
    ADD ESP,0x8                         ; 005e2340
    PUSH EAX                            ; 005e2343
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 005e2344
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 005e2349
    MOV ESI,EAX                         ; 005e234c
    TEST EAX,EAX                        ; 005e234e
    JZ 0x005e237c                       ; 005e2350
        ;   XREF to: 005e237c (CONDITIONAL_JUMP)  ; LAB_005e237c
    PUSH -0x1                           ; 005e2352
    PUSH 0x0                            ; 005e2354
    PUSH EBX                            ; 005e2356
    CALL core_turret.cpp_CTurret_getCurFrame_FUN_005e2b30 ; 005e2357
        ;   XREF to: 005e2b30 (UNCONDITIONAL_CALL)  ; undefined core_turret.cpp_CTurret_getCurFrame_FUN_005e2b30()
    MOV dword ptr [ESP + 0x24],EAX      ; 005e235c
    FLD float ptr [ESP + 0x24]          ; 005e2360
    ADD ESP,0x8                         ; 005e2364
    SUB ESP,0x4                         ; 005e2367
    LEA EAX,[EBX + 0x158]               ; 005e236a
    FSTP float ptr [ESP]                ; 005e2370
    PUSH EAX                            ; 005e2373
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 005e2374
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 005e2379
    PUSH EBX                            ; 005e237c
        ;   Label: LAB_005e237c
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 005e237d
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005e2382
    TEST ESI,ESI                        ; 005e2385
    JNZ 0x005e2392                      ; 005e2387
        ;   XREF to: 005e2392 (CONDITIONAL_JUMP)  ; LAB_005e2392
    MOV EAX,ESI                         ; 005e2389
        ;   Label: LAB_005e2389
    ADD ESP,0x1c                        ; 005e238b
    POP EBP                             ; 005e238e
    POP ESI                             ; 005e238f
    POP EBX                             ; 005e2390
    RET                                 ; 005e2391
    LEA EAX,[EBX + 0x584]               ; 005e2392
        ;   Label: LAB_005e2392
    PUSH EAX                            ; 005e2398
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 005e2399
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    MOV EDX,dword ptr [EAX + 0x110]     ; 005e239e
    ADD ESP,0x4                         ; 005e23a4
    CMP EDX,0x1                         ; 005e23a7
    JL 0x005e2389                       ; 005e23aa
        ;   XREF to: 005e2389 (CONDITIONAL_JUMP)  ; LAB_005e2389
    PUSH EDI                            ; 005e23ac
    LEA EAX,[EBX + 0x20]                ; 005e23ad
    PUSH EAX                            ; 005e23b0
    MOV ECX,dword ptr [0x006703ec]      ; 005e23b1 | g_CDemonRendererPtr2
    PUSH ECX                            ; 005e23b7 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 005e23b8
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 005e23bd
    PUSH 0x0                            ; 005e23c0
    LEA EAX,[EBX + 0x578]               ; 005e23c2
    PUSH EAX                            ; 005e23c8
    MOV EDI,dword ptr [0x006703ec]      ; 005e23c9 | g_CDemonRendererPtr2
    PUSH EDI                            ; 005e23cf | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 005e23d0
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 005e23d5
    PUSH -0x1                           ; 005e23d8
    PUSH 0x1                            ; 005e23da
    PUSH EBX                            ; 005e23dc
    CALL core_turret.cpp_CTurret_getCurFrame_FUN_005e2b30 ; 005e23dd
        ;   XREF to: 005e2b30 (UNCONDITIONAL_CALL)  ; undefined core_turret.cpp_CTurret_getCurFrame_FUN_005e2b30()
    MOV dword ptr [ESP + 0x28],EAX      ; 005e23e2
    FLD float ptr [ESP + 0x28]          ; 005e23e6
    ADD ESP,0x8                         ; 005e23ea
    SUB ESP,0x4                         ; 005e23ed
    ADD EBX,0x584                       ; 005e23f0
    FSTP float ptr [ESP]                ; 005e23f6
    PUSH EBX                            ; 005e23f9
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 005e23fa
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 005e23ff
    MOV EBP,dword ptr [0x006703ec]      ; 005e2402 | g_CDemonRendererPtr2
    PUSH EBP                            ; 005e2408 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 005e2409
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()

