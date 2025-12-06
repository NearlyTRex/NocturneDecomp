; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_trigger.cpp_CTrigger_serialize_FUN_005e0690(CTrigger * this_ptr)
;
; Parameters:
; CTrigger *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_waypoint.cpp_CWayPoint_FUN_005ec280 at 005ec28c
;
; Referenced Globals:
;   TerminatedCString s_triggerState_0065567c
;   TerminatedCString s_triggerSize_00655689
;   TerminatedCString s_triggerType_00655695
;   TerminatedCString s_onName_006556a1
;   TerminatedCString s_offName_006556a8
;   TerminatedCString s_whoTriggers_006556b0
;   TerminatedCString s_actorTriggerName_006556bc
;   TerminatedCString s_lightMin_006556cd
;   TerminatedCString s_lightMax_006556d6
;   TerminatedCString s_laserType_006556df
;   TerminatedCString s_actorTriggerTypes_006556e9
;   TerminatedCString s_hitPoints_006556fb
;   TerminatedCString s_pressurePlate_00655705
;   TerminatedCString s_whoTriggers_00655713
;   TerminatedCString s_actorTriggerName_0065571f
;   ... and 11 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
;   core_actor.cpp_serializeFloat_FUN_0040b770
;   core_actor.cpp_serializeInteger_FUN_0040b7f0
;   core_actor.cpp_serializeString_FUN_0040b5c0
;   core_actor.cpp_serializeVector_FUN_0040b340
;   core_trigger.cpp_FUN_005e0ba0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e0690
        ;   Label: core_trigger.cpp_CTrigger_serialize_FUN_005e0690
    PUSH ESI                            ; 005e0691
    MOV EBX,dword ptr [ESP + 0xc]       ; 005e0692
    PUSH EBX                            ; 005e0696
    CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0 ; 005e0697 | void core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0(CDemonActor * this_ptr)
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005e069c
    PUSH 0x65567c                       ; 005e069f | = "triggerState" | s_triggerState_0065567c = triggerState
    LEA EAX,[EBX + 0x16c]               ; 005e06a4
    PUSH EAX                            ; 005e06aa
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 005e06ab | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e06b0
    PUSH 0x655689                       ; 005e06b3 | = "triggerSize" | s_triggerSize_00655689 = triggerSize
    LEA EAX,[EBX + 0x160]               ; 005e06b8
    PUSH EAX                            ; 005e06be
    CALL core_actor.cpp_serializeVector_FUN_0040b340 ; 005e06bf | void core_actor.cpp_serializeVector_FUN_0040b340(CVector3f * vector_ptr, char * property_name)
        ;   XREF to: 0040b340 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e06c4
    PUSH 0x655695                       ; 005e06c7 | = "triggerType" | s_triggerType_00655695 = triggerType
    LEA EAX,[EBX + 0x15c]               ; 005e06cc
    PUSH EAX                            ; 005e06d2
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 005e06d3 | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e06d8
    PUSH 0x6556a1                       ; 005e06db | = "onName" | s_onName_006556a1 = onName
    LEA EAX,[EBX + 0x224]               ; 005e06e0
    PUSH EAX                            ; 005e06e6
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 005e06e7 | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e06ec
    PUSH 0x6556a8                       ; 005e06ef | = "offName" | s_offName_006556a8 = offName
    LEA EAX,[EBX + 0x288]               ; 005e06f4
    PUSH EAX                            ; 005e06fa
    LEA ESI,[EBX + 0x178]               ; 005e06fb
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 005e0701 | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [0x006843e4]      ; 005e0706 | int g_CTriggerClassVersion
    ADD ESP,0x8                         ; 005e070c
    LEA EAX,[EBX + 0x174]               ; 005e070f
    CMP EDX,0x7                         ; 005e0715
    JGE 0x005e0805                      ; 005e0718 | LAB_005e0805
        ;   XREF to: 005e0805 (CONDITIONAL_JUMP)
    CMP EDX,0x2                         ; 005e071e
    JGE 0x005e07cd                      ; 005e0721 | LAB_005e07cd
        ;   XREF to: 005e07cd (CONDITIONAL_JUMP)
    CMP dword ptr [0x006843e4],0x3      ; 005e0727 | int g_CTriggerClassVersion
        ;   Label: LAB_005e0727
    JL 0x005e0758                       ; 005e072e | LAB_005e0758
        ;   XREF to: 005e0758 (CONDITIONAL_JUMP)
    PUSH 0x6556cd                       ; 005e0730 | = "lightMin" | s_lightMin_006556cd = lightMin
    LEA EAX,[EBX + 0x21c]               ; 005e0735
    PUSH EAX                            ; 005e073b
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 005e073c | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e0741
    PUSH 0x6556d6                       ; 005e0744 | = "lightMax" | s_lightMax_006556d6 = lightMax
    LEA EAX,[EBX + 0x220]               ; 005e0749
    PUSH EAX                            ; 005e074f
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 005e0750 | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e0755
    CMP dword ptr [0x006843e4],0x4      ; 005e0758 | int g_CTriggerClassVersion
        ;   Label: LAB_005e0758
    JL 0x005e077e                       ; 005e075f | LAB_005e077e
        ;   XREF to: 005e077e (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x174],0x5     ; 005e0761
    JNZ 0x005e077e                      ; 005e0768 | LAB_005e077e
        ;   XREF to: 005e077e (CONDITIONAL_JUMP)
    PUSH 0x6556df                       ; 005e076a | = "laserType" | s_laserType_006556df = laserType
    LEA EAX,[EBX + 0x2f4]               ; 005e076f
    PUSH EAX                            ; 005e0775
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 005e0776 | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e077b
    CMP dword ptr [0x006843e4],0x5      ; 005e077e | int g_CTriggerClassVersion
        ;   Label: LAB_005e077e
    JL 0x005e07c1                       ; 005e0785 | LAB_005e07c1
        ;   XREF to: 005e07c1 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x174],0x1     ; 005e0787
    JNZ 0x005e07a4                      ; 005e078e | LAB_005e07a4
        ;   XREF to: 005e07a4 (CONDITIONAL_JUMP)
    PUSH 0x6556e9                       ; 005e0790 | = "actorTriggerTypes" | s_actorTriggerTypes_006556e9 = actorTriggerTypes
    LEA EAX,[EBX + 0x1c8]               ; 005e0795
    PUSH EAX                            ; 005e079b
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 005e079c | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e07a1
    CMP dword ptr [EBX + 0x174],0x7     ; 005e07a4
        ;   Label: LAB_005e07a4
    JNZ 0x005e07c1                      ; 005e07ab | LAB_005e07c1
        ;   XREF to: 005e07c1 (CONDITIONAL_JUMP)
    PUSH 0x6556fb                       ; 005e07ad | = "hitPoints" | s_hitPoints_006556fb = hitPoints
    LEA EAX,[EBX + 0x2f8]               ; 005e07b2
    PUSH EAX                            ; 005e07b8
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 005e07b9 | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e07be
    CMP dword ptr [0x006843e4],0x6      ; 005e07c1 | int g_CTriggerClassVersion
        ;   Label: LAB_005e07c1
    JGE 0x005e07ee                      ; 005e07c8 | LAB_005e07ee
        ;   XREF to: 005e07ee (CONDITIONAL_JUMP)
    POP ESI                             ; 005e07ca
        ;   Label: LAB_005e07ca
    POP EBX                             ; 005e07cb
    RET                                 ; 005e07cc
    PUSH 0x6556b0                       ; 005e07cd | = "whoTriggers" | s_whoTriggers_006556b0 = whoTriggers
        ;   Label: LAB_005e07cd
    PUSH EAX                            ; 005e07d2
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 005e07d3 | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e07d8
    PUSH 0x6556bc                       ; 005e07db | = "actorTriggerName" | s_actorTriggerName_006556bc = actorTriggerName
    PUSH ESI                            ; 005e07e0
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 005e07e1 | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e07e6
    JMP 0x005e0727                      ; 005e07e9 | LAB_005e0727
        ;   XREF to: 005e0727 (UNCONDITIONAL_JUMP)
    PUSH 0x655705                       ; 005e07ee | = "pressurePlate" | s_pressurePlate_00655705 = pressurePlate
        ;   Label: LAB_005e07ee
    ADD EBX,0x218                       ; 005e07f3
    PUSH EBX                            ; 005e07f9
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 005e07fa | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e07ff
    POP ESI                             ; 005e0802
    POP EBX                             ; 005e0803
    RET                                 ; 005e0804
    PUSH 0x655713                       ; 005e0805 | = "whoTriggers" | s_whoTriggers_00655713 = whoTriggers
        ;   Label: LAB_005e0805
    PUSH EAX                            ; 005e080a
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 005e080b | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e0810
    PUSH 0x65571f                       ; 005e0813 | = "actorTriggerName" | s_actorTriggerName_0065571f = actorTriggerName
    PUSH ESI                            ; 005e0818
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 005e0819 | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e081e
    PUSH 0x655730                       ; 005e0821 | = "actorTriggerTypes" | s_actorTriggerTypes_00655730 = actorTriggerTypes
    LEA EAX,[EBX + 0x1c8]               ; 005e0826
    PUSH EAX                            ; 005e082c
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 005e082d | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e0832
    PUSH 0x655742                       ; 005e0835 | = "lightMin" | s_lightMin_00655742 = lightMin
    LEA EAX,[EBX + 0x21c]               ; 005e083a
    PUSH EAX                            ; 005e0840
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 005e0841 | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e0846
    PUSH 0x65574b                       ; 005e0849 | = "lightMax" | s_lightMax_0065574b = lightMax
    LEA EAX,[EBX + 0x220]               ; 005e084e
    PUSH EAX                            ; 005e0854
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 005e0855 | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e085a
    PUSH 0x655754                       ; 005e085d | = "laserType" | s_laserType_00655754 = laserType
    LEA EAX,[EBX + 0x2f4]               ; 005e0862
    PUSH EAX                            ; 005e0868
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 005e0869 | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e086e
    PUSH 0x65575e                       ; 005e0871 | = "hitPoints" | s_hitPoints_0065575e = hitPoints
    LEA EAX,[EBX + 0x2f8]               ; 005e0876
    PUSH EAX                            ; 005e087c
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 005e087d | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e0882
    PUSH 0x655768                       ; 005e0885 | = "pressurePlate" | s_pressurePlate_00655768 = pressurePlate
    LEA EAX,[EBX + 0x218]               ; 005e088a
    PUSH EAX                            ; 005e0890
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 005e0891 | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [0x006843e4]      ; 005e0896 | int g_CTriggerClassVersion
    ADD ESP,0x8                         ; 005e089c
    CMP ECX,0x8                         ; 005e089f
    JL 0x005e0916                       ; 005e08a2 | LAB_005e0916
        ;   XREF to: 005e0916 (CONDITIONAL_JUMP)
    PUSH 0x655776                       ; 005e08a4 | = "testRadius" | s_testRadius_00655776 = testRadius
    LEA EAX,[EBX + 0x158]               ; 005e08a9
    PUSH EAX                            ; 005e08af
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 005e08b0 | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e08b5
    CMP dword ptr [0x006843e4],0x9      ; 005e08b8 | int g_CTriggerClassVersion
        ;   Label: LAB_005e08b8
    JL 0x005e08d5                       ; 005e08bf | LAB_005e08d5
        ;   XREF to: 005e08d5 (CONDITIONAL_JUMP)
    PUSH 0x655781                       ; 005e08c1 | = "autoAimAtMe" | s_autoAimAtMe_00655781 = autoAimAtMe
    LEA EAX,[EBX + 0x300]               ; 005e08c6
    PUSH EAX                            ; 005e08cc
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 005e08cd | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e08d2
    CMP dword ptr [0x006843e4],0xa      ; 005e08d5 | int g_CTriggerClassVersion
        ;   Label: LAB_005e08d5
    JL 0x005e08f2                       ; 005e08dc | LAB_005e08f2
        ;   XREF to: 005e08f2 (CONDITIONAL_JUMP)
    PUSH 0x65578d                       ; 005e08de | = "shape" | s_shape_0065578d = shape
    LEA EAX,[EBX + 0x170]               ; 005e08e3
    PUSH EAX                            ; 005e08e9
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 005e08ea | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e08ef
    CMP dword ptr [0x006843e4],0xb      ; 005e08f2 | int g_CTriggerClassVersion
        ;   Label: LAB_005e08f2
    JL 0x005e07ca                       ; 005e08f9 | LAB_005e07ca
        ;   XREF to: 005e07ca (CONDITIONAL_JUMP)
    PUSH 0x655793                       ; 005e08ff | = "damageActorWildcard" | s_damageActorWildcard_00655793 = damageActorWildcard
    ADD EBX,0x304                       ; 005e0904
    PUSH EBX                            ; 005e090a
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 005e090b | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e0910
    POP ESI                             ; 005e0913
    POP EBX                             ; 005e0914
    RET                                 ; 005e0915
    PUSH EBX                            ; 005e0916
        ;   Label: LAB_005e0916
    CALL core_trigger.cpp_FUN_005e0ba0  ; 005e0917 | undefined core_trigger.cpp_FUN_005e0ba0()
        ;   XREF to: 005e0ba0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005e091c
    JMP 0x005e08b8                      ; 005e091f | LAB_005e08b8
        ;   XREF to: 005e08b8 (UNCONDITIONAL_JUMP)

