; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_netgame_cpp_CNetGame_applyNewGameSettings_FUN_0050e020(CNetGame *this_ptr,UNetPacket *packet)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; UNetPacket *     Stack[0x8]:4   packet
; Local Variables:
; undefined4       Stack[-0x16f]:4  local_16f
; undefined        Stack[-0x16b]:1  local_16b
; undefined1       Stack[-0x16a]:1  local_16a
; undefined4       Stack[-0x11b]:4  local_11b
; undefined        Stack[-0x117]:1  local_117
; undefined1       Stack[-0x116]:1  local_116
; undefined4       Stack[-0x103]:4  local_103
; undefined2       Stack[-0xff]:2  local_ff
; undefined        Stack[-0xc4]:1  local_c4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined        Stack[-0xa8]:1  local_a8
; undefined2       Stack[-0xa4]:2  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
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
;   core_netgame.cpp_CNetGame_processPacket_FUN_0050c280 at 0050ca1c
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_005e0ca5
;   TerminatedCString s_CNetGame_applyNewGameSet_005e0cb9
;   TerminatedCString s_core_netgame_cpp_005e0d05
;   TerminatedCString s_Hell_froze_005e0d19
;   undefined4 DAT_0061b124
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   core_netgame.cpp_CNetGame_addPlayer_FUN_0050ce70
;   core_netgame.cpp_CNetGame_removePlayer_FUN_0050e6c0
;   core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_0050eb80
;   core_netgame.cpp_IpAddr_copy_FUN_0050f9c0
;   crt_string.c__strcmp_FUN_005b8c30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050e020
        ;   Label: core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_0050e020
    PUSH ESI                            ; 0050e021
    PUSH EDI                            ; 0050e022
    PUSH EBP                            ; 0050e023
    SUB ESP,0x168                       ; 0050e024
    MOV ESI,dword ptr [ESP + 0x180]     ; 0050e02a
    MOV EAX,dword ptr [ESP + 0x17c]     ; 0050e031
    CMP dword ptr [EAX],0x2             ; 0050e038
    JNZ 0x0050e043                      ; 0050e03b
        ;   XREF to: 0050e043 (CONDITIONAL_JUMP)  ; LAB_0050e043
    CMP dword ptr [EAX + 0x4],0x1       ; 0050e03d
    JZ 0x0050e066                       ; 0050e041
        ;   XREF to: 0050e066 (CONDITIONAL_JUMP)  ; LAB_0050e066
    MOV EBX,0x5e0ca5                    ; 0050e043 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_0050e043
    MOV EDI,0x7e6                       ; 0050e048
    PUSH 0x5e0cb9                       ; 0050e04d | = "CNetGame::applyNewGameSettings - shou..."
    MOV dword ptr [0x01d046a0],EBX      ; 0050e052 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 0050e058 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0050e05e
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0050e063
    MOV ECX,0x2c                        ; 0050e066
        ;   Label: LAB_0050e066
    MOV EDI,ESP                         ; 0050e06b
    MOVSD.REP ES:EDI,ESI                ; 0050e06d
    MOVSB ES:EDI,ESI                    ; 0050e06f
    MOV EDX,dword ptr [ESP + 0x17c]     ; 0050e070
    MOV EAX,dword ptr [ESP + 0x9]       ; 0050e077
    MOV EBP,0xffffffff                  ; 0050e07b
    MOV dword ptr [EDX + 0x17c],EAX     ; 0050e080
    MOV dword ptr [ESP + 0x140],EBP     ; 0050e086
    MOV EAX,dword ptr [ESP + 0x5d]      ; 0050e08d
    XOR EDI,EDI                         ; 0050e091
    TEST EAX,EAX                        ; 0050e093
    JLE 0x0050e100                      ; 0050e095
        ;   XREF to: 0050e100 (CONDITIONAL_JUMP)  ; LAB_0050e100
    MOV EAX,dword ptr [ESP + 0x17c]     ; 0050e097
    MOV ECX,dword ptr [ESP + 0x17c]     ; 0050e09e
    MOV EDX,dword ptr [EDX + 0x120]     ; 0050e0a5
    ADD EAX,0x20                        ; 0050e0ab
    SHL EDX,0x7                         ; 0050e0ae
    MOV ECX,dword ptr [ECX + 0x124]     ; 0050e0b1
    ADD EDX,EAX                         ; 0050e0b7
    SHL ECX,0x7                         ; 0050e0b9
    ADD EDX,0x1c                        ; 0050e0bc
    ADD EAX,ECX                         ; 0050e0bf
    LEA ECX,[ESP + 0x61]                ; 0050e0c1
    ADD EAX,0x1c                        ; 0050e0c5
    LEA ESI,[ECX + 0x14]                ; 0050e0c8
    MOV CX,word ptr [ESI + 0x4]         ; 0050e0cb
        ;   Label: LAB_0050e0cb
    CMP CX,word ptr [EAX + 0x4]         ; 0050e0cf
    JNZ 0x0050e0dd                      ; 0050e0d3
        ;   XREF to: 0050e0dd (CONDITIONAL_JUMP)  ; LAB_0050e0dd
    MOV EBX,dword ptr [EAX]             ; 0050e0d5
    CMP EBX,dword ptr [ESI]             ; 0050e0d7
    JNZ 0x0050e0dd                      ; 0050e0d9
        ;   XREF to: 0050e0dd (CONDITIONAL_JUMP)  ; LAB_0050e0dd
    MOV EBP,EDI                         ; 0050e0db
    MOV CX,word ptr [ESI + 0x4]         ; 0050e0dd
        ;   Label: LAB_0050e0dd
    CMP CX,word ptr [EDX + 0x4]         ; 0050e0e1
    JNZ 0x0050e0f4                      ; 0050e0e5
        ;   XREF to: 0050e0f4 (CONDITIONAL_JUMP)  ; LAB_0050e0f4
    MOV EBX,dword ptr [EDX]             ; 0050e0e7
    CMP EBX,dword ptr [ESI]             ; 0050e0e9
    JNZ 0x0050e0f4                      ; 0050e0eb
        ;   XREF to: 0050e0f4 (CONDITIONAL_JUMP)  ; LAB_0050e0f4
    MOV dword ptr [ESP + 0x140],EDI     ; 0050e0ed
    MOV ECX,dword ptr [ESP + 0x5d]      ; 0050e0f4
        ;   Label: LAB_0050e0f4
    INC EDI                             ; 0050e0f8
    ADD ESI,0x28                        ; 0050e0f9
    CMP EDI,ECX                         ; 0050e0fc
    JL 0x0050e0cb                       ; 0050e0fe
        ;   XREF to: 0050e0cb (CONDITIONAL_JUMP)  ; LAB_0050e0cb
    CMP dword ptr [ESP + 0x140],0x0     ; 0050e100
        ;   Label: LAB_0050e100
    JL 0x0050e4e9                       ; 0050e108
        ;   XREF to: 0050e4e9 (CONDITIONAL_JUMP)  ; LAB_0050e4e9
    TEST EBP,EBP                        ; 0050e10e
    JL 0x0050e4e9                       ; 0050e110
        ;   XREF to: 0050e4e9 (CONDITIONAL_JUMP)  ; LAB_0050e4e9
    MOV EDI,dword ptr [ESP + 0x17c]     ; 0050e116
    LEA ESI,[ESP + 0xd]                 ; 0050e11d
    ADD EDI,0x128                       ; 0050e121
    PUSH EDI                            ; 0050e127
    MOV AL,byte ptr [ESI]               ; 0050e128
        ;   Label: LAB_0050e128
    MOV byte ptr [EDI],AL               ; 0050e12a
    CMP AL,0x0                          ; 0050e12c
    JZ 0x0050e140                       ; 0050e12e
        ;   XREF to: 0050e140 (CONDITIONAL_JUMP)  ; LAB_0050e140
    MOV AL,byte ptr [ESI + 0x1]         ; 0050e130
    ADD ESI,0x2                         ; 0050e133
    MOV byte ptr [EDI + 0x1],AL         ; 0050e136
    ADD EDI,0x2                         ; 0050e139
    CMP AL,0x0                          ; 0050e13c
    JNZ 0x0050e128                      ; 0050e13e
        ;   XREF to: 0050e128 (CONDITIONAL_JUMP)  ; LAB_0050e128
    POP EDI                             ; 0050e140
        ;   Label: LAB_0050e140
    MOV EAX,dword ptr [ESP + 0x17c]     ; 0050e141
    XOR ESI,ESI                         ; 0050e148
    MOV EDI,dword ptr [EAX + 0x1c]      ; 0050e14a
    MOV dword ptr [ESP + 0x154],ESI     ; 0050e14d
    TEST EDI,EDI                        ; 0050e154
    JLE 0x0050e232                      ; 0050e156
        ;   XREF to: 0050e232 (CONDITIONAL_JUMP)  ; LAB_0050e232
    MOV EDX,dword ptr [ESP + 0x17c]     ; 0050e15c
    ADD EAX,0x20                        ; 0050e163
    MOV dword ptr [ESP + 0x148],ESI     ; 0050e166
    ADD EDX,0x3c                        ; 0050e16d
    MOV dword ptr [ESP + 0x150],EAX     ; 0050e170
    MOV EAX,dword ptr [ESP + 0x17c]     ; 0050e177
    MOV dword ptr [ESP + 0x144],EDX     ; 0050e17e
    MOV dword ptr [ESP + 0x14c],EAX     ; 0050e185
    MOV EAX,dword ptr [ESP + 0x5d]      ; 0050e18c
        ;   Label: LAB_0050e18c
    XOR EBX,EBX                         ; 0050e190
    TEST EAX,EAX                        ; 0050e192
    JLE 0x0050e1c1                      ; 0050e194
        ;   XREF to: 0050e1c1 (CONDITIONAL_JUMP)  ; LAB_0050e1c1
    LEA EAX,[ESP + 0x61]                ; 0050e196
    MOV ECX,dword ptr [ESP + 0x5d]      ; 0050e19a
    MOV EBP,dword ptr [ESP + 0x144]     ; 0050e19e
    ADD EAX,0x14                        ; 0050e1a5
    MOV SI,word ptr [EAX + 0x4]         ; 0050e1a8
        ;   Label: LAB_0050e1a8
    CMP SI,word ptr [EBP + 0x4]         ; 0050e1ac
    JNZ 0x0050e4f6                      ; 0050e1b0
        ;   XREF to: 0050e4f6 (CONDITIONAL_JUMP)  ; LAB_0050e4f6
    MOV ESI,dword ptr [EBP]             ; 0050e1b6
    CMP ESI,dword ptr [EAX]             ; 0050e1b9
    JNZ 0x0050e4f6                      ; 0050e1bb
        ;   XREF to: 0050e4f6 (CONDITIONAL_JUMP)  ; LAB_0050e4f6
    CMP EBX,dword ptr [ESP + 0x5d]      ; 0050e1c1
        ;   Label: LAB_0050e1c1
    JNZ 0x0050e507                      ; 0050e1c5
        ;   XREF to: 0050e507 (CONDITIONAL_JUMP)  ; LAB_0050e507
    MOV EDX,dword ptr [ESP + 0x17c]     ; 0050e1cb
    MOV EAX,dword ptr [ESP + 0x154]     ; 0050e1d2
    CMP EAX,dword ptr [EDX + 0x124]     ; 0050e1d9
    JNZ 0x0050e203                      ; 0050e1df
        ;   XREF to: 0050e203 (CONDITIONAL_JUMP)  ; LAB_0050e203
    MOV EAX,0x5e0d05                    ; 0050e1e1 | = "..\\core\\netgame.cpp"
    MOV EDX,0x811                       ; 0050e1e6
    PUSH 0x5e0d19                       ; 0050e1eb | = "Hell froze"
    MOV [0x01d046a0],EAX                ; 0050e1f0 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 0050e1f5 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0050e1fb
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0050e200
    MOV ECX,dword ptr [ESP + 0x154]     ; 0050e203
        ;   Label: LAB_0050e203
    PUSH ECX                            ; 0050e20a
    MOV EBX,dword ptr [ESP + 0x180]     ; 0050e20b
    PUSH EBX                            ; 0050e212
    CALL core_netgame.cpp_CNetGame_removePlayer_FUN_0050e6c0 ; 0050e213
        ;   XREF to: 0050e6c0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_removePlayer_FUN_0050e6c0(CNetGame * this_ptr, int player_index)
    ADD ESP,0x8                         ; 0050e218
    MOV EDX,dword ptr [ESP + 0x17c]     ; 0050e21b
        ;   Label: LAB_0050e21b
    MOV EAX,dword ptr [ESP + 0x154]     ; 0050e222
    CMP EAX,dword ptr [EDX + 0x1c]      ; 0050e229
    JL 0x0050e18c                       ; 0050e22c
        ;   XREF to: 0050e18c (CONDITIONAL_JUMP)  ; LAB_0050e18c
    MOV EDI,dword ptr [ESP + 0x5d]      ; 0050e232
        ;   Label: LAB_0050e232
    XOR ESI,ESI                         ; 0050e236
    TEST EDI,EDI                        ; 0050e238
    JLE 0x0050e250                      ; 0050e23a
        ;   XREF to: 0050e250 (CONDITIONAL_JUMP)  ; LAB_0050e250
    MOV EDI,dword ptr [ESP + 0x17c]     ; 0050e23c
    XOR EBX,EBX                         ; 0050e243
    CMP byte ptr [ESP + EBX*0x1 + 0x61],0x0 ; 0050e245
        ;   Label: LAB_0050e245
    JNZ 0x0050e661                      ; 0050e24a
        ;   XREF to: 0050e661 (CONDITIONAL_JUMP)  ; LAB_0050e661
    MOV EAX,dword ptr [ESP + 0x17c]     ; 0050e250
        ;   Label: LAB_0050e250
    MOV EAX,dword ptr [EAX + 0x120]     ; 0050e257
    MOV EDX,dword ptr [ESP + 0x17c]     ; 0050e25d
    MOV EAX,dword ptr [ESP + EAX*0x4 + 0x134] ; 0050e264
    MOV dword ptr [EDX + 0x120],EAX     ; 0050e26b
    MOV EAX,dword ptr [EDX + 0x124]     ; 0050e271
    MOV EAX,dword ptr [ESP + EAX*0x4 + 0x134] ; 0050e277
    MOV dword ptr [EDX + 0x124],EAX     ; 0050e27e
    MOV EAX,dword ptr [EDX + 0x1c]      ; 0050e284
    DEC EAX                             ; 0050e287
    MOV dword ptr [ESP + 0x13c],EAX     ; 0050e288
    TEST EAX,EAX                        ; 0050e28f
    JL 0x0050e4d9                       ; 0050e291
        ;   XREF to: 0050e4d9 (CONDITIONAL_JUMP)  ; LAB_0050e4d9
    LEA EAX,[EDX + 0x20]                ; 0050e297
    MOV dword ptr [ESP + 0x158],EAX     ; 0050e29a
    XOR EBP,EBP                         ; 0050e2a1
        ;   Label: LAB_0050e2a1
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0050e2a3
    MOV dword ptr [ESP + 0x160],EBP     ; 0050e2aa
    TEST EAX,EAX                        ; 0050e2b1
    JLE 0x0050e4c2                      ; 0050e2b3
        ;   XREF to: 0050e4c2 (CONDITIONAL_JUMP)  ; LAB_0050e4c2
    MOV EAX,dword ptr [ESP + 0x158]     ; 0050e2b9
    MOV EBX,dword ptr [ESP + 0x158]     ; 0050e2c0
    MOV dword ptr [ESP + 0x164],EBP     ; 0050e2c7
    ADD EAX,0x1c                        ; 0050e2ce
    ADD EBX,0x80                        ; 0050e2d1
    MOV dword ptr [ESP + 0x15c],EAX     ; 0050e2d7
    MOV EDX,dword ptr [ESP + 0x164]     ; 0050e2de
        ;   Label: LAB_0050e2de
    MOV EAX,dword ptr [ESP + 0x164]     ; 0050e2e5
    MOV ECX,dword ptr [ESP + EDX*0x1 + 0x138] ; 0050e2ec
    CMP ECX,dword ptr [ESP + EAX*0x1 + 0x134] ; 0050e2f3
    JGE 0x0050e479                      ; 0050e2fa
        ;   XREF to: 0050e479 (CONDITIONAL_JUMP)  ; LAB_0050e479
    LEA EAX,[ESP + 0x134]               ; 0050e300
    LEA EBP,[EDX + 0x4]                 ; 0050e307
    ADD EBP,EAX                         ; 0050e30a
    ADD EAX,EDX                         ; 0050e30c
    MOV ECX,dword ptr [EBP]             ; 0050e30e
    MOV EDX,dword ptr [EAX]             ; 0050e311
    MOV dword ptr [EAX],ECX             ; 0050e313
    MOV dword ptr [EBP],EDX             ; 0050e315
    MOV EBP,dword ptr [ESP + 0x160]     ; 0050e318
    MOV EDI,dword ptr [ESP + 0x158]     ; 0050e31f
    SHL EBP,0x7                         ; 0050e326
    ADD EBP,EDI                         ; 0050e329
    LEA EDI,[ESP + 0xb4]                ; 0050e32b
    MOV ESI,EBP                         ; 0050e332
    MOVSD ES:EDI,ESI                    ; 0050e334
    MOVSD ES:EDI,ESI                    ; 0050e335
    MOVSD ES:EDI,ESI                    ; 0050e336
    MOVSD ES:EDI,ESI                    ; 0050e337
    MOVSD ES:EDI,ESI                    ; 0050e338
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050e339
    MOV dword ptr [ESP + 0xc8],EAX      ; 0050e33c
    MOV EAX,dword ptr [EBP + 0x18]      ; 0050e343
    MOV dword ptr [ESP + 0xcc],EAX      ; 0050e346
    MOV EAX,dword ptr [ESP + 0x15c]     ; 0050e34d
    PUSH EAX                            ; 0050e354
    LEA EAX,[ESP + 0xd4]                ; 0050e355
    PUSH EAX                            ; 0050e35c
    CALL core_netgame.cpp_IpAddr_copy_FUN_0050f9c0 ; 0050e35d
        ;   XREF to: 0050f9c0 (UNCONDITIONAL_CALL)  ; SIpAddr * core_netgame.cpp_IpAddr_copy_FUN_0050f9c0(SIpAddr * this_ptr, SIpAddr * other)
    ADD ESP,0x8                         ; 0050e362
    MOV EAX,dword ptr [ESP + 0x15c]     ; 0050e365
    MOV AX,word ptr [EAX + 0x4]         ; 0050e36c
    MOV word ptr [ESP + 0xd4],AX        ; 0050e370
    MOV EAX,dword ptr [EBP + 0x24]      ; 0050e378
    MOV dword ptr [ESP + 0xd8],EAX      ; 0050e37b
    MOV EAX,dword ptr [EBP + 0x28]      ; 0050e382
    MOV dword ptr [ESP + 0xdc],EAX      ; 0050e385
    MOV EAX,dword ptr [EBP + 0x2c]      ; 0050e38c
    MOV dword ptr [ESP + 0xe0],EAX      ; 0050e38f
    MOV EAX,dword ptr [EBP + 0x30]      ; 0050e396
    MOV dword ptr [ESP + 0xe4],EAX      ; 0050e399
    MOV EAX,dword ptr [EBP + 0x34]      ; 0050e3a0
    MOV dword ptr [ESP + 0xe8],EAX      ; 0050e3a3
    MOV EAX,dword ptr [EBP + 0x38]      ; 0050e3aa
    MOV dword ptr [ESP + 0xec],EAX      ; 0050e3ad
    MOV EAX,dword ptr [EBP + 0x3c]      ; 0050e3b4
    MOV dword ptr [ESP + 0xf0],EAX      ; 0050e3b7
    MOV EAX,dword ptr [EBP + 0x40]      ; 0050e3be
    MOV dword ptr [ESP + 0xf4],EAX      ; 0050e3c1
    MOV EAX,dword ptr [EBP + 0x44]      ; 0050e3c8
    MOV dword ptr [ESP + 0xf8],EAX      ; 0050e3cb
    MOV EAX,dword ptr [EBP + 0x48]      ; 0050e3d2
    MOV dword ptr [ESP + 0xfc],EAX      ; 0050e3d5
    MOV EAX,dword ptr [EBX + -0x34]     ; 0050e3dc
    MOV dword ptr [ESP + 0x100],EAX     ; 0050e3df
    MOV EAX,dword ptr [EBX + -0x30]     ; 0050e3e6
    MOV dword ptr [ESP + 0x104],EAX     ; 0050e3e9
    MOV EAX,dword ptr [EBX + -0x2c]     ; 0050e3f0
    MOV dword ptr [ESP + 0x108],EAX     ; 0050e3f3
    MOV EAX,dword ptr [EBX + -0x28]     ; 0050e3fa
    MOV dword ptr [ESP + 0x10c],EAX     ; 0050e3fd
    MOV EAX,dword ptr [EBX + -0x24]     ; 0050e404
    MOV dword ptr [ESP + 0x110],EAX     ; 0050e407
    MOV EAX,dword ptr [EBX + -0x20]     ; 0050e40e
    MOV dword ptr [ESP + 0x114],EAX     ; 0050e411
    MOV EAX,dword ptr [EBX + -0x1c]     ; 0050e418
    MOV dword ptr [ESP + 0x118],EAX     ; 0050e41b
    MOV EAX,dword ptr [EBX + -0x18]     ; 0050e422
    MOV dword ptr [ESP + 0x11c],EAX     ; 0050e425
    MOV EAX,dword ptr [EBX + -0x14]     ; 0050e42c
    MOV dword ptr [ESP + 0x120],EAX     ; 0050e42f
    MOV EAX,dword ptr [EBX + -0x10]     ; 0050e436
    MOV dword ptr [ESP + 0x124],EAX     ; 0050e439
    MOV EAX,dword ptr [EBX + -0xc]      ; 0050e440
    MOV dword ptr [ESP + 0x128],EAX     ; 0050e443
    MOV EAX,dword ptr [EBX + -0x8]      ; 0050e44a
    MOV EDI,EBP                         ; 0050e44d
    MOV dword ptr [ESP + 0x12c],EAX     ; 0050e44f
    MOV ESI,EBX                         ; 0050e456
    MOV EAX,dword ptr [EBX + -0x4]      ; 0050e458
    MOV ECX,0x20                        ; 0050e45b
    MOV dword ptr [ESP + 0x130],EAX     ; 0050e460
    MOVSD.REP ES:EDI,ESI                ; 0050e467
    MOV ECX,0x20                        ; 0050e469
    LEA ESI,[ESP + 0xb4]                ; 0050e46e
    MOV EDI,EBX                         ; 0050e475
    MOVSD.REP ES:EDI,ESI                ; 0050e477
    MOV EDX,dword ptr [ESP + 0x164]     ; 0050e479
        ;   Label: LAB_0050e479
    MOV ECX,dword ptr [ESP + 0x15c]     ; 0050e480
    MOV ESI,dword ptr [ESP + 0x160]     ; 0050e487
    MOV EDI,dword ptr [ESP + 0x13c]     ; 0050e48e
    ADD EBX,0x80                        ; 0050e495
    ADD EDX,0x4                         ; 0050e49b
    ADD ECX,0x80                        ; 0050e49e
    INC ESI                             ; 0050e4a4
    MOV dword ptr [ESP + 0x164],EDX     ; 0050e4a5
    MOV dword ptr [ESP + 0x15c],ECX     ; 0050e4ac
    MOV dword ptr [ESP + 0x160],ESI     ; 0050e4b3
    CMP ESI,EDI                         ; 0050e4ba
    JL 0x0050e2de                       ; 0050e4bc
        ;   XREF to: 0050e2de (CONDITIONAL_JUMP)  ; LAB_0050e2de
    MOV ESI,dword ptr [ESP + 0x13c]     ; 0050e4c2
        ;   Label: LAB_0050e4c2
    DEC ESI                             ; 0050e4c9
    MOV dword ptr [ESP + 0x13c],ESI     ; 0050e4ca
    TEST ESI,ESI                        ; 0050e4d1
    JGE 0x0050e2a1                      ; 0050e4d3
        ;   XREF to: 0050e2a1 (CONDITIONAL_JUMP)  ; LAB_0050e2a1
    MOV EAX,0x1                         ; 0050e4d9
        ;   Label: LAB_0050e4d9
    ADD ESP,0x168                       ; 0050e4de
    POP EBP                             ; 0050e4e4
    POP EDI                             ; 0050e4e5
    POP ESI                             ; 0050e4e6
    POP EBX                             ; 0050e4e7
    RET                                 ; 0050e4e8
    XOR EAX,EAX                         ; 0050e4e9
        ;   Label: LAB_0050e4e9
    ADD ESP,0x168                       ; 0050e4eb
    POP EBP                             ; 0050e4f1
    POP EDI                             ; 0050e4f2
    POP ESI                             ; 0050e4f3
    POP EBX                             ; 0050e4f4
    RET                                 ; 0050e4f5
    INC EBX                             ; 0050e4f6
        ;   Label: LAB_0050e4f6
    ADD EAX,0x28                        ; 0050e4f7
    CMP EBX,ECX                         ; 0050e4fa
    JL 0x0050e1a8                       ; 0050e4fc
        ;   XREF to: 0050e1a8 (CONDITIONAL_JUMP)  ; LAB_0050e1a8
    JMP 0x0050e1c1                      ; 0050e502
        ;   XREF to: 0050e1c1 (UNCONDITIONAL_JUMP)  ; LAB_0050e1c1
    MOV EAX,dword ptr [ESP + 0x148]     ; 0050e507
        ;   Label: LAB_0050e507
    MOV dword ptr [ESP + EAX*0x1 + 0x134],EBX ; 0050e50e
    IMUL EDX,EBX,0x28                   ; 0050e515
    MOV ECX,dword ptr [ESP + 0x154]     ; 0050e518
    LEA ESI,[ESP + 0x61]                ; 0050e51f
    MOV EDI,dword ptr [ESP + 0x17c]     ; 0050e523
    SHL ECX,0x7                         ; 0050e52a
    MOV EAX,dword ptr [ESP + 0x154]     ; 0050e52d
    MOV EBP,dword ptr [EDI + 0x124]     ; 0050e534
    ADD ESI,EDX                         ; 0050e53a
    CMP EAX,EBP                         ; 0050e53c
    JNZ 0x0050e617                      ; 0050e53e
        ;   XREF to: 0050e617 (CONDITIONAL_JUMP)  ; LAB_0050e617
    PUSH ESI                            ; 0050e544
    MOV EDX,dword ptr [ESP + 0x154]     ; 0050e545
    XOR EAX,EBP                         ; 0050e54c
    PUSH EDX                            ; 0050e54e
    MOV [0x0061b124],EAX                ; 0050e54f | DAT_0061b124
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 0050e554
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 0050e559
    TEST EAX,EAX                        ; 0050e55c
    JZ 0x0050e56a                       ; 0050e55e
        ;   XREF to: 0050e56a (CONDITIONAL_JUMP)  ; LAB_0050e56a
    MOV dword ptr [0x0061b124],0x1      ; 0050e560 | DAT_0061b124
    IMUL EDX,EBX,0x28                   ; 0050e56a
        ;   Label: LAB_0050e56a
    MOV EAX,dword ptr [ESP + 0x14c]     ; 0050e56d
    MOV EAX,dword ptr [EAX + 0x64]      ; 0050e574
    CMP EAX,dword ptr [ESP + EDX*0x1 + 0x85] ; 0050e577
    JZ 0x0050e608                       ; 0050e57e
        ;   XREF to: 0050e608 (CONDITIONAL_JUMP)  ; LAB_0050e608
    MOV dword ptr [0x0061b124],0x1      ; 0050e584 | DAT_0061b124
    MOV EAX,dword ptr [ESP + 0x17c]     ; 0050e58e
        ;   Label: LAB_0050e58e
    PUSH EAX                            ; 0050e595
    CALL core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_0050eb80 ; 0050e596
        ;   XREF to: 0050eb80 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_0050eb80(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 0050e59b
    IMUL EBX,EBX,0x28                   ; 0050e59e
        ;   Label: LAB_0050e59e
    MOV ECX,dword ptr [ESP + 0x150]     ; 0050e5a1
    MOV ESI,dword ptr [ESP + 0x14c]     ; 0050e5a8
    MOV EDI,dword ptr [ESP + 0x154]     ; 0050e5af
    XOR DL,DL                           ; 0050e5b6
    ADD ECX,0x80                        ; 0050e5b8
    ADD ESI,0x80                        ; 0050e5be
    INC EDI                             ; 0050e5c4
    MOV dword ptr [ESP + 0x150],ECX     ; 0050e5c5
    MOV dword ptr [ESP + 0x14c],ESI     ; 0050e5cc
    MOV dword ptr [ESP + 0x154],EDI     ; 0050e5d3
    MOV byte ptr [ESP + EBX*0x1 + 0x61],DL ; 0050e5da
    MOV EDX,dword ptr [ESP + 0x144]     ; 0050e5de
    MOV EBX,dword ptr [ESP + 0x148]     ; 0050e5e5
    ADD EDX,0x80                        ; 0050e5ec
    ADD EBX,0x4                         ; 0050e5f2
    MOV dword ptr [ESP + 0x144],EDX     ; 0050e5f5
    MOV dword ptr [ESP + 0x148],EBX     ; 0050e5fc
    JMP 0x0050e21b                      ; 0050e603
        ;   XREF to: 0050e21b (UNCONDITIONAL_JUMP)  ; LAB_0050e21b
    CMP dword ptr [0x0061b124],0x0      ; 0050e608 | DAT_0061b124
        ;   Label: LAB_0050e608
    JNZ 0x0050e58e                      ; 0050e60f
        ;   XREF to: 0050e58e (CONDITIONAL_JUMP)  ; LAB_0050e58e
    JMP 0x0050e59e                      ; 0050e615
        ;   XREF to: 0050e59e (UNCONDITIONAL_JUMP)  ; LAB_0050e59e
    MOV EDI,dword ptr [ESP + 0x150]     ; 0050e617
        ;   Label: LAB_0050e617
    PUSH EDI                            ; 0050e61e
    MOV AL,byte ptr [ESI]               ; 0050e61f
        ;   Label: LAB_0050e61f
    MOV byte ptr [EDI],AL               ; 0050e621
    CMP AL,0x0                          ; 0050e623
    JZ 0x0050e637                       ; 0050e625
        ;   XREF to: 0050e637 (CONDITIONAL_JUMP)  ; LAB_0050e637
    MOV AL,byte ptr [ESI + 0x1]         ; 0050e627
    ADD ESI,0x2                         ; 0050e62a
    MOV byte ptr [EDI + 0x1],AL         ; 0050e62d
    ADD EDI,0x2                         ; 0050e630
    CMP AL,0x0                          ; 0050e633
    JNZ 0x0050e61f                      ; 0050e635
        ;   XREF to: 0050e61f (CONDITIONAL_JUMP)  ; LAB_0050e61f
    POP EDI                             ; 0050e637
        ;   Label: LAB_0050e637
    MOV EAX,dword ptr [ESP + 0x17c]     ; 0050e638
    ADD EAX,ECX                         ; 0050e63f
    MOV ECX,dword ptr [ESP + EDX*0x1 + 0x85] ; 0050e641
    MOV dword ptr [EAX + 0x64],ECX      ; 0050e648
    MOV ECX,dword ptr [ESP + EDX*0x1 + 0x7d] ; 0050e64b
    MOV dword ptr [EAX + 0x34],ECX      ; 0050e64f
    MOV EDX,dword ptr [ESP + EDX*0x1 + 0x81] ; 0050e652
    MOV dword ptr [EAX + 0x38],EDX      ; 0050e659
    JMP 0x0050e59e                      ; 0050e65c
        ;   XREF to: 0050e59e (UNCONDITIONAL_JUMP)  ; LAB_0050e59e
    MOV EDX,dword ptr [ESP + EBX*0x1 + 0x81] ; 0050e661
        ;   Label: LAB_0050e661
    PUSH EDX                            ; 0050e668
    MOV ECX,dword ptr [ESP + EBX*0x1 + 0x81] ; 0050e669
    LEA EAX,[ESP + 0x65]                ; 0050e670
    PUSH ECX                            ; 0050e674
    ADD EAX,EBX                         ; 0050e675
    PUSH EAX                            ; 0050e677
    ADD EAX,0x14                        ; 0050e678
    PUSH EAX                            ; 0050e67b
    PUSH EDI                            ; 0050e67c
    CALL core_netgame.cpp_CNetGame_addPlayer_FUN_0050ce70 ; 0050e67d
        ;   XREF to: 0050ce70 (UNCONDITIONAL_CALL)  ; int core_netgame.cpp_CNetGame_addPlayer_FUN_0050ce70(CNetGame * this_ptr, SNetworkAddr * addr, char * name, int hero_number, ...)
    MOV EDX,EAX                         ; 0050e682
    SHL EDX,0x7                         ; 0050e684
    ADD ESP,0x14                        ; 0050e687
    ADD EDX,EDI                         ; 0050e68a
    MOV ECX,dword ptr [ESP + EBX*0x1 + 0x85] ; 0050e68c
    MOV dword ptr [EDX + 0x64],ECX      ; 0050e693
    MOV dword ptr [ESP + EAX*0x4 + 0x134],ESI ; 0050e696
    MOV EAX,dword ptr [ESP + 0x5d]      ; 0050e69d
    INC ESI                             ; 0050e6a1
    ADD EBX,0x28                        ; 0050e6a2
    CMP ESI,EAX                         ; 0050e6a5
    JL 0x0050e245                       ; 0050e6a7
        ;   XREF to: 0050e245 (CONDITIONAL_JUMP)  ; LAB_0050e245
    JMP 0x0050e250                      ; 0050e6ad
        ;   XREF to: 0050e250 (UNCONDITIONAL_JUMP)  ; LAB_0050e250

