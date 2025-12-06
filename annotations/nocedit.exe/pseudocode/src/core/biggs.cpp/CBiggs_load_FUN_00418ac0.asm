; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_biggs.cpp_CBiggs_load_FUN_00418ac0()
;
;
; Referenced Globals:
;   TerminatedCString s_speed_00615b19
;   TerminatedCString s_modelName_00615b1f
;   TerminatedCString s_motion_state_00615b29
;   TerminatedCString s_morphing_00615b36
;   TerminatedCString s_morphTimer_00615b3f
;   TerminatedCString s_morphEvent_00615b4a
;
; Called Functions:
;   core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
;   core_actor.cpp_serializeFloat_FUN_0040b770
;   core_actor.cpp_serializeInteger_FUN_0040b7f0
;   core_actor.cpp_serializeMotionState_FUN_0040b9f0
;   core_actor.cpp_serializeString_FUN_0040b5c0
;   core_enemy.cpp_CEnemy_serialize_FUN_004a9660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00418ac0
        ;   Label: core_biggs.cpp_CBiggs_load_FUN_00418ac0
    PUSH ESI                            ; 00418ac1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00418ac2
    PUSH EBX                            ; 00418ac6
    CALL core_enemy.cpp_CEnemy_serialize_FUN_004a9660 ; 00418ac7 | void core_enemy.cpp_CEnemy_serialize_FUN_004a9660(CEnemy * this_ptr)
        ;   XREF to: 004a9660 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00418acc
    PUSH 0x615b19                       ; 00418acf | = "speed" | s_speed_00615b19 = speed
    LEA ESI,[EBX + 0xbe24]              ; 00418ad4
    PUSH ESI                            ; 00418ada
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 00418adb | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00418ae0
    PUSH 0x615b1f                       ; 00418ae3 | = "modelName" | s_modelName_00615b1f = modelName
    LEA ESI,[EBX + 0x158]               ; 00418ae8
    PUSH ESI                            ; 00418aee
    CALL core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970 ; 00418aef | void core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970(CDeformableModelInstance * model_ptr, char * property_name)
        ;   XREF to: 0040b970 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00418af4
    PUSH 0x615b29                       ; 00418af7 | = "motion state" | s_motion_state_00615b29 = motion state
    PUSH ESI                            ; 00418afc
    CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0 ; 00418afd | void core_actor.cpp_serializeMotionState_FUN_0040b9f0(CMotionController * motion_controller, char * property_name)
        ;   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00418b02
    PUSH 0x615b36                       ; 00418b05 | = "morphing" | s_morphing_00615b36 = morphing
    LEA ESI,[EBX + 0xc038]              ; 00418b0a
    PUSH ESI                            ; 00418b10
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 00418b11 | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00418b16
    PUSH 0x615b3f                       ; 00418b19 | = "morphTimer" | s_morphTimer_00615b3f = morphTimer
    LEA ESI,[EBX + 0xc03c]              ; 00418b1e
    PUSH ESI                            ; 00418b24
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 00418b25 | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00418b2a
    PUSH 0x615b4a                       ; 00418b2d | = "morphEvent" | s_morphEvent_00615b4a = morphEvent
    ADD EBX,0xcc6c                      ; 00418b32
    PUSH EBX                            ; 00418b38
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 00418b39 | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00418b3e
    POP ESI                             ; 00418b41
    POP EBX                             ; 00418b42
    RET                                 ; 00418b43

