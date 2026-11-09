; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_receivePackets_FUN_00504c70(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x10]:1  local_10
;
; XREF[6]:
;   core_netgame.cpp_CNetGame_disconnect_FUN_005043b0 at 00504621
;   core_netgame.cpp_CNetGame_initializeNetworkToJoin_FUN_00503fb0 at 00504178
;   core_netgame.cpp_CNetGame_processClientFrame_FUN_00507c00 at 00507c52
;   core_netgame.cpp_CNetGame_processServerFrame_FUN_00507790 at 00507861
;   core_netgame.cpp_CNetGame_runLobby_FUN_00505a30 at 00505ed2
;   core_netgame.cpp_CNetGame_syncPlayers_FUN_00504890 at 00504a27
;
; Referenced Globals:
;   undefined4 DAT_01da6474
;   undefined4 DAT_01da6478
;   undefined4 DAT_01dd4488
;
; Called Functions:
;   core_netgame.cpp_FUN_00504d60
;   core_netgame.cpp_FUN_00506670
;   support_trisock.cpp_CSocket_isSocketValid_FUN_0056f960
;   support_trisock.cpp_FUN_0056fb10
;   wincore_winrun.cpp_FUN_005806a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00504c70
        ;   Label: core_netgame.cpp_CNetGame_receivePackets_FUN_00504c70
    PUSH ESI                            ; 00504c71
    SUB ESP,0x8                         ; 00504c72
    MOV ESI,dword ptr [ESP + 0x14]      ; 00504c75
    CALL wincore_winrun.cpp_FUN_005806a0 ; 00504c79
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005806a0()
    MOV EDX,EAX                         ; 00504c7e
    MOV EBX,0x12                        ; 00504c80
    SAR EDX,0x1f                        ; 00504c85
    IDIV EBX                            ; 00504c88
    MOV ECX,dword ptr [0x01da6474]      ; 00504c8a | DAT_01da6474
    MOV EDX,EAX                         ; 00504c90
    SUB EAX,ECX                         ; 00504c92
    MOV dword ptr [0x01da6474],EDX      ; 00504c94 | DAT_01da6474
    TEST EAX,EAX                        ; 00504c9a
    JL 0x00504cc4                       ; 00504c9c
        ;   XREF to: 00504cc4 (CONDITIONAL_JUMP)  ; LAB_00504cc4
    CMP EAX,0x20000                     ; 00504c9e
    JG 0x00504cc8                       ; 00504ca3
        ;   XREF to: 00504cc8 (CONDITIONAL_JUMP)  ; LAB_00504cc8
    ADD dword ptr [0x01da6478],EAX      ; 00504ca5 | DAT_01da6478
        ;   Label: LAB_00504ca5
    LEA EBX,[ESI + 0x180]               ; 00504cab
    PUSH EBX                            ; 00504cb1
        ;   Label: LAB_00504cb1
    CALL support_trisock.cpp_CSocket_isSocketValid_FUN_0056f960 ; 00504cb2
        ;   XREF to: 0056f960 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_isSocketValid_FUN_0056f960(CSocket * this_ptr)
    ADD ESP,0x4                         ; 00504cb7
    TEST EAX,EAX                        ; 00504cba
    JNZ 0x00504ccf                      ; 00504cbc
        ;   XREF to: 00504ccf (CONDITIONAL_JUMP)  ; LAB_00504ccf
    ADD ESP,0x8                         ; 00504cbe
    POP ESI                             ; 00504cc1
    POP EBX                             ; 00504cc2
    RET                                 ; 00504cc3
    XOR EAX,EAX                         ; 00504cc4
        ;   Label: LAB_00504cc4
    JMP 0x00504ca5                      ; 00504cc6
        ;   XREF to: 00504ca5 (UNCONDITIONAL_JUMP)  ; LAB_00504ca5
    MOV EAX,0x20000                     ; 00504cc8
        ;   Label: LAB_00504cc8
    JMP 0x00504ca5                      ; 00504ccd
        ;   XREF to: 00504ca5 (UNCONDITIONAL_JUMP)  ; LAB_00504ca5
    MOV EAX,ESP                         ; 00504ccf
        ;   Label: LAB_00504ccf
    PUSH EAX                            ; 00504cd1
    PUSH 0x404                          ; 00504cd2
    PUSH 0x1dd448c                      ; 00504cd7
    PUSH EBX                            ; 00504cdc
    CALL support_trisock.cpp_FUN_0056fb10 ; 00504cdd
        ;   XREF to: 0056fb10 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_FUN_0056fb10(CSocket * this_ptr, char * buffer, int length, SNetworkAddr * source_addr)
    ADD ESP,0x10                        ; 00504ce2
    TEST EAX,EAX                        ; 00504ce5
    JLE 0x00504d04                      ; 00504ce7
        ;   XREF to: 00504d04 (CONDITIONAL_JUMP)  ; LAB_00504d04
    INC EAX                             ; 00504ce9
    PUSH 0x1dd4488                      ; 00504cea | DAT_01dd4488
    MOV [0x01dd4488],EAX                ; 00504cef | DAT_01dd4488
    LEA EAX,[ESP + 0x4]                 ; 00504cf4
    PUSH EAX                            ; 00504cf8
    PUSH ESI                            ; 00504cf9
    CALL core_netgame.cpp_FUN_00504d60  ; 00504cfa
        ;   XREF to: 00504d60 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_FUN_00504d60(CNetGame * this_ptr, SNetworkAddr * source_addr, UNetPacket * packet)
    ADD ESP,0xc                         ; 00504cff
    JMP 0x00504cb1                      ; 00504d02
        ;   XREF to: 00504cb1 (UNCONDITIONAL_JUMP)  ; LAB_00504cb1
    PUSH ESI                            ; 00504d04
        ;   Label: LAB_00504d04
    CALL core_netgame.cpp_FUN_00506670  ; 00504d05
        ;   XREF to: 00506670 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_FUN_00506670(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 00504d0a
    ADD ESP,0x8                         ; 00504d0d
    POP ESI                             ; 00504d10
    POP EBX                             ; 00504d11
    RET                                 ; 00504d12

