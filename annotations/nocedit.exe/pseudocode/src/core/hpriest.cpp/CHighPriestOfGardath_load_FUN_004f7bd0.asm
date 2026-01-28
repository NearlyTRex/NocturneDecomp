; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_hpriest_cpp_CHighPriestOfGardath_load_FUN_004f7bd0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_killEvent_0062f573
;
; Called Functions:
;   core_actor.cpp_serializeString_FUN_0040b5c0
;   core_npc.cpp_CNPC_serialize_FUN_00544ba0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004f7bd0
        ;   Label: core_hpriest.cpp_CHighPriestOfGardath_load_FUN_004f7bd0
    PUSH EDX                            ; 004f7bd4
    CALL core_npc.cpp_CNPC_serialize_FUN_00544ba0 ; 004f7bd5
        ;   XREF to: 00544ba0 (UNCONDITIONAL_CALL)  ; void core_npc.cpp_CNPC_serialize_FUN_00544ba0(CNPC * this_ptr)
    ADD ESP,0x4                         ; 004f7bda
    MOV EAX,dword ptr [ESP + 0x4]       ; 004f7bdd
    PUSH 0x62f573                       ; 004f7be1 | = "killEvent"
    ADD EAX,0x1f708                     ; 004f7be6
    PUSH EAX                            ; 004f7beb
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 004f7bec
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004f7bf1
    RET                                 ; 004f7bf4

