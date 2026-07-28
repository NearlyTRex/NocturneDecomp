; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_netgame_cpp_CNetGame_applyNewGameSettings_FUN_004ec600(CNetGame *this_ptr,UNetPacket *packet)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; UNetPacket *     Stack[0x8]:4   packet
; Local Variables:
; undefined4       Stack[-0x167]:4  local_167
; undefined        Stack[-0x163]:1  local_163
; undefined1       Stack[-0x162]:1  local_162
; undefined4       Stack[-0x113]:4  local_113
; undefined        Stack[-0x10f]:1  local_10f
; undefined1       Stack[-0x10e]:1  local_10e
; undefined4       Stack[-0xfb]:4  local_fb
; undefined2       Stack[-0xf7]:2  local_f7
; undefined        Stack[-0xbc]:1  local_bc
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined        Stack[-0xa0]:1  local_a0
; undefined2       Stack[-0x9c]:2  local_9c
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
;   core_netgame.cpp_CNetGame_processPacket_FUN_004ea830 at 004eafe6
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_0058c32a
;   TerminatedCString s_CNetGame_applyNewGameSet_0058c33e
;   TerminatedCString s_core_netgame_cpp_0058c38a
;   TerminatedCString s_Hell_froze_0058c39e
;   undefined4 DAT_005bdee4
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   core_netgame.cpp_assignInt1_FUN_004edfa0
;   core_netgame.cpp_CNetGame_addPlayer_FUN_004eb440
;   core_netgame.cpp_CNetGame_removePlayer_FUN_004ecc80
;   core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_004ed170
;   crt_string.c__strcmp_FUN_005649c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ec600
        ;   Label: core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_004ec600
    PUSH ESI                            ; 004ec601
    PUSH EDI                            ; 004ec602
    PUSH EBP                            ; 004ec603
    SUB ESP,0x160                       ; 004ec604
    MOV ESI,dword ptr [ESP + 0x178]     ; 004ec60a
    MOV EAX,dword ptr [ESP + 0x174]     ; 004ec611
    CMP dword ptr [EAX],0x2             ; 004ec618
    JNZ 0x004ec623                      ; 004ec61b
        ;   XREF to: 004ec623 (CONDITIONAL_JUMP)  ; LAB_004ec623
    CMP dword ptr [EAX + 0x4],0x1       ; 004ec61d
    JZ 0x004ec646                       ; 004ec621
        ;   XREF to: 004ec646 (CONDITIONAL_JUMP)  ; LAB_004ec646
    MOV EBX,0x58c32a                    ; 004ec623 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_004ec623
    MOV EDI,0x7e6                       ; 004ec628
    PUSH 0x58c33e                       ; 004ec62d | = "CNetGame::applyNewGameSettings - shou..."
    MOV dword ptr [0x01cc4800],EBX      ; 004ec632 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 004ec638 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004ec63e
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004ec643
    MOV ECX,0x2c                        ; 004ec646
        ;   Label: LAB_004ec646
    MOV EDI,ESP                         ; 004ec64b
    MOVSD.REP ES:EDI,ESI                ; 004ec64d
    MOVSB ES:EDI,ESI                    ; 004ec64f
    MOV EDX,dword ptr [ESP + 0x174]     ; 004ec650
    MOV EAX,dword ptr [ESP + 0x9]       ; 004ec657
    MOV EBP,0xffffffff                  ; 004ec65b
    MOV dword ptr [EDX + 0x16c],EAX     ; 004ec660
    MOV dword ptr [ESP + 0x13c],EBP     ; 004ec666
    MOV EAX,dword ptr [ESP + 0x5d]      ; 004ec66d
    XOR EDI,EDI                         ; 004ec671
    TEST EAX,EAX                        ; 004ec673
    JLE 0x004ec6f2                      ; 004ec675
        ;   XREF to: 004ec6f2 (CONDITIONAL_JUMP)  ; LAB_004ec6f2
    MOV EAX,dword ptr [EDX + 0x110]     ; 004ec67b
    SHL EAX,0x3                         ; 004ec681
    MOV EBX,dword ptr [ESP + 0x174]     ; 004ec684
    MOV EDX,EAX                         ; 004ec68b
    SHL EAX,0x4                         ; 004ec68d
    ADD EBX,0x20                        ; 004ec690
    SUB EAX,EDX                         ; 004ec693
    ADD EAX,EBX                         ; 004ec695
    LEA EDX,[EAX + 0x1c]                ; 004ec697
    MOV EAX,dword ptr [ESP + 0x174]     ; 004ec69a
    MOV EAX,dword ptr [EAX + 0x114]     ; 004ec6a1
    SHL EAX,0x3                         ; 004ec6a7
    MOV ECX,EAX                         ; 004ec6aa
    SHL EAX,0x4                         ; 004ec6ac
    SUB EAX,ECX                         ; 004ec6af
    ADD EAX,EBX                         ; 004ec6b1
    LEA ECX,[ESP + 0x61]                ; 004ec6b3
    ADD EAX,0x1c                        ; 004ec6b7
    LEA ESI,[ECX + 0x14]                ; 004ec6ba
    MOV CX,word ptr [ESI + 0x4]         ; 004ec6bd
        ;   Label: LAB_004ec6bd
    CMP CX,word ptr [EAX + 0x4]         ; 004ec6c1
    JNZ 0x004ec6cf                      ; 004ec6c5
        ;   XREF to: 004ec6cf (CONDITIONAL_JUMP)  ; LAB_004ec6cf
    MOV EBX,dword ptr [ESI]             ; 004ec6c7
    CMP EBX,dword ptr [EAX]             ; 004ec6c9
    JNZ 0x004ec6cf                      ; 004ec6cb
        ;   XREF to: 004ec6cf (CONDITIONAL_JUMP)  ; LAB_004ec6cf
    MOV EBP,EDI                         ; 004ec6cd
    MOV CX,word ptr [ESI + 0x4]         ; 004ec6cf
        ;   Label: LAB_004ec6cf
    CMP CX,word ptr [EDX + 0x4]         ; 004ec6d3
    JNZ 0x004ec6e6                      ; 004ec6d7
        ;   XREF to: 004ec6e6 (CONDITIONAL_JUMP)  ; LAB_004ec6e6
    MOV EBX,dword ptr [ESI]             ; 004ec6d9
    CMP EBX,dword ptr [EDX]             ; 004ec6db
    JNZ 0x004ec6e6                      ; 004ec6dd
        ;   XREF to: 004ec6e6 (CONDITIONAL_JUMP)  ; LAB_004ec6e6
    MOV dword ptr [ESP + 0x13c],EDI     ; 004ec6df
    MOV ECX,dword ptr [ESP + 0x5d]      ; 004ec6e6
        ;   Label: LAB_004ec6e6
    INC EDI                             ; 004ec6ea
    ADD ESI,0x28                        ; 004ec6eb
    CMP EDI,ECX                         ; 004ec6ee
    JL 0x004ec6bd                       ; 004ec6f0
        ;   XREF to: 004ec6bd (CONDITIONAL_JUMP)  ; LAB_004ec6bd
    CMP dword ptr [ESP + 0x13c],0x0     ; 004ec6f2
        ;   Label: LAB_004ec6f2
    JL 0x004ecaca                       ; 004ec6fa
        ;   XREF to: 004ecaca (CONDITIONAL_JUMP)  ; LAB_004ecaca
    TEST EBP,EBP                        ; 004ec700
    JL 0x004ecaca                       ; 004ec702
        ;   XREF to: 004ecaca (CONDITIONAL_JUMP)  ; LAB_004ecaca
    MOV EDI,dword ptr [ESP + 0x174]     ; 004ec708
    LEA ESI,[ESP + 0xd]                 ; 004ec70f
    ADD EDI,0x118                       ; 004ec713
    PUSH EDI                            ; 004ec719
    MOV AL,byte ptr [ESI]               ; 004ec71a
        ;   Label: LAB_004ec71a
    MOV byte ptr [EDI],AL               ; 004ec71c
    CMP AL,0x0                          ; 004ec71e
    JZ 0x004ec732                       ; 004ec720
        ;   XREF to: 004ec732 (CONDITIONAL_JUMP)  ; LAB_004ec732
    MOV AL,byte ptr [ESI + 0x1]         ; 004ec722
    ADD ESI,0x2                         ; 004ec725
    MOV byte ptr [EDI + 0x1],AL         ; 004ec728
    ADD EDI,0x2                         ; 004ec72b
    CMP AL,0x0                          ; 004ec72e
    JNZ 0x004ec71a                      ; 004ec730
        ;   XREF to: 004ec71a (CONDITIONAL_JUMP)  ; LAB_004ec71a
    POP EDI                             ; 004ec732
        ;   Label: LAB_004ec732
    MOV EAX,dword ptr [ESP + 0x174]     ; 004ec733
    XOR ESI,ESI                         ; 004ec73a
    MOV EDI,dword ptr [EAX + 0x1c]      ; 004ec73c
    MOV dword ptr [ESP + 0x14c],ESI     ; 004ec73f
    TEST EDI,EDI                        ; 004ec746
    JLE 0x004ec824                      ; 004ec748
        ;   XREF to: 004ec824 (CONDITIONAL_JUMP)  ; LAB_004ec824
    MOV EDX,dword ptr [ESP + 0x174]     ; 004ec74e
    ADD EAX,0x20                        ; 004ec755
    MOV dword ptr [ESP + 0x134],ESI     ; 004ec758
    ADD EDX,0x3c                        ; 004ec75f
    MOV dword ptr [ESP + 0x148],EAX     ; 004ec762
    MOV EAX,dword ptr [ESP + 0x174]     ; 004ec769
    MOV dword ptr [ESP + 0x140],EDX     ; 004ec770
    MOV dword ptr [ESP + 0x144],EAX     ; 004ec777
    MOV EAX,dword ptr [ESP + 0x5d]      ; 004ec77e
        ;   Label: LAB_004ec77e
    XOR EBX,EBX                         ; 004ec782
    TEST EAX,EAX                        ; 004ec784
    JLE 0x004ec7b3                      ; 004ec786
        ;   XREF to: 004ec7b3 (CONDITIONAL_JUMP)  ; LAB_004ec7b3
    LEA EAX,[ESP + 0x61]                ; 004ec788
    MOV ECX,dword ptr [ESP + 0x5d]      ; 004ec78c
    MOV EBP,dword ptr [ESP + 0x140]     ; 004ec790
    ADD EAX,0x14                        ; 004ec797
    MOV SI,word ptr [EAX + 0x4]         ; 004ec79a
        ;   Label: LAB_004ec79a
    CMP SI,word ptr [EBP + 0x4]         ; 004ec79e
    JNZ 0x004ecad7                      ; 004ec7a2
        ;   XREF to: 004ecad7 (CONDITIONAL_JUMP)  ; LAB_004ecad7
    MOV ESI,dword ptr [EAX]             ; 004ec7a8
    CMP ESI,dword ptr [EBP]             ; 004ec7aa
    JNZ 0x004ecad7                      ; 004ec7ad
        ;   XREF to: 004ecad7 (CONDITIONAL_JUMP)  ; LAB_004ecad7
    CMP EBX,dword ptr [ESP + 0x5d]      ; 004ec7b3
        ;   Label: LAB_004ec7b3
    JNZ 0x004ecae8                      ; 004ec7b7
        ;   XREF to: 004ecae8 (CONDITIONAL_JUMP)  ; LAB_004ecae8
    MOV EDX,dword ptr [ESP + 0x174]     ; 004ec7bd
    MOV EAX,dword ptr [ESP + 0x14c]     ; 004ec7c4
    CMP EAX,dword ptr [EDX + 0x114]     ; 004ec7cb
    JNZ 0x004ec7f5                      ; 004ec7d1
        ;   XREF to: 004ec7f5 (CONDITIONAL_JUMP)  ; LAB_004ec7f5
    MOV EAX,0x58c38a                    ; 004ec7d3 | = "..\\core\\netgame.cpp"
    MOV EDX,0x811                       ; 004ec7d8
    PUSH 0x58c39e                       ; 004ec7dd | = "Hell froze"
    MOV [0x01cc4800],EAX                ; 004ec7e2 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 004ec7e7 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004ec7ed
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004ec7f2
    MOV ECX,dword ptr [ESP + 0x14c]     ; 004ec7f5
        ;   Label: LAB_004ec7f5
    PUSH ECX                            ; 004ec7fc
    MOV EBX,dword ptr [ESP + 0x178]     ; 004ec7fd
    PUSH EBX                            ; 004ec804
    CALL core_netgame.cpp_CNetGame_removePlayer_FUN_004ecc80 ; 004ec805
        ;   XREF to: 004ecc80 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_removePlayer_FUN_004ecc80(CNetGame * this_ptr, int player_index)
    ADD ESP,0x8                         ; 004ec80a
    MOV EDX,dword ptr [ESP + 0x174]     ; 004ec80d
        ;   Label: LAB_004ec80d
    MOV EAX,dword ptr [ESP + 0x14c]     ; 004ec814
    CMP EAX,dword ptr [EDX + 0x1c]      ; 004ec81b
    JL 0x004ec77e                       ; 004ec81e
        ;   XREF to: 004ec77e (CONDITIONAL_JUMP)  ; LAB_004ec77e
    MOV EDI,dword ptr [ESP + 0x5d]      ; 004ec824
        ;   Label: LAB_004ec824
    XOR ESI,ESI                         ; 004ec828
    TEST EDI,EDI                        ; 004ec82a
    JLE 0x004ec842                      ; 004ec82c
        ;   XREF to: 004ec842 (CONDITIONAL_JUMP)  ; LAB_004ec842
    MOV EDI,dword ptr [ESP + 0x174]     ; 004ec82e
    XOR EBX,EBX                         ; 004ec835
    CMP byte ptr [ESP + EBX*0x1 + 0x61],0x0 ; 004ec837
        ;   Label: LAB_004ec837
    JNZ 0x004ecc2c                      ; 004ec83c
        ;   XREF to: 004ecc2c (CONDITIONAL_JUMP)  ; LAB_004ecc2c
    MOV EAX,dword ptr [ESP + 0x174]     ; 004ec842
        ;   Label: LAB_004ec842
    MOV EAX,dword ptr [EAX + 0x110]     ; 004ec849
    MOV EDX,dword ptr [ESP + 0x174]     ; 004ec84f
    MOV EAX,dword ptr [ESP + EAX*0x4 + 0x12c] ; 004ec856
    MOV dword ptr [EDX + 0x110],EAX     ; 004ec85d
    MOV EAX,dword ptr [EDX + 0x114]     ; 004ec863
    MOV EAX,dword ptr [ESP + EAX*0x4 + 0x12c] ; 004ec869
    MOV dword ptr [EDX + 0x114],EAX     ; 004ec870
    MOV EAX,dword ptr [EDX + 0x1c]      ; 004ec876
    DEC EAX                             ; 004ec879
    MOV dword ptr [ESP + 0x138],EAX     ; 004ec87a
    TEST EAX,EAX                        ; 004ec881
    JL 0x004ecaba                       ; 004ec883
        ;   XREF to: 004ecaba (CONDITIONAL_JUMP)  ; LAB_004ecaba
    LEA EAX,[EDX + 0x20]                ; 004ec889
    MOV dword ptr [ESP + 0x150],EAX     ; 004ec88c
    XOR EBP,EBP                         ; 004ec893
        ;   Label: LAB_004ec893
    MOV EAX,dword ptr [ESP + 0x138]     ; 004ec895
    MOV dword ptr [ESP + 0x158],EBP     ; 004ec89c
    TEST EAX,EAX                        ; 004ec8a3
    JLE 0x004ecaa3                      ; 004ec8a5
        ;   XREF to: 004ecaa3 (CONDITIONAL_JUMP)  ; LAB_004ecaa3
    MOV EAX,dword ptr [ESP + 0x150]     ; 004ec8ab
    MOV EBX,dword ptr [ESP + 0x150]     ; 004ec8b2
    MOV dword ptr [ESP + 0x15c],EBP     ; 004ec8b9
    ADD EAX,0x1c                        ; 004ec8c0
    ADD EBX,0x78                        ; 004ec8c3
    MOV dword ptr [ESP + 0x154],EAX     ; 004ec8c6
    MOV EDX,dword ptr [ESP + 0x15c]     ; 004ec8cd
        ;   Label: LAB_004ec8cd
    MOV EAX,dword ptr [ESP + 0x15c]     ; 004ec8d4
    MOV ECX,dword ptr [ESP + EDX*0x1 + 0x130] ; 004ec8db
    CMP ECX,dword ptr [ESP + EAX*0x1 + 0x12c] ; 004ec8e2
    JGE 0x004eca60                      ; 004ec8e9
        ;   XREF to: 004eca60 (CONDITIONAL_JUMP)  ; LAB_004eca60
    LEA EAX,[ESP + 0x12c]               ; 004ec8ef
    LEA EBP,[ESP + 0x12c]               ; 004ec8f6
    ADD EDX,0x4                         ; 004ec8fd
    MOV ESI,dword ptr [ESP + 0x15c]     ; 004ec900
    ADD EAX,EDX                         ; 004ec907
    ADD EBP,ESI                         ; 004ec909
    MOV EDI,dword ptr [ESP + 0x158]     ; 004ec90b
    MOV ECX,dword ptr [EAX]             ; 004ec912
    MOV EDX,dword ptr [EBP]             ; 004ec914
    MOV dword ptr [EBP],ECX             ; 004ec917
    IMUL EBP,EDI,0x78                   ; 004ec91a
    MOV dword ptr [EAX],EDX             ; 004ec91d
    ADD EBP,dword ptr [ESP + 0x150]     ; 004ec91f
    LEA EDI,[ESP + 0xb4]                ; 004ec926
    MOV ESI,EBP                         ; 004ec92d
    MOVSD ES:EDI,ESI                    ; 004ec92f
    MOVSD ES:EDI,ESI                    ; 004ec930
    MOVSD ES:EDI,ESI                    ; 004ec931
    MOVSD ES:EDI,ESI                    ; 004ec932
    MOVSD ES:EDI,ESI                    ; 004ec933
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ec934
    MOV dword ptr [ESP + 0xc8],EAX      ; 004ec937
    MOV EDX,dword ptr [ESP + 0x154]     ; 004ec93e
    MOV EAX,dword ptr [EBP + 0x18]      ; 004ec945
    PUSH EDX                            ; 004ec948
    MOV dword ptr [ESP + 0xd0],EAX      ; 004ec949
    LEA EAX,[ESP + 0xd4]                ; 004ec950
    PUSH EAX                            ; 004ec957
    CALL core_netgame.cpp_assignInt1_FUN_004edfa0 ; 004ec958
        ;   XREF to: 004edfa0 (UNCONDITIONAL_CALL)  ; int * core_netgame.cpp_assignInt1_FUN_004edfa0(int * dest, int * src)
    ADD ESP,0x8                         ; 004ec95d
    MOV EAX,dword ptr [ESP + 0x154]     ; 004ec960
    MOV AX,word ptr [EAX + 0x4]         ; 004ec967
    MOV word ptr [ESP + 0xd4],AX        ; 004ec96b
    MOV EAX,dword ptr [EBP + 0x24]      ; 004ec973
    MOV dword ptr [ESP + 0xd8],EAX      ; 004ec976
    MOV EAX,dword ptr [EBP + 0x28]      ; 004ec97d
    MOV dword ptr [ESP + 0xdc],EAX      ; 004ec980
    MOV EAX,dword ptr [EBP + 0x2c]      ; 004ec987
    MOV dword ptr [ESP + 0xe0],EAX      ; 004ec98a
    MOV EAX,dword ptr [EBP + 0x30]      ; 004ec991
    MOV dword ptr [ESP + 0xe4],EAX      ; 004ec994
    MOV EAX,dword ptr [EBP + 0x34]      ; 004ec99b
    MOV dword ptr [ESP + 0xe8],EAX      ; 004ec99e
    MOV EAX,dword ptr [EBP + 0x38]      ; 004ec9a5
    MOV dword ptr [ESP + 0xec],EAX      ; 004ec9a8
    MOV EAX,dword ptr [EBP + 0x3c]      ; 004ec9af
    MOV dword ptr [ESP + 0xf0],EAX      ; 004ec9b2
    MOV EAX,dword ptr [EBP + 0x40]      ; 004ec9b9
    MOV dword ptr [ESP + 0xf4],EAX      ; 004ec9bc
    MOV EAX,dword ptr [EBP + 0x44]      ; 004ec9c3
    MOV dword ptr [ESP + 0xf8],EAX      ; 004ec9c6
    MOV EAX,dword ptr [EBP + 0x48]      ; 004ec9cd
    MOV dword ptr [ESP + 0xfc],EAX      ; 004ec9d0
    MOV EAX,dword ptr [EBX + -0x2c]     ; 004ec9d7
    MOV dword ptr [ESP + 0x100],EAX     ; 004ec9da
    MOV EAX,dword ptr [EBX + -0x28]     ; 004ec9e1
    MOV dword ptr [ESP + 0x104],EAX     ; 004ec9e4
    MOV EAX,dword ptr [EBX + -0x24]     ; 004ec9eb
    MOV dword ptr [ESP + 0x108],EAX     ; 004ec9ee
    MOV EAX,dword ptr [EBX + -0x20]     ; 004ec9f5
    MOV dword ptr [ESP + 0x10c],EAX     ; 004ec9f8
    MOV EAX,dword ptr [EBX + -0x1c]     ; 004ec9ff
    MOV dword ptr [ESP + 0x110],EAX     ; 004eca02
    MOV EAX,dword ptr [EBX + -0x18]     ; 004eca09
    MOV dword ptr [ESP + 0x114],EAX     ; 004eca0c
    MOV EAX,dword ptr [EBX + -0x14]     ; 004eca13
    MOV dword ptr [ESP + 0x118],EAX     ; 004eca16
    MOV EAX,dword ptr [EBX + -0x10]     ; 004eca1d
    MOV dword ptr [ESP + 0x11c],EAX     ; 004eca20
    MOV EAX,dword ptr [EBX + -0xc]      ; 004eca27
    MOV dword ptr [ESP + 0x120],EAX     ; 004eca2a
    MOV EAX,dword ptr [EBX + -0x8]      ; 004eca31
    MOV EDI,EBP                         ; 004eca34
    MOV dword ptr [ESP + 0x124],EAX     ; 004eca36
    MOV ESI,EBX                         ; 004eca3d
    MOV EAX,dword ptr [EBX + -0x4]      ; 004eca3f
    MOV ECX,0x1e                        ; 004eca42
    MOV dword ptr [ESP + 0x128],EAX     ; 004eca47
    MOVSD.REP ES:EDI,ESI                ; 004eca4e
    MOV ECX,0x1e                        ; 004eca50
    LEA ESI,[ESP + 0xb4]                ; 004eca55
    MOV EDI,EBX                         ; 004eca5c
    MOVSD.REP ES:EDI,ESI                ; 004eca5e
    MOV EDX,dword ptr [ESP + 0x15c]     ; 004eca60
        ;   Label: LAB_004eca60
    MOV ECX,dword ptr [ESP + 0x154]     ; 004eca67
    MOV ESI,dword ptr [ESP + 0x158]     ; 004eca6e
    MOV EDI,dword ptr [ESP + 0x138]     ; 004eca75
    ADD EBX,0x78                        ; 004eca7c
    ADD EDX,0x4                         ; 004eca7f
    ADD ECX,0x78                        ; 004eca82
    INC ESI                             ; 004eca85
    MOV dword ptr [ESP + 0x15c],EDX     ; 004eca86
    MOV dword ptr [ESP + 0x154],ECX     ; 004eca8d
    MOV dword ptr [ESP + 0x158],ESI     ; 004eca94
    CMP ESI,EDI                         ; 004eca9b
    JL 0x004ec8cd                       ; 004eca9d
        ;   XREF to: 004ec8cd (CONDITIONAL_JUMP)  ; LAB_004ec8cd
    MOV ESI,dword ptr [ESP + 0x138]     ; 004ecaa3
        ;   Label: LAB_004ecaa3
    DEC ESI                             ; 004ecaaa
    MOV dword ptr [ESP + 0x138],ESI     ; 004ecaab
    TEST ESI,ESI                        ; 004ecab2
    JGE 0x004ec893                      ; 004ecab4
        ;   XREF to: 004ec893 (CONDITIONAL_JUMP)  ; LAB_004ec893
    MOV EAX,0x1                         ; 004ecaba
        ;   Label: LAB_004ecaba
    ADD ESP,0x160                       ; 004ecabf
    POP EBP                             ; 004ecac5
    POP EDI                             ; 004ecac6
    POP ESI                             ; 004ecac7
    POP EBX                             ; 004ecac8
    RET                                 ; 004ecac9
    XOR EAX,EAX                         ; 004ecaca
        ;   Label: LAB_004ecaca
    ADD ESP,0x160                       ; 004ecacc
    POP EBP                             ; 004ecad2
    POP EDI                             ; 004ecad3
    POP ESI                             ; 004ecad4
    POP EBX                             ; 004ecad5
    RET                                 ; 004ecad6
    INC EBX                             ; 004ecad7
        ;   Label: LAB_004ecad7
    ADD EAX,0x28                        ; 004ecad8
    CMP EBX,ECX                         ; 004ecadb
    JL 0x004ec79a                       ; 004ecadd
        ;   XREF to: 004ec79a (CONDITIONAL_JUMP)  ; LAB_004ec79a
    JMP 0x004ec7b3                      ; 004ecae3
        ;   XREF to: 004ec7b3 (UNCONDITIONAL_JUMP)  ; LAB_004ec7b3
    MOV EBP,dword ptr [ESP + 0x14c]     ; 004ecae8
        ;   Label: LAB_004ecae8
    IMUL ECX,EBP,0x78                   ; 004ecaef
    MOV EAX,dword ptr [ESP + 0x134]     ; 004ecaf2
    MOV dword ptr [ESP + EAX*0x1 + 0x12c],EBX ; 004ecaf9
    IMUL EDX,EBX,0x28                   ; 004ecb00
    MOV EDI,dword ptr [ESP + 0x174]     ; 004ecb03
    LEA ESI,[ESP + 0x61]                ; 004ecb0a
    MOV EAX,EBP                         ; 004ecb0e
    MOV EBP,dword ptr [EDI + 0x114]     ; 004ecb10
    ADD ESI,EDX                         ; 004ecb16
    CMP EAX,EBP                         ; 004ecb18
    JNZ 0x004ecbe2                      ; 004ecb1a
        ;   XREF to: 004ecbe2 (CONDITIONAL_JUMP)  ; LAB_004ecbe2
    PUSH ESI                            ; 004ecb20
    MOV EDX,dword ptr [ESP + 0x14c]     ; 004ecb21
    XOR EAX,EBP                         ; 004ecb28
    PUSH EDX                            ; 004ecb2a
    MOV [0x005bdee4],EAX                ; 004ecb2b | DAT_005bdee4
    CALL crt_string.c__strcmp_FUN_005649c0 ; 004ecb30
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005649c0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004ecb35
    TEST EAX,EAX                        ; 004ecb38
    JZ 0x004ecb46                       ; 004ecb3a
        ;   XREF to: 004ecb46 (CONDITIONAL_JUMP)  ; LAB_004ecb46
    MOV dword ptr [0x005bdee4],0x1      ; 004ecb3c | DAT_005bdee4
    IMUL EAX,EBX,0x28                   ; 004ecb46
        ;   Label: LAB_004ecb46
    MOV EDX,dword ptr [ESP + 0x144]     ; 004ecb49
    MOV EDX,dword ptr [EDX + 0x64]      ; 004ecb50
    CMP EDX,dword ptr [ESP + EAX*0x1 + 0x85] ; 004ecb53
    JZ 0x004ecbd7                       ; 004ecb5a
        ;   XREF to: 004ecbd7 (CONDITIONAL_JUMP)  ; LAB_004ecbd7
    MOV dword ptr [0x005bdee4],0x1      ; 004ecb5c | DAT_005bdee4
    MOV EAX,dword ptr [ESP + 0x174]     ; 004ecb66
        ;   Label: LAB_004ecb66
    PUSH EAX                            ; 004ecb6d
    CALL core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_004ed170 ; 004ecb6e
        ;   XREF to: 004ed170 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_004ed170(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 004ecb73
    IMUL EBX,EBX,0x28                   ; 004ecb76
        ;   Label: LAB_004ecb76
    MOV ECX,dword ptr [ESP + 0x148]     ; 004ecb79
    MOV ESI,dword ptr [ESP + 0x144]     ; 004ecb80
    MOV EDI,dword ptr [ESP + 0x14c]     ; 004ecb87
    XOR DL,DL                           ; 004ecb8e
    ADD ECX,0x78                        ; 004ecb90
    ADD ESI,0x78                        ; 004ecb93
    INC EDI                             ; 004ecb96
    MOV dword ptr [ESP + 0x148],ECX     ; 004ecb97
    MOV dword ptr [ESP + 0x144],ESI     ; 004ecb9e
    MOV dword ptr [ESP + 0x14c],EDI     ; 004ecba5
    MOV byte ptr [ESP + EBX*0x1 + 0x61],DL ; 004ecbac
    MOV EDX,dword ptr [ESP + 0x140]     ; 004ecbb0
    MOV EBX,dword ptr [ESP + 0x134]     ; 004ecbb7
    ADD EDX,0x78                        ; 004ecbbe
    ADD EBX,0x4                         ; 004ecbc1
    MOV dword ptr [ESP + 0x140],EDX     ; 004ecbc4
    MOV dword ptr [ESP + 0x134],EBX     ; 004ecbcb
    JMP 0x004ec80d                      ; 004ecbd2
        ;   XREF to: 004ec80d (UNCONDITIONAL_JUMP)  ; LAB_004ec80d
    CMP dword ptr [0x005bdee4],0x0      ; 004ecbd7 | DAT_005bdee4
        ;   Label: LAB_004ecbd7
    JNZ 0x004ecb66                      ; 004ecbde
        ;   XREF to: 004ecb66 (CONDITIONAL_JUMP)  ; LAB_004ecb66
    JMP 0x004ecb76                      ; 004ecbe0
        ;   XREF to: 004ecb76 (UNCONDITIONAL_JUMP)  ; LAB_004ecb76
    MOV EDI,dword ptr [ESP + 0x148]     ; 004ecbe2
        ;   Label: LAB_004ecbe2
    PUSH EDI                            ; 004ecbe9
    MOV AL,byte ptr [ESI]               ; 004ecbea
        ;   Label: LAB_004ecbea
    MOV byte ptr [EDI],AL               ; 004ecbec
    CMP AL,0x0                          ; 004ecbee
    JZ 0x004ecc02                       ; 004ecbf0
        ;   XREF to: 004ecc02 (CONDITIONAL_JUMP)  ; LAB_004ecc02
    MOV AL,byte ptr [ESI + 0x1]         ; 004ecbf2
    ADD ESI,0x2                         ; 004ecbf5
    MOV byte ptr [EDI + 0x1],AL         ; 004ecbf8
    ADD EDI,0x2                         ; 004ecbfb
    CMP AL,0x0                          ; 004ecbfe
    JNZ 0x004ecbea                      ; 004ecc00
        ;   XREF to: 004ecbea (CONDITIONAL_JUMP)  ; LAB_004ecbea
    POP EDI                             ; 004ecc02
        ;   Label: LAB_004ecc02
    MOV EAX,dword ptr [ESP + 0x174]     ; 004ecc03
    ADD EAX,ECX                         ; 004ecc0a
    MOV ECX,dword ptr [ESP + EDX*0x1 + 0x85] ; 004ecc0c
    MOV dword ptr [EAX + 0x64],ECX      ; 004ecc13
    MOV ECX,dword ptr [ESP + EDX*0x1 + 0x7d] ; 004ecc16
    MOV dword ptr [EAX + 0x34],ECX      ; 004ecc1a
    MOV EDX,dword ptr [ESP + EDX*0x1 + 0x81] ; 004ecc1d
    MOV dword ptr [EAX + 0x38],EDX      ; 004ecc24
    JMP 0x004ecb76                      ; 004ecc27
        ;   XREF to: 004ecb76 (UNCONDITIONAL_JUMP)  ; LAB_004ecb76
    MOV EDX,dword ptr [ESP + EBX*0x1 + 0x81] ; 004ecc2c
        ;   Label: LAB_004ecc2c
    PUSH EDX                            ; 004ecc33
    MOV ECX,dword ptr [ESP + EBX*0x1 + 0x81] ; 004ecc34
    LEA EAX,[ESP + 0x65]                ; 004ecc3b
    PUSH ECX                            ; 004ecc3f
    ADD EAX,EBX                         ; 004ecc40
    PUSH EAX                            ; 004ecc42
    ADD EAX,0x14                        ; 004ecc43
    PUSH EAX                            ; 004ecc46
    PUSH EDI                            ; 004ecc47
    CALL core_netgame.cpp_CNetGame_addPlayer_FUN_004eb440 ; 004ecc48
        ;   XREF to: 004eb440 (UNCONDITIONAL_CALL)  ; int core_netgame.cpp_CNetGame_addPlayer_FUN_004eb440(CNetGame * this_ptr, SNetworkAddr * addr, char * name, int hero_number, ...)
    IMUL EDX,EAX,0x78                   ; 004ecc4d
    ADD ESP,0x14                        ; 004ecc50
    ADD EDX,EDI                         ; 004ecc53
    MOV ECX,dword ptr [ESP + EBX*0x1 + 0x85] ; 004ecc55
    MOV dword ptr [EDX + 0x64],ECX      ; 004ecc5c
    MOV dword ptr [ESP + EAX*0x4 + 0x12c],ESI ; 004ecc5f
    MOV EAX,dword ptr [ESP + 0x5d]      ; 004ecc66
    INC ESI                             ; 004ecc6a
    ADD EBX,0x28                        ; 004ecc6b
    CMP ESI,EAX                         ; 004ecc6e
    JL 0x004ec837                       ; 004ecc70
        ;   XREF to: 004ec837 (CONDITIONAL_JUMP)  ; LAB_004ec837
    JMP 0x004ec842                      ; 004ecc76
        ;   XREF to: 004ec842 (UNCONDITIONAL_JUMP)  ; LAB_004ec842

