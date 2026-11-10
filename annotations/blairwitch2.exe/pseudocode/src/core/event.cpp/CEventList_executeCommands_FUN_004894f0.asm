; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_CEventList_executeCommands_FUN_004894f0(CEventList *this_ptr,char *commands)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   commands
;
; XREF[25]:
;   core_actor.cpp_CDemonActor_handleFootstep_FUN_0040cb60 at 0040cc05
;   core_basicene.cpp_CBasicEnemy_processDamage_FUN_0059f800 at 0059f88e
;   core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0 at 0042814f
;   core_conveyor.cpp_CConstruct_process_FUN_00436e80 at 004371c6
;   core_dest.cpp_CActorDestination_process_FUN_00447140 at 004472d7
;   core_door.cpp_CDoor_process_FUN_0045f5a0 at 0045f66f
;   core_door.cpp_FUN_0045efc0 at 0045efd1
;   core_enemy.cpp_CEnemy_processDamage_FUN_00488890 at 004888dc
;   core_event.cpp_CRuleList_evaluateAndRun_FUN_004925c0 at 004925f7
;   core_filmreel.cpp_CFilmProjector_process_FUN_00492d10 at 00492db0
;   ... and 15 more
;
; Referenced Globals:
;   undefined4 DAT_01c3dd0c
;
; Called Functions:
;   core_event.cpp_CEventList_executeCommandString_FUN_00489510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004894f0
        ;   Label: core_event.cpp_CEventList_executeCommands_FUN_004894f0
    MOV ECX,dword ptr [ESP + 0xc]       ; 004894f1
    PUSH ECX                            ; 004894f5
    MOV EBX,dword ptr [ESP + 0xc]       ; 004894f6
    XOR EDX,EDX                         ; 004894fa
    PUSH EBX                            ; 004894fc
    MOV dword ptr [0x01c3dd0c],EDX      ; 004894fd | DAT_01c3dd0c
    CALL core_event.cpp_CEventList_executeCommandString_FUN_00489510 ; 00489503
        ;   XREF to: 00489510 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommandString_FUN_00489510(CEventList * this_ptr, char * command_string)
    ADD ESP,0x8                         ; 00489508
    POP EBX                             ; 0048950b
    RET                                 ; 0048950c

