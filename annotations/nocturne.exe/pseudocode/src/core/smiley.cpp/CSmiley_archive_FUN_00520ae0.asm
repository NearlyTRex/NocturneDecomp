; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_smiley_cpp_CSmiley_archive_FUN_00520ae0(CSmiley *this_ptr)
;
; Parameters:
; CSmiley *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_speed_005920a9
;   TerminatedCString s_modelName_005920af
;   TerminatedCString s_guardDistance_005920b9
;   TerminatedCString s_motion_state_005920c7
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveMotionState_FUN_0040cb00
;   core_enemy.cpp_CEnemy_archive_FUN_004796c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00520ae0
        ;   Label: core_smiley.cpp_CSmiley_archive_FUN_00520ae0
    PUSH ESI                            ; 00520ae1
    MOV ESI,dword ptr [ESP + 0xc]       ; 00520ae2
    PUSH ESI                            ; 00520ae6
    CALL core_enemy.cpp_CEnemy_archive_FUN_004796c0 ; 00520ae7
        ;   XREF to: 004796c0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_004796c0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00520aec
    PUSH 0x5920a9                       ; 00520aef | = "speed"
    LEA EBX,[ESI + 0xbc8c]              ; 00520af4
    PUSH EBX                            ; 00520afa
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 00520afb
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00520b00
    PUSH 0x5920af                       ; 00520b03 | = "modelName"
    LEA EBX,[ESI + 0x150]               ; 00520b08
    PUSH EBX                            ; 00520b0e
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80 ; 00520b0f
        ;   XREF to: 0040ca80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 00520b14
    PUSH 0x5920b9                       ; 00520b17 | = "guardDistance"
    ADD ESI,0xbd28                      ; 00520b1c
    PUSH ESI                            ; 00520b22
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 00520b23
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00520b28
    PUSH 0x5920c7                       ; 00520b2b | = "motion state"
    PUSH EBX                            ; 00520b30
    CALL core_actor.cpp_archiveMotionState_FUN_0040cb00 ; 00520b31
        ;   XREF to: 0040cb00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040cb00(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 00520b36
    POP ESI                             ; 00520b39
    POP EBX                             ; 00520b3a
    RET                                 ; 00520b3b

