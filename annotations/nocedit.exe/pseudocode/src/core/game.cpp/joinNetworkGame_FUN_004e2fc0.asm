; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_joinNetworkGame_FUN_004e2fc0(void)
;
; Local Variables:
; char[100]        Stack[-0x74]:100  local_74
; uint             Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   TerminatedCString s_Enter_Server_IP_0062d3a7
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   char[100] g_IpAddress
;   undefined4 g_IpAddress+4
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CNetGame* g_CNetGamePtr = 02f7c740
;   CEditorTools g_CEditorToolsInstance
;   char[256] g_CurrentSaveFile
;   CDemonMission g_CDemonMissionInstance
;   CNetGame g_CNetGameInstance
;
; Called Functions:
;   core_mission.cpp_CDemonMission_run_FUN_00524420
;   core_netgame.cpp_CNetGame_disconnect_FUN_0053fd00
;   core_netgame.cpp_CNetGame_initializeNetworkToJoin_FUN_0053f900
;   core_netgame.cpp_CNetGame_runLobby_FUN_00541390
;   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
;   support_trisock.cpp_parseIPAddress_FUN_005e1700
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004e2fc0
        ;   Label: core_game.cpp_joinNetworkGame_FUN_004e2fc0
    PUSH EDI                            ; 004e2fc1
    PUSH EBP                            ; 004e2fc2
    SUB ESP,0x68                        ; 004e2fc3
    PUSH 0x1                            ; 004e2fc6
    PUSH 0x64                           ; 004e2fc8
    LEA EAX,[ESP + 0x8]                 ; 004e2fca
    PUSH EAX                            ; 004e2fce
    MOV ECX,0x19                        ; 004e2fcf
    LEA EDI,[ESP + 0xc]                 ; 004e2fd4
    PUSH 0x62d3a7                       ; 004e2fd8 | = "Enter Server IP"
    MOV EDX,dword ptr [0x00678a60]      ; 004e2fdd | g_CEditorToolsPtr
    MOV ESI,0x67b868                    ; 004e2fe3 | g_IpAddress
    PUSH EDX                            ; 004e2fe8 | g_CEditorToolsInstance
    MOVSD.REP ES:EDI,ESI                ; 004e2fe9 | g_IpAddress | g_IpAddress+4
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 004e2feb
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 004e2ff0
    TEST EAX,EAX                        ; 004e2ff3
    JNZ 0x004e2ffe                      ; 004e2ff5
        ;   XREF to: 004e2ffe (CONDITIONAL_JUMP)  ; LAB_004e2ffe
    ADD ESP,0x68                        ; 004e2ff7
    POP EBP                             ; 004e2ffa
    POP EDI                             ; 004e2ffb
    POP ESI                             ; 004e2ffc
    RET                                 ; 004e2ffd
    MOV EAX,ESP                         ; 004e2ffe
        ;   Label: LAB_004e2ffe
    PUSH EAX                            ; 004e3000
    LEA EAX,[ESP + 0x68]                ; 004e3001
    PUSH EAX                            ; 004e3005
    CALL support_trisock.cpp_parseIPAddress_FUN_005e1700 ; 004e3006
        ;   XREF to: 005e1700 (UNCONDITIONAL_CALL)  ; uint * support_trisock.cpp_parseIPAddress_FUN_005e1700(uint * result_ptr, char * dotted_decimal_string)
    ADD ESP,0x8                         ; 004e300b
    PUSH EAX                            ; 004e300e
    MOV ECX,dword ptr [0x00680a00]      ; 004e300f | g_CNetGamePtr | g_CNetGameInstance
    PUSH ECX                            ; 004e3015 | g_CNetGameInstance
    CALL core_netgame.cpp_CNetGame_initializeNetworkToJoin_FUN_0053f900 ; 004e3016
        ;   XREF to: 0053f900 (UNCONDITIONAL_CALL)  ; int core_netgame.cpp_CNetGame_initializeNetworkToJoin_FUN_0053f900(CNetGame * this_ptr, uint32_t * server_ip)
    ADD ESP,0x8                         ; 004e301b
    TEST EAX,EAX                        ; 004e301e
    JZ 0x004e304e                       ; 004e3020
        ;   XREF to: 004e304e (CONDITIONAL_JUMP)  ; LAB_004e304e
    XOR AH,AH                           ; 004e3022
    MOV byte ptr [0x02d82c80],AH        ; 004e3024 | g_CurrentSaveFile
    MOV ESI,dword ptr [0x00680a00]      ; 004e302a | g_CNetGamePtr
        ;   Label: LAB_004e302a
    PUSH ESI                            ; 004e3030 | g_CNetGameInstance
    CALL core_netgame.cpp_CNetGame_runLobby_FUN_00541390 ; 004e3031
        ;   XREF to: 00541390 (UNCONDITIONAL_CALL)  ; int core_netgame.cpp_CNetGame_runLobby_FUN_00541390(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 004e3036
    TEST EAX,EAX                        ; 004e3039
    JZ 0x004e3067                       ; 004e303b
        ;   XREF to: 004e3067 (CONDITIONAL_JUMP)  ; LAB_004e3067
    MOV EBP,dword ptr [0x0067d550]      ; 004e303d | g_CDemonMissionPtr
    PUSH EBP                            ; 004e3043 | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_run_FUN_00524420 ; 004e3044
        ;   XREF to: 00524420 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_run_FUN_00524420(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 004e3049
    JMP 0x004e302a                      ; 004e304c
        ;   XREF to: 004e302a (UNCONDITIONAL_JUMP)  ; LAB_004e302a
    PUSH EBX                            ; 004e304e
        ;   Label: LAB_004e304e
    PUSH EAX                            ; 004e304f
    MOV EBX,dword ptr [0x00680a00]      ; 004e3050 | g_CNetGamePtr
    PUSH EBX                            ; 004e3056 | g_CNetGameInstance
    CALL core_netgame.cpp_CNetGame_disconnect_FUN_0053fd00 ; 004e3057
        ;   XREF to: 0053fd00 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_disconnect_FUN_0053fd00(CNetGame * this_ptr, int perform_handshake)
    ADD ESP,0x8                         ; 004e305c
    POP EBX                             ; 004e305f
    ADD ESP,0x68                        ; 004e3060
    POP EBP                             ; 004e3063
    POP EDI                             ; 004e3064
    POP ESI                             ; 004e3065
    RET                                 ; 004e3066
    PUSH 0x1                            ; 004e3067
        ;   Label: LAB_004e3067
    MOV EDI,dword ptr [0x00680a00]      ; 004e3069 | g_CNetGamePtr
    PUSH EDI                            ; 004e306f | g_CNetGameInstance
    CALL core_netgame.cpp_CNetGame_disconnect_FUN_0053fd00 ; 004e3070
        ;   XREF to: 0053fd00 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_disconnect_FUN_0053fd00(CNetGame * this_ptr, int perform_handshake)
    ADD ESP,0x8                         ; 004e3075
    ADD ESP,0x68                        ; 004e3078
    POP EBP                             ; 004e307b
    POP EDI                             ; 004e307c
    POP ESI                             ; 004e307d
    RET                                 ; 004e307e

