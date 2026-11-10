; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_receivePackets_FUN_0050c190(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x10]:1  local_10
;
; XREF[6]:
;   core_netgame.cpp_CNetGame_disconnect_FUN_0050b8d0 at 0050bb41
;   core_netgame.cpp_CNetGame_processServerFrame_FUN_0050ecb0 at 0050ed81
;   core_netgame.cpp_CNetGame_runLobby_FUN_0050cf50 at 0050d3f2
;   core_netgame.cpp_CNetGame_syncPlayers_FUN_0050bdb0 at 0050bf47
;   core_netgame.cpp_FUN_0050b4d0 at 0050b698
;   core_netgame.cpp_FUN_0050f120 at 0050f172
;
; Referenced Globals:
;   undefined4 DAT_01d34e34
;   undefined4 DAT_01d34e38
;   undefined4 DAT_01d62e48
;
; Called Functions:
;   core_netgame.cpp_CNetGame_processPacket_FUN_0050c280
;   core_netgame.cpp_CNetGame_removeChatOut_FUN_0050db90
;   support_trisock.cpp_CSocket_isSocketValid_FUN_00579090
;   support_trisock.cpp_CSocket_receiveSocketData_FUN_00579240
;   wincore_winrun.cpp_getTime_FUN_0058e9e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050c190
        ;   Label: core_netgame.cpp_CNetGame_receivePackets_FUN_0050c190
    PUSH ESI                            ; 0050c191
    SUB ESP,0x8                         ; 0050c192
    MOV ESI,dword ptr [ESP + 0x14]      ; 0050c195
    CALL wincore_winrun.cpp_getTime_FUN_0058e9e0 ; 0050c199
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_0058e9e0()
    MOV EDX,EAX                         ; 0050c19e
    MOV EBX,0x12                        ; 0050c1a0
    SAR EDX,0x1f                        ; 0050c1a5
    IDIV EBX                            ; 0050c1a8
    MOV ECX,dword ptr [0x01d34e34]      ; 0050c1aa | DAT_01d34e34
    MOV EDX,EAX                         ; 0050c1b0
    SUB EAX,ECX                         ; 0050c1b2
    MOV dword ptr [0x01d34e34],EDX      ; 0050c1b4 | DAT_01d34e34
    TEST EAX,EAX                        ; 0050c1ba
    JL 0x0050c1e4                       ; 0050c1bc
        ;   XREF to: 0050c1e4 (CONDITIONAL_JUMP)  ; LAB_0050c1e4
    CMP EAX,0x20000                     ; 0050c1be
    JG 0x0050c1e8                       ; 0050c1c3
        ;   XREF to: 0050c1e8 (CONDITIONAL_JUMP)  ; LAB_0050c1e8
    ADD dword ptr [0x01d34e38],EAX      ; 0050c1c5 | DAT_01d34e38
        ;   Label: LAB_0050c1c5
    LEA EBX,[ESI + 0x180]               ; 0050c1cb
    PUSH EBX                            ; 0050c1d1
        ;   Label: LAB_0050c1d1
    CALL support_trisock.cpp_CSocket_isSocketValid_FUN_00579090 ; 0050c1d2
        ;   XREF to: 00579090 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_isSocketValid_FUN_00579090(CSocket * this_ptr)
    ADD ESP,0x4                         ; 0050c1d7
    TEST EAX,EAX                        ; 0050c1da
    JNZ 0x0050c1ef                      ; 0050c1dc
        ;   XREF to: 0050c1ef (CONDITIONAL_JUMP)  ; LAB_0050c1ef
    ADD ESP,0x8                         ; 0050c1de
    POP ESI                             ; 0050c1e1
    POP EBX                             ; 0050c1e2
    RET                                 ; 0050c1e3
    XOR EAX,EAX                         ; 0050c1e4
        ;   Label: LAB_0050c1e4
    JMP 0x0050c1c5                      ; 0050c1e6
        ;   XREF to: 0050c1c5 (UNCONDITIONAL_JUMP)  ; LAB_0050c1c5
    MOV EAX,0x20000                     ; 0050c1e8
        ;   Label: LAB_0050c1e8
    JMP 0x0050c1c5                      ; 0050c1ed
        ;   XREF to: 0050c1c5 (UNCONDITIONAL_JUMP)  ; LAB_0050c1c5
    MOV EAX,ESP                         ; 0050c1ef
        ;   Label: LAB_0050c1ef
    PUSH EAX                            ; 0050c1f1
    PUSH 0x404                          ; 0050c1f2
    PUSH 0x1d62e4c                      ; 0050c1f7
    PUSH EBX                            ; 0050c1fc
    CALL support_trisock.cpp_CSocket_receiveSocketData_FUN_00579240 ; 0050c1fd
        ;   XREF to: 00579240 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_receiveSocketData_FUN_00579240(CSocket * this_ptr, char * buffer, int length, SNetworkAddr * source_addr)
    ADD ESP,0x10                        ; 0050c202
    TEST EAX,EAX                        ; 0050c205
    JLE 0x0050c224                      ; 0050c207
        ;   XREF to: 0050c224 (CONDITIONAL_JUMP)  ; LAB_0050c224
    INC EAX                             ; 0050c209
    PUSH 0x1d62e48                      ; 0050c20a | DAT_01d62e48
    MOV [0x01d62e48],EAX                ; 0050c20f | DAT_01d62e48
    LEA EAX,[ESP + 0x4]                 ; 0050c214
    PUSH EAX                            ; 0050c218
    PUSH ESI                            ; 0050c219
    CALL core_netgame.cpp_CNetGame_processPacket_FUN_0050c280 ; 0050c21a
        ;   XREF to: 0050c280 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_processPacket_FUN_0050c280(CNetGame * this_ptr, SNetworkAddr * source_addr, UNetPacket * packet)
    ADD ESP,0xc                         ; 0050c21f
    JMP 0x0050c1d1                      ; 0050c222
        ;   XREF to: 0050c1d1 (UNCONDITIONAL_JUMP)  ; LAB_0050c1d1
    PUSH ESI                            ; 0050c224
        ;   Label: LAB_0050c224
    CALL core_netgame.cpp_CNetGame_removeChatOut_FUN_0050db90 ; 0050c225
        ;   XREF to: 0050db90 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_removeChatOut_FUN_0050db90(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 0050c22a
    ADD ESP,0x8                         ; 0050c22d
    POP ESI                             ; 0050c230
    POP EBX                             ; 0050c231
    RET                                 ; 0050c232

