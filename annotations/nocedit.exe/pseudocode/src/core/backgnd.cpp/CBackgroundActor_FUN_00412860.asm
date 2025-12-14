; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_backgnd.cpp_CBackgroundActor_FUN_00412860(CBackgroundActor * this_ptr)
;
; Parameters:
; CBackgroundActor * Stack[0x4]:4   this_ptr
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

    PUSH EBX                            ; 00412860
        ;   Label: core_backgnd.cpp_CBackgroundActor_FUN_00412860
    SUB ESP,0x18                        ; 00412861
    MOV EBX,dword ptr [ESP + 0x20]      ; 00412864
    MOV EAX,[0x0067d550]                ; 00412868 | g_CDemonMissionInstance | g_CDemonMissionPtr
    CMP dword ptr [EAX + 0x4],0x0       ; 0041286d | DAT_02f33744
    JNZ 0x0041287a                      ; 00412871
        ;   XREF to: 0041287a (CONDITIONAL_JUMP)  ; LAB_0041287a
    CMP dword ptr [ESP + 0x24],0x0      ; 00412873
    JNZ 0x0041287f                      ; 00412878
        ;   XREF to: 0041287f (CONDITIONAL_JUMP)  ; LAB_0041287f
    ADD ESP,0x18                        ; 0041287a
        ;   Label: LAB_0041287a
    POP EBX                             ; 0041287d
    RET                                 ; 0041287e
    PUSH EBX                            ; 0041287f
        ;   Label: LAB_0041287f
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 00412880
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 00412885
    MOV EDX,ESP                         ; 00412888
    PUSH EDX                            ; 0041288a
    MOV EAX,dword ptr [EBX + 0x154]     ; 0041288b
    PUSH EBX                            ; 00412891
    CALL dword ptr [EAX + 0x14]         ; 00412892
    ADD ESP,0x8                         ; 00412895
    PUSH EAX                            ; 00412898
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 00412899
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 0041289e
    TEST EAX,EAX                        ; 004128a1
    JZ 0x004128b8                       ; 004128a3
        ;   XREF to: 004128b8 (CONDITIONAL_JUMP)  ; LAB_004128b8
    PUSH -0x1                           ; 004128a5
    LEA EAX,[EBX + 0x158]               ; 004128a7
    PUSH 0x0                            ; 004128ad
    PUSH EAX                            ; 004128af
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 004128b0
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004128b5
    PUSH EBX                            ; 004128b8
        ;   Label: LAB_004128b8
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 004128b9
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004128be
    ADD ESP,0x18                        ; 004128c1
    POP EBX                             ; 004128c4
    RET                                 ; 004128c5

