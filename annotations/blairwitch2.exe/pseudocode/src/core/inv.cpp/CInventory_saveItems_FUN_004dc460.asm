; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_saveItems_FUN_004dc460(CInventory *this_ptr,_FILE *file_handle)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; XREF[2]:
;   core_inv.cpp_CInventory_save_FUN_004dc2c0 at 004dc3df
;   core_mission.cpp_CDemonMission_writeFile_FUN_004fbce0 at 004fc033
;
; Referenced Globals:
;   TerminatedCString s_s_s_s_005db877
;   undefined1 DAT_00609590
;
; Called Functions:
;   core_actor.cpp_FUN_00408a50
;   crt_unknown.c_FUN_005b8010
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004dc460
        ;   Label: core_inv.cpp_CInventory_saveItems_FUN_004dc460
    PUSH EDI                            ; 004dc461
    PUSH EBP                            ; 004dc462
    MOV EDI,dword ptr [ESP + 0x10]      ; 004dc463
    MOV EBP,dword ptr [ESP + 0x14]      ; 004dc467
    MOV EDX,dword ptr [EDI + 0x10]      ; 004dc46b
    XOR ESI,ESI                         ; 004dc46e
    TEST EDX,EDX                        ; 004dc470
    JLE 0x004dc4a4                      ; 004dc472
        ;   XREF to: 004dc4a4 (CONDITIONAL_JUMP)  ; LAB_004dc4a4
    PUSH EBX                            ; 004dc474
    MOV EBX,EDI                         ; 004dc475
    MOV ECX,dword ptr [EBX + 0x14]      ; 004dc477
        ;   Label: LAB_004dc477
    PUSH ECX                            ; 004dc47a
    PUSH ECX                            ; 004dc47b
    CALL core_actor.cpp_FUN_00408a50    ; 004dc47c
        ;   XREF to: 00408a50 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408a50()
    ADD ESP,0x4                         ; 004dc481
    PUSH EAX                            ; 004dc484
    PUSH 0x609590                       ; 004dc485 | DAT_00609590
    PUSH 0x5db877                       ; 004dc48a | = "%s%s \"%s\"\n"
    PUSH EBP                            ; 004dc48f
    ADD EBX,0x4                         ; 004dc490
    INC ESI                             ; 004dc493
    CALL crt_unknown.c_FUN_005b8010     ; 004dc494
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    MOV EDX,dword ptr [EDI + 0x10]      ; 004dc499
    ADD ESP,0x14                        ; 004dc49c
    CMP ESI,EDX                         ; 004dc49f
    JL 0x004dc477                       ; 004dc4a1
        ;   XREF to: 004dc477 (CONDITIONAL_JUMP)  ; LAB_004dc477
    POP EBX                             ; 004dc4a3
    POP EBP                             ; 004dc4a4
        ;   Label: LAB_004dc4a4
    POP EDI                             ; 004dc4a5
    POP ESI                             ; 004dc4a6
    RET                                 ; 004dc4a7

