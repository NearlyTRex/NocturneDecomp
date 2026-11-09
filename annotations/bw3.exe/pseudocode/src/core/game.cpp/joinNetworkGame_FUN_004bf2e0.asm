; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_joinNetworkGame_FUN_004bf2e0(void)
;
;
; Referenced Globals:
;   CEditorTools* g_CEditorToolsPtr = 01c5b0e4
;   undefined4 DAT_00600530
;   CNetGame* g_CNetGamePtr = 01da62f0
;   undefined4 DAT_01d225c8
;
; Called Functions:
;   core_mission.cpp_CDemonMission_run_FUN_004f72a0
;   core_netgame.cpp_CNetGame_disconnect_FUN_005043b0
;   core_netgame.cpp_CNetGame_initializeNetworkToJoin_FUN_00503fb0
;   core_netgame.cpp_CNetGame_runLobby_FUN_00505a30
;   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_0047ecf0
;   support_trisock.cpp_parseIPAddress_FUN_0056f4c0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004bf2e0
        ;   Label: core_game.cpp_joinNetworkGame_FUN_004bf2e0
    PUSH EDI                            ; 004bf2e1
    PUSH EBP                            ; 004bf2e2
    SUB ESP,0x68                        ; 004bf2e3
    PUSH 0x1                            ; 004bf2e6
    PUSH 0x64                           ; 004bf2e8
    LEA EAX,[ESP + 0x8]                 ; 004bf2ea
    PUSH EAX                            ; 004bf2ee
    MOV ECX,0x19                        ; 004bf2ef
    LEA EDI,[ESP + 0xc]                 ; 004bf2f4
    PUSH 0x5c396e                       ; 004bf2f8
    MOV EDX,dword ptr [0x005fb140]      ; 004bf2fd | g_CEditorToolsPtr
    MOV ESI,0x5febf0                    ; 004bf303
    PUSH EDX                            ; 004bf308
    MOVSD.REP ES:EDI,ESI                ; 004bf309
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_0047ecf0 ; 004bf30b
        ;   XREF to: 0047ecf0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_0047ecf0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 004bf310
    TEST EAX,EAX                        ; 004bf313
    JNZ 0x004bf31e                      ; 004bf315
        ;   XREF to: 004bf31e (CONDITIONAL_JUMP)  ; LAB_004bf31e
    ADD ESP,0x68                        ; 004bf317
    POP EBP                             ; 004bf31a
    POP EDI                             ; 004bf31b
    POP ESI                             ; 004bf31c
    RET                                 ; 004bf31d
    MOV EAX,ESP                         ; 004bf31e
        ;   Label: LAB_004bf31e
    PUSH EAX                            ; 004bf320
    LEA EAX,[ESP + 0x68]                ; 004bf321
    PUSH EAX                            ; 004bf325
    CALL support_trisock.cpp_parseIPAddress_FUN_0056f4c0 ; 004bf326
        ;   XREF to: 0056f4c0 (UNCONDITIONAL_CALL)  ; uint * support_trisock.cpp_parseIPAddress_FUN_0056f4c0(uint * result_ptr, char * dotted_decimal_string)
    ADD ESP,0x8                         ; 004bf32b
    PUSH EAX                            ; 004bf32e
    MOV ECX,dword ptr [0x00603450]      ; 004bf32f | g_CNetGamePtr
    PUSH ECX                            ; 004bf335
    CALL core_netgame.cpp_CNetGame_initializeNetworkToJoin_FUN_00503fb0 ; 004bf336
        ;   XREF to: 00503fb0 (UNCONDITIONAL_CALL)  ; int core_netgame.cpp_CNetGame_initializeNetworkToJoin_FUN_00503fb0(CNetGame * this_ptr, uint32_t * server_ip)
    ADD ESP,0x8                         ; 004bf33b
    TEST EAX,EAX                        ; 004bf33e
    JZ 0x004bf36e                       ; 004bf340
        ;   XREF to: 004bf36e (CONDITIONAL_JUMP)  ; LAB_004bf36e
    XOR AH,AH                           ; 004bf342
    MOV byte ptr [0x01d225c8],AH        ; 004bf344 | DAT_01d225c8
    MOV ESI,dword ptr [0x00603450]      ; 004bf34a | g_CNetGamePtr
        ;   Label: LAB_004bf34a
    PUSH ESI                            ; 004bf350
    CALL core_netgame.cpp_CNetGame_runLobby_FUN_00505a30 ; 004bf351
        ;   XREF to: 00505a30 (UNCONDITIONAL_CALL)  ; int core_netgame.cpp_CNetGame_runLobby_FUN_00505a30(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 004bf356
    TEST EAX,EAX                        ; 004bf359
    JZ 0x004bf387                       ; 004bf35b
        ;   XREF to: 004bf387 (CONDITIONAL_JUMP)  ; LAB_004bf387
    MOV EBP,dword ptr [0x00600530]      ; 004bf35d | DAT_00600530
    PUSH EBP                            ; 004bf363
    CALL core_mission.cpp_CDemonMission_run_FUN_004f72a0 ; 004bf364
        ;   XREF to: 004f72a0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_run_FUN_004f72a0(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 004bf369
    JMP 0x004bf34a                      ; 004bf36c
        ;   XREF to: 004bf34a (UNCONDITIONAL_JUMP)  ; LAB_004bf34a
    PUSH EBX                            ; 004bf36e
        ;   Label: LAB_004bf36e
    PUSH EAX                            ; 004bf36f
    MOV EBX,dword ptr [0x00603450]      ; 004bf370 | g_CNetGamePtr
    PUSH EBX                            ; 004bf376
    CALL core_netgame.cpp_CNetGame_disconnect_FUN_005043b0 ; 004bf377
        ;   XREF to: 005043b0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_disconnect_FUN_005043b0(CNetGame * this_ptr, int perform_handshake)
    ADD ESP,0x8                         ; 004bf37c
    POP EBX                             ; 004bf37f
    ADD ESP,0x68                        ; 004bf380
    POP EBP                             ; 004bf383
    POP EDI                             ; 004bf384
    POP ESI                             ; 004bf385
    RET                                 ; 004bf386
    PUSH 0x1                            ; 004bf387
        ;   Label: LAB_004bf387
    MOV EDI,dword ptr [0x00603450]      ; 004bf389 | g_CNetGamePtr
    PUSH EDI                            ; 004bf38f
    CALL core_netgame.cpp_CNetGame_disconnect_FUN_005043b0 ; 004bf390
        ;   XREF to: 005043b0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_disconnect_FUN_005043b0(CNetGame * this_ptr, int perform_handshake)
    ADD ESP,0x8                         ; 004bf395
    ADD ESP,0x68                        ; 004bf398
    POP EBP                             ; 004bf39b
    POP EDI                             ; 004bf39c
    POP ESI                             ; 004bf39d
    RET                                 ; 004bf39e

