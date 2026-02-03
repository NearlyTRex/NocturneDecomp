; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_cow_cpp_CZombieCow_archive_FUN_00444840(CZombieCow *this_ptr)
;
; Parameters:
; CZombieCow *     Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_speed_0061955d
;   TerminatedCString s_modelName_00619563
;   TerminatedCString s_guardDistance_0061956d
;   TerminatedCString s_motion_state_0061957b
;   int g_CZombieCowClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040b970
;   core_actor.cpp_archiveFloat_FUN_0040b770
;   core_actor.cpp_archiveMotionState_FUN_0040b9f0
;   core_enemy.cpp_CEnemy_archive_FUN_004a9660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00444840
        ;   Label: core_cow.cpp_CZombieCow_archive_FUN_00444840
    MOV EBX,dword ptr [ESP + 0x8]       ; 00444841
    PUSH EBX                            ; 00444845
    CALL core_enemy.cpp_CEnemy_archive_FUN_004a9660 ; 00444846
        ;   XREF to: 004a9660 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_004a9660(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0044484b
    PUSH 0x61955d                       ; 0044484e | = "speed"
    LEA EAX,[EBX + 0xbe24]              ; 00444853
    PUSH EAX                            ; 00444859
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 0044485a
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0044485f
    PUSH 0x619563                       ; 00444862 | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 00444867
    PUSH EAX                            ; 0044486d
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040b970 ; 0044486e
        ;   XREF to: 0040b970 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040b970(CDeformableModelInstance * model_ptr, char * property_name)
    MOV EDX,dword ptr [0x0066ec60]      ; 00444873 | g_CZombieCowClassVersion
    ADD ESP,0x8                         ; 00444879
    CMP EDX,0x2                         ; 0044487c
    JL 0x00444897                       ; 0044487f
        ;   XREF to: 00444897 (CONDITIONAL_JUMP)  ; LAB_00444897
    PUSH 0x61957b                       ; 00444881 | = "motion state"
        ;   Label: LAB_00444881
    ADD EBX,0x158                       ; 00444886
    PUSH EBX                            ; 0044488c
    CALL core_actor.cpp_archiveMotionState_FUN_0040b9f0 ; 0044488d
        ;   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040b9f0(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 00444892
    POP EBX                             ; 00444895
    RET                                 ; 00444896
    PUSH 0x61956d                       ; 00444897 | = "guardDistance"
        ;   Label: LAB_00444897
    LEA EAX,[EBX + 0xbe34]              ; 0044489c
    PUSH EAX                            ; 004448a2
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 004448a3
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 004448a8
    JMP 0x00444881                      ; 004448ab
        ;   XREF to: 00444881 (UNCONDITIONAL_JUMP)  ; LAB_00444881

