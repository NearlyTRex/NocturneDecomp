; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_loadItems_FUN_004dc810(CInventory *this_ptr)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_mission.cpp_CDemonMission_readMissionFile_FUN_004fb590 at 004fb9aa
;
; Referenced Globals:
;   undefined4 DAT_00618170
;
; Called Functions:
;   core_mission.cpp_CDemonMission_removeActorFromList_FUN_004fc270
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dc810
        ;   Label: core_inv.cpp_CInventory_loadItems_FUN_004dc810
    PUSH EDI                            ; 004dc811
    PUSH EBP                            ; 004dc812
    MOV EDI,dword ptr [ESP + 0x10]      ; 004dc813
    MOV EDX,dword ptr [EDI + 0x10]      ; 004dc817
    XOR EBX,EBX                         ; 004dc81a
    TEST EDX,EDX                        ; 004dc81c
    JLE 0x004dc842                      ; 004dc81e
        ;   XREF to: 004dc842 (CONDITIONAL_JUMP)  ; LAB_004dc842
    PUSH ESI                            ; 004dc820
    MOV ESI,EDI                         ; 004dc821
    MOV ECX,dword ptr [ESI + 0x14]      ; 004dc823
        ;   Label: LAB_004dc823
    PUSH ECX                            ; 004dc826
    MOV EBP,dword ptr [0x00618170]      ; 004dc827 | DAT_00618170
    PUSH EBP                            ; 004dc82d
    ADD ESI,0x4                         ; 004dc82e
    INC EBX                             ; 004dc831
    CALL core_mission.cpp_CDemonMission_removeActorFromList_FUN_004fc270 ; 004dc832
        ;   XREF to: 004fc270 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_removeActorFromList_FUN_004fc270(CDemonMission * this_ptr, CDemonActor * actor_ptr)
    MOV EAX,dword ptr [EDI + 0x10]      ; 004dc837
    ADD ESP,0x8                         ; 004dc83a
    CMP EBX,EAX                         ; 004dc83d
    JL 0x004dc823                       ; 004dc83f
        ;   XREF to: 004dc823 (CONDITIONAL_JUMP)  ; LAB_004dc823
    POP ESI                             ; 004dc841
    MOV dword ptr [EDI + 0x460],0x0     ; 004dc842
        ;   Label: LAB_004dc842
    POP EBP                             ; 004dc84c
    POP EDI                             ; 004dc84d
    POP EBX                             ; 004dc84e
    RET                                 ; 004dc84f

