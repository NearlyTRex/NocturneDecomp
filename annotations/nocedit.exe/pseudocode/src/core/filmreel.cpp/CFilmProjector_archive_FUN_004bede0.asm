; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_filmreel_cpp_CFilmProjector_archive_FUN_004bede0(CFilmProjector *this_ptr)
;
; Parameters:
; CFilmProjector * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_keyReel_00629bcd
;   TerminatedCString s_keyEvent_00629bd5
;   int g_CFilmProjectorClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b870
;   core_actor.cpp_archiveString_FUN_0040b5c0
;   core_dest.cpp_CActorDestination_archive_FUN_0046fdb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bede0
        ;   Label: core_filmreel.cpp_CFilmProjector_archive_FUN_004bede0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004bede1
    PUSH EBX                            ; 004bede5
    CALL core_dest.cpp_CActorDestination_archive_FUN_0046fdb0 ; 004bede6
        ;   XREF to: 0046fdb0 (UNCONDITIONAL_CALL)  ; void core_dest.cpp_CActorDestination_archive_FUN_0046fdb0(CActorDestination * this_ptr)
    MOV EDX,dword ptr [0x0067a2fc]      ; 004bedeb | g_CFilmProjectorClassVersion
    ADD ESP,0x4                         ; 004bedf1
    CMP EDX,0x2                         ; 004bedf4
    JGE 0x004bedfb                      ; 004bedf7
        ;   XREF to: 004bedfb (CONDITIONAL_JUMP)  ; LAB_004bedfb
    POP EBX                             ; 004bedf9
    RET                                 ; 004bedfa
    PUSH 0x629bcd                       ; 004bedfb | = "keyReel"
        ;   Label: LAB_004bedfb
    LEA EAX,[EBX + 0x370]               ; 004bee00
    PUSH EAX                            ; 004bee06
    CALL core_actor.cpp_archiveActor_FUN_0040b870 ; 004bee07
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 004bee0c
    PUSH 0x629bd5                       ; 004bee0f | = "keyEvent"
    LEA EAX,[EBX + 0x374]               ; 004bee14
    PUSH EAX                            ; 004bee1a
    CALL core_actor.cpp_archiveString_FUN_0040b5c0 ; 004bee1b
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b5c0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004bee20
    POP EBX                             ; 004bee23
    RET                                 ; 004bee24

