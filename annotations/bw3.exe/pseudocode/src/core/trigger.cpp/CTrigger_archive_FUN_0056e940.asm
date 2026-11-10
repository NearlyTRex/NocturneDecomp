; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_trigger_cpp_CTrigger_archive_FUN_0056e940(CTrigger *this_ptr)
;
; Parameters:
; CTrigger *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_waypoint.cpp_CWayPoint_archive_FUN_00579390 at 0057939c
;
; Referenced Globals:
;   undefined4 s_triggerState_005d662a+1
;   TerminatedCString s_triggerSize_005d6638
;   TerminatedCString s_triggerType_005d6644
;   TerminatedCString s_onName_005d6650
;   TerminatedCString s_offName_005d6657
;   TerminatedCString s_whoTriggers_005d665f
;   TerminatedCString s_actorTriggerName_005d666b
;   TerminatedCString s_lightMin_005d667c
;   TerminatedCString s_lightMax_005d6685
;   TerminatedCString s_laserType_005d668e
;   TerminatedCString s_actorTriggerTypes_005d6698
;   TerminatedCString s_hitPoints_005d66aa
;   TerminatedCString s_pressurePlate_005d66b4
;   TerminatedCString s_whoTriggers_005d66c2
;   TerminatedCString s_actorTriggerName_005d66ce
;   ... and 12 more
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b930
;   core_actor.cpp_archiveFloat_FUN_0040b830
;   core_actor.cpp_archiveInteger_FUN_0040b8b0
;   core_actor.cpp_archiveString_FUN_0040b680
;   core_actor.cpp_archiveVector_FUN_0040b400
;   core_actor.cpp_CDemonActor_archive_FUN_0040c280
;   core_trigger.cpp_FUN_0056eed0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056e940
        ;   Label: core_trigger.cpp_CTrigger_archive_FUN_0056e940
    PUSH ESI                            ; 0056e941
    MOV EBX,dword ptr [ESP + 0xc]       ; 0056e942
    PUSH EBX                            ; 0056e946
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c280 ; 0056e947
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c280(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0056e94c
    PUSH 0x5d662b                       ; 0056e94f | s_triggerState_005d662a+1
    LEA EAX,[EBX + 0x16c]               ; 0056e954
    PUSH EAX                            ; 0056e95a
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0056e95b
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0056e960
    PUSH 0x5d6638                       ; 0056e963 | = "triggerSize"
    LEA EAX,[EBX + 0x160]               ; 0056e968
    PUSH EAX                            ; 0056e96e
    CALL core_actor.cpp_archiveVector_FUN_0040b400 ; 0056e96f
        ;   XREF to: 0040b400 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040b400()
    ADD ESP,0x8                         ; 0056e974
    PUSH 0x5d6644                       ; 0056e977 | = "triggerType"
    LEA EAX,[EBX + 0x15c]               ; 0056e97c
    PUSH EAX                            ; 0056e982
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0056e983
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0056e988
    PUSH 0x5d6650                       ; 0056e98b | = "onName"
    LEA EAX,[EBX + 0x224]               ; 0056e990
    PUSH EAX                            ; 0056e996
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 0056e997
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0056e99c
    PUSH 0x5d6657                       ; 0056e99f | = "offName"
    LEA EAX,[EBX + 0x288]               ; 0056e9a4
    PUSH EAX                            ; 0056e9aa
    LEA ESI,[EBX + 0x178]               ; 0056e9ab
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 0056e9b1
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    MOV EDX,dword ptr [0x00606964]      ; 0056e9b6 | g_CTriggerClassVersion
    ADD ESP,0x8                         ; 0056e9bc
    LEA EAX,[EBX + 0x174]               ; 0056e9bf
    CMP EDX,0x7                         ; 0056e9c5
    JGE 0x0056eab5                      ; 0056e9c8
        ;   XREF to: 0056eab5 (CONDITIONAL_JUMP)  ; LAB_0056eab5
    CMP EDX,0x2                         ; 0056e9ce
    JGE 0x0056ea7d                      ; 0056e9d1
        ;   XREF to: 0056ea7d (CONDITIONAL_JUMP)  ; LAB_0056ea7d
    CMP dword ptr [0x00606964],0x3      ; 0056e9d7 | g_CTriggerClassVersion
        ;   Label: LAB_0056e9d7
    JL 0x0056ea08                       ; 0056e9de
        ;   XREF to: 0056ea08 (CONDITIONAL_JUMP)  ; LAB_0056ea08
    PUSH 0x5d667c                       ; 0056e9e0 | = "lightMin"
    LEA EAX,[EBX + 0x21c]               ; 0056e9e5
    PUSH EAX                            ; 0056e9eb
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0056e9ec
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 0056e9f1
    PUSH 0x5d6685                       ; 0056e9f4 | = "lightMax"
    LEA EAX,[EBX + 0x220]               ; 0056e9f9
    PUSH EAX                            ; 0056e9ff
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0056ea00
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 0056ea05
    CMP dword ptr [0x00606964],0x4      ; 0056ea08 | g_CTriggerClassVersion
        ;   Label: LAB_0056ea08
    JL 0x0056ea2e                       ; 0056ea0f
        ;   XREF to: 0056ea2e (CONDITIONAL_JUMP)  ; LAB_0056ea2e
    CMP dword ptr [EBX + 0x174],0x5     ; 0056ea11
    JNZ 0x0056ea2e                      ; 0056ea18
        ;   XREF to: 0056ea2e (CONDITIONAL_JUMP)  ; LAB_0056ea2e
    PUSH 0x5d668e                       ; 0056ea1a | = "laserType"
    LEA EAX,[EBX + 0x2f4]               ; 0056ea1f
    PUSH EAX                            ; 0056ea25
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0056ea26
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0056ea2b
    CMP dword ptr [0x00606964],0x5      ; 0056ea2e | g_CTriggerClassVersion
        ;   Label: LAB_0056ea2e
    JL 0x0056ea71                       ; 0056ea35
        ;   XREF to: 0056ea71 (CONDITIONAL_JUMP)  ; LAB_0056ea71
    CMP dword ptr [EBX + 0x174],0x1     ; 0056ea37
    JNZ 0x0056ea54                      ; 0056ea3e
        ;   XREF to: 0056ea54 (CONDITIONAL_JUMP)  ; LAB_0056ea54
    PUSH 0x5d6698                       ; 0056ea40 | = "actorTriggerTypes"
    LEA EAX,[EBX + 0x1c8]               ; 0056ea45
    PUSH EAX                            ; 0056ea4b
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 0056ea4c
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0056ea51
    CMP dword ptr [EBX + 0x174],0x7     ; 0056ea54
        ;   Label: LAB_0056ea54
    JNZ 0x0056ea71                      ; 0056ea5b
        ;   XREF to: 0056ea71 (CONDITIONAL_JUMP)  ; LAB_0056ea71
    PUSH 0x5d66aa                       ; 0056ea5d | = "hitPoints"
    LEA EAX,[EBX + 0x2f8]               ; 0056ea62
    PUSH EAX                            ; 0056ea68
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0056ea69
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 0056ea6e
    CMP dword ptr [0x00606964],0x6      ; 0056ea71 | g_CTriggerClassVersion
        ;   Label: LAB_0056ea71
    JGE 0x0056ea9e                      ; 0056ea78
        ;   XREF to: 0056ea9e (CONDITIONAL_JUMP)  ; LAB_0056ea9e
    POP ESI                             ; 0056ea7a
        ;   Label: LAB_0056ea7a
    POP EBX                             ; 0056ea7b
    RET                                 ; 0056ea7c
    PUSH 0x5d665f                       ; 0056ea7d | = "whoTriggers"
        ;   Label: LAB_0056ea7d
    PUSH EAX                            ; 0056ea82
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0056ea83
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0056ea88
    PUSH 0x5d666b                       ; 0056ea8b | = "actorTriggerName"
    PUSH ESI                            ; 0056ea90
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 0056ea91
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0056ea96
    JMP 0x0056e9d7                      ; 0056ea99
        ;   XREF to: 0056e9d7 (UNCONDITIONAL_JUMP)  ; LAB_0056e9d7
    PUSH 0x5d66b4                       ; 0056ea9e | = "pressurePlate"
        ;   Label: LAB_0056ea9e
    ADD EBX,0x218                       ; 0056eaa3
    PUSH EBX                            ; 0056eaa9
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0056eaaa
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0056eaaf
    POP ESI                             ; 0056eab2
    POP EBX                             ; 0056eab3
    RET                                 ; 0056eab4
    PUSH 0x5d66c2                       ; 0056eab5 | = "whoTriggers"
        ;   Label: LAB_0056eab5
    PUSH EAX                            ; 0056eaba
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0056eabb
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0056eac0
    PUSH 0x5d66ce                       ; 0056eac3 | = "actorTriggerName"
    PUSH ESI                            ; 0056eac8
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 0056eac9
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0056eace
    PUSH 0x5d66df                       ; 0056ead1 | = "actorTriggerTypes"
    LEA EAX,[EBX + 0x1c8]               ; 0056ead6
    PUSH EAX                            ; 0056eadc
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 0056eadd
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0056eae2
    PUSH 0x5d66f1                       ; 0056eae5 | = "lightMin"
    LEA EAX,[EBX + 0x21c]               ; 0056eaea
    PUSH EAX                            ; 0056eaf0
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0056eaf1
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 0056eaf6
    PUSH 0x5d66fa                       ; 0056eaf9 | = "lightMax"
    LEA EAX,[EBX + 0x220]               ; 0056eafe
    PUSH EAX                            ; 0056eb04
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0056eb05
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 0056eb0a
    PUSH 0x5d6703                       ; 0056eb0d | = "laserType"
    LEA EAX,[EBX + 0x2f4]               ; 0056eb12
    PUSH EAX                            ; 0056eb18
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0056eb19
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0056eb1e
    PUSH 0x5d670d                       ; 0056eb21 | = "hitPoints"
    LEA EAX,[EBX + 0x2f8]               ; 0056eb26
    PUSH EAX                            ; 0056eb2c
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0056eb2d
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 0056eb32
    PUSH 0x5d6717                       ; 0056eb35 | = "pressurePlate"
    LEA EAX,[EBX + 0x218]               ; 0056eb3a
    PUSH EAX                            ; 0056eb40
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0056eb41
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    MOV ECX,dword ptr [0x00606964]      ; 0056eb46 | g_CTriggerClassVersion
    ADD ESP,0x8                         ; 0056eb4c
    CMP ECX,0x8                         ; 0056eb4f
    JL 0x0056ebe7                       ; 0056eb52
        ;   XREF to: 0056ebe7 (CONDITIONAL_JUMP)  ; LAB_0056ebe7
    PUSH 0x5d6725                       ; 0056eb58 | = "testRadius"
    LEA EAX,[EBX + 0x158]               ; 0056eb5d
    PUSH EAX                            ; 0056eb63
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0056eb64
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 0056eb69
    CMP dword ptr [0x00606964],0x9      ; 0056eb6c | g_CTriggerClassVersion
        ;   Label: LAB_0056eb6c
    JL 0x0056eb89                       ; 0056eb73
        ;   XREF to: 0056eb89 (CONDITIONAL_JUMP)  ; LAB_0056eb89
    PUSH 0x5d6730                       ; 0056eb75 | = "autoAimAtMe"
    LEA EAX,[EBX + 0x304]               ; 0056eb7a
    PUSH EAX                            ; 0056eb80
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0056eb81
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0056eb86
    CMP dword ptr [0x00606964],0xa      ; 0056eb89 | g_CTriggerClassVersion
        ;   Label: LAB_0056eb89
    JL 0x0056eba6                       ; 0056eb90
        ;   XREF to: 0056eba6 (CONDITIONAL_JUMP)  ; LAB_0056eba6
    PUSH 0x5d673c                       ; 0056eb92 | = "shape"
    LEA EAX,[EBX + 0x170]               ; 0056eb97
    PUSH EAX                            ; 0056eb9d
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0056eb9e
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0056eba3
    CMP dword ptr [0x00606964],0xb      ; 0056eba6 | g_CTriggerClassVersion
        ;   Label: LAB_0056eba6
    JL 0x0056ebc3                       ; 0056ebad
        ;   XREF to: 0056ebc3 (CONDITIONAL_JUMP)  ; LAB_0056ebc3
    PUSH 0x5d6742                       ; 0056ebaf | = "damageActorWildcard"
    LEA EAX,[EBX + 0x308]               ; 0056ebb4
    PUSH EAX                            ; 0056ebba
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 0056ebbb
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0056ebc0
    CMP dword ptr [0x00606964],0xc      ; 0056ebc3 | g_CTriggerClassVersion
        ;   Label: LAB_0056ebc3
    JL 0x0056ea7a                       ; 0056ebca
        ;   XREF to: 0056ea7a (CONDITIONAL_JUMP)  ; LAB_0056ea7a
    PUSH 0x5d6756                       ; 0056ebd0 | = "hiliteActor"
    ADD EBX,0x2fc                       ; 0056ebd5
    PUSH EBX                            ; 0056ebdb
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 0056ebdc
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b930()
    ADD ESP,0x8                         ; 0056ebe1
    POP ESI                             ; 0056ebe4
    POP EBX                             ; 0056ebe5
    RET                                 ; 0056ebe6
    PUSH EBX                            ; 0056ebe7
        ;   Label: LAB_0056ebe7
    CALL core_trigger.cpp_FUN_0056eed0  ; 0056ebe8
        ;   XREF to: 0056eed0 (UNCONDITIONAL_CALL)  ; undefined core_trigger.cpp_FUN_0056eed0()
    ADD ESP,0x4                         ; 0056ebed
    JMP 0x0056eb6c                      ; 0056ebf0
        ;   XREF to: 0056eb6c (UNCONDITIONAL_JUMP)  ; LAB_0056eb6c

