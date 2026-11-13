; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_door_cpp_CDoor_onOpened_FUN_00463d10(CDoor *this_ptr)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_charactr.cpp_CCharacter_clearDoorTarget_FUN_00431980 at 00431992
;   core_hero.cpp_CHero_doHeroAction_FUN_004d4520 at 004d4694
;   core_hero.cpp_CHero_tryOpenDoor_FUN_004d3250 at 004d3291
;
; Referenced Globals:
;   undefined4 DAT_005fba60
;
; Called Functions:
;   core_event.cpp_CEventList_executeCommands_FUN_0048c150
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00463d10
        ;   Label: core_door.cpp_CDoor_onOpened_FUN_00463d10
    ADD EAX,0x2e8                       ; 00463d14
    PUSH EAX                            ; 00463d19
    MOV EDX,dword ptr [0x005fba60]      ; 00463d1a | DAT_005fba60
    PUSH EDX                            ; 00463d20
    CALL core_event.cpp_CEventList_executeCommands_FUN_0048c150 ; 00463d21
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0048c150(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 00463d26
    RET                                 ; 00463d29

