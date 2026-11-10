; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_netgame_cpp_CNetGame_syncPlayers_FUN_0052cf90(CNetGame *this_ptr,int sync_stage)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   sync_stage
; Local Variables:
; undefined4       Stack[-0x198]:4  local_198
; undefined        Stack[-0x194]:1  local_194
; undefined        Stack[-0x94]:1  local_94
; undefined4       Stack[-0x30]:4  local_30
; undefined1       Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x2b]:4  local_2b
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_game.cpp_CGame_runGameSession_FUN_004cf5e0 at 004cf94a
;   core_netgame.cpp_CNetGame_runLobby_FUN_0052e120 at 0052e6ed
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_005eb900
;   TerminatedCString s_CNetGame_syncPlayers_don_005eb914
;   TerminatedCString s_Syncing_stage_d_005eb94c
;   TerminatedCString s_Waiting_on_005eb95e
;   undefined4 DAT_005eb96a
;   TerminatedCString s_Waiting_on_sync_code_d_f_005eb9ab
;   TerminatedCString s_core_netgame_cpp_005eb9d2
;   TerminatedCString s_CNetGame_syncPlayers_inv_005eb9e6
;   undefined4 DAT_005eba10
;   undefined4 DAT_005eba18
;   undefined4 DAT_005eba20
;   undefined4 DAT_0061f2a4
;   undefined4 DAT_01d1bca0
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   ... and 3 more
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   core_netgame.cpp_CNetGame_receivePackets_FUN_0052d360
;   core_netgame.cpp_CNetGame_send_FUN_0052df50
;   core_netgame.cpp_CNetGame_updatePing_FUN_0052ea10
;   crt_unknown.c_sprintf_FUN_005bfb40
;   engine_2d.c_clearInputAndWait_FUN_004032b0
;   engine_2d.c_drawText_FUN_00401fe0
;   engine_special.cpp_clearScreen_FUN_0057dc40
;   wincore_wddvmem.cpp_swapBuffers_FUN_005acff0
;   wincore_winrun.cpp_getTime_FUN_005b2420
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052cf90
        ;   Label: core_netgame.cpp_CNetGame_syncPlayers_FUN_0052cf90
    PUSH ESI                            ; 0052cf91
    PUSH EDI                            ; 0052cf92
    PUSH EBP                            ; 0052cf93
    MOV EBP,ESP                         ; 0052cf94
    SUB ESP,0x188                       ; 0052cf96
    AND ESP,0xfffffff8                  ; 0052cf9c
    MOV ESI,dword ptr [EBP + 0x14]      ; 0052cf9f
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 0052cfa2
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    CMP dword ptr [EBP + 0x18],0x1      ; 0052cfa7
    JL 0x0052d203                       ; 0052cfab
        ;   XREF to: 0052d203 (CONDITIONAL_JUMP)  ; LAB_0052d203
    CMP dword ptr [ESI],0x0             ; 0052cfb1
        ;   Label: LAB_0052cfb1
    JZ 0x0052d22b                       ; 0052cfb4
        ;   XREF to: 0052d22b (CONDITIONAL_JUMP)  ; LAB_0052d22b
    MOV dword ptr [ESI + 0x4],0x2       ; 0052cfba
    CALL wincore_winrun.cpp_getTime_FUN_005b2420 ; 0052cfc1
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_005b2420()
    MOV EDX,EAX                         ; 0052cfc6
    MOV EBX,0x12                        ; 0052cfc8
    SAR EDX,0x1f                        ; 0052cfcd
    IDIV EBX                            ; 0052cfd0
    MOV ECX,dword ptr [0x01d51d9c]      ; 0052cfd2 | DAT_01d51d9c
    MOV EDX,EAX                         ; 0052cfd8
    SUB EAX,ECX                         ; 0052cfda
    MOV dword ptr [0x01d51d9c],EDX      ; 0052cfdc | DAT_01d51d9c
    TEST EAX,EAX                        ; 0052cfe2
    JL 0x0052d237                       ; 0052cfe4
        ;   XREF to: 0052d237 (CONDITIONAL_JUMP)  ; LAB_0052d237
    CMP EAX,0x20000                     ; 0052cfea
    JLE 0x0052cff6                      ; 0052cfef
        ;   XREF to: 0052cff6 (CONDITIONAL_JUMP)  ; LAB_0052cff6
    MOV EAX,0x20000                     ; 0052cff1
    MOV EBX,dword ptr [0x01d51da0]      ; 0052cff6 | DAT_01d51da0
        ;   Label: LAB_0052cff6
    ADD EBX,EAX                         ; 0052cffc
    MOV EAX,dword ptr [ESI + 0x11c]     ; 0052cffe
    SHL EAX,0x2                         ; 0052d004
    MOV EDX,EAX                         ; 0052d007
    SHL EAX,0x5                         ; 0052d009
    SUB EAX,EDX                         ; 0052d00c
    MOV EDX,dword ptr [EBP + 0x18]      ; 0052d00e
    MOV dword ptr [ESI + EAX*0x1 + 0x5c],EDX ; 0052d011
    MOV EDI,dword ptr [ESI]             ; 0052d015
    MOV dword ptr [0x01d51da0],EBX      ; 0052d017 | DAT_01d51da0
    CMP EDI,0x1                         ; 0052d01d
    JNZ 0x0052d24c                      ; 0052d020
        ;   XREF to: 0052d24c (CONDITIONAL_JUMP)  ; LAB_0052d24c
    LEA EAX,[EBX + 0xffe20000]          ; 0052d026
    MOV dword ptr [ESP + 0x174],EAX     ; 0052d02c
    LEA EAX,[ESI + 0x20]                ; 0052d033
    MOV dword ptr [ESP + 0x178],EAX     ; 0052d036
    CALL engine_special.cpp_clearScreen_FUN_0057dc40 ; 0052d03d
        ;   XREF to: 0057dc40 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0057dc40()
        ;   Label: LAB_0052d03d
    MOV EBX,dword ptr [EBP + 0x18]      ; 0052d042
    PUSH EBX                            ; 0052d045
    PUSH 0x5eb94c                       ; 0052d046 | = "Syncing stage %d."
    LEA EAX,[ESP + 0xc]                 ; 0052d04b
    PUSH EAX                            ; 0052d04f
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0052d050
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 0052d055
    PUSH 0xb                            ; 0052d058
    PUSH 0x0                            ; 0052d05a
    LEA EAX,[ESP + 0xc]                 ; 0052d05c
    PUSH EAX                            ; 0052d060
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 0052d061
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0052d066
    PUSH 0x16                           ; 0052d069
    PUSH 0x0                            ; 0052d06b
    PUSH 0x5eb95e                       ; 0052d06d | = "Waiting on:"
    MOV EDI,0x1                         ; 0052d072
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 0052d077
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    MOV EAX,0x21                        ; 0052d07c
    ADD ESP,0xc                         ; 0052d081
    MOV EDX,dword ptr [ESI + 0x1c]      ; 0052d084
    MOV dword ptr [ESP + 0x17c],EDI     ; 0052d087
    MOV dword ptr [ESP + 0x180],EAX     ; 0052d08e
    XOR EDI,EDI                         ; 0052d095
    TEST EDX,EDX                        ; 0052d097
    JLE 0x0052d10d                      ; 0052d099
        ;   XREF to: 0052d10d (CONDITIONAL_JUMP)  ; LAB_0052d10d
    MOV EBX,ESI                         ; 0052d09b
    IMUL EAX,EDI,0x7c                   ; 0052d09d
        ;   Label: LAB_0052d09d
    MOV ECX,dword ptr [EBP + 0x18]      ; 0052d0a0
    CMP ECX,dword ptr [EBX + 0x5c]      ; 0052d0a3
    JLE 0x0052d102                      ; 0052d0a6
        ;   XREF to: 0052d102 (CONDITIONAL_JUMP)  ; LAB_0052d102
    MOV ECX,dword ptr [ESP + 0x180]     ; 0052d0a8
    XOR EDX,EDX                         ; 0052d0af
    PUSH ECX                            ; 0052d0b1
    MOV dword ptr [ESP + 0x180],EDX     ; 0052d0b2
    PUSH EDX                            ; 0052d0b9
    ADD EAX,dword ptr [ESP + 0x180]     ; 0052d0ba
    PUSH EAX                            ; 0052d0c1
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 0052d0c2
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0052d0c7
    MOV ECX,dword ptr [EBX + 0x5c]      ; 0052d0ca
    PUSH ECX                            ; 0052d0cd
    PUSH 0x5eb96a                       ; 0052d0ce | DAT_005eb96a
    LEA EAX,[ESP + 0xc]                 ; 0052d0d3
    PUSH EAX                            ; 0052d0d7
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0052d0d8
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 0052d0dd
    MOV EAX,dword ptr [ESP + 0x180]     ; 0052d0e0
    PUSH EAX                            ; 0052d0e7
    PUSH 0xc8                           ; 0052d0e8
    LEA EAX,[ESP + 0xc]                 ; 0052d0ed
    PUSH EAX                            ; 0052d0f1
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 0052d0f2
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0052d0f7
    ADD dword ptr [ESP + 0x180],0xb     ; 0052d0fa
    INC EDI                             ; 0052d102
        ;   Label: LAB_0052d102
    MOV ECX,dword ptr [ESI + 0x1c]      ; 0052d103
    ADD EBX,0x7c                        ; 0052d106
    CMP EDI,ECX                         ; 0052d109
    JL 0x0052d09d                       ; 0052d10b
        ;   XREF to: 0052d09d (CONDITIONAL_JUMP)  ; LAB_0052d09d
    MOV EBX,dword ptr [ESP + 0x17c]     ; 0052d10d
        ;   Label: LAB_0052d10d
    TEST EBX,EBX                        ; 0052d114
    JNZ 0x0052d2ef                      ; 0052d116
        ;   XREF to: 0052d2ef (CONDITIONAL_JUMP)  ; LAB_0052d2ef
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005acff0 ; 0052d11c
        ;   XREF to: 005acff0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005acff0()
    PUSH ESI                            ; 0052d121
    CALL core_netgame.cpp_CNetGame_receivePackets_FUN_0052d360 ; 0052d122
        ;   XREF to: 0052d360 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_receivePackets_FUN_0052d360(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 0052d127
    MOV EAX,[0x01d51da0]                ; 0052d12a | DAT_01d51da0
    MOV EDI,dword ptr [ESP + 0x174]     ; 0052d12f
    SUB EAX,EDI                         ; 0052d136
    MOV dword ptr [ESP + 0x184],EAX     ; 0052d138
    FILD dword ptr [ESP + 0x184]        ; 0052d13f
    FMUL double ptr [0x005eba10]        ; 0052d146 | DAT_005eba10
    FST float ptr [ESP]                 ; 0052d14c
    FLDZ                                ; 0052d14f
    FCOMPP                              ; 0052d151
    FNSTSW AX                           ; 0052d153
    SAHF                                ; 0052d155
    JBE 0x0052d15b                      ; 0052d156
        ;   XREF to: 0052d15b (CONDITIONAL_JUMP)  ; LAB_0052d15b
    MOV dword ptr [ESP],EBX             ; 0052d158
    FLD float ptr [ESP]                 ; 0052d15b
        ;   Label: LAB_0052d15b
    FCOMP double ptr [0x005eba18]       ; 0052d15e | DAT_005eba18
    FNSTSW AX                           ; 0052d164
    SAHF                                ; 0052d166
    JBE 0x0052d170                      ; 0052d167
        ;   XREF to: 0052d170 (CONDITIONAL_JUMP)  ; LAB_0052d170
    MOV dword ptr [ESP],0x41f00000      ; 0052d169
    FLD float ptr [ESP]                 ; 0052d170
        ;   Label: LAB_0052d170
    FCOMP double ptr [0x005eba20]       ; 0052d173 | DAT_005eba20
    FNSTSW AX                           ; 0052d179
    SAHF                                ; 0052d17b
    JBE 0x0052d1dd                      ; 0052d17c
        ;   XREF to: 0052d1dd (CONDITIONAL_JUMP)  ; LAB_0052d1dd
    MOV EAX,[0x01d51da0]                ; 0052d17e | DAT_01d51da0
    MOV dword ptr [ESP + 0x174],EAX     ; 0052d183
    MOV AH,0x8                          ; 0052d18a
    MOV ECX,0x9                         ; 0052d18c
    MOV byte ptr [ESP + 0x16c],AH       ; 0052d191
    MOV EAX,dword ptr [EBP + 0x18]      ; 0052d198
    MOV dword ptr [ESP + 0x168],ECX     ; 0052d19b
    MOV dword ptr [ESP + 0x16d],EAX     ; 0052d1a2
    MOV EDI,dword ptr [ESI + 0x1c]      ; 0052d1a9
    XOR EBX,EBX                         ; 0052d1ac
    TEST EDI,EDI                        ; 0052d1ae
    JLE 0x0052d1dd                      ; 0052d1b0
        ;   XREF to: 0052d1dd (CONDITIONAL_JUMP)  ; LAB_0052d1dd
    MOV EDI,ESI                         ; 0052d1b2
    MOV EDX,dword ptr [EBP + 0x18]      ; 0052d1b4
        ;   Label: LAB_0052d1b4
    CMP EDX,dword ptr [EDI + 0x5c]      ; 0052d1b7
    JLE 0x0052d23e                      ; 0052d1ba
        ;   XREF to: 0052d23e (CONDITIONAL_JUMP)  ; LAB_0052d23e
    LEA EAX,[ESP + 0x168]               ; 0052d1c0
    PUSH EAX                            ; 0052d1c7
    PUSH EBX                            ; 0052d1c8
    PUSH ESI                            ; 0052d1c9
    CALL core_netgame.cpp_CNetGame_send_FUN_0052df50 ; 0052d1ca
        ;   XREF to: 0052df50 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_send_FUN_0052df50(CNetGame * this_ptr, int player_index, SNetPacketHeader * packet)
    ADD ESP,0xc                         ; 0052d1cf
        ;   Label: LAB_0052d1cf
    INC EBX                             ; 0052d1d2
    MOV ECX,dword ptr [ESI + 0x1c]      ; 0052d1d3
    ADD EDI,0x7c                        ; 0052d1d6
    CMP EBX,ECX                         ; 0052d1d9
    JL 0x0052d1b4                       ; 0052d1db
        ;   XREF to: 0052d1b4 (CONDITIONAL_JUMP)  ; LAB_0052d1b4
    PUSH 0x1                            ; 0052d1dd
        ;   Label: LAB_0052d1dd
    MOV EAX,[0x0061f2a4]                ; 0052d1df | DAT_0061f2a4
    PUSH EAX                            ; 0052d1e4 | DAT_01d1bca0
    MOV EBX,dword ptr [EAX]             ; 0052d1e5 | DAT_01d1bca0
    CALL dword ptr [EBX + 0x4]          ; 0052d1e7
    ADD ESP,0x8                         ; 0052d1ea
    TEST EAX,EAX                        ; 0052d1ed
    JZ 0x0052d03d                       ; 0052d1ef
        ;   XREF to: 0052d03d (CONDITIONAL_JUMP)  ; LAB_0052d03d
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 0052d1f5
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    XOR EAX,EAX                         ; 0052d1fa
    MOV ESP,EBP                         ; 0052d1fc
        ;   Label: caseD_0
    POP EBP                             ; 0052d1fe
    POP EDI                             ; 0052d1ff
    POP ESI                             ; 0052d200
    POP EBX                             ; 0052d201
    RET                                 ; 0052d202
    MOV ECX,0x5eb900                    ; 0052d203 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_0052d203
    MOV EBX,0x337                       ; 0052d208
    PUSH 0x5eb914                       ; 0052d20d | = "CNetGame::syncPlayers - don't use 0!"
    MOV dword ptr [0x01d1d400],ECX      ; 0052d212 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 0052d218 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0052d21e
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0052d223
    JMP 0x0052cfb1                      ; 0052d226
        ;   XREF to: 0052cfb1 (UNCONDITIONAL_JUMP)  ; LAB_0052cfb1
    MOV EAX,0x1                         ; 0052d22b
        ;   Label: LAB_0052d22b
    MOV ESP,EBP                         ; 0052d230
    POP EBP                             ; 0052d232
    POP EDI                             ; 0052d233
    POP ESI                             ; 0052d234
    POP EBX                             ; 0052d235
    RET                                 ; 0052d236
    XOR EAX,EAX                         ; 0052d237
        ;   Label: LAB_0052d237
    JMP 0x0052cff6                      ; 0052d239
        ;   XREF to: 0052cff6 (UNCONDITIONAL_JUMP)  ; LAB_0052cff6
    PUSH 0x40000000                     ; 0052d23e
        ;   Label: LAB_0052d23e
    PUSH EBX                            ; 0052d243
    PUSH ESI                            ; 0052d244
    CALL core_netgame.cpp_CNetGame_updatePing_FUN_0052ea10 ; 0052d245
        ;   XREF to: 0052ea10 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_updatePing_FUN_0052ea10(CNetGame * this_ptr, int player_index, float max_ping)
    JMP 0x0052d1cf                      ; 0052d24a
        ;   XREF to: 0052d1cf (UNCONDITIONAL_JUMP)  ; LAB_0052d1cf
    CMP EDI,0x2                         ; 0052d24c
        ;   Label: LAB_0052d24c
    JNZ 0x0052d2cc                      ; 0052d24f
        ;   XREF to: 0052d2cc (CONDITIONAL_JUMP)  ; LAB_0052d2cc
    CMP EDX,0x4                         ; 0052d255
    JGE 0x0052d22b                      ; 0052d258
        ;   XREF to: 0052d22b (CONDITIONAL_JUMP)  ; LAB_0052d22b
    XOR EDI,EDI                         ; 0052d25a
    MOV EDX,dword ptr [EBP + 0x18]      ; 0052d25c
        ;   Label: LAB_0052d25c
    CMP EDX,dword ptr [0x01d51da8]      ; 0052d25f | DAT_01d51da8
    JLE 0x0052d2ef                      ; 0052d265
        ;   XREF to: 0052d2ef (CONDITIONAL_JUMP)  ; LAB_0052d2ef
    CALL engine_special.cpp_clearScreen_FUN_0057dc40 ; 0052d26b
        ;   XREF to: 0057dc40 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0057dc40()
    MOV ECX,dword ptr [EBP + 0x18]      ; 0052d270
    PUSH ECX                            ; 0052d273
    PUSH 0x5eb9ab                       ; 0052d274 | = "Waiting on sync code %d from server..."
    LEA EAX,[ESP + 0x10c]               ; 0052d279
    PUSH EAX                            ; 0052d280
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0052d281
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 0052d286
    PUSH 0xb                            ; 0052d289
    PUSH EDI                            ; 0052d28b
    LEA EAX,[ESP + 0x10c]               ; 0052d28c
    PUSH EAX                            ; 0052d293
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 0052d294
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0052d299
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005acff0 ; 0052d29c
        ;   XREF to: 005acff0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005acff0()
    PUSH ESI                            ; 0052d2a1
    CALL core_netgame.cpp_CNetGame_receivePackets_FUN_0052d360 ; 0052d2a2
        ;   XREF to: 0052d360 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_receivePackets_FUN_0052d360(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 0052d2a7
    MOV EAX,[0x0061f2a4]                ; 0052d2aa | DAT_0061f2a4
    PUSH 0x1                            ; 0052d2af
    MOV EBX,dword ptr [EAX]             ; 0052d2b1 | DAT_01d1bca0
    PUSH EAX                            ; 0052d2b3 | DAT_01d1bca0
    CALL dword ptr [EBX + 0x4]          ; 0052d2b4
    ADD ESP,0x8                         ; 0052d2b7
    TEST EAX,EAX                        ; 0052d2ba
    JZ 0x0052d25c                       ; 0052d2bc
        ;   XREF to: 0052d25c (CONDITIONAL_JUMP)  ; LAB_0052d25c
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 0052d2be
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    XOR EAX,EAX                         ; 0052d2c3
    MOV ESP,EBP                         ; 0052d2c5
    POP EBP                             ; 0052d2c7
    POP EDI                             ; 0052d2c8
    POP ESI                             ; 0052d2c9
    POP EBX                             ; 0052d2ca
    RET                                 ; 0052d2cb
    MOV EDX,0x5eb9d2                    ; 0052d2cc | = "..\\core\\netgame.cpp"
        ;   Label: LAB_0052d2cc
    MOV ECX,0x3c0                       ; 0052d2d1
    PUSH 0x5eb9e6                       ; 0052d2d6 | = "CNetGame::syncPlayers - invalid mode"
    MOV dword ptr [0x01d1d400],EDX      ; 0052d2db | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0052d2e1 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0052d2e7
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0052d2ec
    MOV EAX,0x1                         ; 0052d2ef
        ;   Label: LAB_0052d2ef
    MOV ESP,EBP                         ; 0052d2f4
    POP EBP                             ; 0052d2f6
    POP EDI                             ; 0052d2f7
    POP ESI                             ; 0052d2f8
    POP EBX                             ; 0052d2f9
    RET                                 ; 0052d2fa

