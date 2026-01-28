; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
;
; XREF[8]:
;   core_boneguy.cpp_FUN_0041bf90 at 0041c27d
;   core_crate.cpp_FUN_00448a70 at 00448b06
;   core_flamecan.cpp_FUN_004cb390 at 004cb40f
;   core_hiram.cpp_FUN_004f4550 at 004f45e2
;   core_inv.cpp_CInventory_addItem_FUN_004fd600 at 004fe741
;   core_mimic.cpp_CMimic_processMorph_FUN_00520ba0 at 00520c64
;   core_passngr.cpp_FUN_00545ef0 at 00546031
;   core_werewolf.cpp_CWerewolf_process_FUN_005efde0 at 005eff28
;
; Referenced Globals:
;   TerminatedCString s_core_mission_cpp_0063919e
;   TerminatedCString s_core_mission_cpp_006391b2
;   TerminatedCString s_CDemonMission_markActorT_006391c6
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005240a0
        ;   Label: core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0
    PUSH EBP                            ; 005240a1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005240a2
    PUSH 0x403                          ; 005240a6
    PUSH 0x63919e                       ; 005240ab | = "..\\core\\mission.cpp"
    MOV EDX,dword ptr [ESP + 0x18]      ; 005240b0
    PUSH EDX                            ; 005240b4
    CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 ; 005240b5
        ;   XREF to: 0040ac80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
    ADD ESP,0xc                         ; 005240ba
    MOV EAX,dword ptr [EBX + 0x560]     ; 005240bd
    MOV EDX,dword ptr [ESP + 0x10]      ; 005240c3
    MOV dword ptr [EBX + EAX*0x4 + 0x564],EDX ; 005240c7
    MOV EAX,dword ptr [EBX + 0x560]     ; 005240ce
    MOV EDX,dword ptr [ESP + 0x14]      ; 005240d4
    MOV dword ptr [EBX + EAX*0x4 + 0x6f4],EDX ; 005240d8
    MOV ECX,dword ptr [EBX + 0x560]     ; 005240df
    INC ECX                             ; 005240e5
    MOV dword ptr [EBX + 0x560],ECX     ; 005240e6
    CMP ECX,0x64                        ; 005240ec
    JGE 0x005240f4                      ; 005240ef
        ;   XREF to: 005240f4 (CONDITIONAL_JUMP)  ; LAB_005240f4
    POP EBP                             ; 005240f1
    POP EBX                             ; 005240f2
    RET                                 ; 005240f3
    PUSH EDI                            ; 005240f4
        ;   Label: LAB_005240f4
    MOV EDI,0x6391b2                    ; 005240f5 | = "..\\core\\mission.cpp"
    MOV EBP,0x408                       ; 005240fa
    PUSH 0x6391c6                       ; 005240ff | = "CDemonMission::markActorToDelete - To..."
    MOV dword ptr [0x02f0ca48],EDI      ; 00524104 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 0052410a | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00524110
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00524115
    POP EDI                             ; 00524118
    POP EBP                             ; 00524119
    POP EBX                             ; 0052411a
    RET                                 ; 0052411b

