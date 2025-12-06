; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_crossbow.cpp_CCrossbow_renderOpaque_FUN_00448e00(CCrossbow * this_ptr)
;
; Parameters:
; CCrossbow *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_crossbow.cpp_FUN_00449540
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00448e00
        ;   Label: core_crossbow.cpp_CCrossbow_renderOpaque_FUN_00448e00
    PUSH ESI                            ; 00448e01
    SUB ESP,0x1c                        ; 00448e02
    MOV EBX,dword ptr [ESP + 0x28]      ; 00448e05
    PUSH EBX                            ; 00448e09
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 00448e0a | void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00448e0f
    MOV EAX,ESP                         ; 00448e12
    PUSH EAX                            ; 00448e14
    MOV ESI,dword ptr [EBX + 0x154]     ; 00448e15
    PUSH EBX                            ; 00448e1b
    CALL dword ptr [ESI + 0x14]         ; 00448e1c
    ADD ESP,0x8                         ; 00448e1f
    PUSH EAX                            ; 00448e22
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 00448e23 | int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00448e28
    MOV ESI,EAX                         ; 00448e2b
    TEST EAX,EAX                        ; 00448e2d
    JNZ 0x00448e42                      ; 00448e2f | LAB_00448e42
        ;   XREF to: 00448e42 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 00448e31
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 00448e32 | void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00448e37
    MOV EAX,ESI                         ; 00448e3a
    ADD ESP,0x1c                        ; 00448e3c
    POP ESI                             ; 00448e3f
    POP EBX                             ; 00448e40
    RET                                 ; 00448e41
    PUSH -0x1                           ; 00448e42
        ;   Label: LAB_00448e42
    PUSH EBX                            ; 00448e44
    CALL core_crossbow.cpp_FUN_00449540 ; 00448e45 | undefined core_crossbow.cpp_FUN_00449540()
        ;   XREF to: 00449540 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x20],EAX      ; 00448e4a
    FLD float ptr [ESP + 0x20]          ; 00448e4e
    ADD ESP,0x4                         ; 00448e52
    SUB ESP,0x4                         ; 00448e55
    LEA EAX,[EBX + 0x158]               ; 00448e58
    FSTP float ptr [ESP]                ; 00448e5e
    PUSH EAX                            ; 00448e61
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 00448e62 | void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00448e67
    PUSH EBX                            ; 00448e6a
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 00448e6b | void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00448e70
    MOV EAX,ESI                         ; 00448e73
    ADD ESP,0x1c                        ; 00448e75
    POP ESI                             ; 00448e78
    POP EBX                             ; 00448e79
    RET                                 ; 00448e7a

