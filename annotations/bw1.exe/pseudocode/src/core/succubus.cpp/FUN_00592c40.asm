; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_succubus_cpp_FUN_00592c40(CEnemy *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_speed_005f73c2
;   TerminatedCString s_modelName_005f73c8
;   TerminatedCString s_motion_state_005f73d2
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b5f0
;   core_actor.cpp_FUN_0040b7f0
;   core_actor.cpp_FUN_0040b870
;   core_enemy.cpp_CEnemy_archive_FUN_004a0520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00592c40
        ;   Label: core_succubus.cpp_FUN_00592c40
    PUSH ESI                            ; 00592c41
    MOV ESI,dword ptr [ESP + 0xc]       ; 00592c42
    PUSH ESI                            ; 00592c46
    CALL core_enemy.cpp_CEnemy_archive_FUN_004a0520 ; 00592c47
        ;   XREF to: 004a0520 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_004a0520(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00592c4c
    PUSH 0x5f73c2                       ; 00592c4f | = "speed"
    LEA EBX,[ESI + 0xc1d0]              ; 00592c54
    PUSH EBX                            ; 00592c5a
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 00592c5b
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 00592c60
    PUSH 0x5f73c8                       ; 00592c63 | = "modelName"
    LEA EBX,[ESI + 0x158]               ; 00592c68
    PUSH EBX                            ; 00592c6e
    CALL core_actor.cpp_FUN_0040b7f0    ; 00592c6f
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_0040b7f0(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 00592c74
    PUSH 0x5f73d2                       ; 00592c77 | = "motion state"
    PUSH EBX                            ; 00592c7c
    CALL core_actor.cpp_FUN_0040b870    ; 00592c7d
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_0040b870(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 00592c82
    POP ESI                             ; 00592c85
    POP EBX                             ; 00592c86
    RET                                 ; 00592c87

