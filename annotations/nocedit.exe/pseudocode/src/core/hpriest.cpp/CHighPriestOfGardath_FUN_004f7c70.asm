; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_hpriest_cpp_CHighPriestOfGardath_FUN_004f7c70(void)
;
;
; Referenced Globals:
;   TerminatedCString s_Kill_me_event_0062f57d
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_FUN_0040e460
;   core_npc.cpp_CNPC_FUN_00544e40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f7c70
        ;   Label: core_hpriest.cpp_CHighPriestOfGardath_FUN_004f7c70
    MOV EDX,dword ptr [ESP + 0xc]       ; 004f7c71
    PUSH EDX                            ; 004f7c75
    MOV ECX,dword ptr [ESP + 0xc]       ; 004f7c76
    PUSH ECX                            ; 004f7c7a
    CALL core_npc.cpp_CNPC_FUN_00544e40 ; 004f7c7b
        ;   XREF to: 00544e40 (UNCONDITIONAL_CALL)  ; void core_npc.cpp_CNPC_FUN_00544e40(CNPC * this_ptr)
    ADD ESP,0x8                         ; 004f7c80
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f7c83
    ADD EAX,0x1f708                     ; 004f7c87
    PUSH EAX                            ; 004f7c8c
    PUSH 0x62f57d                       ; 004f7c8d | = "Kill me event"
    MOV EBX,dword ptr [ESP + 0x14]      ; 004f7c92
    PUSH EBX                            ; 004f7c96
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e460 ; 004f7c97
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e460(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 004f7c9c
    POP EBX                             ; 004f7c9f
    RET                                 ; 004f7ca0

