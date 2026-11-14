; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_tentacle_cpp_CTentacle_archive_FUN_00595bc0(CTentacle *this_ptr)
;
; Parameters:
; CTentacle *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_s_0_modelName_005f776c+2
;   TerminatedCString s_guardDistance_005f7778
;   TerminatedCString s_motion_state_005f7786
;   TerminatedCString s_partStatus_005f7793
;   TerminatedCString s_graveActor_005f779e
;   int g_CTentacleClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b6f0
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040b7f0
;   core_actor.cpp_archiveFloat_FUN_0040b5f0
;   core_actor.cpp_archiveMotionState_FUN_0040b870
;   core_actor.cpp_archivePartStatus_FUN_0040b960
;   core_enemy.cpp_CEnemy_archive_FUN_004a0520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00595bc0
        ;   Label: core_tentacle.cpp_CTentacle_archive_FUN_00595bc0
    PUSH ESI                            ; 00595bc1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00595bc2
    PUSH EBX                            ; 00595bc6
    CALL core_enemy.cpp_CEnemy_archive_FUN_004a0520 ; 00595bc7
        ;   XREF to: 004a0520 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_004a0520(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00595bcc
    PUSH 0x5f776e                       ; 00595bcf | s_s_0_modelName_005f776c+2
    LEA ESI,[EBX + 0x158]               ; 00595bd4
    PUSH ESI                            ; 00595bda
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040b7f0 ; 00595bdb
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040b7f0(CDeformableModelInstance * model_ptr, char * property_name)
    MOV EDX,dword ptr [0x006259f0]      ; 00595be0 | g_CTentacleClassVersion
    ADD ESP,0x8                         ; 00595be6
    CMP EDX,0x2                         ; 00595be9
    JL 0x00595c27                       ; 00595bec
        ;   XREF to: 00595c27 (CONDITIONAL_JUMP)  ; LAB_00595c27
    PUSH 0x5f7786                       ; 00595bee | = "motion state"
        ;   Label: LAB_00595bee
    LEA ESI,[EBX + 0x158]               ; 00595bf3
    PUSH ESI                            ; 00595bf9
    CALL core_actor.cpp_archiveMotionState_FUN_0040b870 ; 00595bfa
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040b870(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 00595bff
    PUSH 0x5f7793                       ; 00595c02 | = "partStatus"
    PUSH ESI                            ; 00595c07
    CALL core_actor.cpp_archivePartStatus_FUN_0040b960 ; 00595c08
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archivePartStatus_FUN_0040b960(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 00595c0d
    PUSH 0x5f779e                       ; 00595c10 | = "graveActor"
    ADD EBX,0xc270                      ; 00595c15
    PUSH EBX                            ; 00595c1b
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 00595c1c
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b6f0(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 00595c21
    POP ESI                             ; 00595c24
    POP EBX                             ; 00595c25
    RET                                 ; 00595c26
    PUSH 0x5f7778                       ; 00595c27 | = "guardDistance"
        ;   Label: LAB_00595c27
    LEA ESI,[EBX + 0xc1e0]              ; 00595c2c
    PUSH ESI                            ; 00595c32
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 00595c33
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b5f0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00595c38
    JMP 0x00595bee                      ; 00595c3b
        ;   XREF to: 00595bee (UNCONDITIONAL_JUMP)  ; LAB_00595bee

