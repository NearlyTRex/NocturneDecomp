; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_netgame_cpp_CNetGame_runLobby_FUN_0050cf50(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_game.cpp_hostNetworkGame_FUN_004bd2f0 at 004bd344
;   core_game.cpp_joinNetworkGame_FUN_004bd3a0 at 004bd411
;
; Referenced Globals:
;   undefined4 DAT_005e0b9d
;   undefined4 DAT_005e0ba5
;   undefined4 DAT_005e0bad
;   undefined4 DAT_005e0bb5
;   CEditorTools* g_CEditorToolsPtr = 01c25594
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_00617dd4
;   undefined4 DAT_00618170
;   CNetGame* g_CNetGamePtr = 01d34cb0
;   undefined4 DAT_0061b124
;   undefined4 DAT_0061e990
;   undefined4 DAT_01c35e60
;   undefined4 DAT_01d34e34
;   undefined4 DAT_01d34e38
;   ... and 4 more
;
; Called Functions:
;   core_actor.cpp_setRandomSeed_FUN_0040cee0
;   core_mission.cpp_CDemonMission_createHeros_FUN_004fd0e0
;   core_mission.cpp_CDemonMission_load_FUN_004fb490
;   core_mission.cpp_FUN_004fce00
;   core_netgame.cpp_CNetGame_disconnect_FUN_0050b8d0
;   core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_0050e890
;   core_netgame.cpp_CNetGame_processChatOut_FUN_0050d9f0
;   core_netgame.cpp_CNetGame_receivePackets_FUN_0050c190
;   core_netgame.cpp_CNetGame_sendGameSetting_FUN_0050e970
;   core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_0050eb80
;   core_netgame.cpp_CNetGame_syncPlayers_FUN_0050bdb0
;   core_netgame.cpp_CNetGame_updatePing_FUN_0050d840
;   crt_math.c_round_FUN_005b7ff0
;   crt_stdlib.c_rand_FUN_005b849c
;   crt_stdlib.c_srand_FUN_005b84c0
;   ... and 11 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050cf50
        ;   Label: core_netgame.cpp_CNetGame_runLobby_FUN_0050cf50
    PUSH ESI                            ; 0050cf51
    PUSH EDI                            ; 0050cf52
    PUSH EBP                            ; 0050cf53
    MOV EBP,ESP                         ; 0050cf54
    SUB ESP,0x124                       ; 0050cf56
    AND ESP,0xfffffff8                  ; 0050cf5c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050cf5f
    CMP dword ptr [EAX],0x0             ; 0050cf62
    JZ 0x0050d2a9                       ; 0050cf65
        ;   XREF to: 0050d2a9 (CONDITIONAL_JUMP)  ; LAB_0050d2a9
    MOV EAX,[0x0061e990]                ; 0050cf6b | DAT_0061e990
    MOV dword ptr [ESP + 0x108],EAX     ; 0050cf70
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050cf77
    MOV EAX,dword ptr [EAX + 0x124]     ; 0050cf7a
    MOV EBX,dword ptr [EBP + 0x14]      ; 0050cf80
    SHL EAX,0x7                         ; 0050cf83
    ADD EAX,EBX                         ; 0050cf86
    MOV dword ptr [EAX + 0x5c],0x1      ; 0050cf88
    MOV EAX,dword ptr [EBX + 0x124]     ; 0050cf8f
    SHL EAX,0x7                         ; 0050cf95
    ADD EAX,EBX                         ; 0050cf98
    XOR ECX,ECX                         ; 0050cf9a
    MOV dword ptr [EAX + 0x64],ECX      ; 0050cf9c
    MOV dword ptr [0x0061e990],ECX      ; 0050cf9f | DAT_0061e990
    MOV EDI,dword ptr [EBX]             ; 0050cfa5
    MOV dword ptr [EBX + 0x4],0x1       ; 0050cfa7
    CMP EDI,0x1                         ; 0050cfae
    JZ 0x0050d25b                       ; 0050cfb1
        ;   XREF to: 0050d25b (CONDITIONAL_JUMP)  ; LAB_0050d25b
    PUSH EBX                            ; 0050cfb7
    CALL core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_0050eb80 ; 0050cfb8
        ;   XREF to: 0050eb80 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_0050eb80(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 0050cfbd
        ;   Label: LAB_0050cfbd
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050cfc0
    ADD EAX,0x128                       ; 0050cfc3
    MOV dword ptr [ESP + 0x10c],EAX     ; 0050cfc8
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050cfcf
        ;   Label: LAB_0050cfcf
    CMP dword ptr [EAX],0x0             ; 0050cfd2
    JZ 0x0050d271                       ; 0050cfd5
        ;   XREF to: 0050d271 (CONDITIONAL_JUMP)  ; LAB_0050d271
    CALL engine_special.cpp_clearScreen_FUN_0055b1f0 ; 0050cfdb
        ;   XREF to: 0055b1f0 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0055b1f0()
    MOV EBX,dword ptr [ESP + 0x10c]     ; 0050cfe0
    PUSH EBX                            ; 0050cfe7
    PUSH 0x5e0b05                       ; 0050cfe8
    LEA EAX,[ESP + 0x10]                ; 0050cfed
    PUSH EAX                            ; 0050cff1
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0050cff2
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 0050cff7
    PUSH 0xb                            ; 0050cffa
    PUSH 0x0                            ; 0050cffc
    LEA EAX,[ESP + 0x10]                ; 0050cffe
    PUSH EAX                            ; 0050d002
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 0050d003
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0050d008
    MOV ESI,dword ptr [0x01d34e44]      ; 0050d00b | DAT_01d34e44
    PUSH ESI                            ; 0050d011
    PUSH 0x5e0b11                       ; 0050d012
    LEA EAX,[ESP + 0x10]                ; 0050d017
    PUSH EAX                            ; 0050d01b
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0050d01c
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 0050d021
    PUSH 0xb                            ; 0050d024
    PUSH 0x190                          ; 0050d026
    LEA EAX,[ESP + 0x10]                ; 0050d02b
    PUSH EAX                            ; 0050d02f
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 0050d030
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0050d035
    PUSH 0x21                           ; 0050d038
    PUSH 0x0                            ; 0050d03a
    PUSH 0x5e0b25                       ; 0050d03c
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 0050d041
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0050d046
    PUSH 0x21                           ; 0050d049
    PUSH 0x64                           ; 0050d04b
    PUSH 0x5e0b2c                       ; 0050d04d
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 0050d052
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0050d057
    PUSH 0x21                           ; 0050d05a
    PUSH 0xc8                           ; 0050d05c
    PUSH 0x5e0b2f                       ; 0050d061
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 0050d066
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0050d06b
    PUSH 0x21                           ; 0050d06e
    PUSH 0x12c                          ; 0050d070
    PUSH 0x5e0b34                       ; 0050d075
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 0050d07a
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0050d07f
    PUSH 0x21                           ; 0050d082
    PUSH 0x190                          ; 0050d084
    PUSH 0x5e0b3a                       ; 0050d089
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 0050d08e
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0050d093
    PUSH 0x21                           ; 0050d096
    PUSH 0x1f4                          ; 0050d098
    PUSH 0x5e0b43                       ; 0050d09d
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 0050d0a2
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    MOV EAX,[0x006141b8]                ; 0050d0a7 | DAT_006141b8
    ADD ESP,0xc                         ; 0050d0ac
    DEC EAX                             ; 0050d0af
    PUSH EAX                            ; 0050d0b0
    PUSH 0x31                           ; 0050d0b1
    MOV EDI,0xff                        ; 0050d0b3
    PUSH 0x0                            ; 0050d0b8
    MOV dword ptr [0x01c35e60],EDI      ; 0050d0ba | DAT_01c35e60
    CALL engine_2d.c_drawHLine_FUN_00402f30 ; 0050d0c0
        ;   XREF to: 00402f30 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00402f30(int x1, int y, int x2)
    ADD ESP,0xc                         ; 0050d0c5
    XOR EAX,EAX                         ; 0050d0c8
    MOV EBX,0x37                        ; 0050d0ca
    MOV dword ptr [ESP + 0x118],EAX     ; 0050d0cf
    MOV dword ptr [ESP + 0x110],EAX     ; 0050d0d6
    MOV ESI,dword ptr [0x0061b120]      ; 0050d0dd | g_CNetGamePtr
        ;   Label: LAB_0050d0dd
    MOV EAX,dword ptr [ESP + 0x118]     ; 0050d0e3
    CMP EAX,dword ptr [ESI + 0x1c]      ; 0050d0ea
    JGE 0x0050d35c                      ; 0050d0ed
        ;   XREF to: 0050d35c (CONDITIONAL_JUMP)  ; LAB_0050d35c
    PUSH EBX                            ; 0050d0f3
    MOV EAX,dword ptr [ESP + 0x114]     ; 0050d0f4
    ADD ESI,0x20                        ; 0050d0fb
    PUSH 0x0                            ; 0050d0fe
    ADD EAX,ESI                         ; 0050d100
    PUSH EAX                            ; 0050d102
    MOV dword ptr [ESP + 0x128],EAX     ; 0050d103
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 0050d10a
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0050d10f
    MOV ESI,dword ptr [ESP + 0x11c]     ; 0050d112
    MOV EAX,[0x02653630]                ; 0050d119 | DAT_02653630
    MOV EDX,dword ptr [ESI + 0x1c]      ; 0050d11e
    ADD ESI,0x1c                        ; 0050d121
    CMP EAX,EDX                         ; 0050d124
    JNZ 0x0050d2b2                      ; 0050d126
        ;   XREF to: 0050d2b2 (CONDITIONAL_JUMP)  ; LAB_0050d2b2
    MOV ESI,0x5e0b50                    ; 0050d12c
    LEA EDI,[ESP + 0x8]                 ; 0050d131
    PUSH EDI                            ; 0050d135
    MOV AL,byte ptr [ESI]               ; 0050d136
        ;   Label: LAB_0050d136
    MOV byte ptr [EDI],AL               ; 0050d138
    CMP AL,0x0                          ; 0050d13a
    JZ 0x0050d14e                       ; 0050d13c
        ;   XREF to: 0050d14e (CONDITIONAL_JUMP)  ; LAB_0050d14e
    MOV AL,byte ptr [ESI + 0x1]         ; 0050d13e
    ADD ESI,0x2                         ; 0050d141
    MOV byte ptr [EDI + 0x1],AL         ; 0050d144
    ADD EDI,0x2                         ; 0050d147
    CMP AL,0x0                          ; 0050d14a
    JNZ 0x0050d136                      ; 0050d14c
        ;   XREF to: 0050d136 (CONDITIONAL_JUMP)  ; LAB_0050d136
    POP EDI                             ; 0050d14e
        ;   Label: LAB_0050d14e
    PUSH EBX                            ; 0050d14f
        ;   Label: LAB_0050d14f
    PUSH 0x64                           ; 0050d150
    LEA EAX,[ESP + 0x10]                ; 0050d152
    PUSH EAX                            ; 0050d156
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 0050d157
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0050d15c
    MOV EAX,[0x0061b120]                ; 0050d15f | g_CNetGamePtr
    MOV EDX,dword ptr [ESP + 0x118]     ; 0050d164
    CMP EDX,dword ptr [EAX + 0x124]     ; 0050d16b
    JNZ 0x0050d2c5                      ; 0050d171
        ;   XREF to: 0050d2c5 (CONDITIONAL_JUMP)  ; LAB_0050d2c5
    MOV ESI,0x5e0b58                    ; 0050d177
    LEA EDI,[ESP + 0x8]                 ; 0050d17c
        ;   Label: LAB_0050d17c
    PUSH EDI                            ; 0050d180
    MOV AL,byte ptr [ESI]               ; 0050d181
        ;   Label: LAB_0050d181
    MOV byte ptr [EDI],AL               ; 0050d183
    CMP AL,0x0                          ; 0050d185
    JZ 0x0050d199                       ; 0050d187
        ;   XREF to: 0050d199 (CONDITIONAL_JUMP)  ; LAB_0050d199
    MOV AL,byte ptr [ESI + 0x1]         ; 0050d189
    ADD ESI,0x2                         ; 0050d18c
    MOV byte ptr [EDI + 0x1],AL         ; 0050d18f
    ADD EDI,0x2                         ; 0050d192
    CMP AL,0x0                          ; 0050d195
    JNZ 0x0050d181                      ; 0050d197
        ;   XREF to: 0050d181 (CONDITIONAL_JUMP)  ; LAB_0050d181
    POP EDI                             ; 0050d199
        ;   Label: LAB_0050d199
    PUSH EBX                            ; 0050d19a
        ;   Label: LAB_0050d19a
    PUSH 0xc8                           ; 0050d19b
    LEA EAX,[ESP + 0x10]                ; 0050d1a0
    PUSH EAX                            ; 0050d1a4
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 0050d1a5
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0050d1aa
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0050d1ad
    CMP dword ptr [EAX + 0x44],0x0      ; 0050d1b4
    JZ 0x0050d31d                       ; 0050d1b8
        ;   XREF to: 0050d31d (CONDITIONAL_JUMP)  ; LAB_0050d31d
    MOV ESI,0x5e0b67                    ; 0050d1be
    LEA EDI,[ESP + 0x8]                 ; 0050d1c3
        ;   Label: LAB_0050d1c3
    PUSH EDI                            ; 0050d1c7
    MOV AL,byte ptr [ESI]               ; 0050d1c8
        ;   Label: LAB_0050d1c8
    MOV byte ptr [EDI],AL               ; 0050d1ca
    CMP AL,0x0                          ; 0050d1cc
    JZ 0x0050d1e0                       ; 0050d1ce
        ;   XREF to: 0050d1e0 (CONDITIONAL_JUMP)  ; LAB_0050d1e0
    MOV AL,byte ptr [ESI + 0x1]         ; 0050d1d0
    ADD ESI,0x2                         ; 0050d1d3
    MOV byte ptr [EDI + 0x1],AL         ; 0050d1d6
    ADD EDI,0x2                         ; 0050d1d9
    CMP AL,0x0                          ; 0050d1dc
    JNZ 0x0050d1c8                      ; 0050d1de
        ;   XREF to: 0050d1c8 (CONDITIONAL_JUMP)  ; LAB_0050d1c8
    POP EDI                             ; 0050d1e0
        ;   Label: LAB_0050d1e0
    PUSH EBX                            ; 0050d1e1
    PUSH 0x12c                          ; 0050d1e2
    LEA EAX,[ESP + 0x10]                ; 0050d1e7
    PUSH EAX                            ; 0050d1eb
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 0050d1ec
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0050d1f1
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0050d1f4
    MOV EDX,dword ptr [EAX + 0x14]      ; 0050d1fb
    PUSH EDX                            ; 0050d1fe
    PUSH 0x5e0b77                       ; 0050d1ff
    LEA EAX,[ESP + 0x10]                ; 0050d204
    PUSH EAX                            ; 0050d208
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0050d209
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 0050d20e
    PUSH EBX                            ; 0050d211
    PUSH 0x190                          ; 0050d212
    LEA EAX,[ESP + 0x10]                ; 0050d217
    PUSH EAX                            ; 0050d21b
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 0050d21c
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0050d221
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050d224
    CMP dword ptr [EAX],0x1             ; 0050d227
    JZ 0x0050d327                       ; 0050d22a
        ;   XREF to: 0050d327 (CONDITIONAL_JUMP)  ; LAB_0050d327
    MOV EDI,dword ptr [ESP + 0x110]     ; 0050d230
        ;   Label: LAB_0050d230
    MOV EAX,dword ptr [ESP + 0x118]     ; 0050d237
    ADD EBX,0xb                         ; 0050d23e
    ADD EDI,0x80                        ; 0050d241
    INC EAX                             ; 0050d247
    MOV dword ptr [ESP + 0x110],EDI     ; 0050d248
    MOV dword ptr [ESP + 0x118],EAX     ; 0050d24f
    JMP 0x0050d0dd                      ; 0050d256
        ;   XREF to: 0050d0dd (UNCONDITIONAL_JUMP)  ; LAB_0050d0dd
    CALL crt_stdlib.c_rand_FUN_005b849c ; 0050d25b
        ;   XREF to: 005b849c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005b849c()
        ;   Label: LAB_0050d25b
    PUSH EBX                            ; 0050d260
    MOV dword ptr [EBX + 0x17c],EAX     ; 0050d261
    CALL core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_0050e890 ; 0050d267
        ;   XREF to: 0050e890 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_0050e890(CNetGame * this_ptr)
    JMP 0x0050cfbd                      ; 0050d26c
        ;   XREF to: 0050cfbd (UNCONDITIONAL_JUMP)  ; LAB_0050cfbd
    PUSH 0x5e0adb                       ; 0050d271
        ;   Label: LAB_0050d271
    MOV ECX,dword ptr [0x006138e0]      ; 0050d276 | g_CEditorToolsPtr
    PUSH ECX                            ; 0050d27c
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0047bda0 ; 0050d27d
        ;   XREF to: 0047bda0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0047bda0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0050d282
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 0050d285
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
        ;   Label: LAB_0050d285
    PUSH 0x1                            ; 0050d28a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050d28c
    PUSH EAX                            ; 0050d28f
    CALL core_netgame.cpp_CNetGame_disconnect_FUN_0050b8d0 ; 0050d290
        ;   XREF to: 0050b8d0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_disconnect_FUN_0050b8d0(CNetGame * this_ptr, int perform_handshake)
    ADD ESP,0x8                         ; 0050d295
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 0050d298
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    MOV EAX,dword ptr [ESP + 0x108]     ; 0050d29d
    MOV [0x0061e990],EAX                ; 0050d2a4 | DAT_0061e990
    XOR EAX,EAX                         ; 0050d2a9
        ;   Label: LAB_0050d2a9
    MOV ESP,EBP                         ; 0050d2ab
    POP EBP                             ; 0050d2ad
    POP EDI                             ; 0050d2ae
    POP ESI                             ; 0050d2af
    POP EBX                             ; 0050d2b0
    RET                                 ; 0050d2b1
    LEA EAX,[ESP + 0x8]                 ; 0050d2b2
        ;   Label: LAB_0050d2b2
    PUSH EAX                            ; 0050d2b6
    PUSH ESI                            ; 0050d2b7
    CALL support_trisock.cpp_formatIPAddress_FUN_00578cb0 ; 0050d2b8
        ;   XREF to: 00578cb0 (UNCONDITIONAL_CALL)  ; void support_trisock.cpp_formatIPAddress_FUN_00578cb0(uchar * ip_bytes, char * output_buffer)
    ADD ESP,0x8                         ; 0050d2bd
    JMP 0x0050d14f                      ; 0050d2c0
        ;   XREF to: 0050d14f (UNCONDITIONAL_JUMP)  ; LAB_0050d14f
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0050d2c5
        ;   Label: LAB_0050d2c5
    FLD float ptr [EAX + 0x28]          ; 0050d2cc
    FLDZ                                ; 0050d2cf
    FCOMPP                              ; 0050d2d1
    FNSTSW AX                           ; 0050d2d3
    SAHF                                ; 0050d2d5
    JA 0x0050d313                       ; 0050d2d6
        ;   XREF to: 0050d313 (CONDITIONAL_JUMP)  ; LAB_0050d313
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0050d2d8
    FLD float ptr [EAX + 0x28]          ; 0050d2df
    FMUL float ptr [0x005e0b9d]         ; 0050d2e2 | DAT_005e0b9d
    CALL crt_math.c_round_FUN_005b7ff0  ; 0050d2e8
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x120]       ; 0050d2ed
    MOV ESI,dword ptr [ESP + 0x120]     ; 0050d2f4
    PUSH ESI                            ; 0050d2fb
    PUSH 0x5e0b60                       ; 0050d2fc
    LEA EAX,[ESP + 0x10]                ; 0050d301
    PUSH EAX                            ; 0050d305
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0050d306
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 0050d30b
    JMP 0x0050d19a                      ; 0050d30e
        ;   XREF to: 0050d19a (UNCONDITIONAL_JUMP)  ; LAB_0050d19a
    MOV ESI,0x5e0b65                    ; 0050d313
        ;   Label: LAB_0050d313
    JMP 0x0050d17c                      ; 0050d318
        ;   XREF to: 0050d17c (UNCONDITIONAL_JUMP)  ; LAB_0050d17c
    MOV ESI,0x5e0b6d                    ; 0050d31d
        ;   Label: LAB_0050d31d
    JMP 0x0050d1c3                      ; 0050d322
        ;   XREF to: 0050d1c3 (UNCONDITIONAL_JUMP)  ; LAB_0050d1c3
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0050d327
        ;   Label: LAB_0050d327
    MOV ESI,dword ptr [EAX + 0x34]      ; 0050d32e
    PUSH ESI                            ; 0050d331
    PUSH 0x5e0b7a                       ; 0050d332
    LEA EAX,[ESP + 0x10]                ; 0050d337
    PUSH EAX                            ; 0050d33b
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0050d33c
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 0050d341
    PUSH EBX                            ; 0050d344
    PUSH 0x1f4                          ; 0050d345
    LEA EAX,[ESP + 0x10]                ; 0050d34a
    PUSH EAX                            ; 0050d34e
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 0050d34f
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0050d354
    JMP 0x0050d230                      ; 0050d357
        ;   XREF to: 0050d230 (UNCONDITIONAL_JUMP)  ; LAB_0050d230
    MOV EDX,dword ptr [0x006141bc]      ; 0050d35c | DAT_006141bc
        ;   Label: LAB_0050d35c
    ADD EBX,0x2c                        ; 0050d362
    SUB EDX,EBX                         ; 0050d365
    MOV ESI,0xb                         ; 0050d367
    MOV EAX,EDX                         ; 0050d36c
    SAR EDX,0x1f                        ; 0050d36e
    IDIV ESI                            ; 0050d371
    MOV ESI,dword ptr [0x01d34e4c]      ; 0050d373 | DAT_01d34e4c
    SUB ESI,EAX                         ; 0050d379
    INC ESI                             ; 0050d37b
    TEST ESI,ESI                        ; 0050d37c
    JL 0x0050d3e5                       ; 0050d37e
        ;   XREF to: 0050d3e5 (CONDITIONAL_JUMP)  ; LAB_0050d3e5
    IMUL EAX,ESI,0x120                  ; 0050d380
        ;   Label: LAB_0050d380
    LEA EDI,[EAX + 0x20]                ; 0050d386
    ADD EAX,0xc                         ; 0050d389
    ADD EAX,0x1d34e50                   ; 0050d38c
    ADD EDI,0x1d34e50                   ; 0050d391
    MOV dword ptr [ESP + 0x114],EAX     ; 0050d397
    CMP ESI,dword ptr [0x01d34e4c]      ; 0050d39e | DAT_01d34e4c
        ;   Label: LAB_0050d39e
    JGE 0x0050d3e9                      ; 0050d3a4
        ;   XREF to: 0050d3e9 (CONDITIONAL_JUMP)  ; LAB_0050d3e9
    PUSH EBX                            ; 0050d3a6
    PUSH 0x0                            ; 0050d3a7
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0050d3a9
    PUSH EAX                            ; 0050d3b0
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 0050d3b1
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0050d3b6
    PUSH EBX                            ; 0050d3b9
    PUSH 0x64                           ; 0050d3ba
    PUSH EDI                            ; 0050d3bc
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 0050d3bd
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0050d3c2
    INC ESI                             ; 0050d3c5
    MOV EDX,dword ptr [ESP + 0x114]     ; 0050d3c6
    ADD EBX,0xb                         ; 0050d3cd
    ADD EDX,0x120                       ; 0050d3d0
    ADD EDI,0x120                       ; 0050d3d6
    MOV dword ptr [ESP + 0x114],EDX     ; 0050d3dc
    JMP 0x0050d39e                      ; 0050d3e3
        ;   XREF to: 0050d39e (UNCONDITIONAL_JUMP)  ; LAB_0050d39e
    XOR ESI,ESI                         ; 0050d3e5
        ;   Label: LAB_0050d3e5
    JMP 0x0050d380                      ; 0050d3e7
        ;   XREF to: 0050d380 (UNCONDITIONAL_JUMP)  ; LAB_0050d380
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00589560 ; 0050d3e9
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00589560()
        ;   Label: LAB_0050d3e9
    MOV ECX,dword ptr [EBP + 0x14]      ; 0050d3ee
    PUSH ECX                            ; 0050d3f1
    CALL core_netgame.cpp_CNetGame_receivePackets_FUN_0050c190 ; 0050d3f2
        ;   XREF to: 0050c190 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_receivePackets_FUN_0050c190(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 0050d3f7
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050d3fa
    MOV ESI,dword ptr [EAX + 0x1c]      ; 0050d3fd
    XOR EBX,EBX                         ; 0050d400
    TEST ESI,ESI                        ; 0050d402
    JLE 0x0050d420                      ; 0050d404
        ;   XREF to: 0050d420 (CONDITIONAL_JUMP)  ; LAB_0050d420
    MOV ESI,EAX                         ; 0050d406
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050d408
    MOV dword ptr [ESI + 0x68],0x0      ; 0050d40b
        ;   Label: LAB_0050d40b
    INC EBX                             ; 0050d412
    MOV ECX,dword ptr [EAX + 0x1c]      ; 0050d413
    ADD ESI,0x80                        ; 0050d416
    CMP EBX,ECX                         ; 0050d41c
    JL 0x0050d40b                       ; 0050d41e
        ;   XREF to: 0050d40b (CONDITIONAL_JUMP)  ; LAB_0050d40b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050d420
        ;   Label: LAB_0050d420
    MOV EBX,dword ptr [EAX]             ; 0050d423
    MOV dword ptr [EAX + 0x178],0x0     ; 0050d425
    CMP EBX,0x1                         ; 0050d42f
    JNZ 0x0050d5b3                      ; 0050d432
        ;   XREF to: 0050d5b3 (CONDITIONAL_JUMP)  ; LAB_0050d5b3
    MOV EAX,dword ptr [EAX + 0x124]     ; 0050d438
    MOV EDX,dword ptr [EBP + 0x14]      ; 0050d43e
    SHL EAX,0x7                         ; 0050d441
    ADD EDX,EAX                         ; 0050d444
    MOV EAX,[0x01d34e44]                ; 0050d446 | DAT_01d34e44
    MOV dword ptr [EDX + 0x54],EAX      ; 0050d44b
    MOV EDX,dword ptr [EBP + 0x14]      ; 0050d44e
    XOR ESI,ESI                         ; 0050d451
    MOV EDI,dword ptr [EDX + 0x1c]      ; 0050d453
    MOV EAX,EBX                         ; 0050d456
    TEST EDI,EDI                        ; 0050d458
    JLE 0x0050d4ee                      ; 0050d45a
        ;   XREF to: 0050d4ee (CONDITIONAL_JUMP)  ; LAB_0050d4ee
    MOV EBX,EDX                         ; 0050d460
    CMP dword ptr [EBX + 0x64],0x0      ; 0050d462
        ;   Label: LAB_0050d462
    JZ 0x0050d6ed                       ; 0050d466
        ;   XREF to: 0050d6ed (CONDITIONAL_JUMP)  ; LAB_0050d6ed
    MOV EDX,dword ptr [0x01d34e44]      ; 0050d46c | DAT_01d34e44
        ;   Label: LAB_0050d46c
    CMP EDX,dword ptr [EBX + 0x54]      ; 0050d472
    JZ 0x0050d4d9                       ; 0050d475
        ;   XREF to: 0050d4d9 (CONDITIONAL_JUMP)  ; LAB_0050d4d9
    MOV EDX,dword ptr [0x01d34e38]      ; 0050d477 | DAT_01d34e38
    MOV EAX,dword ptr [EBX + 0x58]      ; 0050d47d
    SUB EDX,EAX                         ; 0050d480
    MOV dword ptr [ESP + 0x120],EDX     ; 0050d482
    FILD dword ptr [ESP + 0x120]        ; 0050d489
    FMUL double ptr [0x005e0ba5]        ; 0050d490 | DAT_005e0ba5
    FST float ptr [ESP]                 ; 0050d496
    FLDZ                                ; 0050d499
    FCOMPP                              ; 0050d49b
    FNSTSW AX                           ; 0050d49d
    SAHF                                ; 0050d49f
    JBE 0x0050d4a7                      ; 0050d4a0
        ;   XREF to: 0050d4a7 (CONDITIONAL_JUMP)  ; LAB_0050d4a7
    XOR ECX,ECX                         ; 0050d4a2
    MOV dword ptr [ESP],ECX             ; 0050d4a4
    FLD float ptr [ESP]                 ; 0050d4a7
        ;   Label: LAB_0050d4a7
    FCOMP double ptr [0x005e0bad]       ; 0050d4aa | DAT_005e0bad
    FNSTSW AX                           ; 0050d4b0
    SAHF                                ; 0050d4b2
    JBE 0x0050d4bc                      ; 0050d4b3
        ;   XREF to: 0050d4bc (CONDITIONAL_JUMP)  ; LAB_0050d4bc
    MOV dword ptr [ESP],0x41f00000      ; 0050d4b5
    FLD float ptr [ESP]                 ; 0050d4bc
        ;   Label: LAB_0050d4bc
    FCOMP double ptr [0x005e0bb5]       ; 0050d4bf | DAT_005e0bb5
    FNSTSW AX                           ; 0050d4c5
    SAHF                                ; 0050d4c7
    JBE 0x0050d4d7                      ; 0050d4c8
        ;   XREF to: 0050d4d7 (CONDITIONAL_JUMP)  ; LAB_0050d4d7
    PUSH ESI                            ; 0050d4ca
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050d4cb
    PUSH EAX                            ; 0050d4ce
    CALL core_netgame.cpp_CNetGame_sendGameSetting_FUN_0050e970 ; 0050d4cf
        ;   XREF to: 0050e970 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendGameSetting_FUN_0050e970(CNetGame * this_ptr, int player_index)
    ADD ESP,0x8                         ; 0050d4d4
    XOR EAX,EAX                         ; 0050d4d7
        ;   Label: LAB_0050d4d7
    MOV EDX,dword ptr [EBP + 0x14]      ; 0050d4d9
        ;   Label: LAB_0050d4d9
    INC ESI                             ; 0050d4dc
    MOV ECX,dword ptr [EDX + 0x1c]      ; 0050d4dd
    ADD EBX,0x80                        ; 0050d4e0
    CMP ESI,ECX                         ; 0050d4e6
    JL 0x0050d462                       ; 0050d4e8
        ;   XREF to: 0050d462 (CONDITIONAL_JUMP)  ; LAB_0050d462
    TEST EAX,EAX                        ; 0050d4ee
        ;   Label: LAB_0050d4ee
    JZ 0x0050d5b3                       ; 0050d4f0
        ;   XREF to: 0050d5b3 (CONDITIONAL_JUMP)  ; LAB_0050d5b3
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050d4f6
    CMP dword ptr [EAX + 0x1c],0x1      ; 0050d4f9
    JLE 0x0050d5b3                      ; 0050d4fd
        ;   XREF to: 0050d5b3 (CONDITIONAL_JUMP)  ; LAB_0050d5b3
    MOV dword ptr [EAX + 0x4],0x2       ; 0050d503
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 0050d50a
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    PUSH 0x1                            ; 0050d50f
    MOV ESI,dword ptr [EBP + 0x14]      ; 0050d511
    PUSH ESI                            ; 0050d514
    CALL core_netgame.cpp_CNetGame_syncPlayers_FUN_0050bdb0 ; 0050d515
        ;   XREF to: 0050bdb0 (UNCONDITIONAL_CALL)  ; int core_netgame.cpp_CNetGame_syncPlayers_FUN_0050bdb0(CNetGame * this_ptr, int sync_stage)
    ADD ESP,0x8                         ; 0050d51a
    TEST EAX,EAX                        ; 0050d51d
    JZ 0x0050d5a9                       ; 0050d51f
        ;   XREF to: 0050d5a9 (CONDITIONAL_JUMP)  ; LAB_0050d5a9
    MOV EDI,dword ptr [ESP + 0x10c]     ; 0050d525
    PUSH EDI                            ; 0050d52c
    PUSH 0x5e0b7d                       ; 0050d52d
    MOV EAX,[0x006138e0]                ; 0050d532 | g_CEditorToolsPtr
    PUSH EAX                            ; 0050d537
    CALL shape_edittool.cpp_FUN_0047be90 ; 0050d538
        ;   XREF to: 0047be90 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047be90()
    ADD ESP,0xc                         ; 0050d53d
    MOV EDX,dword ptr [ESI + 0x17c]     ; 0050d540
    PUSH EDX                            ; 0050d546
    CALL crt_stdlib.c_srand_FUN_005b84c0 ; 0050d547
        ;   XREF to: 005b84c0 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_srand_FUN_005b84c0(uint seed)
    ADD ESP,0x4                         ; 0050d54c
    MOV ECX,dword ptr [ESI + 0x17c]     ; 0050d54f
    PUSH ECX                            ; 0050d555
    CALL core_actor.cpp_setRandomSeed_FUN_0040cee0 ; 0050d556
        ;   XREF to: 0040cee0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_setRandomSeed_FUN_0040cee0(uint seed_value)
    ADD ESP,0x4                         ; 0050d55b
    PUSH 0x0                            ; 0050d55e
    PUSH EDI                            ; 0050d560
    MOV ESI,dword ptr [0x00618170]      ; 0050d561 | DAT_00618170
    PUSH ESI                            ; 0050d567
    CALL core_mission.cpp_CDemonMission_load_FUN_004fb490 ; 0050d568
        ;   XREF to: 004fb490 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_load_FUN_004fb490(CDemonMission * this_ptr, char * mission_filename, int load_flags)
    ADD ESP,0xc                         ; 0050d56d
    PUSH 0x0                            ; 0050d570
    MOV EDI,dword ptr [0x00618170]      ; 0050d572 | DAT_00618170
    PUSH EDI                            ; 0050d578
    CALL core_mission.cpp_CDemonMission_createHeros_FUN_004fd0e0 ; 0050d579
        ;   XREF to: 004fd0e0 (UNCONDITIONAL_CALL)  ; int core_mission.cpp_CDemonMission_createHeros_FUN_004fd0e0(CDemonMission * this_ptr, CCharacter * existing_hero)
    ADD ESP,0x8                         ; 0050d57e
    TEST EAX,EAX                        ; 0050d581
    JZ 0x0050d5a9                       ; 0050d583
        ;   XREF to: 0050d5a9 (CONDITIONAL_JUMP)  ; LAB_0050d5a9
    MOV EAX,[0x00618170]                ; 0050d585 | DAT_00618170
    PUSH EAX                            ; 0050d58a
    CALL core_mission.cpp_FUN_004fce00  ; 0050d58b
        ;   XREF to: 004fce00 (UNCONDITIONAL_CALL)  ; int core_mission.cpp_FUN_004fce00(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 0050d590
    PUSH 0x2                            ; 0050d593
    MOV EDX,dword ptr [EBP + 0x14]      ; 0050d595
    PUSH EDX                            ; 0050d598
    CALL core_netgame.cpp_CNetGame_syncPlayers_FUN_0050bdb0 ; 0050d599
        ;   XREF to: 0050bdb0 (UNCONDITIONAL_CALL)  ; int core_netgame.cpp_CNetGame_syncPlayers_FUN_0050bdb0(CNetGame * this_ptr, int sync_stage)
    ADD ESP,0x8                         ; 0050d59e
    TEST EAX,EAX                        ; 0050d5a1
    JNZ 0x0050d6f4                      ; 0050d5a3
        ;   XREF to: 0050d6f4 (CONDITIONAL_JUMP)  ; LAB_0050d6f4
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050d5a9
        ;   Label: LAB_0050d5a9
    MOV dword ptr [EAX + 0x4],0x1       ; 0050d5ac
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050d5b3
        ;   Label: LAB_0050d5b3
    MOV EDX,dword ptr [EAX]             ; 0050d5b6
    CMP EDX,0x2                         ; 0050d5b8
    JNZ 0x0050d5c6                      ; 0050d5bb
        ;   XREF to: 0050d5c6 (CONDITIONAL_JUMP)  ; LAB_0050d5c6
    CMP EDX,dword ptr [EAX + 0x4]       ; 0050d5bd
    JZ 0x0050d700                       ; 0050d5c0
        ;   XREF to: 0050d700 (CONDITIONAL_JUMP)  ; LAB_0050d700
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050d5c6
        ;   Label: LAB_0050d5c6
    CMP dword ptr [EAX],0x2             ; 0050d5c9
    JNZ 0x0050d651                      ; 0050d5cc
        ;   XREF to: 0050d651 (CONDITIONAL_JUMP)  ; LAB_0050d651
    CMP dword ptr [0x0061b124],0x0      ; 0050d5d2 | DAT_0061b124
    JZ 0x0050d651                       ; 0050d5d9
        ;   XREF to: 0050d651 (CONDITIONAL_JUMP)  ; LAB_0050d651
    MOV EAX,dword ptr [EAX + 0x124]     ; 0050d5df
    MOV EDI,dword ptr [EBP + 0x14]      ; 0050d5e5
    SHL EAX,0x7                         ; 0050d5e8
    ADD EAX,EDI                         ; 0050d5eb
    MOV EDX,dword ptr [0x01d34e38]      ; 0050d5ed | DAT_01d34e38
    MOV EAX,dword ptr [EAX + 0x60]      ; 0050d5f3
    SUB EDX,EAX                         ; 0050d5f6
    MOV dword ptr [ESP + 0x120],EDX     ; 0050d5f8
    FILD dword ptr [ESP + 0x120]        ; 0050d5ff
    FMUL double ptr [0x005e0ba5]        ; 0050d606 | DAT_005e0ba5
    FST float ptr [ESP + 0x4]           ; 0050d60c
    FLDZ                                ; 0050d610
    FCOMPP                              ; 0050d612
    FNSTSW AX                           ; 0050d614
    SAHF                                ; 0050d616
    JBE 0x0050d61f                      ; 0050d617
        ;   XREF to: 0050d61f (CONDITIONAL_JUMP)  ; LAB_0050d61f
    XOR EAX,EAX                         ; 0050d619
    MOV dword ptr [ESP + 0x4],EAX       ; 0050d61b
    FLD float ptr [ESP + 0x4]           ; 0050d61f
        ;   Label: LAB_0050d61f
    FCOMP double ptr [0x005e0bad]       ; 0050d623 | DAT_005e0bad
    FNSTSW AX                           ; 0050d629
    SAHF                                ; 0050d62b
    JBE 0x0050d636                      ; 0050d62c
        ;   XREF to: 0050d636 (CONDITIONAL_JUMP)  ; LAB_0050d636
    MOV dword ptr [ESP + 0x4],0x41f00000 ; 0050d62e
    FLD float ptr [ESP + 0x4]           ; 0050d636
        ;   Label: LAB_0050d636
    FCOMP double ptr [0x005e0bb5]       ; 0050d63a | DAT_005e0bb5
    FNSTSW AX                           ; 0050d640
    SAHF                                ; 0050d642
    JBE 0x0050d651                      ; 0050d643
        ;   XREF to: 0050d651 (CONDITIONAL_JUMP)  ; LAB_0050d651
    MOV ECX,dword ptr [EBP + 0x14]      ; 0050d645
    PUSH ECX                            ; 0050d648
    CALL core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_0050eb80 ; 0050d649
        ;   XREF to: 0050eb80 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_0050eb80(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 0050d64e
    PUSH 0x1                            ; 0050d651
        ;   Label: LAB_0050d651
    MOV EAX,[0x00617dd4]                ; 0050d653 | DAT_00617dd4
    PUSH EAX                            ; 0050d658
    MOV EDX,dword ptr [EAX]             ; 0050d659
    CALL dword ptr [EDX + 0x4]          ; 0050d65b
    ADD ESP,0x8                         ; 0050d65e
    TEST EAX,EAX                        ; 0050d661
    JNZ 0x0050d285                      ; 0050d663
        ;   XREF to: 0050d285 (CONDITIONAL_JUMP)  ; LAB_0050d285
    PUSH 0x1c                           ; 0050d669
    MOV EAX,[0x00617dd4]                ; 0050d66b | DAT_00617dd4
    PUSH EAX                            ; 0050d670
    MOV EDX,dword ptr [EAX]             ; 0050d671
    CALL dword ptr [EDX + 0x4]          ; 0050d673
    ADD ESP,0x8                         ; 0050d676
    TEST EAX,EAX                        ; 0050d679
    JZ 0x0050d6b0                       ; 0050d67b
        ;   XREF to: 0050d6b0 (CONDITIONAL_JUMP)  ; LAB_0050d6b0
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050d67d
    MOV EAX,dword ptr [EAX + 0x124]     ; 0050d680
    MOV EBX,dword ptr [EBP + 0x14]      ; 0050d686
    SHL EAX,0x7                         ; 0050d689
    ADD EAX,EBX                         ; 0050d68c
    CMP dword ptr [EAX + 0x64],0x0      ; 0050d68e
    SETZ DL                             ; 0050d692
    AND EDX,0xff                        ; 0050d695
    MOV dword ptr [EAX + 0x64],EDX      ; 0050d69b
    CMP dword ptr [EBX],0x1             ; 0050d69e
    JNZ 0x0050d7f4                      ; 0050d6a1
        ;   XREF to: 0050d7f4 (CONDITIONAL_JUMP)  ; LAB_0050d7f4
    PUSH EBX                            ; 0050d6a7
    CALL core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_0050e890 ; 0050d6a8
        ;   XREF to: 0050e890 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_0050e890(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 0050d6ad
        ;   Label: LAB_0050d6ad
    PUSH 0x1f                           ; 0050d6b0
        ;   Label: LAB_0050d6b0
    MOV EAX,[0x00617dd4]                ; 0050d6b2 | DAT_00617dd4
    PUSH EAX                            ; 0050d6b7
    MOV EDX,dword ptr [EAX]             ; 0050d6b8
    CALL dword ptr [EDX + 0x4]          ; 0050d6ba
    ADD ESP,0x8                         ; 0050d6bd
    TEST EAX,EAX                        ; 0050d6c0
    JNZ 0x0050d7ff                      ; 0050d6c2
        ;   XREF to: 0050d7ff (CONDITIONAL_JUMP)  ; LAB_0050d7ff
    MOV EDI,dword ptr [EBP + 0x14]      ; 0050d6c8
        ;   Label: LAB_0050d6c8
    XOR EBX,EBX                         ; 0050d6cb
    MOV EAX,[0x0061b120]                ; 0050d6cd | g_CNetGamePtr
        ;   Label: LAB_0050d6cd
    CMP EBX,dword ptr [EAX + 0x1c]      ; 0050d6d2
    JGE 0x0050cfcf                      ; 0050d6d5
        ;   XREF to: 0050cfcf (CONDITIONAL_JUMP)  ; LAB_0050cfcf
    PUSH 0x40000000                     ; 0050d6db
    PUSH EBX                            ; 0050d6e0
    PUSH EDI                            ; 0050d6e1
    CALL core_netgame.cpp_CNetGame_updatePing_FUN_0050d840 ; 0050d6e2
        ;   XREF to: 0050d840 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_updatePing_FUN_0050d840(CNetGame * this_ptr, int player_index, float max_ping)
    INC EBX                             ; 0050d6e7
    ADD ESP,0xc                         ; 0050d6e8
    JMP 0x0050d6cd                      ; 0050d6eb
        ;   XREF to: 0050d6cd (UNCONDITIONAL_JUMP)  ; LAB_0050d6cd
    XOR EAX,EAX                         ; 0050d6ed
        ;   Label: LAB_0050d6ed
    JMP 0x0050d46c                      ; 0050d6ef
        ;   XREF to: 0050d46c (UNCONDITIONAL_JUMP)  ; LAB_0050d46c
    MOV EAX,0x1                         ; 0050d6f4
        ;   Label: LAB_0050d6f4
    MOV ESP,EBP                         ; 0050d6f9
    POP EBP                             ; 0050d6fb
    POP EDI                             ; 0050d6fc
    POP ESI                             ; 0050d6fd
    POP EBX                             ; 0050d6fe
    RET                                 ; 0050d6ff
    LEA EBX,[EAX + 0x128]               ; 0050d700
        ;   Label: LAB_0050d700
    PUSH EBX                            ; 0050d706
    PUSH 0x5e0b88                       ; 0050d707
    MOV ESI,dword ptr [0x006138e0]      ; 0050d70c | g_CEditorToolsPtr
    PUSH ESI                            ; 0050d712
    CALL shape_edittool.cpp_FUN_0047be90 ; 0050d713
        ;   XREF to: 0047be90 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047be90()
    ADD ESP,0xc                         ; 0050d718
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050d71b
    MOV EDI,dword ptr [EAX + 0x17c]     ; 0050d71e
    PUSH EDI                            ; 0050d724
    CALL crt_stdlib.c_srand_FUN_005b84c0 ; 0050d725
        ;   XREF to: 005b84c0 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_srand_FUN_005b84c0(uint seed)
    ADD ESP,0x4                         ; 0050d72a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050d72d
    MOV EDX,dword ptr [EAX + 0x17c]     ; 0050d730
    PUSH EDX                            ; 0050d736
    CALL core_actor.cpp_setRandomSeed_FUN_0040cee0 ; 0050d737
        ;   XREF to: 0040cee0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_setRandomSeed_FUN_0040cee0(uint seed_value)
    ADD ESP,0x4                         ; 0050d73c
    PUSH 0x0                            ; 0050d73f
    PUSH EBX                            ; 0050d741
    MOV ECX,dword ptr [0x00618170]      ; 0050d742 | DAT_00618170
    PUSH ECX                            ; 0050d748
    CALL core_mission.cpp_CDemonMission_load_FUN_004fb490 ; 0050d749
        ;   XREF to: 004fb490 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_load_FUN_004fb490(CDemonMission * this_ptr, char * mission_filename, int load_flags)
    ADD ESP,0xc                         ; 0050d74e
    PUSH 0x0                            ; 0050d751
    MOV EBX,dword ptr [0x00618170]      ; 0050d753 | DAT_00618170
    PUSH EBX                            ; 0050d759
    CALL core_mission.cpp_CDemonMission_createHeros_FUN_004fd0e0 ; 0050d75a
        ;   XREF to: 004fd0e0 (UNCONDITIONAL_CALL)  ; int core_mission.cpp_CDemonMission_createHeros_FUN_004fd0e0(CDemonMission * this_ptr, CCharacter * existing_hero)
    ADD ESP,0x8                         ; 0050d75f
    TEST EAX,EAX                        ; 0050d762
    JZ 0x0050d7e5                       ; 0050d764
        ;   XREF to: 0050d7e5 (CONDITIONAL_JUMP)  ; LAB_0050d7e5
    MOV ESI,dword ptr [0x00618170]      ; 0050d76a | DAT_00618170
    PUSH ESI                            ; 0050d770
    CALL core_mission.cpp_FUN_004fce00  ; 0050d771
        ;   XREF to: 004fce00 (UNCONDITIONAL_CALL)  ; int core_mission.cpp_FUN_004fce00(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 0050d776
    PUSH 0x2                            ; 0050d779
    MOV EDI,dword ptr [EBP + 0x14]      ; 0050d77b
    PUSH EDI                            ; 0050d77e
    CALL core_netgame.cpp_CNetGame_syncPlayers_FUN_0050bdb0 ; 0050d77f
        ;   XREF to: 0050bdb0 (UNCONDITIONAL_CALL)  ; int core_netgame.cpp_CNetGame_syncPlayers_FUN_0050bdb0(CNetGame * this_ptr, int sync_stage)
    ADD ESP,0x8                         ; 0050d784
    TEST EAX,EAX                        ; 0050d787
    JZ 0x0050d7e5                       ; 0050d789
        ;   XREF to: 0050d7e5 (CONDITIONAL_JUMP)  ; LAB_0050d7e5
    CALL wincore_winrun.cpp_getTime_FUN_0058e9e0 ; 0050d78b
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_0058e9e0()
    MOV EDX,EAX                         ; 0050d790
    MOV EBX,0x12                        ; 0050d792
    SAR EDX,0x1f                        ; 0050d797
    IDIV EBX                            ; 0050d79a
    MOV ECX,dword ptr [0x01d34e34]      ; 0050d79c | DAT_01d34e34
    MOV EDX,EAX                         ; 0050d7a2
    SUB EAX,ECX                         ; 0050d7a4
    MOV dword ptr [0x01d34e34],EDX      ; 0050d7a6 | DAT_01d34e34
    TEST EAX,EAX                        ; 0050d7ac
    JL 0x0050d7e1                       ; 0050d7ae
        ;   XREF to: 0050d7e1 (CONDITIONAL_JUMP)  ; LAB_0050d7e1
    CMP EAX,0x20000                     ; 0050d7b0
    JLE 0x0050d7bc                      ; 0050d7b5
        ;   XREF to: 0050d7bc (CONDITIONAL_JUMP)  ; LAB_0050d7bc
    MOV EAX,0x20000                     ; 0050d7b7
    MOV EBX,dword ptr [0x01d34e38]      ; 0050d7bc | DAT_01d34e38
        ;   Label: LAB_0050d7bc
    ADD EBX,EAX                         ; 0050d7c2
    MOV dword ptr [0x01d34e38],EBX      ; 0050d7c4 | DAT_01d34e38
    LEA EAX,[EBX + 0xffe20000]          ; 0050d7ca
    MOV [0x01d34e48],EAX                ; 0050d7d0 | DAT_01d34e48
    MOV EAX,0x1                         ; 0050d7d5
    MOV ESP,EBP                         ; 0050d7da
    POP EBP                             ; 0050d7dc
    POP EDI                             ; 0050d7dd
    POP ESI                             ; 0050d7de
    POP EBX                             ; 0050d7df
    RET                                 ; 0050d7e0
    XOR EAX,EAX                         ; 0050d7e1
        ;   Label: LAB_0050d7e1
    JMP 0x0050d7bc                      ; 0050d7e3
        ;   XREF to: 0050d7bc (UNCONDITIONAL_JUMP)  ; LAB_0050d7bc
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050d7e5
        ;   Label: LAB_0050d7e5
    MOV dword ptr [EAX + 0x4],0x1       ; 0050d7e8
    JMP 0x0050d285                      ; 0050d7ef
        ;   XREF to: 0050d285 (UNCONDITIONAL_JUMP)  ; LAB_0050d285
    PUSH EBX                            ; 0050d7f4
        ;   Label: LAB_0050d7f4
    CALL core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_0050eb80 ; 0050d7f5
        ;   XREF to: 0050eb80 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_0050eb80(CNetGame * this_ptr)
    JMP 0x0050d6ad                      ; 0050d7fa
        ;   XREF to: 0050d6ad (UNCONDITIONAL_JUMP)  ; LAB_0050d6ad
    PUSH 0x1                            ; 0050d7ff
        ;   Label: LAB_0050d7ff
    PUSH 0x100                          ; 0050d801
    PUSH 0x1d34bb0                      ; 0050d806
    PUSH 0x5e0b93                       ; 0050d80b
    MOV ECX,dword ptr [0x006138e0]      ; 0050d810 | g_CEditorToolsPtr
    PUSH ECX                            ; 0050d816
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_0047dae0 ; 0050d817
        ;   XREF to: 0047dae0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_0047dae0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 0050d81c
    TEST EAX,EAX                        ; 0050d81f
    JZ 0x0050d6c8                       ; 0050d821
        ;   XREF to: 0050d6c8 (CONDITIONAL_JUMP)  ; LAB_0050d6c8
    PUSH -0x1                           ; 0050d827
    PUSH 0x1d34bb0                      ; 0050d829
    MOV EBX,dword ptr [EBP + 0x14]      ; 0050d82e
    PUSH EBX                            ; 0050d831
    CALL core_netgame.cpp_CNetGame_processChatOut_FUN_0050d9f0 ; 0050d832
        ;   XREF to: 0050d9f0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_processChatOut_FUN_0050d9f0(CNetGame * this_ptr, char * message, int target_player)
    ADD ESP,0xc                         ; 0050d837
    JMP 0x0050d6c8                      ; 0050d83a
        ;   XREF to: 0050d6c8 (UNCONDITIONAL_JUMP)  ; LAB_0050d6c8

