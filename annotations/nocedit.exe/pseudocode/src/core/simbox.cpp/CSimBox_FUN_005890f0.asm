; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_simbox.cpp_CSimBox_FUN_005890f0(CSimBox * this_ptr)
;
; Parameters:
; CSimBox *        Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005890f0
        ;   Label: core_simbox.cpp_CSimBox_FUN_005890f0
    PUSH ESI                            ; 005890f1
    SUB ESP,0x18                        ; 005890f2
    MOV EBX,dword ptr [ESP + 0x24]      ; 005890f5
    PUSH EBX                            ; 005890f9
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 005890fa | void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005890ff
    MOV EAX,ESP                         ; 00589102
    PUSH EAX                            ; 00589104
    MOV ESI,dword ptr [EBX + 0x154]     ; 00589105
    PUSH EBX                            ; 0058910b
    CALL dword ptr [ESI + 0x14]         ; 0058910c
    ADD ESP,0x8                         ; 0058910f
    PUSH EAX                            ; 00589112
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 00589113 | int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00589118
    MOV ESI,EAX                         ; 0058911b
    TEST EAX,EAX                        ; 0058911d
    JNZ 0x00589132                      ; 0058911f | LAB_00589132
        ;   XREF to: 00589132 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 00589121
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 00589122 | void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00589127
    MOV EAX,ESI                         ; 0058912a
    ADD ESP,0x18                        ; 0058912c
    POP ESI                             ; 0058912f
    POP EBX                             ; 00589130
    RET                                 ; 00589131
    PUSH -0x1                           ; 00589132
        ;   Label: LAB_00589132
    LEA EAX,[EBX + 0x158]               ; 00589134
    PUSH 0x0                            ; 0058913a
    PUSH EAX                            ; 0058913c
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 0058913d | void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00589142
    PUSH EBX                            ; 00589145
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 00589146 | void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0058914b
    MOV EAX,ESI                         ; 0058914e
    ADD ESP,0x18                        ; 00589150
    POP ESI                             ; 00589153
    POP EBX                             ; 00589154
    RET                                 ; 00589155

