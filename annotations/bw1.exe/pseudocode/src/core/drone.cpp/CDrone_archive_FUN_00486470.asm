; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_drone_cpp_CDrone_archive_FUN_00486470(CDrone *this_ptr)
;
; Parameters:
; CDrone *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_speed_005db6a1+1
;   TerminatedCString s_modelName_005db6a8
;   TerminatedCString s_guardDistance_005db6b2
;   TerminatedCString s_motion_state_005db6c0
;   int g_CDroneClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040b7f0
;   core_actor.cpp_archiveFloat_FUN_0040b5f0
;   core_actor.cpp_archiveMotionState_FUN_0040b870
;   core_enemy.cpp_CEnemy_archive_FUN_004a0520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00486470
        ;   Label: core_drone.cpp_CDrone_archive_FUN_00486470
    MOV EBX,dword ptr [ESP + 0x8]       ; 00486471
    PUSH EBX                            ; 00486475
    CALL core_enemy.cpp_CEnemy_archive_FUN_004a0520 ; 00486476
        ;   XREF to: 004a0520 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_004a0520(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0048647b
    PUSH 0x5db6a2                       ; 0048647e | s_speed_005db6a1+1
    LEA EAX,[EBX + 0xc1d0]              ; 00486483
    PUSH EAX                            ; 00486489
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 0048648a
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b5f0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0048648f
    PUSH 0x5db6a8                       ; 00486492 | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 00486497
    PUSH EAX                            ; 0048649d
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040b7f0 ; 0048649e
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040b7f0(CDeformableModelInstance * model_ptr, char * property_name)
    MOV EDX,dword ptr [0x006144bc]      ; 004864a3 | g_CDroneClassVersion
    ADD ESP,0x8                         ; 004864a9
    CMP EDX,0x2                         ; 004864ac
    JL 0x004864c7                       ; 004864af
        ;   XREF to: 004864c7 (CONDITIONAL_JUMP)  ; LAB_004864c7
    PUSH 0x5db6c0                       ; 004864b1 | = "motion state"
        ;   Label: LAB_004864b1
    ADD EBX,0x158                       ; 004864b6
    PUSH EBX                            ; 004864bc
    CALL core_actor.cpp_archiveMotionState_FUN_0040b870 ; 004864bd
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040b870(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 004864c2
    POP EBX                             ; 004864c5
    RET                                 ; 004864c6
    PUSH 0x5db6b2                       ; 004864c7 | = "guardDistance"
        ;   Label: LAB_004864c7
    LEA EAX,[EBX + 0xc1e0]              ; 004864cc
    PUSH EAX                            ; 004864d2
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 004864d3
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b5f0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 004864d8
    JMP 0x004864b1                      ; 004864db
        ;   XREF to: 004864b1 (UNCONDITIONAL_JUMP)  ; LAB_004864b1

