; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown int core_pendulum_cpp_FUN_0054a2f0(void)
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

    PUSH EBX                            ; 0054a2f0
        ;   Label: core_pendulum.cpp_FUN_0054a2f0
    PUSH ESI                            ; 0054a2f1
    SUB ESP,0x18                        ; 0054a2f2
    MOV EBX,dword ptr [ESP + 0x24]      ; 0054a2f5
    PUSH EBX                            ; 0054a2f9
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 0054a2fa
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 0054a2ff
    MOV EAX,ESP                         ; 0054a302
    PUSH EAX                            ; 0054a304
    MOV ESI,dword ptr [EBX + 0x154]     ; 0054a305
    PUSH EBX                            ; 0054a30b
    CALL dword ptr [ESI + 0x14]         ; 0054a30c
    ADD ESP,0x8                         ; 0054a30f
    PUSH EAX                            ; 0054a312
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 0054a313
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 0054a318
    MOV ESI,EAX                         ; 0054a31b
    TEST EAX,EAX                        ; 0054a31d
    JNZ 0x0054a332                      ; 0054a31f
        ;   XREF to: 0054a332 (CONDITIONAL_JUMP)  ; LAB_0054a332
    PUSH EBX                            ; 0054a321
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 0054a322
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0054a327
    MOV EAX,ESI                         ; 0054a32a
    ADD ESP,0x18                        ; 0054a32c
    POP ESI                             ; 0054a32f
    POP EBX                             ; 0054a330
    RET                                 ; 0054a331
    PUSH -0x1                           ; 0054a332
        ;   Label: LAB_0054a332
    LEA EAX,[EBX + 0x158]               ; 0054a334
    PUSH 0x0                            ; 0054a33a
    PUSH EAX                            ; 0054a33c
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 0054a33d
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0054a342
    PUSH EBX                            ; 0054a345
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 0054a346
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0054a34b
    MOV EAX,ESI                         ; 0054a34e
    ADD ESP,0x18                        ; 0054a350
    POP ESI                             ; 0054a353
    POP EBX                             ; 0054a354
    RET                                 ; 0054a355

