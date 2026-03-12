; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dest_cpp_CActorDestination_archive_FUN_0046fdb0(CActorDestination *this_ptr)
;
; Parameters:
; CActorDestination * Stack[0x4]:4   this_ptr
; Local Variables:
; char[256]        Stack[-0x104]:256  local_104
;
; XREF[1]:
;   core_filmreel.cpp_CFilmProjector_archive_FUN_004bede0 at 004bede6
;
; Referenced Globals:
;   TerminatedCString s_whoGoesHere_0061e3f6
;   TerminatedCString s_whatEvent_0061e402
;   TerminatedCString s_destActor_0061e40c
;   TerminatedCString s_destClass_0061e416
;   TerminatedCString s_persistantEventFlag_0061e420
;   int g_CActorDestinationClassVersion = 0x4
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b870
;   core_actor.cpp_archiveInteger_FUN_0040b7f0
;   core_actor.cpp_archiveString_FUN_0040b5c0
;   core_actor.cpp_CDemonActor_archive_FUN_0040c1c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046fdb0
        ;   Label: core_dest.cpp_CActorDestination_archive_FUN_0046fdb0
    SUB ESP,0x100                       ; 0046fdb1
    MOV EBX,dword ptr [ESP + 0x108]     ; 0046fdb7
    PUSH EBX                            ; 0046fdbe
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c1c0 ; 0046fdbf
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c1c0(CDemonActor * this_ptr)
    MOV EDX,dword ptr [0x0066ef3c]      ; 0046fdc4 | g_CActorDestinationClassVersion
    ADD ESP,0x4                         ; 0046fdca
    CMP EDX,0x2                         ; 0046fdcd
    JL 0x0046fe33                       ; 0046fdd0
        ;   XREF to: 0046fe33 (CONDITIONAL_JUMP)  ; LAB_0046fe33
    PUSH 0x61e402                       ; 0046fdd2 | = "whatEvent"
        ;   Label: LAB_0046fdd2
    LEA EAX,[EBX + 0x188]               ; 0046fdd7
    PUSH EAX                            ; 0046fddd
    CALL core_actor.cpp_archiveString_FUN_0040b5c0 ; 0046fdde
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b5c0(char * string_buffer, char * property_type)
    MOV ECX,dword ptr [0x0066ef3c]      ; 0046fde3 | g_CActorDestinationClassVersion
    ADD ESP,0x8                         ; 0046fde9
    CMP ECX,0x2                         ; 0046fdec
    JL 0x0046fe05                       ; 0046fdef
        ;   XREF to: 0046fe05 (CONDITIONAL_JUMP)  ; LAB_0046fe05
    PUSH 0x61e40c                       ; 0046fdf1 | = "destActor"
    LEA EAX,[EBX + 0x158]               ; 0046fdf6
    PUSH EAX                            ; 0046fdfc
    CALL core_actor.cpp_archiveActor_FUN_0040b870 ; 0046fdfd
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b870(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 0046fe02
    CMP dword ptr [0x0066ef3c],0x3      ; 0046fe05 | g_CActorDestinationClassVersion
        ;   Label: LAB_0046fe05
    JL 0x0046fe22                       ; 0046fe0c
        ;   XREF to: 0046fe22 (CONDITIONAL_JUMP)  ; LAB_0046fe22
    PUSH 0x61e416                       ; 0046fe0e | = "destClass"
    LEA EAX,[EBX + 0x15c]               ; 0046fe13
    PUSH EAX                            ; 0046fe19
    CALL core_actor.cpp_archiveString_FUN_0040b5c0 ; 0046fe1a
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b5c0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0046fe1f
    CMP dword ptr [0x0066ef3c],0x4      ; 0046fe22 | g_CActorDestinationClassVersion
        ;   Label: LAB_0046fe22
    JGE 0x0046fe51                      ; 0046fe29
        ;   XREF to: 0046fe51 (CONDITIONAL_JUMP)  ; LAB_0046fe51
    ADD ESP,0x100                       ; 0046fe2b
    POP EBX                             ; 0046fe31
    RET                                 ; 0046fe32
    PUSH 0x61e3f6                       ; 0046fe33 | = "whoGoesHere"
        ;   Label: LAB_0046fe33
    LEA EAX,[ESP + 0x4]                 ; 0046fe38
    PUSH EAX                            ; 0046fe3c
    CALL core_actor.cpp_archiveString_FUN_0040b5c0 ; 0046fe3d
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b5c0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0046fe42
    MOV dword ptr [EBX + 0x158],0x0     ; 0046fe45
    JMP 0x0046fdd2                      ; 0046fe4f
        ;   XREF to: 0046fdd2 (UNCONDITIONAL_JUMP)  ; LAB_0046fdd2
    PUSH 0x61e420                       ; 0046fe51 | = "persistantEventFlag"
        ;   Label: LAB_0046fe51
    ADD EBX,0x1ec                       ; 0046fe56
    PUSH EBX                            ; 0046fe5c
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 0046fe5d
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0046fe62
    ADD ESP,0x100                       ; 0046fe65
    POP EBX                             ; 0046fe6b
    RET                                 ; 0046fe6c

