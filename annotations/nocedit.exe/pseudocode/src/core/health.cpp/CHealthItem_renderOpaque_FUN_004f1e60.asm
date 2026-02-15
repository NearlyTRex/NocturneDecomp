; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_health_cpp_CHealthItem_renderOpaque_FUN_004f1e60(CHealthItem *this_ptr)
;
; Parameters:
; CHealthItem *    Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f1e60
        ;   Label: core_health.cpp_CHealthItem_renderOpaque_FUN_004f1e60
    PUSH ESI                            ; 004f1e61
    SUB ESP,0x18                        ; 004f1e62
    MOV EBX,dword ptr [ESP + 0x24]      ; 004f1e65
    PUSH EBX                            ; 004f1e69
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 004f1e6a
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 004f1e6f
    MOV EAX,ESP                         ; 004f1e72
    PUSH EAX                            ; 004f1e74
    MOV ESI,dword ptr [EBX + 0x154]     ; 004f1e75
    PUSH EBX                            ; 004f1e7b
    CALL dword ptr [ESI + 0x14]         ; 004f1e7c
    ADD ESP,0x8                         ; 004f1e7f
    PUSH EAX                            ; 004f1e82
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 004f1e83
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 004f1e88
    MOV ESI,EAX                         ; 004f1e8b
    TEST EAX,EAX                        ; 004f1e8d
    JNZ 0x004f1ea2                      ; 004f1e8f
        ;   XREF to: 004f1ea2 (CONDITIONAL_JUMP)  ; LAB_004f1ea2
    PUSH EBX                            ; 004f1e91
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 004f1e92
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004f1e97
    MOV EAX,ESI                         ; 004f1e9a
    ADD ESP,0x18                        ; 004f1e9c
    POP ESI                             ; 004f1e9f
    POP EBX                             ; 004f1ea0
    RET                                 ; 004f1ea1
    PUSH -0x1                           ; 004f1ea2
        ;   Label: LAB_004f1ea2
    LEA EAX,[EBX + 0x158]               ; 004f1ea4
    PUSH 0x0                            ; 004f1eaa
    PUSH EAX                            ; 004f1eac
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 004f1ead
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004f1eb2
    PUSH EBX                            ; 004f1eb5
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 004f1eb6
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004f1ebb
    MOV EAX,ESI                         ; 004f1ebe
    ADD ESP,0x18                        ; 004f1ec0
    POP ESI                             ; 004f1ec3
    POP EBX                             ; 004f1ec4
    RET                                 ; 004f1ec5

