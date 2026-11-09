; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vessel_cpp_CCryptVessel_archive_FUN_00576fe0(CCryptVessel *this_ptr)
;
; Parameters:
; CCryptVessel *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_modelName_005d70e9
;   undefined4 DAT_005d70f3
;   TerminatedCString s_neutral_005d70f8
;   TerminatedCString s_destroyedEvent_005d7100
;   TerminatedCString s_startLoc_005d710f
;   TerminatedCString s_endLoc_005d7118
;   TerminatedCString s_state_005d711f
;   TerminatedCString s_timer_005d7125
;   TerminatedCString s_winEvent_005d712b
;   TerminatedCString s_eatDistance_005d7134
;   TerminatedCString s_visualType_005d7140
;   int g_CCryptVesselClassVersion = 0x4
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b930
;   core_actor.cpp_archiveFloat_FUN_0040b830
;   core_actor.cpp_archiveInteger_FUN_0040b8b0
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0
;   core_actor.cpp_archiveString_FUN_0040b680
;   core_actor.cpp_CDemonActor_archive_FUN_0040c280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00576fe0
        ;   Label: core_vessel.cpp_CCryptVessel_archive_FUN_00576fe0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00576fe1
    PUSH EBX                            ; 00576fe5
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c280 ; 00576fe6
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c280(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00576feb
    PUSH 0x5d70e9                       ; 00576fee | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 00576ff3
    PUSH EAX                            ; 00576ff9
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0 ; 00576ffa
        ;   XREF to: 0040b9b0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0()
    ADD ESP,0x8                         ; 00576fff
    PUSH 0x5d70f3                       ; 00577002 | DAT_005d70f3
    LEA EAX,[EBX + 0x2d8]               ; 00577007
    PUSH EAX                            ; 0057700d
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 0057700e
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b930()
    ADD ESP,0x8                         ; 00577013
    PUSH 0x5d70f8                       ; 00577016 | = "neutral"
    LEA EAX,[EBX + 0x2dc]               ; 0057701b
    PUSH EAX                            ; 00577021
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 00577022
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b930()
    ADD ESP,0x8                         ; 00577027
    PUSH 0x5d7100                       ; 0057702a | = "destroyedEvent"
    LEA EAX,[EBX + 0x2e0]               ; 0057702f
    PUSH EAX                            ; 00577035
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 00577036
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0057703b
    PUSH 0x5d710f                       ; 0057703e | = "startLoc"
    LEA EAX,[EBX + 0x3a8]               ; 00577043
    PUSH EAX                            ; 00577049
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 0057704a
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b930()
    ADD ESP,0x8                         ; 0057704f
    PUSH 0x5d7118                       ; 00577052 | = "endLoc"
    LEA EAX,[EBX + 0x3ac]               ; 00577057
    PUSH EAX                            ; 0057705d
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 0057705e
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b930()
    ADD ESP,0x8                         ; 00577063
    PUSH 0x5d711f                       ; 00577066 | = "state"
    LEA EAX,[EBX + 0x3b8]               ; 0057706b
    PUSH EAX                            ; 00577071
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00577072
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00577077
    PUSH 0x5d7125                       ; 0057707a | = "timer"
    LEA EAX,[EBX + 0x3bc]               ; 0057707f
    PUSH EAX                            ; 00577085
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00577086
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    MOV EDX,dword ptr [0x00606af8]      ; 0057708b | g_CCryptVesselClassVersion
    ADD ESP,0x8                         ; 00577091
    CMP EDX,0x2                         ; 00577094
    JGE 0x005770c1                      ; 00577097
        ;   XREF to: 005770c1 (CONDITIONAL_JUMP)  ; LAB_005770c1
    CMP dword ptr [0x00606af8],0x3      ; 00577099 | g_CCryptVesselClassVersion
        ;   Label: LAB_00577099
    JL 0x005770b6                       ; 005770a0
        ;   XREF to: 005770b6 (CONDITIONAL_JUMP)  ; LAB_005770b6
    PUSH 0x5d7134                       ; 005770a2 | = "eatDistance"
    LEA EAX,[EBX + 0x3b0]               ; 005770a7
    PUSH EAX                            ; 005770ad
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 005770ae
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 005770b3
    CMP dword ptr [0x00606af8],0x4      ; 005770b6 | g_CCryptVesselClassVersion
        ;   Label: LAB_005770b6
    JGE 0x005770d7                      ; 005770bd
        ;   XREF to: 005770d7 (CONDITIONAL_JUMP)  ; LAB_005770d7
    POP EBX                             ; 005770bf
    RET                                 ; 005770c0
    PUSH 0x5d712b                       ; 005770c1 | = "winEvent"
        ;   Label: LAB_005770c1
    LEA EAX,[EBX + 0x344]               ; 005770c6
    PUSH EAX                            ; 005770cc
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 005770cd
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005770d2
    JMP 0x00577099                      ; 005770d5
        ;   XREF to: 00577099 (UNCONDITIONAL_JUMP)  ; LAB_00577099
    PUSH 0x5d7140                       ; 005770d7 | = "visualType"
        ;   Label: LAB_005770d7
    ADD EBX,0x3b4                       ; 005770dc
    PUSH EBX                            ; 005770e2
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 005770e3
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005770e8
    POP EBX                             ; 005770eb
    RET                                 ; 005770ec

