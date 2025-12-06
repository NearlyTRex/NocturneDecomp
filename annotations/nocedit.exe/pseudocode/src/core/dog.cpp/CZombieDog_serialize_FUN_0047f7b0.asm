; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dog.cpp_CZombieDog_serialize_FUN_0047f7b0(CZombieDog * this_ptr)
;
; Parameters:
; CZombieDog *     Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_speed_00621039
;   TerminatedCString s_modelName_0062103f
;   TerminatedCString s_guardDistance_00621049
;   TerminatedCString s_motion_state_00621057
;   undefined4 g_CZombieDogClassVersion
;
; Called Functions:
;   core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
;   core_actor.cpp_serializeFloat_FUN_0040b770
;   core_actor.cpp_serializeMotionState_FUN_0040b9f0
;   core_enemy.cpp_CEnemy_serialize_FUN_004a9660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047f7b0
        ;   Label: core_dog.cpp_CZombieDog_serialize_FUN_0047f7b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0047f7b1
    PUSH EBX                            ; 0047f7b5
    CALL core_enemy.cpp_CEnemy_serialize_FUN_004a9660 ; 0047f7b6 | void core_enemy.cpp_CEnemy_serialize_FUN_004a9660(CEnemy * this_ptr)
        ;   XREF to: 004a9660 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0047f7bb
    PUSH 0x621039                       ; 0047f7be | = "speed" | s_speed_00621039 = speed
    LEA EAX,[EBX + 0xbe24]              ; 0047f7c3
    PUSH EAX                            ; 0047f7c9
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 0047f7ca | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0047f7cf
    PUSH 0x62103f                       ; 0047f7d2 | = "modelName" | s_modelName_0062103f = modelName
    LEA EAX,[EBX + 0x158]               ; 0047f7d7
    PUSH EAX                            ; 0047f7dd
    CALL core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970 ; 0047f7de | void core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970(CDeformableModelInstance * model_ptr, char * property_name)
        ;   XREF to: 0040b970 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [0x006702e8]      ; 0047f7e3 | undefined4 g_CZombieDogClassVersion
    ADD ESP,0x8                         ; 0047f7e9
    CMP EDX,0x2                         ; 0047f7ec
    JL 0x0047f807                       ; 0047f7ef | LAB_0047f807
        ;   XREF to: 0047f807 (CONDITIONAL_JUMP)
    PUSH 0x621057                       ; 0047f7f1 | = "motion state" | s_motion_state_00621057 = motion state
        ;   Label: LAB_0047f7f1
    ADD EBX,0x158                       ; 0047f7f6
    PUSH EBX                            ; 0047f7fc
    CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0 ; 0047f7fd | void core_actor.cpp_serializeMotionState_FUN_0040b9f0(CMotionController * motion_controller, char * property_name)
        ;   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0047f802
    POP EBX                             ; 0047f805
    RET                                 ; 0047f806
    PUSH 0x621049                       ; 0047f807 | = "guardDistance" | s_guardDistance_00621049 = guardDistance
        ;   Label: LAB_0047f807
    LEA EAX,[EBX + 0xbe34]              ; 0047f80c
    PUSH EAX                            ; 0047f812
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 0047f813 | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0047f818
    JMP 0x0047f7f1                      ; 0047f81b | LAB_0047f7f1
        ;   XREF to: 0047f7f1 (UNCONDITIONAL_JUMP)

