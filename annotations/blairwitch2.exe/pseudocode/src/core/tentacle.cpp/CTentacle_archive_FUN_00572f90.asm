; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_tentacle_cpp_CTentacle_archive_FUN_00572f90(CTentacle *this_ptr)
;
; Parameters:
; CTentacle *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_s_0_modelName_005ec4f8+2
;   TerminatedCString s_guardDistance_005ec504
;   TerminatedCString s_motion_state_005ec512
;   TerminatedCString s_partStatus_005ec51f
;   TerminatedCString s_graveActor_005ec52a
;   int g_CTentacleClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b9e0
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0
;   core_actor.cpp_archiveFloat_FUN_0040b8e0
;   core_actor.cpp_archiveMotionState_FUN_0040bb60
;   core_actor.cpp_archivePartStatus_FUN_0040bc50
;   core_enemy.cpp_CEnemy_archive_FUN_00487ec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00572f90
        ;   Label: core_tentacle.cpp_CTentacle_archive_FUN_00572f90
    PUSH ESI                            ; 00572f91
    MOV EBX,dword ptr [ESP + 0xc]       ; 00572f92
    PUSH EBX                            ; 00572f96
    CALL core_enemy.cpp_CEnemy_archive_FUN_00487ec0 ; 00572f97
        ;   XREF to: 00487ec0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_00487ec0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00572f9c
    PUSH 0x5ec4fa                       ; 00572f9f | s_s_0_modelName_005ec4f8+2
    LEA ESI,[EBX + 0x2b4]               ; 00572fa4
    PUSH ESI                            ; 00572faa
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0 ; 00572fab
        ;   XREF to: 0040bae0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0(CDeformableModelInstance * model_ptr, char * property_name)
    MOV EDX,dword ptr [0x0061e3a0]      ; 00572fb0 | g_CTentacleClassVersion
    ADD ESP,0x8                         ; 00572fb6
    CMP EDX,0x2                         ; 00572fb9
    JL 0x00572ff7                       ; 00572fbc
        ;   XREF to: 00572ff7 (CONDITIONAL_JUMP)  ; LAB_00572ff7
    PUSH 0x5ec512                       ; 00572fbe | = "motion state"
        ;   Label: LAB_00572fbe
    LEA ESI,[EBX + 0x2b4]               ; 00572fc3
    PUSH ESI                            ; 00572fc9
    CALL core_actor.cpp_archiveMotionState_FUN_0040bb60 ; 00572fca
        ;   XREF to: 0040bb60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040bb60(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 00572fcf
    PUSH 0x5ec51f                       ; 00572fd2 | = "partStatus"
    PUSH ESI                            ; 00572fd7
    CALL core_actor.cpp_archivePartStatus_FUN_0040bc50 ; 00572fd8
        ;   XREF to: 0040bc50 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archivePartStatus_FUN_0040bc50(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 00572fdd
    PUSH 0x5ec52a                       ; 00572fe0 | = "graveActor"
    ADD EBX,0x10b00                     ; 00572fe5
    PUSH EBX                            ; 00572feb
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 00572fec
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b9e0(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 00572ff1
    POP ESI                             ; 00572ff4
    POP EBX                             ; 00572ff5
    RET                                 ; 00572ff6
    PUSH 0x5ec504                       ; 00572ff7 | = "guardDistance"
        ;   Label: LAB_00572ff7
    LEA ESI,[EBX + 0x10a70]             ; 00572ffc
    PUSH ESI                            ; 00573002
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 00573003
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b8e0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00573008
    JMP 0x00572fbe                      ; 0057300b
        ;   XREF to: 00572fbe (UNCONDITIONAL_JUMP)  ; LAB_00572fbe

