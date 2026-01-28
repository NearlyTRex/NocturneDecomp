; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_hiram_cpp_FUN_004f46a0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_deathEvent_0062ee07
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_FUN_0040e460
;   core_npc.cpp_CNPC_FUN_00544e40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f46a0
        ;   Label: core_hiram.cpp_FUN_004f46a0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004f46a1
    PUSH EDX                            ; 004f46a5
    MOV ECX,dword ptr [ESP + 0xc]       ; 004f46a6
    PUSH ECX                            ; 004f46aa
    CALL core_npc.cpp_CNPC_FUN_00544e40 ; 004f46ab
        ;   XREF to: 00544e40 (UNCONDITIONAL_CALL)  ; void core_npc.cpp_CNPC_FUN_00544e40(CNPC * this_ptr)
    ADD ESP,0x8                         ; 004f46b0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f46b3
    ADD EAX,0x1f708                     ; 004f46b7
    PUSH EAX                            ; 004f46bc
    PUSH 0x62ee07                       ; 004f46bd | = "deathEvent"
    MOV EBX,dword ptr [ESP + 0x14]      ; 004f46c2
    PUSH EBX                            ; 004f46c6
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e460 ; 004f46c7
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e460(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 004f46cc
    POP EBX                             ; 004f46cf
    RET                                 ; 004f46d0

