; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_succubus_cpp_CSuccubus_serialize_FUN_005c7710(CSuccubus *this_ptr)
;
; Parameters:
; CSuccubus *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_speed_006541b9
;   TerminatedCString s_modelName_006541bf
;   TerminatedCString s_motion_state_006541c9
;
; Called Functions:
;   core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
;   core_actor.cpp_serializeFloat_FUN_0040b770
;   core_actor.cpp_serializeMotionState_FUN_0040b9f0
;   core_enemy.cpp_CEnemy_serialize_FUN_004a9660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c7710
        ;   Label: core_succubus.cpp_CSuccubus_serialize_FUN_005c7710
    PUSH ESI                            ; 005c7711
    MOV ESI,dword ptr [ESP + 0xc]       ; 005c7712
    PUSH ESI                            ; 005c7716
    CALL core_enemy.cpp_CEnemy_serialize_FUN_004a9660 ; 005c7717
        ;   XREF to: 004a9660 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_serialize_FUN_004a9660(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 005c771c
    PUSH 0x6541b9                       ; 005c771f | = "speed"
    LEA EBX,[ESI + 0xbe24]              ; 005c7724
    PUSH EBX                            ; 005c772a
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 005c772b
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005c7730
    PUSH 0x6541bf                       ; 005c7733 | = "modelName"
    LEA EBX,[ESI + 0x158]               ; 005c7738
    PUSH EBX                            ; 005c773e
    CALL core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970 ; 005c773f
        ;   XREF to: 0040b970 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 005c7744
    PUSH 0x6541c9                       ; 005c7747 | = "motion state"
    PUSH EBX                            ; 005c774c
    CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0 ; 005c774d
        ;   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeMotionState_FUN_0040b9f0(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 005c7752
    POP ESI                             ; 005c7755
    POP EBX                             ; 005c7756
    RET                                 ; 005c7757

