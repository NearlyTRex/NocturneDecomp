; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_filmreel_cpp_CFilmProjector_archive_FUN_004ab9a0(CFilmProjector *this_ptr)
;
; Parameters:
; CFilmProjector * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_I_keyReel_005df161+2
;   TerminatedCString s_keyEvent_005df16b
;   undefined4 DAT_0061bf2c
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b6f0
;   core_actor.cpp_archiveString_FUN_0040b440
;   core_dest.cpp_CActorDestination_archive_FUN_0045d5b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ab9a0
        ;   Label: core_filmreel.cpp_CFilmProjector_archive_FUN_004ab9a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ab9a1
    PUSH EBX                            ; 004ab9a5
    CALL core_dest.cpp_CActorDestination_archive_FUN_0045d5b0 ; 004ab9a6
        ;   XREF to: 0045d5b0 (UNCONDITIONAL_CALL)  ; void core_dest.cpp_CActorDestination_archive_FUN_0045d5b0(CActorDestination * this_ptr)
    MOV EDX,dword ptr [0x0061bf2c]      ; 004ab9ab | DAT_0061bf2c
    ADD ESP,0x4                         ; 004ab9b1
    CMP EDX,0x2                         ; 004ab9b4
    JGE 0x004ab9bb                      ; 004ab9b7
        ;   XREF to: 004ab9bb (CONDITIONAL_JUMP)  ; LAB_004ab9bb
    POP EBX                             ; 004ab9b9
    RET                                 ; 004ab9ba
    PUSH 0x5df163                       ; 004ab9bb | s_I_keyReel_005df161+2
        ;   Label: LAB_004ab9bb
    LEA EAX,[EBX + 0x370]               ; 004ab9c0
    PUSH EAX                            ; 004ab9c6
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 004ab9c7
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b6f0(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 004ab9cc
    PUSH 0x5df16b                       ; 004ab9cf | = "keyEvent"
    LEA EAX,[EBX + 0x374]               ; 004ab9d4
    PUSH EAX                            ; 004ab9da
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 004ab9db
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004ab9e0
    POP EBX                             ; 004ab9e3
    RET                                 ; 004ab9e4

