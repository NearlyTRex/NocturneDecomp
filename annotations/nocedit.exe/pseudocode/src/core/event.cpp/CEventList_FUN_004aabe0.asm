; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_event_cpp_CEventList_FUN_004aabe0(CEventList *this_ptr)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
;
; XREF[17]:
;   core_dest.cpp_FUN_0046f9b0 at 0046fafb
;   core_door.cpp_CDoor_process_FUN_004800c0 at 004801a0
;   core_door.cpp_FUN_0047fcf0 at 0047fd01
;   core_event.cpp_FUN_004b18e0 at 004b1917
;   core_filmreel.cpp_CFilmProjector_archive_FUN_004beb40 at 004bebea
;   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 at 004df54f
;   core_hero.cpp_CHero_FUN_004f2c40 at 004f2d4a
;   core_hostage.cpp_CHostage_FUN_004f63e0 at 004f6439
;   core_hostage.cpp_CHostage_process_FUN_004f4bd0 at 004f55b7
;   core_inv.cpp_CInventory_select_FUN_004ff800 at 004ffa96
;   ... and 7 more
;
; Referenced Globals:
;   undefined4 DAT_02d0a45c
;
; Called Functions:
;   core_event.cpp_CEventList_FUN_004aac00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aabe0
        ;   Label: core_event.cpp_CEventList_FUN_004aabe0
    MOV ECX,dword ptr [ESP + 0xc]       ; 004aabe1
    PUSH ECX                            ; 004aabe5
    MOV EBX,dword ptr [ESP + 0xc]       ; 004aabe6
    XOR EDX,EDX                         ; 004aabea
    PUSH EBX                            ; 004aabec
    MOV dword ptr [0x02d0a45c],EDX      ; 004aabed | DAT_02d0a45c
    CALL core_event.cpp_CEventList_FUN_004aac00 ; 004aabf3
        ;   XREF to: 004aac00 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_FUN_004aac00(CEventList * this_ptr)
    ADD ESP,0x8                         ; 004aabf8
    POP EBX                             ; 004aabfb
    RET                                 ; 004aabfc

