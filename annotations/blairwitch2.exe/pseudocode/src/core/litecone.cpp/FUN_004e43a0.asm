; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_litecone_cpp_FUN_004e43a0(CDemonActor *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005dc11a
;   TerminatedCString s_falloff_005dc11e
;   TerminatedCString s_state_005dc126
;   TerminatedCString s_onEvent_005dc12c
;   TerminatedCString s_offEvent_005dc134
;   int g_CLightConeClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b8e0
;   core_actor.cpp_archiveInteger_FUN_0040b960
;   core_actor.cpp_archiveString_FUN_0040b730
;   core_actor.cpp_CDemonActor_archive_FUN_0040c330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e43a0
        ;   Label: core_litecone.cpp_FUN_004e43a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e43a1
    PUSH EBX                            ; 004e43a5
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c330 ; 004e43a6
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c330(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004e43ab
    PUSH 0x5dc11a                       ; 004e43ae | DAT_005dc11a
    LEA EAX,[EBX + 0x2b4]               ; 004e43b3
    PUSH EAX                            ; 004e43b9
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 004e43ba
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 004e43bf
    PUSH 0x5dc11e                       ; 004e43c2 | = "falloff"
    LEA EAX,[EBX + 0x2b8]               ; 004e43c7
    PUSH EAX                            ; 004e43cd
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 004e43ce
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    MOV EDX,dword ptr [0x00617e68]      ; 004e43d3 | g_CLightConeClassVersion
    ADD ESP,0x8                         ; 004e43d9
    CMP EDX,0x2                         ; 004e43dc
    JGE 0x004e43e3                      ; 004e43df
        ;   XREF to: 004e43e3 (CONDITIONAL_JUMP)  ; LAB_004e43e3
    POP EBX                             ; 004e43e1
    RET                                 ; 004e43e2
    PUSH 0x5dc126                       ; 004e43e3 | = "state"
        ;   Label: LAB_004e43e3
    LEA EAX,[EBX + 0x2bc]               ; 004e43e8
    PUSH EAX                            ; 004e43ee
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 004e43ef
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004e43f4
    PUSH 0x5dc12c                       ; 004e43f7 | = "onEvent"
    LEA EAX,[EBX + 0x2c0]               ; 004e43fc
    PUSH EAX                            ; 004e4402
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 004e4403
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004e4408
    PUSH 0x5dc134                       ; 004e440b | = "offEvent"
    ADD EBX,0x324                       ; 004e4410
    PUSH EBX                            ; 004e4416
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 004e4417
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004e441c
    POP EBX                             ; 004e441f
    RET                                 ; 004e4420

