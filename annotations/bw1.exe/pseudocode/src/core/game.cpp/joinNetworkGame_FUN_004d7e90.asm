; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_joinNetworkGame_FUN_004d7e90(void)
;
;
; Referenced Globals:
;   CEditorTools* g_CEditorToolsPtr = 01c3eb54
;   undefined4 DAT_0061f650
;   CNetGame* g_CNetGamePtr = 01d51c20
;   undefined4 DAT_01cd05c0
;
; Called Functions:
;   core_mission.cpp_CDemonMission_run_FUN_0051bad0
;   core_netgame.cpp_CNetGame_disconnect_FUN_0052cab0
;   core_netgame.cpp_CNetGame_initializeNetworkToJoin_FUN_0052c6b0
;   core_netgame.cpp_CNetGame_runLobby_FUN_0052e120
;   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_00496150
;   support_trisock.cpp_parseIPAddress_FUN_0059c4d0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004d7e90
        ;   Label: core_game.cpp_joinNetworkGame_FUN_004d7e90
    PUSH EDI                            ; 004d7e91
    PUSH EBP                            ; 004d7e92
    SUB ESP,0x68                        ; 004d7e93
    PUSH 0x1                            ; 004d7e96
    PUSH 0x64                           ; 004d7e98
    LEA EAX,[ESP + 0x8]                 ; 004d7e9a
    PUSH EAX                            ; 004d7e9e
    MOV ECX,0x19                        ; 004d7e9f
    LEA EDI,[ESP + 0xc]                 ; 004d7ea4
    PUSH 0x5e336a                       ; 004d7ea8
    MOV EDX,dword ptr [0x0061abc0]      ; 004d7ead | g_CEditorToolsPtr
    MOV ESI,0x61db70                    ; 004d7eb3
    PUSH EDX                            ; 004d7eb8
    MOVSD.REP ES:EDI,ESI                ; 004d7eb9
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_00496150 ; 004d7ebb
        ;   XREF to: 00496150 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_00496150(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 004d7ec0
    TEST EAX,EAX                        ; 004d7ec3
    JNZ 0x004d7ece                      ; 004d7ec5
        ;   XREF to: 004d7ece (CONDITIONAL_JUMP)  ; LAB_004d7ece
    ADD ESP,0x68                        ; 004d7ec7
    POP EBP                             ; 004d7eca
    POP EDI                             ; 004d7ecb
    POP ESI                             ; 004d7ecc
    RET                                 ; 004d7ecd
    MOV EAX,ESP                         ; 004d7ece
        ;   Label: LAB_004d7ece
    PUSH EAX                            ; 004d7ed0
    LEA EAX,[ESP + 0x68]                ; 004d7ed1
    PUSH EAX                            ; 004d7ed5
    CALL support_trisock.cpp_parseIPAddress_FUN_0059c4d0 ; 004d7ed6
        ;   XREF to: 0059c4d0 (UNCONDITIONAL_CALL)  ; uint * support_trisock.cpp_parseIPAddress_FUN_0059c4d0(uint * result_ptr, char * dotted_decimal_string)
    ADD ESP,0x8                         ; 004d7edb
    PUSH EAX                            ; 004d7ede
    MOV ECX,dword ptr [0x00622580]      ; 004d7edf | g_CNetGamePtr
    PUSH ECX                            ; 004d7ee5
    CALL core_netgame.cpp_CNetGame_initializeNetworkToJoin_FUN_0052c6b0 ; 004d7ee6
        ;   XREF to: 0052c6b0 (UNCONDITIONAL_CALL)  ; int core_netgame.cpp_CNetGame_initializeNetworkToJoin_FUN_0052c6b0(CNetGame * this_ptr, uint32_t * server_ip)
    ADD ESP,0x8                         ; 004d7eeb
    TEST EAX,EAX                        ; 004d7eee
    JZ 0x004d7f1e                       ; 004d7ef0
        ;   XREF to: 004d7f1e (CONDITIONAL_JUMP)  ; LAB_004d7f1e
    XOR AH,AH                           ; 004d7ef2
    MOV byte ptr [0x01cd05c0],AH        ; 004d7ef4 | DAT_01cd05c0
    MOV ESI,dword ptr [0x00622580]      ; 004d7efa | g_CNetGamePtr
        ;   Label: LAB_004d7efa
    PUSH ESI                            ; 004d7f00
    CALL core_netgame.cpp_CNetGame_runLobby_FUN_0052e120 ; 004d7f01
        ;   XREF to: 0052e120 (UNCONDITIONAL_CALL)  ; int core_netgame.cpp_CNetGame_runLobby_FUN_0052e120(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 004d7f06
    TEST EAX,EAX                        ; 004d7f09
    JZ 0x004d7f37                       ; 004d7f0b
        ;   XREF to: 004d7f37 (CONDITIONAL_JUMP)  ; LAB_004d7f37
    MOV EBP,dword ptr [0x0061f650]      ; 004d7f0d | DAT_0061f650
    PUSH EBP                            ; 004d7f13
    CALL core_mission.cpp_CDemonMission_run_FUN_0051bad0 ; 004d7f14
        ;   XREF to: 0051bad0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_run_FUN_0051bad0(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 004d7f19
    JMP 0x004d7efa                      ; 004d7f1c
        ;   XREF to: 004d7efa (UNCONDITIONAL_JUMP)  ; LAB_004d7efa
    PUSH EBX                            ; 004d7f1e
        ;   Label: LAB_004d7f1e
    PUSH EAX                            ; 004d7f1f
    MOV EBX,dword ptr [0x00622580]      ; 004d7f20 | g_CNetGamePtr
    PUSH EBX                            ; 004d7f26
    CALL core_netgame.cpp_CNetGame_disconnect_FUN_0052cab0 ; 004d7f27
        ;   XREF to: 0052cab0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_disconnect_FUN_0052cab0(CNetGame * this_ptr, int perform_handshake)
    ADD ESP,0x8                         ; 004d7f2c
    POP EBX                             ; 004d7f2f
    ADD ESP,0x68                        ; 004d7f30
    POP EBP                             ; 004d7f33
    POP EDI                             ; 004d7f34
    POP ESI                             ; 004d7f35
    RET                                 ; 004d7f36
    PUSH 0x1                            ; 004d7f37
        ;   Label: LAB_004d7f37
    MOV EDI,dword ptr [0x00622580]      ; 004d7f39 | g_CNetGamePtr
    PUSH EDI                            ; 004d7f3f
    CALL core_netgame.cpp_CNetGame_disconnect_FUN_0052cab0 ; 004d7f40
        ;   XREF to: 0052cab0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_disconnect_FUN_0052cab0(CNetGame * this_ptr, int perform_handshake)
    ADD ESP,0x8                         ; 004d7f45
    ADD ESP,0x68                        ; 004d7f48
    POP EBP                             ; 004d7f4b
    POP EDI                             ; 004d7f4c
    POP ESI                             ; 004d7f4d
    RET                                 ; 004d7f4e

