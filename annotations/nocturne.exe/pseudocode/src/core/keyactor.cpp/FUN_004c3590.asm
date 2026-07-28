; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_keyactor_cpp_FUN_004c3590(CDemonActor *param_1)
;
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

    PUSH EBX                            ; 004c3590
        ;   Label: core_keyactor.cpp_FUN_004c3590
    PUSH ESI                            ; 004c3591
    SUB ESP,0x18                        ; 004c3592
    MOV EBX,dword ptr [ESP + 0x24]      ; 004c3595
    PUSH EBX                            ; 004c3599
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 004c359a
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20(CDemonActor * actor)
    ADD ESP,0x4                         ; 004c359f
    PUSH 0x0                            ; 004c35a2
    LEA EAX,[ESP + 0x4]                 ; 004c35a4
    PUSH EAX                            ; 004c35a8
    MOV ESI,dword ptr [EBX + 0x14c]     ; 004c35a9
    PUSH EBX                            ; 004c35af
    CALL dword ptr [ESI + 0x14]         ; 004c35b0
    ADD ESP,0x8                         ; 004c35b3
    PUSH EAX                            ; 004c35b6
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 004c35b7
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(CBoundingBox3D * this_ptr)
    ADD ESP,0x8                         ; 004c35bc
    MOV ESI,EAX                         ; 004c35bf
    TEST EAX,EAX                        ; 004c35c1
    JNZ 0x004c35d6                      ; 004c35c3
        ;   XREF to: 004c35d6 (CONDITIONAL_JUMP)  ; LAB_004c35d6
    PUSH EBX                            ; 004c35c5
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 004c35c6
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004c35cb
    MOV EAX,ESI                         ; 004c35ce
    ADD ESP,0x18                        ; 004c35d0
    POP ESI                             ; 004c35d3
    POP EBX                             ; 004c35d4
    RET                                 ; 004c35d5
    PUSH -0x1                           ; 004c35d6
        ;   Label: LAB_004c35d6
    LEA EAX,[EBX + 0x150]               ; 004c35d8
    PUSH 0x0                            ; 004c35de
    PUSH EAX                            ; 004c35e0
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 004c35e1
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004c35e6
    PUSH EBX                            ; 004c35e9
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 004c35ea
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004c35ef
    MOV EAX,ESI                         ; 004c35f2
    ADD ESP,0x18                        ; 004c35f4
    POP ESI                             ; 004c35f7
    POP EBX                             ; 004c35f8
    RET                                 ; 004c35f9

