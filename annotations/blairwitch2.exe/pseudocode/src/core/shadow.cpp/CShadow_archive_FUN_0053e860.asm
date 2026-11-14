; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_shadow_cpp_CShadow_archive_FUN_0053e860(CShadow *this_ptr)
;
; Parameters:
; CShadow *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_speed_005e670f
;   TerminatedCString s_modelName_005e6715
;   TerminatedCString s_guardDistance_005e671f
;   TerminatedCString s_motion_state_005e672d
;   TerminatedCString s_lightUpEyes_005e673a
;   TerminatedCString s_chainAnchor_005e6746
;   TerminatedCString s_chainLength_005e6752
;   undefined4 DAT_005e675e
;   TerminatedCString s_phase_005e6763
;   TerminatedCString s_phaseTimer_005e6769
;   TerminatedCString s_alpha1_005e6774
;   TerminatedCString s_alpha2_005e677b
;   int g_CShadowClassVersion = 0x1
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b9e0
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0
;   core_actor.cpp_archiveFloat_FUN_0040b8e0
;   core_actor.cpp_archiveInteger_FUN_0040b960
;   core_actor.cpp_archiveMotionState_FUN_0040bb60
;   core_enemy.cpp_CEnemy_archive_FUN_00487ec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053e860
        ;   Label: core_shadow.cpp_CShadow_archive_FUN_0053e860
    MOV EBX,dword ptr [ESP + 0x8]       ; 0053e861
    PUSH EBX                            ; 0053e865
    CALL core_enemy.cpp_CEnemy_archive_FUN_00487ec0 ; 0053e866
        ;   XREF to: 00487ec0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_00487ec0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0053e86b
    PUSH 0x5e670f                       ; 0053e86e | = "speed"
    LEA EAX,[EBX + 0x10a60]             ; 0053e873
    PUSH EAX                            ; 0053e879
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 0053e87a
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b8e0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0053e87f
    PUSH 0x5e6715                       ; 0053e882 | = "modelName"
    LEA EAX,[EBX + 0x2b4]               ; 0053e887
    PUSH EAX                            ; 0053e88d
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0 ; 0053e88e
        ;   XREF to: 0040bae0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0(CDeformableModelInstance * model_ptr, char * property_name)
    MOV EDX,dword ptr [0x0061bb6c]      ; 0053e893 | g_CShadowClassVersion
    ADD ESP,0x8                         ; 0053e899
    CMP EDX,0x3                         ; 0053e89c
    JL 0x0053e931                       ; 0053e89f
        ;   XREF to: 0053e931 (CONDITIONAL_JUMP)  ; LAB_0053e931
    PUSH 0x5e672d                       ; 0053e8a5 | = "motion state"
        ;   Label: LAB_0053e8a5
    LEA EAX,[EBX + 0x2b4]               ; 0053e8aa
    PUSH EAX                            ; 0053e8b0
    CALL core_actor.cpp_archiveMotionState_FUN_0040bb60 ; 0053e8b1
        ;   XREF to: 0040bb60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040bb60(CMotionController * motion_controller, char * property_name)
    MOV ECX,dword ptr [0x0061bb6c]      ; 0053e8b6 | g_CShadowClassVersion
    ADD ESP,0x8                         ; 0053e8bc
    CMP ECX,0x2                         ; 0053e8bf
    JL 0x0053e8d8                       ; 0053e8c2
        ;   XREF to: 0053e8d8 (CONDITIONAL_JUMP)  ; LAB_0053e8d8
    PUSH 0x5e673a                       ; 0053e8c4 | = "lightUpEyes"
    LEA EAX,[EBX + 0x10b18]             ; 0053e8c9
    PUSH EAX                            ; 0053e8cf
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 0053e8d0
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0053e8d5
    CMP dword ptr [0x0061bb6c],0x4      ; 0053e8d8 | g_CShadowClassVersion
        ;   Label: LAB_0053e8d8
    JL 0x0053e909                       ; 0053e8df
        ;   XREF to: 0053e909 (CONDITIONAL_JUMP)  ; LAB_0053e909
    PUSH 0x5e6746                       ; 0053e8e1 | = "chainAnchor"
    LEA EAX,[EBX + 0x10b2c]             ; 0053e8e6
    PUSH EAX                            ; 0053e8ec
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 0053e8ed
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b9e0(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 0053e8f2
    PUSH 0x5e6752                       ; 0053e8f5 | = "chainLength"
    LEA EAX,[EBX + 0x10b30]             ; 0053e8fa
    PUSH EAX                            ; 0053e900
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 0053e901
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b8e0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0053e906
    CMP dword ptr [0x0061bb6c],0x5      ; 0053e909 | g_CShadowClassVersion
        ;   Label: LAB_0053e909
    JL 0x0053e926                       ; 0053e910
        ;   XREF to: 0053e926 (CONDITIONAL_JUMP)  ; LAB_0053e926
    PUSH 0x5e675e                       ; 0053e912 | DAT_005e675e
    LEA EAX,[EBX + 0x10af8]             ; 0053e917
    PUSH EAX                            ; 0053e91d
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 0053e91e
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0053e923
    CMP dword ptr [0x0061bb6c],0x6      ; 0053e926 | g_CShadowClassVersion
        ;   Label: LAB_0053e926
    JGE 0x0053e94a                      ; 0053e92d
        ;   XREF to: 0053e94a (CONDITIONAL_JUMP)  ; LAB_0053e94a
    POP EBX                             ; 0053e92f
    RET                                 ; 0053e930
    PUSH 0x5e671f                       ; 0053e931 | = "guardDistance"
        ;   Label: LAB_0053e931
    LEA EAX,[EBX + 0x10a70]             ; 0053e936
    PUSH EAX                            ; 0053e93c
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 0053e93d
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b8e0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0053e942
    JMP 0x0053e8a5                      ; 0053e945
        ;   XREF to: 0053e8a5 (UNCONDITIONAL_JUMP)  ; LAB_0053e8a5
    PUSH 0x5e6763                       ; 0053e94a | = "phase"
        ;   Label: LAB_0053e94a
    LEA EAX,[EBX + 0x10b40]             ; 0053e94f
    PUSH EAX                            ; 0053e955
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 0053e956
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0053e95b
    PUSH 0x5e6769                       ; 0053e95e | = "phaseTimer"
    LEA EAX,[EBX + 0x10b44]             ; 0053e963
    PUSH EAX                            ; 0053e969
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 0053e96a
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b8e0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0053e96f
    PUSH 0x5e6774                       ; 0053e972 | = "alpha1"
    LEA EAX,[EBX + 0x10b34]             ; 0053e977
    PUSH EAX                            ; 0053e97d
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 0053e97e
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b9e0(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 0053e983
    PUSH 0x5e677b                       ; 0053e986 | = "alpha2"
    ADD EBX,0x10b38                     ; 0053e98b
    PUSH EBX                            ; 0053e991
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 0053e992
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b9e0(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 0053e997
    POP EBX                             ; 0053e99a
    RET                                 ; 0053e99b

