; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_pendulum_cpp_CPendulum_renderOpaque_FUN_004f3b90(CPendulum *this_ptr)
;
; Parameters:
; CPendulum *      Stack[0x4]:4   this_ptr
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

    PUSH EBX                            ; 004f3b90
        ;   Label: core_pendulum.cpp_CPendulum_renderOpaque_FUN_004f3b90
    PUSH ESI                            ; 004f3b91
    SUB ESP,0x18                        ; 004f3b92
    MOV EBX,dword ptr [ESP + 0x24]      ; 004f3b95
    PUSH EBX                            ; 004f3b99
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 004f3b9a
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20(CDemonActor * actor)
    ADD ESP,0x4                         ; 004f3b9f
    PUSH 0x0                            ; 004f3ba2
    LEA EAX,[ESP + 0x4]                 ; 004f3ba4
    PUSH EAX                            ; 004f3ba8
    MOV ESI,dword ptr [EBX + 0x14c]     ; 004f3ba9
    PUSH EBX                            ; 004f3baf
    CALL dword ptr [ESI + 0x14]         ; 004f3bb0
    ADD ESP,0x8                         ; 004f3bb3
    PUSH EAX                            ; 004f3bb6
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 004f3bb7
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(CBoundingBox3D * this_ptr)
    ADD ESP,0x8                         ; 004f3bbc
    MOV ESI,EAX                         ; 004f3bbf
    TEST EAX,EAX                        ; 004f3bc1
    JNZ 0x004f3bd6                      ; 004f3bc3
        ;   XREF to: 004f3bd6 (CONDITIONAL_JUMP)  ; LAB_004f3bd6
    PUSH EBX                            ; 004f3bc5
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 004f3bc6
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004f3bcb
    MOV EAX,ESI                         ; 004f3bce
    ADD ESP,0x18                        ; 004f3bd0
    POP ESI                             ; 004f3bd3
    POP EBX                             ; 004f3bd4
    RET                                 ; 004f3bd5
    PUSH -0x1                           ; 004f3bd6
        ;   Label: LAB_004f3bd6
    LEA EAX,[EBX + 0x150]               ; 004f3bd8
    PUSH 0x0                            ; 004f3bde
    PUSH EAX                            ; 004f3be0
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 004f3be1
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004f3be6
    PUSH EBX                            ; 004f3be9
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 004f3bea
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004f3bef
    MOV EAX,ESI                         ; 004f3bf2
    ADD ESP,0x18                        ; 004f3bf4
    POP ESI                             ; 004f3bf7
    POP EBX                             ; 004f3bf8
    RET                                 ; 004f3bf9

