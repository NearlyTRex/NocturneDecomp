; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hpriest_cpp_FUN_004d47e0(CNPC *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_killEvent_005da6e4
;
; Called Functions:
;   core_actor.cpp_archiveString_FUN_0040b730
;   core_npc.cpp_FUN_005109e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004d47e0
        ;   Label: core_hpriest.cpp_FUN_004d47e0
    PUSH EDX                            ; 004d47e4
    CALL core_npc.cpp_FUN_005109e0      ; 004d47e5
        ;   XREF to: 005109e0 (UNCONDITIONAL_CALL)  ; void core_npc.cpp_FUN_005109e0(CNPC * this_ptr)
    ADD ESP,0x4                         ; 004d47ea
    MOV EAX,dword ptr [ESP + 0x4]       ; 004d47ed
    PUSH 0x5da6e4                       ; 004d47f1 | = "killEvent"
    ADD EAX,0x24348                     ; 004d47f6
    PUSH EAX                            ; 004d47fb
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 004d47fc
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004d4801
    RET                                 ; 004d4804

