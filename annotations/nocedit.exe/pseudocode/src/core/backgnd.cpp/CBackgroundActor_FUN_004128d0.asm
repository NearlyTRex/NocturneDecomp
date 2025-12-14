; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_backgnd.cpp_CBackgroundActor_FUN_004128d0(CBackgroundActor * this_ptr)
;
; Parameters:
; CBackgroundActor * Stack[0x4]:4   this_ptr
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

    PUSH EBX                            ; 004128d0
        ;   Label: core_backgnd.cpp_CBackgroundActor_FUN_004128d0
    SUB ESP,0x18                        ; 004128d1
    MOV EBX,dword ptr [ESP + 0x20]      ; 004128d4
    MOV EAX,[0x0067d550]                ; 004128d8 | g_CDemonMissionInstance | g_CDemonMissionPtr
    CMP dword ptr [EAX + 0x4],0x0       ; 004128dd | DAT_02f33744
    JNZ 0x004128ea                      ; 004128e1
        ;   XREF to: 004128ea (CONDITIONAL_JUMP)  ; LAB_004128ea
    XOR EAX,EAX                         ; 004128e3
    ADD ESP,0x18                        ; 004128e5
    POP EBX                             ; 004128e8
    RET                                 ; 004128e9
    PUSH ESI                            ; 004128ea
        ;   Label: LAB_004128ea
    PUSH EBX                            ; 004128eb
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 004128ec
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 004128f1
    LEA EAX,[ESP + 0x4]                 ; 004128f4
    PUSH EAX                            ; 004128f8
    MOV EDX,dword ptr [EBX + 0x154]     ; 004128f9
    PUSH EBX                            ; 004128ff
    CALL dword ptr [EDX + 0x14]         ; 00412900
    ADD ESP,0x8                         ; 00412903
    PUSH EAX                            ; 00412906
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 00412907
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 0041290c
    MOV ESI,EAX                         ; 0041290f
    TEST EAX,EAX                        ; 00412911
    JZ 0x00412928                       ; 00412913
        ;   XREF to: 00412928 (CONDITIONAL_JUMP)  ; LAB_00412928
    PUSH -0x1                           ; 00412915
    LEA EAX,[EBX + 0x158]               ; 00412917
    PUSH 0x0                            ; 0041291d
    PUSH EAX                            ; 0041291f
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 00412920
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00412925
    PUSH EBX                            ; 00412928
        ;   Label: LAB_00412928
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 00412929
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0041292e
    MOV EAX,ESI                         ; 00412931
    POP ESI                             ; 00412933
    ADD ESP,0x18                        ; 00412934
    POP EBX                             ; 00412937
    RET                                 ; 00412938

