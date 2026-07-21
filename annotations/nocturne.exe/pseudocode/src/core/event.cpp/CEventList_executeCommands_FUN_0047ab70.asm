; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_event_cpp_CEventList_executeCommands_FUN_0047ab70(undefined4 param_1,undefined4 param_2)
;
;
; XREF[17]:
;   FUN_004b6d80 at 004b7767
;   FUN_00547b30 at 00547c1d
;   FUN_0054dd50 at 0054df43
;   core_dest.cpp_CActorDestination_process_FUN_0044b850 at 0044b99b
;   core_door.cpp_CDoor_onOpened_FUN_00455270 at 00455281
;   core_door.cpp_CDoor_process_FUN_00455640 at 00455720
;   core_event.cpp_CRuleList_evaluateAndRun_FUN_00481890 at 004818c7
;   core_filmreel.cpp_CFilmProjector_process_FUN_00482010 at 004820ba
;   core_game.cpp_CGame_processCheatCodes_FUN_004a0550 at 004a22a8
;   core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004b4fe0 at 004b50ea
;   ... and 7 more
;
; Referenced Globals:
;   undefined4 DAT_01c08b5c
;
; Called Functions:
;   core_event.cpp_CEventList_executeCommandString_FUN_0047ab90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047ab70
        ;   Label: core_event.cpp_CEventList_executeCommands_FUN_0047ab70
    MOV ECX,dword ptr [ESP + 0xc]       ; 0047ab71
    PUSH ECX                            ; 0047ab75
    MOV EBX,dword ptr [ESP + 0xc]       ; 0047ab76
    XOR EDX,EDX                         ; 0047ab7a
    PUSH EBX                            ; 0047ab7c
    MOV dword ptr [0x01c08b5c],EDX      ; 0047ab7d | DAT_01c08b5c
    CALL core_event.cpp_CEventList_executeCommandString_FUN_0047ab90 ; 0047ab83
        ;   XREF to: 0047ab90 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_CEventList_executeCommandString_FUN_0047ab90()
    ADD ESP,0x8                         ; 0047ab88
    POP EBX                             ; 0047ab8b
    RET                                 ; 0047ab8c

