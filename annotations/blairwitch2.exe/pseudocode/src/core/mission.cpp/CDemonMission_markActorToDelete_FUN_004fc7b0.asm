; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_markActorToDelete_FUN_004fc7b0(CDemonMission *this_ptr,CDemonActor *param_2,uint param_3)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; undefined4       Stack[0x8]:4   param_2
; undefined4       Stack[0xc]:4   param_3
;
; XREF[10]:
;   core_boneguy.cpp_CBoneGuy_process_FUN_004186c0 at 004189ec
;   core_construc.cpp_CConstruct_process_FUN_00436e80 at 004372b3
;   core_crate.cpp_FUN_0043a350 at 0043a3f6
;   core_flamecan.cpp_CFlameCan_process_FUN_004a0920 at 004a099f
;   core_helldog.cpp_CDog_processChaseFoodState_FUN_005ac0c0 at 005ac1d5
;   core_hiram.cpp_CHiram_process_FUN_004d1070 at 004d1102
;   core_inv.cpp_FUN_004dadb0 at 004db4cb
;   core_mimic.cpp_CMimic_processMorph_FUN_004f1e90 at 004f1f54
;   core_passngr.cpp_CPassenger_process_FUN_005117a0 at 005118e1
;   core_werewolf.cpp_CWerewolf_process_FUN_0058b950 at 0058bac9
;
; Referenced Globals:
;   TerminatedCString s_core_mission_cpp_005de7c9
;   TerminatedCString s_CDemonMission_markActorT_005de7dd
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004fc7b0
        ;   Label: core_mission.cpp_CDemonMission_markActorToDelete_FUN_004fc7b0
    MOV EDX,dword ptr [EAX + 0x112c]    ; 004fc7b4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004fc7ba
    MOV dword ptr [EAX + EDX*0x4 + 0x1130],ECX ; 004fc7be
    MOV EDX,dword ptr [EAX + 0x112c]    ; 004fc7c5
    MOV ECX,dword ptr [ESP + 0xc]       ; 004fc7cb
    MOV dword ptr [EAX + EDX*0x4 + 0x12c0],ECX ; 004fc7cf
    MOV EDX,dword ptr [EAX + 0x112c]    ; 004fc7d6
    INC EDX                             ; 004fc7dc
    MOV dword ptr [EAX + 0x112c],EDX    ; 004fc7dd
    CMP EDX,0x64                        ; 004fc7e3
    JGE 0x004fc7e9                      ; 004fc7e6
        ;   XREF to: 004fc7e9 (CONDITIONAL_JUMP)  ; LAB_004fc7e9
    RET                                 ; 004fc7e8
    PUSH ESI                            ; 004fc7e9
        ;   Label: LAB_004fc7e9
    PUSH EBX                            ; 004fc7ea
    MOV EBX,0x5de7c9                    ; 004fc7eb | = "..\\core\\mission.cpp"
    MOV ESI,0x446                       ; 004fc7f0
    PUSH 0x5de7dd                       ; 004fc7f5 | = "CDemonMission::markActorToDelete - To..."
    MOV dword ptr [0x01d046a0],EBX      ; 004fc7fa | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 004fc800 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004fc806
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004fc80b
    POP EBX                             ; 004fc80e
    POP ESI                             ; 004fc80f
    RET                                 ; 004fc810

