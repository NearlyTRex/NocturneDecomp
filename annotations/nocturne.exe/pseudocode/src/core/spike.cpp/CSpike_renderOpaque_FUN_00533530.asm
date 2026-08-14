; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_spike_cpp_CSpike_renderOpaque_FUN_00533530(CSpike *this_ptr)
;
; Parameters:
; CSpike *         Stack[0x4]:4   this_ptr
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

    PUSH EBX                            ; 00533530
        ;   Label: core_spike.cpp_CSpike_renderOpaque_FUN_00533530
    PUSH ESI                            ; 00533531
    SUB ESP,0x18                        ; 00533532
    MOV EBX,dword ptr [ESP + 0x24]      ; 00533535
    PUSH EBX                            ; 00533539
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 0053353a
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0053353f
    PUSH 0x0                            ; 00533542
    LEA EAX,[ESP + 0x4]                 ; 00533544
    PUSH EAX                            ; 00533548
    MOV ESI,dword ptr [EBX + 0x14c]     ; 00533549
    PUSH EBX                            ; 0053354f
    CALL dword ptr [ESI + 0x14]         ; 00533550
    ADD ESP,0x8                         ; 00533553
    PUSH EAX                            ; 00533556
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 00533557
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(CBoundingBox3D * this_ptr)
    ADD ESP,0x8                         ; 0053355c
    MOV ESI,EAX                         ; 0053355f
    TEST EAX,EAX                        ; 00533561
    JNZ 0x00533576                      ; 00533563
        ;   XREF to: 00533576 (CONDITIONAL_JUMP)  ; LAB_00533576
    PUSH EBX                            ; 00533565
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 00533566
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0053356b
    MOV EAX,ESI                         ; 0053356e
    ADD ESP,0x18                        ; 00533570
    POP ESI                             ; 00533573
    POP EBX                             ; 00533574
    RET                                 ; 00533575
    PUSH -0x1                           ; 00533576
        ;   Label: LAB_00533576
    LEA EAX,[EBX + 0x150]               ; 00533578
    PUSH 0x0                            ; 0053357e
    PUSH EAX                            ; 00533580
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 00533581
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00533586
    PUSH EBX                            ; 00533589
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 0053358a
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0053358f
    MOV EAX,ESI                         ; 00533592
    ADD ESP,0x18                        ; 00533594
    POP ESI                             ; 00533597
    POP EBX                             ; 00533598
    RET                                 ; 00533599

