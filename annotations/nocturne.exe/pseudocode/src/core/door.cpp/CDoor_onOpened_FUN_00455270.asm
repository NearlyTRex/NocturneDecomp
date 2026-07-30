; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_door_cpp_CDoor_onOpened_FUN_00455270(CDoor *this_ptr)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_charactr.cpp_CCharacter_clearDoorTarget_FUN_00428ef0 at 00428f02
;   core_hero.cpp_CHero_tryOpenDoor_FUN_004b5270 at 004b52b1
;   core_hero.cpp_FUN_004b5110 at 004b523a
;
; Referenced Globals:
;   undefined4 DAT_005b7650
;
; Called Functions:
;   core_event.cpp_CEventList_executeCommands_FUN_0047ab70
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00455270
        ;   Label: core_door.cpp_CDoor_onOpened_FUN_00455270
    ADD EAX,0x2e0                       ; 00455274
    PUSH EAX                            ; 00455279
    MOV EDX,dword ptr [0x005b7650]      ; 0045527a | DAT_005b7650
    PUSH EDX                            ; 00455280
    CALL core_event.cpp_CEventList_executeCommands_FUN_0047ab70 ; 00455281
        ;   XREF to: 0047ab70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0047ab70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 00455286
    RET                                 ; 00455289

