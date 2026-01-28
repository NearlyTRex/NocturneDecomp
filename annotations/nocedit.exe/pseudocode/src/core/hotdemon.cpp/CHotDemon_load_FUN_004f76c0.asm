; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_hotdemon_cpp_CHotDemon_load_FUN_004f76c0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_speed_0062f4d8
;   TerminatedCString s_modelName_0062f4de
;   TerminatedCString s_motion_state_0062f4e8
;
; Called Functions:
;   core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
;   core_actor.cpp_serializeFloat_FUN_0040b770
;   core_actor.cpp_serializeMotionState_FUN_0040b9f0
;   core_enemy.cpp_CEnemy_serialize_FUN_004a9660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f76c0
        ;   Label: core_hotdemon.cpp_CHotDemon_load_FUN_004f76c0
    PUSH ESI                            ; 004f76c1
    MOV ESI,dword ptr [ESP + 0xc]       ; 004f76c2
    PUSH ESI                            ; 004f76c6
    CALL core_enemy.cpp_CEnemy_serialize_FUN_004a9660 ; 004f76c7
        ;   XREF to: 004a9660 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_serialize_FUN_004a9660(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004f76cc
    PUSH 0x62f4d8                       ; 004f76cf | = "speed"
    LEA EBX,[ESI + 0xbe24]              ; 004f76d4
    PUSH EBX                            ; 004f76da
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 004f76db
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 004f76e0
    PUSH 0x62f4de                       ; 004f76e3 | = "modelName"
    LEA EBX,[ESI + 0x158]               ; 004f76e8
    PUSH EBX                            ; 004f76ee
    CALL core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970 ; 004f76ef
        ;   XREF to: 0040b970 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 004f76f4
    PUSH 0x62f4e8                       ; 004f76f7 | = "motion state"
    PUSH EBX                            ; 004f76fc
    CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0 ; 004f76fd
        ;   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeMotionState_FUN_0040b9f0(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 004f7702
    POP ESI                             ; 004f7705
    POP EBX                             ; 004f7706
    LEA EAX,[EAX]                       ; 004f7707
    LEA EDX,[EDX]                       ; 004f770d
    RET                                 ; 004f7710

