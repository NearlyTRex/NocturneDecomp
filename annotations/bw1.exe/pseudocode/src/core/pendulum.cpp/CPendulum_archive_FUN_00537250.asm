; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_pendulum_cpp_CPendulum_archive_FUN_00537250(CPendulum *this_ptr)
;
; Parameters:
; CPendulum *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_modelName_005eccf4+1
;   TerminatedCString s_startEvent_005eccff
;   TerminatedCString s_moving_005ecd0a
;   TerminatedCString s_param_005ecd11
;   TerminatedCString s_maxAngle_005ecd17
;   TerminatedCString s_swooshSound_005ecd20
;   TerminatedCString s_creak1Sound_005ecd2c
;   TerminatedCString s_creak2Sound_005ecd38
;   TerminatedCString s_swooshPhaseBias_005ecd44
;   TerminatedCString s_killHero_005ecd54
;   TerminatedCString s_killEnemy_005ecd5d
;   TerminatedCString s_decay_005ecd67
;   TerminatedCString s_decayTimer_005ecd6d
;   TerminatedCString s_groundType_005ecd78
;   TerminatedCString s_stopEvent_005ecd83
;   ... and 2 more
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b5f0
;   core_actor.cpp_archiveInteger_FUN_0040b670
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b770
;   core_actor.cpp_archiveString_FUN_0040b440
;   core_actor.cpp_CDemonActor_archive_FUN_0040c040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00537250
        ;   Label: core_pendulum.cpp_CPendulum_archive_FUN_00537250
    MOV EBX,dword ptr [ESP + 0x8]       ; 00537251
    PUSH EBX                            ; 00537255
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c040 ; 00537256
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c040(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0053725b
    PUSH 0x5eccf5                       ; 0053725e | s_modelName_005eccf4+1
    LEA EAX,[EBX + 0x158]               ; 00537263
    PUSH EAX                            ; 00537269
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b770 ; 0053726a
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b770()
    ADD ESP,0x8                         ; 0053726f
    PUSH 0x5eccff                       ; 00537272 | = "startEvent"
    LEA EAX,[EBX + 0x2d4]               ; 00537277
    PUSH EAX                            ; 0053727d
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 0053727e
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00537283
    PUSH 0x5ecd0a                       ; 00537286 | = "moving"
    LEA EAX,[EBX + 0x39c]               ; 0053728b
    PUSH EAX                            ; 00537291
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 00537292
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00537297
    PUSH 0x5ecd11                       ; 0053729a | = "param"
    LEA EAX,[EBX + 0x3a0]               ; 0053729f
    PUSH EAX                            ; 005372a5
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 005372a6
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 005372ab
    PUSH 0x5ecd17                       ; 005372ae | = "maxAngle"
    LEA EAX,[EBX + 0x3a8]               ; 005372b3
    PUSH EAX                            ; 005372b9
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 005372ba
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    MOV EDX,dword ptr [0x00622804]      ; 005372bf | g_CPendulumClassVersion
    ADD ESP,0x8                         ; 005372c5
    CMP EDX,0x2                         ; 005372c8
    JGE 0x005373bd                      ; 005372cb
        ;   XREF to: 005373bd (CONDITIONAL_JUMP)  ; LAB_005373bd
    CMP dword ptr [0x00622804],0x3      ; 005372d1 | g_CPendulumClassVersion
        ;   Label: LAB_005372d1
    JL 0x00537316                       ; 005372d8
        ;   XREF to: 00537316 (CONDITIONAL_JUMP)  ; LAB_00537316
    PUSH 0x5ecd2c                       ; 005372da | = "creak1Sound"
    LEA EAX,[EBX + 0x3d0]               ; 005372df
    PUSH EAX                            ; 005372e5
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 005372e6
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005372eb
    PUSH 0x5ecd38                       ; 005372ee | = "creak2Sound"
    LEA EAX,[EBX + 0x3f0]               ; 005372f3
    PUSH EAX                            ; 005372f9
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 005372fa
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005372ff
    PUSH 0x5ecd44                       ; 00537302 | = "swooshPhaseBias"
    LEA EAX,[EBX + 0x3cc]               ; 00537307
    PUSH EAX                            ; 0053730d
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 0053730e
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 00537313
    CMP dword ptr [0x00622804],0x4      ; 00537316 | g_CPendulumClassVersion
        ;   Label: LAB_00537316
    JL 0x00537347                       ; 0053731d
        ;   XREF to: 00537347 (CONDITIONAL_JUMP)  ; LAB_00537347
    PUSH 0x5ecd54                       ; 0053731f | = "killHero"
    LEA EAX,[EBX + 0x428]               ; 00537324
    PUSH EAX                            ; 0053732a
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0053732b
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00537330
    PUSH 0x5ecd5d                       ; 00537333 | = "killEnemy"
    LEA EAX,[EBX + 0x42c]               ; 00537338
    PUSH EAX                            ; 0053733e
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0053733f
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00537344
    CMP dword ptr [0x00622804],0x5      ; 00537347 | g_CPendulumClassVersion
        ;   Label: LAB_00537347
    JL 0x00537378                       ; 0053734e
        ;   XREF to: 00537378 (CONDITIONAL_JUMP)  ; LAB_00537378
    PUSH 0x5ecd67                       ; 00537350 | = "decay"
    LEA EAX,[EBX + 0x430]               ; 00537355
    PUSH EAX                            ; 0053735b
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 0053735c
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 00537361
    PUSH 0x5ecd6d                       ; 00537364 | = "decayTimer"
    LEA EAX,[EBX + 0x434]               ; 00537369
    PUSH EAX                            ; 0053736f
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 00537370
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 00537375
    CMP dword ptr [0x00622804],0x6      ; 00537378 | g_CPendulumClassVersion
        ;   Label: LAB_00537378
    JL 0x00537395                       ; 0053737f
        ;   XREF to: 00537395 (CONDITIONAL_JUMP)  ; LAB_00537395
    PUSH 0x5ecd78                       ; 00537381 | = "groundType"
    LEA EAX,[EBX + 0x438]               ; 00537386
    PUSH EAX                            ; 0053738c
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0053738d
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00537392
    CMP dword ptr [0x00622804],0x7      ; 00537395 | g_CPendulumClassVersion
        ;   Label: LAB_00537395
    JL 0x005373b2                       ; 0053739c
        ;   XREF to: 005373b2 (CONDITIONAL_JUMP)  ; LAB_005373b2
    PUSH 0x5ecd83                       ; 0053739e | = "stopEvent"
    LEA EAX,[EBX + 0x338]               ; 005373a3
    PUSH EAX                            ; 005373a9
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 005373aa
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005373af
    CMP dword ptr [0x00622804],0x8      ; 005373b2 | g_CPendulumClassVersion
        ;   Label: LAB_005373b2
    JGE 0x005373d6                      ; 005373b9
        ;   XREF to: 005373d6 (CONDITIONAL_JUMP)  ; LAB_005373d6
    POP EBX                             ; 005373bb
    RET                                 ; 005373bc
    PUSH 0x5ecd20                       ; 005373bd | = "swooshSound"
        ;   Label: LAB_005373bd
    LEA EAX,[EBX + 0x3ac]               ; 005373c2
    PUSH EAX                            ; 005373c8
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 005373c9
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005373ce
    JMP 0x005372d1                      ; 005373d1
        ;   XREF to: 005372d1 (UNCONDITIONAL_JUMP)  ; LAB_005372d1
    PUSH 0x5ecd8d                       ; 005373d6 | = "oneShot"
        ;   Label: LAB_005373d6
    ADD EBX,0x43c                       ; 005373db
    PUSH EBX                            ; 005373e1
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 005373e2
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005373e7
    POP EBX                             ; 005373ea
    RET                                 ; 005373eb

