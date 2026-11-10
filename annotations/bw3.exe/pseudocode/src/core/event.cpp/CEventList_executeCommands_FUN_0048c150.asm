; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_CEventList_executeCommands_FUN_0048c150(CEventList *this_ptr,char *commands)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   commands
;
; XREF[33]:
;   core_actor.cpp_CDemonActor_handleFootstep_FUN_0040cab0 at 0040cb61
;   core_carved.cpp_CCarved_processDamage_FUN_00428a80 at 00428bad
;   core_carved.cpp_CCarved_process_FUN_00425da0 at 00426de9
;   core_charactr.cpp_CCharacter_processDamage_FUN_00430d60 at 00430f76
;   core_constrct.cpp_CConstruct_process_FUN_00442a20 at 00442c89
;   core_dest.cpp_CActorDestination_process_FUN_004591f0 at 00459387
;   core_door.cpp_CDoor_onOpened_FUN_00463d10 at 00463d21
;   core_door.cpp_CDoor_process_FUN_004642f0 at 004643bf
;   core_enemy.cpp_CEnemy_processDamage_FUN_00489b80 at 00489c40
;   core_event.cpp_CRuleList_evaluateAndRun_FUN_00495db0 at 00495de7
;   ... and 23 more
;
; Referenced Globals:
;   undefined4 DAT_01c734ac
;
; Called Functions:
;   core_event.cpp_CEventList_executeCommandString_FUN_0048c170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048c150
        ;   Label: core_event.cpp_CEventList_executeCommands_FUN_0048c150
    MOV ECX,dword ptr [ESP + 0xc]       ; 0048c151
    PUSH ECX                            ; 0048c155
    MOV EBX,dword ptr [ESP + 0xc]       ; 0048c156
    XOR EDX,EDX                         ; 0048c15a
    PUSH EBX                            ; 0048c15c
    MOV dword ptr [0x01c734ac],EDX      ; 0048c15d | DAT_01c734ac
    CALL core_event.cpp_CEventList_executeCommandString_FUN_0048c170 ; 0048c163
        ;   XREF to: 0048c170 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommandString_FUN_0048c170(CEventList * this_ptr, char * command_string)
    ADD ESP,0x8                         ; 0048c168
    POP EBX                             ; 0048c16b
    RET                                 ; 0048c16c

