; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_netgame_cpp_CNetGame_applyNewGameSettings_FUN_0052f200(CNetGame *this_ptr,UNetPacket *packet)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; UNetPacket *     Stack[0x8]:4   packet
; Local Variables:
; undefined4       Stack[-0x16b]:4  local_16b
; undefined        Stack[-0x167]:1  local_167
; undefined1       Stack[-0x166]:1  local_166
; undefined4       Stack[-0x117]:4  local_117
; undefined        Stack[-0x113]:1  local_113
; undefined1       Stack[-0x112]:1  local_112
; undefined4       Stack[-0xff]:4  local_ff
; undefined2       Stack[-0xfb]:2  local_fb
; undefined        Stack[-0xc0]:1  local_c0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined        Stack[-0xa4]:1  local_a4
; undefined2       Stack[-0xa0]:2  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined        Stack[-0x44]:1  local_44
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_processPacket_FUN_0052d450 at 0052dbde
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_005ebf00
;   TerminatedCString s_CNetGame_applyNewGameSet_005ebf14
;   TerminatedCString s_core_netgame_cpp_005ebf60
;   TerminatedCString s_Hell_froze_005ebf74
;   undefined4 DAT_00622584
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   core_netgame.cpp_CNetGame_addPlayer_FUN_0052e040
;   core_netgame.cpp_CNetGame_removePlayer_FUN_0052f890
;   core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_0052fd80
;   core_netgame.cpp_IpAddr_copy_FUN_00530bd0
;   crt_string.c__strcmp_FUN_005c0f80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052f200
        ;   Label: core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_0052f200
    PUSH ESI                            ; 0052f201
    PUSH EDI                            ; 0052f202
    PUSH EBP                            ; 0052f203
    SUB ESP,0x164                       ; 0052f204
    MOV ESI,dword ptr [ESP + 0x17c]     ; 0052f20a
    MOV EAX,dword ptr [ESP + 0x178]     ; 0052f211
    CMP dword ptr [EAX],0x2             ; 0052f218
    JNZ 0x0052f223                      ; 0052f21b
        ;   XREF to: 0052f223 (CONDITIONAL_JUMP)  ; LAB_0052f223
    CMP dword ptr [EAX + 0x4],0x1       ; 0052f21d
    JZ 0x0052f246                       ; 0052f221
        ;   XREF to: 0052f246 (CONDITIONAL_JUMP)  ; LAB_0052f246
    MOV EBX,0x5ebf00                    ; 0052f223 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_0052f223
    MOV EDI,0x7e6                       ; 0052f228
    PUSH 0x5ebf14                       ; 0052f22d | = "CNetGame::applyNewGameSettings - shou..."
    MOV dword ptr [0x01d1d400],EBX      ; 0052f232 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 0052f238 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0052f23e
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0052f243
    MOV ECX,0x2c                        ; 0052f246
        ;   Label: LAB_0052f246
    MOV EDI,ESP                         ; 0052f24b
    MOVSD.REP ES:EDI,ESI                ; 0052f24d
    MOVSB ES:EDI,ESI                    ; 0052f24f
    MOV EDX,dword ptr [ESP + 0x178]     ; 0052f250
    MOV EAX,dword ptr [ESP + 0x9]       ; 0052f257
    MOV EBP,0xffffffff                  ; 0052f25b
    MOV dword ptr [EDX + 0x174],EAX     ; 0052f260
    MOV dword ptr [ESP + 0x140],EBP     ; 0052f266
    MOV EAX,dword ptr [ESP + 0x5d]      ; 0052f26d
    XOR EDI,EDI                         ; 0052f271
    TEST EAX,EAX                        ; 0052f273
    JLE 0x0052f2f2                      ; 0052f275
        ;   XREF to: 0052f2f2 (CONDITIONAL_JUMP)  ; LAB_0052f2f2
    MOV EAX,dword ptr [EDX + 0x118]     ; 0052f27b
    SHL EAX,0x2                         ; 0052f281
    MOV EDX,EAX                         ; 0052f284
    SHL EAX,0x5                         ; 0052f286
    SUB EAX,EDX                         ; 0052f289
    MOV EDX,dword ptr [ESP + 0x178]     ; 0052f28b
    MOV EDX,dword ptr [EDX + 0x11c]     ; 0052f292
    MOV EBX,dword ptr [ESP + 0x178]     ; 0052f298
    SHL EDX,0x2                         ; 0052f29f
    ADD EBX,0x20                        ; 0052f2a2
    MOV ECX,EDX                         ; 0052f2a5
    SHL EDX,0x5                         ; 0052f2a7
    ADD EAX,EBX                         ; 0052f2aa
    SUB EDX,ECX                         ; 0052f2ac
    ADD EAX,0x1c                        ; 0052f2ae
    ADD EDX,EBX                         ; 0052f2b1
    LEA ECX,[ESP + 0x61]                ; 0052f2b3
    ADD EDX,0x1c                        ; 0052f2b7
    LEA ESI,[ECX + 0x14]                ; 0052f2ba
    MOV CX,word ptr [ESI + 0x4]         ; 0052f2bd
        ;   Label: LAB_0052f2bd
    CMP CX,word ptr [EDX + 0x4]         ; 0052f2c1
    JNZ 0x0052f2cf                      ; 0052f2c5
        ;   XREF to: 0052f2cf (CONDITIONAL_JUMP)  ; LAB_0052f2cf
    MOV EBX,dword ptr [EDX]             ; 0052f2c7
    CMP EBX,dword ptr [ESI]             ; 0052f2c9
    JNZ 0x0052f2cf                      ; 0052f2cb
        ;   XREF to: 0052f2cf (CONDITIONAL_JUMP)  ; LAB_0052f2cf
    MOV EBP,EDI                         ; 0052f2cd
    MOV CX,word ptr [ESI + 0x4]         ; 0052f2cf
        ;   Label: LAB_0052f2cf
    CMP CX,word ptr [EAX + 0x4]         ; 0052f2d3
    JNZ 0x0052f2e6                      ; 0052f2d7
        ;   XREF to: 0052f2e6 (CONDITIONAL_JUMP)  ; LAB_0052f2e6
    MOV EBX,dword ptr [EAX]             ; 0052f2d9
    CMP EBX,dword ptr [ESI]             ; 0052f2db
    JNZ 0x0052f2e6                      ; 0052f2dd
        ;   XREF to: 0052f2e6 (CONDITIONAL_JUMP)  ; LAB_0052f2e6
    MOV dword ptr [ESP + 0x140],EDI     ; 0052f2df
    MOV ECX,dword ptr [ESP + 0x5d]      ; 0052f2e6
        ;   Label: LAB_0052f2e6
    INC EDI                             ; 0052f2ea
    ADD ESI,0x28                        ; 0052f2eb
    CMP EDI,ECX                         ; 0052f2ee
    JL 0x0052f2bd                       ; 0052f2f0
        ;   XREF to: 0052f2bd (CONDITIONAL_JUMP)  ; LAB_0052f2bd
    CMP dword ptr [ESP + 0x140],0x0     ; 0052f2f2
        ;   Label: LAB_0052f2f2
    JL 0x0052f6cd                       ; 0052f2fa
        ;   XREF to: 0052f6cd (CONDITIONAL_JUMP)  ; LAB_0052f6cd
    TEST EBP,EBP                        ; 0052f300
    JL 0x0052f6cd                       ; 0052f302
        ;   XREF to: 0052f6cd (CONDITIONAL_JUMP)  ; LAB_0052f6cd
    MOV EDI,dword ptr [ESP + 0x178]     ; 0052f308
    LEA ESI,[ESP + 0xd]                 ; 0052f30f
    ADD EDI,0x120                       ; 0052f313
    PUSH EDI                            ; 0052f319
    MOV AL,byte ptr [ESI]               ; 0052f31a
        ;   Label: LAB_0052f31a
    MOV byte ptr [EDI],AL               ; 0052f31c
    CMP AL,0x0                          ; 0052f31e
    JZ 0x0052f332                       ; 0052f320
        ;   XREF to: 0052f332 (CONDITIONAL_JUMP)  ; LAB_0052f332
    MOV AL,byte ptr [ESI + 0x1]         ; 0052f322
    ADD ESI,0x2                         ; 0052f325
    MOV byte ptr [EDI + 0x1],AL         ; 0052f328
    ADD EDI,0x2                         ; 0052f32b
    CMP AL,0x0                          ; 0052f32e
    JNZ 0x0052f31a                      ; 0052f330
        ;   XREF to: 0052f31a (CONDITIONAL_JUMP)  ; LAB_0052f31a
    POP EDI                             ; 0052f332
        ;   Label: LAB_0052f332
    MOV EAX,dword ptr [ESP + 0x178]     ; 0052f333
    XOR ESI,ESI                         ; 0052f33a
    MOV EDI,dword ptr [EAX + 0x1c]      ; 0052f33c
    MOV dword ptr [ESP + 0x154],ESI     ; 0052f33f
    TEST EDI,EDI                        ; 0052f346
    JLE 0x0052f41d                      ; 0052f348
        ;   XREF to: 0052f41d (CONDITIONAL_JUMP)  ; LAB_0052f41d
    LEA EDX,[EAX + 0x20]                ; 0052f34e
    ADD EAX,0x3c                        ; 0052f351
    MOV dword ptr [ESP + 0x148],ESI     ; 0052f354
    MOV dword ptr [ESP + 0x14c],EAX     ; 0052f35b
    MOV EAX,dword ptr [ESP + 0x178]     ; 0052f362
    MOV dword ptr [ESP + 0x150],EDX     ; 0052f369
    MOV dword ptr [ESP + 0x144],EAX     ; 0052f370
    MOV EAX,dword ptr [ESP + 0x5d]      ; 0052f377
        ;   Label: LAB_0052f377
    XOR EBX,EBX                         ; 0052f37b
    TEST EAX,EAX                        ; 0052f37d
    JLE 0x0052f3ac                      ; 0052f37f
        ;   XREF to: 0052f3ac (CONDITIONAL_JUMP)  ; LAB_0052f3ac
    LEA EAX,[ESP + 0x61]                ; 0052f381
    MOV ECX,dword ptr [ESP + 0x5d]      ; 0052f385
    MOV EBP,dword ptr [ESP + 0x14c]     ; 0052f389
    ADD EAX,0x14                        ; 0052f390
    MOV SI,word ptr [EAX + 0x4]         ; 0052f393
        ;   Label: LAB_0052f393
    CMP SI,word ptr [EBP + 0x4]         ; 0052f397
    JNZ 0x0052f6da                      ; 0052f39b
        ;   XREF to: 0052f6da (CONDITIONAL_JUMP)  ; LAB_0052f6da
    MOV ESI,dword ptr [EBP]             ; 0052f3a1
    CMP ESI,dword ptr [EAX]             ; 0052f3a4
    JNZ 0x0052f6da                      ; 0052f3a6
        ;   XREF to: 0052f6da (CONDITIONAL_JUMP)  ; LAB_0052f6da
    CMP EBX,dword ptr [ESP + 0x5d]      ; 0052f3ac
        ;   Label: LAB_0052f3ac
    JNZ 0x0052f6eb                      ; 0052f3b0
        ;   XREF to: 0052f6eb (CONDITIONAL_JUMP)  ; LAB_0052f6eb
    MOV EDX,dword ptr [ESP + 0x178]     ; 0052f3b6
    MOV EAX,dword ptr [ESP + 0x154]     ; 0052f3bd
    CMP EAX,dword ptr [EDX + 0x11c]     ; 0052f3c4
    JNZ 0x0052f3ee                      ; 0052f3ca
        ;   XREF to: 0052f3ee (CONDITIONAL_JUMP)  ; LAB_0052f3ee
    MOV EAX,0x5ebf60                    ; 0052f3cc | = "..\\core\\netgame.cpp"
    MOV EDX,0x811                       ; 0052f3d1
    PUSH 0x5ebf74                       ; 0052f3d6 | = "Hell froze"
    MOV [0x01d1d400],EAX                ; 0052f3db | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 0052f3e0 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0052f3e6
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0052f3eb
    MOV ECX,dword ptr [ESP + 0x154]     ; 0052f3ee
        ;   Label: LAB_0052f3ee
    PUSH ECX                            ; 0052f3f5
    MOV EBX,dword ptr [ESP + 0x17c]     ; 0052f3f6
    PUSH EBX                            ; 0052f3fd
    CALL core_netgame.cpp_CNetGame_removePlayer_FUN_0052f890 ; 0052f3fe
        ;   XREF to: 0052f890 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_removePlayer_FUN_0052f890(CNetGame * this_ptr, int player_index)
    ADD ESP,0x8                         ; 0052f403
    MOV EDX,dword ptr [ESP + 0x178]     ; 0052f406
        ;   Label: LAB_0052f406
    MOV EAX,dword ptr [ESP + 0x154]     ; 0052f40d
    CMP EAX,dword ptr [EDX + 0x1c]      ; 0052f414
    JL 0x0052f377                       ; 0052f417
        ;   XREF to: 0052f377 (CONDITIONAL_JUMP)  ; LAB_0052f377
    MOV EDI,dword ptr [ESP + 0x5d]      ; 0052f41d
        ;   Label: LAB_0052f41d
    XOR ESI,ESI                         ; 0052f421
    TEST EDI,EDI                        ; 0052f423
    JLE 0x0052f43b                      ; 0052f425
        ;   XREF to: 0052f43b (CONDITIONAL_JUMP)  ; LAB_0052f43b
    MOV EDI,dword ptr [ESP + 0x178]     ; 0052f427
    XOR EBX,EBX                         ; 0052f42e
    CMP byte ptr [ESP + EBX*0x1 + 0x61],0x0 ; 0052f430
        ;   Label: LAB_0052f430
    JNZ 0x0052f83b                      ; 0052f435
        ;   XREF to: 0052f83b (CONDITIONAL_JUMP)  ; LAB_0052f83b
    MOV EAX,dword ptr [ESP + 0x178]     ; 0052f43b
        ;   Label: LAB_0052f43b
    MOV EAX,dword ptr [EAX + 0x118]     ; 0052f442
    MOV EDX,dword ptr [ESP + 0x178]     ; 0052f448
    MOV EAX,dword ptr [ESP + EAX*0x4 + 0x130] ; 0052f44f
    MOV dword ptr [EDX + 0x118],EAX     ; 0052f456
    MOV EAX,dword ptr [EDX + 0x11c]     ; 0052f45c
    MOV EAX,dword ptr [ESP + EAX*0x4 + 0x130] ; 0052f462
    MOV dword ptr [EDX + 0x11c],EAX     ; 0052f469
    MOV EAX,dword ptr [EDX + 0x1c]      ; 0052f46f
    DEC EAX                             ; 0052f472
    MOV dword ptr [ESP + 0x15c],EAX     ; 0052f473
    TEST EAX,EAX                        ; 0052f47a
    JL 0x0052f6bd                       ; 0052f47c
        ;   XREF to: 0052f6bd (CONDITIONAL_JUMP)  ; LAB_0052f6bd
    LEA EAX,[EDX + 0x20]                ; 0052f482
    MOV dword ptr [ESP + 0x158],EAX     ; 0052f485
    XOR EBP,EBP                         ; 0052f48c
        ;   Label: LAB_0052f48c
    MOV EAX,dword ptr [ESP + 0x15c]     ; 0052f48e
    MOV dword ptr [ESP + 0x138],EBP     ; 0052f495
    TEST EAX,EAX                        ; 0052f49c
    JLE 0x0052f6a6                      ; 0052f49e
        ;   XREF to: 0052f6a6 (CONDITIONAL_JUMP)  ; LAB_0052f6a6
    MOV EAX,dword ptr [ESP + 0x158]     ; 0052f4a4
    MOV EBX,dword ptr [ESP + 0x158]     ; 0052f4ab
    MOV dword ptr [ESP + 0x13c],EBP     ; 0052f4b2
    ADD EAX,0x1c                        ; 0052f4b9
    ADD EBX,0x7c                        ; 0052f4bc
    MOV dword ptr [ESP + 0x160],EAX     ; 0052f4bf
    MOV EDX,dword ptr [ESP + 0x13c]     ; 0052f4c6
        ;   Label: LAB_0052f4c6
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0052f4cd
    MOV ECX,dword ptr [ESP + EDX*0x1 + 0x134] ; 0052f4d4
    CMP ECX,dword ptr [ESP + EAX*0x1 + 0x130] ; 0052f4db
    JGE 0x0052f663                      ; 0052f4e2
        ;   XREF to: 0052f663 (CONDITIONAL_JUMP)  ; LAB_0052f663
    LEA EAX,[ESP + 0x130]               ; 0052f4e8
    LEA EBP,[ESP + 0x130]               ; 0052f4ef
    ADD EDX,0x4                         ; 0052f4f6
    MOV ESI,dword ptr [ESP + 0x13c]     ; 0052f4f9
    ADD EAX,EDX                         ; 0052f500
    ADD EBP,ESI                         ; 0052f502
    MOV EDI,dword ptr [ESP + 0x138]     ; 0052f504
    MOV ECX,dword ptr [EAX]             ; 0052f50b
    MOV EDX,dword ptr [EBP]             ; 0052f50d
    MOV dword ptr [EBP],ECX             ; 0052f510
    IMUL EBP,EDI,0x7c                   ; 0052f513
    MOV dword ptr [EAX],EDX             ; 0052f516
    ADD EBP,dword ptr [ESP + 0x158]     ; 0052f518
    LEA EDI,[ESP + 0xb4]                ; 0052f51f
    MOV ESI,EBP                         ; 0052f526
    MOVSD ES:EDI,ESI                    ; 0052f528
    MOVSD ES:EDI,ESI                    ; 0052f529
    MOVSD ES:EDI,ESI                    ; 0052f52a
    MOVSD ES:EDI,ESI                    ; 0052f52b
    MOVSD ES:EDI,ESI                    ; 0052f52c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052f52d
    MOV dword ptr [ESP + 0xc8],EAX      ; 0052f530
    MOV EDX,dword ptr [ESP + 0x160]     ; 0052f537
    MOV EAX,dword ptr [EBP + 0x18]      ; 0052f53e
    PUSH EDX                            ; 0052f541
    MOV dword ptr [ESP + 0xd0],EAX      ; 0052f542
    LEA EAX,[ESP + 0xd4]                ; 0052f549
    PUSH EAX                            ; 0052f550
    CALL core_netgame.cpp_IpAddr_copy_FUN_00530bd0 ; 0052f551
        ;   XREF to: 00530bd0 (UNCONDITIONAL_CALL)  ; SIpAddr * core_netgame.cpp_IpAddr_copy_FUN_00530bd0(SIpAddr * this_ptr, SIpAddr * other)
    ADD ESP,0x8                         ; 0052f556
    MOV EAX,dword ptr [ESP + 0x160]     ; 0052f559
    MOV AX,word ptr [EAX + 0x4]         ; 0052f560
    MOV word ptr [ESP + 0xd4],AX        ; 0052f564
    MOV EAX,dword ptr [EBP + 0x24]      ; 0052f56c
    MOV dword ptr [ESP + 0xd8],EAX      ; 0052f56f
    MOV EAX,dword ptr [EBP + 0x28]      ; 0052f576
    MOV dword ptr [ESP + 0xdc],EAX      ; 0052f579
    MOV EAX,dword ptr [EBP + 0x2c]      ; 0052f580
    MOV dword ptr [ESP + 0xe0],EAX      ; 0052f583
    MOV EAX,dword ptr [EBP + 0x30]      ; 0052f58a
    MOV dword ptr [ESP + 0xe4],EAX      ; 0052f58d
    MOV EAX,dword ptr [EBP + 0x34]      ; 0052f594
    MOV dword ptr [ESP + 0xe8],EAX      ; 0052f597
    MOV EAX,dword ptr [EBP + 0x38]      ; 0052f59e
    MOV dword ptr [ESP + 0xec],EAX      ; 0052f5a1
    MOV EAX,dword ptr [EBP + 0x3c]      ; 0052f5a8
    MOV dword ptr [ESP + 0xf0],EAX      ; 0052f5ab
    MOV EAX,dword ptr [EBP + 0x40]      ; 0052f5b2
    MOV dword ptr [ESP + 0xf4],EAX      ; 0052f5b5
    MOV EAX,dword ptr [EBP + 0x44]      ; 0052f5bc
    MOV dword ptr [ESP + 0xf8],EAX      ; 0052f5bf
    MOV EAX,dword ptr [EBP + 0x48]      ; 0052f5c6
    MOV dword ptr [ESP + 0xfc],EAX      ; 0052f5c9
    MOV EAX,dword ptr [EBX + -0x30]     ; 0052f5d0
    MOV dword ptr [ESP + 0x100],EAX     ; 0052f5d3
    MOV EAX,dword ptr [EBX + -0x2c]     ; 0052f5da
    MOV dword ptr [ESP + 0x104],EAX     ; 0052f5dd
    MOV EAX,dword ptr [EBX + -0x28]     ; 0052f5e4
    MOV dword ptr [ESP + 0x108],EAX     ; 0052f5e7
    MOV EAX,dword ptr [EBX + -0x24]     ; 0052f5ee
    MOV dword ptr [ESP + 0x10c],EAX     ; 0052f5f1
    MOV EAX,dword ptr [EBX + -0x20]     ; 0052f5f8
    MOV dword ptr [ESP + 0x110],EAX     ; 0052f5fb
    MOV EAX,dword ptr [EBX + -0x1c]     ; 0052f602
    MOV dword ptr [ESP + 0x114],EAX     ; 0052f605
    MOV EAX,dword ptr [EBX + -0x18]     ; 0052f60c
    MOV dword ptr [ESP + 0x118],EAX     ; 0052f60f
    MOV EAX,dword ptr [EBX + -0x14]     ; 0052f616
    MOV dword ptr [ESP + 0x11c],EAX     ; 0052f619
    MOV EAX,dword ptr [EBX + -0x10]     ; 0052f620
    MOV dword ptr [ESP + 0x120],EAX     ; 0052f623
    MOV EAX,dword ptr [EBX + -0xc]      ; 0052f62a
    MOV dword ptr [ESP + 0x124],EAX     ; 0052f62d
    MOV EAX,dword ptr [EBX + -0x8]      ; 0052f634
    MOV EDI,EBP                         ; 0052f637
    MOV dword ptr [ESP + 0x128],EAX     ; 0052f639
    MOV ESI,EBX                         ; 0052f640
    MOV EAX,dword ptr [EBX + -0x4]      ; 0052f642
    MOV ECX,0x1f                        ; 0052f645
    MOV dword ptr [ESP + 0x12c],EAX     ; 0052f64a
    MOVSD.REP ES:EDI,ESI                ; 0052f651
    MOV ECX,0x1f                        ; 0052f653
    LEA ESI,[ESP + 0xb4]                ; 0052f658
    MOV EDI,EBX                         ; 0052f65f
    MOVSD.REP ES:EDI,ESI                ; 0052f661
    MOV EDX,dword ptr [ESP + 0x13c]     ; 0052f663
        ;   Label: LAB_0052f663
    MOV ECX,dword ptr [ESP + 0x160]     ; 0052f66a
    MOV ESI,dword ptr [ESP + 0x138]     ; 0052f671
    MOV EDI,dword ptr [ESP + 0x15c]     ; 0052f678
    ADD EBX,0x7c                        ; 0052f67f
    ADD EDX,0x4                         ; 0052f682
    ADD ECX,0x7c                        ; 0052f685
    INC ESI                             ; 0052f688
    MOV dword ptr [ESP + 0x13c],EDX     ; 0052f689
    MOV dword ptr [ESP + 0x160],ECX     ; 0052f690
    MOV dword ptr [ESP + 0x138],ESI     ; 0052f697
    CMP ESI,EDI                         ; 0052f69e
    JL 0x0052f4c6                       ; 0052f6a0
        ;   XREF to: 0052f4c6 (CONDITIONAL_JUMP)  ; LAB_0052f4c6
    MOV ESI,dword ptr [ESP + 0x15c]     ; 0052f6a6
        ;   Label: LAB_0052f6a6
    DEC ESI                             ; 0052f6ad
    MOV dword ptr [ESP + 0x15c],ESI     ; 0052f6ae
    TEST ESI,ESI                        ; 0052f6b5
    JGE 0x0052f48c                      ; 0052f6b7
        ;   XREF to: 0052f48c (CONDITIONAL_JUMP)  ; LAB_0052f48c
    MOV EAX,0x1                         ; 0052f6bd
        ;   Label: LAB_0052f6bd
    ADD ESP,0x164                       ; 0052f6c2
    POP EBP                             ; 0052f6c8
    POP EDI                             ; 0052f6c9
    POP ESI                             ; 0052f6ca
    POP EBX                             ; 0052f6cb
    RET                                 ; 0052f6cc
    XOR EAX,EAX                         ; 0052f6cd
        ;   Label: LAB_0052f6cd
    ADD ESP,0x164                       ; 0052f6cf
    POP EBP                             ; 0052f6d5
    POP EDI                             ; 0052f6d6
    POP ESI                             ; 0052f6d7
    POP EBX                             ; 0052f6d8
    RET                                 ; 0052f6d9
    INC EBX                             ; 0052f6da
        ;   Label: LAB_0052f6da
    ADD EAX,0x28                        ; 0052f6db
    CMP EBX,ECX                         ; 0052f6de
    JL 0x0052f393                       ; 0052f6e0
        ;   XREF to: 0052f393 (CONDITIONAL_JUMP)  ; LAB_0052f393
    JMP 0x0052f3ac                      ; 0052f6e6
        ;   XREF to: 0052f3ac (UNCONDITIONAL_JUMP)  ; LAB_0052f3ac
    MOV EAX,dword ptr [ESP + 0x148]     ; 0052f6eb
        ;   Label: LAB_0052f6eb
    MOV dword ptr [ESP + EAX*0x1 + 0x130],EBX ; 0052f6f2
    IMUL EDX,EBX,0x28                   ; 0052f6f9
    MOV EAX,dword ptr [ESP + 0x154]     ; 0052f6fc
    SHL EAX,0x2                         ; 0052f703
    LEA ESI,[ESP + 0x61]                ; 0052f706
    MOV ECX,EAX                         ; 0052f70a
    MOV EDI,dword ptr [ESP + 0x178]     ; 0052f70c
    SHL ECX,0x5                         ; 0052f713
    MOV EBP,dword ptr [EDI + 0x11c]     ; 0052f716
    SUB ECX,EAX                         ; 0052f71c
    MOV EAX,dword ptr [ESP + 0x154]     ; 0052f71e
    ADD ESI,EDX                         ; 0052f725
    CMP EAX,EBP                         ; 0052f727
    JNZ 0x0052f7f1                      ; 0052f729
        ;   XREF to: 0052f7f1 (CONDITIONAL_JUMP)  ; LAB_0052f7f1
    PUSH ESI                            ; 0052f72f
    MOV EDX,dword ptr [ESP + 0x154]     ; 0052f730
    XOR EAX,EBP                         ; 0052f737
    PUSH EDX                            ; 0052f739
    MOV [0x00622584],EAX                ; 0052f73a | DAT_00622584
    CALL crt_string.c__strcmp_FUN_005c0f80 ; 0052f73f
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005c0f80(char * str1, char * str2)
    ADD ESP,0x8                         ; 0052f744
    TEST EAX,EAX                        ; 0052f747
    JZ 0x0052f755                       ; 0052f749
        ;   XREF to: 0052f755 (CONDITIONAL_JUMP)  ; LAB_0052f755
    MOV dword ptr [0x00622584],0x1      ; 0052f74b | DAT_00622584
    IMUL EDX,EBX,0x28                   ; 0052f755
        ;   Label: LAB_0052f755
    MOV EAX,dword ptr [ESP + 0x144]     ; 0052f758
    MOV EAX,dword ptr [EAX + 0x64]      ; 0052f75f
    CMP EAX,dword ptr [ESP + EDX*0x1 + 0x85] ; 0052f762
    JZ 0x0052f7e6                       ; 0052f769
        ;   XREF to: 0052f7e6 (CONDITIONAL_JUMP)  ; LAB_0052f7e6
    MOV dword ptr [0x00622584],0x1      ; 0052f76b | DAT_00622584
    MOV EAX,dword ptr [ESP + 0x178]     ; 0052f775
        ;   Label: LAB_0052f775
    PUSH EAX                            ; 0052f77c
    CALL core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_0052fd80 ; 0052f77d
        ;   XREF to: 0052fd80 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_0052fd80(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 0052f782
    IMUL EBX,EBX,0x28                   ; 0052f785
        ;   Label: LAB_0052f785
    MOV ECX,dword ptr [ESP + 0x150]     ; 0052f788
    MOV ESI,dword ptr [ESP + 0x144]     ; 0052f78f
    MOV EDI,dword ptr [ESP + 0x154]     ; 0052f796
    XOR DL,DL                           ; 0052f79d
    ADD ECX,0x7c                        ; 0052f79f
    ADD ESI,0x7c                        ; 0052f7a2
    INC EDI                             ; 0052f7a5
    MOV dword ptr [ESP + 0x150],ECX     ; 0052f7a6
    MOV dword ptr [ESP + 0x144],ESI     ; 0052f7ad
    MOV dword ptr [ESP + 0x154],EDI     ; 0052f7b4
    MOV byte ptr [ESP + EBX*0x1 + 0x61],DL ; 0052f7bb
    MOV EDX,dword ptr [ESP + 0x14c]     ; 0052f7bf
    MOV EBX,dword ptr [ESP + 0x148]     ; 0052f7c6
    ADD EDX,0x7c                        ; 0052f7cd
    ADD EBX,0x4                         ; 0052f7d0
    MOV dword ptr [ESP + 0x14c],EDX     ; 0052f7d3
    MOV dword ptr [ESP + 0x148],EBX     ; 0052f7da
    JMP 0x0052f406                      ; 0052f7e1
        ;   XREF to: 0052f406 (UNCONDITIONAL_JUMP)  ; LAB_0052f406
    CMP dword ptr [0x00622584],0x0      ; 0052f7e6 | DAT_00622584
        ;   Label: LAB_0052f7e6
    JNZ 0x0052f775                      ; 0052f7ed
        ;   XREF to: 0052f775 (CONDITIONAL_JUMP)  ; LAB_0052f775
    JMP 0x0052f785                      ; 0052f7ef
        ;   XREF to: 0052f785 (UNCONDITIONAL_JUMP)  ; LAB_0052f785
    MOV EDI,dword ptr [ESP + 0x150]     ; 0052f7f1
        ;   Label: LAB_0052f7f1
    PUSH EDI                            ; 0052f7f8
    MOV AL,byte ptr [ESI]               ; 0052f7f9
        ;   Label: LAB_0052f7f9
    MOV byte ptr [EDI],AL               ; 0052f7fb
    CMP AL,0x0                          ; 0052f7fd
    JZ 0x0052f811                       ; 0052f7ff
        ;   XREF to: 0052f811 (CONDITIONAL_JUMP)  ; LAB_0052f811
    MOV AL,byte ptr [ESI + 0x1]         ; 0052f801
    ADD ESI,0x2                         ; 0052f804
    MOV byte ptr [EDI + 0x1],AL         ; 0052f807
    ADD EDI,0x2                         ; 0052f80a
    CMP AL,0x0                          ; 0052f80d
    JNZ 0x0052f7f9                      ; 0052f80f
        ;   XREF to: 0052f7f9 (CONDITIONAL_JUMP)  ; LAB_0052f7f9
    POP EDI                             ; 0052f811
        ;   Label: LAB_0052f811
    MOV EAX,dword ptr [ESP + 0x178]     ; 0052f812
    ADD EAX,ECX                         ; 0052f819
    MOV ECX,dword ptr [ESP + EDX*0x1 + 0x85] ; 0052f81b
    MOV dword ptr [EAX + 0x64],ECX      ; 0052f822
    MOV ECX,dword ptr [ESP + EDX*0x1 + 0x7d] ; 0052f825
    MOV dword ptr [EAX + 0x34],ECX      ; 0052f829
    MOV EDX,dword ptr [ESP + EDX*0x1 + 0x81] ; 0052f82c
    MOV dword ptr [EAX + 0x38],EDX      ; 0052f833
    JMP 0x0052f785                      ; 0052f836
        ;   XREF to: 0052f785 (UNCONDITIONAL_JUMP)  ; LAB_0052f785
    MOV EDX,dword ptr [ESP + EBX*0x1 + 0x81] ; 0052f83b
        ;   Label: LAB_0052f83b
    PUSH EDX                            ; 0052f842
    MOV ECX,dword ptr [ESP + EBX*0x1 + 0x81] ; 0052f843
    LEA EAX,[ESP + 0x65]                ; 0052f84a
    PUSH ECX                            ; 0052f84e
    ADD EAX,EBX                         ; 0052f84f
    PUSH EAX                            ; 0052f851
    ADD EAX,0x14                        ; 0052f852
    PUSH EAX                            ; 0052f855
    PUSH EDI                            ; 0052f856
    CALL core_netgame.cpp_CNetGame_addPlayer_FUN_0052e040 ; 0052f857
        ;   XREF to: 0052e040 (UNCONDITIONAL_CALL)  ; int core_netgame.cpp_CNetGame_addPlayer_FUN_0052e040(CNetGame * this_ptr, SNetworkAddr * addr, char * name, int hero_number, ...)
    IMUL ECX,EAX,0x7c                   ; 0052f85c
    ADD ESP,0x14                        ; 0052f85f
    ADD ECX,EDI                         ; 0052f862
    MOV EDX,dword ptr [ESP + EBX*0x1 + 0x85] ; 0052f864
    MOV dword ptr [ECX + 0x64],EDX      ; 0052f86b
    MOV dword ptr [ESP + EAX*0x4 + 0x130],ESI ; 0052f86e
    MOV EAX,dword ptr [ESP + 0x5d]      ; 0052f875
    INC ESI                             ; 0052f879
    ADD EBX,0x28                        ; 0052f87a
    CMP ESI,EAX                         ; 0052f87d
    JL 0x0052f430                       ; 0052f87f
        ;   XREF to: 0052f430 (CONDITIONAL_JUMP)  ; LAB_0052f430
    JMP 0x0052f43b                      ; 0052f885
        ;   XREF to: 0052f43b (UNCONDITIONAL_JUMP)  ; LAB_0052f43b

