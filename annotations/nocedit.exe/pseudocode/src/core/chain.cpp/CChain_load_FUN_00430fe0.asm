; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_chain.cpp_CChain_load_FUN_00430fe0()
;
;
; Referenced Globals:
;   TerminatedCString s_vertexCount_006177f2
;   TerminatedCString s_chainLength_006177fe
;   TerminatedCString s_target_0061780a
;   TerminatedCString s_targetBone_00617811
;   TerminatedCString s_weight_0061781c
;   TerminatedCString s_dampen_00617823
;   TerminatedCString s_friction_0061782a
;   TerminatedCString s_gravity_00617833
;   TerminatedCString s_textureName_0061783b
;   TerminatedCString s_pullWavName_00617847
;   TerminatedCString s_moveWavName_00617853
;   TerminatedCString s_groundCollideFlag_0061785f
;   int g_CChainClassVersion = 0x4
;
; Called Functions:
;   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
;   core_actor.cpp_serializeActor_FUN_0040b870
;   core_actor.cpp_serializeFloat_FUN_0040b770
;   core_actor.cpp_serializeInteger_FUN_0040b7f0
;   core_actor.cpp_serializeString_FUN_0040b5c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00430fe0
        ;   Label: core_chain.cpp_CChain_load_FUN_00430fe0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00430fe1
    PUSH EBX                            ; 00430fe5
    CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0 ; 00430fe6
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00430feb
    PUSH 0x6177f2                       ; 00430fee | = "vertexCount"
    LEA EAX,[EBX + 0x158]               ; 00430ff3
    PUSH EAX                            ; 00430ff9
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 00430ffa
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00430fff
    PUSH 0x6177fe                       ; 00431002 | = "chainLength"
    LEA EAX,[EBX + 0x15c]               ; 00431007
    PUSH EAX                            ; 0043100d
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 0043100e
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00431013
    PUSH 0x61780a                       ; 00431016 | = "target"
    LEA EAX,[EBX + 0x164]               ; 0043101b
    PUSH EAX                            ; 00431021
    CALL core_actor.cpp_serializeActor_FUN_0040b870 ; 00431022
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 00431027
    PUSH 0x617811                       ; 0043102a | = "targetBone"
    LEA EAX,[EBX + 0x168]               ; 0043102f
    PUSH EAX                            ; 00431035
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 00431036
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0043103b
    PUSH 0x61781c                       ; 0043103e | = "weight"
    LEA EAX,[EBX + 0x55c]               ; 00431043
    PUSH EAX                            ; 00431049
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 0043104a
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0043104f
    PUSH 0x617823                       ; 00431052 | = "dampen"
    LEA EAX,[EBX + 0x568]               ; 00431057
    PUSH EAX                            ; 0043105d
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 0043105e
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00431063
    PUSH 0x61782a                       ; 00431066 | = "friction"
    LEA EAX,[EBX + 0x560]               ; 0043106b
    PUSH EAX                            ; 00431071
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 00431072
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00431077
    PUSH 0x617833                       ; 0043107a | = "gravity"
    LEA EAX,[EBX + 0x564]               ; 0043107f
    PUSH EAX                            ; 00431085
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 00431086
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    MOV EDX,dword ptr [0x0066e7d0]      ; 0043108b | g_CChainClassVersion
    ADD ESP,0x8                         ; 00431091
    CMP EDX,0x2                         ; 00431094
    JGE 0x004310d5                      ; 00431097
        ;   XREF to: 004310d5 (CONDITIONAL_JUMP)  ; LAB_004310d5
    CMP dword ptr [0x0066e7d0],0x3      ; 00431099 | g_CChainClassVersion
        ;   Label: LAB_00431099
    JL 0x004310ca                       ; 004310a0
        ;   XREF to: 004310ca (CONDITIONAL_JUMP)  ; LAB_004310ca
    PUSH 0x617847                       ; 004310a2 | = "pullWavName"
    LEA EAX,[EBX + 0x1b4]               ; 004310a7
    PUSH EAX                            ; 004310ad
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 004310ae
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004310b3
    PUSH 0x617853                       ; 004310b6 | = "moveWavName"
    LEA EAX,[EBX + 0x21c]               ; 004310bb
    PUSH EAX                            ; 004310c1
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 004310c2
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004310c7
    CMP dword ptr [0x0066e7d0],0x4      ; 004310ca | g_CChainClassVersion
        ;   Label: LAB_004310ca
    JGE 0x004310eb                      ; 004310d1
        ;   XREF to: 004310eb (CONDITIONAL_JUMP)  ; LAB_004310eb
    POP EBX                             ; 004310d3
    RET                                 ; 004310d4
    PUSH 0x61783b                       ; 004310d5 | = "textureName"
        ;   Label: LAB_004310d5
    LEA EAX,[EBX + 0x174]               ; 004310da
    PUSH EAX                            ; 004310e0
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 004310e1
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004310e6
    JMP 0x00431099                      ; 004310e9
        ;   XREF to: 00431099 (UNCONDITIONAL_JUMP)  ; LAB_00431099
    PUSH 0x61785f                       ; 004310eb | = "groundCollideFlag"
        ;   Label: LAB_004310eb
    ADD EBX,0x288                       ; 004310f0
    PUSH EBX                            ; 004310f6
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 004310f7
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004310fc
    POP EBX                             ; 004310ff
    RET                                 ; 00431100

