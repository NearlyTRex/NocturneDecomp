; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_grave_cpp_CGrave_renderOpaque_FUN_004ee680(CGrave *this_ptr)
;
; Parameters:
; CGrave *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x1c]:1  local_1c
;
; Referenced Globals:
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CDemonMission g_CDemonMissionInstance
;   undefined4 DAT_02f33744
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ee680
        ;   Label: core_grave.cpp_CGrave_renderOpaque_FUN_004ee680
    SUB ESP,0x18                        ; 004ee681
    MOV EBX,dword ptr [ESP + 0x20]      ; 004ee684
    CMP dword ptr [EBX + 0x2dc],0x0     ; 004ee688
    JNZ 0x004ee705                      ; 004ee68f
        ;   XREF to: 004ee705 (CONDITIONAL_JUMP)  ; LAB_004ee705
    MOV EAX,[0x0067d550]                ; 004ee695 | g_CDemonMissionInstance | g_CDemonMissionPtr
    CMP dword ptr [EAX + 0x4],0x0       ; 004ee69a | DAT_02f33744
    JNZ 0x004ee6b2                      ; 004ee69e
        ;   XREF to: 004ee6b2 (CONDITIONAL_JUMP)  ; LAB_004ee6b2
    CMP dword ptr [EBX + 0x2e4],0x0     ; 004ee6a0
    JZ 0x004ee6b2                       ; 004ee6a7
        ;   XREF to: 004ee6b2 (CONDITIONAL_JUMP)  ; LAB_004ee6b2
    CMP dword ptr [EBX + 0x2e0],0x0     ; 004ee6a9
    JZ 0x004ee705                       ; 004ee6b0
        ;   XREF to: 004ee705 (CONDITIONAL_JUMP)  ; LAB_004ee705
    PUSH ESI                            ; 004ee6b2
        ;   Label: LAB_004ee6b2
    PUSH EBX                            ; 004ee6b3
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 004ee6b4
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 004ee6b9
    LEA EAX,[ESP + 0x4]                 ; 004ee6bc
    PUSH EAX                            ; 004ee6c0
    MOV EDX,dword ptr [EBX + 0x154]     ; 004ee6c1
    PUSH EBX                            ; 004ee6c7
    CALL dword ptr [EDX + 0x14]         ; 004ee6c8
    ADD ESP,0x8                         ; 004ee6cb
    PUSH EAX                            ; 004ee6ce
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 004ee6cf
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 004ee6d4
    MOV ESI,EAX                         ; 004ee6d7
    TEST EAX,EAX                        ; 004ee6d9
    JZ 0x004ee6f4                       ; 004ee6db
        ;   XREF to: 004ee6f4 (CONDITIONAL_JUMP)  ; LAB_004ee6f4
    PUSH -0x1                           ; 004ee6dd
    LEA EAX,[EBX + 0x158]               ; 004ee6df
    PUSH dword ptr [EBX + 0x2d4]        ; 004ee6e5
    PUSH EAX                            ; 004ee6eb
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 004ee6ec
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004ee6f1
    PUSH EBX                            ; 004ee6f4
        ;   Label: LAB_004ee6f4
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 004ee6f5
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004ee6fa
    MOV EAX,ESI                         ; 004ee6fd
    POP ESI                             ; 004ee6ff
    ADD ESP,0x18                        ; 004ee700
    POP EBX                             ; 004ee703
    RET                                 ; 004ee704
    XOR EAX,EAX                         ; 004ee705
        ;   Label: LAB_004ee705
    ADD ESP,0x18                        ; 004ee707
    POP EBX                             ; 004ee70a
    RET                                 ; 004ee70b

