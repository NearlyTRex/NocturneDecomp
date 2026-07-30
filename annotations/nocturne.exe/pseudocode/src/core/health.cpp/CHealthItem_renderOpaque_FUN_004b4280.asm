; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_health_cpp_CHealthItem_renderOpaque_FUN_004b4280(CDemonActor *param_1)
;
; Local Variables:
; undefined        Stack[-0x20]:1  local_20
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b4280
        ;   Label: core_health.cpp_CHealthItem_renderOpaque_FUN_004b4280
    PUSH ESI                            ; 004b4281
    SUB ESP,0x18                        ; 004b4282
    MOV EBX,dword ptr [ESP + 0x24]      ; 004b4285
    PUSH EBX                            ; 004b4289
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 004b428a
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20(CDemonActor * actor)
    ADD ESP,0x4                         ; 004b428f
    PUSH 0x0                            ; 004b4292
    LEA EAX,[ESP + 0x4]                 ; 004b4294
    PUSH EAX                            ; 004b4298
    MOV ESI,dword ptr [EBX + 0x14c]     ; 004b4299
    PUSH EBX                            ; 004b429f
    CALL dword ptr [ESI + 0x14]         ; 004b42a0
    ADD ESP,0x8                         ; 004b42a3
    PUSH EAX                            ; 004b42a6
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 004b42a7
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(CBoundingBox3D * this_ptr)
    ADD ESP,0x8                         ; 004b42ac
    MOV ESI,EAX                         ; 004b42af
    TEST EAX,EAX                        ; 004b42b1
    JNZ 0x004b42c6                      ; 004b42b3
        ;   XREF to: 004b42c6 (CONDITIONAL_JUMP)  ; LAB_004b42c6
    PUSH EBX                            ; 004b42b5
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 004b42b6
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004b42bb
    MOV EAX,ESI                         ; 004b42be
    ADD ESP,0x18                        ; 004b42c0
    POP ESI                             ; 004b42c3
    POP EBX                             ; 004b42c4
    RET                                 ; 004b42c5
    PUSH -0x1                           ; 004b42c6
        ;   Label: LAB_004b42c6
    LEA EAX,[EBX + 0x150]               ; 004b42c8
    PUSH 0x0                            ; 004b42ce
    PUSH EAX                            ; 004b42d0
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 004b42d1
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004b42d6
    PUSH EBX                            ; 004b42d9
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 004b42da
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004b42df
    MOV EAX,ESI                         ; 004b42e2
    ADD ESP,0x18                        ; 004b42e4
    POP ESI                             ; 004b42e7
    POP EBX                             ; 004b42e8
    RET                                 ; 004b42e9

