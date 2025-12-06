; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_pendulum.cpp_CPendulum_load_FUN_0054a3b0()
;
;
; Referenced Globals:
;   TerminatedCString s_modelName_0063ed11
;   TerminatedCString s_startEvent_0063ed1b
;   TerminatedCString s_moving_0063ed26
;   TerminatedCString s_param_0063ed2d
;   TerminatedCString s_maxAngle_0063ed33
;   TerminatedCString s_swooshSound_0063ed3c
;   TerminatedCString s_creak1Sound_0063ed48
;   TerminatedCString s_creak2Sound_0063ed54
;   TerminatedCString s_swooshPhaseBias_0063ed60
;   TerminatedCString s_killHero_0063ed70
;   TerminatedCString s_killEnemy_0063ed79
;   TerminatedCString s_decay_0063ed83
;   TerminatedCString s_decayTimer_0063ed89
;   TerminatedCString s_groundType_0063ed94
;   TerminatedCString s_stopEvent_0063ed9f
;   ... and 2 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
;   core_actor.cpp_serializeFloat_FUN_0040b770
;   core_actor.cpp_serializeInteger_FUN_0040b7f0
;   core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
;   core_actor.cpp_serializeString_FUN_0040b5c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054a3b0
        ;   Label: core_pendulum.cpp_CPendulum_load_FUN_0054a3b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0054a3b1
    PUSH EBX                            ; 0054a3b5
    CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0 ; 0054a3b6 | void core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0(CDemonActor * this_ptr)
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0054a3bb
    PUSH 0x63ed11                       ; 0054a3be | = "modelName" | s_modelName_0063ed11 = modelName
    LEA EAX,[EBX + 0x158]               ; 0054a3c3
    PUSH EAX                            ; 0054a3c9
    CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0 ; 0054a3ca | void core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0(CKeyFramedModelInstance * model_ptr, char * property_name)
        ;   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0054a3cf
    PUSH 0x63ed1b                       ; 0054a3d2 | = "startEvent" | s_startEvent_0063ed1b = startEvent
    LEA EAX,[EBX + 0x2d4]               ; 0054a3d7
    PUSH EAX                            ; 0054a3dd
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 0054a3de | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0054a3e3
    PUSH 0x63ed26                       ; 0054a3e6 | = "moving" | s_moving_0063ed26 = moving
    LEA EAX,[EBX + 0x39c]               ; 0054a3eb
    PUSH EAX                            ; 0054a3f1
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 0054a3f2 | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0054a3f7
    PUSH 0x63ed2d                       ; 0054a3fa | = "param" | s_param_0063ed2d = param
    LEA EAX,[EBX + 0x3a0]               ; 0054a3ff
    PUSH EAX                            ; 0054a405
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 0054a406 | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0054a40b
    PUSH 0x63ed33                       ; 0054a40e | = "maxAngle" | s_maxAngle_0063ed33 = maxAngle
    LEA EAX,[EBX + 0x3a8]               ; 0054a413
    PUSH EAX                            ; 0054a419
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 0054a41a | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [0x00680c84]      ; 0054a41f | int g_CPendulumClassVersion
    ADD ESP,0x8                         ; 0054a425
    CMP EDX,0x2                         ; 0054a428
    JGE 0x0054a51d                      ; 0054a42b | LAB_0054a51d
        ;   XREF to: 0054a51d (CONDITIONAL_JUMP)
    CMP dword ptr [0x00680c84],0x3      ; 0054a431 | int g_CPendulumClassVersion
        ;   Label: LAB_0054a431
    JL 0x0054a476                       ; 0054a438 | LAB_0054a476
        ;   XREF to: 0054a476 (CONDITIONAL_JUMP)
    PUSH 0x63ed48                       ; 0054a43a | = "creak1Sound" | s_creak1Sound_0063ed48 = creak1Sound
    LEA EAX,[EBX + 0x3d0]               ; 0054a43f
    PUSH EAX                            ; 0054a445
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 0054a446 | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0054a44b
    PUSH 0x63ed54                       ; 0054a44e | = "creak2Sound" | s_creak2Sound_0063ed54 = creak2Sound
    LEA EAX,[EBX + 0x3f0]               ; 0054a453
    PUSH EAX                            ; 0054a459
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 0054a45a | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0054a45f
    PUSH 0x63ed60                       ; 0054a462 | = "swooshPhaseBias" | s_swooshPhaseBias_0063ed60 = swooshPhaseBias
    LEA EAX,[EBX + 0x3cc]               ; 0054a467
    PUSH EAX                            ; 0054a46d
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 0054a46e | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0054a473
    CMP dword ptr [0x00680c84],0x4      ; 0054a476 | int g_CPendulumClassVersion
        ;   Label: LAB_0054a476
    JL 0x0054a4a7                       ; 0054a47d | LAB_0054a4a7
        ;   XREF to: 0054a4a7 (CONDITIONAL_JUMP)
    PUSH 0x63ed70                       ; 0054a47f | = "killHero" | s_killHero_0063ed70 = killHero
    LEA EAX,[EBX + 0x428]               ; 0054a484
    PUSH EAX                            ; 0054a48a
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 0054a48b | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0054a490
    PUSH 0x63ed79                       ; 0054a493 | = "killEnemy" | s_killEnemy_0063ed79 = killEnemy
    LEA EAX,[EBX + 0x42c]               ; 0054a498
    PUSH EAX                            ; 0054a49e
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 0054a49f | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0054a4a4
    CMP dword ptr [0x00680c84],0x5      ; 0054a4a7 | int g_CPendulumClassVersion
        ;   Label: LAB_0054a4a7
    JL 0x0054a4d8                       ; 0054a4ae | LAB_0054a4d8
        ;   XREF to: 0054a4d8 (CONDITIONAL_JUMP)
    PUSH 0x63ed83                       ; 0054a4b0 | = "decay" | s_decay_0063ed83 = decay
    LEA EAX,[EBX + 0x430]               ; 0054a4b5
    PUSH EAX                            ; 0054a4bb
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 0054a4bc | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0054a4c1
    PUSH 0x63ed89                       ; 0054a4c4 | = "decayTimer" | s_decayTimer_0063ed89 = decayTimer
    LEA EAX,[EBX + 0x434]               ; 0054a4c9
    PUSH EAX                            ; 0054a4cf
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 0054a4d0 | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0054a4d5
    CMP dword ptr [0x00680c84],0x6      ; 0054a4d8 | int g_CPendulumClassVersion
        ;   Label: LAB_0054a4d8
    JL 0x0054a4f5                       ; 0054a4df | LAB_0054a4f5
        ;   XREF to: 0054a4f5 (CONDITIONAL_JUMP)
    PUSH 0x63ed94                       ; 0054a4e1 | = "groundType" | s_groundType_0063ed94 = groundType
    LEA EAX,[EBX + 0x438]               ; 0054a4e6
    PUSH EAX                            ; 0054a4ec
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 0054a4ed | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0054a4f2
    CMP dword ptr [0x00680c84],0x7      ; 0054a4f5 | int g_CPendulumClassVersion
        ;   Label: LAB_0054a4f5
    JL 0x0054a512                       ; 0054a4fc | LAB_0054a512
        ;   XREF to: 0054a512 (CONDITIONAL_JUMP)
    PUSH 0x63ed9f                       ; 0054a4fe | = "stopEvent" | s_stopEvent_0063ed9f = stopEvent
    LEA EAX,[EBX + 0x338]               ; 0054a503
    PUSH EAX                            ; 0054a509
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 0054a50a | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0054a50f
    CMP dword ptr [0x00680c84],0x8      ; 0054a512 | int g_CPendulumClassVersion
        ;   Label: LAB_0054a512
    JGE 0x0054a536                      ; 0054a519 | LAB_0054a536
        ;   XREF to: 0054a536 (CONDITIONAL_JUMP)
    POP EBX                             ; 0054a51b
    RET                                 ; 0054a51c
    PUSH 0x63ed3c                       ; 0054a51d | = "swooshSound" | s_swooshSound_0063ed3c = swooshSound
        ;   Label: LAB_0054a51d
    LEA EAX,[EBX + 0x3ac]               ; 0054a522
    PUSH EAX                            ; 0054a528
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 0054a529 | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0054a52e
    JMP 0x0054a431                      ; 0054a531 | LAB_0054a431
        ;   XREF to: 0054a431 (UNCONDITIONAL_JUMP)
    PUSH 0x63eda9                       ; 0054a536 | = "oneShot" | s_oneShot_0063eda9 = oneShot
        ;   Label: LAB_0054a536
    ADD EBX,0x43c                       ; 0054a53b
    PUSH EBX                            ; 0054a541
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 0054a542 | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0054a547
    POP EBX                             ; 0054a54a
    RET                                 ; 0054a54b

