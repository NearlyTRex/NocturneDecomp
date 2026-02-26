; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_send_FUN_005411c0(CNetGame *this_ptr,int player_index)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   player_index
;
; XREF[8]:
;   core_netgame.cpp_CNetGame_allocSimFrame_FUN_005406a0 at 00540cc0
;   core_netgame.cpp_CNetGame_initializeNetworkToJoin_FUN_0053f900 at 0053faac
;   core_netgame.cpp_CNetGame_processServerFrame_FUN_00543150 at 00543541
;   core_netgame.cpp_CNetGame_sendGameSetting_FUN_00542dd0 at 00542f73
;   core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_00542ff0 at 00543109
;   core_netgame.cpp_CNetGame_sendSimFrameAck_FUN_00543970 at 00543a18
;   core_netgame.cpp_CNetGame_syncPlayers_FUN_005401e0 at 0054041a
;   core_netgame.cpp_CNetGame_updatePing_FUN_00541c80 at 00541e0b
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_0063d90d
;   TerminatedCString s_CNetGame_send_invalid_pl_0063d921
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_netgame.cpp_CNetGame_sendPacket_FUN_00541230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005411c0
        ;   Label: core_netgame.cpp_CNetGame_send_FUN_005411c0
    PUSH ESI                            ; 005411c1
    PUSH EBP                            ; 005411c2
    MOV ESI,dword ptr [ESP + 0x10]      ; 005411c3
    MOV EBX,dword ptr [ESP + 0x14]      ; 005411c7
    TEST EBX,EBX                        ; 005411cb
    JL 0x005411fd                       ; 005411cd
        ;   XREF to: 005411fd (CONDITIONAL_JUMP)  ; LAB_005411fd
    CMP EBX,dword ptr [ESI + 0x1c]      ; 005411cf
    JGE 0x005411fd                      ; 005411d2
        ;   XREF to: 005411fd (CONDITIONAL_JUMP)  ; LAB_005411fd
    LEA EAX,[EBX*0x8 + 0x0]             ; 005411d4
        ;   Label: LAB_005411d4
    MOV EDX,EAX                         ; 005411db
    SHL EAX,0x4                         ; 005411dd
    SUB EAX,EDX                         ; 005411e0
    LEA EDX,[ESI + 0x20]                ; 005411e2
    MOV EBP,dword ptr [ESP + 0x18]      ; 005411e5
    ADD EAX,EDX                         ; 005411e9
    PUSH EBP                            ; 005411eb
    ADD EAX,0x1c                        ; 005411ec
    PUSH EAX                            ; 005411ef
    PUSH ESI                            ; 005411f0
    CALL core_netgame.cpp_CNetGame_sendPacket_FUN_00541230 ; 005411f1
        ;   XREF to: 00541230 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendPacket_FUN_00541230(CNetGame * this_ptr, SNetworkAddr * dest_addr, SNetPacketHeader * packet)
    ADD ESP,0xc                         ; 005411f6
    POP EBP                             ; 005411f9
    POP ESI                             ; 005411fa
    POP EBX                             ; 005411fb
    RET                                 ; 005411fc
    PUSH EDI                            ; 005411fd
        ;   Label: LAB_005411fd
    MOV ECX,0x63d90d                    ; 005411fe | = "..\\core\\netgame.cpp"
    MOV EDI,0x5c5                       ; 00541203
    PUSH 0x63d921                       ; 00541208 | = "CNetGame::send - invalid player index"
    MOV dword ptr [0x02f0ca48],ECX      ; 0054120d | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 00541213 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00541219
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0054121e
    POP EDI                             ; 00541221
    JMP 0x005411d4                      ; 00541222
        ;   XREF to: 005411d4 (UNCONDITIONAL_JUMP)  ; LAB_005411d4

