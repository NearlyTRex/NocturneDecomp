; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_ammo_cpp_CAmmo_renderOpaque_FUN_0040ec30(CAmmo *this_ptr)
;
; Parameters:
; CAmmo *          Stack[0x4]:4   this_ptr
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

    PUSH EBX                            ; 0040ec30
        ;   Label: core_ammo.cpp_CAmmo_renderOpaque_FUN_0040ec30
    PUSH ESI                            ; 0040ec31
    SUB ESP,0x18                        ; 0040ec32
    MOV EBX,dword ptr [ESP + 0x24]      ; 0040ec35
    PUSH EBX                            ; 0040ec39
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 0040ec3a
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20(CDemonActor * actor)
    ADD ESP,0x4                         ; 0040ec3f
    PUSH 0x0                            ; 0040ec42
    LEA EAX,[ESP + 0x4]                 ; 0040ec44
    PUSH EAX                            ; 0040ec48
    MOV ESI,dword ptr [EBX + 0x14c]     ; 0040ec49
    PUSH EBX                            ; 0040ec4f
    CALL dword ptr [ESI + 0x14]         ; 0040ec50
    ADD ESP,0x8                         ; 0040ec53
    PUSH EAX                            ; 0040ec56
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 0040ec57
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(CBoundingBox3D * this_ptr)
    ADD ESP,0x8                         ; 0040ec5c
    MOV ESI,EAX                         ; 0040ec5f
    TEST EAX,EAX                        ; 0040ec61
    JNZ 0x0040ec76                      ; 0040ec63
        ;   XREF to: 0040ec76 (CONDITIONAL_JUMP)  ; LAB_0040ec76
    PUSH EBX                            ; 0040ec65
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 0040ec66
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040ec6b
    MOV EAX,ESI                         ; 0040ec6e
    ADD ESP,0x18                        ; 0040ec70
    POP ESI                             ; 0040ec73
    POP EBX                             ; 0040ec74
    RET                                 ; 0040ec75
    PUSH -0x1                           ; 0040ec76
        ;   Label: LAB_0040ec76
    LEA EAX,[EBX + 0x150]               ; 0040ec78
    PUSH 0x0                            ; 0040ec7e
    PUSH EAX                            ; 0040ec80
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 0040ec81
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0040ec86
    PUSH EBX                            ; 0040ec89
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 0040ec8a
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040ec8f
    MOV EAX,ESI                         ; 0040ec92
    ADD ESP,0x18                        ; 0040ec94
    POP ESI                             ; 0040ec97
    POP EBX                             ; 0040ec98
    RET                                 ; 0040ec99

