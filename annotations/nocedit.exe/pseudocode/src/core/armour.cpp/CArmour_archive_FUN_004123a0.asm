; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_armour_cpp_CArmour_archive_FUN_004123a0(CArmour *this_ptr)
;
; Parameters:
; CArmour *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_speed_00614de0
;   TerminatedCString s_modelName_00614de6
;   TerminatedCString s_motion_state_00614df0
;   TerminatedCString s_fallApartEvent_00614dfd
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040b970
;   core_actor.cpp_archiveFloat_FUN_0040b770
;   core_actor.cpp_archiveMotionState_FUN_0040b9f0
;   core_actor.cpp_archiveString_FUN_0040b5c0
;   core_enemy.cpp_CEnemy_archive_FUN_004a9660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004123a0
        ;   Label: core_armour.cpp_CArmour_archive_FUN_004123a0
    PUSH ESI                            ; 004123a1
    MOV ESI,dword ptr [ESP + 0xc]       ; 004123a2
    PUSH ESI                            ; 004123a6
    CALL core_enemy.cpp_CEnemy_archive_FUN_004a9660 ; 004123a7
        ;   XREF to: 004a9660 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_004a9660(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004123ac
    PUSH 0x614de0                       ; 004123af | = "speed"
    LEA EBX,[ESI + 0xbe24]              ; 004123b4
    PUSH EBX                            ; 004123ba
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 004123bb
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 004123c0
    PUSH 0x614de6                       ; 004123c3 | = "modelName"
    LEA EBX,[ESI + 0x158]               ; 004123c8
    PUSH EBX                            ; 004123ce
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040b970 ; 004123cf
        ;   XREF to: 0040b970 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040b970(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 004123d4
    PUSH 0x614df0                       ; 004123d7 | = "motion state"
    PUSH EBX                            ; 004123dc
    CALL core_actor.cpp_archiveMotionState_FUN_0040b9f0 ; 004123dd
        ;   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040b9f0(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 004123e2
    PUSH 0x614dfd                       ; 004123e5 | = "fallApartEvent"
    ADD ESI,0xbebc                      ; 004123ea
    PUSH ESI                            ; 004123f0
    CALL core_actor.cpp_archiveString_FUN_0040b5c0 ; 004123f1
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b5c0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004123f6
    POP ESI                             ; 004123f9
    POP EBX                             ; 004123fa
    RET                                 ; 004123fb

