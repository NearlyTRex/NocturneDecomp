; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_door_cpp_CDoor_onOpened_FUN_004774d0(CDoor *this_ptr)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_charactr.cpp_CCharacter_clearDoorTarget_FUN_00432560 at 00432572
;   core_hero.cpp_CHero_doHeroAction_FUN_004ec640 at 004ec7b4
;   core_hero.cpp_CHero_tryOpenDoor_FUN_004eb5e0 at 004eb621
;
; Referenced Globals:
;   undefined4 DAT_0061b4d0
;
; Called Functions:
;   core_event.cpp_CEventList_executeCommands_FUN_004a1b70
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004774d0
        ;   Label: core_door.cpp_CDoor_onOpened_FUN_004774d0
    ADD EAX,0x2e8                       ; 004774d4
    PUSH EAX                            ; 004774d9
    MOV EDX,dword ptr [0x0061b4d0]      ; 004774da | DAT_0061b4d0
    PUSH EDX                            ; 004774e0
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 004774e1
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004774e6
    RET                                 ; 004774e9

