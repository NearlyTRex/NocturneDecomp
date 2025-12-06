; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_conveyor.cpp_FUN_00442020()
;
;
; Referenced Globals:
;   TerminatedCString s_size_00618e44
;   TerminatedCString s_direction_00618e49
;   TerminatedCString s_startEvent_00618e53
;   TerminatedCString s_stopEvent_00618e5e
;   TerminatedCString s_state_00618e68
;   TerminatedCString s_actorClass_00618e6e
;   int g_CConveyorClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_serializeInteger_FUN_0040b7f0
;   core_actor.cpp_serializeString_FUN_0040b5c0
;   core_actor.cpp_serializeVector_FUN_0040b340
;   core_platfrm.cpp_CPlatform_load_FUN_0054dbc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00442020
        ;   Label: core_conveyor.cpp_FUN_00442020
    MOV EBX,dword ptr [ESP + 0x8]       ; 00442021
    PUSH EBX                            ; 00442025
    CALL core_platfrm.cpp_CPlatform_load_FUN_0054dbc0 ; 00442026 | undefined core_platfrm.cpp_CPlatform_load_FUN_0054dbc0()
        ;   XREF to: 0054dbc0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0044202b
    PUSH 0x618e44                       ; 0044202e | = "size" | s_size_00618e44 = size
    LEA EAX,[EBX + 0x72c]               ; 00442033
    PUSH EAX                            ; 00442039
    CALL core_actor.cpp_serializeVector_FUN_0040b340 ; 0044203a | void core_actor.cpp_serializeVector_FUN_0040b340(CVector3f * vector_ptr, char * property_name)
        ;   XREF to: 0040b340 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0044203f
    PUSH 0x618e49                       ; 00442042 | = "direction" | s_direction_00618e49 = direction
    LEA EAX,[EBX + 0x738]               ; 00442047
    PUSH EAX                            ; 0044204d
    CALL core_actor.cpp_serializeVector_FUN_0040b340 ; 0044204e | void core_actor.cpp_serializeVector_FUN_0040b340(CVector3f * vector_ptr, char * property_name)
        ;   XREF to: 0040b340 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00442053
    PUSH 0x618e53                       ; 00442056 | = "startEvent" | s_startEvent_00618e53 = startEvent
    LEA EAX,[EBX + 0x744]               ; 0044205b
    PUSH EAX                            ; 00442061
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 00442062 | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00442067
    PUSH 0x618e5e                       ; 0044206a | = "stopEvent" | s_stopEvent_00618e5e = stopEvent
    LEA EAX,[EBX + 0x7a8]               ; 0044206f
    PUSH EAX                            ; 00442075
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 00442076 | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0044207b
    PUSH 0x618e68                       ; 0044207e | = "state" | s_state_00618e68 = state
    LEA EAX,[EBX + 0x80c]               ; 00442083
    PUSH EAX                            ; 00442089
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 0044208a | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [0x0066e910]      ; 0044208f | int g_CConveyorClassVersion
    ADD ESP,0x8                         ; 00442095
    CMP EDX,0x2                         ; 00442098
    JGE 0x0044209f                      ; 0044209b | LAB_0044209f
        ;   XREF to: 0044209f (CONDITIONAL_JUMP)
    POP EBX                             ; 0044209d
    RET                                 ; 0044209e
    PUSH 0x618e6e                       ; 0044209f | = "actorClass" | s_actorClass_00618e6e = actorClass
        ;   Label: LAB_0044209f
    ADD EBX,0x810                       ; 004420a4
    PUSH EBX                            ; 004420aa
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 004420ab | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004420b0
    POP EBX                             ; 004420b3
    RET                                 ; 004420b4

