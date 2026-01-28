; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_litecone_cpp_FUN_00506d00(void)
;
;
; Referenced Globals:
;   TerminatedCString s_fov_0063156e
;   TerminatedCString s_falloff_00631572
;   TerminatedCString s_state_0063157a
;   TerminatedCString s_onEvent_00631580
;   TerminatedCString s_offEvent_00631588
;   int g_CLightConeClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
;   core_actor.cpp_serializeFloat_FUN_0040b770
;   core_actor.cpp_serializeInteger_FUN_0040b7f0
;   core_actor.cpp_serializeString_FUN_0040b5c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00506d00
        ;   Label: core_litecone.cpp_FUN_00506d00
    MOV EBX,dword ptr [ESP + 0x8]       ; 00506d01
    PUSH EBX                            ; 00506d05
    CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0 ; 00506d06
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00506d0b
    PUSH 0x63156e                       ; 00506d0e | = "fov"
    LEA EAX,[EBX + 0x158]               ; 00506d13
    PUSH EAX                            ; 00506d19
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 00506d1a
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00506d1f
    PUSH 0x631572                       ; 00506d22 | = "falloff"
    LEA EAX,[EBX + 0x15c]               ; 00506d27
    PUSH EAX                            ; 00506d2d
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 00506d2e
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    MOV EDX,dword ptr [0x0067cff0]      ; 00506d33 | g_CLightConeClassVersion
    ADD ESP,0x8                         ; 00506d39
    CMP EDX,0x2                         ; 00506d3c
    JGE 0x00506d43                      ; 00506d3f
        ;   XREF to: 00506d43 (CONDITIONAL_JUMP)  ; LAB_00506d43
    POP EBX                             ; 00506d41
    RET                                 ; 00506d42
    PUSH 0x63157a                       ; 00506d43 | = "state"
        ;   Label: LAB_00506d43
    LEA EAX,[EBX + 0x160]               ; 00506d48
    PUSH EAX                            ; 00506d4e
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 00506d4f
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00506d54
    PUSH 0x631580                       ; 00506d57 | = "onEvent"
    LEA EAX,[EBX + 0x164]               ; 00506d5c
    PUSH EAX                            ; 00506d62
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 00506d63
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00506d68
    PUSH 0x631588                       ; 00506d6b | = "offEvent"
    ADD EBX,0x1c8                       ; 00506d70
    PUSH EBX                            ; 00506d76
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 00506d77
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00506d7c
    POP EBX                             ; 00506d7f
    RET                                 ; 00506d80

