; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_lever_cpp_CLever_renderOpaque_FUN_00504cf0(CLever *this_ptr)
;
; Parameters:
; CLever *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x14]:4  local_14
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00504cf0
        ;   Label: core_lever.cpp_CLever_renderOpaque_FUN_00504cf0
    PUSH ESI                            ; 00504cf1
    PUSH EDI                            ; 00504cf2
    PUSH EBP                            ; 00504cf3
    MOV EBP,ESP                         ; 00504cf4
    SUB ESP,0x1c                        ; 00504cf6
    MOV EBX,dword ptr [EBP + 0x14]      ; 00504cf9
    PUSH EBX                            ; 00504cfc
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 00504cfd
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 00504d02
    LEA ESI,[EBP + -0x1c]               ; 00504d05
    PUSH ESI                            ; 00504d08
    MOV EAX,dword ptr [EBX + 0x154]     ; 00504d09
    PUSH EBX                            ; 00504d0f
    CALL dword ptr [EAX + 0x14]         ; 00504d10
    ADD ESP,0x8                         ; 00504d13
    PUSH EAX                            ; 00504d16
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 00504d17
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 00504d1c
    MOV EDI,EAX                         ; 00504d1f
    TEST EAX,EAX                        ; 00504d21
    JNZ 0x00504d37                      ; 00504d23
        ;   XREF to: 00504d37 (CONDITIONAL_JUMP)  ; LAB_00504d37
    PUSH EBX                            ; 00504d25
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 00504d26
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00504d2b
    MOV EAX,EDI                         ; 00504d2e
    MOV ESP,EBP                         ; 00504d30
    POP EBP                             ; 00504d32
    POP EDI                             ; 00504d33
    POP ESI                             ; 00504d34
    POP EBX                             ; 00504d35
    RET                                 ; 00504d36
    PUSH -0x1                           ; 00504d37
        ;   Label: LAB_00504d37
    LEA ESI,[EBX + 0x158]               ; 00504d39
    PUSH ESI                            ; 00504d3f
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 00504d40
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0x100]     ; 00504d45
    DEC EAX                             ; 00504d4b
    MOV dword ptr [EBP + -0x4],EAX      ; 00504d4c
    ADD ESP,0x4                         ; 00504d4f
    FILD dword ptr [EBP + -0x4]         ; 00504d52
    FMUL float ptr [EBX + 0x2dc]        ; 00504d55
    SUB ESP,0x4                         ; 00504d5b
    FSTP float ptr [ESP]                ; 00504d5e
    PUSH ESI                            ; 00504d61
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 00504d62
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00504d67
    PUSH EBX                            ; 00504d6a
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 00504d6b
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00504d70
    MOV EAX,EDI                         ; 00504d73
    MOV ESP,EBP                         ; 00504d75
    POP EBP                             ; 00504d77
    POP EDI                             ; 00504d78
    POP ESI                             ; 00504d79
    POP EBX                             ; 00504d7a
    RET                                 ; 00504d7b

