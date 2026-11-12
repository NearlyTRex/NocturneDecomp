; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_loadItems_FUN_004dca90(CInventory *this_ptr)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_mission.cpp_CDemonMission_readMissionFile_FUN_004f5cc0 at 004f60da
;
; Referenced Globals:
;   undefined4 DAT_00600530
;
; Called Functions:
;   core_mission.cpp_CDemonMission_removeActorFromList_FUN_004f69a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dca90
        ;   Label: core_inv.cpp_CInventory_loadItems_FUN_004dca90
    PUSH EDI                            ; 004dca91
    PUSH EBP                            ; 004dca92
    MOV EDI,dword ptr [ESP + 0x10]      ; 004dca93
    MOV EDX,dword ptr [EDI + 0x10]      ; 004dca97
    XOR EBX,EBX                         ; 004dca9a
    TEST EDX,EDX                        ; 004dca9c
    JLE 0x004dcac2                      ; 004dca9e
        ;   XREF to: 004dcac2 (CONDITIONAL_JUMP)  ; LAB_004dcac2
    PUSH ESI                            ; 004dcaa0
    MOV ESI,EDI                         ; 004dcaa1
    MOV ECX,dword ptr [ESI + 0x14]      ; 004dcaa3
        ;   Label: LAB_004dcaa3
    PUSH ECX                            ; 004dcaa6
    MOV EBP,dword ptr [0x00600530]      ; 004dcaa7 | DAT_00600530
    PUSH EBP                            ; 004dcaad
    ADD ESI,0x4                         ; 004dcaae
    INC EBX                             ; 004dcab1
    CALL core_mission.cpp_CDemonMission_removeActorFromList_FUN_004f69a0 ; 004dcab2
        ;   XREF to: 004f69a0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_removeActorFromList_FUN_004f69a0(CDemonMission * this_ptr, CDemonActor * actor_ptr)
    MOV EAX,dword ptr [EDI + 0x10]      ; 004dcab7
    ADD ESP,0x8                         ; 004dcaba
    CMP EBX,EAX                         ; 004dcabd
    JL 0x004dcaa3                       ; 004dcabf
        ;   XREF to: 004dcaa3 (CONDITIONAL_JUMP)  ; LAB_004dcaa3
    POP ESI                             ; 004dcac1
    MOV dword ptr [EDI + 0x458],0x0     ; 004dcac2
        ;   Label: LAB_004dcac2
    POP EBP                             ; 004dcacc
    POP EDI                             ; 004dcacd
    POP EBX                             ; 004dcace
    RET                                 ; 004dcacf

