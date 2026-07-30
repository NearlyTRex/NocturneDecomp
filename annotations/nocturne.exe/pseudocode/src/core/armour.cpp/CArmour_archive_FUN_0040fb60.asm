; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_armour_cpp_CArmour_archive_FUN_0040fb60(CEnemy *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_speed_00578482
;   TerminatedCString s_modelName_00578488
;   TerminatedCString s_motion_state_00578492
;   TerminatedCString s_fallApartEvent_0057849f
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveMotionState_FUN_0040cb00
;   core_actor.cpp_archiveString_FUN_0040c6d0
;   core_enemy.cpp_CEnemy_archive_FUN_004796c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040fb60
        ;   Label: core_armour.cpp_CArmour_archive_FUN_0040fb60
    PUSH ESI                            ; 0040fb61
    MOV ESI,dword ptr [ESP + 0xc]       ; 0040fb62
    PUSH ESI                            ; 0040fb66
    CALL core_enemy.cpp_CEnemy_archive_FUN_004796c0 ; 0040fb67
        ;   XREF to: 004796c0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_004796c0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0040fb6c
    PUSH 0x578482                       ; 0040fb6f | = "speed"
    LEA EBX,[ESI + 0xbc8c]              ; 0040fb74
    PUSH EBX                            ; 0040fb7a
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0040fb7b
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0040fb80
    PUSH 0x578488                       ; 0040fb83 | = "modelName"
    LEA EBX,[ESI + 0x150]               ; 0040fb88
    PUSH EBX                            ; 0040fb8e
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80 ; 0040fb8f
        ;   XREF to: 0040ca80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 0040fb94
    PUSH 0x578492                       ; 0040fb97 | = "motion state"
    PUSH EBX                            ; 0040fb9c
    CALL core_actor.cpp_archiveMotionState_FUN_0040cb00 ; 0040fb9d
        ;   XREF to: 0040cb00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040cb00(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 0040fba2
    PUSH 0x57849f                       ; 0040fba5 | = "fallApartEvent"
    ADD ESI,0xbd24                      ; 0040fbaa
    PUSH ESI                            ; 0040fbb0
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 0040fbb1
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0040fbb6
    POP ESI                             ; 0040fbb9
    POP EBX                             ; 0040fbba
    RET                                 ; 0040fbbb

