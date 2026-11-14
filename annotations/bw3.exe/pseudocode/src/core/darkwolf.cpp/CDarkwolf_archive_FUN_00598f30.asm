; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_darkwolf_cpp_CDarkwolf_archive_FUN_00598f30(CDarkwolf *this_ptr)
;
; Parameters:
; CDarkwolf *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_speed_005d9889+1
;   TerminatedCString s_modelName_005d9890
;   TerminatedCString s_guardDistance_005d989a
;   TerminatedCString s_motion_state_005d98a8
;   TerminatedCString s_morphTime_005d98b5
;   int g_CDarkwolfClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30
;   core_actor.cpp_archiveFloat_FUN_0040b830
;   core_actor.cpp_archiveMotionState_FUN_0040bab0
;   core_enemy.cpp_CEnemy_archive_FUN_00489120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00598f30
        ;   Label: core_darkwolf.cpp_CDarkwolf_archive_FUN_00598f30
    PUSH ESI                            ; 00598f31
    MOV EBX,dword ptr [ESP + 0xc]       ; 00598f32
    PUSH EBX                            ; 00598f36
    CALL core_enemy.cpp_CEnemy_archive_FUN_00489120 ; 00598f37
        ;   XREF to: 00489120 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_00489120(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00598f3c
    PUSH 0x5d988a                       ; 00598f3f | s_speed_005d9889+1
    LEA ESI,[EBX + 0xcdcc]              ; 00598f44
    PUSH ESI                            ; 00598f4a
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00598f4b
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b830(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00598f50
    PUSH 0x5d9890                       ; 00598f53 | = "modelName"
    LEA ESI,[EBX + 0x158]               ; 00598f58
    PUSH ESI                            ; 00598f5e
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30 ; 00598f5f
        ;   XREF to: 0040ba30 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 00598f64
    PUSH 0x5d989a                       ; 00598f67 | = "guardDistance"
    LEA EAX,[EBX + 0xcddc]              ; 00598f6c
    PUSH EAX                            ; 00598f72
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00598f73
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b830(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00598f78
    PUSH 0x5d98a8                       ; 00598f7b | = "motion state"
    PUSH ESI                            ; 00598f80
    CALL core_actor.cpp_archiveMotionState_FUN_0040bab0 ; 00598f81
        ;   XREF to: 0040bab0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040bab0(CMotionController * motion_controller, char * property_name)
    MOV EDX,dword ptr [0x006073e8]      ; 00598f86 | g_CDarkwolfClassVersion
    ADD ESP,0x8                         ; 00598f8c
    CMP EDX,0x1                         ; 00598f8f
    JG 0x00598f97                       ; 00598f92
        ;   XREF to: 00598f97 (CONDITIONAL_JUMP)  ; LAB_00598f97
    POP ESI                             ; 00598f94
    POP EBX                             ; 00598f95
    RET                                 ; 00598f96
    PUSH 0x5d98b5                       ; 00598f97 | = "morphTime"
        ;   Label: LAB_00598f97
    ADD EBX,0xdc90                      ; 00598f9c
    PUSH EBX                            ; 00598fa2
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00598fa3
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b830(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00598fa8
    POP ESI                             ; 00598fab
    POP EBX                             ; 00598fac
    RET                                 ; 00598fad

