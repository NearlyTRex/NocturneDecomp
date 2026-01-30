; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_game_cpp_FUN_004e2f10(void)
;
;
; Referenced Globals:
;   TerminatedCString s_Can_t_init_network_to_ho_0062d363
;   TerminatedCString s_msn_0062d384
;   TerminatedCString s_world_0062d38a
;   TerminatedCString s_Select_mission_to_play_0062d390
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CNetGame* g_CNetGamePtr = 02f7c740
;   CEditorTools g_CEditorToolsInstance
;   char g_CurrentSaveFile
;   CDemonMission g_CDemonMissionInstance
;   CNetGame g_CNetGameInstance
;   undefined4 g_CNetGameInstance.unk[0]
;
; Called Functions:
;   core_mission.cpp_CDemonMission_run_FUN_00524420
;   core_netgame.cpp_CNetGame_FUN_0053fd00
;   core_netgame.cpp_FUN_00541390
;   core_netgame.cpp_initializeNetworkToHost_FUN_0053f860
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004e2f10
        ;   Label: core_game.cpp_FUN_004e2f10
    PUSH EDI                            ; 004e2f11
    PUSH EBP                            ; 004e2f12
    MOV EDX,dword ptr [0x00680a00]      ; 004e2f13 | g_CNetGamePtr | g_CNetGameInstance
    PUSH EDX                            ; 004e2f19 | g_CNetGameInstance
    CALL core_netgame.cpp_initializeNetworkToHost_FUN_0053f860 ; 004e2f1a
        ;   XREF to: 0053f860 (UNCONDITIONAL_CALL)  ; int core_netgame.cpp_initializeNetworkToHost_FUN_0053f860()
    ADD ESP,0x4                         ; 004e2f1f
    TEST EAX,EAX                        ; 004e2f22
    JZ 0x004e2f81                       ; 004e2f24
        ;   XREF to: 004e2f81 (CONDITIONAL_JUMP)  ; LAB_004e2f81
    MOV EAX,[0x00680a00]                ; 004e2f26 | g_CNetGamePtr
    PUSH 0x0                            ; 004e2f2b
    ADD EAX,0x118                       ; 004e2f2d
    PUSH EAX                            ; 004e2f32 | g_CNetGameInstance.unk[0]
    PUSH 0x62d384                       ; 004e2f33 | = "*.msn"
    PUSH 0x62d38a                       ; 004e2f38 | = "world"
    PUSH 0x62d390                       ; 004e2f3d | = "Select mission to play"
    MOV ESI,dword ptr [0x00678a60]      ; 004e2f42 | g_CEditorToolsPtr
    PUSH ESI                            ; 004e2f48 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270 ; 004e2f49
        ;   XREF to: 0049f270 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270(CEditorTools * this_ptr, char * search_pattern, char * directory, char * target_filename, ...)
    ADD ESP,0x18                        ; 004e2f4e
    TEST EAX,EAX                        ; 004e2f51
    JZ 0x004e2fab                       ; 004e2f53
        ;   XREF to: 004e2fab (CONDITIONAL_JUMP)  ; LAB_004e2fab
    XOR AH,AH                           ; 004e2f55
    MOV byte ptr [0x02d82c80],AH        ; 004e2f57 | g_CurrentSaveFile
    MOV EDI,dword ptr [0x00680a00]      ; 004e2f5d | g_CNetGamePtr
        ;   Label: LAB_004e2f5d
    PUSH EDI                            ; 004e2f63 | g_CNetGameInstance
    CALL core_netgame.cpp_FUN_00541390  ; 004e2f64
        ;   XREF to: 00541390 (UNCONDITIONAL_CALL)  ; int core_netgame.cpp_FUN_00541390()
    ADD ESP,0x4                         ; 004e2f69
    TEST EAX,EAX                        ; 004e2f6c
    JZ 0x004e2fab                       ; 004e2f6e
        ;   XREF to: 004e2fab (CONDITIONAL_JUMP)  ; LAB_004e2fab
    MOV EBP,dword ptr [0x0067d550]      ; 004e2f70 | g_CDemonMissionPtr
    PUSH EBP                            ; 004e2f76 | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_run_FUN_00524420 ; 004e2f77
        ;   XREF to: 00524420 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_run_FUN_00524420(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 004e2f7c
    JMP 0x004e2f5d                      ; 004e2f7f
        ;   XREF to: 004e2f5d (UNCONDITIONAL_JUMP)  ; LAB_004e2f5d
    PUSH EBX                            ; 004e2f81
        ;   Label: LAB_004e2f81
    PUSH EAX                            ; 004e2f82
    MOV ECX,dword ptr [0x00680a00]      ; 004e2f83 | g_CNetGamePtr
    PUSH ECX                            ; 004e2f89 | g_CNetGameInstance
    CALL core_netgame.cpp_CNetGame_FUN_0053fd00 ; 004e2f8a
        ;   XREF to: 0053fd00 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_FUN_0053fd00(CNetGame * this_ptr)
    ADD ESP,0x8                         ; 004e2f8f
    PUSH 0x62d363                       ; 004e2f92 | = "Can't init network to host game."
    MOV EBX,dword ptr [0x00678a60]      ; 004e2f97 | g_CEditorToolsPtr
    PUSH EBX                            ; 004e2f9d | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004e2f9e
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004e2fa3
    POP EBX                             ; 004e2fa6
    POP EBP                             ; 004e2fa7
    POP EDI                             ; 004e2fa8
    POP ESI                             ; 004e2fa9
    RET                                 ; 004e2faa
    PUSH 0x1                            ; 004e2fab
        ;   Label: LAB_004e2fab
    MOV EAX,[0x00680a00]                ; 004e2fad | g_CNetGamePtr
    PUSH EAX                            ; 004e2fb2 | g_CNetGameInstance
    CALL core_netgame.cpp_CNetGame_FUN_0053fd00 ; 004e2fb3
        ;   XREF to: 0053fd00 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_FUN_0053fd00(CNetGame * this_ptr)
    ADD ESP,0x8                         ; 004e2fb8
    POP EBP                             ; 004e2fbb
    POP EDI                             ; 004e2fbc
    POP ESI                             ; 004e2fbd
    RET                                 ; 004e2fbe

