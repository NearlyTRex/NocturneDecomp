; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_loadItems_FUN_004ff740(CInventory *this_ptr)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_mission.cpp_CDemonMission_readMissionFile_FUN_00522eb0 at 005232be
;
; Referenced Globals:
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CDemonMission g_CDemonMissionInstance
;
; Called Functions:
;   core_mission.cpp_CDemonMission_removeActorFromList_FUN_00523be0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ff740
        ;   Label: core_inv.cpp_CInventory_loadItems_FUN_004ff740
    PUSH EDI                            ; 004ff741
    PUSH EBP                            ; 004ff742
    MOV EDI,dword ptr [ESP + 0x10]      ; 004ff743
    MOV EDX,dword ptr [EDI + 0x8]       ; 004ff747
    XOR EBX,EBX                         ; 004ff74a
    TEST EDX,EDX                        ; 004ff74c
    JLE 0x004ff772                      ; 004ff74e
        ;   XREF to: 004ff772 (CONDITIONAL_JUMP)  ; LAB_004ff772
    PUSH ESI                            ; 004ff750
    MOV ESI,EDI                         ; 004ff751
    MOV ECX,dword ptr [ESI + 0xc]       ; 004ff753
        ;   Label: LAB_004ff753
    PUSH ECX                            ; 004ff756
    MOV EBP,dword ptr [0x0067d550]      ; 004ff757 | g_CDemonMissionPtr
    PUSH EBP                            ; 004ff75d | g_CDemonMissionInstance
    ADD ESI,0x4                         ; 004ff75e
    INC EBX                             ; 004ff761
    CALL core_mission.cpp_CDemonMission_removeActorFromList_FUN_00523be0 ; 004ff762
        ;   XREF to: 00523be0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_removeActorFromList_FUN_00523be0(CDemonMission * this_ptr, CDemonActor * actor_ptr)
    MOV EAX,dword ptr [EDI + 0x8]       ; 004ff767
    ADD ESP,0x8                         ; 004ff76a
    CMP EBX,EAX                         ; 004ff76d
    JL 0x004ff753                       ; 004ff76f
        ;   XREF to: 004ff753 (CONDITIONAL_JUMP)  ; LAB_004ff753
    POP ESI                             ; 004ff771
    MOV dword ptr [EDI + 0x450],0x0     ; 004ff772
        ;   Label: LAB_004ff772
    POP EBP                             ; 004ff77c
    POP EDI                             ; 004ff77d
    POP EBX                             ; 004ff77e
    RET                                 ; 004ff77f

