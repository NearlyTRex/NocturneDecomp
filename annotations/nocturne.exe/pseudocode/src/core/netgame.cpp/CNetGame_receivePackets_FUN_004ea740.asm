; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_receivePackets_FUN_004ea740(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x10]:1  local_10
;
; XREF[6]:
;   core_netgame.cpp_CNetGame_disconnect_FUN_004e9e90 at 004ea0fa
;   core_netgame.cpp_CNetGame_initializeNetworkToJoin_FUN_004e9a90 at 004e9c50
;   core_netgame.cpp_CNetGame_processClientFrame_FUN_004ed720 at 004ed772
;   core_netgame.cpp_CNetGame_processServerFrame_FUN_004ed2d0 at 004ed3a1
;   core_netgame.cpp_CNetGame_runLobby_FUN_004eb520 at 004eb9ce
;   core_netgame.cpp_CNetGame_syncPlayers_FUN_004ea370 at 004ea502
;
; Referenced Globals:
;   undefined4 DAT_01cea3f4
;   undefined4 DAT_01cea3f8
;   undefined4 DAT_01d16408
;
; Called Functions:
;   core_netgame.cpp_CNetGame_processPacket_FUN_004ea830
;   core_netgame.cpp_CNetGame_removeChatOut_FUN_004ec180
;   support_trisock.cpp_isSocketValid_FUN_00548f60
;   support_trisock.cpp_receiveSocketData_FUN_00549010
;   wincore_winrun.cpp_getTime_FUN_00558a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ea740
        ;   Label: core_netgame.cpp_CNetGame_receivePackets_FUN_004ea740
    PUSH ESI                            ; 004ea741
    SUB ESP,0x8                         ; 004ea742
    MOV ESI,dword ptr [ESP + 0x14]      ; 004ea745
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 004ea749
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_00558a30()
    MOV EDX,EAX                         ; 004ea74e
    MOV EBX,0x12                        ; 004ea750
    SAR EDX,0x1f                        ; 004ea755
    IDIV EBX                            ; 004ea758
    MOV ECX,dword ptr [0x01cea3f4]      ; 004ea75a | DAT_01cea3f4
    MOV EDX,EAX                         ; 004ea760
    SUB EAX,ECX                         ; 004ea762
    MOV dword ptr [0x01cea3f4],EDX      ; 004ea764 | DAT_01cea3f4
    TEST EAX,EAX                        ; 004ea76a
    JL 0x004ea794                       ; 004ea76c
        ;   XREF to: 004ea794 (CONDITIONAL_JUMP)  ; LAB_004ea794
    CMP EAX,0x20000                     ; 004ea76e
    JG 0x004ea798                       ; 004ea773
        ;   XREF to: 004ea798 (CONDITIONAL_JUMP)  ; LAB_004ea798
    ADD dword ptr [0x01cea3f8],EAX      ; 004ea775 | DAT_01cea3f8
        ;   Label: LAB_004ea775
    LEA EBX,[ESI + 0x170]               ; 004ea77b
    PUSH EBX                            ; 004ea781
        ;   Label: LAB_004ea781
    CALL support_trisock.cpp_isSocketValid_FUN_00548f60 ; 004ea782
        ;   XREF to: 00548f60 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_isSocketValid_FUN_00548f60(_SOCKET * socket_handle)
    ADD ESP,0x4                         ; 004ea787
    TEST EAX,EAX                        ; 004ea78a
    JNZ 0x004ea79f                      ; 004ea78c
        ;   XREF to: 004ea79f (CONDITIONAL_JUMP)  ; LAB_004ea79f
    ADD ESP,0x8                         ; 004ea78e
    POP ESI                             ; 004ea791
    POP EBX                             ; 004ea792
    RET                                 ; 004ea793
    XOR EAX,EAX                         ; 004ea794
        ;   Label: LAB_004ea794
    JMP 0x004ea775                      ; 004ea796
        ;   XREF to: 004ea775 (UNCONDITIONAL_JUMP)  ; LAB_004ea775
    MOV EAX,0x20000                     ; 004ea798
        ;   Label: LAB_004ea798
    JMP 0x004ea775                      ; 004ea79d
        ;   XREF to: 004ea775 (UNCONDITIONAL_JUMP)  ; LAB_004ea775
    MOV EAX,ESP                         ; 004ea79f
        ;   Label: LAB_004ea79f
    PUSH EAX                            ; 004ea7a1
    PUSH 0x404                          ; 004ea7a2
    PUSH 0x1d1640c                      ; 004ea7a7
    PUSH EBX                            ; 004ea7ac
    CALL support_trisock.cpp_receiveSocketData_FUN_00549010 ; 004ea7ad
        ;   XREF to: 00549010 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_receiveSocketData_FUN_00549010(_SOCKET * socket_handle, char * buffer, int length, SNetworkAddr * source_addr)
    ADD ESP,0x10                        ; 004ea7b2
    TEST EAX,EAX                        ; 004ea7b5
    JLE 0x004ea7d4                      ; 004ea7b7
        ;   XREF to: 004ea7d4 (CONDITIONAL_JUMP)  ; LAB_004ea7d4
    INC EAX                             ; 004ea7b9
    PUSH 0x1d16408                      ; 004ea7ba | DAT_01d16408
    MOV [0x01d16408],EAX                ; 004ea7bf | DAT_01d16408
    LEA EAX,[ESP + 0x4]                 ; 004ea7c4
    PUSH EAX                            ; 004ea7c8
    PUSH ESI                            ; 004ea7c9
    CALL core_netgame.cpp_CNetGame_processPacket_FUN_004ea830 ; 004ea7ca
        ;   XREF to: 004ea830 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_processPacket_FUN_004ea830(CNetGame * this_ptr, SNetworkAddr * source_addr, UNetPacket * packet)
    ADD ESP,0xc                         ; 004ea7cf
    JMP 0x004ea781                      ; 004ea7d2
        ;   XREF to: 004ea781 (UNCONDITIONAL_JUMP)  ; LAB_004ea781
    PUSH ESI                            ; 004ea7d4
        ;   Label: LAB_004ea7d4
    CALL core_netgame.cpp_CNetGame_removeChatOut_FUN_004ec180 ; 004ea7d5
        ;   XREF to: 004ec180 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_removeChatOut_FUN_004ec180(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 004ea7da
    ADD ESP,0x8                         ; 004ea7dd
    POP ESI                             ; 004ea7e0
    POP EBX                             ; 004ea7e1
    RET                                 ; 004ea7e2

