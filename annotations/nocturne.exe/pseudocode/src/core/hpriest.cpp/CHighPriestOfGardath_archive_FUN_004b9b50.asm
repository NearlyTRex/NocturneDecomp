; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hpriest_cpp_CHighPriestOfGardath_archive_FUN_004b9b50(CHighPriestOfGardath *this_ptr)
;
; Parameters:
; CHighPriestOfGardath * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_killEvent_00585ff8
;
; Called Functions:
;   core_actor.cpp_archiveString_FUN_0040c6d0
;   core_npc.cpp_CNPC_archive_FUN_004eed10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004b9b50
        ;   Label: core_hpriest.cpp_CHighPriestOfGardath_archive_FUN_004b9b50
    PUSH EDX                            ; 004b9b54
    CALL core_npc.cpp_CNPC_archive_FUN_004eed10 ; 004b9b55
        ;   XREF to: 004eed10 (UNCONDITIONAL_CALL)  ; void core_npc.cpp_CNPC_archive_FUN_004eed10(CNPC * this_ptr)
    ADD ESP,0x4                         ; 004b9b5a
    MOV EAX,dword ptr [ESP + 0x4]       ; 004b9b5d
    PUSH 0x585ff8                       ; 004b9b61 | = "killEvent"
    ADD EAX,0x1f570                     ; 004b9b66
    PUSH EAX                            ; 004b9b6b
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 004b9b6c
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004b9b71
    RET                                 ; 004b9b74

