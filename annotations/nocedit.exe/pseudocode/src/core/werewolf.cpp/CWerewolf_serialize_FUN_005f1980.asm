; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_werewolf.cpp_CWerewolf_serialize_FUN_005f1980(CWerewolf * this_ptr)
;
; Parameters:
; CWerewolf *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_speed_00657dbc
;   TerminatedCString s_modelName_00657dc2
;   TerminatedCString s_guardDistance_00657dcc
;   TerminatedCString s_motion_state_00657dda
;   TerminatedCString s_lightUpEyes_00657de7
;   TerminatedCString s_chainAnchor_00657df3
;   TerminatedCString s_chainLength_00657dff
;   TerminatedCString s_type_00657e0b
;   TerminatedCString s_phase_00657e10
;   TerminatedCString s_phaseTimer_00657e16
;   TerminatedCString s_alpha1_00657e21
;   TerminatedCString s_alpha2_00657e28
;   int g_CWerewolfClassVersion = 0x6
;
; Called Functions:
;   core_actor.cpp_serializeActor_FUN_0040b870
;   core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
;   core_actor.cpp_serializeFloat_FUN_0040b770
;   core_actor.cpp_serializeInteger_FUN_0040b7f0
;   core_actor.cpp_serializeMotionState_FUN_0040b9f0
;   core_enemy.cpp_CEnemy_serialize_FUN_004a9660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f1980
        ;   Label: core_werewolf.cpp_CWerewolf_serialize_FUN_005f1980
    MOV EBX,dword ptr [ESP + 0x8]       ; 005f1981
    PUSH EBX                            ; 005f1985
    CALL core_enemy.cpp_CEnemy_serialize_FUN_004a9660 ; 005f1986
        ;   XREF to: 004a9660 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_serialize_FUN_004a9660(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 005f198b
    PUSH 0x657dbc                       ; 005f198e | = "speed"
    LEA EAX,[EBX + 0xbe24]              ; 005f1993
    PUSH EAX                            ; 005f1999
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 005f199a
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005f199f
    PUSH 0x657dc2                       ; 005f19a2 | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 005f19a7
    PUSH EAX                            ; 005f19ad
    CALL core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970 ; 005f19ae
        ;   XREF to: 0040b970 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970(CDeformableModelInstance * model_ptr, char * property_name)
    MOV EDX,dword ptr [0x00684958]      ; 005f19b3 | g_CWerewolfClassVersion
    ADD ESP,0x8                         ; 005f19b9
    CMP EDX,0x3                         ; 005f19bc
    JL 0x005f1a51                       ; 005f19bf
        ;   XREF to: 005f1a51 (CONDITIONAL_JUMP)  ; LAB_005f1a51
    PUSH 0x657dda                       ; 005f19c5 | = "motion state"
        ;   Label: LAB_005f19c5
    LEA EAX,[EBX + 0x158]               ; 005f19ca
    PUSH EAX                            ; 005f19d0
    CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0 ; 005f19d1
        ;   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeMotionState_FUN_0040b9f0(CMotionController * motion_controller, char * property_name)
    MOV ECX,dword ptr [0x00684958]      ; 005f19d6 | g_CWerewolfClassVersion
    ADD ESP,0x8                         ; 005f19dc
    CMP ECX,0x2                         ; 005f19df
    JL 0x005f19f8                       ; 005f19e2
        ;   XREF to: 005f19f8 (CONDITIONAL_JUMP)  ; LAB_005f19f8
    PUSH 0x657de7                       ; 005f19e4 | = "lightUpEyes"
    LEA EAX,[EBX + 0xbed4]              ; 005f19e9
    PUSH EAX                            ; 005f19ef
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 005f19f0
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005f19f5
    CMP dword ptr [0x00684958],0x4      ; 005f19f8 | g_CWerewolfClassVersion
        ;   Label: LAB_005f19f8
    JL 0x005f1a29                       ; 005f19ff
        ;   XREF to: 005f1a29 (CONDITIONAL_JUMP)  ; LAB_005f1a29
    PUSH 0x657df3                       ; 005f1a01 | = "chainAnchor"
    LEA EAX,[EBX + 0xbee8]              ; 005f1a06
    PUSH EAX                            ; 005f1a0c
    CALL core_actor.cpp_serializeActor_FUN_0040b870 ; 005f1a0d
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 005f1a12
    PUSH 0x657dff                       ; 005f1a15 | = "chainLength"
    LEA EAX,[EBX + 0xbeec]              ; 005f1a1a
    PUSH EAX                            ; 005f1a20
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 005f1a21
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005f1a26
    CMP dword ptr [0x00684958],0x5      ; 005f1a29 | g_CWerewolfClassVersion
        ;   Label: LAB_005f1a29
    JL 0x005f1a46                       ; 005f1a30
        ;   XREF to: 005f1a46 (CONDITIONAL_JUMP)  ; LAB_005f1a46
    PUSH 0x657e0b                       ; 005f1a32 | = "type"
    LEA EAX,[EBX + 0xbebc]              ; 005f1a37
    PUSH EAX                            ; 005f1a3d
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 005f1a3e
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005f1a43
    CMP dword ptr [0x00684958],0x6      ; 005f1a46 | g_CWerewolfClassVersion
        ;   Label: LAB_005f1a46
    JGE 0x005f1a6a                      ; 005f1a4d
        ;   XREF to: 005f1a6a (CONDITIONAL_JUMP)  ; LAB_005f1a6a
    POP EBX                             ; 005f1a4f
    RET                                 ; 005f1a50
    PUSH 0x657dcc                       ; 005f1a51 | = "guardDistance"
        ;   Label: LAB_005f1a51
    LEA EAX,[EBX + 0xbe34]              ; 005f1a56
    PUSH EAX                            ; 005f1a5c
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 005f1a5d
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005f1a62
    JMP 0x005f19c5                      ; 005f1a65
        ;   XREF to: 005f19c5 (UNCONDITIONAL_JUMP)  ; LAB_005f19c5
    PUSH 0x657e10                       ; 005f1a6a | = "phase"
        ;   Label: LAB_005f1a6a
    LEA EAX,[EBX + 0xbef8]              ; 005f1a6f
    PUSH EAX                            ; 005f1a75
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 005f1a76
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005f1a7b
    PUSH 0x657e16                       ; 005f1a7e | = "phaseTimer"
    LEA EAX,[EBX + 0xbefc]              ; 005f1a83
    PUSH EAX                            ; 005f1a89
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 005f1a8a
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005f1a8f
    PUSH 0x657e21                       ; 005f1a92 | = "alpha1"
    LEA EAX,[EBX + 0xbef0]              ; 005f1a97
    PUSH EAX                            ; 005f1a9d
    CALL core_actor.cpp_serializeActor_FUN_0040b870 ; 005f1a9e
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 005f1aa3
    PUSH 0x657e28                       ; 005f1aa6 | = "alpha2"
    ADD EBX,0xbef4                      ; 005f1aab
    PUSH EBX                            ; 005f1ab1
    CALL core_actor.cpp_serializeActor_FUN_0040b870 ; 005f1ab2
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 005f1ab7
    POP EBX                             ; 005f1aba
    RET                                 ; 005f1abb

