; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cow_cpp_CZombieCow_archive_FUN_00448af0(CZombieCow *this_ptr)
;
; Parameters:
; CZombieCow *     Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_speed_005d72c7
;   TerminatedCString s_modelName_005d72cd
;   TerminatedCString s_guardDistance_005d72d7
;   TerminatedCString s_motion_state_005d72e5
;   int g_CZombieCowClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040b7f0
;   core_actor.cpp_archiveFloat_FUN_0040b5f0
;   core_actor.cpp_archiveMotionState_FUN_0040b870
;   core_enemy.cpp_CEnemy_archive_FUN_004a0520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00448af0
        ;   Label: core_cow.cpp_CZombieCow_archive_FUN_00448af0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00448af1
    PUSH EBX                            ; 00448af5
    CALL core_enemy.cpp_CEnemy_archive_FUN_004a0520 ; 00448af6
        ;   XREF to: 004a0520 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_004a0520(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00448afb
    PUSH 0x5d72c7                       ; 00448afe | = "speed"
    LEA EAX,[EBX + 0xc1d0]              ; 00448b03
    PUSH EAX                            ; 00448b09
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 00448b0a
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b5f0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00448b0f
    PUSH 0x5d72cd                       ; 00448b12 | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 00448b17
    PUSH EAX                            ; 00448b1d
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040b7f0 ; 00448b1e
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040b7f0(CDeformableModelInstance * model_ptr, char * property_name)
    MOV EDX,dword ptr [0x0061118c]      ; 00448b23 | g_CZombieCowClassVersion
    ADD ESP,0x8                         ; 00448b29
    CMP EDX,0x2                         ; 00448b2c
    JL 0x00448b47                       ; 00448b2f
        ;   XREF to: 00448b47 (CONDITIONAL_JUMP)  ; LAB_00448b47
    PUSH 0x5d72e5                       ; 00448b31 | = "motion state"
        ;   Label: LAB_00448b31
    ADD EBX,0x158                       ; 00448b36
    PUSH EBX                            ; 00448b3c
    CALL core_actor.cpp_archiveMotionState_FUN_0040b870 ; 00448b3d
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040b870(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 00448b42
    POP EBX                             ; 00448b45
    RET                                 ; 00448b46
    PUSH 0x5d72d7                       ; 00448b47 | = "guardDistance"
        ;   Label: LAB_00448b47
    LEA EAX,[EBX + 0xc1e0]              ; 00448b4c
    PUSH EAX                            ; 00448b52
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 00448b53
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b5f0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00448b58
    JMP 0x00448b31                      ; 00448b5b
        ;   XREF to: 00448b31 (UNCONDITIONAL_JUMP)  ; LAB_00448b31

