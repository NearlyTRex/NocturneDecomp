; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_send_FUN_004eb350(CNetGame *this_ptr,int player_index,SNetPacketHeader *packet)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   player_index
; SNetPacketHeader * Stack[0xc]:4   packet
;
; XREF[8]:
;   core_netgame.cpp_CNetGame_initializeNetworkToJoin_FUN_004e9a90 at 004e9c3c
;   core_netgame.cpp_CNetGame_processPacket_FUN_004ea830 at 004ea998
;   core_netgame.cpp_CNetGame_processServerFrame_FUN_004ed2d0 at 004ed6c1
;   core_netgame.cpp_CNetGame_sendGameSetting_FUN_004ecf50 at 004ed0f3
;   core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_004ed170 at 004ed289
;   core_netgame.cpp_CNetGame_sendSimFrameAck_FUN_004edaf0 at 004edb98
;   core_netgame.cpp_CNetGame_syncPlayers_FUN_004ea370 at 004ea5aa
;   core_netgame.cpp_CNetGame_updatePing_FUN_004ebe10 at 004ebf9b
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_0058c0ea
;   TerminatedCString s_CNetGame_send_invalid_pl_0058c0fe
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   core_netgame.cpp_CNetGame_sendPacket_FUN_004eb3c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eb350
        ;   Label: core_netgame.cpp_CNetGame_send_FUN_004eb350
    PUSH ESI                            ; 004eb351
    PUSH EBP                            ; 004eb352
    MOV ESI,dword ptr [ESP + 0x10]      ; 004eb353
    MOV EBX,dword ptr [ESP + 0x14]      ; 004eb357
    TEST EBX,EBX                        ; 004eb35b
    JL 0x004eb38d                       ; 004eb35d
        ;   XREF to: 004eb38d (CONDITIONAL_JUMP)  ; LAB_004eb38d
    CMP EBX,dword ptr [ESI + 0x1c]      ; 004eb35f
    JGE 0x004eb38d                      ; 004eb362
        ;   XREF to: 004eb38d (CONDITIONAL_JUMP)  ; LAB_004eb38d
    LEA EAX,[EBX*0x8 + 0x0]             ; 004eb364
        ;   Label: LAB_004eb364
    MOV EDX,EAX                         ; 004eb36b
    SHL EAX,0x4                         ; 004eb36d
    SUB EAX,EDX                         ; 004eb370
    LEA EDX,[ESI + 0x20]                ; 004eb372
    MOV EBP,dword ptr [ESP + 0x18]      ; 004eb375
    ADD EAX,EDX                         ; 004eb379
    PUSH EBP                            ; 004eb37b
    ADD EAX,0x1c                        ; 004eb37c
    PUSH EAX                            ; 004eb37f
    PUSH ESI                            ; 004eb380
    CALL core_netgame.cpp_CNetGame_sendPacket_FUN_004eb3c0 ; 004eb381
        ;   XREF to: 004eb3c0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendPacket_FUN_004eb3c0(CNetGame * this_ptr, SNetworkAddr * dest_addr, SNetPacketHeader * packet)
    ADD ESP,0xc                         ; 004eb386
    POP EBP                             ; 004eb389
    POP ESI                             ; 004eb38a
    POP EBX                             ; 004eb38b
    RET                                 ; 004eb38c
    PUSH EDI                            ; 004eb38d
        ;   Label: LAB_004eb38d
    MOV ECX,0x58c0ea                    ; 004eb38e | = "..\\core\\netgame.cpp"
    MOV EDI,0x5c5                       ; 004eb393
    PUSH 0x58c0fe                       ; 004eb398 | = "CNetGame::send - invalid player index"
    MOV dword ptr [0x01cc4800],ECX      ; 004eb39d | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDI      ; 004eb3a3 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 004eb3a9
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 004eb3ae
    POP EDI                             ; 004eb3b1
    JMP 0x004eb364                      ; 004eb3b2
        ;   XREF to: 004eb364 (UNCONDITIONAL_JUMP)  ; LAB_004eb364

