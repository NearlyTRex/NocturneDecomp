; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_netgame_cpp_CNetGame_initializeNetworkToJoin_FUN_004e9a90(CNetGame *this_ptr,uint32_t *server_ip)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; uint32_t *       Stack[0x8]:4   server_ip
;
; XREF[1]:
;   core_game.cpp_joinNetworkGame_FUN_004a5e40 at 004a5e96
;
; Referenced Globals:
;   TerminatedCString s_TheServer_0058bb0b
;   TerminatedCString s_Contacting_server_Press_0058bb15
;   TerminatedCString s_Connection_refused_compu_0058bb41
;   TerminatedCString s_Connection_refused_game_0058bb6f
;   TerminatedCString s_Connection_refused_alrea_0058bb91
;   double DOUBLE_0058bbba = 0.0000152587890625
;   double DOUBLE_0058bbc2 = 30
;   double DOUBLE_0058bbca = 0.200000000000000
;   CEditorTools* g_CEditorTools_PTR_005b6d50 = 01bcd074
;   CGame* g_CGame_PTR_005b9354 = 01c775ec
;   CKeys* g_CKeys_PTR_005bac64 = 01cc30e4
;   undefined4 DAT_005c1664
;   undefined4 DAT_01cea3f8
;   undefined4 DAT_01cea3fc
;
; Called Functions:
;   core_netgame.cpp_CNetGame_addPlayer_FUN_004eb440
;   core_netgame.cpp_CNetGame_disconnect_FUN_004e9e90
;   core_netgame.cpp_CNetGame_initializeNetwork_FUN_004e9d50
;   core_netgame.cpp_CNetGame_receivePackets_FUN_004ea740
;   core_netgame.cpp_CNetGame_send_FUN_004eb350
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0
;   shape_edittool.cpp_FUN_0046fcd0
;   support_trisock.cpp_createNetworkAddr_FUN_00548d30
;   wincore_wddvmem.cpp_swapBuffers_FUN_00553910
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e9a90
        ;   Label: core_netgame.cpp_CNetGame_initializeNetworkToJoin_FUN_004e9a90
    PUSH ESI                            ; 004e9a91
    PUSH EDI                            ; 004e9a92
    PUSH EBP                            ; 004e9a93
    MOV EBP,ESP                         ; 004e9a94
    SUB ESP,0x4c                        ; 004e9a96
    AND ESP,0xfffffff8                  ; 004e9a99
    MOV EBX,dword ptr [EBP + 0x14]      ; 004e9a9c
    PUSH 0x0                            ; 004e9a9f
    PUSH EBX                            ; 004e9aa1
    CALL core_netgame.cpp_CNetGame_disconnect_FUN_004e9e90 ; 004e9aa2
        ;   XREF to: 004e9e90 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_disconnect_FUN_004e9e90(CNetGame * this_ptr, int perform_handshake)
    MOV EAX,[0x005b9354]                ; 004e9aa7 | g_CGame_PTR_005b9354
    MOV dword ptr [EBX + 0x1c],0x0      ; 004e9aac
    ADD ESP,0x8                         ; 004e9ab3
    MOV EDX,dword ptr [EAX + 0xc4]      ; 004e9ab6
    PUSH EDX                            ; 004e9abc
    MOV ECX,dword ptr [EAX + 0xc0]      ; 004e9abd
    PUSH ECX                            ; 004e9ac3
    LEA ESI,[EBX + 0x8]                 ; 004e9ac4
    PUSH ESI                            ; 004e9ac7
    PUSH 0x1ddf                         ; 004e9ac8
    PUSH 0x2dd10c4                      ; 004e9acd
    LEA EAX,[ESP + 0x44]                ; 004e9ad2
    PUSH EAX                            ; 004e9ad6
    CALL support_trisock.cpp_createNetworkAddr_FUN_00548d30 ; 004e9ad7
        ;   XREF to: 00548d30 (UNCONDITIONAL_CALL)  ; void support_trisock.cpp_createNetworkAddr_FUN_00548d30(SNetworkAddr * dest_addr, uint32_t * ip_address_ptr, uint16_t port)
    ADD ESP,0xc                         ; 004e9adc
    PUSH EAX                            ; 004e9adf
    PUSH EBX                            ; 004e9ae0
    CALL core_netgame.cpp_CNetGame_addPlayer_FUN_004eb440 ; 004e9ae1
        ;   XREF to: 004eb440 (UNCONDITIONAL_CALL)  ; int core_netgame.cpp_CNetGame_addPlayer_FUN_004eb440(CNetGame * this_ptr, SNetworkAddr * addr, char * name, int hero_number, ...)
    ADD ESP,0x14                        ; 004e9ae6
    PUSH EBX                            ; 004e9ae9
    MOV dword ptr [EBX + 0x114],EAX     ; 004e9aea
    CALL core_netgame.cpp_CNetGame_initializeNetwork_FUN_004e9d50 ; 004e9af0
        ;   XREF to: 004e9d50 (UNCONDITIONAL_CALL)  ; int core_netgame.cpp_CNetGame_initializeNetwork_FUN_004e9d50(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 004e9af5
    TEST EAX,EAX                        ; 004e9af8
    JNZ 0x004e9b03                      ; 004e9afa
        ;   XREF to: 004e9b03 (CONDITIONAL_JUMP)  ; LAB_004e9b03
    MOV ESP,EBP                         ; 004e9afc
    POP EBP                             ; 004e9afe
    POP EDI                             ; 004e9aff
    POP ESI                             ; 004e9b00
    POP EBX                             ; 004e9b01
    RET                                 ; 004e9b02
    PUSH 0x1ddf                         ; 004e9b03
        ;   Label: LAB_004e9b03
    MOV EDI,dword ptr [EBP + 0x18]      ; 004e9b08
    PUSH EDI                            ; 004e9b0b
    LEA EAX,[ESP + 0x40]                ; 004e9b0c
    PUSH EAX                            ; 004e9b10
    CALL support_trisock.cpp_createNetworkAddr_FUN_00548d30 ; 004e9b11
        ;   XREF to: 00548d30 (UNCONDITIONAL_CALL)  ; void support_trisock.cpp_createNetworkAddr_FUN_00548d30(SNetworkAddr * dest_addr, uint32_t * ip_address_ptr, uint16_t port)
    ADD ESP,0xc                         ; 004e9b16
    PUSH 0x0                            ; 004e9b19
    PUSH 0x0                            ; 004e9b1b
    PUSH 0x58bb0b                       ; 004e9b1d | = "TheServer"
    LEA EAX,[ESP + 0x44]                ; 004e9b22
    PUSH EAX                            ; 004e9b26
    PUSH EBX                            ; 004e9b27
    CALL core_netgame.cpp_CNetGame_addPlayer_FUN_004eb440 ; 004e9b28
        ;   XREF to: 004eb440 (UNCONDITIONAL_CALL)  ; int core_netgame.cpp_CNetGame_addPlayer_FUN_004eb440(CNetGame * this_ptr, SNetworkAddr * addr, char * name, int hero_number, ...)
    MOV EDI,dword ptr [0x01cea3f8]      ; 004e9b2d | DAT_01cea3f8
    ADD ESP,0x14                        ; 004e9b33
    MOV dword ptr [EBX],0x2             ; 004e9b36
    MOV EDX,dword ptr [0x005b6d50]      ; 004e9b3c | g_CEditorTools_PTR_005b6d50
    MOV dword ptr [EBX + 0x4],0x1       ; 004e9b42
    PUSH 0x58bb15                       ; 004e9b49 | = "Contacting server.  Press ESC to give..."
    MOV dword ptr [EBX + 0x110],EAX     ; 004e9b4e
    XOR EAX,EAX                         ; 004e9b54
    PUSH EDX                            ; 004e9b56
    SUB EDI,0x50000                     ; 004e9b57
    MOV [0x01cea3fc],EAX                ; 004e9b5d | DAT_01cea3fc
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0 ; 004e9b62
        ;   XREF to: 0046fff0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0()
    MOV EAX,[0x005c1664]                ; 004e9b67 | DAT_005c1664
    ADD ESP,0x8                         ; 004e9b6c
    XOR ECX,ECX                         ; 004e9b6f
    MOV dword ptr [ESP + 0x44],EAX      ; 004e9b71
    MOV EAX,dword ptr [EBX + 0x110]     ; 004e9b75
    MOV dword ptr [0x005c1664],ECX      ; 004e9b7b | DAT_005c1664
    TEST EAX,EAX                        ; 004e9b81
    JL 0x004e9c99                       ; 004e9b83
        ;   XREF to: 004e9c99 (CONDITIONAL_JUMP)  ; LAB_004e9c99
    MOV dword ptr [ESP + 0x48],ESI      ; 004e9b89
    MOV EAX,[0x01cea3f8]                ; 004e9b8d | DAT_01cea3f8
        ;   Label: LAB_004e9b8d
    SUB EAX,EDI                         ; 004e9b92
    MOV dword ptr [ESP + 0x40],EAX      ; 004e9b94
    FILD dword ptr [ESP + 0x40]         ; 004e9b98
    FMUL double ptr [0x0058bbba]        ; 004e9b9c | DOUBLE_0058bbba
    FST float ptr [ESP]                 ; 004e9ba2
    FLDZ                                ; 004e9ba5
    FCOMPP                              ; 004e9ba7
    FNSTSW AX                           ; 004e9ba9
    SAHF                                ; 004e9bab
    JBE 0x004e9bb3                      ; 004e9bac
        ;   XREF to: 004e9bb3 (CONDITIONAL_JUMP)  ; LAB_004e9bb3
    XOR ECX,ECX                         ; 004e9bae
    MOV dword ptr [ESP],ECX             ; 004e9bb0
    FLD float ptr [ESP]                 ; 004e9bb3
        ;   Label: LAB_004e9bb3
    FCOMP double ptr [0x0058bbc2]       ; 004e9bb6 | DOUBLE_0058bbc2
    FNSTSW AX                           ; 004e9bbc
    SAHF                                ; 004e9bbe
    JBE 0x004e9bc8                      ; 004e9bbf
        ;   XREF to: 004e9bc8 (CONDITIONAL_JUMP)  ; LAB_004e9bc8
    MOV dword ptr [ESP],0x41f00000      ; 004e9bc1
    FLD float ptr [ESP]                 ; 004e9bc8
        ;   Label: LAB_004e9bc8
    FCOMP double ptr [0x0058bbca]       ; 004e9bcb | DOUBLE_0058bbca
    FNSTSW AX                           ; 004e9bd1
    SAHF                                ; 004e9bd3
    JBE 0x004e9c4a                      ; 004e9bd4
        ;   XREF to: 004e9c4a (CONDITIONAL_JUMP)  ; LAB_004e9c4a
    MOV EDI,0x29                        ; 004e9bd6
    MOV AH,0x1                          ; 004e9bdb
    LEA ESI,[ESP + 0x38]                ; 004e9bdd
    MOV dword ptr [ESP + 0x4],EDI       ; 004e9be1
    LEA EDI,[ESP + 0x9]                 ; 004e9be5
    MOV byte ptr [ESP + 0x8],AH         ; 004e9be9
    MOVSD ES:EDI,ESI                    ; 004e9bed
    MOVSD ES:EDI,ESI                    ; 004e9bee
    IMUL EAX,dword ptr [EBX + 0x114],0x78 ; 004e9bef
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x34] ; 004e9bf6
    MOV dword ptr [ESP + 0x25],EAX      ; 004e9bfa
    IMUL EAX,dword ptr [EBX + 0x114],0x78 ; 004e9bfe
    MOV ESI,dword ptr [ESP + 0x48]      ; 004e9c05
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x38] ; 004e9c09
    LEA EDI,[ESP + 0x11]                ; 004e9c0d
    MOV dword ptr [ESP + 0x29],EAX      ; 004e9c11
    PUSH EDI                            ; 004e9c15
    MOV AL,byte ptr [ESI]               ; 004e9c16
        ;   Label: LAB_004e9c16
    MOV byte ptr [EDI],AL               ; 004e9c18
    CMP AL,0x0                          ; 004e9c1a
    JZ 0x004e9c2e                       ; 004e9c1c
        ;   XREF to: 004e9c2e (CONDITIONAL_JUMP)  ; LAB_004e9c2e
    MOV AL,byte ptr [ESI + 0x1]         ; 004e9c1e
    ADD ESI,0x2                         ; 004e9c21
    MOV byte ptr [EDI + 0x1],AL         ; 004e9c24
    ADD EDI,0x2                         ; 004e9c27
    CMP AL,0x0                          ; 004e9c2a
    JNZ 0x004e9c16                      ; 004e9c2c
        ;   XREF to: 004e9c16 (CONDITIONAL_JUMP)  ; LAB_004e9c16
    POP EDI                             ; 004e9c2e
        ;   Label: LAB_004e9c2e
    LEA EAX,[ESP + 0x4]                 ; 004e9c2f
    PUSH EAX                            ; 004e9c33
    MOV ESI,dword ptr [EBX + 0x110]     ; 004e9c34
    PUSH ESI                            ; 004e9c3a
    PUSH EBX                            ; 004e9c3b
    CALL core_netgame.cpp_CNetGame_send_FUN_004eb350 ; 004e9c3c
        ;   XREF to: 004eb350 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_send_FUN_004eb350(CNetGame * this_ptr, int player_index, SNetPacketHeader * packet)
    MOV EDI,dword ptr [0x01cea3f8]      ; 004e9c41 | DAT_01cea3f8
    ADD ESP,0xc                         ; 004e9c47
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 004e9c4a
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
        ;   Label: LAB_004e9c4a
    PUSH EBX                            ; 004e9c4f
    CALL core_netgame.cpp_CNetGame_receivePackets_FUN_004ea740 ; 004e9c50
        ;   XREF to: 004ea740 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_receivePackets_FUN_004ea740(CNetGame * this_ptr)
    MOV EAX,[0x01cea3fc]                ; 004e9c55 | DAT_01cea3fc
    ADD ESP,0x4                         ; 004e9c5a
    CMP EAX,0x1                         ; 004e9c5d
    JZ 0x004e9d31                       ; 004e9c60
        ;   XREF to: 004e9d31 (CONDITIONAL_JUMP)  ; LAB_004e9d31
    CMP EAX,0x3                         ; 004e9c66
    JNC 0x004e9d25                      ; 004e9c69
        ;   XREF to: 004e9d25 (CONDITIONAL_JUMP)  ; LAB_004e9d25
    CMP EAX,0x2                         ; 004e9c6f
    JZ 0x004e9cad                       ; 004e9c72
        ;   XREF to: 004e9cad (CONDITIONAL_JUMP)  ; LAB_004e9cad
    PUSH 0x1                            ; 004e9c74
        ;   Label: LAB_004e9c74
    MOV EAX,[0x005bac64]                ; 004e9c76 | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 004e9c7b
    MOV EDX,dword ptr [EAX]             ; 004e9c7c
    CALL dword ptr [EDX + 0x4]          ; 004e9c7e
    ADD ESP,0x8                         ; 004e9c81
    TEST EAX,EAX                        ; 004e9c84
    JNZ 0x004e9d11                      ; 004e9c86
        ;   XREF to: 004e9d11 (CONDITIONAL_JUMP)  ; LAB_004e9d11
    CMP dword ptr [EBX + 0x110],0x0     ; 004e9c8c
    JGE 0x004e9b8d                      ; 004e9c93
        ;   XREF to: 004e9b8d (CONDITIONAL_JUMP)  ; LAB_004e9b8d
    PUSH 0x1                            ; 004e9c99
        ;   Label: LAB_004e9c99
    PUSH EBX                            ; 004e9c9b
    CALL core_netgame.cpp_CNetGame_disconnect_FUN_004e9e90 ; 004e9c9c
        ;   XREF to: 004e9e90 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_disconnect_FUN_004e9e90(CNetGame * this_ptr, int perform_handshake)
    ADD ESP,0x8                         ; 004e9ca1
    XOR EAX,EAX                         ; 004e9ca4
    MOV ESP,EBP                         ; 004e9ca6
    POP EBP                             ; 004e9ca8
    POP EDI                             ; 004e9ca9
    POP ESI                             ; 004e9caa
    POP EBX                             ; 004e9cab
    RET                                 ; 004e9cac
    PUSH 0x58bb41                       ; 004e9cad | = "Connection refused - computer is not ..."
        ;   Label: LAB_004e9cad
    MOV ESI,dword ptr [0x005b6d50]      ; 004e9cb2 | g_CEditorTools_PTR_005b6d50
    PUSH ESI                            ; 004e9cb8
    CALL shape_edittool.cpp_FUN_0046fcd0 ; 004e9cb9
        ;   XREF to: 0046fcd0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0046fcd0()
    ADD ESP,0x8                         ; 004e9cbe
    PUSH 0x0                            ; 004e9cc1
    PUSH EBX                            ; 004e9cc3
    CALL core_netgame.cpp_CNetGame_disconnect_FUN_004e9e90 ; 004e9cc4
        ;   XREF to: 004e9e90 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_disconnect_FUN_004e9e90(CNetGame * this_ptr, int perform_handshake)
    ADD ESP,0x8                         ; 004e9cc9
    XOR EAX,EAX                         ; 004e9ccc
    MOV ESP,EBP                         ; 004e9cce
    POP EBP                             ; 004e9cd0
    POP EDI                             ; 004e9cd1
    POP ESI                             ; 004e9cd2
    POP EBX                             ; 004e9cd3
    RET                                 ; 004e9cd4
    PUSH 0x58bb6f                       ; 004e9cd5 | = "Connection refused - game is full"
        ;   Label: LAB_004e9cd5
    MOV ECX,dword ptr [0x005b6d50]      ; 004e9cda | g_CEditorTools_PTR_005b6d50
    PUSH ECX                            ; 004e9ce0
    CALL shape_edittool.cpp_FUN_0046fcd0 ; 004e9ce1
        ;   XREF to: 0046fcd0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0046fcd0()
    ADD ESP,0x8                         ; 004e9ce6
    PUSH 0x0                            ; 004e9ce9
    PUSH EBX                            ; 004e9ceb
    CALL core_netgame.cpp_CNetGame_disconnect_FUN_004e9e90 ; 004e9cec
        ;   XREF to: 004e9e90 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_disconnect_FUN_004e9e90(CNetGame * this_ptr, int perform_handshake)
    ADD ESP,0x8                         ; 004e9cf1
    XOR EAX,EAX                         ; 004e9cf4
    MOV ESP,EBP                         ; 004e9cf6
    POP EBP                             ; 004e9cf8
    POP EDI                             ; 004e9cf9
    POP ESI                             ; 004e9cfa
    POP EBX                             ; 004e9cfb
    RET                                 ; 004e9cfc
    PUSH 0x58bb91                       ; 004e9cfd | = "Connection refused - already in the game"
        ;   Label: LAB_004e9cfd
    MOV EDX,dword ptr [0x005b6d50]      ; 004e9d02 | g_CEditorTools_PTR_005b6d50
    PUSH EDX                            ; 004e9d08
    CALL shape_edittool.cpp_FUN_0046fcd0 ; 004e9d09
        ;   XREF to: 0046fcd0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0046fcd0()
    ADD ESP,0x8                         ; 004e9d0e
    PUSH 0x0                            ; 004e9d11
        ;   Label: LAB_004e9d11
    PUSH EBX                            ; 004e9d13
    CALL core_netgame.cpp_CNetGame_disconnect_FUN_004e9e90 ; 004e9d14
        ;   XREF to: 004e9e90 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_disconnect_FUN_004e9e90(CNetGame * this_ptr, int perform_handshake)
    ADD ESP,0x8                         ; 004e9d19
    XOR EAX,EAX                         ; 004e9d1c
    MOV ESP,EBP                         ; 004e9d1e
    POP EBP                             ; 004e9d20
    POP EDI                             ; 004e9d21
    POP ESI                             ; 004e9d22
    POP EBX                             ; 004e9d23
    RET                                 ; 004e9d24
    JBE 0x004e9cd5                      ; 004e9d25
        ;   XREF to: 004e9cd5 (CONDITIONAL_JUMP)  ; LAB_004e9cd5
        ;   Label: LAB_004e9d25
    CMP EAX,0x4                         ; 004e9d27
    JZ 0x004e9cfd                       ; 004e9d2a
        ;   XREF to: 004e9cfd (CONDITIONAL_JUMP)  ; LAB_004e9cfd
    JMP 0x004e9c74                      ; 004e9d2c
        ;   XREF to: 004e9c74 (UNCONDITIONAL_JUMP)  ; LAB_004e9c74
    MOV EAX,dword ptr [ESP + 0x44]      ; 004e9d31
        ;   Label: LAB_004e9d31
    MOV [0x005c1664],EAX                ; 004e9d35 | DAT_005c1664
    MOV EAX,0x1                         ; 004e9d3a
    MOV ESP,EBP                         ; 004e9d3f
    POP EBP                             ; 004e9d41
    POP EDI                             ; 004e9d42
    POP ESI                             ; 004e9d43
    POP EBX                             ; 004e9d44
    RET                                 ; 004e9d45

