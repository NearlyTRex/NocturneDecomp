; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_smiley_cpp_CSmiley_archive_FUN_0054a710(CSmiley *this_ptr)
;
; Parameters:
; CSmiley *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_speed_005e7809
;   TerminatedCString s_modelName_005e780f
;   TerminatedCString s_guardDistance_005e7819
;   TerminatedCString s_motion_state_005e7827
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0
;   core_actor.cpp_archiveFloat_FUN_0040b8e0
;   core_actor.cpp_archiveMotionState_FUN_0040bb60
;   core_enemy.cpp_CEnemy_archive_FUN_00487ec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054a710
        ;   Label: core_smiley.cpp_CSmiley_archive_FUN_0054a710
    PUSH ESI                            ; 0054a711
    MOV ESI,dword ptr [ESP + 0xc]       ; 0054a712
    PUSH ESI                            ; 0054a716
    CALL core_enemy.cpp_CEnemy_archive_FUN_00487ec0 ; 0054a717
        ;   XREF to: 00487ec0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_00487ec0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0054a71c
    PUSH 0x5e7809                       ; 0054a71f | = "speed"
    LEA EBX,[ESI + 0x10a60]             ; 0054a724
    PUSH EBX                            ; 0054a72a
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 0054a72b
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b8e0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0054a730
    PUSH 0x5e780f                       ; 0054a733 | = "modelName"
    LEA EBX,[ESI + 0x2b4]               ; 0054a738
    PUSH EBX                            ; 0054a73e
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0 ; 0054a73f
        ;   XREF to: 0040bae0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 0054a744
    PUSH 0x5e7819                       ; 0054a747 | = "guardDistance"
    ADD ESI,0x10afc                     ; 0054a74c
    PUSH ESI                            ; 0054a752
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 0054a753
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b8e0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0054a758
    PUSH 0x5e7827                       ; 0054a75b | = "motion state"
    PUSH EBX                            ; 0054a760
    CALL core_actor.cpp_archiveMotionState_FUN_0040bb60 ; 0054a761
        ;   XREF to: 0040bb60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040bb60(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 0054a766
    POP ESI                             ; 0054a769
    POP EBX                             ; 0054a76a
    RET                                 ; 0054a76b

