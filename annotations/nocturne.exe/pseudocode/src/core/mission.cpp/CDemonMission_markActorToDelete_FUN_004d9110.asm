; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_markActorToDelete_FUN_004d9110(CDemonMission *this_ptr,CDemonActor *actor,uint flags)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; uint             Stack[0xc]:4   flags
;
; XREF[8]:
;   core_boneguy.cpp_CBoneGuy_process_FUN_00418a00 at 00418ced
;   core_crate.cpp_CCrate_explode_FUN_0043cdb0 at 0043ce46
;   core_flamecan.cpp_CFlameCan_process_FUN_0048e5a0 at 0048e61f
;   core_hiram.cpp_CHiram_process_FUN_004b6770 at 004b6802
;   core_inv.cpp_CInventory_addItem_FUN_004bf360 at 004c00bd
;   core_mimic.cpp_CMimic_processMorph_FUN_004d5e20 at 004d5ee4
;   core_passngr.cpp_CPassenger_process_FUN_004ef890 at 004ef9d1
;   core_werewolf.cpp_CWerewolf_process_FUN_00555c60 at 00555da8
;
; Referenced Globals:
;   TerminatedCString s_core_mission_cpp_00589cfb
;   TerminatedCString s_CDemonMission_markActorT_00589d0f
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004d9110
        ;   Label: core_mission.cpp_CDemonMission_markActorToDelete_FUN_004d9110
    MOV EDX,dword ptr [EAX + 0x52c]     ; 004d9114
    MOV ECX,dword ptr [ESP + 0x8]       ; 004d911a
    MOV dword ptr [EAX + EDX*0x4 + 0x530],ECX ; 004d911e
    MOV EDX,dword ptr [EAX + 0x52c]     ; 004d9125
    MOV ECX,dword ptr [ESP + 0xc]       ; 004d912b
    MOV dword ptr [EAX + EDX*0x4 + 0x6c0],ECX ; 004d912f
    MOV EDX,dword ptr [EAX + 0x52c]     ; 004d9136
    INC EDX                             ; 004d913c
    MOV dword ptr [EAX + 0x52c],EDX     ; 004d913d
    CMP EDX,0x64                        ; 004d9143
    JGE 0x004d9149                      ; 004d9146
        ;   XREF to: 004d9149 (CONDITIONAL_JUMP)  ; LAB_004d9149
    RET                                 ; 004d9148
    PUSH ESI                            ; 004d9149
        ;   Label: LAB_004d9149
    PUSH EBX                            ; 004d914a
    MOV EBX,0x589cfb                    ; 004d914b | = "..\\core\\mission.cpp"
    MOV ESI,0x408                       ; 004d9150
    PUSH 0x589d0f                       ; 004d9155 | = "CDemonMission::markActorToDelete - To..."
    MOV dword ptr [0x01cc4800],EBX      ; 004d915a | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ESI      ; 004d9160 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 004d9166
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 004d916b
    POP EBX                             ; 004d916e
    POP ESI                             ; 004d916f
    RET                                 ; 004d9170

