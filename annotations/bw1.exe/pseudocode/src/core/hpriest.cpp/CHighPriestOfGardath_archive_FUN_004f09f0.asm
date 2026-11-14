; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hpriest_cpp_CHighPriestOfGardath_archive_FUN_004f09f0(CHighPriestOfGardath *this_ptr)
;
; Parameters:
; CHighPriestOfGardath * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_killEvent_005e5245
;
; Called Functions:
;   core_actor.cpp_archiveString_FUN_0040b440
;   core_npc.cpp_CNPC_archive_FUN_00531bf0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004f09f0
        ;   Label: core_hpriest.cpp_CHighPriestOfGardath_archive_FUN_004f09f0
    PUSH EDX                            ; 004f09f4
    CALL core_npc.cpp_CNPC_archive_FUN_00531bf0 ; 004f09f5
        ;   XREF to: 00531bf0 (UNCONDITIONAL_CALL)  ; void core_npc.cpp_CNPC_archive_FUN_00531bf0(CNPC * this_ptr)
    ADD ESP,0x4                         ; 004f09fa
    MOV EAX,dword ptr [ESP + 0x4]       ; 004f09fd
    PUSH 0x5e5245                       ; 004f0a01 | = "killEvent"
    ADD EAX,0x1fab8                     ; 004f0a06
    PUSH EAX                            ; 004f0a0b
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 004f0a0c
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004f0a11
    RET                                 ; 004f0a14

