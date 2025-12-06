; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_mimic.cpp_CMimic_load_FUN_00520930()
;
;
; Referenced Globals:
;   TerminatedCString s_speed_006387c6
;   TerminatedCString s_modelName_006387cc
;   TerminatedCString s_attackCondition_006387d6
;   TerminatedCString s_attackMode_006387e6
;   TerminatedCString s_mirrorPlaneActor_006387f1
;   TerminatedCString s_motion_state_00638802
;   TerminatedCString s_morphActorType_0063880f
;   TerminatedCString s_mirrorCondition_0063881e
;   int g_CMimicClassVersion = 0x3
;
; Called Functions:
;   core_actor.cpp_serializeActor_FUN_0040b870
;   core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
;   core_actor.cpp_serializeFloat_FUN_0040b770
;   core_actor.cpp_serializeInteger_FUN_0040b7f0
;   core_actor.cpp_serializeMotionState_FUN_0040b9f0
;   core_actor.cpp_serializeString_FUN_0040b5c0
;   core_enemy.cpp_CEnemy_serialize_FUN_004a9660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00520930
        ;   Label: core_mimic.cpp_CMimic_load_FUN_00520930
    PUSH ESI                            ; 00520931
    MOV EBX,dword ptr [ESP + 0xc]       ; 00520932
    PUSH EBX                            ; 00520936
    CALL core_enemy.cpp_CEnemy_serialize_FUN_004a9660 ; 00520937 | void core_enemy.cpp_CEnemy_serialize_FUN_004a9660(CEnemy * this_ptr)
        ;   XREF to: 004a9660 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0052093c
    PUSH 0x6387c6                       ; 0052093f | = "speed" | s_speed_006387c6 = speed
    LEA ESI,[EBX + 0xbe24]              ; 00520944
    PUSH ESI                            ; 0052094a
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 0052094b | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00520950
    PUSH 0x6387cc                       ; 00520953 | = "modelName" | s_modelName_006387cc = modelName
    LEA ESI,[EBX + 0x158]               ; 00520958
    PUSH ESI                            ; 0052095e
    CALL core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970 ; 0052095f | void core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970(CDeformableModelInstance * model_ptr, char * property_name)
        ;   XREF to: 0040b970 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00520964
    PUSH 0x6387d6                       ; 00520967 | = "attackCondition" | s_attackCondition_006387d6 = attackCondition
    LEA EAX,[EBX + 0xbf20]              ; 0052096c
    PUSH EAX                            ; 00520972
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 00520973 | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00520978
    PUSH 0x6387e6                       ; 0052097b | = "attackMode" | s_attackMode_006387e6 = attackMode
    LEA EAX,[EBX + 0x4bdf4]             ; 00520980
    PUSH EAX                            ; 00520986
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 00520987 | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0052098c
    PUSH 0x6387f1                       ; 0052098f | = "mirrorPlaneActor" | s_mirrorPlaneActor_006387f1 = mirrorPlaneActor
    LEA EAX,[EBX + 0x4bdf8]             ; 00520994
    PUSH EAX                            ; 0052099a
    CALL core_actor.cpp_serializeActor_FUN_0040b870 ; 0052099b | void core_actor.cpp_serializeActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [0x0067d510]      ; 005209a0 | int g_CMimicClassVersion
    ADD ESP,0x8                         ; 005209a6
    CMP EDX,0x2                         ; 005209a9
    JGE 0x005209ba                      ; 005209ac | LAB_005209ba
        ;   XREF to: 005209ba (CONDITIONAL_JUMP)
    CMP dword ptr [0x0067d510],0x3      ; 005209ae | int g_CMimicClassVersion
    JGE 0x005209e8                      ; 005209b5 | LAB_005209e8
        ;   XREF to: 005209e8 (CONDITIONAL_JUMP)
    POP ESI                             ; 005209b7
    POP EBX                             ; 005209b8
    RET                                 ; 005209b9
    PUSH 0x638802                       ; 005209ba | = "motion state" | s_motion_state_00638802 = motion state
        ;   Label: LAB_005209ba
    PUSH ESI                            ; 005209bf
    CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0 ; 005209c0 | void core_actor.cpp_serializeMotionState_FUN_0040b9f0(CMotionController * motion_controller, char * property_name)
        ;   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005209c5
    PUSH 0x63880f                       ; 005209c8 | = "morphActorType" | s_morphActorType_0063880f = morphActorType
    LEA ESI,[EBX + 0x4bdfc]             ; 005209cd
    PUSH ESI                            ; 005209d3
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 005209d4 | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005209d9
    CMP dword ptr [0x0067d510],0x3      ; 005209dc | int g_CMimicClassVersion
    JGE 0x005209e8                      ; 005209e3 | LAB_005209e8
        ;   XREF to: 005209e8 (CONDITIONAL_JUMP)
    POP ESI                             ; 005209e5
    POP EBX                             ; 005209e6
    RET                                 ; 005209e7
    PUSH 0x63881e                       ; 005209e8 | = "mirrorCondition" | s_mirrorCondition_0063881e = mirrorCondition
        ;   Label: LAB_005209e8
    ADD EBX,0xbebc                      ; 005209ed
    PUSH EBX                            ; 005209f3
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 005209f4 | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005209f9
    POP ESI                             ; 005209fc
    POP EBX                             ; 005209fd
    RET                                 ; 005209fe

