; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_flame_cpp_CFlame_load_FUN_004cac60(void)
;
;
; Referenced Globals:
;   TerminatedCString s_flameSize_0062a156
;   TerminatedCString s_whichFlame_0062a160
;   TerminatedCString s_globeScalar_0062a16b
;   TerminatedCString s_onEvent_0062a177
;   TerminatedCString s_onEvent_0062a17f
;   TerminatedCString s_flameState_0062a187
;   TerminatedCString s_intensity_0062a192
;   TerminatedCString s_randomness_0062a19c
;   TerminatedCString s_burnHero_0062a1a7
;   TerminatedCString s_burnEnemy_0062a1b0
;   int g_CFlameClassVersion = 0x7
;
; Called Functions:
;   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
;   core_actor.cpp_serializeFloat_FUN_0040b770
;   core_actor.cpp_serializeInteger_FUN_0040b7f0
;   core_actor.cpp_serializeString_FUN_0040b5c0
;   core_actor.cpp_serializeVector_FUN_0040b340
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cac60
        ;   Label: core_flame.cpp_CFlame_load_FUN_004cac60
    MOV EBX,dword ptr [ESP + 0x8]       ; 004cac61
    PUSH EBX                            ; 004cac65
    CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0 ; 004cac66
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004cac6b
    PUSH 0x62a156                       ; 004cac6e | = "flameSize"
    LEA EAX,[EBX + 0x158]               ; 004cac73
    PUSH EAX                            ; 004cac79
    CALL core_actor.cpp_serializeVector_FUN_0040b340 ; 004cac7a
        ;   XREF to: 0040b340 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeVector_FUN_0040b340(CVector3f * vector_ptr, char * property_name)
    MOV EDX,dword ptr [0x0067b4c0]      ; 004cac7f | g_CFlameClassVersion
    ADD ESP,0x8                         ; 004cac85
    CMP EDX,0x2                         ; 004cac88
    JGE 0x004cad24                      ; 004cac8b
        ;   XREF to: 004cad24 (CONDITIONAL_JUMP)  ; LAB_004cad24
    CMP dword ptr [0x0067b4c0],0x3      ; 004cac91 | g_CFlameClassVersion
        ;   Label: LAB_004cac91
    JL 0x004cacae                       ; 004cac98
        ;   XREF to: 004cacae (CONDITIONAL_JUMP)  ; LAB_004cacae
    PUSH 0x62a177                       ; 004cac9a | = "onEvent"
    LEA EAX,[EBX + 0x1b8]               ; 004cac9f
    PUSH EAX                            ; 004caca5
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 004caca6
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004cacab
    CMP dword ptr [0x0067b4c0],0x4      ; 004cacae | g_CFlameClassVersion
        ;   Label: LAB_004cacae
    JL 0x004caccb                       ; 004cacb5
        ;   XREF to: 004caccb (CONDITIONAL_JUMP)  ; LAB_004caccb
    PUSH 0x62a17f                       ; 004cacb7 | = "onEvent"
    LEA EAX,[EBX + 0x21c]               ; 004cacbc
    PUSH EAX                            ; 004cacc2
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 004cacc3
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004cacc8
    CMP dword ptr [0x0067b4c0],0x5      ; 004caccb | g_CFlameClassVersion
        ;   Label: LAB_004caccb
    JL 0x004cace8                       ; 004cacd2
        ;   XREF to: 004cace8 (CONDITIONAL_JUMP)  ; LAB_004cace8
    PUSH 0x62a187                       ; 004cacd4 | = "flameState"
    LEA EAX,[EBX + 0x1b4]               ; 004cacd9
    PUSH EAX                            ; 004cacdf
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 004cace0
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004cace5
    CMP dword ptr [0x0067b4c0],0x6      ; 004cace8 | g_CFlameClassVersion
        ;   Label: LAB_004cace8
    JL 0x004cad19                       ; 004cacef
        ;   XREF to: 004cad19 (CONDITIONAL_JUMP)  ; LAB_004cad19
    PUSH 0x62a192                       ; 004cacf1 | = "intensity"
    LEA EAX,[EBX + 0x280]               ; 004cacf6
    PUSH EAX                            ; 004cacfc
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 004cacfd
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 004cad02
    PUSH 0x62a19c                       ; 004cad05 | = "randomness"
    LEA EAX,[EBX + 0x284]               ; 004cad0a
    PUSH EAX                            ; 004cad10
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 004cad11
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 004cad16
    CMP dword ptr [0x0067b4c0],0x7      ; 004cad19 | g_CFlameClassVersion
        ;   Label: LAB_004cad19
    JGE 0x004cad51                      ; 004cad20
        ;   XREF to: 004cad51 (CONDITIONAL_JUMP)  ; LAB_004cad51
    POP EBX                             ; 004cad22
    RET                                 ; 004cad23
    PUSH 0x62a160                       ; 004cad24 | = "whichFlame"
        ;   Label: LAB_004cad24
    LEA EAX,[EBX + 0x1a8]               ; 004cad29
    PUSH EAX                            ; 004cad2f
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 004cad30
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004cad35
    PUSH 0x62a16b                       ; 004cad38 | = "globeScalar"
    LEA EAX,[EBX + 0x1ac]               ; 004cad3d
    PUSH EAX                            ; 004cad43
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 004cad44
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 004cad49
    JMP 0x004cac91                      ; 004cad4c
        ;   XREF to: 004cac91 (UNCONDITIONAL_JUMP)  ; LAB_004cac91
    PUSH 0x62a1a7                       ; 004cad51 | = "burnHero"
        ;   Label: LAB_004cad51
    LEA EAX,[EBX + 0x288]               ; 004cad56
    PUSH EAX                            ; 004cad5c
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 004cad5d
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004cad62
    PUSH 0x62a1b0                       ; 004cad65 | = "burnEnemy"
    ADD EBX,0x28c                       ; 004cad6a
    PUSH EBX                            ; 004cad70
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 004cad71
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004cad76
    POP EBX                             ; 004cad79
    RET                                 ; 004cad7a

