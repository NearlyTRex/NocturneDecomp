; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_joinNetworkGame_FUN_004a5e40(void)
;
;
; Referenced Globals:
;   TerminatedCString s_Enter_Server_IP_00584442
;   CEditorTools* g_CEditorTools_PTR_005b6d50 = 01bcd074
;   TerminatedCString s_s_10_0_0_105_005b9568
;   CDemonMission* g_CDemonMission_PTR_005baf90 = 01cc9450
;   CNetGame* g_CNetGame_PTR_005bdee0 = 01cea280
;   undefined4 DAT_01c78598
;
; Called Functions:
;   core_mission.cpp_CDemonMission_run_FUN_004d9440
;   core_netgame.cpp_CNetGame_disconnect_FUN_004e9e90
;   core_netgame.cpp_CNetGame_initializeNetworkToJoin_FUN_004e9a90
;   core_netgame.cpp_CNetGame_runLobby_FUN_004eb520
;   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_00471600
;   support_trisock.cpp_parseIPAddress_FUN_00548af0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004a5e40
        ;   Label: core_game.cpp_joinNetworkGame_FUN_004a5e40
    PUSH EDI                            ; 004a5e41
    PUSH EBP                            ; 004a5e42
    SUB ESP,0x68                        ; 004a5e43
    PUSH 0x1                            ; 004a5e46
    PUSH 0x64                           ; 004a5e48
    LEA EAX,[ESP + 0x8]                 ; 004a5e4a
    PUSH EAX                            ; 004a5e4e
    MOV ECX,0x19                        ; 004a5e4f
    LEA EDI,[ESP + 0xc]                 ; 004a5e54
    PUSH 0x584442                       ; 004a5e58 | = "Enter Server IP"
    MOV EDX,dword ptr [0x005b6d50]      ; 004a5e5d | g_CEditorTools_PTR_005b6d50
    MOV ESI,0x5b9568                    ; 004a5e63 | = "10.0.0.105"
    PUSH EDX                            ; 004a5e68
    MOVSD.REP ES:EDI,ESI                ; 004a5e69
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_00471600 ; 004a5e6b
        ;   XREF to: 00471600 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_00471600(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 004a5e70
    TEST EAX,EAX                        ; 004a5e73
    JNZ 0x004a5e7e                      ; 004a5e75
        ;   XREF to: 004a5e7e (CONDITIONAL_JUMP)  ; LAB_004a5e7e
    ADD ESP,0x68                        ; 004a5e77
    POP EBP                             ; 004a5e7a
    POP EDI                             ; 004a5e7b
    POP ESI                             ; 004a5e7c
    RET                                 ; 004a5e7d
    MOV EAX,ESP                         ; 004a5e7e
        ;   Label: LAB_004a5e7e
    PUSH EAX                            ; 004a5e80
    LEA EAX,[ESP + 0x68]                ; 004a5e81
    PUSH EAX                            ; 004a5e85
    CALL support_trisock.cpp_parseIPAddress_FUN_00548af0 ; 004a5e86
        ;   XREF to: 00548af0 (UNCONDITIONAL_CALL)  ; uint * support_trisock.cpp_parseIPAddress_FUN_00548af0(uint * result_ptr, char * dotted_decimal_string)
    ADD ESP,0x8                         ; 004a5e8b
    PUSH EAX                            ; 004a5e8e
    MOV ECX,dword ptr [0x005bdee0]      ; 004a5e8f | g_CNetGame_PTR_005bdee0
    PUSH ECX                            ; 004a5e95
    CALL core_netgame.cpp_CNetGame_initializeNetworkToJoin_FUN_004e9a90 ; 004a5e96
        ;   XREF to: 004e9a90 (UNCONDITIONAL_CALL)  ; int core_netgame.cpp_CNetGame_initializeNetworkToJoin_FUN_004e9a90(CNetGame * this_ptr, uint32_t * server_ip)
    ADD ESP,0x8                         ; 004a5e9b
    TEST EAX,EAX                        ; 004a5e9e
    JZ 0x004a5ece                       ; 004a5ea0
        ;   XREF to: 004a5ece (CONDITIONAL_JUMP)  ; LAB_004a5ece
    XOR AH,AH                           ; 004a5ea2
    MOV byte ptr [0x01c78598],AH        ; 004a5ea4 | DAT_01c78598
    MOV ESI,dword ptr [0x005bdee0]      ; 004a5eaa | g_CNetGame_PTR_005bdee0
        ;   Label: LAB_004a5eaa
    PUSH ESI                            ; 004a5eb0
    CALL core_netgame.cpp_CNetGame_runLobby_FUN_004eb520 ; 004a5eb1
        ;   XREF to: 004eb520 (UNCONDITIONAL_CALL)  ; int core_netgame.cpp_CNetGame_runLobby_FUN_004eb520(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 004a5eb6
    TEST EAX,EAX                        ; 004a5eb9
    JZ 0x004a5ee7                       ; 004a5ebb
        ;   XREF to: 004a5ee7 (CONDITIONAL_JUMP)  ; LAB_004a5ee7
    MOV EBP,dword ptr [0x005baf90]      ; 004a5ebd | g_CDemonMission_PTR_005baf90
    PUSH EBP                            ; 004a5ec3
    CALL core_mission.cpp_CDemonMission_run_FUN_004d9440 ; 004a5ec4
        ;   XREF to: 004d9440 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_run_FUN_004d9440(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 004a5ec9
    JMP 0x004a5eaa                      ; 004a5ecc
        ;   XREF to: 004a5eaa (UNCONDITIONAL_JUMP)  ; LAB_004a5eaa
    PUSH EBX                            ; 004a5ece
        ;   Label: LAB_004a5ece
    PUSH EAX                            ; 004a5ecf
    MOV EBX,dword ptr [0x005bdee0]      ; 004a5ed0 | g_CNetGame_PTR_005bdee0
    PUSH EBX                            ; 004a5ed6
    CALL core_netgame.cpp_CNetGame_disconnect_FUN_004e9e90 ; 004a5ed7
        ;   XREF to: 004e9e90 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_disconnect_FUN_004e9e90(CNetGame * this_ptr, int perform_handshake)
    ADD ESP,0x8                         ; 004a5edc
    POP EBX                             ; 004a5edf
    ADD ESP,0x68                        ; 004a5ee0
    POP EBP                             ; 004a5ee3
    POP EDI                             ; 004a5ee4
    POP ESI                             ; 004a5ee5
    RET                                 ; 004a5ee6
    PUSH 0x1                            ; 004a5ee7
        ;   Label: LAB_004a5ee7
    MOV EDI,dword ptr [0x005bdee0]      ; 004a5ee9 | g_CNetGame_PTR_005bdee0
    PUSH EDI                            ; 004a5eef
    CALL core_netgame.cpp_CNetGame_disconnect_FUN_004e9e90 ; 004a5ef0
        ;   XREF to: 004e9e90 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_disconnect_FUN_004e9e90(CNetGame * this_ptr, int perform_handshake)
    ADD ESP,0x8                         ; 004a5ef5
    ADD ESP,0x68                        ; 004a5ef8
    POP EBP                             ; 004a5efb
    POP EDI                             ; 004a5efc
    POP ESI                             ; 004a5efd
    RET                                 ; 004a5efe

