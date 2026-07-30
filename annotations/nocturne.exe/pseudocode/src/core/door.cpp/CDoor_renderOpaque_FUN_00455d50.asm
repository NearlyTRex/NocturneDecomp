; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_door_cpp_CDoor_renderOpaque_FUN_00455d50(CDemonActor *param_1)
;
; Local Variables:
; undefined        Stack[-0x1c]:1  local_1c
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;   core_box.cpp_CBoundingBox3D_render_FUN_0041dcc0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00455d50
        ;   Label: core_door.cpp_CDoor_renderOpaque_FUN_00455d50
    SUB ESP,0x30                        ; 00455d51
    MOV EBX,dword ptr [ESP + 0x38]      ; 00455d54
    CMP dword ptr [EBX + 0x9c0],0x2     ; 00455d58
    JLE 0x00455d68                      ; 00455d5f
        ;   XREF to: 00455d68 (CONDITIONAL_JUMP)  ; LAB_00455d68
    XOR EAX,EAX                         ; 00455d61
    ADD ESP,0x30                        ; 00455d63
    POP EBX                             ; 00455d66
    RET                                 ; 00455d67
    PUSH EDI                            ; 00455d68
        ;   Label: LAB_00455d68
    PUSH ESI                            ; 00455d69
    PUSH EBX                            ; 00455d6a
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 00455d6b
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20(CDemonActor * actor)
    ADD ESP,0x4                         ; 00455d70
    PUSH 0x0                            ; 00455d73
    LEA EAX,[ESP + 0x24]                ; 00455d75
    PUSH EAX                            ; 00455d79
    MOV EDX,dword ptr [EBX + 0x14c]     ; 00455d7a
    PUSH EBX                            ; 00455d80
    CALL dword ptr [EDX + 0x14]         ; 00455d81
    ADD ESP,0x8                         ; 00455d84
    PUSH EAX                            ; 00455d87
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 00455d88
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(CBoundingBox3D * this_ptr)
    ADD ESP,0x8                         ; 00455d8d
    MOV ESI,EAX                         ; 00455d90
    TEST EAX,EAX                        ; 00455d92
    JZ 0x00455dcd                       ; 00455d94
        ;   XREF to: 00455dcd (CONDITIONAL_JUMP)  ; LAB_00455dcd
    CMP dword ptr [EBX + 0x9cc],0x0     ; 00455d96
    JZ 0x00455ddf                       ; 00455d9d
        ;   XREF to: 00455ddf (CONDITIONAL_JUMP)  ; LAB_00455ddf
    MOV EDI,dword ptr [0x005ae704]      ; 00455d9f | DAT_005ae704
    PUSH EDI                            ; 00455da5 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 00455da6
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00455dab
    TEST EAX,EAX                        ; 00455dae
    JZ 0x00455ddf                       ; 00455db0
        ;   XREF to: 00455ddf (CONDITIONAL_JUMP)  ; LAB_00455ddf
    LEA EDX,[ESP + 0x8]                 ; 00455db2
    PUSH EDX                            ; 00455db6
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00455db7
    PUSH EBX                            ; 00455dbd
    CALL dword ptr [EAX + 0x14]         ; 00455dbe
    ADD ESP,0x8                         ; 00455dc1
    PUSH EAX                            ; 00455dc4
    CALL core_box.cpp_CBoundingBox3D_render_FUN_0041dcc0 ; 00455dc5
        ;   XREF to: 0041dcc0 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_render_FUN_0041dcc0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 00455dca
    PUSH EBX                            ; 00455dcd
        ;   Label: LAB_00455dcd
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 00455dce
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00455dd3
    MOV EAX,ESI                         ; 00455dd6
    POP ESI                             ; 00455dd8
    POP EDI                             ; 00455dd9
    ADD ESP,0x30                        ; 00455dda
    POP EBX                             ; 00455ddd
    RET                                 ; 00455dde
    PUSH -0x1                           ; 00455ddf
        ;   Label: LAB_00455ddf
    LEA EAX,[EBX + 0x150]               ; 00455de1
    PUSH 0x0                            ; 00455de7
    PUSH EAX                            ; 00455de9
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 00455dea
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00455def
    PUSH EBX                            ; 00455df2
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 00455df3
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00455df8
    MOV EAX,ESI                         ; 00455dfb
    POP ESI                             ; 00455dfd
    POP EDI                             ; 00455dfe
    ADD ESP,0x30                        ; 00455dff
    POP EBX                             ; 00455e02
    RET                                 ; 00455e03

