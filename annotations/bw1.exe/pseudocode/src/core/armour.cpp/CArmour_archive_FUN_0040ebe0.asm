; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_armour_cpp_CArmour_archive_FUN_0040ebe0(CArmour *this_ptr)
;
; Parameters:
; CArmour *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_speed_005d32e4
;   TerminatedCString s_modelName_005d32ea
;   TerminatedCString s_motion_state_005d32f4
;   TerminatedCString s_fallApartEvent_005d3301
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040b7f0
;   core_actor.cpp_archiveFloat_FUN_0040b5f0
;   core_actor.cpp_archiveMotionState_FUN_0040b870
;   core_actor.cpp_archiveString_FUN_0040b440
;   core_enemy.cpp_CEnemy_archive_FUN_004a0520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040ebe0
        ;   Label: core_armour.cpp_CArmour_archive_FUN_0040ebe0
    PUSH ESI                            ; 0040ebe1
    MOV ESI,dword ptr [ESP + 0xc]       ; 0040ebe2
    PUSH ESI                            ; 0040ebe6
    CALL core_enemy.cpp_CEnemy_archive_FUN_004a0520 ; 0040ebe7
        ;   XREF to: 004a0520 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_004a0520(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0040ebec
    PUSH 0x5d32e4                       ; 0040ebef | = "speed"
    LEA EBX,[ESI + 0xc1d0]              ; 0040ebf4
    PUSH EBX                            ; 0040ebfa
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 0040ebfb
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b5f0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0040ec00
    PUSH 0x5d32ea                       ; 0040ec03 | = "modelName"
    LEA EBX,[ESI + 0x158]               ; 0040ec08
    PUSH EBX                            ; 0040ec0e
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040b7f0 ; 0040ec0f
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040b7f0(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 0040ec14
    PUSH 0x5d32f4                       ; 0040ec17 | = "motion state"
    PUSH EBX                            ; 0040ec1c
    CALL core_actor.cpp_archiveMotionState_FUN_0040b870 ; 0040ec1d
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040b870(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 0040ec22
    PUSH 0x5d3301                       ; 0040ec25 | = "fallApartEvent"
    ADD ESI,0xc268                      ; 0040ec2a
    PUSH ESI                            ; 0040ec30
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 0040ec31
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0040ec36
    POP ESI                             ; 0040ec39
    POP EBX                             ; 0040ec3a
    RET                                 ; 0040ec3b

