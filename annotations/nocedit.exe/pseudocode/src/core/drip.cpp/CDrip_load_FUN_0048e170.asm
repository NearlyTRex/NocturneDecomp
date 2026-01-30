; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_drip_cpp_CDrip_load_FUN_0048e170(void)
;
;
; Referenced Globals:
;   TerminatedCString s_modelName_00622239
;   TerminatedCString s_type_00622243
;   TerminatedCString s_autoDrop_00622248
;   TerminatedCString s_homePos_00622251
;   TerminatedCString s_vel_00622259
;   TerminatedCString s_minAutoDripTime_0062225d
;   TerminatedCString s_maxAutoDripTime_0062226d
;   TerminatedCString s_dripRadius_0062227d
;   TerminatedCString s_damage_00622288
;   TerminatedCString s_hitSound_0062228f
;   TerminatedCString s_noRockFlag_00622298
;   int g_CDripClassVersion = 0x6
;
; Called Functions:
;   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
;   core_actor.cpp_serializeFloat_FUN_0040b770
;   core_actor.cpp_serializeInteger_FUN_0040b7f0
;   core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
;   core_actor.cpp_serializeString_FUN_0040b5c0
;   core_actor.cpp_serializeVector_FUN_0040b340
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048e170
        ;   Label: core_drip.cpp_CDrip_load_FUN_0048e170
    MOV EBX,dword ptr [ESP + 0x8]       ; 0048e171
    CMP dword ptr [0x00672334],0x2      ; 0048e175 | g_CDripClassVersion
    JGE 0x0048e272                      ; 0048e17c
        ;   XREF to: 0048e272 (CONDITIONAL_JUMP)  ; LAB_0048e272
    PUSH 0x622239                       ; 0048e182 | = "modelName"
        ;   Label: LAB_0048e182
    LEA EAX,[EBX + 0x158]               ; 0048e187
    PUSH EAX                            ; 0048e18d
    CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0 ; 0048e18e
        ;   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0(CKeyFramedModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 0048e193
    PUSH 0x622243                       ; 0048e196 | = "type"
    LEA EAX,[EBX + 0x2d4]               ; 0048e19b
    PUSH EAX                            ; 0048e1a1
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 0048e1a2
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0048e1a7
    PUSH 0x622248                       ; 0048e1aa | = "autoDrop"
    LEA EAX,[EBX + 0x2d8]               ; 0048e1af
    PUSH EAX                            ; 0048e1b5
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 0048e1b6
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0048e1bb
    PUSH 0x622251                       ; 0048e1be | = "homePos"
    LEA EAX,[EBX + 0x2f8]               ; 0048e1c3
    PUSH EAX                            ; 0048e1c9
    CALL core_actor.cpp_serializeVector_FUN_0040b340 ; 0048e1ca
        ;   XREF to: 0040b340 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeVector_FUN_0040b340(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 0048e1cf
    PUSH 0x622259                       ; 0048e1d2 | = "vel"
    LEA EAX,[EBX + 0x304]               ; 0048e1d7
    PUSH EAX                            ; 0048e1dd
    CALL core_actor.cpp_serializeVector_FUN_0040b340 ; 0048e1de
        ;   XREF to: 0040b340 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeVector_FUN_0040b340(CVector3f * vector_ptr, char * property_name)
    MOV ECX,dword ptr [0x00672334]      ; 0048e1e3 | g_CDripClassVersion
    ADD ESP,0x8                         ; 0048e1e9
    CMP ECX,0x3                         ; 0048e1ec
    JL 0x0048e22d                       ; 0048e1ef
        ;   XREF to: 0048e22d (CONDITIONAL_JUMP)  ; LAB_0048e22d
    PUSH 0x62225d                       ; 0048e1f1 | = "minAutoDripTime"
    LEA EAX,[EBX + 0x2e0]               ; 0048e1f6
    PUSH EAX                            ; 0048e1fc
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 0048e1fd
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0048e202
    PUSH 0x62226d                       ; 0048e205 | = "maxAutoDripTime"
    LEA EAX,[EBX + 0x2e4]               ; 0048e20a
    PUSH EAX                            ; 0048e210
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 0048e211
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0048e216
    PUSH 0x62227d                       ; 0048e219 | = "dripRadius"
    LEA EAX,[EBX + 0x2e8]               ; 0048e21e
    PUSH EAX                            ; 0048e224
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 0048e225
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0048e22a
    CMP dword ptr [0x00672334],0x4      ; 0048e22d | g_CDripClassVersion
        ;   Label: LAB_0048e22d
    JL 0x0048e24a                       ; 0048e234
        ;   XREF to: 0048e24a (CONDITIONAL_JUMP)  ; LAB_0048e24a
    PUSH 0x622288                       ; 0048e236 | = "damage"
    LEA EAX,[EBX + 0x310]               ; 0048e23b
    PUSH EAX                            ; 0048e241
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 0048e242
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0048e247
    CMP dword ptr [0x00672334],0x5      ; 0048e24a | g_CDripClassVersion
        ;   Label: LAB_0048e24a
    JL 0x0048e267                       ; 0048e251
        ;   XREF to: 0048e267 (CONDITIONAL_JUMP)  ; LAB_0048e267
    PUSH 0x62228f                       ; 0048e253 | = "hitSound"
    LEA EAX,[EBX + 0x314]               ; 0048e258
    PUSH EAX                            ; 0048e25e
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 0048e25f
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0048e264
    CMP dword ptr [0x00672334],0x6      ; 0048e267 | g_CDripClassVersion
        ;   Label: LAB_0048e267
    JGE 0x0048e280                      ; 0048e26e
        ;   XREF to: 0048e280 (CONDITIONAL_JUMP)  ; LAB_0048e280
    POP EBX                             ; 0048e270
    RET                                 ; 0048e271
    PUSH EBX                            ; 0048e272
        ;   Label: LAB_0048e272
    CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0 ; 0048e273
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0048e278
    JMP 0x0048e182                      ; 0048e27b
        ;   XREF to: 0048e182 (UNCONDITIONAL_JUMP)  ; LAB_0048e182
    PUSH 0x622298                       ; 0048e280 | = "noRockFlag"
        ;   Label: LAB_0048e280
    ADD EBX,0x334                       ; 0048e285
    PUSH EBX                            ; 0048e28b
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 0048e28c
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0048e291
    POP EBX                             ; 0048e294
    RET                                 ; 0048e295

