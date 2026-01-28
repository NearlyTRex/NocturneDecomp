; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_glass_cpp_CGlass_serialize_FUN_004ea090(CGlass *this_ptr)
;
; Parameters:
; CGlass *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_glassSize_0062e069
;   TerminatedCString s_glassTexture_0062e073
;   TerminatedCString s_opacity_0062e080
;   TerminatedCString s_shattered_0062e088
;   TerminatedCString s_breakEvent_0062e092
;   TerminatedCString s_mirrorFlag_0062e09d
;   TerminatedCString s_breakableCondition_0062e0a8
;   TerminatedCString s_backgroundFlag_0062e0bb
;   TerminatedCString s_brokenTexture_0062e0ca
;   int g_CGlassClassVersion = 0x6
;
; Called Functions:
;   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
;   core_actor.cpp_serializeInteger_FUN_0040b7f0
;   core_actor.cpp_serializeString_FUN_0040b5c0
;   core_actor.cpp_serializeVector_FUN_0040b340
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ea090
        ;   Label: core_glass.cpp_CGlass_serialize_FUN_004ea090
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ea091
    PUSH EBX                            ; 004ea095
    CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0 ; 004ea096
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004ea09b
    PUSH 0x62e069                       ; 004ea09e | = "glassSize"
    LEA EAX,[EBX + 0x158]               ; 004ea0a3
    PUSH EAX                            ; 004ea0a9
    CALL core_actor.cpp_serializeVector_FUN_0040b340 ; 004ea0aa
        ;   XREF to: 0040b340 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeVector_FUN_0040b340(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 004ea0af
    PUSH 0x62e073                       ; 004ea0b2 | = "glassTexture"
    LEA EAX,[EBX + 0x16c]               ; 004ea0b7
    PUSH EAX                            ; 004ea0bd
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 004ea0be
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
    MOV EDX,dword ptr [0x0067b944]      ; 004ea0c3 | g_CGlassClassVersion
    ADD ESP,0x8                         ; 004ea0c9
    CMP EDX,0x2                         ; 004ea0cc
    JGE 0x004ea14b                      ; 004ea0cf
        ;   XREF to: 004ea14b (CONDITIONAL_JUMP)  ; LAB_004ea14b
    CMP dword ptr [0x0067b944],0x3      ; 004ea0d5 | g_CGlassClassVersion
        ;   Label: LAB_004ea0d5
    JL 0x004ea106                       ; 004ea0dc
        ;   XREF to: 004ea106 (CONDITIONAL_JUMP)  ; LAB_004ea106
    PUSH 0x62e088                       ; 004ea0de | = "shattered"
    LEA EAX,[EBX + 0x180]               ; 004ea0e3
    PUSH EAX                            ; 004ea0e9
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 004ea0ea
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004ea0ef
    PUSH 0x62e092                       ; 004ea0f2 | = "breakEvent"
    LEA EAX,[EBX + 0x184]               ; 004ea0f7
    PUSH EAX                            ; 004ea0fd
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 004ea0fe
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004ea103
    CMP dword ptr [0x0067b944],0x4      ; 004ea106 | g_CGlassClassVersion
        ;   Label: LAB_004ea106
    JL 0x004ea123                       ; 004ea10d
        ;   XREF to: 004ea123 (CONDITIONAL_JUMP)  ; LAB_004ea123
    PUSH 0x62e09d                       ; 004ea10f | = "mirrorFlag"
    LEA EAX,[EBX + 0x1e8]               ; 004ea114
    PUSH EAX                            ; 004ea11a
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 004ea11b
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004ea120
    CMP dword ptr [0x0067b944],0x5      ; 004ea123 | g_CGlassClassVersion
        ;   Label: LAB_004ea123
    JL 0x004ea140                       ; 004ea12a
        ;   XREF to: 004ea140 (CONDITIONAL_JUMP)  ; LAB_004ea140
    PUSH 0x62e0a8                       ; 004ea12c | = "breakableCondition"
    LEA EAX,[EBX + 0x30c]               ; 004ea131
    PUSH EAX                            ; 004ea137
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 004ea138
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004ea13d
    CMP dword ptr [0x0067b944],0x6      ; 004ea140 | g_CGlassClassVersion
        ;   Label: LAB_004ea140
    JGE 0x004ea164                      ; 004ea147
        ;   XREF to: 004ea164 (CONDITIONAL_JUMP)  ; LAB_004ea164
    POP EBX                             ; 004ea149
    RET                                 ; 004ea14a
    PUSH 0x62e080                       ; 004ea14b | = "opacity"
        ;   Label: LAB_004ea14b
    LEA EAX,[EBX + 0x17c]               ; 004ea150
    PUSH EAX                            ; 004ea156
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 004ea157
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004ea15c
    JMP 0x004ea0d5                      ; 004ea15f
        ;   XREF to: 004ea0d5 (UNCONDITIONAL_JUMP)  ; LAB_004ea0d5
    PUSH 0x62e0bb                       ; 004ea164 | = "backgroundFlag"
        ;   Label: LAB_004ea164
    LEA EAX,[EBX + 0x370]               ; 004ea169
    PUSH EAX                            ; 004ea16f
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 004ea170
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004ea175
    PUSH 0x62e0ca                       ; 004ea178 | = "brokenTexture"
    ADD EBX,0x37c                       ; 004ea17d
    PUSH EBX                            ; 004ea183
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 004ea184
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004ea189
    POP EBX                             ; 004ea18c
    RET                                 ; 004ea18d

