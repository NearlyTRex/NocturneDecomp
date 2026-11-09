; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_CEventList_executeCommands_FUN_004a1b70(CEventList *this_ptr,char *commands)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   commands
;
; XREF[38]:
;   core_actor.cpp_FUN_0040c870 at 0040c921
;   core_carved.cpp_FUN_00428ae0 at 00429b2d
;   core_carved.cpp_FUN_0042b850 at 0042b970
;   core_charactr.cpp_FUN_004319e0 at 00431ba3
;   core_constrct.cpp_FUN_00445cb0 at 004461bf
;   core_dest.cpp_FUN_0045d2a0 at 0045d437
;   core_doc.cpp_FUN_004737b0 at 004738af
;   core_door.cpp_CDoor_onOpened_FUN_004774d0 at 004774e1
;   core_door.cpp_FUN_00477ab0 at 00477b7f
;   core_enemy.cpp_FUN_004a0f00 at 004a0f4c
;   ... and 28 more
;
; Referenced Globals:
;   undefined4 DAT_01c56ecc
;
; Called Functions:
;   core_event.cpp_CEventList_executeCommandString_FUN_004a1b90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a1b70
        ;   Label: core_event.cpp_CEventList_executeCommands_FUN_004a1b70
    MOV ECX,dword ptr [ESP + 0xc]       ; 004a1b71
    PUSH ECX                            ; 004a1b75
    MOV EBX,dword ptr [ESP + 0xc]       ; 004a1b76
    XOR EDX,EDX                         ; 004a1b7a
    PUSH EBX                            ; 004a1b7c
    MOV dword ptr [0x01c56ecc],EDX      ; 004a1b7d | DAT_01c56ecc
    CALL core_event.cpp_CEventList_executeCommandString_FUN_004a1b90 ; 004a1b83
        ;   XREF to: 004a1b90 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommandString_FUN_004a1b90(CEventList * this_ptr, char * command_string)
    ADD ESP,0x8                         ; 004a1b88
    POP EBX                             ; 004a1b8b
    RET                                 ; 004a1b8c

