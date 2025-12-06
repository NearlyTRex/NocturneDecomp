; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_drip.cpp_FUN_0048e6c0()
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

    PUSH EBX                            ; 0048e6c0
        ;   Label: core_drip.cpp_FUN_0048e6c0
    PUSH ESI                            ; 0048e6c1
    SUB ESP,0x18                        ; 0048e6c2
    MOV EBX,dword ptr [ESP + 0x24]      ; 0048e6c5
    PUSH EBX                            ; 0048e6c9
    MOV dword ptr [EBX + 0x338],0x0     ; 0048e6ca
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 0048e6d4 | void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0048e6d9
    MOV EAX,ESP                         ; 0048e6dc
    PUSH EAX                            ; 0048e6de
    MOV ESI,dword ptr [EBX + 0x154]     ; 0048e6df
    PUSH EBX                            ; 0048e6e5
    CALL dword ptr [ESI + 0x14]         ; 0048e6e6
    ADD ESP,0x8                         ; 0048e6e9
    PUSH EAX                            ; 0048e6ec
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 0048e6ed | int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0048e6f2
    MOV ESI,EAX                         ; 0048e6f5
    TEST EAX,EAX                        ; 0048e6f7
    JNZ 0x0048e70c                      ; 0048e6f9 | LAB_0048e70c
        ;   XREF to: 0048e70c (CONDITIONAL_JUMP)
    PUSH EBX                            ; 0048e6fb
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 0048e6fc | void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0048e701
    MOV EAX,ESI                         ; 0048e704
    ADD ESP,0x18                        ; 0048e706
    POP ESI                             ; 0048e709
    POP EBX                             ; 0048e70a
    RET                                 ; 0048e70b
    PUSH -0x1                           ; 0048e70c
        ;   Label: LAB_0048e70c
    LEA EAX,[EBX + 0x158]               ; 0048e70e
    PUSH 0x0                            ; 0048e714
    PUSH EAX                            ; 0048e716
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 0048e717 | void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0048e71c
    MOV dword ptr [EBX + 0x338],0x1     ; 0048e71f
    PUSH EBX                            ; 0048e729
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 0048e72a | void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0048e72f
    MOV EAX,ESI                         ; 0048e732
    ADD ESP,0x18                        ; 0048e734
    POP ESI                             ; 0048e737
    POP EBX                             ; 0048e738
    RET                                 ; 0048e739

