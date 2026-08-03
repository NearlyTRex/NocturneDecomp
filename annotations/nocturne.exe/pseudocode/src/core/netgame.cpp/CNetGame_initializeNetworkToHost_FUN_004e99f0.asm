; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_netgame_cpp_CNetGame_initializeNetworkToHost_FUN_004e99f0(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x10]:1  local_10
;
; Referenced Globals:
;   TerminatedCString s_Initializing_network_to_0058bae9
;   CEditorTools* g_CEditorTools_PTR_005b6d50 = 01bcd074
;   CGame* g_CGame_PTR_005b9354 = 01c775ec
;   undefined4 g_CGame_01c775ec.hero_number
;   undefined4 g_CGame_01c775ec.aim_mode
;   undefined4 DAT_02dd10c4
;
; Called Functions:
;   core_netgame.cpp_CNetGame_addPlayer_FUN_004eb440
;   core_netgame.cpp_CNetGame_disconnect_FUN_004e9e90
;   core_netgame.cpp_CNetGame_initializeNetwork_FUN_004e9d50
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0
;   support_trisock.cpp_createNetworkAddr_FUN_00548d30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e99f0
        ;   Label: core_netgame.cpp_CNetGame_initializeNetworkToHost_FUN_004e99f0
    PUSH ESI                            ; 004e99f1
    SUB ESP,0x8                         ; 004e99f2
    MOV EBX,dword ptr [ESP + 0x14]      ; 004e99f5
    PUSH 0x58bae9                       ; 004e99f9 | = "Initializing network to host game"
    MOV EDX,dword ptr [0x005b6d50]      ; 004e99fe | g_CEditorTools_PTR_005b6d50
    PUSH EDX                            ; 004e9a04
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0 ; 004e9a05
        ;   XREF to: 0046fff0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004e9a0a
    PUSH 0x0                            ; 004e9a0d
    PUSH EBX                            ; 004e9a0f
    CALL core_netgame.cpp_CNetGame_disconnect_FUN_004e9e90 ; 004e9a10
        ;   XREF to: 004e9e90 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_disconnect_FUN_004e9e90(CNetGame * this_ptr, int perform_handshake)
    MOV EAX,[0x005b9354]                ; 004e9a15 | g_CGame_PTR_005b9354
    MOV dword ptr [EBX + 0x1c],0x0      ; 004e9a1a
    ADD ESP,0x8                         ; 004e9a21
    MOV ECX,dword ptr [EAX + 0xc4]      ; 004e9a24 | g_CGame_01c775ec.aim_mode
    PUSH ECX                            ; 004e9a2a
    MOV ESI,dword ptr [EAX + 0xc0]      ; 004e9a2b | g_CGame_01c775ec.hero_number
    PUSH ESI                            ; 004e9a31
    LEA EAX,[EBX + 0x8]                 ; 004e9a32
    PUSH EAX                            ; 004e9a35
    PUSH 0x1ddf                         ; 004e9a36
    PUSH 0x2dd10c4                      ; 004e9a3b | DAT_02dd10c4
    LEA EAX,[ESP + 0x14]                ; 004e9a40
    PUSH EAX                            ; 004e9a44
    CALL support_trisock.cpp_createNetworkAddr_FUN_00548d30 ; 004e9a45
        ;   XREF to: 00548d30 (UNCONDITIONAL_CALL)  ; void support_trisock.cpp_createNetworkAddr_FUN_00548d30(SNetworkAddr * dest_addr, uint32_t * ip_address_ptr, uint16_t port)
    ADD ESP,0xc                         ; 004e9a4a
    PUSH EAX                            ; 004e9a4d
    PUSH EBX                            ; 004e9a4e
    CALL core_netgame.cpp_CNetGame_addPlayer_FUN_004eb440 ; 004e9a4f
        ;   XREF to: 004eb440 (UNCONDITIONAL_CALL)  ; int core_netgame.cpp_CNetGame_addPlayer_FUN_004eb440(CNetGame * this_ptr, SNetworkAddr * addr, char * name, int hero_number, ...)
    ADD ESP,0x14                        ; 004e9a54
    MOV dword ptr [EBX + 0x114],EAX     ; 004e9a57
    PUSH EBX                            ; 004e9a5d
    MOV dword ptr [EBX + 0x110],EAX     ; 004e9a5e
    CALL core_netgame.cpp_CNetGame_initializeNetwork_FUN_004e9d50 ; 004e9a64
        ;   XREF to: 004e9d50 (UNCONDITIONAL_CALL)  ; int core_netgame.cpp_CNetGame_initializeNetwork_FUN_004e9d50(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 004e9a69
    TEST EAX,EAX                        ; 004e9a6c
    JNZ 0x004e9a76                      ; 004e9a6e
        ;   XREF to: 004e9a76 (CONDITIONAL_JUMP)  ; LAB_004e9a76
    ADD ESP,0x8                         ; 004e9a70
    POP ESI                             ; 004e9a73
    POP EBX                             ; 004e9a74
    RET                                 ; 004e9a75
    MOV dword ptr [EBX + 0x4],0x1       ; 004e9a76
        ;   Label: LAB_004e9a76
    MOV EAX,0x1                         ; 004e9a7d
    MOV dword ptr [EBX],0x1             ; 004e9a82
    ADD ESP,0x8                         ; 004e9a88
    POP ESI                             ; 004e9a8b
    POP EBX                             ; 004e9a8c
    RET                                 ; 004e9a8d

