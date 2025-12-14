; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_bat.cpp_CBat_FUN_00414bf0(CBat * this_ptr)
;
; Parameters:
; CBat *           Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414bf0
        ;   Label: core_bat.cpp_CBat_FUN_00414bf0
    PUSH ESI                            ; 00414bf1
    SUB ESP,0x18                        ; 00414bf2
    MOV EBX,dword ptr [ESP + 0x24]      ; 00414bf5
    PUSH EBX                            ; 00414bf9
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 00414bfa
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 00414bff
    MOV EAX,ESP                         ; 00414c02
    PUSH EAX                            ; 00414c04
    MOV ESI,dword ptr [EBX + 0x154]     ; 00414c05
    PUSH EBX                            ; 00414c0b
    CALL dword ptr [ESI + 0x14]         ; 00414c0c
    ADD ESP,0x8                         ; 00414c0f
    PUSH EAX                            ; 00414c12
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 00414c13
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 00414c18
    MOV ESI,EAX                         ; 00414c1b
    TEST EAX,EAX                        ; 00414c1d
    JNZ 0x00414c32                      ; 00414c1f
        ;   XREF to: 00414c32 (CONDITIONAL_JUMP)  ; LAB_00414c32
    PUSH EBX                            ; 00414c21
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 00414c22
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00414c27
    MOV EAX,ESI                         ; 00414c2a
    ADD ESP,0x18                        ; 00414c2c
    POP ESI                             ; 00414c2f
    POP EBX                             ; 00414c30
    RET                                 ; 00414c31
    PUSH -0x1                           ; 00414c32
        ;   Label: LAB_00414c32
    LEA EAX,[EBX + 0x188]               ; 00414c34
    PUSH dword ptr [EBX + 0x184]        ; 00414c3a
    PUSH EAX                            ; 00414c40
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 00414c41
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00414c46
    PUSH EBX                            ; 00414c49
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 00414c4a
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00414c4f
    MOV EAX,ESI                         ; 00414c52
    ADD ESP,0x18                        ; 00414c54
    POP ESI                             ; 00414c57
    POP EBX                             ; 00414c58
    RET                                 ; 00414c59

