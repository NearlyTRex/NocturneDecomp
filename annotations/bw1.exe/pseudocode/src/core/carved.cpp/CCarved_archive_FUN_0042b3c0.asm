; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_carved_cpp_CCarved_archive_FUN_0042b3c0(CCarved *this_ptr)
;
; Parameters:
; CCarved *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_speed_005d55ee
;   TerminatedCString s_modelName_005d55f4
;   TerminatedCString s_motion_state_005d55fe
;   TerminatedCString s_partStatus_005d560b
;   TerminatedCString s_alwaysChaseFast_005d5616
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040b7f0
;   core_actor.cpp_archiveFloat_FUN_0040b5f0
;   core_actor.cpp_archiveInteger_FUN_0040b670
;   core_actor.cpp_archiveMotionState_FUN_0040b870
;   core_actor.cpp_archivePartStatus_FUN_0040b960
;   core_enemy.cpp_CEnemy_archive_FUN_004a0520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042b3c0
        ;   Label: core_carved.cpp_CCarved_archive_FUN_0042b3c0
    PUSH ESI                            ; 0042b3c1
    MOV ESI,dword ptr [ESP + 0xc]       ; 0042b3c2
    PUSH ESI                            ; 0042b3c6
    CALL core_enemy.cpp_CEnemy_archive_FUN_004a0520 ; 0042b3c7
        ;   XREF to: 004a0520 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_004a0520(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0042b3cc
    PUSH 0x5d55ee                       ; 0042b3cf | = "speed"
    LEA EBX,[ESI + 0xc1d0]              ; 0042b3d4
    PUSH EBX                            ; 0042b3da
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 0042b3db
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b5f0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0042b3e0
    PUSH 0x5d55f4                       ; 0042b3e3 | = "modelName"
    LEA EBX,[ESI + 0x158]               ; 0042b3e8
    PUSH EBX                            ; 0042b3ee
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040b7f0 ; 0042b3ef
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040b7f0(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 0042b3f4
    PUSH 0x5d55fe                       ; 0042b3f7 | = "motion state"
    PUSH EBX                            ; 0042b3fc
    CALL core_actor.cpp_archiveMotionState_FUN_0040b870 ; 0042b3fd
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040b870(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 0042b402
    PUSH 0x5d560b                       ; 0042b405 | = "partStatus"
    PUSH EBX                            ; 0042b40a
    CALL core_actor.cpp_archivePartStatus_FUN_0040b960 ; 0042b40b
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archivePartStatus_FUN_0040b960(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 0042b410
    PUSH 0x5d5616                       ; 0042b413 | = "alwaysChaseFast"
    ADD ESI,0xc284                      ; 0042b418
    PUSH ESI                            ; 0042b41e
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0042b41f
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0042b424
    POP ESI                             ; 0042b427
    POP EBX                             ; 0042b428
    RET                                 ; 0042b429

