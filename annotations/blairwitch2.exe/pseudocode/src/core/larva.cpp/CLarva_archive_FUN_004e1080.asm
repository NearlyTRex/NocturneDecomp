; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_larva_cpp_CLarva_archive_FUN_004e1080(CLarva *this_ptr)
;
; Parameters:
; CLarva *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_speed_005dbe55+1
;   TerminatedCString s_modelName_005dbe5c
;   TerminatedCString s_guardDistance_005dbe66
;   TerminatedCString s_motion_state_005dbe74
;   int g_CLarvaClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0
;   core_actor.cpp_archiveFloat_FUN_0040b8e0
;   core_actor.cpp_archiveMotionState_FUN_0040bb60
;   core_enemy.cpp_CEnemy_archive_FUN_00487ec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e1080
        ;   Label: core_larva.cpp_CLarva_archive_FUN_004e1080
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e1081
    PUSH EBX                            ; 004e1085
    CALL core_enemy.cpp_CEnemy_archive_FUN_00487ec0 ; 004e1086
        ;   XREF to: 00487ec0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_00487ec0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004e108b
    PUSH 0x5dbe56                       ; 004e108e | s_speed_005dbe55+1
    LEA EAX,[EBX + 0x10a60]             ; 004e1093
    PUSH EAX                            ; 004e1099
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 004e109a
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b8e0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 004e109f
    PUSH 0x5dbe5c                       ; 004e10a2 | = "modelName"
    LEA EAX,[EBX + 0x2b4]               ; 004e10a7
    PUSH EAX                            ; 004e10ad
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0 ; 004e10ae
        ;   XREF to: 0040bae0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0(CDeformableModelInstance * model_ptr, char * property_name)
    MOV EDX,dword ptr [0x00617dec]      ; 004e10b3 | g_CLarvaClassVersion
    ADD ESP,0x8                         ; 004e10b9
    CMP EDX,0x2                         ; 004e10bc
    JL 0x004e10d7                       ; 004e10bf
        ;   XREF to: 004e10d7 (CONDITIONAL_JUMP)  ; LAB_004e10d7
    PUSH 0x5dbe74                       ; 004e10c1 | = "motion state"
        ;   Label: LAB_004e10c1
    ADD EBX,0x2b4                       ; 004e10c6
    PUSH EBX                            ; 004e10cc
    CALL core_actor.cpp_archiveMotionState_FUN_0040bb60 ; 004e10cd
        ;   XREF to: 0040bb60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040bb60(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 004e10d2
    POP EBX                             ; 004e10d5
    RET                                 ; 004e10d6
    PUSH 0x5dbe66                       ; 004e10d7 | = "guardDistance"
        ;   Label: LAB_004e10d7
    LEA EAX,[EBX + 0x10a70]             ; 004e10dc
    PUSH EAX                            ; 004e10e2
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 004e10e3
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b8e0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 004e10e8
    JMP 0x004e10c1                      ; 004e10eb
        ;   XREF to: 004e10c1 (UNCONDITIONAL_JUMP)  ; LAB_004e10c1

