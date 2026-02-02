; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_vessel_cpp_CCryptVessel_archive_FUN_005e9a80(CCryptVessel *this_ptr)
;
; Parameters:
; CCryptVessel *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_modelName_00657083
;   TerminatedCString s_prey_0065708d
;   TerminatedCString s_neutral_00657092
;   TerminatedCString s_destroyedEvent_0065709a
;   TerminatedCString s_startLoc_006570a9
;   TerminatedCString s_endLoc_006570b2
;   TerminatedCString s_state_006570b9
;   TerminatedCString s_timer_006570bf
;   TerminatedCString s_winEvent_006570c5
;   TerminatedCString s_eatDistance_006570ce
;   TerminatedCString s_visualType_006570da
;   int g_CCryptVesselClassVersion = 0x4
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b870
;   core_actor.cpp_archiveFloat_FUN_0040b770
;   core_actor.cpp_archiveInteger_FUN_0040b7f0
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b8f0
;   core_actor.cpp_archiveString_FUN_0040b5c0
;   core_actor.cpp_CDemonActor_archive_FUN_0040c1c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e9a80
        ;   Label: core_vessel.cpp_CCryptVessel_archive_FUN_005e9a80
    MOV EBX,dword ptr [ESP + 0x8]       ; 005e9a81
    PUSH EBX                            ; 005e9a85
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c1c0 ; 005e9a86
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c1c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005e9a8b
    PUSH 0x657083                       ; 005e9a8e | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 005e9a93
    PUSH EAX                            ; 005e9a99
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b8f0 ; 005e9a9a
        ;   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b8f0(CKeyFramedModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 005e9a9f
    PUSH 0x65708d                       ; 005e9aa2 | = "prey"
    LEA EAX,[EBX + 0x2d8]               ; 005e9aa7
    PUSH EAX                            ; 005e9aad
    CALL core_actor.cpp_archiveActor_FUN_0040b870 ; 005e9aae
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 005e9ab3
    PUSH 0x657092                       ; 005e9ab6 | = "neutral"
    LEA EAX,[EBX + 0x2dc]               ; 005e9abb
    PUSH EAX                            ; 005e9ac1
    CALL core_actor.cpp_archiveActor_FUN_0040b870 ; 005e9ac2
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 005e9ac7
    PUSH 0x65709a                       ; 005e9aca | = "destroyedEvent"
    LEA EAX,[EBX + 0x2e0]               ; 005e9acf
    PUSH EAX                            ; 005e9ad5
    CALL core_actor.cpp_archiveString_FUN_0040b5c0 ; 005e9ad6
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b5c0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005e9adb
    PUSH 0x6570a9                       ; 005e9ade | = "startLoc"
    LEA EAX,[EBX + 0x3a8]               ; 005e9ae3
    PUSH EAX                            ; 005e9ae9
    CALL core_actor.cpp_archiveActor_FUN_0040b870 ; 005e9aea
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 005e9aef
    PUSH 0x6570b2                       ; 005e9af2 | = "endLoc"
    LEA EAX,[EBX + 0x3ac]               ; 005e9af7
    PUSH EAX                            ; 005e9afd
    CALL core_actor.cpp_archiveActor_FUN_0040b870 ; 005e9afe
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 005e9b03
    PUSH 0x6570b9                       ; 005e9b06 | = "state"
    LEA EAX,[EBX + 0x3b8]               ; 005e9b0b
    PUSH EAX                            ; 005e9b11
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 005e9b12
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005e9b17
    PUSH 0x6570bf                       ; 005e9b1a | = "timer"
    LEA EAX,[EBX + 0x3bc]               ; 005e9b1f
    PUSH EAX                            ; 005e9b25
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 005e9b26
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    MOV EDX,dword ptr [0x006844c8]      ; 005e9b2b | g_CCryptVesselClassVersion
    ADD ESP,0x8                         ; 005e9b31
    CMP EDX,0x2                         ; 005e9b34
    JGE 0x005e9b61                      ; 005e9b37
        ;   XREF to: 005e9b61 (CONDITIONAL_JUMP)  ; LAB_005e9b61
    CMP dword ptr [0x006844c8],0x3      ; 005e9b39 | g_CCryptVesselClassVersion
        ;   Label: LAB_005e9b39
    JL 0x005e9b56                       ; 005e9b40
        ;   XREF to: 005e9b56 (CONDITIONAL_JUMP)  ; LAB_005e9b56
    PUSH 0x6570ce                       ; 005e9b42 | = "eatDistance"
    LEA EAX,[EBX + 0x3b0]               ; 005e9b47
    PUSH EAX                            ; 005e9b4d
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 005e9b4e
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005e9b53
    CMP dword ptr [0x006844c8],0x4      ; 005e9b56 | g_CCryptVesselClassVersion
        ;   Label: LAB_005e9b56
    JGE 0x005e9b77                      ; 005e9b5d
        ;   XREF to: 005e9b77 (CONDITIONAL_JUMP)  ; LAB_005e9b77
    POP EBX                             ; 005e9b5f
    RET                                 ; 005e9b60
    PUSH 0x6570c5                       ; 005e9b61 | = "winEvent"
        ;   Label: LAB_005e9b61
    LEA EAX,[EBX + 0x344]               ; 005e9b66
    PUSH EAX                            ; 005e9b6c
    CALL core_actor.cpp_archiveString_FUN_0040b5c0 ; 005e9b6d
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b5c0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005e9b72
    JMP 0x005e9b39                      ; 005e9b75
        ;   XREF to: 005e9b39 (UNCONDITIONAL_JUMP)  ; LAB_005e9b39
    PUSH 0x6570da                       ; 005e9b77 | = "visualType"
        ;   Label: LAB_005e9b77
    ADD EBX,0x3b4                       ; 005e9b7c
    PUSH EBX                            ; 005e9b82
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 005e9b83
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005e9b88
    POP EBX                             ; 005e9b8b
    RET                                 ; 005e9b8c

