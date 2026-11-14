; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_send_FUN_0050cd90(CNetGame *this_ptr,int player_index,SNetPacketHeader *packet)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   player_index
; SNetPacketHeader * Stack[0xc]:4   packet
;
; XREF[8]:
;   core_netgame.cpp_CNetGame_initializeNetworkToJoin_FUN_0050b4d0 at 0050b684
;   core_netgame.cpp_CNetGame_processPacket_FUN_0050c280 at 0050c3e1
;   core_netgame.cpp_CNetGame_processServerFrame_FUN_0050ecb0 at 0050f0c6
;   core_netgame.cpp_CNetGame_sendGameSetting_FUN_0050e970 at 0050eb13
;   core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_0050eb80 at 0050ec78
;   core_netgame.cpp_CNetGame_sendSimFrameAck_FUN_0050f4f0 at 0050f588
;   core_netgame.cpp_CNetGame_syncPlayers_FUN_0050bdb0 at 0050bff1
;   core_netgame.cpp_CNetGame_updatePing_FUN_0050d840 at 0050d9c2
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_005e0a65
;   TerminatedCString s_CNetGame_send_invalid_pl_005e0a79
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   core_netgame.cpp_CNetGame_sendPacket_FUN_0050cdf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050cd90
        ;   Label: core_netgame.cpp_CNetGame_send_FUN_0050cd90
    PUSH ESI                            ; 0050cd91
    PUSH EBP                            ; 0050cd92
    MOV EBX,dword ptr [ESP + 0x10]      ; 0050cd93
    MOV ESI,dword ptr [ESP + 0x14]      ; 0050cd97
    TEST ESI,ESI                        ; 0050cd9b
    JL 0x0050cdc4                       ; 0050cd9d
        ;   XREF to: 0050cdc4 (CONDITIONAL_JUMP)  ; LAB_0050cdc4
    CMP ESI,dword ptr [EBX + 0x1c]      ; 0050cd9f
    JGE 0x0050cdc4                      ; 0050cda2
        ;   XREF to: 0050cdc4 (CONDITIONAL_JUMP)  ; LAB_0050cdc4
    MOV EAX,ESI                         ; 0050cda4
        ;   Label: LAB_0050cda4
    LEA EDX,[EBX + 0x20]                ; 0050cda6
    SHL EAX,0x7                         ; 0050cda9
    MOV EBP,dword ptr [ESP + 0x18]      ; 0050cdac
    ADD EAX,EDX                         ; 0050cdb0
    PUSH EBP                            ; 0050cdb2
    ADD EAX,0x1c                        ; 0050cdb3
    PUSH EAX                            ; 0050cdb6
    PUSH EBX                            ; 0050cdb7
    CALL core_netgame.cpp_CNetGame_sendPacket_FUN_0050cdf0 ; 0050cdb8
        ;   XREF to: 0050cdf0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendPacket_FUN_0050cdf0(CNetGame * this_ptr, SNetworkAddr * dest_addr, SNetPacketHeader * packet)
    ADD ESP,0xc                         ; 0050cdbd
    POP EBP                             ; 0050cdc0
    POP ESI                             ; 0050cdc1
    POP EBX                             ; 0050cdc2
    RET                                 ; 0050cdc3
    PUSH EDI                            ; 0050cdc4
        ;   Label: LAB_0050cdc4
    MOV ECX,0x5e0a65                    ; 0050cdc5 | = "..\\core\\netgame.cpp"
    MOV EDI,0x5c5                       ; 0050cdca
    PUSH 0x5e0a79                       ; 0050cdcf | = "CNetGame::send - invalid player index"
    MOV dword ptr [0x01d046a0],ECX      ; 0050cdd4 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 0050cdda | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0050cde0
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0050cde5
    POP EDI                             ; 0050cde8
    JMP 0x0050cda4                      ; 0050cde9
        ;   XREF to: 0050cda4 (UNCONDITIONAL_JUMP)  ; LAB_0050cda4

