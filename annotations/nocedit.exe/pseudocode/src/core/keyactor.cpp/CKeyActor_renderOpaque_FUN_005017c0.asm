; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_keyactor_cpp_CKeyActor_renderOpaque_FUN_005017c0(CKeyActor *this_ptr)
;
; Parameters:
; CKeyActor *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005017c0
        ;   Label: core_keyactor.cpp_CKeyActor_renderOpaque_FUN_005017c0
    PUSH ESI                            ; 005017c1
    SUB ESP,0x18                        ; 005017c2
    MOV EBX,dword ptr [ESP + 0x24]      ; 005017c5
    PUSH EBX                            ; 005017c9
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 005017ca
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 005017cf
    MOV EAX,ESP                         ; 005017d2
    PUSH EAX                            ; 005017d4
    MOV ESI,dword ptr [EBX + 0x154]     ; 005017d5
    PUSH EBX                            ; 005017db
    CALL dword ptr [ESI + 0x14]         ; 005017dc
    ADD ESP,0x8                         ; 005017df
    PUSH EAX                            ; 005017e2
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 005017e3
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 005017e8
    MOV ESI,EAX                         ; 005017eb
    TEST EAX,EAX                        ; 005017ed
    JNZ 0x00501802                      ; 005017ef
        ;   XREF to: 00501802 (CONDITIONAL_JUMP)  ; LAB_00501802
    PUSH EBX                            ; 005017f1
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 005017f2
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005017f7
    MOV EAX,ESI                         ; 005017fa
    ADD ESP,0x18                        ; 005017fc
    POP ESI                             ; 005017ff
    POP EBX                             ; 00501800
    RET                                 ; 00501801
    PUSH -0x1                           ; 00501802
        ;   Label: LAB_00501802
    LEA EAX,[EBX + 0x158]               ; 00501804
    PUSH 0x0                            ; 0050180a
    PUSH EAX                            ; 0050180c
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 0050180d
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00501812
    PUSH EBX                            ; 00501815
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 00501816
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0050181b
    MOV EAX,ESI                         ; 0050181e
    ADD ESP,0x18                        ; 00501820
    POP ESI                             ; 00501823
    POP EBX                             ; 00501824
    RET                                 ; 00501825

