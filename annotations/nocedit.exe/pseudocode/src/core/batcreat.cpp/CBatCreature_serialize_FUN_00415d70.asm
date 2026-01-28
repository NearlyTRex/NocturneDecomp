; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_batcreat_cpp_CBatCreature_serialize_FUN_00415d70(CBatCreature *this_ptr)
;
; Parameters:
; CBatCreature *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_speed_00615661
;   TerminatedCString s_modelName_00615667
;   TerminatedCString s_motion_state_00615671
;
; Called Functions:
;   core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
;   core_actor.cpp_serializeFloat_FUN_0040b770
;   core_actor.cpp_serializeMotionState_FUN_0040b9f0
;   core_enemy.cpp_CEnemy_serialize_FUN_004a9660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00415d70
        ;   Label: core_batcreat.cpp_CBatCreature_serialize_FUN_00415d70
    PUSH ESI                            ; 00415d71
    MOV ESI,dword ptr [ESP + 0xc]       ; 00415d72
    PUSH ESI                            ; 00415d76
    CALL core_enemy.cpp_CEnemy_serialize_FUN_004a9660 ; 00415d77
        ;   XREF to: 004a9660 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_serialize_FUN_004a9660(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00415d7c
    PUSH 0x615661                       ; 00415d7f | = "speed"
    LEA EBX,[ESI + 0xbe24]              ; 00415d84
    PUSH EBX                            ; 00415d8a
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 00415d8b
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00415d90
    PUSH 0x615667                       ; 00415d93 | = "modelName"
    LEA EBX,[ESI + 0x158]               ; 00415d98
    PUSH EBX                            ; 00415d9e
    CALL core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970 ; 00415d9f
        ;   XREF to: 0040b970 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 00415da4
    PUSH 0x615671                       ; 00415da7 | = "motion state"
    PUSH EBX                            ; 00415dac
    CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0 ; 00415dad
        ;   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeMotionState_FUN_0040b9f0(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 00415db2
    POP ESI                             ; 00415db5
    POP EBX                             ; 00415db6
    RET                                 ; 00415db7

