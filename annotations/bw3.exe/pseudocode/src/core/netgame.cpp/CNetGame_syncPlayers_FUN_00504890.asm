; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_netgame_cpp_CNetGame_syncPlayers_FUN_00504890(CNetGame *this_ptr,int sync_stage)
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
;   core_game.cpp_CGame_runGameSession_FUN_004b7f90 at 004b82fa
;   core_netgame.cpp_CNetGame_runLobby_FUN_00505a30 at 00505ff5
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_005ca711
;   TerminatedCString s_CNetGame_syncPlayers_don_005ca725
;   TerminatedCString s_Syncing_stage_d_005ca75d
;   TerminatedCString s_Waiting_on_005ca76f
;   undefined4 DAT_005ca77b
;   TerminatedCString s_Waiting_on_sync_code_d_f_005ca7bc
;   TerminatedCString s_core_netgame_cpp_005ca7e3
;   TerminatedCString s_CNetGame_syncPlayers_inv_005ca7f7
;   undefined4 DAT_005ca821
;   undefined4 DAT_005ca829
;   undefined4 DAT_005ca831
;   undefined4 DAT_00600284
;   undefined4 DAT_01d70a78
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   ... and 3 more
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   core_netgame.cpp_CNetGame_receivePackets_FUN_00504c70
;   core_netgame.cpp_CNetGame_send_FUN_00505870
;   core_netgame.cpp_CNetGame_updatePing_FUN_00506320
;   crt_unknown.c_sprintf_FUN_005a28c0
;   engine_2d.c_clearInputAndWait_FUN_004032b0
;   engine_2d.c_drawText_FUN_00401fe0
;   engine_special.cpp_clearScreen_FUN_00560d70
;   wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0
;   wincore_winrun.cpp_getTime_FUN_005806a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00504890
        ;   Label: core_netgame.cpp_CNetGame_syncPlayers_FUN_00504890
    PUSH ESI                            ; 00504891
    PUSH EDI                            ; 00504892
    PUSH EBP                            ; 00504893
    MOV EBP,ESP                         ; 00504894
    SUB ESP,0x188                       ; 00504896
    AND ESP,0xfffffff8                  ; 0050489c
    MOV ESI,dword ptr [EBP + 0x14]      ; 0050489f
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 005048a2
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    CMP dword ptr [EBP + 0x18],0x1      ; 005048a7
    JL 0x00504b0d                       ; 005048ab
        ;   XREF to: 00504b0d (CONDITIONAL_JUMP)  ; LAB_00504b0d
    CMP dword ptr [ESI],0x0             ; 005048b1
        ;   Label: LAB_005048b1
    JZ 0x00504b35                       ; 005048b4
        ;   XREF to: 00504b35 (CONDITIONAL_JUMP)  ; LAB_00504b35
    MOV dword ptr [ESI + 0x4],0x2       ; 005048ba
    CALL wincore_winrun.cpp_getTime_FUN_005806a0 ; 005048c1
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_005806a0()
    MOV EDX,EAX                         ; 005048c6
    MOV EBX,0x12                        ; 005048c8
    SAR EDX,0x1f                        ; 005048cd
    IDIV EBX                            ; 005048d0
    MOV ECX,dword ptr [0x01da6474]      ; 005048d2 | DAT_01da6474
    MOV EDX,EAX                         ; 005048d8
    SUB EAX,ECX                         ; 005048da
    MOV dword ptr [0x01da6474],EDX      ; 005048dc | DAT_01da6474
    TEST EAX,EAX                        ; 005048e2
    JL 0x00504b41                       ; 005048e4
        ;   XREF to: 00504b41 (CONDITIONAL_JUMP)  ; LAB_00504b41
    CMP EAX,0x20000                     ; 005048ea
    JLE 0x005048f6                      ; 005048ef
        ;   XREF to: 005048f6 (CONDITIONAL_JUMP)  ; LAB_005048f6
    MOV EAX,0x20000                     ; 005048f1
    MOV EBX,dword ptr [0x01da6478]      ; 005048f6 | DAT_01da6478
        ;   Label: LAB_005048f6
    ADD EBX,EAX                         ; 005048fc
    MOV EAX,dword ptr [ESI + 0x124]     ; 005048fe
    SHL EAX,0x7                         ; 00504904
    MOV EDX,dword ptr [EBP + 0x18]      ; 00504907
    MOV dword ptr [ESI + EAX*0x1 + 0x5c],EDX ; 0050490a
    MOV EDI,dword ptr [ESI]             ; 0050490e
    MOV dword ptr [0x01da6478],EBX      ; 00504910 | DAT_01da6478
    CMP EDI,0x1                         ; 00504916
    JNZ 0x00504b56                      ; 00504919
        ;   XREF to: 00504b56 (CONDITIONAL_JUMP)  ; LAB_00504b56
    LEA EAX,[EBX + 0xffe20000]          ; 0050491f
    MOV dword ptr [ESP + 0x178],EAX     ; 00504925
    LEA EAX,[ESI + 0x20]                ; 0050492c
    MOV dword ptr [ESP + 0x17c],EAX     ; 0050492f
    CALL engine_special.cpp_clearScreen_FUN_00560d70 ; 00504936
        ;   XREF to: 00560d70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_00560d70()
        ;   Label: LAB_00504936
    MOV EBX,dword ptr [EBP + 0x18]      ; 0050493b
    PUSH EBX                            ; 0050493e
    PUSH 0x5ca75d                       ; 0050493f | = "Syncing stage %d."
    LEA EAX,[ESP + 0xc]                 ; 00504944
    PUSH EAX                            ; 00504948
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00504949
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0050494e
    PUSH 0xb                            ; 00504951
    PUSH 0x0                            ; 00504953
    LEA EAX,[ESP + 0xc]                 ; 00504955
    PUSH EAX                            ; 00504959
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 0050495a
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0050495f
    PUSH 0x16                           ; 00504962
    PUSH 0x0                            ; 00504964
    PUSH 0x5ca76f                       ; 00504966 | = "Waiting on:"
    MOV EDI,0x1                         ; 0050496b
    MOV EBX,0x21                        ; 00504970
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 00504975
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0050497a
    MOV EDX,dword ptr [ESI + 0x1c]      ; 0050497d
    XOR EAX,EAX                         ; 00504980
    MOV dword ptr [ESP + 0x180],EDI     ; 00504982
    MOV dword ptr [ESP + 0x184],EAX     ; 00504989
    TEST EDX,EDX                        ; 00504990
    JLE 0x00504a13                      ; 00504992
        ;   XREF to: 00504a13 (CONDITIONAL_JUMP)  ; LAB_00504a13
    MOV EDI,ESI                         ; 00504998
    MOV EAX,dword ptr [ESP + 0x184]     ; 0050499a
        ;   Label: LAB_0050499a
    MOV ECX,dword ptr [EBP + 0x18]      ; 005049a1
    MOV EDX,dword ptr [EDI + 0x5c]      ; 005049a4
    SHL EAX,0x7                         ; 005049a7
    CMP EDX,ECX                         ; 005049aa
    JGE 0x005049f7                      ; 005049ac
        ;   XREF to: 005049f7 (CONDITIONAL_JUMP)  ; LAB_005049f7
    PUSH EBX                            ; 005049ae
    XOR EDX,EDX                         ; 005049af
    MOV ECX,dword ptr [ESP + 0x180]     ; 005049b1
    PUSH EDX                            ; 005049b8
    ADD EAX,ECX                         ; 005049b9
    PUSH EAX                            ; 005049bb
    MOV dword ptr [ESP + 0x18c],EDX     ; 005049bc
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 005049c3
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005049c8
    MOV EAX,dword ptr [EDI + 0x5c]      ; 005049cb
    PUSH EAX                            ; 005049ce
    PUSH 0x5ca77b                       ; 005049cf | DAT_005ca77b
    LEA EAX,[ESP + 0xc]                 ; 005049d4
    PUSH EAX                            ; 005049d8
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 005049d9
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005049de
    PUSH EBX                            ; 005049e1
    PUSH 0xc8                           ; 005049e2
    LEA EAX,[ESP + 0xc]                 ; 005049e7
    PUSH EAX                            ; 005049eb
    ADD EBX,0xb                         ; 005049ec
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 005049ef
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005049f4
    MOV ECX,dword ptr [ESP + 0x184]     ; 005049f7
        ;   Label: LAB_005049f7
    ADD EDI,0x80                        ; 005049fe
    INC ECX                             ; 00504a04
    MOV EDX,dword ptr [ESI + 0x1c]      ; 00504a05
    MOV dword ptr [ESP + 0x184],ECX     ; 00504a08
    CMP ECX,EDX                         ; 00504a0f
    JL 0x0050499a                       ; 00504a11
        ;   XREF to: 0050499a (CONDITIONAL_JUMP)  ; LAB_0050499a
    CMP dword ptr [ESP + 0x180],0x0     ; 00504a13
        ;   Label: LAB_00504a13
    JNZ 0x00504bf9                      ; 00504a1b
        ;   XREF to: 00504bf9 (CONDITIONAL_JUMP)  ; LAB_00504bf9
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0 ; 00504a21
        ;   XREF to: 0057a8a0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0()
    PUSH ESI                            ; 00504a26
    CALL core_netgame.cpp_CNetGame_receivePackets_FUN_00504c70 ; 00504a27
        ;   XREF to: 00504c70 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_receivePackets_FUN_00504c70(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 00504a2c
    MOV EAX,[0x01da6478]                ; 00504a2f | DAT_01da6478
    MOV EBX,dword ptr [ESP + 0x178]     ; 00504a34
    SUB EAX,EBX                         ; 00504a3b
    MOV dword ptr [ESP + 0x174],EAX     ; 00504a3d
    FILD dword ptr [ESP + 0x174]        ; 00504a44
    FMUL double ptr [0x005ca821]        ; 00504a4b | DAT_005ca821
    FST float ptr [ESP]                 ; 00504a51
    FLDZ                                ; 00504a54
    FCOMPP                              ; 00504a56
    FNSTSW AX                           ; 00504a58
    SAHF                                ; 00504a5a
    JBE 0x00504a62                      ; 00504a5b
        ;   XREF to: 00504a62 (CONDITIONAL_JUMP)  ; LAB_00504a62
    XOR EDI,EDI                         ; 00504a5d
    MOV dword ptr [ESP],EDI             ; 00504a5f
    FLD float ptr [ESP]                 ; 00504a62
        ;   Label: LAB_00504a62
    FCOMP double ptr [0x005ca829]       ; 00504a65 | DAT_005ca829
    FNSTSW AX                           ; 00504a6b
    SAHF                                ; 00504a6d
    JBE 0x00504a77                      ; 00504a6e
        ;   XREF to: 00504a77 (CONDITIONAL_JUMP)  ; LAB_00504a77
    MOV dword ptr [ESP],0x41f00000      ; 00504a70
    FLD float ptr [ESP]                 ; 00504a77
        ;   Label: LAB_00504a77
    FCOMP double ptr [0x005ca831]       ; 00504a7a | DAT_005ca831
    FNSTSW AX                           ; 00504a80
    SAHF                                ; 00504a82
    JBE 0x00504ae7                      ; 00504a83
        ;   XREF to: 00504ae7 (CONDITIONAL_JUMP)  ; LAB_00504ae7
    MOV EAX,[0x01da6478]                ; 00504a85 | DAT_01da6478
    MOV dword ptr [ESP + 0x178],EAX     ; 00504a8a
    MOV AH,0x8                          ; 00504a91
    MOV EDX,0x9                         ; 00504a93
    MOV byte ptr [ESP + 0x16c],AH       ; 00504a98
    MOV EAX,dword ptr [EBP + 0x18]      ; 00504a9f
    MOV dword ptr [ESP + 0x168],EDX     ; 00504aa2
    MOV dword ptr [ESP + 0x16d],EAX     ; 00504aa9
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00504ab0
    XOR EBX,EBX                         ; 00504ab3
    TEST ECX,ECX                        ; 00504ab5
    JLE 0x00504ae7                      ; 00504ab7
        ;   XREF to: 00504ae7 (CONDITIONAL_JUMP)  ; LAB_00504ae7
    MOV EDI,ESI                         ; 00504ab9
    MOV ECX,dword ptr [EBP + 0x18]      ; 00504abb
        ;   Label: LAB_00504abb
    CMP ECX,dword ptr [EDI + 0x5c]      ; 00504abe
    JLE 0x00504b48                      ; 00504ac1
        ;   XREF to: 00504b48 (CONDITIONAL_JUMP)  ; LAB_00504b48
    LEA EAX,[ESP + 0x168]               ; 00504ac7
    PUSH EAX                            ; 00504ace
    PUSH EBX                            ; 00504acf
    PUSH ESI                            ; 00504ad0
    CALL core_netgame.cpp_CNetGame_send_FUN_00505870 ; 00504ad1
        ;   XREF to: 00505870 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_send_FUN_00505870(CNetGame * this_ptr, int player_index, SNetPacketHeader * packet)
    ADD ESP,0xc                         ; 00504ad6
        ;   Label: LAB_00504ad6
    INC EBX                             ; 00504ad9
    MOV EDX,dword ptr [ESI + 0x1c]      ; 00504ada
    ADD EDI,0x80                        ; 00504add
    CMP EBX,EDX                         ; 00504ae3
    JL 0x00504abb                       ; 00504ae5
        ;   XREF to: 00504abb (CONDITIONAL_JUMP)  ; LAB_00504abb
    PUSH 0x1                            ; 00504ae7
        ;   Label: LAB_00504ae7
    MOV EAX,[0x00600284]                ; 00504ae9 | DAT_00600284
    PUSH EAX                            ; 00504aee | DAT_01d70a78
    MOV EBX,dword ptr [EAX]             ; 00504aef | DAT_01d70a78
    CALL dword ptr [EBX + 0x4]          ; 00504af1
    ADD ESP,0x8                         ; 00504af4
    TEST EAX,EAX                        ; 00504af7
    JZ 0x00504936                       ; 00504af9
        ;   XREF to: 00504936 (CONDITIONAL_JUMP)  ; LAB_00504936
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 00504aff
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    XOR EAX,EAX                         ; 00504b04
    MOV ESP,EBP                         ; 00504b06
        ;   Label: caseD_0
    POP EBP                             ; 00504b08
    POP EDI                             ; 00504b09
    POP ESI                             ; 00504b0a
    POP EBX                             ; 00504b0b
    RET                                 ; 00504b0c
    MOV ECX,0x5ca711                    ; 00504b0d | = "..\\core\\netgame.cpp"
        ;   Label: LAB_00504b0d
    MOV EBX,0x337                       ; 00504b12
    PUSH 0x5ca725                       ; 00504b17 | = "CNetGame::syncPlayers - don't use 0!"
    MOV dword ptr [0x01d71de0],ECX      ; 00504b1c | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 00504b22 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00504b28
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00504b2d
    JMP 0x005048b1                      ; 00504b30
        ;   XREF to: 005048b1 (UNCONDITIONAL_JUMP)  ; LAB_005048b1
    MOV EAX,0x1                         ; 00504b35
        ;   Label: LAB_00504b35
    MOV ESP,EBP                         ; 00504b3a
    POP EBP                             ; 00504b3c
    POP EDI                             ; 00504b3d
    POP ESI                             ; 00504b3e
    POP EBX                             ; 00504b3f
    RET                                 ; 00504b40
    XOR EAX,EAX                         ; 00504b41
        ;   Label: LAB_00504b41
    JMP 0x005048f6                      ; 00504b43
        ;   XREF to: 005048f6 (UNCONDITIONAL_JUMP)  ; LAB_005048f6
    PUSH 0x40000000                     ; 00504b48
        ;   Label: LAB_00504b48
    PUSH EBX                            ; 00504b4d
    PUSH ESI                            ; 00504b4e
    CALL core_netgame.cpp_CNetGame_updatePing_FUN_00506320 ; 00504b4f
        ;   XREF to: 00506320 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_updatePing_FUN_00506320(CNetGame * this_ptr, int player_index, float max_ping)
    JMP 0x00504ad6                      ; 00504b54
        ;   XREF to: 00504ad6 (UNCONDITIONAL_JUMP)  ; LAB_00504ad6
    CMP EDI,0x2                         ; 00504b56
        ;   Label: LAB_00504b56
    JNZ 0x00504bd6                      ; 00504b59
        ;   XREF to: 00504bd6 (CONDITIONAL_JUMP)  ; LAB_00504bd6
    CMP EDX,0x4                         ; 00504b5f
    JGE 0x00504b35                      ; 00504b62
        ;   XREF to: 00504b35 (CONDITIONAL_JUMP)  ; LAB_00504b35
    XOR EDI,EDI                         ; 00504b64
    MOV EDX,dword ptr [EBP + 0x18]      ; 00504b66
        ;   Label: LAB_00504b66
    CMP EDX,dword ptr [0x01da6480]      ; 00504b69 | DAT_01da6480
    JLE 0x00504bf9                      ; 00504b6f
        ;   XREF to: 00504bf9 (CONDITIONAL_JUMP)  ; LAB_00504bf9
    CALL engine_special.cpp_clearScreen_FUN_00560d70 ; 00504b75
        ;   XREF to: 00560d70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_00560d70()
    MOV ECX,dword ptr [EBP + 0x18]      ; 00504b7a
    PUSH ECX                            ; 00504b7d
    PUSH 0x5ca7bc                       ; 00504b7e | = "Waiting on sync code %d from server..."
    LEA EAX,[ESP + 0x10c]               ; 00504b83
    PUSH EAX                            ; 00504b8a
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00504b8b
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00504b90
    PUSH 0xb                            ; 00504b93
    PUSH EDI                            ; 00504b95
    LEA EAX,[ESP + 0x10c]               ; 00504b96
    PUSH EAX                            ; 00504b9d
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 00504b9e
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00504ba3
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0 ; 00504ba6
        ;   XREF to: 0057a8a0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0()
    PUSH ESI                            ; 00504bab
    CALL core_netgame.cpp_CNetGame_receivePackets_FUN_00504c70 ; 00504bac
        ;   XREF to: 00504c70 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_receivePackets_FUN_00504c70(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 00504bb1
    MOV EAX,[0x00600284]                ; 00504bb4 | DAT_00600284
    PUSH 0x1                            ; 00504bb9
    MOV EBX,dword ptr [EAX]             ; 00504bbb | DAT_01d70a78
    PUSH EAX                            ; 00504bbd | DAT_01d70a78
    CALL dword ptr [EBX + 0x4]          ; 00504bbe
    ADD ESP,0x8                         ; 00504bc1
    TEST EAX,EAX                        ; 00504bc4
    JZ 0x00504b66                       ; 00504bc6
        ;   XREF to: 00504b66 (CONDITIONAL_JUMP)  ; LAB_00504b66
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 00504bc8
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    XOR EAX,EAX                         ; 00504bcd
    MOV ESP,EBP                         ; 00504bcf
    POP EBP                             ; 00504bd1
    POP EDI                             ; 00504bd2
    POP ESI                             ; 00504bd3
    POP EBX                             ; 00504bd4
    RET                                 ; 00504bd5
    MOV EDX,0x5ca7e3                    ; 00504bd6 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_00504bd6
    MOV ECX,0x3c0                       ; 00504bdb
    PUSH 0x5ca7f7                       ; 00504be0 | = "CNetGame::syncPlayers - invalid mode"
    MOV dword ptr [0x01d71de0],EDX      ; 00504be5 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00504beb | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00504bf1
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00504bf6
    MOV EAX,0x1                         ; 00504bf9
        ;   Label: LAB_00504bf9
    MOV ESP,EBP                         ; 00504bfe
    POP EBP                             ; 00504c00
    POP EDI                             ; 00504c01
    POP ESI                             ; 00504c02
    POP EBX                             ; 00504c03
    RET                                 ; 00504c04

