; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_sentinel_cpp_CSentinel_load_FUN_00568c70(void)
;
;
; Referenced Globals:
;   TerminatedCString s_modelName_0064588e
;   TerminatedCString s_guardDistance_00645898
;   TerminatedCString s_motion_state_006458a6
;   int g_CSentinelClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
;   core_actor.cpp_serializeFloat_FUN_0040b770
;   core_actor.cpp_serializeMotionState_FUN_0040b9f0
;   core_enemy.cpp_CEnemy_serialize_FUN_004a9660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00568c70
        ;   Label: core_sentinel.cpp_CSentinel_load_FUN_00568c70
    MOV EBX,dword ptr [ESP + 0x8]       ; 00568c71
    PUSH EBX                            ; 00568c75
    CALL core_enemy.cpp_CEnemy_serialize_FUN_004a9660 ; 00568c76
        ;   XREF to: 004a9660 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_serialize_FUN_004a9660(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00568c7b
    PUSH 0x64588e                       ; 00568c7e | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 00568c83
    PUSH EAX                            ; 00568c89
    CALL core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970 ; 00568c8a
        ;   XREF to: 0040b970 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970(CDeformableModelInstance * model_ptr, char * property_name)
    MOV EDX,dword ptr [0x00681070]      ; 00568c8f | g_CSentinelClassVersion
    ADD ESP,0x8                         ; 00568c95
    CMP EDX,0x2                         ; 00568c98
    JL 0x00568cb3                       ; 00568c9b
        ;   XREF to: 00568cb3 (CONDITIONAL_JUMP)  ; LAB_00568cb3
    PUSH 0x6458a6                       ; 00568c9d | = "motion state"
        ;   Label: LAB_00568c9d
    ADD EBX,0x158                       ; 00568ca2
    PUSH EBX                            ; 00568ca8
    CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0 ; 00568ca9
        ;   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeMotionState_FUN_0040b9f0(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 00568cae
    POP EBX                             ; 00568cb1
    RET                                 ; 00568cb2
    PUSH 0x645898                       ; 00568cb3 | = "guardDistance"
        ;   Label: LAB_00568cb3
    LEA EAX,[EBX + 0xbe34]              ; 00568cb8
    PUSH EAX                            ; 00568cbe
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 00568cbf
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00568cc4
    JMP 0x00568c9d                      ; 00568cc7
        ;   XREF to: 00568c9d (UNCONDITIONAL_JUMP)  ; LAB_00568c9d

