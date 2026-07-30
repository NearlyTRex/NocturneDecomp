; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_simbox_cpp_CSimBox_renderOpaque_FUN_00516f50(CDemonActor *param_1)
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

    PUSH EBX                            ; 00516f50
        ;   Label: core_simbox.cpp_CSimBox_renderOpaque_FUN_00516f50
    PUSH ESI                            ; 00516f51
    SUB ESP,0x18                        ; 00516f52
    MOV EBX,dword ptr [ESP + 0x24]      ; 00516f55
    PUSH EBX                            ; 00516f59
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 00516f5a
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20(CDemonActor * actor)
    ADD ESP,0x4                         ; 00516f5f
    PUSH 0x0                            ; 00516f62
    LEA EAX,[ESP + 0x4]                 ; 00516f64
    PUSH EAX                            ; 00516f68
    MOV ESI,dword ptr [EBX + 0x14c]     ; 00516f69
    PUSH EBX                            ; 00516f6f
    CALL dword ptr [ESI + 0x14]         ; 00516f70
    ADD ESP,0x8                         ; 00516f73
    PUSH EAX                            ; 00516f76
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 00516f77
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(CBoundingBox3D * this_ptr)
    ADD ESP,0x8                         ; 00516f7c
    MOV ESI,EAX                         ; 00516f7f
    TEST EAX,EAX                        ; 00516f81
    JNZ 0x00516f96                      ; 00516f83
        ;   XREF to: 00516f96 (CONDITIONAL_JUMP)  ; LAB_00516f96
    PUSH EBX                            ; 00516f85
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 00516f86
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00516f8b
    MOV EAX,ESI                         ; 00516f8e
    ADD ESP,0x18                        ; 00516f90
    POP ESI                             ; 00516f93
    POP EBX                             ; 00516f94
    RET                                 ; 00516f95
    PUSH -0x1                           ; 00516f96
        ;   Label: LAB_00516f96
    LEA EAX,[EBX + 0x150]               ; 00516f98
    PUSH 0x0                            ; 00516f9e
    PUSH EAX                            ; 00516fa0
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 00516fa1
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00516fa6
    PUSH EBX                            ; 00516fa9
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 00516faa
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00516faf
    MOV EAX,ESI                         ; 00516fb2
    ADD ESP,0x18                        ; 00516fb4
    POP ESI                             ; 00516fb7
    POP EBX                             ; 00516fb8
    RET                                 ; 00516fb9

