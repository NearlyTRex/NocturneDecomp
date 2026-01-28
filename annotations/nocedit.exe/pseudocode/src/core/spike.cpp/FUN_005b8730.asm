; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown int core_spike_cpp_FUN_005b8730(void)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b8730
        ;   Label: core_spike.cpp_FUN_005b8730
    PUSH ESI                            ; 005b8731
    SUB ESP,0x18                        ; 005b8732
    MOV EBX,dword ptr [ESP + 0x24]      ; 005b8735
    PUSH EBX                            ; 005b8739
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 005b873a
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 005b873f
    MOV EAX,ESP                         ; 005b8742
    PUSH EAX                            ; 005b8744
    MOV ESI,dword ptr [EBX + 0x154]     ; 005b8745
    PUSH EBX                            ; 005b874b
    CALL dword ptr [ESI + 0x14]         ; 005b874c
    ADD ESP,0x8                         ; 005b874f
    PUSH EAX                            ; 005b8752
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 005b8753
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 005b8758
    MOV ESI,EAX                         ; 005b875b
    TEST EAX,EAX                        ; 005b875d
    JNZ 0x005b8772                      ; 005b875f
        ;   XREF to: 005b8772 (CONDITIONAL_JUMP)  ; LAB_005b8772
    PUSH EBX                            ; 005b8761
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 005b8762
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005b8767
    MOV EAX,ESI                         ; 005b876a
    ADD ESP,0x18                        ; 005b876c
    POP ESI                             ; 005b876f
    POP EBX                             ; 005b8770
    RET                                 ; 005b8771
    PUSH -0x1                           ; 005b8772
        ;   Label: LAB_005b8772
    LEA EAX,[EBX + 0x158]               ; 005b8774
    PUSH 0x0                            ; 005b877a
    PUSH EAX                            ; 005b877c
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 005b877d
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 005b8782
    PUSH EBX                            ; 005b8785
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 005b8786
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005b878b
    MOV EAX,ESI                         ; 005b878e
    ADD ESP,0x18                        ; 005b8790
    POP ESI                             ; 005b8793
    POP EBX                             ; 005b8794
    RET                                 ; 005b8795

