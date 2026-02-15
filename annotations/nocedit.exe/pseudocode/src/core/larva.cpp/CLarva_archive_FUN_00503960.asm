; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_larva_cpp_CLarva_archive_FUN_00503960(CLarva *this_ptr)
;
; Parameters:
; CLarva *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_speed_00630f93
;   TerminatedCString s_modelName_00630f99
;   TerminatedCString s_guardDistance_00630fa3
;   TerminatedCString s_motion_state_00630fb1
;   int g_CLarvaClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040b970
;   core_actor.cpp_archiveFloat_FUN_0040b770
;   core_actor.cpp_archiveMotionState_FUN_0040b9f0
;   core_enemy.cpp_CEnemy_archive_FUN_004a9660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00503960
        ;   Label: core_larva.cpp_CLarva_archive_FUN_00503960
    MOV EBX,dword ptr [ESP + 0x8]       ; 00503961
    PUSH EBX                            ; 00503965
    CALL core_enemy.cpp_CEnemy_archive_FUN_004a9660 ; 00503966
        ;   XREF to: 004a9660 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_004a9660(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0050396b
    PUSH 0x630f93                       ; 0050396e | = "speed"
    LEA EAX,[EBX + 0xbe24]              ; 00503973
    PUSH EAX                            ; 00503979
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 0050397a
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0050397f
    PUSH 0x630f99                       ; 00503982 | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 00503987
    PUSH EAX                            ; 0050398d
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040b970 ; 0050398e
        ;   XREF to: 0040b970 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040b970(CDeformableModelInstance * model_ptr, char * property_name)
    MOV EDX,dword ptr [0x0067cf5c]      ; 00503993 | g_CLarvaClassVersion
    ADD ESP,0x8                         ; 00503999
    CMP EDX,0x2                         ; 0050399c
    JL 0x005039b7                       ; 0050399f
        ;   XREF to: 005039b7 (CONDITIONAL_JUMP)  ; LAB_005039b7
    PUSH 0x630fb1                       ; 005039a1 | = "motion state"
        ;   Label: LAB_005039a1
    ADD EBX,0x158                       ; 005039a6
    PUSH EBX                            ; 005039ac
    CALL core_actor.cpp_archiveMotionState_FUN_0040b9f0 ; 005039ad
        ;   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040b9f0(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 005039b2
    POP EBX                             ; 005039b5
    RET                                 ; 005039b6
    PUSH 0x630fa3                       ; 005039b7 | = "guardDistance"
        ;   Label: LAB_005039b7
    LEA EAX,[EBX + 0xbe34]              ; 005039bc
    PUSH EAX                            ; 005039c2
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 005039c3
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005039c8
    JMP 0x005039a1                      ; 005039cb
        ;   XREF to: 005039a1 (UNCONDITIONAL_JUMP)  ; LAB_005039a1

