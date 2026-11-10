; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_batcreat_cpp_CBatCreature_archive_FUN_00412110(CBatCreature *this_ptr)
;
; Parameters:
; CBatCreature *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_speed_005d3878+1
;   TerminatedCString s_modelName_005d387f
;   TerminatedCString s_motion_state_005d3889
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040b7f0
;   core_actor.cpp_archiveFloat_FUN_0040b5f0
;   core_actor.cpp_archiveMotionState_FUN_0040b870
;   core_enemy.cpp_CEnemy_archive_FUN_004a0520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00412110
        ;   Label: core_batcreat.cpp_CBatCreature_archive_FUN_00412110
    PUSH ESI                            ; 00412111
    MOV ESI,dword ptr [ESP + 0xc]       ; 00412112
    PUSH ESI                            ; 00412116
    CALL core_enemy.cpp_CEnemy_archive_FUN_004a0520 ; 00412117
        ;   XREF to: 004a0520 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_004a0520(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0041211c
    PUSH 0x5d3879                       ; 0041211f | s_speed_005d3878+1
    LEA EBX,[ESI + 0xc1d0]              ; 00412124
    PUSH EBX                            ; 0041212a
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 0041212b
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 00412130
    PUSH 0x5d387f                       ; 00412133 | = "modelName"
    LEA EBX,[ESI + 0x158]               ; 00412138
    PUSH EBX                            ; 0041213e
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040b7f0 ; 0041213f
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040b7f0(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 00412144
    PUSH 0x5d3889                       ; 00412147 | = "motion state"
    PUSH EBX                            ; 0041214c
    CALL core_actor.cpp_archiveMotionState_FUN_0040b870 ; 0041214d
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040b870(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 00412152
    POP ESI                             ; 00412155
    POP EBX                             ; 00412156
    RET                                 ; 00412157

