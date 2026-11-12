; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_biggs_cpp_CBiggs_archive_FUN_00414f30(CBiggs *this_ptr)
;
; Parameters:
; CBiggs *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_speed_005d3c51
;   TerminatedCString s_modelName_005d3c57
;   TerminatedCString s_motion_state_005d3c61
;   TerminatedCString s_morphing_005d3c6e
;   TerminatedCString s_morphTimer_005d3c77
;   TerminatedCString s_morphEvent_005d3c82
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040b7f0
;   core_actor.cpp_archiveFloat_FUN_0040b5f0
;   core_actor.cpp_archiveInteger_FUN_0040b670
;   core_actor.cpp_archiveMotionState_FUN_0040b870
;   core_actor.cpp_archiveString_FUN_0040b440
;   core_enemy.cpp_CEnemy_archive_FUN_004a0520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414f30
        ;   Label: core_biggs.cpp_CBiggs_archive_FUN_00414f30
    PUSH ESI                            ; 00414f31
    MOV EBX,dword ptr [ESP + 0xc]       ; 00414f32
    PUSH EBX                            ; 00414f36
    CALL core_enemy.cpp_CEnemy_archive_FUN_004a0520 ; 00414f37
        ;   XREF to: 004a0520 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_004a0520(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00414f3c
    PUSH 0x5d3c51                       ; 00414f3f | = "speed"
    LEA ESI,[EBX + 0xc1d0]              ; 00414f44
    PUSH ESI                            ; 00414f4a
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 00414f4b
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b5f0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00414f50
    PUSH 0x5d3c57                       ; 00414f53 | = "modelName"
    LEA ESI,[EBX + 0x158]               ; 00414f58
    PUSH ESI                            ; 00414f5e
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040b7f0 ; 00414f5f
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040b7f0(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 00414f64
    PUSH 0x5d3c61                       ; 00414f67 | = "motion state"
    PUSH ESI                            ; 00414f6c
    CALL core_actor.cpp_archiveMotionState_FUN_0040b870 ; 00414f6d
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040b870(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 00414f72
    PUSH 0x5d3c6e                       ; 00414f75 | = "morphing"
    LEA ESI,[EBX + 0xc3e4]              ; 00414f7a
    PUSH ESI                            ; 00414f80
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 00414f81
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00414f86
    PUSH 0x5d3c77                       ; 00414f89 | = "morphTimer"
    LEA ESI,[EBX + 0xc3e8]              ; 00414f8e
    PUSH ESI                            ; 00414f94
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 00414f95
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b5f0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00414f9a
    PUSH 0x5d3c82                       ; 00414f9d | = "morphEvent"
    ADD EBX,0xd018                      ; 00414fa2
    PUSH EBX                            ; 00414fa8
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 00414fa9
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00414fae
    POP ESI                             ; 00414fb1
    POP EBX                             ; 00414fb2
    RET                                 ; 00414fb3

