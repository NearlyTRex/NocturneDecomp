; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_filmreel.cpp_serialize_FUN_004bede0()
;
;
; Referenced Globals:
;   TerminatedCString s_keyReel_00629bcd
;   TerminatedCString s_keyEvent_00629bd5
;   int g_CFilmProjectorClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_serializeActor_FUN_0040b870
;   core_actor.cpp_serializeString_FUN_0040b5c0
;   core_dest.cpp_CActorDestination_load_FUN_0046fdb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bede0
        ;   Label: core_filmreel.cpp_serialize_FUN_004bede0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004bede1
    PUSH EBX                            ; 004bede5
    CALL core_dest.cpp_CActorDestination_load_FUN_0046fdb0 ; 004bede6 | undefined core_dest.cpp_CActorDestination_load_FUN_0046fdb0()
        ;   XREF to: 0046fdb0 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [0x0067a2fc]      ; 004bedeb | int g_CFilmProjectorClassVersion
    ADD ESP,0x4                         ; 004bedf1
    CMP EDX,0x2                         ; 004bedf4
    JGE 0x004bedfb                      ; 004bedf7 | LAB_004bedfb
        ;   XREF to: 004bedfb (CONDITIONAL_JUMP)
    POP EBX                             ; 004bedf9
    RET                                 ; 004bedfa
    PUSH 0x629bcd                       ; 004bedfb | = "keyReel" | s_keyReel_00629bcd = keyReel
        ;   Label: LAB_004bedfb
    LEA EAX,[EBX + 0x370]               ; 004bee00
    PUSH EAX                            ; 004bee06
    CALL core_actor.cpp_serializeActor_FUN_0040b870 ; 004bee07 | void core_actor.cpp_serializeActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004bee0c
    PUSH 0x629bd5                       ; 004bee0f | = "keyEvent" | s_keyEvent_00629bd5 = keyEvent
    LEA EAX,[EBX + 0x374]               ; 004bee14
    PUSH EAX                            ; 004bee1a
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 004bee1b | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004bee20
    POP EBX                             ; 004bee23
    RET                                 ; 004bee24

