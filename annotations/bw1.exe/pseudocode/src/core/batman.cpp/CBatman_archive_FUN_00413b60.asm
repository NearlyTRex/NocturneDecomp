; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_batman_cpp_CBatman_archive_FUN_00413b60(CBatman *this_ptr)
;
; Parameters:
; CBatman *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_speed_005d3ae0+1
;   TerminatedCString s_modelName_005d3ae7
;   TerminatedCString s_motion_state_005d3af1
;   TerminatedCString s_fallEvent_005d3afe
;   TerminatedCString s_mistState_005d3b08
;   TerminatedCString s_vanishTimer_005d3b12
;   TerminatedCString s_newPos_005d3b1e
;   int g_CBatmanClassVersion = 0x3
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040b7f0
;   core_actor.cpp_archiveFloat_FUN_0040b5f0
;   core_actor.cpp_archiveInteger_FUN_0040b670
;   core_actor.cpp_archiveMotionState_FUN_0040b870
;   core_actor.cpp_archiveString_FUN_0040b440
;   core_actor.cpp_archiveVector_FUN_0040b1c0
;   core_enemy.cpp_CEnemy_archive_FUN_004a0520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00413b60
        ;   Label: core_batman.cpp_CBatman_archive_FUN_00413b60
    PUSH ESI                            ; 00413b61
    MOV EBX,dword ptr [ESP + 0xc]       ; 00413b62
    PUSH EBX                            ; 00413b66
    CALL core_enemy.cpp_CEnemy_archive_FUN_004a0520 ; 00413b67
        ;   XREF to: 004a0520 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_004a0520(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00413b6c
    PUSH 0x5d3ae1                       ; 00413b6f | s_speed_005d3ae0+1
    LEA ESI,[EBX + 0xc1d0]              ; 00413b74
    PUSH ESI                            ; 00413b7a
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 00413b7b
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b5f0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00413b80
    PUSH 0x5d3ae7                       ; 00413b83 | = "modelName"
    LEA ESI,[EBX + 0x158]               ; 00413b88
    PUSH ESI                            ; 00413b8e
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040b7f0 ; 00413b8f
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040b7f0(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 00413b94
    PUSH 0x5d3af1                       ; 00413b97 | = "motion state"
    PUSH ESI                            ; 00413b9c
    CALL core_actor.cpp_archiveMotionState_FUN_0040b870 ; 00413b9d
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040b870(CMotionController * motion_controller, char * property_name)
    MOV EDX,dword ptr [0x00610990]      ; 00413ba2 | g_CBatmanClassVersion
    ADD ESP,0x8                         ; 00413ba8
    CMP EDX,0x2                         ; 00413bab
    JGE 0x00413bbc                      ; 00413bae
        ;   XREF to: 00413bbc (CONDITIONAL_JUMP)  ; LAB_00413bbc
    CMP dword ptr [0x00610990],0x3      ; 00413bb0 | g_CBatmanClassVersion
    JGE 0x00413bdc                      ; 00413bb7
        ;   XREF to: 00413bdc (CONDITIONAL_JUMP)  ; LAB_00413bdc
    POP ESI                             ; 00413bb9
    POP EBX                             ; 00413bba
    RET                                 ; 00413bbb
    PUSH 0x5d3afe                       ; 00413bbc | = "fallEvent"
        ;   Label: LAB_00413bbc
    LEA ESI,[EBX + 0xc26c]              ; 00413bc1
    PUSH ESI                            ; 00413bc7
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 00413bc8
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00413bcd
    CMP dword ptr [0x00610990],0x3      ; 00413bd0 | g_CBatmanClassVersion
    JGE 0x00413bdc                      ; 00413bd7
        ;   XREF to: 00413bdc (CONDITIONAL_JUMP)  ; LAB_00413bdc
    POP ESI                             ; 00413bd9
    POP EBX                             ; 00413bda
    RET                                 ; 00413bdb
    PUSH 0x5d3b08                       ; 00413bdc | = "mistState"
        ;   Label: LAB_00413bdc
    LEA ESI,[EBX + 0xc308]              ; 00413be1
    PUSH ESI                            ; 00413be7
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 00413be8
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00413bed
    PUSH 0x5d3b12                       ; 00413bf0 | = "vanishTimer"
    LEA ESI,[EBX + 0xc30c]              ; 00413bf5
    PUSH ESI                            ; 00413bfb
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 00413bfc
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b5f0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00413c01
    PUSH 0x5d3b1e                       ; 00413c04 | = "newPos"
    ADD EBX,0xc310                      ; 00413c09
    PUSH EBX                            ; 00413c0f
    CALL core_actor.cpp_archiveVector_FUN_0040b1c0 ; 00413c10
        ;   XREF to: 0040b1c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveVector_FUN_0040b1c0(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 00413c15
    POP ESI                             ; 00413c18
    POP EBX                             ; 00413c19
    RET                                 ; 00413c1a

