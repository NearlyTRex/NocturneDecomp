; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_receivePackets_FUN_005405b0(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x10]:1  local_10
;
; XREF[6]:
;   core_netgame.cpp_CNetGame_disconnect_FUN_0053fd00 at 0053ff6a
;   core_netgame.cpp_CNetGame_initializeNetworkToJoin_FUN_0053f900 at 0053fac0
;   core_netgame.cpp_CNetGame_processClientFrame_FUN_005435a0 at 005435f2
;   core_netgame.cpp_CNetGame_processServerFrame_FUN_00543150 at 00543221
;   core_netgame.cpp_CNetGame_runLobby_FUN_00541390 at 0054183e
;   core_netgame.cpp_CNetGame_syncPlayers_FUN_005401e0 at 00540372
;
; Referenced Globals:
;   int g_LastPingTime
;   uint g_CurrentGameTime
;   UNetPacket g_NetworkReceivePacket
;   undefined4 g_NetworkReceivePacket+4
;
; Called Functions:
;   core_netgame.cpp_CNetGame_allocSimFrame_FUN_005406a0
;   core_netgame.cpp_CNetGame_removeChatOut_FUN_00541ff0
;   support_trisock.cpp_isSocketValid_FUN_005e1b70
;   support_trisock.cpp_receiveSocketData_FUN_005e1c20
;   wincore_winrun.cpp_getTime_FUN_005f2dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005405b0
        ;   Label: core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0
    PUSH ESI                            ; 005405b1
    SUB ESP,0x8                         ; 005405b2
    MOV ESI,dword ptr [ESP + 0x14]      ; 005405b5
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 005405b9
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    MOV EDX,EAX                         ; 005405be
    MOV EBX,0x12                        ; 005405c0
    SAR EDX,0x1f                        ; 005405c5
    IDIV EBX                            ; 005405c8
    MOV ECX,dword ptr [0x02f7c8b4]      ; 005405ca | g_LastPingTime
    MOV EDX,EAX                         ; 005405d0
    SUB EAX,ECX                         ; 005405d2
    MOV dword ptr [0x02f7c8b4],EDX      ; 005405d4 | g_LastPingTime
    TEST EAX,EAX                        ; 005405da
    JL 0x00540604                       ; 005405dc
        ;   XREF to: 00540604 (CONDITIONAL_JUMP)  ; LAB_00540604
    CMP EAX,0x20000                     ; 005405de
    JG 0x00540608                       ; 005405e3
        ;   XREF to: 00540608 (CONDITIONAL_JUMP)  ; LAB_00540608
    ADD dword ptr [0x02f7c8b8],EAX      ; 005405e5 | g_CurrentGameTime
        ;   Label: LAB_005405e5
    LEA EBX,[ESI + 0x170]               ; 005405eb
    PUSH EBX                            ; 005405f1
        ;   Label: LAB_005405f1
    CALL support_trisock.cpp_isSocketValid_FUN_005e1b70 ; 005405f2
        ;   XREF to: 005e1b70 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_isSocketValid_FUN_005e1b70(_SOCKET * socket_handle)
    ADD ESP,0x4                         ; 005405f7
    TEST EAX,EAX                        ; 005405fa
    JNZ 0x0054060f                      ; 005405fc
        ;   XREF to: 0054060f (CONDITIONAL_JUMP)  ; LAB_0054060f
    ADD ESP,0x8                         ; 005405fe
    POP ESI                             ; 00540601
    POP EBX                             ; 00540602
    RET                                 ; 00540603
    XOR EAX,EAX                         ; 00540604
        ;   Label: LAB_00540604
    JMP 0x005405e5                      ; 00540606
        ;   XREF to: 005405e5 (UNCONDITIONAL_JUMP)  ; LAB_005405e5
    MOV EAX,0x20000                     ; 00540608
        ;   Label: LAB_00540608
    JMP 0x005405e5                      ; 0054060d
        ;   XREF to: 005405e5 (UNCONDITIONAL_JUMP)  ; LAB_005405e5
    MOV EAX,ESP                         ; 0054060f
        ;   Label: LAB_0054060f
    PUSH EAX                            ; 00540611
    PUSH 0x404                          ; 00540612
    PUSH 0x2fa88cc                      ; 00540617 | g_NetworkReceivePacket+4
    PUSH EBX                            ; 0054061c
    CALL support_trisock.cpp_receiveSocketData_FUN_005e1c20 ; 0054061d
        ;   XREF to: 005e1c20 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_receiveSocketData_FUN_005e1c20(_SOCKET * socket_handle, char * buffer, int length, SNetworkAddr * source_addr)
    ADD ESP,0x10                        ; 00540622
    TEST EAX,EAX                        ; 00540625
    JLE 0x00540644                      ; 00540627
        ;   XREF to: 00540644 (CONDITIONAL_JUMP)  ; LAB_00540644
    INC EAX                             ; 00540629
    PUSH 0x2fa88c8                      ; 0054062a | g_NetworkReceivePacket
    MOV [0x02fa88c8],EAX                ; 0054062f | g_NetworkReceivePacket
    LEA EAX,[ESP + 0x4]                 ; 00540634
    PUSH EAX                            ; 00540638
    PUSH ESI                            ; 00540639
    CALL core_netgame.cpp_CNetGame_allocSimFrame_FUN_005406a0 ; 0054063a
        ;   XREF to: 005406a0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_allocSimFrame_FUN_005406a0(CNetGame * this_ptr, SNetworkAddr * source_addr, UNetPacket * packet)
    ADD ESP,0xc                         ; 0054063f
    JMP 0x005405f1                      ; 00540642
        ;   XREF to: 005405f1 (UNCONDITIONAL_JUMP)  ; LAB_005405f1
    PUSH ESI                            ; 00540644
        ;   Label: LAB_00540644
    CALL core_netgame.cpp_CNetGame_removeChatOut_FUN_00541ff0 ; 00540645
        ;   XREF to: 00541ff0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_removeChatOut_FUN_00541ff0(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 0054064a
    ADD ESP,0x8                         ; 0054064d
    POP ESI                             ; 00540650
    POP EBX                             ; 00540651
    RET                                 ; 00540652

