; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_tentacle_cpp_CTentacle_serialize_FUN_005db880(CTentacle *this_ptr)
;
; Parameters:
; CTentacle *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_modelName_00654e4c
;   TerminatedCString s_guardDistance_00654e56
;   TerminatedCString s_motion_state_00654e64
;   TerminatedCString s_partStatus_00654e71
;   TerminatedCString s_graveActor_00654e7c
;   int g_CTentacleClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_serializeActor_FUN_0040b870
;   core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
;   core_actor.cpp_serializeFloat_FUN_0040b770
;   core_actor.cpp_serializeMotionState_FUN_0040b9f0
;   core_actor.cpp_serializePartStatus_FUN_0040bae0
;   core_enemy.cpp_CEnemy_serialize_FUN_004a9660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005db880
        ;   Label: core_tentacle.cpp_CTentacle_serialize_FUN_005db880
    PUSH ESI                            ; 005db881
    MOV EBX,dword ptr [ESP + 0xc]       ; 005db882
    PUSH EBX                            ; 005db886
    CALL core_enemy.cpp_CEnemy_serialize_FUN_004a9660 ; 005db887
        ;   XREF to: 004a9660 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_serialize_FUN_004a9660(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 005db88c
    PUSH 0x654e4c                       ; 005db88f | = "modelName"
    LEA ESI,[EBX + 0x158]               ; 005db894
    PUSH ESI                            ; 005db89a
    CALL core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970 ; 005db89b
        ;   XREF to: 0040b970 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970(CDeformableModelInstance * model_ptr, char * property_name)
    MOV EDX,dword ptr [0x006842c8]      ; 005db8a0 | g_CTentacleClassVersion
    ADD ESP,0x8                         ; 005db8a6
    CMP EDX,0x2                         ; 005db8a9
    JL 0x005db8e7                       ; 005db8ac
        ;   XREF to: 005db8e7 (CONDITIONAL_JUMP)  ; LAB_005db8e7
    PUSH 0x654e64                       ; 005db8ae | = "motion state"
        ;   Label: LAB_005db8ae
    LEA ESI,[EBX + 0x158]               ; 005db8b3
    PUSH ESI                            ; 005db8b9
    CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0 ; 005db8ba
        ;   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeMotionState_FUN_0040b9f0(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 005db8bf
    PUSH 0x654e71                       ; 005db8c2 | = "partStatus"
    PUSH ESI                            ; 005db8c7
    CALL core_actor.cpp_serializePartStatus_FUN_0040bae0 ; 005db8c8
        ;   XREF to: 0040bae0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializePartStatus_FUN_0040bae0(void * part, char * property_name)
    ADD ESP,0x8                         ; 005db8cd
    PUSH 0x654e7c                       ; 005db8d0 | = "graveActor"
    ADD EBX,0xbec4                      ; 005db8d5
    PUSH EBX                            ; 005db8db
    CALL core_actor.cpp_serializeActor_FUN_0040b870 ; 005db8dc
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 005db8e1
    POP ESI                             ; 005db8e4
    POP EBX                             ; 005db8e5
    RET                                 ; 005db8e6
    PUSH 0x654e56                       ; 005db8e7 | = "guardDistance"
        ;   Label: LAB_005db8e7
    LEA ESI,[EBX + 0xbe34]              ; 005db8ec
    PUSH ESI                            ; 005db8f2
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 005db8f3
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005db8f8
    JMP 0x005db8ae                      ; 005db8fb
        ;   XREF to: 005db8ae (UNCONDITIONAL_JUMP)  ; LAB_005db8ae

