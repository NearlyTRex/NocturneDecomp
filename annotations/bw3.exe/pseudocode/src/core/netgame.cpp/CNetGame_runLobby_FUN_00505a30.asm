; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_netgame_cpp_CNetGame_runLobby_FUN_00505a30(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_joinNetworkGame_FUN_004bf2e0 at 004bf351
;
; Referenced Globals:
;   undefined4 DAT_005cac09
;   undefined4 DAT_005cac11
;   undefined4 DAT_005cac19
;   undefined4 DAT_005cac21
;   CEditorTools* g_CEditorToolsPtr = 01c5b0e4
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   undefined4 DAT_00600284
;   undefined4 DAT_00600530
;   CNetGame* g_CNetGamePtr = 01da62f0
;   undefined4 DAT_00603454
;   undefined4 DAT_0060728c
;   undefined4 DAT_01c6b5c0
;   undefined4 DAT_01da6474
;   undefined4 DAT_01da6478
;   ... and 4 more
;
; Called Functions:
;   core_actor.cpp_setRandomSeed_FUN_0040cdc0
;   core_mission.cpp_CDemonMission_createHeros_FUN_004f7880
;   core_mission.cpp_CDemonMission_load_FUN_004f5bc0
;   core_mission.cpp_FUN_004f7590
;   core_netgame.cpp_CNetGame_disconnect_FUN_005043b0
;   core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_00507370
;   core_netgame.cpp_CNetGame_processChatOut_FUN_005064d0
;   core_netgame.cpp_CNetGame_receivePackets_FUN_00504c70
;   core_netgame.cpp_CNetGame_sendGameSetting_FUN_00507450
;   core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_00507660
;   core_netgame.cpp_CNetGame_syncPlayers_FUN_00504890
;   core_netgame.cpp_CNetGame_updatePing_FUN_00506320
;   crt_math.c_round_FUN_005a3120
;   crt_stdlib.c_rand_FUN_005a35cc
;   crt_stdlib.c_srand_FUN_005a35f0
;   ... and 11 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00505a30
        ;   Label: core_netgame.cpp_CNetGame_runLobby_FUN_00505a30
    PUSH ESI                            ; 00505a31
    PUSH EDI                            ; 00505a32
    PUSH EBP                            ; 00505a33
    MOV EBP,ESP                         ; 00505a34
    SUB ESP,0x124                       ; 00505a36
    AND ESP,0xfffffff8                  ; 00505a3c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00505a3f
    CMP dword ptr [EAX],0x0             ; 00505a42
    JZ 0x00505d89                       ; 00505a45
        ;   XREF to: 00505d89 (CONDITIONAL_JUMP)  ; LAB_00505d89
    MOV EAX,[0x0060728c]                ; 00505a4b | DAT_0060728c
    MOV dword ptr [ESP + 0x108],EAX     ; 00505a50
    MOV EAX,dword ptr [EBP + 0x14]      ; 00505a57
    MOV EAX,dword ptr [EAX + 0x124]     ; 00505a5a
    MOV EBX,dword ptr [EBP + 0x14]      ; 00505a60
    SHL EAX,0x7                         ; 00505a63
    ADD EAX,EBX                         ; 00505a66
    MOV dword ptr [EAX + 0x5c],0x1      ; 00505a68
    MOV EAX,dword ptr [EBX + 0x124]     ; 00505a6f
    SHL EAX,0x7                         ; 00505a75
    ADD EAX,EBX                         ; 00505a78
    XOR ECX,ECX                         ; 00505a7a
    MOV dword ptr [EAX + 0x64],ECX      ; 00505a7c
    MOV dword ptr [0x0060728c],ECX      ; 00505a7f | DAT_0060728c
    MOV EDI,dword ptr [EBX]             ; 00505a85
    MOV dword ptr [EBX + 0x4],0x1       ; 00505a87
    CMP EDI,0x1                         ; 00505a8e
    JZ 0x00505d3b                       ; 00505a91
        ;   XREF to: 00505d3b (CONDITIONAL_JUMP)  ; LAB_00505d3b
    PUSH EBX                            ; 00505a97
    CALL core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_00507660 ; 00505a98
        ;   XREF to: 00507660 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_00507660(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 00505a9d
        ;   Label: LAB_00505a9d
    MOV EAX,dword ptr [EBP + 0x14]      ; 00505aa0
    ADD EAX,0x128                       ; 00505aa3
    MOV dword ptr [ESP + 0x10c],EAX     ; 00505aa8
    MOV EAX,dword ptr [EBP + 0x14]      ; 00505aaf
        ;   Label: LAB_00505aaf
    CMP dword ptr [EAX],0x0             ; 00505ab2
    JZ 0x00505d51                       ; 00505ab5
        ;   XREF to: 00505d51 (CONDITIONAL_JUMP)  ; LAB_00505d51
    CALL engine_special.cpp_clearScreen_FUN_00560d70 ; 00505abb
        ;   XREF to: 00560d70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_00560d70()
    MOV EBX,dword ptr [ESP + 0x10c]     ; 00505ac0
    PUSH EBX                            ; 00505ac7
    PUSH 0x5cab71                       ; 00505ac8
    LEA EAX,[ESP + 0x10]                ; 00505acd
    PUSH EAX                            ; 00505ad1
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00505ad2
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00505ad7
    PUSH 0xb                            ; 00505ada
    PUSH 0x0                            ; 00505adc
    LEA EAX,[ESP + 0x10]                ; 00505ade
    PUSH EAX                            ; 00505ae2
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 00505ae3
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00505ae8
    MOV ESI,dword ptr [0x01da6484]      ; 00505aeb | DAT_01da6484
    PUSH ESI                            ; 00505af1
    PUSH 0x5cab7d                       ; 00505af2
    LEA EAX,[ESP + 0x10]                ; 00505af7
    PUSH EAX                            ; 00505afb
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00505afc
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00505b01
    PUSH 0xb                            ; 00505b04
    PUSH 0x190                          ; 00505b06
    LEA EAX,[ESP + 0x10]                ; 00505b0b
    PUSH EAX                            ; 00505b0f
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 00505b10
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00505b15
    PUSH 0x21                           ; 00505b18
    PUSH 0x0                            ; 00505b1a
    PUSH 0x5cab91                       ; 00505b1c
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 00505b21
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00505b26
    PUSH 0x21                           ; 00505b29
    PUSH 0x64                           ; 00505b2b
    PUSH 0x5cab98                       ; 00505b2d
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 00505b32
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00505b37
    PUSH 0x21                           ; 00505b3a
    PUSH 0xc8                           ; 00505b3c
    PUSH 0x5cab9b                       ; 00505b41
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 00505b46
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00505b4b
    PUSH 0x21                           ; 00505b4e
    PUSH 0x12c                          ; 00505b50
    PUSH 0x5caba0                       ; 00505b55
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 00505b5a
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00505b5f
    PUSH 0x21                           ; 00505b62
    PUSH 0x190                          ; 00505b64
    PUSH 0x5caba6                       ; 00505b69
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 00505b6e
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00505b73
    PUSH 0x21                           ; 00505b76
    PUSH 0x1f4                          ; 00505b78
    PUSH 0x5cabaf                       ; 00505b7d
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 00505b82
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    MOV EAX,[0x005fba18]                ; 00505b87 | DAT_005fba18
    ADD ESP,0xc                         ; 00505b8c
    DEC EAX                             ; 00505b8f
    PUSH EAX                            ; 00505b90
    PUSH 0x31                           ; 00505b91
    MOV EDI,0xff                        ; 00505b93
    PUSH 0x0                            ; 00505b98
    MOV dword ptr [0x01c6b5c0],EDI      ; 00505b9a | DAT_01c6b5c0
    CALL engine_2d.c_drawHLine_FUN_00402f30 ; 00505ba0
        ;   XREF to: 00402f30 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00402f30(int x1, int y, int x2)
    ADD ESP,0xc                         ; 00505ba5
    XOR EAX,EAX                         ; 00505ba8
    MOV EBX,0x37                        ; 00505baa
    MOV dword ptr [ESP + 0x118],EAX     ; 00505baf
    MOV dword ptr [ESP + 0x110],EAX     ; 00505bb6
    MOV ESI,dword ptr [0x00603450]      ; 00505bbd | g_CNetGamePtr
        ;   Label: LAB_00505bbd
    MOV EAX,dword ptr [ESP + 0x118]     ; 00505bc3
    CMP EAX,dword ptr [ESI + 0x1c]      ; 00505bca
    JGE 0x00505e3c                      ; 00505bcd
        ;   XREF to: 00505e3c (CONDITIONAL_JUMP)  ; LAB_00505e3c
    PUSH EBX                            ; 00505bd3
    MOV EAX,dword ptr [ESP + 0x114]     ; 00505bd4
    ADD ESI,0x20                        ; 00505bdb
    PUSH 0x0                            ; 00505bde
    ADD EAX,ESI                         ; 00505be0
    PUSH EAX                            ; 00505be2
    MOV dword ptr [ESP + 0x128],EAX     ; 00505be3
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 00505bea
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00505bef
    MOV ESI,dword ptr [ESP + 0x11c]     ; 00505bf2
    MOV EAX,[0x02cfd89c]                ; 00505bf9 | DAT_02cfd89c
    MOV EDX,dword ptr [ESI + 0x1c]      ; 00505bfe
    ADD ESI,0x1c                        ; 00505c01
    CMP EAX,EDX                         ; 00505c04
    JNZ 0x00505d92                      ; 00505c06
        ;   XREF to: 00505d92 (CONDITIONAL_JUMP)  ; LAB_00505d92
    MOV ESI,0x5cabbc                    ; 00505c0c
    LEA EDI,[ESP + 0x8]                 ; 00505c11
    PUSH EDI                            ; 00505c15
    MOV AL,byte ptr [ESI]               ; 00505c16
        ;   Label: LAB_00505c16
    MOV byte ptr [EDI],AL               ; 00505c18
    CMP AL,0x0                          ; 00505c1a
    JZ 0x00505c2e                       ; 00505c1c
        ;   XREF to: 00505c2e (CONDITIONAL_JUMP)  ; LAB_00505c2e
    MOV AL,byte ptr [ESI + 0x1]         ; 00505c1e
    ADD ESI,0x2                         ; 00505c21
    MOV byte ptr [EDI + 0x1],AL         ; 00505c24
    ADD EDI,0x2                         ; 00505c27
    CMP AL,0x0                          ; 00505c2a
    JNZ 0x00505c16                      ; 00505c2c
        ;   XREF to: 00505c16 (CONDITIONAL_JUMP)  ; LAB_00505c16
    POP EDI                             ; 00505c2e
        ;   Label: LAB_00505c2e
    PUSH EBX                            ; 00505c2f
        ;   Label: LAB_00505c2f
    PUSH 0x64                           ; 00505c30
    LEA EAX,[ESP + 0x10]                ; 00505c32
    PUSH EAX                            ; 00505c36
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 00505c37
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00505c3c
    MOV EAX,[0x00603450]                ; 00505c3f | g_CNetGamePtr
    MOV EDX,dword ptr [ESP + 0x118]     ; 00505c44
    CMP EDX,dword ptr [EAX + 0x124]     ; 00505c4b
    JNZ 0x00505da5                      ; 00505c51
        ;   XREF to: 00505da5 (CONDITIONAL_JUMP)  ; LAB_00505da5
    MOV ESI,0x5cabc4                    ; 00505c57
    LEA EDI,[ESP + 0x8]                 ; 00505c5c
        ;   Label: LAB_00505c5c
    PUSH EDI                            ; 00505c60
    MOV AL,byte ptr [ESI]               ; 00505c61
        ;   Label: LAB_00505c61
    MOV byte ptr [EDI],AL               ; 00505c63
    CMP AL,0x0                          ; 00505c65
    JZ 0x00505c79                       ; 00505c67
        ;   XREF to: 00505c79 (CONDITIONAL_JUMP)  ; LAB_00505c79
    MOV AL,byte ptr [ESI + 0x1]         ; 00505c69
    ADD ESI,0x2                         ; 00505c6c
    MOV byte ptr [EDI + 0x1],AL         ; 00505c6f
    ADD EDI,0x2                         ; 00505c72
    CMP AL,0x0                          ; 00505c75
    JNZ 0x00505c61                      ; 00505c77
        ;   XREF to: 00505c61 (CONDITIONAL_JUMP)  ; LAB_00505c61
    POP EDI                             ; 00505c79
        ;   Label: LAB_00505c79
    PUSH EBX                            ; 00505c7a
        ;   Label: LAB_00505c7a
    PUSH 0xc8                           ; 00505c7b
    LEA EAX,[ESP + 0x10]                ; 00505c80
    PUSH EAX                            ; 00505c84
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 00505c85
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00505c8a
    MOV EAX,dword ptr [ESP + 0x11c]     ; 00505c8d
    CMP dword ptr [EAX + 0x44],0x0      ; 00505c94
    JZ 0x00505dfd                       ; 00505c98
        ;   XREF to: 00505dfd (CONDITIONAL_JUMP)  ; LAB_00505dfd
    MOV ESI,0x5cabd3                    ; 00505c9e
    LEA EDI,[ESP + 0x8]                 ; 00505ca3
        ;   Label: LAB_00505ca3
    PUSH EDI                            ; 00505ca7
    MOV AL,byte ptr [ESI]               ; 00505ca8
        ;   Label: LAB_00505ca8
    MOV byte ptr [EDI],AL               ; 00505caa
    CMP AL,0x0                          ; 00505cac
    JZ 0x00505cc0                       ; 00505cae
        ;   XREF to: 00505cc0 (CONDITIONAL_JUMP)  ; LAB_00505cc0
    MOV AL,byte ptr [ESI + 0x1]         ; 00505cb0
    ADD ESI,0x2                         ; 00505cb3
    MOV byte ptr [EDI + 0x1],AL         ; 00505cb6
    ADD EDI,0x2                         ; 00505cb9
    CMP AL,0x0                          ; 00505cbc
    JNZ 0x00505ca8                      ; 00505cbe
        ;   XREF to: 00505ca8 (CONDITIONAL_JUMP)  ; LAB_00505ca8
    POP EDI                             ; 00505cc0
        ;   Label: LAB_00505cc0
    PUSH EBX                            ; 00505cc1
    PUSH 0x12c                          ; 00505cc2
    LEA EAX,[ESP + 0x10]                ; 00505cc7
    PUSH EAX                            ; 00505ccb
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 00505ccc
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00505cd1
    MOV EAX,dword ptr [ESP + 0x11c]     ; 00505cd4
    MOV EDX,dword ptr [EAX + 0x14]      ; 00505cdb
    PUSH EDX                            ; 00505cde
    PUSH 0x5cabe3                       ; 00505cdf
    LEA EAX,[ESP + 0x10]                ; 00505ce4
    PUSH EAX                            ; 00505ce8
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00505ce9
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00505cee
    PUSH EBX                            ; 00505cf1
    PUSH 0x190                          ; 00505cf2
    LEA EAX,[ESP + 0x10]                ; 00505cf7
    PUSH EAX                            ; 00505cfb
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 00505cfc
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00505d01
    MOV EAX,dword ptr [EBP + 0x14]      ; 00505d04
    CMP dword ptr [EAX],0x1             ; 00505d07
    JZ 0x00505e07                       ; 00505d0a
        ;   XREF to: 00505e07 (CONDITIONAL_JUMP)  ; LAB_00505e07
    MOV EDI,dword ptr [ESP + 0x110]     ; 00505d10
        ;   Label: LAB_00505d10
    MOV EAX,dword ptr [ESP + 0x118]     ; 00505d17
    ADD EBX,0xb                         ; 00505d1e
    ADD EDI,0x80                        ; 00505d21
    INC EAX                             ; 00505d27
    MOV dword ptr [ESP + 0x110],EDI     ; 00505d28
    MOV dword ptr [ESP + 0x118],EAX     ; 00505d2f
    JMP 0x00505bbd                      ; 00505d36
        ;   XREF to: 00505bbd (UNCONDITIONAL_JUMP)  ; LAB_00505bbd
    CALL crt_stdlib.c_rand_FUN_005a35cc ; 00505d3b
        ;   XREF to: 005a35cc (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005a35cc()
        ;   Label: LAB_00505d3b
    PUSH EBX                            ; 00505d40
    MOV dword ptr [EBX + 0x17c],EAX     ; 00505d41
    CALL core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_00507370 ; 00505d47
        ;   XREF to: 00507370 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_00507370(CNetGame * this_ptr)
    JMP 0x00505a9d                      ; 00505d4c
        ;   XREF to: 00505a9d (UNCONDITIONAL_JUMP)  ; LAB_00505a9d
    PUSH 0x5cab47                       ; 00505d51
        ;   Label: LAB_00505d51
    MOV ECX,dword ptr [0x005fb140]      ; 00505d56 | g_CEditorToolsPtr
    PUSH ECX                            ; 00505d5c
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0047ce80 ; 00505d5d
        ;   XREF to: 0047ce80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0047ce80(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 00505d62
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 00505d65
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
        ;   Label: LAB_00505d65
    PUSH 0x1                            ; 00505d6a
    MOV EAX,dword ptr [EBP + 0x14]      ; 00505d6c
    PUSH EAX                            ; 00505d6f
    CALL core_netgame.cpp_CNetGame_disconnect_FUN_005043b0 ; 00505d70
        ;   XREF to: 005043b0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_disconnect_FUN_005043b0(CNetGame * this_ptr, int perform_handshake)
    ADD ESP,0x8                         ; 00505d75
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 00505d78
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    MOV EAX,dword ptr [ESP + 0x108]     ; 00505d7d
    MOV [0x0060728c],EAX                ; 00505d84 | DAT_0060728c
    XOR EAX,EAX                         ; 00505d89
        ;   Label: LAB_00505d89
    MOV ESP,EBP                         ; 00505d8b
    POP EBP                             ; 00505d8d
    POP EDI                             ; 00505d8e
    POP ESI                             ; 00505d8f
    POP EBX                             ; 00505d90
    RET                                 ; 00505d91
    LEA EAX,[ESP + 0x8]                 ; 00505d92
        ;   Label: LAB_00505d92
    PUSH EAX                            ; 00505d96
    PUSH ESI                            ; 00505d97
    CALL support_trisock.cpp_formatIPAddress_FUN_0056f580 ; 00505d98
        ;   XREF to: 0056f580 (UNCONDITIONAL_CALL)  ; void support_trisock.cpp_formatIPAddress_FUN_0056f580(uchar * ip_bytes, char * output_buffer)
    ADD ESP,0x8                         ; 00505d9d
    JMP 0x00505c2f                      ; 00505da0
        ;   XREF to: 00505c2f (UNCONDITIONAL_JUMP)  ; LAB_00505c2f
    MOV EAX,dword ptr [ESP + 0x11c]     ; 00505da5
        ;   Label: LAB_00505da5
    FLD float ptr [EAX + 0x28]          ; 00505dac
    FLDZ                                ; 00505daf
    FCOMPP                              ; 00505db1
    FNSTSW AX                           ; 00505db3
    SAHF                                ; 00505db5
    JA 0x00505df3                       ; 00505db6
        ;   XREF to: 00505df3 (CONDITIONAL_JUMP)  ; LAB_00505df3
    MOV EAX,dword ptr [ESP + 0x11c]     ; 00505db8
    FLD float ptr [EAX + 0x28]          ; 00505dbf
    FMUL float ptr [0x005cac09]         ; 00505dc2 | DAT_005cac09
    CALL crt_math.c_round_FUN_005a3120  ; 00505dc8
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x120]       ; 00505dcd
    MOV ESI,dword ptr [ESP + 0x120]     ; 00505dd4
    PUSH ESI                            ; 00505ddb
    PUSH 0x5cabcc                       ; 00505ddc
    LEA EAX,[ESP + 0x10]                ; 00505de1
    PUSH EAX                            ; 00505de5
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00505de6
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00505deb
    JMP 0x00505c7a                      ; 00505dee
        ;   XREF to: 00505c7a (UNCONDITIONAL_JUMP)  ; LAB_00505c7a
    MOV ESI,0x5cabd1                    ; 00505df3
        ;   Label: LAB_00505df3
    JMP 0x00505c5c                      ; 00505df8
        ;   XREF to: 00505c5c (UNCONDITIONAL_JUMP)  ; LAB_00505c5c
    MOV ESI,0x5cabd9                    ; 00505dfd
        ;   Label: LAB_00505dfd
    JMP 0x00505ca3                      ; 00505e02
        ;   XREF to: 00505ca3 (UNCONDITIONAL_JUMP)  ; LAB_00505ca3
    MOV EAX,dword ptr [ESP + 0x11c]     ; 00505e07
        ;   Label: LAB_00505e07
    MOV ESI,dword ptr [EAX + 0x34]      ; 00505e0e
    PUSH ESI                            ; 00505e11
    PUSH 0x5cabe6                       ; 00505e12
    LEA EAX,[ESP + 0x10]                ; 00505e17
    PUSH EAX                            ; 00505e1b
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00505e1c
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00505e21
    PUSH EBX                            ; 00505e24
    PUSH 0x1f4                          ; 00505e25
    LEA EAX,[ESP + 0x10]                ; 00505e2a
    PUSH EAX                            ; 00505e2e
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 00505e2f
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00505e34
    JMP 0x00505d10                      ; 00505e37
        ;   XREF to: 00505d10 (UNCONDITIONAL_JUMP)  ; LAB_00505d10
    MOV EDX,dword ptr [0x005fba1c]      ; 00505e3c | DAT_005fba1c
        ;   Label: LAB_00505e3c
    ADD EBX,0x2c                        ; 00505e42
    SUB EDX,EBX                         ; 00505e45
    MOV ESI,0xb                         ; 00505e47
    MOV EAX,EDX                         ; 00505e4c
    SAR EDX,0x1f                        ; 00505e4e
    IDIV ESI                            ; 00505e51
    MOV ESI,dword ptr [0x01da648c]      ; 00505e53 | DAT_01da648c
    SUB ESI,EAX                         ; 00505e59
    INC ESI                             ; 00505e5b
    TEST ESI,ESI                        ; 00505e5c
    JL 0x00505ec5                       ; 00505e5e
        ;   XREF to: 00505ec5 (CONDITIONAL_JUMP)  ; LAB_00505ec5
    IMUL EAX,ESI,0x120                  ; 00505e60
        ;   Label: LAB_00505e60
    LEA EDI,[EAX + 0x20]                ; 00505e66
    ADD EAX,0xc                         ; 00505e69
    ADD EAX,0x1da6490                   ; 00505e6c
    ADD EDI,0x1da6490                   ; 00505e71
    MOV dword ptr [ESP + 0x114],EAX     ; 00505e77
    CMP ESI,dword ptr [0x01da648c]      ; 00505e7e | DAT_01da648c
        ;   Label: LAB_00505e7e
    JGE 0x00505ec9                      ; 00505e84
        ;   XREF to: 00505ec9 (CONDITIONAL_JUMP)  ; LAB_00505ec9
    PUSH EBX                            ; 00505e86
    PUSH 0x0                            ; 00505e87
    MOV EAX,dword ptr [ESP + 0x11c]     ; 00505e89
    PUSH EAX                            ; 00505e90
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 00505e91
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00505e96
    PUSH EBX                            ; 00505e99
    PUSH 0x64                           ; 00505e9a
    PUSH EDI                            ; 00505e9c
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 00505e9d
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00505ea2
    INC ESI                             ; 00505ea5
    MOV EDX,dword ptr [ESP + 0x114]     ; 00505ea6
    ADD EBX,0xb                         ; 00505ead
    ADD EDX,0x120                       ; 00505eb0
    ADD EDI,0x120                       ; 00505eb6
    MOV dword ptr [ESP + 0x114],EDX     ; 00505ebc
    JMP 0x00505e7e                      ; 00505ec3
        ;   XREF to: 00505e7e (UNCONDITIONAL_JUMP)  ; LAB_00505e7e
    XOR ESI,ESI                         ; 00505ec5
        ;   Label: LAB_00505ec5
    JMP 0x00505e60                      ; 00505ec7
        ;   XREF to: 00505e60 (UNCONDITIONAL_JUMP)  ; LAB_00505e60
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0 ; 00505ec9
        ;   XREF to: 0057a8a0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0()
        ;   Label: LAB_00505ec9
    MOV ECX,dword ptr [EBP + 0x14]      ; 00505ece
    PUSH ECX                            ; 00505ed1
    CALL core_netgame.cpp_CNetGame_receivePackets_FUN_00504c70 ; 00505ed2
        ;   XREF to: 00504c70 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_receivePackets_FUN_00504c70(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 00505ed7
    MOV EAX,dword ptr [EBP + 0x14]      ; 00505eda
    MOV ESI,dword ptr [EAX + 0x1c]      ; 00505edd
    XOR EBX,EBX                         ; 00505ee0
    TEST ESI,ESI                        ; 00505ee2
    JLE 0x00505f00                      ; 00505ee4
        ;   XREF to: 00505f00 (CONDITIONAL_JUMP)  ; LAB_00505f00
    MOV ESI,EAX                         ; 00505ee6
    MOV EAX,dword ptr [EBP + 0x14]      ; 00505ee8
    MOV dword ptr [ESI + 0x68],0x0      ; 00505eeb
        ;   Label: LAB_00505eeb
    INC EBX                             ; 00505ef2
    MOV ECX,dword ptr [EAX + 0x1c]      ; 00505ef3
    ADD ESI,0x80                        ; 00505ef6
    CMP EBX,ECX                         ; 00505efc
    JL 0x00505eeb                       ; 00505efe
        ;   XREF to: 00505eeb (CONDITIONAL_JUMP)  ; LAB_00505eeb
    MOV EAX,dword ptr [EBP + 0x14]      ; 00505f00
        ;   Label: LAB_00505f00
    MOV EBX,dword ptr [EAX]             ; 00505f03
    MOV dword ptr [EAX + 0x178],0x0     ; 00505f05
    CMP EBX,0x1                         ; 00505f0f
    JNZ 0x00506093                      ; 00505f12
        ;   XREF to: 00506093 (CONDITIONAL_JUMP)  ; LAB_00506093
    MOV EAX,dword ptr [EAX + 0x124]     ; 00505f18
    MOV EDX,dword ptr [EBP + 0x14]      ; 00505f1e
    SHL EAX,0x7                         ; 00505f21
    ADD EDX,EAX                         ; 00505f24
    MOV EAX,[0x01da6484]                ; 00505f26 | DAT_01da6484
    MOV dword ptr [EDX + 0x54],EAX      ; 00505f2b
    MOV EDX,dword ptr [EBP + 0x14]      ; 00505f2e
    XOR ESI,ESI                         ; 00505f31
    MOV EDI,dword ptr [EDX + 0x1c]      ; 00505f33
    MOV EAX,EBX                         ; 00505f36
    TEST EDI,EDI                        ; 00505f38
    JLE 0x00505fce                      ; 00505f3a
        ;   XREF to: 00505fce (CONDITIONAL_JUMP)  ; LAB_00505fce
    MOV EBX,EDX                         ; 00505f40
    CMP dword ptr [EBX + 0x64],0x0      ; 00505f42
        ;   Label: LAB_00505f42
    JZ 0x005061cd                       ; 00505f46
        ;   XREF to: 005061cd (CONDITIONAL_JUMP)  ; LAB_005061cd
    MOV EDX,dword ptr [0x01da6484]      ; 00505f4c | DAT_01da6484
        ;   Label: LAB_00505f4c
    CMP EDX,dword ptr [EBX + 0x54]      ; 00505f52
    JZ 0x00505fb9                       ; 00505f55
        ;   XREF to: 00505fb9 (CONDITIONAL_JUMP)  ; LAB_00505fb9
    MOV EDX,dword ptr [0x01da6478]      ; 00505f57 | DAT_01da6478
    MOV EAX,dword ptr [EBX + 0x58]      ; 00505f5d
    SUB EDX,EAX                         ; 00505f60
    MOV dword ptr [ESP + 0x120],EDX     ; 00505f62
    FILD dword ptr [ESP + 0x120]        ; 00505f69
    FMUL double ptr [0x005cac11]        ; 00505f70 | DAT_005cac11
    FST float ptr [ESP]                 ; 00505f76
    FLDZ                                ; 00505f79
    FCOMPP                              ; 00505f7b
    FNSTSW AX                           ; 00505f7d
    SAHF                                ; 00505f7f
    JBE 0x00505f87                      ; 00505f80
        ;   XREF to: 00505f87 (CONDITIONAL_JUMP)  ; LAB_00505f87
    XOR ECX,ECX                         ; 00505f82
    MOV dword ptr [ESP],ECX             ; 00505f84
    FLD float ptr [ESP]                 ; 00505f87
        ;   Label: LAB_00505f87
    FCOMP double ptr [0x005cac19]       ; 00505f8a | DAT_005cac19
    FNSTSW AX                           ; 00505f90
    SAHF                                ; 00505f92
    JBE 0x00505f9c                      ; 00505f93
        ;   XREF to: 00505f9c (CONDITIONAL_JUMP)  ; LAB_00505f9c
    MOV dword ptr [ESP],0x41f00000      ; 00505f95
    FLD float ptr [ESP]                 ; 00505f9c
        ;   Label: LAB_00505f9c
    FCOMP double ptr [0x005cac21]       ; 00505f9f | DAT_005cac21
    FNSTSW AX                           ; 00505fa5
    SAHF                                ; 00505fa7
    JBE 0x00505fb7                      ; 00505fa8
        ;   XREF to: 00505fb7 (CONDITIONAL_JUMP)  ; LAB_00505fb7
    PUSH ESI                            ; 00505faa
    MOV EAX,dword ptr [EBP + 0x14]      ; 00505fab
    PUSH EAX                            ; 00505fae
    CALL core_netgame.cpp_CNetGame_sendGameSetting_FUN_00507450 ; 00505faf
        ;   XREF to: 00507450 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendGameSetting_FUN_00507450(CNetGame * this_ptr, int player_index)
    ADD ESP,0x8                         ; 00505fb4
    XOR EAX,EAX                         ; 00505fb7
        ;   Label: LAB_00505fb7
    MOV EDX,dword ptr [EBP + 0x14]      ; 00505fb9
        ;   Label: LAB_00505fb9
    INC ESI                             ; 00505fbc
    MOV ECX,dword ptr [EDX + 0x1c]      ; 00505fbd
    ADD EBX,0x80                        ; 00505fc0
    CMP ESI,ECX                         ; 00505fc6
    JL 0x00505f42                       ; 00505fc8
        ;   XREF to: 00505f42 (CONDITIONAL_JUMP)  ; LAB_00505f42
    TEST EAX,EAX                        ; 00505fce
        ;   Label: LAB_00505fce
    JZ 0x00506093                       ; 00505fd0
        ;   XREF to: 00506093 (CONDITIONAL_JUMP)  ; LAB_00506093
    MOV EAX,dword ptr [EBP + 0x14]      ; 00505fd6
    CMP dword ptr [EAX + 0x1c],0x1      ; 00505fd9
    JLE 0x00506093                      ; 00505fdd
        ;   XREF to: 00506093 (CONDITIONAL_JUMP)  ; LAB_00506093
    MOV dword ptr [EAX + 0x4],0x2       ; 00505fe3
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 00505fea
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    PUSH 0x1                            ; 00505fef
    MOV ESI,dword ptr [EBP + 0x14]      ; 00505ff1
    PUSH ESI                            ; 00505ff4
    CALL core_netgame.cpp_CNetGame_syncPlayers_FUN_00504890 ; 00505ff5
        ;   XREF to: 00504890 (UNCONDITIONAL_CALL)  ; int core_netgame.cpp_CNetGame_syncPlayers_FUN_00504890(CNetGame * this_ptr, int sync_stage)
    ADD ESP,0x8                         ; 00505ffa
    TEST EAX,EAX                        ; 00505ffd
    JZ 0x00506089                       ; 00505fff
        ;   XREF to: 00506089 (CONDITIONAL_JUMP)  ; LAB_00506089
    MOV EDI,dword ptr [ESP + 0x10c]     ; 00506005
    PUSH EDI                            ; 0050600c
    PUSH 0x5cabe9                       ; 0050600d
    MOV EAX,[0x005fb140]                ; 00506012 | g_CEditorToolsPtr
    PUSH EAX                            ; 00506017
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0047cfa0 ; 00506018
        ;   XREF to: 0047cfa0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0047cfa0(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 0050601d
    MOV EDX,dword ptr [ESI + 0x17c]     ; 00506020
    PUSH EDX                            ; 00506026
    CALL crt_stdlib.c_srand_FUN_005a35f0 ; 00506027
        ;   XREF to: 005a35f0 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_srand_FUN_005a35f0(uint seed)
    ADD ESP,0x4                         ; 0050602c
    MOV ECX,dword ptr [ESI + 0x17c]     ; 0050602f
    PUSH ECX                            ; 00506035
    CALL core_actor.cpp_setRandomSeed_FUN_0040cdc0 ; 00506036
        ;   XREF to: 0040cdc0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_setRandomSeed_FUN_0040cdc0(uint seed_value)
    ADD ESP,0x4                         ; 0050603b
    PUSH 0x0                            ; 0050603e
    PUSH EDI                            ; 00506040
    MOV ESI,dword ptr [0x00600530]      ; 00506041 | DAT_00600530
    PUSH ESI                            ; 00506047
    CALL core_mission.cpp_CDemonMission_load_FUN_004f5bc0 ; 00506048
        ;   XREF to: 004f5bc0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_load_FUN_004f5bc0(CDemonMission * this_ptr, char * mission_filename, int load_flags)
    ADD ESP,0xc                         ; 0050604d
    PUSH 0x0                            ; 00506050
    MOV EDI,dword ptr [0x00600530]      ; 00506052 | DAT_00600530
    PUSH EDI                            ; 00506058
    CALL core_mission.cpp_CDemonMission_createHeros_FUN_004f7880 ; 00506059
        ;   XREF to: 004f7880 (UNCONDITIONAL_CALL)  ; int core_mission.cpp_CDemonMission_createHeros_FUN_004f7880(CDemonMission * this_ptr, CCharacter * existing_hero)
    ADD ESP,0x8                         ; 0050605e
    TEST EAX,EAX                        ; 00506061
    JZ 0x00506089                       ; 00506063
        ;   XREF to: 00506089 (CONDITIONAL_JUMP)  ; LAB_00506089
    MOV EAX,[0x00600530]                ; 00506065 | DAT_00600530
    PUSH EAX                            ; 0050606a
    CALL core_mission.cpp_FUN_004f7590  ; 0050606b
        ;   XREF to: 004f7590 (UNCONDITIONAL_CALL)  ; int core_mission.cpp_FUN_004f7590(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 00506070
    PUSH 0x2                            ; 00506073
    MOV EDX,dword ptr [EBP + 0x14]      ; 00506075
    PUSH EDX                            ; 00506078
    CALL core_netgame.cpp_CNetGame_syncPlayers_FUN_00504890 ; 00506079
        ;   XREF to: 00504890 (UNCONDITIONAL_CALL)  ; int core_netgame.cpp_CNetGame_syncPlayers_FUN_00504890(CNetGame * this_ptr, int sync_stage)
    ADD ESP,0x8                         ; 0050607e
    TEST EAX,EAX                        ; 00506081
    JNZ 0x005061d4                      ; 00506083
        ;   XREF to: 005061d4 (CONDITIONAL_JUMP)  ; LAB_005061d4
    MOV EAX,dword ptr [EBP + 0x14]      ; 00506089
        ;   Label: LAB_00506089
    MOV dword ptr [EAX + 0x4],0x1       ; 0050608c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00506093
        ;   Label: LAB_00506093
    MOV EDX,dword ptr [EAX]             ; 00506096
    CMP EDX,0x2                         ; 00506098
    JNZ 0x005060a6                      ; 0050609b
        ;   XREF to: 005060a6 (CONDITIONAL_JUMP)  ; LAB_005060a6
    CMP EDX,dword ptr [EAX + 0x4]       ; 0050609d
    JZ 0x005061e0                       ; 005060a0
        ;   XREF to: 005061e0 (CONDITIONAL_JUMP)  ; LAB_005061e0
    MOV EAX,dword ptr [EBP + 0x14]      ; 005060a6
        ;   Label: LAB_005060a6
    CMP dword ptr [EAX],0x2             ; 005060a9
    JNZ 0x00506131                      ; 005060ac
        ;   XREF to: 00506131 (CONDITIONAL_JUMP)  ; LAB_00506131
    CMP dword ptr [0x00603454],0x0      ; 005060b2 | DAT_00603454
    JZ 0x00506131                       ; 005060b9
        ;   XREF to: 00506131 (CONDITIONAL_JUMP)  ; LAB_00506131
    MOV EAX,dword ptr [EAX + 0x124]     ; 005060bf
    MOV EDI,dword ptr [EBP + 0x14]      ; 005060c5
    SHL EAX,0x7                         ; 005060c8
    ADD EAX,EDI                         ; 005060cb
    MOV EDX,dword ptr [0x01da6478]      ; 005060cd | DAT_01da6478
    MOV EAX,dword ptr [EAX + 0x60]      ; 005060d3
    SUB EDX,EAX                         ; 005060d6
    MOV dword ptr [ESP + 0x120],EDX     ; 005060d8
    FILD dword ptr [ESP + 0x120]        ; 005060df
    FMUL double ptr [0x005cac11]        ; 005060e6 | DAT_005cac11
    FST float ptr [ESP + 0x4]           ; 005060ec
    FLDZ                                ; 005060f0
    FCOMPP                              ; 005060f2
    FNSTSW AX                           ; 005060f4
    SAHF                                ; 005060f6
    JBE 0x005060ff                      ; 005060f7
        ;   XREF to: 005060ff (CONDITIONAL_JUMP)  ; LAB_005060ff
    XOR EAX,EAX                         ; 005060f9
    MOV dword ptr [ESP + 0x4],EAX       ; 005060fb
    FLD float ptr [ESP + 0x4]           ; 005060ff
        ;   Label: LAB_005060ff
    FCOMP double ptr [0x005cac19]       ; 00506103 | DAT_005cac19
    FNSTSW AX                           ; 00506109
    SAHF                                ; 0050610b
    JBE 0x00506116                      ; 0050610c
        ;   XREF to: 00506116 (CONDITIONAL_JUMP)  ; LAB_00506116
    MOV dword ptr [ESP + 0x4],0x41f00000 ; 0050610e
    FLD float ptr [ESP + 0x4]           ; 00506116
        ;   Label: LAB_00506116
    FCOMP double ptr [0x005cac21]       ; 0050611a | DAT_005cac21
    FNSTSW AX                           ; 00506120
    SAHF                                ; 00506122
    JBE 0x00506131                      ; 00506123
        ;   XREF to: 00506131 (CONDITIONAL_JUMP)  ; LAB_00506131
    MOV ECX,dword ptr [EBP + 0x14]      ; 00506125
    PUSH ECX                            ; 00506128
    CALL core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_00507660 ; 00506129
        ;   XREF to: 00507660 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_00507660(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 0050612e
    PUSH 0x1                            ; 00506131
        ;   Label: LAB_00506131
    MOV EAX,[0x00600284]                ; 00506133 | DAT_00600284
    PUSH EAX                            ; 00506138
    MOV EDX,dword ptr [EAX]             ; 00506139
    CALL dword ptr [EDX + 0x4]          ; 0050613b
    ADD ESP,0x8                         ; 0050613e
    TEST EAX,EAX                        ; 00506141
    JNZ 0x00505d65                      ; 00506143
        ;   XREF to: 00505d65 (CONDITIONAL_JUMP)  ; LAB_00505d65
    PUSH 0x1c                           ; 00506149
    MOV EAX,[0x00600284]                ; 0050614b | DAT_00600284
    PUSH EAX                            ; 00506150
    MOV EDX,dword ptr [EAX]             ; 00506151
    CALL dword ptr [EDX + 0x4]          ; 00506153
    ADD ESP,0x8                         ; 00506156
    TEST EAX,EAX                        ; 00506159
    JZ 0x00506190                       ; 0050615b
        ;   XREF to: 00506190 (CONDITIONAL_JUMP)  ; LAB_00506190
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050615d
    MOV EAX,dword ptr [EAX + 0x124]     ; 00506160
    MOV EBX,dword ptr [EBP + 0x14]      ; 00506166
    SHL EAX,0x7                         ; 00506169
    ADD EAX,EBX                         ; 0050616c
    CMP dword ptr [EAX + 0x64],0x0      ; 0050616e
    SETZ DL                             ; 00506172
    AND EDX,0xff                        ; 00506175
    MOV dword ptr [EAX + 0x64],EDX      ; 0050617b
    CMP dword ptr [EBX],0x1             ; 0050617e
    JNZ 0x005062d4                      ; 00506181
        ;   XREF to: 005062d4 (CONDITIONAL_JUMP)  ; LAB_005062d4
    PUSH EBX                            ; 00506187
    CALL core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_00507370 ; 00506188
        ;   XREF to: 00507370 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_00507370(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 0050618d
        ;   Label: LAB_0050618d
    PUSH 0x1f                           ; 00506190
        ;   Label: LAB_00506190
    MOV EAX,[0x00600284]                ; 00506192 | DAT_00600284
    PUSH EAX                            ; 00506197
    MOV EDX,dword ptr [EAX]             ; 00506198
    CALL dword ptr [EDX + 0x4]          ; 0050619a
    ADD ESP,0x8                         ; 0050619d
    TEST EAX,EAX                        ; 005061a0
    JNZ 0x005062df                      ; 005061a2
        ;   XREF to: 005062df (CONDITIONAL_JUMP)  ; LAB_005062df
    MOV EDI,dword ptr [EBP + 0x14]      ; 005061a8
        ;   Label: LAB_005061a8
    XOR EBX,EBX                         ; 005061ab
    MOV EAX,[0x00603450]                ; 005061ad | g_CNetGamePtr
        ;   Label: LAB_005061ad
    CMP EBX,dword ptr [EAX + 0x1c]      ; 005061b2
    JGE 0x00505aaf                      ; 005061b5
        ;   XREF to: 00505aaf (CONDITIONAL_JUMP)  ; LAB_00505aaf
    PUSH 0x40000000                     ; 005061bb
    PUSH EBX                            ; 005061c0
    PUSH EDI                            ; 005061c1
    CALL core_netgame.cpp_CNetGame_updatePing_FUN_00506320 ; 005061c2
        ;   XREF to: 00506320 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_updatePing_FUN_00506320(CNetGame * this_ptr, int player_index, float max_ping)
    INC EBX                             ; 005061c7
    ADD ESP,0xc                         ; 005061c8
    JMP 0x005061ad                      ; 005061cb
        ;   XREF to: 005061ad (UNCONDITIONAL_JUMP)  ; LAB_005061ad
    XOR EAX,EAX                         ; 005061cd
        ;   Label: LAB_005061cd
    JMP 0x00505f4c                      ; 005061cf
        ;   XREF to: 00505f4c (UNCONDITIONAL_JUMP)  ; LAB_00505f4c
    MOV EAX,0x1                         ; 005061d4
        ;   Label: LAB_005061d4
    MOV ESP,EBP                         ; 005061d9
    POP EBP                             ; 005061db
    POP EDI                             ; 005061dc
    POP ESI                             ; 005061dd
    POP EBX                             ; 005061de
    RET                                 ; 005061df
    LEA EBX,[EAX + 0x128]               ; 005061e0
        ;   Label: LAB_005061e0
    PUSH EBX                            ; 005061e6
    PUSH 0x5cabf4                       ; 005061e7
    MOV ESI,dword ptr [0x005fb140]      ; 005061ec | g_CEditorToolsPtr
    PUSH ESI                            ; 005061f2
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0047cfa0 ; 005061f3
        ;   XREF to: 0047cfa0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0047cfa0(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 005061f8
    MOV EAX,dword ptr [EBP + 0x14]      ; 005061fb
    MOV EDI,dword ptr [EAX + 0x17c]     ; 005061fe
    PUSH EDI                            ; 00506204
    CALL crt_stdlib.c_srand_FUN_005a35f0 ; 00506205
        ;   XREF to: 005a35f0 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_srand_FUN_005a35f0(uint seed)
    ADD ESP,0x4                         ; 0050620a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050620d
    MOV EDX,dword ptr [EAX + 0x17c]     ; 00506210
    PUSH EDX                            ; 00506216
    CALL core_actor.cpp_setRandomSeed_FUN_0040cdc0 ; 00506217
        ;   XREF to: 0040cdc0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_setRandomSeed_FUN_0040cdc0(uint seed_value)
    ADD ESP,0x4                         ; 0050621c
    PUSH 0x0                            ; 0050621f
    PUSH EBX                            ; 00506221
    MOV ECX,dword ptr [0x00600530]      ; 00506222 | DAT_00600530
    PUSH ECX                            ; 00506228
    CALL core_mission.cpp_CDemonMission_load_FUN_004f5bc0 ; 00506229
        ;   XREF to: 004f5bc0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_load_FUN_004f5bc0(CDemonMission * this_ptr, char * mission_filename, int load_flags)
    ADD ESP,0xc                         ; 0050622e
    PUSH 0x0                            ; 00506231
    MOV EBX,dword ptr [0x00600530]      ; 00506233 | DAT_00600530
    PUSH EBX                            ; 00506239
    CALL core_mission.cpp_CDemonMission_createHeros_FUN_004f7880 ; 0050623a
        ;   XREF to: 004f7880 (UNCONDITIONAL_CALL)  ; int core_mission.cpp_CDemonMission_createHeros_FUN_004f7880(CDemonMission * this_ptr, CCharacter * existing_hero)
    ADD ESP,0x8                         ; 0050623f
    TEST EAX,EAX                        ; 00506242
    JZ 0x005062c5                       ; 00506244
        ;   XREF to: 005062c5 (CONDITIONAL_JUMP)  ; LAB_005062c5
    MOV ESI,dword ptr [0x00600530]      ; 0050624a | DAT_00600530
    PUSH ESI                            ; 00506250
    CALL core_mission.cpp_FUN_004f7590  ; 00506251
        ;   XREF to: 004f7590 (UNCONDITIONAL_CALL)  ; int core_mission.cpp_FUN_004f7590(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 00506256
    PUSH 0x2                            ; 00506259
    MOV EDI,dword ptr [EBP + 0x14]      ; 0050625b
    PUSH EDI                            ; 0050625e
    CALL core_netgame.cpp_CNetGame_syncPlayers_FUN_00504890 ; 0050625f
        ;   XREF to: 00504890 (UNCONDITIONAL_CALL)  ; int core_netgame.cpp_CNetGame_syncPlayers_FUN_00504890(CNetGame * this_ptr, int sync_stage)
    ADD ESP,0x8                         ; 00506264
    TEST EAX,EAX                        ; 00506267
    JZ 0x005062c5                       ; 00506269
        ;   XREF to: 005062c5 (CONDITIONAL_JUMP)  ; LAB_005062c5
    CALL wincore_winrun.cpp_getTime_FUN_005806a0 ; 0050626b
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_005806a0()
    MOV EDX,EAX                         ; 00506270
    MOV EBX,0x12                        ; 00506272
    SAR EDX,0x1f                        ; 00506277
    IDIV EBX                            ; 0050627a
    MOV ECX,dword ptr [0x01da6474]      ; 0050627c | DAT_01da6474
    MOV EDX,EAX                         ; 00506282
    SUB EAX,ECX                         ; 00506284
    MOV dword ptr [0x01da6474],EDX      ; 00506286 | DAT_01da6474
    TEST EAX,EAX                        ; 0050628c
    JL 0x005062c1                       ; 0050628e
        ;   XREF to: 005062c1 (CONDITIONAL_JUMP)  ; LAB_005062c1
    CMP EAX,0x20000                     ; 00506290
    JLE 0x0050629c                      ; 00506295
        ;   XREF to: 0050629c (CONDITIONAL_JUMP)  ; LAB_0050629c
    MOV EAX,0x20000                     ; 00506297
    MOV EBX,dword ptr [0x01da6478]      ; 0050629c | DAT_01da6478
        ;   Label: LAB_0050629c
    ADD EBX,EAX                         ; 005062a2
    MOV dword ptr [0x01da6478],EBX      ; 005062a4 | DAT_01da6478
    LEA EAX,[EBX + 0xffe20000]          ; 005062aa
    MOV [0x01da6488],EAX                ; 005062b0 | DAT_01da6488
    MOV EAX,0x1                         ; 005062b5
    MOV ESP,EBP                         ; 005062ba
    POP EBP                             ; 005062bc
    POP EDI                             ; 005062bd
    POP ESI                             ; 005062be
    POP EBX                             ; 005062bf
    RET                                 ; 005062c0
    XOR EAX,EAX                         ; 005062c1
        ;   Label: LAB_005062c1
    JMP 0x0050629c                      ; 005062c3
        ;   XREF to: 0050629c (UNCONDITIONAL_JUMP)  ; LAB_0050629c
    MOV EAX,dword ptr [EBP + 0x14]      ; 005062c5
        ;   Label: LAB_005062c5
    MOV dword ptr [EAX + 0x4],0x1       ; 005062c8
    JMP 0x00505d65                      ; 005062cf
        ;   XREF to: 00505d65 (UNCONDITIONAL_JUMP)  ; LAB_00505d65
    PUSH EBX                            ; 005062d4
        ;   Label: LAB_005062d4
    CALL core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_00507660 ; 005062d5
        ;   XREF to: 00507660 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_00507660(CNetGame * this_ptr)
    JMP 0x0050618d                      ; 005062da
        ;   XREF to: 0050618d (UNCONDITIONAL_JUMP)  ; LAB_0050618d
    PUSH 0x1                            ; 005062df
        ;   Label: LAB_005062df
    PUSH 0x100                          ; 005062e1
    PUSH 0x1da61f0                      ; 005062e6
    PUSH 0x5cabff                       ; 005062eb
    MOV ECX,dword ptr [0x005fb140]      ; 005062f0 | g_CEditorToolsPtr
    PUSH ECX                            ; 005062f6
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_0047ecf0 ; 005062f7
        ;   XREF to: 0047ecf0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_0047ecf0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 005062fc
    TEST EAX,EAX                        ; 005062ff
    JZ 0x005061a8                       ; 00506301
        ;   XREF to: 005061a8 (CONDITIONAL_JUMP)  ; LAB_005061a8
    PUSH -0x1                           ; 00506307
    PUSH 0x1da61f0                      ; 00506309
    MOV EBX,dword ptr [EBP + 0x14]      ; 0050630e
    PUSH EBX                            ; 00506311
    CALL core_netgame.cpp_CNetGame_processChatOut_FUN_005064d0 ; 00506312
        ;   XREF to: 005064d0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_processChatOut_FUN_005064d0(CNetGame * this_ptr, char * message, int target_player)
    ADD ESP,0xc                         ; 00506317
    JMP 0x005061a8                      ; 0050631a
        ;   XREF to: 005061a8 (UNCONDITIONAL_JUMP)  ; LAB_005061a8

