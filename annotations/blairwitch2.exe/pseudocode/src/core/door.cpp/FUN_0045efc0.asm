; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_door_cpp_FUN_0045efc0(CDoor *this_ptr)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_charactr.cpp_CCharacter_clearDoorTarget_FUN_00428ac0 at 00428ad2
;   core_hero.cpp_CHero_doHeroAction_FUN_004d03b0 at 004d0524
;   core_hero.cpp_CHero_tryOpenDoor_FUN_004cf230 at 004cf271
;
; Referenced Globals:
;   undefined4 DAT_006141f0
;
; Called Functions:
;   core_event.cpp_CEventList_executeCommands_FUN_004894f0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0045efc0
        ;   Label: core_door.cpp_FUN_0045efc0
    ADD EAX,0x444                       ; 0045efc4
    PUSH EAX                            ; 0045efc9
    MOV EDX,dword ptr [0x006141f0]      ; 0045efca | DAT_006141f0
    PUSH EDX                            ; 0045efd0
    CALL core_event.cpp_CEventList_executeCommands_FUN_004894f0 ; 0045efd1
        ;   XREF to: 004894f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004894f0(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 0045efd6
    RET                                 ; 0045efd9

