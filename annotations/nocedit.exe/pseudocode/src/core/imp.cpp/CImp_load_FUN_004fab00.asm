; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_imp_cpp_CImp_load_FUN_004fab00(void)
;
;
; Referenced Globals:
;   TerminatedCString s_speed_0062fa2e
;   TerminatedCString s_modelName_0062fa34
;   TerminatedCString s_motion_state_0062fa3e
;
; Called Functions:
;   core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
;   core_actor.cpp_serializeFloat_FUN_0040b770
;   core_actor.cpp_serializeMotionState_FUN_0040b9f0
;   core_enemy.cpp_CEnemy_serialize_FUN_004a9660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fab00
        ;   Label: core_imp.cpp_CImp_load_FUN_004fab00
    PUSH ESI                            ; 004fab01
    MOV ESI,dword ptr [ESP + 0xc]       ; 004fab02
    PUSH ESI                            ; 004fab06
    CALL core_enemy.cpp_CEnemy_serialize_FUN_004a9660 ; 004fab07
        ;   XREF to: 004a9660 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_serialize_FUN_004a9660(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004fab0c
    PUSH 0x62fa2e                       ; 004fab0f | = "speed"
    LEA EBX,[ESI + 0xbe24]              ; 004fab14
    PUSH EBX                            ; 004fab1a
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 004fab1b
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 004fab20
    PUSH 0x62fa34                       ; 004fab23 | = "modelName"
    LEA EBX,[ESI + 0x158]               ; 004fab28
    PUSH EBX                            ; 004fab2e
    CALL core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970 ; 004fab2f
        ;   XREF to: 0040b970 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 004fab34
    PUSH 0x62fa3e                       ; 004fab37 | = "motion state"
    PUSH EBX                            ; 004fab3c
    CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0 ; 004fab3d
        ;   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeMotionState_FUN_0040b9f0(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 004fab42
    POP ESI                             ; 004fab45
    POP EBX                             ; 004fab46
    RET                                 ; 004fab47

