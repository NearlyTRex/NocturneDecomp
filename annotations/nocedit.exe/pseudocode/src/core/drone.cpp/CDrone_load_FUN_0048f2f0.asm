; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_drone.cpp_CDrone_load_FUN_0048f2f0()
;
;
; Referenced Globals:
;   TerminatedCString s_speed_0062240c
;   TerminatedCString s_modelName_00622412
;   TerminatedCString s_guardDistance_0062241c
;   TerminatedCString s_motion_state_0062242a
;   int g_CDroneClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
;   core_actor.cpp_serializeFloat_FUN_0040b770
;   core_actor.cpp_serializeMotionState_FUN_0040b9f0
;   core_enemy.cpp_CEnemy_serialize_FUN_004a9660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048f2f0
        ;   Label: core_drone.cpp_CDrone_load_FUN_0048f2f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0048f2f1
    PUSH EBX                            ; 0048f2f5
    CALL core_enemy.cpp_CEnemy_serialize_FUN_004a9660 ; 0048f2f6
        ;   XREF to: 004a9660 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_serialize_FUN_004a9660(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0048f2fb
    PUSH 0x62240c                       ; 0048f2fe | = "speed"
    LEA EAX,[EBX + 0xbe24]              ; 0048f303
    PUSH EAX                            ; 0048f309
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 0048f30a
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0048f30f
    PUSH 0x622412                       ; 0048f312 | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 0048f317
    PUSH EAX                            ; 0048f31d
    CALL core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970 ; 0048f31e
        ;   XREF to: 0040b970 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970(CDeformableModelInstance * model_ptr, char * property_name)
    MOV EDX,dword ptr [0x00672348]      ; 0048f323 | g_CDroneClassVersion
    ADD ESP,0x8                         ; 0048f329
    CMP EDX,0x2                         ; 0048f32c
    JL 0x0048f347                       ; 0048f32f
        ;   XREF to: 0048f347 (CONDITIONAL_JUMP)  ; LAB_0048f347
    PUSH 0x62242a                       ; 0048f331 | = "motion state"
        ;   Label: LAB_0048f331
    ADD EBX,0x158                       ; 0048f336
    PUSH EBX                            ; 0048f33c
    CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0 ; 0048f33d
        ;   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeMotionState_FUN_0040b9f0(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 0048f342
    POP EBX                             ; 0048f345
    RET                                 ; 0048f346
    PUSH 0x62241c                       ; 0048f347 | = "guardDistance"
        ;   Label: LAB_0048f347
    LEA EAX,[EBX + 0xbe34]              ; 0048f34c
    PUSH EAX                            ; 0048f352
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 0048f353
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0048f358
    JMP 0x0048f331                      ; 0048f35b
        ;   XREF to: 0048f331 (UNCONDITIONAL_JUMP)  ; LAB_0048f331

