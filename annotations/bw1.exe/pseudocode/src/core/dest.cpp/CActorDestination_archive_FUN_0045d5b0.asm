; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dest_cpp_CActorDestination_archive_FUN_0045d5b0(CActorDestination *this_ptr)
;
; Parameters:
; CActorDestination * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x104]:1  local_104
;
; XREF[1]:
;   core_filmreel.cpp_CFilmProjector_archive_FUN_004ab9a0 at 004ab9a6
;
; Referenced Globals:
;   undefined4 s_whoGoesHere_005d8362+1
;   TerminatedCString s_whatEvent_005d836f
;   TerminatedCString s_destActor_005d8379
;   TerminatedCString s_destClass_005d8383
;   TerminatedCString s_persistantEventFlag_005d838d
;   int g_CActorDestinationClassVersion = 0x4
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b6f0
;   core_actor.cpp_archiveInteger_FUN_0040b670
;   core_actor.cpp_archiveString_FUN_0040b440
;   core_actor.cpp_CDemonActor_archive_FUN_0040c040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045d5b0
        ;   Label: core_dest.cpp_CActorDestination_archive_FUN_0045d5b0
    SUB ESP,0x100                       ; 0045d5b1
    MOV EBX,dword ptr [ESP + 0x108]     ; 0045d5b7
    PUSH EBX                            ; 0045d5be
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c040 ; 0045d5bf
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c040(CDemonActor * this_ptr)
    MOV EDX,dword ptr [0x006112c8]      ; 0045d5c4 | g_CActorDestinationClassVersion
    ADD ESP,0x4                         ; 0045d5ca
    CMP EDX,0x2                         ; 0045d5cd
    JL 0x0045d633                       ; 0045d5d0
        ;   XREF to: 0045d633 (CONDITIONAL_JUMP)  ; LAB_0045d633
    PUSH 0x5d836f                       ; 0045d5d2 | = "whatEvent"
        ;   Label: LAB_0045d5d2
    LEA EAX,[EBX + 0x188]               ; 0045d5d7
    PUSH EAX                            ; 0045d5dd
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 0045d5de
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    MOV ECX,dword ptr [0x006112c8]      ; 0045d5e3 | g_CActorDestinationClassVersion
    ADD ESP,0x8                         ; 0045d5e9
    CMP ECX,0x2                         ; 0045d5ec
    JL 0x0045d605                       ; 0045d5ef
        ;   XREF to: 0045d605 (CONDITIONAL_JUMP)  ; LAB_0045d605
    PUSH 0x5d8379                       ; 0045d5f1 | = "destActor"
    LEA EAX,[EBX + 0x158]               ; 0045d5f6
    PUSH EAX                            ; 0045d5fc
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 0045d5fd
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b6f0()
    ADD ESP,0x8                         ; 0045d602
    CMP dword ptr [0x006112c8],0x3      ; 0045d605 | g_CActorDestinationClassVersion
        ;   Label: LAB_0045d605
    JL 0x0045d622                       ; 0045d60c
        ;   XREF to: 0045d622 (CONDITIONAL_JUMP)  ; LAB_0045d622
    PUSH 0x5d8383                       ; 0045d60e | = "destClass"
    LEA EAX,[EBX + 0x15c]               ; 0045d613
    PUSH EAX                            ; 0045d619
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 0045d61a
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0045d61f
    CMP dword ptr [0x006112c8],0x4      ; 0045d622 | g_CActorDestinationClassVersion
        ;   Label: LAB_0045d622
    JGE 0x0045d651                      ; 0045d629
        ;   XREF to: 0045d651 (CONDITIONAL_JUMP)  ; LAB_0045d651
    ADD ESP,0x100                       ; 0045d62b
    POP EBX                             ; 0045d631
    RET                                 ; 0045d632
    PUSH 0x5d8363                       ; 0045d633 | s_whoGoesHere_005d8362+1
        ;   Label: LAB_0045d633
    LEA EAX,[ESP + 0x4]                 ; 0045d638
    PUSH EAX                            ; 0045d63c
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 0045d63d
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0045d642
    MOV dword ptr [EBX + 0x158],0x0     ; 0045d645
    JMP 0x0045d5d2                      ; 0045d64f
        ;   XREF to: 0045d5d2 (UNCONDITIONAL_JUMP)  ; LAB_0045d5d2
    PUSH 0x5d838d                       ; 0045d651 | = "persistantEventFlag"
        ;   Label: LAB_0045d651
    ADD EBX,0x1ec                       ; 0045d656
    PUSH EBX                            ; 0045d65c
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0045d65d
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0045d662
    ADD ESP,0x100                       ; 0045d665
    POP EBX                             ; 0045d66b
    RET                                 ; 0045d66c

