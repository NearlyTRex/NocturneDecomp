; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_conveyor_cpp_CConveyor_archive_FUN_00447a40(CConveyor *this_ptr)
;
; Parameters:
; CConveyor *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005d7102
;   TerminatedCString s_direction_005d7107
;   TerminatedCString s_startEvent_005d7111
;   TerminatedCString s_stopEvent_005d711c
;   TerminatedCString s_state_005d7126
;   TerminatedCString s_actorClass_005d712c
;   int g_CConveyorClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_archiveInteger_FUN_0040b670
;   core_actor.cpp_archiveString_FUN_0040b440
;   core_actor.cpp_archiveVector_FUN_0040b1c0
;   core_platfrm.cpp_CPlatform_archive_FUN_0053a740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00447a40
        ;   Label: core_conveyor.cpp_CConveyor_archive_FUN_00447a40
    MOV EBX,dword ptr [ESP + 0x8]       ; 00447a41
    PUSH EBX                            ; 00447a45
    CALL core_platfrm.cpp_CPlatform_archive_FUN_0053a740 ; 00447a46
        ;   XREF to: 0053a740 (UNCONDITIONAL_CALL)  ; void core_platfrm.cpp_CPlatform_archive_FUN_0053a740(CPlatform * this_ptr)
    ADD ESP,0x4                         ; 00447a4b
    PUSH 0x5d7102                       ; 00447a4e | DAT_005d7102
    LEA EAX,[EBX + 0x728]               ; 00447a53
    PUSH EAX                            ; 00447a59
    CALL core_actor.cpp_archiveVector_FUN_0040b1c0 ; 00447a5a
        ;   XREF to: 0040b1c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveVector_FUN_0040b1c0(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 00447a5f
    PUSH 0x5d7107                       ; 00447a62 | = "direction"
    LEA EAX,[EBX + 0x734]               ; 00447a67
    PUSH EAX                            ; 00447a6d
    CALL core_actor.cpp_archiveVector_FUN_0040b1c0 ; 00447a6e
        ;   XREF to: 0040b1c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveVector_FUN_0040b1c0(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 00447a73
    PUSH 0x5d7111                       ; 00447a76 | = "startEvent"
    LEA EAX,[EBX + 0x740]               ; 00447a7b
    PUSH EAX                            ; 00447a81
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 00447a82
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00447a87
    PUSH 0x5d711c                       ; 00447a8a | = "stopEvent"
    LEA EAX,[EBX + 0x7a4]               ; 00447a8f
    PUSH EAX                            ; 00447a95
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 00447a96
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00447a9b
    PUSH 0x5d7126                       ; 00447a9e | = "state"
    LEA EAX,[EBX + 0x808]               ; 00447aa3
    PUSH EAX                            ; 00447aa9
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 00447aaa
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    MOV EDX,dword ptr [0x00611160]      ; 00447aaf | g_CConveyorClassVersion
    ADD ESP,0x8                         ; 00447ab5
    CMP EDX,0x2                         ; 00447ab8
    JGE 0x00447abf                      ; 00447abb
        ;   XREF to: 00447abf (CONDITIONAL_JUMP)  ; LAB_00447abf
    POP EBX                             ; 00447abd
    RET                                 ; 00447abe
    PUSH 0x5d712c                       ; 00447abf | = "actorClass"
        ;   Label: LAB_00447abf
    ADD EBX,0x80c                       ; 00447ac4
    PUSH EBX                            ; 00447aca
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 00447acb
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00447ad0
    POP EBX                             ; 00447ad3
    RET                                 ; 00447ad4

