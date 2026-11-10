; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_processServerFrame_FUN_00507790(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xa0]:4  local_a0
; undefined1       Stack[-0x9c]:1  local_9c
; undefined4       Stack[-0x9b]:4  local_9b
; undefined4       Stack[-0x97]:4  local_97
; undefined4       Stack[-0x93]:4  local_93
; undefined        Stack[-0x8f]:1  local_8f
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_game.cpp_CGame_runGameSession_FUN_004b7f90 at 004b834a
;   core_game.cpp_FUN_004b6f30 at 004b6fc5
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_005ca43b
;   TerminatedCString s_allocSimFrame_sim_histor_005ca44f
;   TerminatedCString s_core_netgame_cpp_005caf6a
;   TerminatedCString s_CNetGame_processServerFr_005caf7e
;   TerminatedCString s_core_netgame_cpp_005cafb5
;   TerminatedCString s_CNetGame_processServerFr_005cafc9
;   TerminatedCString s_core_netgame_cpp_005cb00f
;   TerminatedCString s_CNetGame_processServerFr_005cb023
;   TerminatedCString s_core_netgame_cpp_005cb064
;   TerminatedCString s_CNetGame_processServerFr_005cb078
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 g_CGameInstance.delta_time_float
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01da6474
;   ... and 8 more
;
; Called Functions:
;   core_actor.cpp_setRandomSeed_FUN_0040cdc0
;   core_main.c_FUN_004e4330
;   core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_00507e50
;   core_netgame.cpp_CNetGame_receivePackets_FUN_00504c70
;   core_netgame.cpp_CNetGame_send_FUN_00505870
;   core_netgame.cpp_CNetGame_updatePing_FUN_00506320
;   crt_memory.c_memset_FUN_005a28f0
;   crt_stdlib.c_rand_FUN_005a35cc
;   crt_string.c_memmove_FUN_005a54c0
;   wincore_winrun.cpp_getTime_FUN_005806a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00507790
        ;   Label: core_netgame.cpp_CNetGame_processServerFrame_FUN_00507790
    PUSH ESI                            ; 00507791
    PUSH EDI                            ; 00507792
    PUSH EBP                            ; 00507793
    SUB ESP,0x90                        ; 00507794
    MOV EBX,dword ptr [ESP + 0xa4]      ; 0050779a
    CALL wincore_winrun.cpp_getTime_FUN_005806a0 ; 005077a1
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_005806a0()
    MOV EDX,EAX                         ; 005077a6
    MOV ECX,0x12                        ; 005077a8
    SAR EDX,0x1f                        ; 005077ad
    IDIV ECX                            ; 005077b0
    MOV ECX,dword ptr [0x01da6474]      ; 005077b2 | DAT_01da6474
    MOV EDX,EAX                         ; 005077b8
    SUB EAX,ECX                         ; 005077ba
    MOV dword ptr [0x01da6474],EDX      ; 005077bc | DAT_01da6474
    TEST EAX,EAX                        ; 005077c2
    JL 0x005079f2                       ; 005077c4
        ;   XREF to: 005079f2 (CONDITIONAL_JUMP)  ; LAB_005079f2
    CMP EAX,0x20000                     ; 005077ca
    JLE 0x005077d6                      ; 005077cf
        ;   XREF to: 005077d6 (CONDITIONAL_JUMP)  ; LAB_005077d6
    MOV EAX,0x20000                     ; 005077d1
    MOV ESI,dword ptr [0x01da6478]      ; 005077d6 | DAT_01da6478
        ;   Label: LAB_005077d6
    ADD ESI,EAX                         ; 005077dc
    MOV EDI,dword ptr [EBX]             ; 005077de
    MOV dword ptr [0x01da6478],ESI      ; 005077e0 | DAT_01da6478
    TEST EDI,EDI                        ; 005077e6
    JZ 0x005079f9                       ; 005077e8
        ;   XREF to: 005079f9 (CONDITIONAL_JUMP)  ; LAB_005079f9
    CMP EDI,0x1                         ; 005077ee
    JNZ 0x005079e7                      ; 005077f1
        ;   XREF to: 005079e7 (CONDITIONAL_JUMP)  ; LAB_005079e7
    CMP dword ptr [EBX + 0x4],0x3       ; 005077f7
    JNZ 0x005079e7                      ; 005077fb
        ;   XREF to: 005079e7 (CONDITIONAL_JUMP)  ; LAB_005079e7
    CMP dword ptr [EBX + 0x124],0x0     ; 00507801
    JL 0x00507a18                       ; 00507808
        ;   XREF to: 00507a18 (CONDITIONAL_JUMP)  ; LAB_00507a18
    MOV EDI,dword ptr [EBX + 0x124]     ; 0050780e
        ;   Label: LAB_0050780e
    CMP EDI,dword ptr [EBX + 0x120]     ; 00507814
    JZ 0x0050783e                       ; 0050781a
        ;   XREF to: 0050783e (CONDITIONAL_JUMP)  ; LAB_0050783e
    MOV EBP,0x5cafb5                    ; 0050781c | = "..\\core\\netgame.cpp"
    MOV EAX,0x8f7                       ; 00507821
    PUSH 0x5cafc9                       ; 00507826 | = "CNetGame::processServerFrame - I'm no..."
    MOV dword ptr [0x01d71de0],EBP      ; 0050782b | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 00507831 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00507836
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0050783b
    MOV EDX,dword ptr [EBX + 0x1c]      ; 0050783e
        ;   Label: LAB_0050783e
    XOR ESI,ESI                         ; 00507841
    TEST EDX,EDX                        ; 00507843
    JLE 0x00507860                      ; 00507845
        ;   XREF to: 00507860 (CONDITIONAL_JUMP)  ; LAB_00507860
    PUSH 0x41200000                     ; 00507847
        ;   Label: LAB_00507847
    PUSH ESI                            ; 0050784c
    PUSH EBX                            ; 0050784d
    CALL core_netgame.cpp_CNetGame_updatePing_FUN_00506320 ; 0050784e
        ;   XREF to: 00506320 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_updatePing_FUN_00506320(CNetGame * this_ptr, int player_index, float max_ping)
    INC ESI                             ; 00507853
    MOV EDI,dword ptr [EBX + 0x1c]      ; 00507854
    ADD ESP,0xc                         ; 00507857
    CMP ESI,EDI                         ; 0050785a
    JL 0x00507847                       ; 0050785c
        ;   XREF to: 00507847 (CONDITIONAL_JUMP)  ; LAB_00507847
    MOV EAX,EAX                         ; 0050785e
    PUSH EBX                            ; 00507860
        ;   Label: LAB_00507860
    CALL core_netgame.cpp_CNetGame_receivePackets_FUN_00504c70 ; 00507861
        ;   XREF to: 00504c70 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_receivePackets_FUN_00504c70(CNetGame * this_ptr)
    MOV EDX,0x7fffffff                  ; 00507866
    ADD ESP,0x4                         ; 0050786b
    MOV EBP,dword ptr [EBX + 0x1c]      ; 0050786e
    XOR EAX,EAX                         ; 00507871
    TEST EBP,EBP                        ; 00507873
    JLE 0x00507890                      ; 00507875
        ;   XREF to: 00507890 (CONDITIONAL_JUMP)  ; LAB_00507890
    MOV EBP,EBX                         ; 00507877
    MOV EDI,dword ptr [EBP + 0x68]      ; 00507879
        ;   Label: LAB_00507879
    CMP EDX,EDI                         ; 0050787c
    JLE 0x00507882                      ; 0050787e
        ;   XREF to: 00507882 (CONDITIONAL_JUMP)  ; LAB_00507882
    MOV EDX,EDI                         ; 00507880
    INC EAX                             ; 00507882
        ;   Label: LAB_00507882
    MOV ECX,dword ptr [EBX + 0x1c]      ; 00507883
    ADD EBP,0x80                        ; 00507886
    CMP EAX,ECX                         ; 0050788c
    JL 0x00507879                       ; 0050788e
        ;   XREF to: 00507879 (CONDITIONAL_JUMP)  ; LAB_00507879
    MOV ESI,dword ptr [0x01dc5c80]      ; 00507890 | DAT_01dc5c80
        ;   Label: LAB_00507890
    MOV dword ptr [ESP + 0x80],EDX      ; 00507896
    XOR EBP,EBP                         ; 0050789d
    TEST ESI,ESI                        ; 0050789f
    JLE 0x005078ea                      ; 005078a1
        ;   XREF to: 005078ea (CONDITIONAL_JUMP)  ; LAB_005078ea
    MOV EDI,0x1dc5c84                   ; 005078a3
    XOR ESI,ESI                         ; 005078a8
    ADD EDI,0x74                        ; 005078aa
    MOV ECX,dword ptr [ESP + 0x80]      ; 005078ad
        ;   Label: LAB_005078ad
    CMP ECX,dword ptr [ESI + 0x1dc5c84] ; 005078b4
    JLE 0x00507a40                      ; 005078ba
        ;   XREF to: 00507a40 (CONDITIONAL_JUMP)  ; LAB_00507a40
    MOV EAX,[0x01dc5c80]                ; 005078c0 | DAT_01dc5c80
    DEC EAX                             ; 005078c5
    MOV [0x01dc5c80],EAX                ; 005078c6 | DAT_01dc5c80
    SUB EAX,EBP                         ; 005078cb
    IMUL EAX,EAX,0x74                   ; 005078cd
    PUSH EAX                            ; 005078d0
    MOV EAX,0x1dc5c84                   ; 005078d1
    PUSH EDI                            ; 005078d6 | DAT_01dc5cf8
    ADD EAX,ESI                         ; 005078d7
    PUSH EAX                            ; 005078d9
    CALL crt_string.c_memmove_FUN_005a54c0 ; 005078da
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 005078df
    CMP EBP,dword ptr [0x01dc5c80]      ; 005078e2 | DAT_01dc5c80
        ;   Label: LAB_005078e2
    JL 0x005078ad                       ; 005078e8
        ;   XREF to: 005078ad (CONDITIONAL_JUMP)  ; LAB_005078ad
    MOV EBP,dword ptr [EBX + 0x124]     ; 005078ea
        ;   Label: LAB_005078ea
    SHL EBP,0x7                         ; 005078f0
    MOV EDX,dword ptr [0x01dc5c80]      ; 005078f3 | DAT_01dc5c80
    MOV EBP,dword ptr [EBX + EBP*0x1 + 0x68] ; 005078f9
    XOR EDI,EDI                         ; 005078fd
    MOV ESI,EBP                         ; 005078ff
    TEST EDX,EDX                        ; 00507901
    JLE 0x00507a58                      ; 00507903
        ;   XREF to: 00507a58 (CONDITIONAL_JUMP)  ; LAB_00507a58
    MOV ECX,EDX                         ; 00507909
    SHL EDX,0x3                         ; 0050790b
    SUB EDX,ECX                         ; 0050790e
    SHL EDX,0x2                         ; 00507910
    ADD EDX,ECX                         ; 00507913
    XOR EAX,EAX                         ; 00507915
    SHL EDX,0x2                         ; 00507917
    CMP ESI,dword ptr [EAX + 0x1dc5c84] ; 0050791a | DAT_01dc5cf8
        ;   Label: LAB_0050791a
    JNZ 0x00507a4c                      ; 00507920
        ;   XREF to: 00507a4c (CONDITIONAL_JUMP)  ; LAB_00507a4c
    TEST EDI,EDI                        ; 00507926
    JL 0x00507a58                       ; 00507928
        ;   XREF to: 00507a58 (CONDITIONAL_JUMP)  ; LAB_00507a58
    MOV ESI,0x1dc5c84                   ; 0050792e
    ADD ESI,EAX                         ; 00507933
    CALL crt_stdlib.c_rand_FUN_005a35cc ; 00507935
        ;   XREF to: 005a35cc (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005a35cc()
        ;   Label: LAB_00507935
    MOV dword ptr [ESI + 0x4],EAX       ; 0050793a
    MOV EAX,[0x005fe9dc]                ; 0050793d | g_CGamePtr
    MOV dword ptr [ESP + 0x7c],ESI      ; 00507942
    MOV EDX,dword ptr [EAX + 0x314]     ; 00507946 | g_CGameInstance.delta_time_float
    MOV dword ptr [ESI + 0x8],EDX       ; 0050794c
    MOV ECX,dword ptr [EBX + 0x1c]      ; 0050794f
    XOR EBP,EBP                         ; 00507952
    TEST ECX,ECX                        ; 00507954
    JLE 0x00507980                      ; 00507956
        ;   XREF to: 00507980 (CONDITIONAL_JUMP)  ; LAB_00507980
    MOV EAX,EBX                         ; 00507958
    MOV EDX,ESI                         ; 0050795a
    MOV ECX,0xd                         ; 0050795c
        ;   Label: LAB_0050795c
    LEA EDI,[EDX + 0xc]                 ; 00507961
    LEA ESI,[EAX + 0x6c]                ; 00507964
    ADD EDX,0x34                        ; 00507967
    MOVSD.REP ES:EDI,ESI                ; 0050796a
    INC EBP                             ; 0050796c
    MOV ESI,dword ptr [EBX + 0x1c]      ; 0050796d
    ADD EAX,0x80                        ; 00507970
    CMP EBP,ESI                         ; 00507975
    JL 0x0050795c                       ; 00507977
        ;   XREF to: 0050795c (CONDITIONAL_JUMP)  ; LAB_0050795c
    LEA EAX,[EAX]                       ; 00507979
    NOP                                 ; 0050797f
    MOV EDI,dword ptr [ESP + 0x7c]      ; 00507980
        ;   Label: LAB_00507980
    PUSH EDI                            ; 00507984
    PUSH EBX                            ; 00507985
    XOR EBP,EBP                         ; 00507986
    CALL core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_00507e50 ; 00507988
        ;   XREF to: 00507e50 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_00507e50(CNetGame * this_ptr, SSimFrame * sim_frame)
    ADD ESP,0x8                         ; 0050798d
    MOV EAX,dword ptr [EBX + 0x1c]      ; 00507990
    MOV dword ptr [ESP + 0x88],EBP      ; 00507993
    TEST EAX,EAX                        ; 0050799a
    JLE 0x005079e7                      ; 0050799c
        ;   XREF to: 005079e7 (CONDITIONAL_JUMP)  ; LAB_005079e7
    LEA EAX,[EBX + 0x20]                ; 0050799e
    MOV dword ptr [ESP + 0x84],EAX      ; 005079a1
    MOV EAX,dword ptr [ESP + 0x88]      ; 005079a8
        ;   Label: LAB_005079a8
    MOV EDI,dword ptr [EBX + 0x124]     ; 005079af
    CMP EAX,EDI                         ; 005079b5
    JNZ 0x00507abf                      ; 005079b7
        ;   XREF to: 00507abf (CONDITIONAL_JUMP)  ; LAB_00507abf
    MOV EDX,dword ptr [ESP + 0x84]      ; 005079bd
        ;   Label: LAB_005079bd
    MOV ECX,dword ptr [ESP + 0x88]      ; 005079c4
    MOV ESI,dword ptr [EBX + 0x1c]      ; 005079cb
    ADD EDX,0x80                        ; 005079ce
    INC ECX                             ; 005079d4
    MOV dword ptr [ESP + 0x84],EDX      ; 005079d5
    MOV dword ptr [ESP + 0x88],ECX      ; 005079dc
    CMP ECX,ESI                         ; 005079e3
    JL 0x005079a8                       ; 005079e5
        ;   XREF to: 005079a8 (CONDITIONAL_JUMP)  ; LAB_005079a8
    ADD ESP,0x90                        ; 005079e7
        ;   Label: LAB_005079e7
    POP EBP                             ; 005079ed
    POP EDI                             ; 005079ee
    POP ESI                             ; 005079ef
    POP EBX                             ; 005079f0
    RET                                 ; 005079f1
    XOR EAX,EAX                         ; 005079f2
        ;   Label: LAB_005079f2
    JMP 0x005077d6                      ; 005079f4
        ;   XREF to: 005077d6 (UNCONDITIONAL_JUMP)  ; LAB_005077d6
    CALL crt_stdlib.c_rand_FUN_005a35cc ; 005079f9
        ;   XREF to: 005a35cc (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005a35cc()
        ;   Label: LAB_005079f9
    PUSH EAX                            ; 005079fe
    MOV dword ptr [EBX + 0x17c],EAX     ; 005079ff
    CALL core_actor.cpp_setRandomSeed_FUN_0040cdc0 ; 00507a05
        ;   XREF to: 0040cdc0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_setRandomSeed_FUN_0040cdc0(uint seed_value)
    ADD ESP,0x4                         ; 00507a0a
    ADD ESP,0x90                        ; 00507a0d
    POP EBP                             ; 00507a13
    POP EDI                             ; 00507a14
    POP ESI                             ; 00507a15
    POP EBX                             ; 00507a16
    RET                                 ; 00507a17
    MOV ECX,0x5caf6a                    ; 00507a18 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_00507a18
    MOV ESI,0x8f6                       ; 00507a1d
    PUSH 0x5caf7e                       ; 00507a22 | = "CNetGame::processServerFrame - I'm no..."
    MOV dword ptr [0x01d71de0],ECX      ; 00507a27 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 00507a2d | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00507a33
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00507a38
    JMP 0x0050780e                      ; 00507a3b
        ;   XREF to: 0050780e (UNCONDITIONAL_JUMP)  ; LAB_0050780e
    ADD EDI,0x74                        ; 00507a40
        ;   Label: LAB_00507a40
    INC EBP                             ; 00507a43
    ADD ESI,0x74                        ; 00507a44
    JMP 0x005078e2                      ; 00507a47
        ;   XREF to: 005078e2 (UNCONDITIONAL_JUMP)  ; LAB_005078e2
    ADD EAX,0x74                        ; 00507a4c
        ;   Label: LAB_00507a4c
    INC EDI                             ; 00507a4f
    CMP EAX,EDX                         ; 00507a50
    JL 0x0050791a                       ; 00507a52
        ;   XREF to: 0050791a (CONDITIONAL_JUMP)  ; LAB_0050791a
    CMP dword ptr [0x01dc5c80],0x200    ; 00507a58 | DAT_01dc5c80
        ;   Label: LAB_00507a58
    JL 0x00507a86                       ; 00507a62
        ;   XREF to: 00507a86 (CONDITIONAL_JUMP)  ; LAB_00507a86
    MOV EDI,0x5ca43b                    ; 00507a64 | = "..\\core\\netgame.cpp"
    MOV EAX,0x12b                       ; 00507a69
    PUSH 0x5ca44f                       ; 00507a6e | = "allocSimFrame - sim history list full"
    MOV dword ptr [0x01d71de0],EDI      ; 00507a73 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 00507a79 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00507a7e
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00507a83
    MOV EDX,dword ptr [0x01dc5c80]      ; 00507a86 | DAT_01dc5c80
        ;   Label: LAB_00507a86
    LEA EAX,[EDX*0x8 + 0x0]             ; 00507a8c
    SUB EAX,EDX                         ; 00507a93
    SHL EAX,0x2                         ; 00507a95
    MOV ESI,0x1dc5c84                   ; 00507a98
    ADD EAX,EDX                         ; 00507a9d
    PUSH 0x74                           ; 00507a9f
    SHL EAX,0x2                         ; 00507aa1
    PUSH 0x0                            ; 00507aa4
    ADD ESI,EAX                         ; 00507aa6
    INC EDX                             ; 00507aa8
    PUSH ESI                            ; 00507aa9
    MOV dword ptr [0x01dc5c80],EDX      ; 00507aaa | DAT_01dc5c80
    CALL crt_memory.c_memset_FUN_005a28f0 ; 00507ab0
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00507ab5
    MOV dword ptr [ESI],EBP             ; 00507ab8
    JMP 0x00507935                      ; 00507aba
        ;   XREF to: 00507935 (UNCONDITIONAL_JUMP)  ; LAB_00507935
    MOV EBP,EDI                         ; 00507abf
        ;   Label: LAB_00507abf
    MOV ESI,dword ptr [ESP + 0x84]      ; 00507ac1
    SHL EBP,0x7                         ; 00507ac8
    MOV EDX,dword ptr [ESI + 0x48]      ; 00507acb
    MOV EBP,dword ptr [EBX + EBP*0x1 + 0x68] ; 00507ace
    SUB EBP,EDX                         ; 00507ad2
    CMP EBP,0x1                         ; 00507ad4
    JGE 0x00507afc                      ; 00507ad7
        ;   XREF to: 00507afc (CONDITIONAL_JUMP)  ; LAB_00507afc
    MOV ECX,0x5cb00f                    ; 00507ad9 | = "..\\core\\netgame.cpp"
    MOV EDI,0x93b                       ; 00507ade
    PUSH 0x5cb023                       ; 00507ae3 | = "CNetGame::processServerFrame - player..."
    MOV dword ptr [0x01d71de0],ECX      ; 00507ae8 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 00507aee | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00507af4
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00507af9
    CMP EBP,0x5                         ; 00507afc
        ;   Label: LAB_00507afc
    JLE 0x00507b06                      ; 00507aff
        ;   XREF to: 00507b06 (CONDITIONAL_JUMP)  ; LAB_00507b06
    MOV EBP,0x5                         ; 00507b01
    MOV EAX,dword ptr [ESI + 0x48]      ; 00507b06
        ;   Label: LAB_00507b06
    MOV dword ptr [ESP + 0x8c],EAX      ; 00507b09
    TEST EBP,EBP                        ; 00507b10
        ;   Label: LAB_00507b10
    JLE 0x005079bd                      ; 00507b12
        ;   XREF to: 005079bd (CONDITIONAL_JUMP)  ; LAB_005079bd
    MOV ECX,dword ptr [ESP + 0x8c]      ; 00507b18
    MOV ESI,dword ptr [0x01dc5c80]      ; 00507b1f | DAT_01dc5c80
    XOR EDX,EDX                         ; 00507b25
    TEST ESI,ESI                        ; 00507b27
    JLE 0x00507bcf                      ; 00507b29
        ;   XREF to: 00507bcf (CONDITIONAL_JUMP)  ; LAB_00507bcf
    XOR EAX,EAX                         ; 00507b2f
    IMUL ESI,ESI,0x74                   ; 00507b31
    CMP ECX,dword ptr [EAX + 0x1dc5c84] ; 00507b34
        ;   Label: LAB_00507b34
    JNZ 0x00507bc3                      ; 00507b3a
        ;   XREF to: 00507bc3 (CONDITIONAL_JUMP)  ; LAB_00507bc3
    MOV ESI,EDX                         ; 00507b40
        ;   Label: LAB_00507b40
    TEST EDX,EDX                        ; 00507b42
    JL 0x00507bd9                       ; 00507b44
        ;   XREF to: 00507bd9 (CONDITIONAL_JUMP)  ; LAB_00507bd9
    IMUL EDX,ESI,0x74                   ; 00507b4a
        ;   Label: LAB_00507b4a
    MOV ECX,0x79                        ; 00507b4d
    MOV AH,0xf                          ; 00507b52
    ADD EDX,0x1dc5c84                   ; 00507b54
    MOV dword ptr [ESP],ECX             ; 00507b5a
    MOV byte ptr [ESP + 0x4],AH         ; 00507b5d
    MOV EAX,dword ptr [EDX]             ; 00507b61 | DAT_01dc5c10 | DAT_01dc5cf8
    MOV dword ptr [ESP + 0x5],EAX       ; 00507b63
    MOV EAX,dword ptr [EDX + 0x4]       ; 00507b67 | DAT_01dc5c14 | DAT_01dc5cfc
    MOV dword ptr [ESP + 0x9],EAX       ; 00507b6a
    MOV EAX,dword ptr [EDX + 0x8]       ; 00507b6e | DAT_01dc5c18 | DAT_01dc5d00
    MOV dword ptr [ESP + 0xd],EAX       ; 00507b71
    MOV ESI,dword ptr [EBX + 0x1c]      ; 00507b75
    XOR EAX,EAX                         ; 00507b78
    TEST ESI,ESI                        ; 00507b7a
    JLE 0x00507b9a                      ; 00507b7c
        ;   XREF to: 00507b9a (CONDITIONAL_JUMP)  ; LAB_00507b9a
    IMUL ESI,EAX,0x34                   ; 00507b7e
        ;   Label: LAB_00507b7e
    MOV ECX,0xd                         ; 00507b81
    LEA EDI,[ESP + ESI*0x1 + 0x11]      ; 00507b86
    LEA ESI,[EDX + 0xc]                 ; 00507b8a
    MOVSD.REP ES:EDI,ESI                ; 00507b8d
    INC EAX                             ; 00507b8f
    MOV EDI,dword ptr [EBX + 0x1c]      ; 00507b90
    ADD EDX,0x34                        ; 00507b93
    CMP EAX,EDI                         ; 00507b96
    JL 0x00507b7e                       ; 00507b98
        ;   XREF to: 00507b7e (CONDITIONAL_JUMP)  ; LAB_00507b7e
    MOV EAX,ESP                         ; 00507b9a
        ;   Label: LAB_00507b9a
    PUSH EAX                            ; 00507b9c
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00507b9d
    PUSH EAX                            ; 00507ba4
    PUSH EBX                            ; 00507ba5
    CALL core_netgame.cpp_CNetGame_send_FUN_00505870 ; 00507ba6
        ;   XREF to: 00505870 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_send_FUN_00505870(CNetGame * this_ptr, int player_index, SNetPacketHeader * packet)
    ADD ESP,0xc                         ; 00507bab
    MOV EDX,dword ptr [ESP + 0x8c]      ; 00507bae
    INC EDX                             ; 00507bb5
    DEC EBP                             ; 00507bb6
    MOV dword ptr [ESP + 0x8c],EDX      ; 00507bb7
    JMP 0x00507b10                      ; 00507bbe
        ;   XREF to: 00507b10 (UNCONDITIONAL_JUMP)  ; LAB_00507b10
    ADD EAX,0x74                        ; 00507bc3
        ;   Label: LAB_00507bc3
    INC EDX                             ; 00507bc6
    CMP EAX,ESI                         ; 00507bc7
    JL 0x00507b34                       ; 00507bc9
        ;   XREF to: 00507b34 (CONDITIONAL_JUMP)  ; LAB_00507b34
    MOV EDX,0xffffffff                  ; 00507bcf
        ;   Label: LAB_00507bcf
    JMP 0x00507b40                      ; 00507bd4
        ;   XREF to: 00507b40 (UNCONDITIONAL_JUMP)  ; LAB_00507b40
    MOV EAX,0x5cb064                    ; 00507bd9 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_00507bd9
    MOV EDX,0x94d                       ; 00507bde
    PUSH 0x5cb078                       ; 00507be3 | = "CNetGame::processServerFrame - client..."
    MOV [0x01d71de0],EAX                ; 00507be8 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 00507bed | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00507bf3
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00507bf8
    JMP 0x00507b4a                      ; 00507bfb
        ;   XREF to: 00507b4a (UNCONDITIONAL_JUMP)  ; LAB_00507b4a

