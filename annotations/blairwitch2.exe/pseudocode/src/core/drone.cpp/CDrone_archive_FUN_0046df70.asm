; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_drone_cpp_CDrone_archive_FUN_0046df70(CDrone *this_ptr)
;
; Parameters:
; CDrone *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_speed_005d18a8+1
;   TerminatedCString s_modelName_005d18af
;   TerminatedCString s_guardDistance_005d18b9
;   TerminatedCString s_motion_state_005d18c7
;   int g_CDroneClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0
;   core_actor.cpp_archiveFloat_FUN_0040b8e0
;   core_actor.cpp_archiveMotionState_FUN_0040bb60
;   core_enemy.cpp_CEnemy_archive_FUN_00487ec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046df70
        ;   Label: core_drone.cpp_CDrone_archive_FUN_0046df70
    MOV EBX,dword ptr [ESP + 0x8]       ; 0046df71
    PUSH EBX                            ; 0046df75
    CALL core_enemy.cpp_CEnemy_archive_FUN_00487ec0 ; 0046df76
        ;   XREF to: 00487ec0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_00487ec0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0046df7b
    PUSH 0x5d18a9                       ; 0046df7e | s_speed_005d18a8+1
    LEA EAX,[EBX + 0x10a60]             ; 0046df83
    PUSH EAX                            ; 0046df89
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 0046df8a
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b8e0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0046df8f
    PUSH 0x5d18af                       ; 0046df92 | = "modelName"
    LEA EAX,[EBX + 0x2b4]               ; 0046df97
    PUSH EAX                            ; 0046df9d
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0 ; 0046df9e
        ;   XREF to: 0040bae0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0(CDeformableModelInstance * model_ptr, char * property_name)
    MOV EDX,dword ptr [0x0060d1dc]      ; 0046dfa3 | g_CDroneClassVersion
    ADD ESP,0x8                         ; 0046dfa9
    CMP EDX,0x2                         ; 0046dfac
    JL 0x0046dfc7                       ; 0046dfaf
        ;   XREF to: 0046dfc7 (CONDITIONAL_JUMP)  ; LAB_0046dfc7
    PUSH 0x5d18c7                       ; 0046dfb1 | = "motion state"
        ;   Label: LAB_0046dfb1
    ADD EBX,0x2b4                       ; 0046dfb6
    PUSH EBX                            ; 0046dfbc
    CALL core_actor.cpp_archiveMotionState_FUN_0040bb60 ; 0046dfbd
        ;   XREF to: 0040bb60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040bb60(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 0046dfc2
    POP EBX                             ; 0046dfc5
    RET                                 ; 0046dfc6
    PUSH 0x5d18b9                       ; 0046dfc7 | = "guardDistance"
        ;   Label: LAB_0046dfc7
    LEA EAX,[EBX + 0x10a70]             ; 0046dfcc
    PUSH EAX                            ; 0046dfd2
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 0046dfd3
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b8e0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0046dfd8
    JMP 0x0046dfb1                      ; 0046dfdb
        ;   XREF to: 0046dfb1 (UNCONDITIONAL_JUMP)  ; LAB_0046dfb1

