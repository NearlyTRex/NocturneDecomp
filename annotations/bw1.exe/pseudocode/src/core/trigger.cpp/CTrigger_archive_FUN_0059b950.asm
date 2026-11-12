; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_trigger_cpp_CTrigger_archive_FUN_0059b950(CTrigger *this_ptr)
;
; Parameters:
; CTrigger *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_waypoint.cpp_CWayPoint_archive_FUN_005abae0 at 005abaec
;
; Referenced Globals:
;   undefined4 s_triggerState_005f80bb+1
;   TerminatedCString s_triggerSize_005f80c9
;   TerminatedCString s_triggerType_005f80d5
;   TerminatedCString s_onName_005f80e1
;   TerminatedCString s_offName_005f80e8
;   TerminatedCString s_whoTriggers_005f80f0
;   TerminatedCString s_actorTriggerName_005f80fc
;   TerminatedCString s_lightMin_005f810d
;   TerminatedCString s_lightMax_005f8116
;   TerminatedCString s_laserType_005f811f
;   TerminatedCString s_actorTriggerTypes_005f8129
;   TerminatedCString s_hitPoints_005f813b
;   TerminatedCString s_pressurePlate_005f8145
;   TerminatedCString s_whoTriggers_005f8153
;   TerminatedCString s_actorTriggerName_005f815f
;   ... and 12 more
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b6f0
;   core_actor.cpp_archiveFloat_FUN_0040b5f0
;   core_actor.cpp_archiveInteger_FUN_0040b670
;   core_actor.cpp_archiveString_FUN_0040b440
;   core_actor.cpp_archiveVector_FUN_0040b1c0
;   core_actor.cpp_CDemonActor_archive_FUN_0040c040
;   core_trigger.cpp_FUN_0059bee0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059b950
        ;   Label: core_trigger.cpp_CTrigger_archive_FUN_0059b950
    PUSH ESI                            ; 0059b951
    MOV EBX,dword ptr [ESP + 0xc]       ; 0059b952
    PUSH EBX                            ; 0059b956
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c040 ; 0059b957
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c040(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0059b95c
    PUSH 0x5f80bc                       ; 0059b95f | s_triggerState_005f80bb+1
    LEA EAX,[EBX + 0x16c]               ; 0059b964
    PUSH EAX                            ; 0059b96a
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0059b96b
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0059b970
    PUSH 0x5f80c9                       ; 0059b973 | = "triggerSize"
    LEA EAX,[EBX + 0x160]               ; 0059b978
    PUSH EAX                            ; 0059b97e
    CALL core_actor.cpp_archiveVector_FUN_0040b1c0 ; 0059b97f
        ;   XREF to: 0040b1c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveVector_FUN_0040b1c0(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 0059b984
    PUSH 0x5f80d5                       ; 0059b987 | = "triggerType"
    LEA EAX,[EBX + 0x15c]               ; 0059b98c
    PUSH EAX                            ; 0059b992
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0059b993
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0059b998
    PUSH 0x5f80e1                       ; 0059b99b | = "onName"
    LEA EAX,[EBX + 0x224]               ; 0059b9a0
    PUSH EAX                            ; 0059b9a6
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 0059b9a7
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0059b9ac
    PUSH 0x5f80e8                       ; 0059b9af | = "offName"
    LEA EAX,[EBX + 0x288]               ; 0059b9b4
    PUSH EAX                            ; 0059b9ba
    LEA ESI,[EBX + 0x178]               ; 0059b9bb
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 0059b9c1
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    MOV EDX,dword ptr [0x00625a84]      ; 0059b9c6 | g_CTriggerClassVersion
    ADD ESP,0x8                         ; 0059b9cc
    LEA EAX,[EBX + 0x174]               ; 0059b9cf
    CMP EDX,0x7                         ; 0059b9d5
    JGE 0x0059bac5                      ; 0059b9d8
        ;   XREF to: 0059bac5 (CONDITIONAL_JUMP)  ; LAB_0059bac5
    CMP EDX,0x2                         ; 0059b9de
    JGE 0x0059ba8d                      ; 0059b9e1
        ;   XREF to: 0059ba8d (CONDITIONAL_JUMP)  ; LAB_0059ba8d
    CMP dword ptr [0x00625a84],0x3      ; 0059b9e7 | g_CTriggerClassVersion
        ;   Label: LAB_0059b9e7
    JL 0x0059ba18                       ; 0059b9ee
        ;   XREF to: 0059ba18 (CONDITIONAL_JUMP)  ; LAB_0059ba18
    PUSH 0x5f810d                       ; 0059b9f0 | = "lightMin"
    LEA EAX,[EBX + 0x21c]               ; 0059b9f5
    PUSH EAX                            ; 0059b9fb
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 0059b9fc
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b5f0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0059ba01
    PUSH 0x5f8116                       ; 0059ba04 | = "lightMax"
    LEA EAX,[EBX + 0x220]               ; 0059ba09
    PUSH EAX                            ; 0059ba0f
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 0059ba10
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b5f0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0059ba15
    CMP dword ptr [0x00625a84],0x4      ; 0059ba18 | g_CTriggerClassVersion
        ;   Label: LAB_0059ba18
    JL 0x0059ba3e                       ; 0059ba1f
        ;   XREF to: 0059ba3e (CONDITIONAL_JUMP)  ; LAB_0059ba3e
    CMP dword ptr [EBX + 0x174],0x5     ; 0059ba21
    JNZ 0x0059ba3e                      ; 0059ba28
        ;   XREF to: 0059ba3e (CONDITIONAL_JUMP)  ; LAB_0059ba3e
    PUSH 0x5f811f                       ; 0059ba2a | = "laserType"
    LEA EAX,[EBX + 0x2f4]               ; 0059ba2f
    PUSH EAX                            ; 0059ba35
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0059ba36
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0059ba3b
    CMP dword ptr [0x00625a84],0x5      ; 0059ba3e | g_CTriggerClassVersion
        ;   Label: LAB_0059ba3e
    JL 0x0059ba81                       ; 0059ba45
        ;   XREF to: 0059ba81 (CONDITIONAL_JUMP)  ; LAB_0059ba81
    CMP dword ptr [EBX + 0x174],0x1     ; 0059ba47
    JNZ 0x0059ba64                      ; 0059ba4e
        ;   XREF to: 0059ba64 (CONDITIONAL_JUMP)  ; LAB_0059ba64
    PUSH 0x5f8129                       ; 0059ba50 | = "actorTriggerTypes"
    LEA EAX,[EBX + 0x1c8]               ; 0059ba55
    PUSH EAX                            ; 0059ba5b
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 0059ba5c
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0059ba61
    CMP dword ptr [EBX + 0x174],0x7     ; 0059ba64
        ;   Label: LAB_0059ba64
    JNZ 0x0059ba81                      ; 0059ba6b
        ;   XREF to: 0059ba81 (CONDITIONAL_JUMP)  ; LAB_0059ba81
    PUSH 0x5f813b                       ; 0059ba6d | = "hitPoints"
    LEA EAX,[EBX + 0x2f8]               ; 0059ba72
    PUSH EAX                            ; 0059ba78
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 0059ba79
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b5f0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0059ba7e
    CMP dword ptr [0x00625a84],0x6      ; 0059ba81 | g_CTriggerClassVersion
        ;   Label: LAB_0059ba81
    JGE 0x0059baae                      ; 0059ba88
        ;   XREF to: 0059baae (CONDITIONAL_JUMP)  ; LAB_0059baae
    POP ESI                             ; 0059ba8a
        ;   Label: LAB_0059ba8a
    POP EBX                             ; 0059ba8b
    RET                                 ; 0059ba8c
    PUSH 0x5f80f0                       ; 0059ba8d | = "whoTriggers"
        ;   Label: LAB_0059ba8d
    PUSH EAX                            ; 0059ba92
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0059ba93
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0059ba98
    PUSH 0x5f80fc                       ; 0059ba9b | = "actorTriggerName"
    PUSH ESI                            ; 0059baa0
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 0059baa1
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0059baa6
    JMP 0x0059b9e7                      ; 0059baa9
        ;   XREF to: 0059b9e7 (UNCONDITIONAL_JUMP)  ; LAB_0059b9e7
    PUSH 0x5f8145                       ; 0059baae | = "pressurePlate"
        ;   Label: LAB_0059baae
    ADD EBX,0x218                       ; 0059bab3
    PUSH EBX                            ; 0059bab9
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0059baba
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0059babf
    POP ESI                             ; 0059bac2
    POP EBX                             ; 0059bac3
    RET                                 ; 0059bac4
    PUSH 0x5f8153                       ; 0059bac5 | = "whoTriggers"
        ;   Label: LAB_0059bac5
    PUSH EAX                            ; 0059baca
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0059bacb
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0059bad0
    PUSH 0x5f815f                       ; 0059bad3 | = "actorTriggerName"
    PUSH ESI                            ; 0059bad8
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 0059bad9
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0059bade
    PUSH 0x5f8170                       ; 0059bae1 | = "actorTriggerTypes"
    LEA EAX,[EBX + 0x1c8]               ; 0059bae6
    PUSH EAX                            ; 0059baec
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 0059baed
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0059baf2
    PUSH 0x5f8182                       ; 0059baf5 | = "lightMin"
    LEA EAX,[EBX + 0x21c]               ; 0059bafa
    PUSH EAX                            ; 0059bb00
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 0059bb01
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b5f0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0059bb06
    PUSH 0x5f818b                       ; 0059bb09 | = "lightMax"
    LEA EAX,[EBX + 0x220]               ; 0059bb0e
    PUSH EAX                            ; 0059bb14
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 0059bb15
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b5f0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0059bb1a
    PUSH 0x5f8194                       ; 0059bb1d | = "laserType"
    LEA EAX,[EBX + 0x2f4]               ; 0059bb22
    PUSH EAX                            ; 0059bb28
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0059bb29
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0059bb2e
    PUSH 0x5f819e                       ; 0059bb31 | = "hitPoints"
    LEA EAX,[EBX + 0x2f8]               ; 0059bb36
    PUSH EAX                            ; 0059bb3c
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 0059bb3d
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b5f0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0059bb42
    PUSH 0x5f81a8                       ; 0059bb45 | = "pressurePlate"
    LEA EAX,[EBX + 0x218]               ; 0059bb4a
    PUSH EAX                            ; 0059bb50
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0059bb51
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    MOV ECX,dword ptr [0x00625a84]      ; 0059bb56 | g_CTriggerClassVersion
    ADD ESP,0x8                         ; 0059bb5c
    CMP ECX,0x8                         ; 0059bb5f
    JL 0x0059bbf7                       ; 0059bb62
        ;   XREF to: 0059bbf7 (CONDITIONAL_JUMP)  ; LAB_0059bbf7
    PUSH 0x5f81b6                       ; 0059bb68 | = "testRadius"
    LEA EAX,[EBX + 0x158]               ; 0059bb6d
    PUSH EAX                            ; 0059bb73
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 0059bb74
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b5f0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0059bb79
    CMP dword ptr [0x00625a84],0x9      ; 0059bb7c | g_CTriggerClassVersion
        ;   Label: LAB_0059bb7c
    JL 0x0059bb99                       ; 0059bb83
        ;   XREF to: 0059bb99 (CONDITIONAL_JUMP)  ; LAB_0059bb99
    PUSH 0x5f81c1                       ; 0059bb85 | = "autoAimAtMe"
    LEA EAX,[EBX + 0x304]               ; 0059bb8a
    PUSH EAX                            ; 0059bb90
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0059bb91
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0059bb96
    CMP dword ptr [0x00625a84],0xa      ; 0059bb99 | g_CTriggerClassVersion
        ;   Label: LAB_0059bb99
    JL 0x0059bbb6                       ; 0059bba0
        ;   XREF to: 0059bbb6 (CONDITIONAL_JUMP)  ; LAB_0059bbb6
    PUSH 0x5f81cd                       ; 0059bba2 | = "shape"
    LEA EAX,[EBX + 0x170]               ; 0059bba7
    PUSH EAX                            ; 0059bbad
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0059bbae
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0059bbb3
    CMP dword ptr [0x00625a84],0xb      ; 0059bbb6 | g_CTriggerClassVersion
        ;   Label: LAB_0059bbb6
    JL 0x0059bbd3                       ; 0059bbbd
        ;   XREF to: 0059bbd3 (CONDITIONAL_JUMP)  ; LAB_0059bbd3
    PUSH 0x5f81d3                       ; 0059bbbf | = "damageActorWildcard"
    LEA EAX,[EBX + 0x308]               ; 0059bbc4
    PUSH EAX                            ; 0059bbca
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 0059bbcb
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0059bbd0
    CMP dword ptr [0x00625a84],0xc      ; 0059bbd3 | g_CTriggerClassVersion
        ;   Label: LAB_0059bbd3
    JL 0x0059ba8a                       ; 0059bbda
        ;   XREF to: 0059ba8a (CONDITIONAL_JUMP)  ; LAB_0059ba8a
    PUSH 0x5f81e7                       ; 0059bbe0 | = "hiliteActor"
    ADD EBX,0x2fc                       ; 0059bbe5
    PUSH EBX                            ; 0059bbeb
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 0059bbec
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b6f0(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 0059bbf1
    POP ESI                             ; 0059bbf4
    POP EBX                             ; 0059bbf5
    RET                                 ; 0059bbf6
    PUSH EBX                            ; 0059bbf7
        ;   Label: LAB_0059bbf7
    CALL core_trigger.cpp_FUN_0059bee0  ; 0059bbf8
        ;   XREF to: 0059bee0 (UNCONDITIONAL_CALL)  ; undefined core_trigger.cpp_FUN_0059bee0()
    ADD ESP,0x4                         ; 0059bbfd
    JMP 0x0059bb7c                      ; 0059bc00
        ;   XREF to: 0059bb7c (UNCONDITIONAL_JUMP)  ; LAB_0059bb7c

