; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dest_cpp_CActorDestination_archive_FUN_00459500(CActorDestination *this_ptr)
;
; Parameters:
; CActorDestination * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x104]:1  local_104
;
; XREF[1]:
;   core_filmreel.cpp_CFilmProjector_archive_FUN_00496840 at 00496846
;
; Referenced Globals:
;   undefined4 s_whoGoesHere_005ba9bb+1
;   TerminatedCString s_whatEvent_005ba9c8
;   TerminatedCString s_destActor_005ba9d2
;   TerminatedCString s_destClass_005ba9dc
;   TerminatedCString s_persistantEventFlag_005ba9e6
;   int g_CActorDestinationClassVersion = 0x4
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b930
;   core_actor.cpp_archiveInteger_FUN_0040b8b0
;   core_actor.cpp_archiveString_FUN_0040b680
;   core_actor.cpp_CDemonActor_archive_FUN_0040c280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00459500
        ;   Label: core_dest.cpp_CActorDestination_archive_FUN_00459500
    SUB ESP,0x100                       ; 00459501
    MOV EBX,dword ptr [ESP + 0x108]     ; 00459507
    PUSH EBX                            ; 0045950e
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c280 ; 0045950f
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c280(CDemonActor * this_ptr)
    MOV EDX,dword ptr [0x005f187c]      ; 00459514 | g_CActorDestinationClassVersion
    ADD ESP,0x4                         ; 0045951a
    CMP EDX,0x2                         ; 0045951d
    JL 0x00459583                       ; 00459520
        ;   XREF to: 00459583 (CONDITIONAL_JUMP)  ; LAB_00459583
    PUSH 0x5ba9c8                       ; 00459522 | = "whatEvent"
        ;   Label: LAB_00459522
    LEA EAX,[EBX + 0x188]               ; 00459527
    PUSH EAX                            ; 0045952d
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 0045952e
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    MOV ECX,dword ptr [0x005f187c]      ; 00459533 | g_CActorDestinationClassVersion
    ADD ESP,0x8                         ; 00459539
    CMP ECX,0x2                         ; 0045953c
    JL 0x00459555                       ; 0045953f
        ;   XREF to: 00459555 (CONDITIONAL_JUMP)  ; LAB_00459555
    PUSH 0x5ba9d2                       ; 00459541 | = "destActor"
    LEA EAX,[EBX + 0x158]               ; 00459546
    PUSH EAX                            ; 0045954c
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 0045954d
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b930(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 00459552
    CMP dword ptr [0x005f187c],0x3      ; 00459555 | g_CActorDestinationClassVersion
        ;   Label: LAB_00459555
    JL 0x00459572                       ; 0045955c
        ;   XREF to: 00459572 (CONDITIONAL_JUMP)  ; LAB_00459572
    PUSH 0x5ba9dc                       ; 0045955e | = "destClass"
    LEA EAX,[EBX + 0x15c]               ; 00459563
    PUSH EAX                            ; 00459569
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 0045956a
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0045956f
    CMP dword ptr [0x005f187c],0x4      ; 00459572 | g_CActorDestinationClassVersion
        ;   Label: LAB_00459572
    JGE 0x004595a1                      ; 00459579
        ;   XREF to: 004595a1 (CONDITIONAL_JUMP)  ; LAB_004595a1
    ADD ESP,0x100                       ; 0045957b
    POP EBX                             ; 00459581
    RET                                 ; 00459582
    PUSH 0x5ba9bc                       ; 00459583 | s_whoGoesHere_005ba9bb+1
        ;   Label: LAB_00459583
    LEA EAX,[ESP + 0x4]                 ; 00459588
    PUSH EAX                            ; 0045958c
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 0045958d
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00459592
    MOV dword ptr [EBX + 0x158],0x0     ; 00459595
    JMP 0x00459522                      ; 0045959f
        ;   XREF to: 00459522 (UNCONDITIONAL_JUMP)  ; LAB_00459522
    PUSH 0x5ba9e6                       ; 004595a1 | = "persistantEventFlag"
        ;   Label: LAB_004595a1
    ADD EBX,0x1ec                       ; 004595a6
    PUSH EBX                            ; 004595ac
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 004595ad
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004595b2
    ADD ESP,0x100                       ; 004595b5
    POP EBX                             ; 004595bb
    RET                                 ; 004595bc

