; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_ammo_cpp_CAmmo_renderOpaque_FUN_00410e80(CAmmo *this_ptr)
;
; Parameters:
; CAmmo *          Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410e80
        ;   Label: core_ammo.cpp_CAmmo_renderOpaque_FUN_00410e80
    PUSH ESI                            ; 00410e81
    SUB ESP,0x18                        ; 00410e82
    MOV EBX,dword ptr [ESP + 0x24]      ; 00410e85
    PUSH EBX                            ; 00410e89
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 00410e8a
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 00410e8f
    MOV EAX,ESP                         ; 00410e92
    PUSH EAX                            ; 00410e94
    MOV ESI,dword ptr [EBX + 0x154]     ; 00410e95
    PUSH EBX                            ; 00410e9b
    CALL dword ptr [ESI + 0x14]         ; 00410e9c
    ADD ESP,0x8                         ; 00410e9f
    PUSH EAX                            ; 00410ea2
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 00410ea3
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 00410ea8
    MOV ESI,EAX                         ; 00410eab
    TEST EAX,EAX                        ; 00410ead
    JNZ 0x00410ec2                      ; 00410eaf
        ;   XREF to: 00410ec2 (CONDITIONAL_JUMP)  ; LAB_00410ec2
    PUSH EBX                            ; 00410eb1
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 00410eb2
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00410eb7
    MOV EAX,ESI                         ; 00410eba
    ADD ESP,0x18                        ; 00410ebc
    POP ESI                             ; 00410ebf
    POP EBX                             ; 00410ec0
    RET                                 ; 00410ec1
    PUSH -0x1                           ; 00410ec2
        ;   Label: LAB_00410ec2
    LEA EAX,[EBX + 0x158]               ; 00410ec4
    PUSH 0x0                            ; 00410eca
    PUSH EAX                            ; 00410ecc
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 00410ecd
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00410ed2
    PUSH EBX                            ; 00410ed5
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 00410ed6
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00410edb
    MOV EAX,ESI                         ; 00410ede
    ADD ESP,0x18                        ; 00410ee0
    POP ESI                             ; 00410ee3
    POP EBX                             ; 00410ee4
    RET                                 ; 00410ee5

