; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_processServerFrame_FUN_0050ecb0(CNetGame *this_ptr)
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
;   core_game.cpp_CGame_runGameSession_FUN_004b6170 at 004b652c
;   core_game.cpp_FUN_004b5190 at 004b5234
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_005e03cf
;   TerminatedCString s_allocSimFrame_sim_histor_005e03e3
;   TerminatedCString s_core_netgame_cpp_005e0efe
;   TerminatedCString s_CNetGame_processServerFr_005e0f12
;   TerminatedCString s_core_netgame_cpp_005e0f49
;   TerminatedCString s_CNetGame_processServerFr_005e0f5d
;   TerminatedCString s_core_netgame_cpp_005e0fa3
;   TerminatedCString s_CNetGame_processServerFr_005e0fb7
;   TerminatedCString s_core_netgame_cpp_005e0ff8
;   TerminatedCString s_CNetGame_processServerFr_005e100c
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 g_CGameInstance.delta_time_float
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01d34e34
;   ... and 8 more
;
; Called Functions:
;   core_actor.cpp_setRandomSeed_FUN_0040cee0
;   core_main.c_FUN_004e4500
;   core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_0050f370
;   core_netgame.cpp_CNetGame_receivePackets_FUN_0050c190
;   core_netgame.cpp_CNetGame_send_FUN_0050cd90
;   core_netgame.cpp_CNetGame_updatePing_FUN_0050d840
;   crt_memory.c_memset_FUN_005b77c0
;   crt_stdlib.c_rand_FUN_005b849c
;   crt_string.c_memmove_FUN_005ba1f0
;   wincore_winrun.cpp_getTime_FUN_0058e9e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050ecb0
        ;   Label: core_netgame.cpp_CNetGame_processServerFrame_FUN_0050ecb0
    PUSH ESI                            ; 0050ecb1
    PUSH EDI                            ; 0050ecb2
    PUSH EBP                            ; 0050ecb3
    SUB ESP,0x90                        ; 0050ecb4
    MOV EBX,dword ptr [ESP + 0xa4]      ; 0050ecba
    CALL wincore_winrun.cpp_getTime_FUN_0058e9e0 ; 0050ecc1
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_0058e9e0()
    MOV EDX,EAX                         ; 0050ecc6
    MOV ECX,0x12                        ; 0050ecc8
    SAR EDX,0x1f                        ; 0050eccd
    IDIV ECX                            ; 0050ecd0
    MOV ECX,dword ptr [0x01d34e34]      ; 0050ecd2 | DAT_01d34e34
    MOV EDX,EAX                         ; 0050ecd8
    SUB EAX,ECX                         ; 0050ecda
    MOV dword ptr [0x01d34e34],EDX      ; 0050ecdc | DAT_01d34e34
    TEST EAX,EAX                        ; 0050ece2
    JL 0x0050ef12                       ; 0050ece4
        ;   XREF to: 0050ef12 (CONDITIONAL_JUMP)  ; LAB_0050ef12
    CMP EAX,0x20000                     ; 0050ecea
    JLE 0x0050ecf6                      ; 0050ecef
        ;   XREF to: 0050ecf6 (CONDITIONAL_JUMP)  ; LAB_0050ecf6
    MOV EAX,0x20000                     ; 0050ecf1
    MOV ESI,dword ptr [0x01d34e38]      ; 0050ecf6 | DAT_01d34e38
        ;   Label: LAB_0050ecf6
    ADD ESI,EAX                         ; 0050ecfc
    MOV EDI,dword ptr [EBX]             ; 0050ecfe
    MOV dword ptr [0x01d34e38],ESI      ; 0050ed00 | DAT_01d34e38
    TEST EDI,EDI                        ; 0050ed06
    JZ 0x0050ef19                       ; 0050ed08
        ;   XREF to: 0050ef19 (CONDITIONAL_JUMP)  ; LAB_0050ef19
    CMP EDI,0x1                         ; 0050ed0e
    JNZ 0x0050ef07                      ; 0050ed11
        ;   XREF to: 0050ef07 (CONDITIONAL_JUMP)  ; LAB_0050ef07
    CMP dword ptr [EBX + 0x4],0x3       ; 0050ed17
    JNZ 0x0050ef07                      ; 0050ed1b
        ;   XREF to: 0050ef07 (CONDITIONAL_JUMP)  ; LAB_0050ef07
    CMP dword ptr [EBX + 0x124],0x0     ; 0050ed21
    JL 0x0050ef38                       ; 0050ed28
        ;   XREF to: 0050ef38 (CONDITIONAL_JUMP)  ; LAB_0050ef38
    MOV EDI,dword ptr [EBX + 0x124]     ; 0050ed2e
        ;   Label: LAB_0050ed2e
    CMP EDI,dword ptr [EBX + 0x120]     ; 0050ed34
    JZ 0x0050ed5e                       ; 0050ed3a
        ;   XREF to: 0050ed5e (CONDITIONAL_JUMP)  ; LAB_0050ed5e
    MOV EBP,0x5e0f49                    ; 0050ed3c | = "..\\core\\netgame.cpp"
    MOV EAX,0x8f7                       ; 0050ed41
    PUSH 0x5e0f5d                       ; 0050ed46 | = "CNetGame::processServerFrame - I'm no..."
    MOV dword ptr [0x01d046a0],EBP      ; 0050ed4b | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 0050ed51 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0050ed56
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0050ed5b
    MOV EDX,dword ptr [EBX + 0x1c]      ; 0050ed5e
        ;   Label: LAB_0050ed5e
    XOR ESI,ESI                         ; 0050ed61
    TEST EDX,EDX                        ; 0050ed63
    JLE 0x0050ed80                      ; 0050ed65
        ;   XREF to: 0050ed80 (CONDITIONAL_JUMP)  ; LAB_0050ed80
    PUSH 0x41200000                     ; 0050ed67
        ;   Label: LAB_0050ed67
    PUSH ESI                            ; 0050ed6c
    PUSH EBX                            ; 0050ed6d
    CALL core_netgame.cpp_CNetGame_updatePing_FUN_0050d840 ; 0050ed6e
        ;   XREF to: 0050d840 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_updatePing_FUN_0050d840(CNetGame * this_ptr, int player_index, float max_ping)
    INC ESI                             ; 0050ed73
    MOV EDI,dword ptr [EBX + 0x1c]      ; 0050ed74
    ADD ESP,0xc                         ; 0050ed77
    CMP ESI,EDI                         ; 0050ed7a
    JL 0x0050ed67                       ; 0050ed7c
        ;   XREF to: 0050ed67 (CONDITIONAL_JUMP)  ; LAB_0050ed67
    MOV EAX,EAX                         ; 0050ed7e
    PUSH EBX                            ; 0050ed80
        ;   Label: LAB_0050ed80
    CALL core_netgame.cpp_CNetGame_receivePackets_FUN_0050c190 ; 0050ed81
        ;   XREF to: 0050c190 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_receivePackets_FUN_0050c190(CNetGame * this_ptr)
    MOV EDX,0x7fffffff                  ; 0050ed86
    ADD ESP,0x4                         ; 0050ed8b
    MOV EBP,dword ptr [EBX + 0x1c]      ; 0050ed8e
    XOR EAX,EAX                         ; 0050ed91
    TEST EBP,EBP                        ; 0050ed93
    JLE 0x0050edb0                      ; 0050ed95
        ;   XREF to: 0050edb0 (CONDITIONAL_JUMP)  ; LAB_0050edb0
    MOV EBP,EBX                         ; 0050ed97
    MOV EDI,dword ptr [EBP + 0x68]      ; 0050ed99
        ;   Label: LAB_0050ed99
    CMP EDX,EDI                         ; 0050ed9c
    JLE 0x0050eda2                      ; 0050ed9e
        ;   XREF to: 0050eda2 (CONDITIONAL_JUMP)  ; LAB_0050eda2
    MOV EDX,EDI                         ; 0050eda0
    INC EAX                             ; 0050eda2
        ;   Label: LAB_0050eda2
    MOV ECX,dword ptr [EBX + 0x1c]      ; 0050eda3
    ADD EBP,0x80                        ; 0050eda6
    CMP EAX,ECX                         ; 0050edac
    JL 0x0050ed99                       ; 0050edae
        ;   XREF to: 0050ed99 (CONDITIONAL_JUMP)  ; LAB_0050ed99
    MOV ESI,dword ptr [0x01d54640]      ; 0050edb0 | DAT_01d54640
        ;   Label: LAB_0050edb0
    MOV dword ptr [ESP + 0x80],EDX      ; 0050edb6
    XOR EBP,EBP                         ; 0050edbd
    TEST ESI,ESI                        ; 0050edbf
    JLE 0x0050ee0a                      ; 0050edc1
        ;   XREF to: 0050ee0a (CONDITIONAL_JUMP)  ; LAB_0050ee0a
    MOV EDI,0x1d54644                   ; 0050edc3
    XOR ESI,ESI                         ; 0050edc8
    ADD EDI,0x74                        ; 0050edca
    MOV ECX,dword ptr [ESP + 0x80]      ; 0050edcd
        ;   Label: LAB_0050edcd
    CMP ECX,dword ptr [ESI + 0x1d54644] ; 0050edd4
    JLE 0x0050ef60                      ; 0050edda
        ;   XREF to: 0050ef60 (CONDITIONAL_JUMP)  ; LAB_0050ef60
    MOV EAX,[0x01d54640]                ; 0050ede0 | DAT_01d54640
    DEC EAX                             ; 0050ede5
    MOV [0x01d54640],EAX                ; 0050ede6 | DAT_01d54640
    SUB EAX,EBP                         ; 0050edeb
    IMUL EAX,EAX,0x74                   ; 0050eded
    PUSH EAX                            ; 0050edf0
    MOV EAX,0x1d54644                   ; 0050edf1
    PUSH EDI                            ; 0050edf6 | DAT_01d546b8
    ADD EAX,ESI                         ; 0050edf7
    PUSH EAX                            ; 0050edf9
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 0050edfa
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0050edff
    CMP EBP,dword ptr [0x01d54640]      ; 0050ee02 | DAT_01d54640
        ;   Label: LAB_0050ee02
    JL 0x0050edcd                       ; 0050ee08
        ;   XREF to: 0050edcd (CONDITIONAL_JUMP)  ; LAB_0050edcd
    MOV EBP,dword ptr [EBX + 0x124]     ; 0050ee0a
        ;   Label: LAB_0050ee0a
    SHL EBP,0x7                         ; 0050ee10
    MOV EDX,dword ptr [0x01d54640]      ; 0050ee13 | DAT_01d54640
    MOV EBP,dword ptr [EBX + EBP*0x1 + 0x68] ; 0050ee19
    XOR EDI,EDI                         ; 0050ee1d
    MOV ESI,EBP                         ; 0050ee1f
    TEST EDX,EDX                        ; 0050ee21
    JLE 0x0050ef78                      ; 0050ee23
        ;   XREF to: 0050ef78 (CONDITIONAL_JUMP)  ; LAB_0050ef78
    MOV ECX,EDX                         ; 0050ee29
    SHL EDX,0x3                         ; 0050ee2b
    SUB EDX,ECX                         ; 0050ee2e
    SHL EDX,0x2                         ; 0050ee30
    ADD EDX,ECX                         ; 0050ee33
    XOR EAX,EAX                         ; 0050ee35
    SHL EDX,0x2                         ; 0050ee37
    CMP ESI,dword ptr [EAX + 0x1d54644] ; 0050ee3a | DAT_01d546b8
        ;   Label: LAB_0050ee3a
    JNZ 0x0050ef6c                      ; 0050ee40
        ;   XREF to: 0050ef6c (CONDITIONAL_JUMP)  ; LAB_0050ef6c
    TEST EDI,EDI                        ; 0050ee46
    JL 0x0050ef78                       ; 0050ee48
        ;   XREF to: 0050ef78 (CONDITIONAL_JUMP)  ; LAB_0050ef78
    MOV ESI,0x1d54644                   ; 0050ee4e
    ADD ESI,EAX                         ; 0050ee53
    CALL crt_stdlib.c_rand_FUN_005b849c ; 0050ee55
        ;   XREF to: 005b849c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005b849c()
        ;   Label: LAB_0050ee55
    MOV dword ptr [ESI + 0x4],EAX       ; 0050ee5a
    MOV EAX,[0x00616494]                ; 0050ee5d | g_CGamePtr
    MOV dword ptr [ESP + 0x7c],ESI      ; 0050ee62
    MOV EDX,dword ptr [EAX + 0x284]     ; 0050ee66 | g_CGameInstance.delta_time_float
    MOV dword ptr [ESI + 0x8],EDX       ; 0050ee6c
    MOV ECX,dword ptr [EBX + 0x1c]      ; 0050ee6f
    XOR EBP,EBP                         ; 0050ee72
    TEST ECX,ECX                        ; 0050ee74
    JLE 0x0050eea0                      ; 0050ee76
        ;   XREF to: 0050eea0 (CONDITIONAL_JUMP)  ; LAB_0050eea0
    MOV EAX,EBX                         ; 0050ee78
    MOV EDX,ESI                         ; 0050ee7a
    MOV ECX,0xd                         ; 0050ee7c
        ;   Label: LAB_0050ee7c
    LEA EDI,[EDX + 0xc]                 ; 0050ee81
    LEA ESI,[EAX + 0x6c]                ; 0050ee84
    ADD EDX,0x34                        ; 0050ee87
    MOVSD.REP ES:EDI,ESI                ; 0050ee8a
    INC EBP                             ; 0050ee8c
    MOV ESI,dword ptr [EBX + 0x1c]      ; 0050ee8d
    ADD EAX,0x80                        ; 0050ee90
    CMP EBP,ESI                         ; 0050ee95
    JL 0x0050ee7c                       ; 0050ee97
        ;   XREF to: 0050ee7c (CONDITIONAL_JUMP)  ; LAB_0050ee7c
    LEA EAX,[EAX]                       ; 0050ee99
    NOP                                 ; 0050ee9f
    MOV EDI,dword ptr [ESP + 0x7c]      ; 0050eea0
        ;   Label: LAB_0050eea0
    PUSH EDI                            ; 0050eea4
    PUSH EBX                            ; 0050eea5
    XOR EBP,EBP                         ; 0050eea6
    CALL core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_0050f370 ; 0050eea8
        ;   XREF to: 0050f370 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_0050f370(CNetGame * this_ptr, SSimFrame * sim_frame)
    ADD ESP,0x8                         ; 0050eead
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0050eeb0
    MOV dword ptr [ESP + 0x88],EBP      ; 0050eeb3
    TEST EAX,EAX                        ; 0050eeba
    JLE 0x0050ef07                      ; 0050eebc
        ;   XREF to: 0050ef07 (CONDITIONAL_JUMP)  ; LAB_0050ef07
    LEA EAX,[EBX + 0x20]                ; 0050eebe
    MOV dword ptr [ESP + 0x84],EAX      ; 0050eec1
    MOV EAX,dword ptr [ESP + 0x88]      ; 0050eec8
        ;   Label: LAB_0050eec8
    MOV EDI,dword ptr [EBX + 0x124]     ; 0050eecf
    CMP EAX,EDI                         ; 0050eed5
    JNZ 0x0050efdf                      ; 0050eed7
        ;   XREF to: 0050efdf (CONDITIONAL_JUMP)  ; LAB_0050efdf
    MOV EDX,dword ptr [ESP + 0x84]      ; 0050eedd
        ;   Label: LAB_0050eedd
    MOV ECX,dword ptr [ESP + 0x88]      ; 0050eee4
    MOV ESI,dword ptr [EBX + 0x1c]      ; 0050eeeb
    ADD EDX,0x80                        ; 0050eeee
    INC ECX                             ; 0050eef4
    MOV dword ptr [ESP + 0x84],EDX      ; 0050eef5
    MOV dword ptr [ESP + 0x88],ECX      ; 0050eefc
    CMP ECX,ESI                         ; 0050ef03
    JL 0x0050eec8                       ; 0050ef05
        ;   XREF to: 0050eec8 (CONDITIONAL_JUMP)  ; LAB_0050eec8
    ADD ESP,0x90                        ; 0050ef07
        ;   Label: LAB_0050ef07
    POP EBP                             ; 0050ef0d
    POP EDI                             ; 0050ef0e
    POP ESI                             ; 0050ef0f
    POP EBX                             ; 0050ef10
    RET                                 ; 0050ef11
    XOR EAX,EAX                         ; 0050ef12
        ;   Label: LAB_0050ef12
    JMP 0x0050ecf6                      ; 0050ef14
        ;   XREF to: 0050ecf6 (UNCONDITIONAL_JUMP)  ; LAB_0050ecf6
    CALL crt_stdlib.c_rand_FUN_005b849c ; 0050ef19
        ;   XREF to: 005b849c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005b849c()
        ;   Label: LAB_0050ef19
    PUSH EAX                            ; 0050ef1e
    MOV dword ptr [EBX + 0x17c],EAX     ; 0050ef1f
    CALL core_actor.cpp_setRandomSeed_FUN_0040cee0 ; 0050ef25
        ;   XREF to: 0040cee0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_setRandomSeed_FUN_0040cee0(uint seed_value)
    ADD ESP,0x4                         ; 0050ef2a
    ADD ESP,0x90                        ; 0050ef2d
    POP EBP                             ; 0050ef33
    POP EDI                             ; 0050ef34
    POP ESI                             ; 0050ef35
    POP EBX                             ; 0050ef36
    RET                                 ; 0050ef37
    MOV ECX,0x5e0efe                    ; 0050ef38 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_0050ef38
    MOV ESI,0x8f6                       ; 0050ef3d
    PUSH 0x5e0f12                       ; 0050ef42 | = "CNetGame::processServerFrame - I'm no..."
    MOV dword ptr [0x01d046a0],ECX      ; 0050ef47 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0050ef4d | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0050ef53
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0050ef58
    JMP 0x0050ed2e                      ; 0050ef5b
        ;   XREF to: 0050ed2e (UNCONDITIONAL_JUMP)  ; LAB_0050ed2e
    ADD EDI,0x74                        ; 0050ef60
        ;   Label: LAB_0050ef60
    INC EBP                             ; 0050ef63
    ADD ESI,0x74                        ; 0050ef64
    JMP 0x0050ee02                      ; 0050ef67
        ;   XREF to: 0050ee02 (UNCONDITIONAL_JUMP)  ; LAB_0050ee02
    ADD EAX,0x74                        ; 0050ef6c
        ;   Label: LAB_0050ef6c
    INC EDI                             ; 0050ef6f
    CMP EAX,EDX                         ; 0050ef70
    JL 0x0050ee3a                       ; 0050ef72
        ;   XREF to: 0050ee3a (CONDITIONAL_JUMP)  ; LAB_0050ee3a
    CMP dword ptr [0x01d54640],0x200    ; 0050ef78 | DAT_01d54640
        ;   Label: LAB_0050ef78
    JL 0x0050efa6                       ; 0050ef82
        ;   XREF to: 0050efa6 (CONDITIONAL_JUMP)  ; LAB_0050efa6
    MOV EDI,0x5e03cf                    ; 0050ef84 | = "..\\core\\netgame.cpp"
    MOV EAX,0x12b                       ; 0050ef89
    PUSH 0x5e03e3                       ; 0050ef8e | = "allocSimFrame - sim history list full"
    MOV dword ptr [0x01d046a0],EDI      ; 0050ef93 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 0050ef99 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0050ef9e
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0050efa3
    MOV EDX,dword ptr [0x01d54640]      ; 0050efa6 | DAT_01d54640
        ;   Label: LAB_0050efa6
    LEA EAX,[EDX*0x8 + 0x0]             ; 0050efac
    SUB EAX,EDX                         ; 0050efb3
    SHL EAX,0x2                         ; 0050efb5
    MOV ESI,0x1d54644                   ; 0050efb8
    ADD EAX,EDX                         ; 0050efbd
    PUSH 0x74                           ; 0050efbf
    SHL EAX,0x2                         ; 0050efc1
    PUSH 0x0                            ; 0050efc4
    ADD ESI,EAX                         ; 0050efc6
    INC EDX                             ; 0050efc8
    PUSH ESI                            ; 0050efc9
    MOV dword ptr [0x01d54640],EDX      ; 0050efca | DAT_01d54640
    CALL crt_memory.c_memset_FUN_005b77c0 ; 0050efd0
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0050efd5
    MOV dword ptr [ESI],EBP             ; 0050efd8
    JMP 0x0050ee55                      ; 0050efda
        ;   XREF to: 0050ee55 (UNCONDITIONAL_JUMP)  ; LAB_0050ee55
    MOV EBP,EDI                         ; 0050efdf
        ;   Label: LAB_0050efdf
    MOV ESI,dword ptr [ESP + 0x84]      ; 0050efe1
    SHL EBP,0x7                         ; 0050efe8
    MOV EDX,dword ptr [ESI + 0x48]      ; 0050efeb
    MOV EBP,dword ptr [EBX + EBP*0x1 + 0x68] ; 0050efee
    SUB EBP,EDX                         ; 0050eff2
    CMP EBP,0x1                         ; 0050eff4
    JGE 0x0050f01c                      ; 0050eff7
        ;   XREF to: 0050f01c (CONDITIONAL_JUMP)  ; LAB_0050f01c
    MOV ECX,0x5e0fa3                    ; 0050eff9 | = "..\\core\\netgame.cpp"
    MOV EDI,0x93b                       ; 0050effe
    PUSH 0x5e0fb7                       ; 0050f003 | = "CNetGame::processServerFrame - player..."
    MOV dword ptr [0x01d046a0],ECX      ; 0050f008 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 0050f00e | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0050f014
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0050f019
    CMP EBP,0x5                         ; 0050f01c
        ;   Label: LAB_0050f01c
    JLE 0x0050f026                      ; 0050f01f
        ;   XREF to: 0050f026 (CONDITIONAL_JUMP)  ; LAB_0050f026
    MOV EBP,0x5                         ; 0050f021
    MOV EAX,dword ptr [ESI + 0x48]      ; 0050f026
        ;   Label: LAB_0050f026
    MOV dword ptr [ESP + 0x8c],EAX      ; 0050f029
    TEST EBP,EBP                        ; 0050f030
        ;   Label: LAB_0050f030
    JLE 0x0050eedd                      ; 0050f032
        ;   XREF to: 0050eedd (CONDITIONAL_JUMP)  ; LAB_0050eedd
    MOV ECX,dword ptr [ESP + 0x8c]      ; 0050f038
    MOV ESI,dword ptr [0x01d54640]      ; 0050f03f | DAT_01d54640
    XOR EDX,EDX                         ; 0050f045
    TEST ESI,ESI                        ; 0050f047
    JLE 0x0050f0ef                      ; 0050f049
        ;   XREF to: 0050f0ef (CONDITIONAL_JUMP)  ; LAB_0050f0ef
    XOR EAX,EAX                         ; 0050f04f
    IMUL ESI,ESI,0x74                   ; 0050f051
    CMP ECX,dword ptr [EAX + 0x1d54644] ; 0050f054
        ;   Label: LAB_0050f054
    JNZ 0x0050f0e3                      ; 0050f05a
        ;   XREF to: 0050f0e3 (CONDITIONAL_JUMP)  ; LAB_0050f0e3
    MOV ESI,EDX                         ; 0050f060
        ;   Label: LAB_0050f060
    TEST EDX,EDX                        ; 0050f062
    JL 0x0050f0f9                       ; 0050f064
        ;   XREF to: 0050f0f9 (CONDITIONAL_JUMP)  ; LAB_0050f0f9
    IMUL EDX,ESI,0x74                   ; 0050f06a
        ;   Label: LAB_0050f06a
    MOV ECX,0x79                        ; 0050f06d
    MOV AH,0xf                          ; 0050f072
    ADD EDX,0x1d54644                   ; 0050f074
    MOV dword ptr [ESP],ECX             ; 0050f07a
    MOV byte ptr [ESP + 0x4],AH         ; 0050f07d
    MOV EAX,dword ptr [EDX]             ; 0050f081 | DAT_01d545d0 | DAT_01d546b8
    MOV dword ptr [ESP + 0x5],EAX       ; 0050f083
    MOV EAX,dword ptr [EDX + 0x4]       ; 0050f087 | DAT_01d545d4 | DAT_01d546bc
    MOV dword ptr [ESP + 0x9],EAX       ; 0050f08a
    MOV EAX,dword ptr [EDX + 0x8]       ; 0050f08e | DAT_01d545d8 | DAT_01d546c0
    MOV dword ptr [ESP + 0xd],EAX       ; 0050f091
    MOV ESI,dword ptr [EBX + 0x1c]      ; 0050f095
    XOR EAX,EAX                         ; 0050f098
    TEST ESI,ESI                        ; 0050f09a
    JLE 0x0050f0ba                      ; 0050f09c
        ;   XREF to: 0050f0ba (CONDITIONAL_JUMP)  ; LAB_0050f0ba
    IMUL ESI,EAX,0x34                   ; 0050f09e
        ;   Label: LAB_0050f09e
    MOV ECX,0xd                         ; 0050f0a1
    LEA EDI,[ESP + ESI*0x1 + 0x11]      ; 0050f0a6
    LEA ESI,[EDX + 0xc]                 ; 0050f0aa
    MOVSD.REP ES:EDI,ESI                ; 0050f0ad
    INC EAX                             ; 0050f0af
    MOV EDI,dword ptr [EBX + 0x1c]      ; 0050f0b0
    ADD EDX,0x34                        ; 0050f0b3
    CMP EAX,EDI                         ; 0050f0b6
    JL 0x0050f09e                       ; 0050f0b8
        ;   XREF to: 0050f09e (CONDITIONAL_JUMP)  ; LAB_0050f09e
    MOV EAX,ESP                         ; 0050f0ba
        ;   Label: LAB_0050f0ba
    PUSH EAX                            ; 0050f0bc
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0050f0bd
    PUSH EAX                            ; 0050f0c4
    PUSH EBX                            ; 0050f0c5
    CALL core_netgame.cpp_CNetGame_send_FUN_0050cd90 ; 0050f0c6
        ;   XREF to: 0050cd90 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_send_FUN_0050cd90(CNetGame * this_ptr, int player_index, SNetPacketHeader * packet)
    ADD ESP,0xc                         ; 0050f0cb
    MOV EDX,dword ptr [ESP + 0x8c]      ; 0050f0ce
    INC EDX                             ; 0050f0d5
    DEC EBP                             ; 0050f0d6
    MOV dword ptr [ESP + 0x8c],EDX      ; 0050f0d7
    JMP 0x0050f030                      ; 0050f0de
        ;   XREF to: 0050f030 (UNCONDITIONAL_JUMP)  ; LAB_0050f030
    ADD EAX,0x74                        ; 0050f0e3
        ;   Label: LAB_0050f0e3
    INC EDX                             ; 0050f0e6
    CMP EAX,ESI                         ; 0050f0e7
    JL 0x0050f054                       ; 0050f0e9
        ;   XREF to: 0050f054 (CONDITIONAL_JUMP)  ; LAB_0050f054
    MOV EDX,0xffffffff                  ; 0050f0ef
        ;   Label: LAB_0050f0ef
    JMP 0x0050f060                      ; 0050f0f4
        ;   XREF to: 0050f060 (UNCONDITIONAL_JUMP)  ; LAB_0050f060
    MOV EAX,0x5e0ff8                    ; 0050f0f9 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_0050f0f9
    MOV EDX,0x94d                       ; 0050f0fe
    PUSH 0x5e100c                       ; 0050f103 | = "CNetGame::processServerFrame - client..."
    MOV [0x01d046a0],EAX                ; 0050f108 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 0050f10d | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0050f113
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0050f118
    JMP 0x0050f06a                      ; 0050f11b
        ;   XREF to: 0050f06a (UNCONDITIONAL_JUMP)  ; LAB_0050f06a

