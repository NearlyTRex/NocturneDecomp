; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gargoyle_cpp_CGargoyle_archive_FUN_004c5e50(CGargoyle *this_ptr)
;
; Parameters:
; CGargoyle *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_speed_005c3f9f+1
;   TerminatedCString s_modelName_005c3fa6
;   TerminatedCString s_motion_state_005c3fb0
;   TerminatedCString s_stoneRed_005c3fbd
;   TerminatedCString s_stoneGreen_005c3fc6
;   TerminatedCString s_stoneBlue_005c3fd1
;   TerminatedCString s_homeBase_005c3fdb
;   int g_CGargoyleClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b930
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30
;   core_actor.cpp_archiveFloat_FUN_0040b830
;   core_actor.cpp_archiveInteger_FUN_0040b8b0
;   core_actor.cpp_archiveMotionState_FUN_0040bab0
;   core_enemy.cpp_CEnemy_archive_FUN_00489120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c5e50
        ;   Label: core_gargoyle.cpp_CGargoyle_archive_FUN_004c5e50
    PUSH ESI                            ; 004c5e51
    MOV EBX,dword ptr [ESP + 0xc]       ; 004c5e52
    PUSH EBX                            ; 004c5e56
    CALL core_enemy.cpp_CEnemy_archive_FUN_00489120 ; 004c5e57
        ;   XREF to: 00489120 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_00489120(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004c5e5c
    PUSH 0x5c3fa0                       ; 004c5e5f | s_speed_005c3f9f+1
    LEA ESI,[EBX + 0xcdcc]              ; 004c5e64
    PUSH ESI                            ; 004c5e6a
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 004c5e6b
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 004c5e70
    PUSH 0x5c3fa6                       ; 004c5e73 | = "modelName"
    LEA ESI,[EBX + 0x158]               ; 004c5e78
    PUSH ESI                            ; 004c5e7e
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30 ; 004c5e7f
        ;   XREF to: 0040ba30 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 004c5e84
    PUSH 0x5c3fb0                       ; 004c5e87 | = "motion state"
    PUSH ESI                            ; 004c5e8c
    CALL core_actor.cpp_archiveMotionState_FUN_0040bab0 ; 004c5e8d
        ;   XREF to: 0040bab0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040bab0(CMotionController * motion_controller, char * property_name)
    MOV EDX,dword ptr [0x005fec80]      ; 004c5e92 | g_CGargoyleClassVersion
    ADD ESP,0x8                         ; 004c5e98
    CMP EDX,0x2                         ; 004c5e9b
    JGE 0x004c5ea3                      ; 004c5e9e
        ;   XREF to: 004c5ea3 (CONDITIONAL_JUMP)  ; LAB_004c5ea3
    POP ESI                             ; 004c5ea0
    POP EBX                             ; 004c5ea1
    RET                                 ; 004c5ea2
    PUSH 0x5c3fbd                       ; 004c5ea3 | = "stoneRed"
        ;   Label: LAB_004c5ea3
    LEA ESI,[EBX + 0xd084]              ; 004c5ea8
    PUSH ESI                            ; 004c5eae
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 004c5eaf
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004c5eb4
    PUSH 0x5c3fc6                       ; 004c5eb7 | = "stoneGreen"
    LEA ESI,[EBX + 0xd088]              ; 004c5ebc
    PUSH ESI                            ; 004c5ec2
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 004c5ec3
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004c5ec8
    PUSH 0x5c3fd1                       ; 004c5ecb | = "stoneBlue"
    LEA ESI,[EBX + 0xd08c]              ; 004c5ed0
    PUSH ESI                            ; 004c5ed6
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 004c5ed7
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004c5edc
    PUSH 0x5c3fdb                       ; 004c5edf | = "homeBase"
    ADD EBX,0xd090                      ; 004c5ee4
    PUSH EBX                            ; 004c5eea
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 004c5eeb
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b930()
    ADD ESP,0x8                         ; 004c5ef0
    POP ESI                             ; 004c5ef3
    POP EBX                             ; 004c5ef4
    RET                                 ; 004c5ef5

