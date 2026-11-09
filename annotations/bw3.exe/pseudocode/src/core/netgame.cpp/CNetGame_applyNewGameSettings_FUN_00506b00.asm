; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_netgame_cpp_CNetGame_applyNewGameSettings_FUN_00506b00(CNetGame *this_ptr,UNetPacket *packet)
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
;   core_netgame.cpp_FUN_00504d60 at 005054fc
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_005cad11
;   TerminatedCString s_CNetGame_applyNewGameSet_005cad25
;   TerminatedCString s_core_netgame_cpp_005cad71
;   TerminatedCString s_Hell_froze_005cad85
;   undefined4 DAT_00603454
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   core_netgame.cpp_CNetGame_removePlayer_FUN_005071a0
;   core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_00507660
;   core_netgame.cpp_FUN_00505950
;   core_netgame.cpp_IpAddr_copy_FUN_005084a0
;   crt_string.c__strcmp_FUN_005a3d00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00506b00
        ;   Label: core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_00506b00
    PUSH ESI                            ; 00506b01
    PUSH EDI                            ; 00506b02
    PUSH EBP                            ; 00506b03
    SUB ESP,0x168                       ; 00506b04
    MOV ESI,dword ptr [ESP + 0x180]     ; 00506b0a
    MOV EAX,dword ptr [ESP + 0x17c]     ; 00506b11
    CMP dword ptr [EAX],0x2             ; 00506b18
    JNZ 0x00506b23                      ; 00506b1b
        ;   XREF to: 00506b23 (CONDITIONAL_JUMP)  ; LAB_00506b23
    CMP dword ptr [EAX + 0x4],0x1       ; 00506b1d
    JZ 0x00506b46                       ; 00506b21
        ;   XREF to: 00506b46 (CONDITIONAL_JUMP)  ; LAB_00506b46
    MOV EBX,0x5cad11                    ; 00506b23 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_00506b23
    MOV EDI,0x7e6                       ; 00506b28
    PUSH 0x5cad25                       ; 00506b2d | = "CNetGame::applyNewGameSettings - shou..."
    MOV dword ptr [0x01d71de0],EBX      ; 00506b32 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 00506b38 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00506b3e
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00506b43
    MOV ECX,0x2c                        ; 00506b46
        ;   Label: LAB_00506b46
    MOV EDI,ESP                         ; 00506b4b
    MOVSD.REP ES:EDI,ESI                ; 00506b4d
    MOVSB ES:EDI,ESI                    ; 00506b4f
    MOV EDX,dword ptr [ESP + 0x17c]     ; 00506b50
    MOV EAX,dword ptr [ESP + 0x9]       ; 00506b57
    MOV EBP,0xffffffff                  ; 00506b5b
    MOV dword ptr [EDX + 0x17c],EAX     ; 00506b60
    MOV dword ptr [ESP + 0x140],EBP     ; 00506b66
    MOV EAX,dword ptr [ESP + 0x5d]      ; 00506b6d
    XOR EDI,EDI                         ; 00506b71
    TEST EAX,EAX                        ; 00506b73
    JLE 0x00506be0                      ; 00506b75
        ;   XREF to: 00506be0 (CONDITIONAL_JUMP)  ; LAB_00506be0
    MOV EAX,dword ptr [ESP + 0x17c]     ; 00506b77
    MOV ECX,dword ptr [ESP + 0x17c]     ; 00506b7e
    MOV EDX,dword ptr [EDX + 0x120]     ; 00506b85
    ADD EAX,0x20                        ; 00506b8b
    SHL EDX,0x7                         ; 00506b8e
    MOV ECX,dword ptr [ECX + 0x124]     ; 00506b91
    ADD EDX,EAX                         ; 00506b97
    SHL ECX,0x7                         ; 00506b99
    ADD EDX,0x1c                        ; 00506b9c
    ADD EAX,ECX                         ; 00506b9f
    LEA ECX,[ESP + 0x61]                ; 00506ba1
    ADD EAX,0x1c                        ; 00506ba5
    LEA ESI,[ECX + 0x14]                ; 00506ba8
    MOV CX,word ptr [ESI + 0x4]         ; 00506bab
        ;   Label: LAB_00506bab
    CMP CX,word ptr [EAX + 0x4]         ; 00506baf
    JNZ 0x00506bbd                      ; 00506bb3
        ;   XREF to: 00506bbd (CONDITIONAL_JUMP)  ; LAB_00506bbd
    MOV EBX,dword ptr [EAX]             ; 00506bb5
    CMP EBX,dword ptr [ESI]             ; 00506bb7
    JNZ 0x00506bbd                      ; 00506bb9
        ;   XREF to: 00506bbd (CONDITIONAL_JUMP)  ; LAB_00506bbd
    MOV EBP,EDI                         ; 00506bbb
    MOV CX,word ptr [ESI + 0x4]         ; 00506bbd
        ;   Label: LAB_00506bbd
    CMP CX,word ptr [EDX + 0x4]         ; 00506bc1
    JNZ 0x00506bd4                      ; 00506bc5
        ;   XREF to: 00506bd4 (CONDITIONAL_JUMP)  ; LAB_00506bd4
    MOV EBX,dword ptr [EDX]             ; 00506bc7
    CMP EBX,dword ptr [ESI]             ; 00506bc9
    JNZ 0x00506bd4                      ; 00506bcb
        ;   XREF to: 00506bd4 (CONDITIONAL_JUMP)  ; LAB_00506bd4
    MOV dword ptr [ESP + 0x140],EDI     ; 00506bcd
    MOV ECX,dword ptr [ESP + 0x5d]      ; 00506bd4
        ;   Label: LAB_00506bd4
    INC EDI                             ; 00506bd8
    ADD ESI,0x28                        ; 00506bd9
    CMP EDI,ECX                         ; 00506bdc
    JL 0x00506bab                       ; 00506bde
        ;   XREF to: 00506bab (CONDITIONAL_JUMP)  ; LAB_00506bab
    CMP dword ptr [ESP + 0x140],0x0     ; 00506be0
        ;   Label: LAB_00506be0
    JL 0x00506fc9                       ; 00506be8
        ;   XREF to: 00506fc9 (CONDITIONAL_JUMP)  ; LAB_00506fc9
    TEST EBP,EBP                        ; 00506bee
    JL 0x00506fc9                       ; 00506bf0
        ;   XREF to: 00506fc9 (CONDITIONAL_JUMP)  ; LAB_00506fc9
    MOV EDI,dword ptr [ESP + 0x17c]     ; 00506bf6
    LEA ESI,[ESP + 0xd]                 ; 00506bfd
    ADD EDI,0x128                       ; 00506c01
    PUSH EDI                            ; 00506c07
    MOV AL,byte ptr [ESI]               ; 00506c08
        ;   Label: LAB_00506c08
    MOV byte ptr [EDI],AL               ; 00506c0a
    CMP AL,0x0                          ; 00506c0c
    JZ 0x00506c20                       ; 00506c0e
        ;   XREF to: 00506c20 (CONDITIONAL_JUMP)  ; LAB_00506c20
    MOV AL,byte ptr [ESI + 0x1]         ; 00506c10
    ADD ESI,0x2                         ; 00506c13
    MOV byte ptr [EDI + 0x1],AL         ; 00506c16
    ADD EDI,0x2                         ; 00506c19
    CMP AL,0x0                          ; 00506c1c
    JNZ 0x00506c08                      ; 00506c1e
        ;   XREF to: 00506c08 (CONDITIONAL_JUMP)  ; LAB_00506c08
    POP EDI                             ; 00506c20
        ;   Label: LAB_00506c20
    MOV EAX,dword ptr [ESP + 0x17c]     ; 00506c21
    XOR ESI,ESI                         ; 00506c28
    MOV EDI,dword ptr [EAX + 0x1c]      ; 00506c2a
    MOV dword ptr [ESP + 0x154],ESI     ; 00506c2d
    TEST EDI,EDI                        ; 00506c34
    JLE 0x00506d12                      ; 00506c36
        ;   XREF to: 00506d12 (CONDITIONAL_JUMP)  ; LAB_00506d12
    MOV EDX,dword ptr [ESP + 0x17c]     ; 00506c3c
    ADD EAX,0x20                        ; 00506c43
    MOV dword ptr [ESP + 0x148],ESI     ; 00506c46
    ADD EDX,0x3c                        ; 00506c4d
    MOV dword ptr [ESP + 0x150],EAX     ; 00506c50
    MOV EAX,dword ptr [ESP + 0x17c]     ; 00506c57
    MOV dword ptr [ESP + 0x144],EDX     ; 00506c5e
    MOV dword ptr [ESP + 0x14c],EAX     ; 00506c65
    MOV EAX,dword ptr [ESP + 0x5d]      ; 00506c6c
        ;   Label: LAB_00506c6c
    XOR EBX,EBX                         ; 00506c70
    TEST EAX,EAX                        ; 00506c72
    JLE 0x00506ca1                      ; 00506c74
        ;   XREF to: 00506ca1 (CONDITIONAL_JUMP)  ; LAB_00506ca1
    LEA EAX,[ESP + 0x61]                ; 00506c76
    MOV ECX,dword ptr [ESP + 0x5d]      ; 00506c7a
    MOV EBP,dword ptr [ESP + 0x144]     ; 00506c7e
    ADD EAX,0x14                        ; 00506c85
    MOV SI,word ptr [EAX + 0x4]         ; 00506c88
        ;   Label: LAB_00506c88
    CMP SI,word ptr [EBP + 0x4]         ; 00506c8c
    JNZ 0x00506fd6                      ; 00506c90
        ;   XREF to: 00506fd6 (CONDITIONAL_JUMP)  ; LAB_00506fd6
    MOV ESI,dword ptr [EBP]             ; 00506c96
    CMP ESI,dword ptr [EAX]             ; 00506c99
    JNZ 0x00506fd6                      ; 00506c9b
        ;   XREF to: 00506fd6 (CONDITIONAL_JUMP)  ; LAB_00506fd6
    CMP EBX,dword ptr [ESP + 0x5d]      ; 00506ca1
        ;   Label: LAB_00506ca1
    JNZ 0x00506fe7                      ; 00506ca5
        ;   XREF to: 00506fe7 (CONDITIONAL_JUMP)  ; LAB_00506fe7
    MOV EDX,dword ptr [ESP + 0x17c]     ; 00506cab
    MOV EAX,dword ptr [ESP + 0x154]     ; 00506cb2
    CMP EAX,dword ptr [EDX + 0x124]     ; 00506cb9
    JNZ 0x00506ce3                      ; 00506cbf
        ;   XREF to: 00506ce3 (CONDITIONAL_JUMP)  ; LAB_00506ce3
    MOV EAX,0x5cad71                    ; 00506cc1 | = "..\\core\\netgame.cpp"
    MOV EDX,0x811                       ; 00506cc6
    PUSH 0x5cad85                       ; 00506ccb | = "Hell froze"
    MOV [0x01d71de0],EAX                ; 00506cd0 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 00506cd5 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00506cdb
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00506ce0
    MOV ECX,dword ptr [ESP + 0x154]     ; 00506ce3
        ;   Label: LAB_00506ce3
    PUSH ECX                            ; 00506cea
    MOV EBX,dword ptr [ESP + 0x180]     ; 00506ceb
    PUSH EBX                            ; 00506cf2
    CALL core_netgame.cpp_CNetGame_removePlayer_FUN_005071a0 ; 00506cf3
        ;   XREF to: 005071a0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_removePlayer_FUN_005071a0(CNetGame * this_ptr, int player_index)
    ADD ESP,0x8                         ; 00506cf8
    MOV EDX,dword ptr [ESP + 0x17c]     ; 00506cfb
        ;   Label: LAB_00506cfb
    MOV EAX,dword ptr [ESP + 0x154]     ; 00506d02
    CMP EAX,dword ptr [EDX + 0x1c]      ; 00506d09
    JL 0x00506c6c                       ; 00506d0c
        ;   XREF to: 00506c6c (CONDITIONAL_JUMP)  ; LAB_00506c6c
    MOV EDI,dword ptr [ESP + 0x5d]      ; 00506d12
        ;   Label: LAB_00506d12
    XOR ESI,ESI                         ; 00506d16
    TEST EDI,EDI                        ; 00506d18
    JLE 0x00506d30                      ; 00506d1a
        ;   XREF to: 00506d30 (CONDITIONAL_JUMP)  ; LAB_00506d30
    MOV EDI,dword ptr [ESP + 0x17c]     ; 00506d1c
    XOR EBX,EBX                         ; 00506d23
    CMP byte ptr [ESP + EBX*0x1 + 0x61],0x0 ; 00506d25
        ;   Label: LAB_00506d25
    JNZ 0x00507141                      ; 00506d2a
        ;   XREF to: 00507141 (CONDITIONAL_JUMP)  ; LAB_00507141
    MOV EAX,dword ptr [ESP + 0x17c]     ; 00506d30
        ;   Label: LAB_00506d30
    MOV EAX,dword ptr [EAX + 0x120]     ; 00506d37
    MOV EDX,dword ptr [ESP + 0x17c]     ; 00506d3d
    MOV EAX,dword ptr [ESP + EAX*0x4 + 0x134] ; 00506d44
    MOV dword ptr [EDX + 0x120],EAX     ; 00506d4b
    MOV EAX,dword ptr [EDX + 0x124]     ; 00506d51
    MOV EAX,dword ptr [ESP + EAX*0x4 + 0x134] ; 00506d57
    MOV dword ptr [EDX + 0x124],EAX     ; 00506d5e
    MOV EAX,dword ptr [EDX + 0x1c]      ; 00506d64
    DEC EAX                             ; 00506d67
    MOV dword ptr [ESP + 0x13c],EAX     ; 00506d68
    TEST EAX,EAX                        ; 00506d6f
    JL 0x00506fb9                       ; 00506d71
        ;   XREF to: 00506fb9 (CONDITIONAL_JUMP)  ; LAB_00506fb9
    LEA EAX,[EDX + 0x20]                ; 00506d77
    MOV dword ptr [ESP + 0x158],EAX     ; 00506d7a
    XOR EBP,EBP                         ; 00506d81
        ;   Label: LAB_00506d81
    MOV EAX,dword ptr [ESP + 0x13c]     ; 00506d83
    MOV dword ptr [ESP + 0x160],EBP     ; 00506d8a
    TEST EAX,EAX                        ; 00506d91
    JLE 0x00506fa2                      ; 00506d93
        ;   XREF to: 00506fa2 (CONDITIONAL_JUMP)  ; LAB_00506fa2
    MOV EAX,dword ptr [ESP + 0x158]     ; 00506d99
    MOV EBX,dword ptr [ESP + 0x158]     ; 00506da0
    MOV dword ptr [ESP + 0x164],EBP     ; 00506da7
    ADD EAX,0x1c                        ; 00506dae
    ADD EBX,0x80                        ; 00506db1
    MOV dword ptr [ESP + 0x15c],EAX     ; 00506db7
    MOV EDX,dword ptr [ESP + 0x164]     ; 00506dbe
        ;   Label: LAB_00506dbe
    MOV EAX,dword ptr [ESP + 0x164]     ; 00506dc5
    MOV ECX,dword ptr [ESP + EDX*0x1 + 0x138] ; 00506dcc
    CMP ECX,dword ptr [ESP + EAX*0x1 + 0x134] ; 00506dd3
    JGE 0x00506f59                      ; 00506dda
        ;   XREF to: 00506f59 (CONDITIONAL_JUMP)  ; LAB_00506f59
    LEA EAX,[ESP + 0x134]               ; 00506de0
    LEA EBP,[EDX + 0x4]                 ; 00506de7
    ADD EBP,EAX                         ; 00506dea
    ADD EAX,EDX                         ; 00506dec
    MOV ECX,dword ptr [EBP]             ; 00506dee
    MOV EDX,dword ptr [EAX]             ; 00506df1
    MOV dword ptr [EAX],ECX             ; 00506df3
    MOV dword ptr [EBP],EDX             ; 00506df5
    MOV EBP,dword ptr [ESP + 0x160]     ; 00506df8
    MOV EDI,dword ptr [ESP + 0x158]     ; 00506dff
    SHL EBP,0x7                         ; 00506e06
    ADD EBP,EDI                         ; 00506e09
    LEA EDI,[ESP + 0xb4]                ; 00506e0b
    MOV ESI,EBP                         ; 00506e12
    MOVSD ES:EDI,ESI                    ; 00506e14
    MOVSD ES:EDI,ESI                    ; 00506e15
    MOVSD ES:EDI,ESI                    ; 00506e16
    MOVSD ES:EDI,ESI                    ; 00506e17
    MOVSD ES:EDI,ESI                    ; 00506e18
    MOV EAX,dword ptr [EBP + 0x14]      ; 00506e19
    MOV dword ptr [ESP + 0xc8],EAX      ; 00506e1c
    MOV EAX,dword ptr [EBP + 0x18]      ; 00506e23
    MOV dword ptr [ESP + 0xcc],EAX      ; 00506e26
    MOV EAX,dword ptr [ESP + 0x15c]     ; 00506e2d
    PUSH EAX                            ; 00506e34
    LEA EAX,[ESP + 0xd4]                ; 00506e35
    PUSH EAX                            ; 00506e3c
    CALL core_netgame.cpp_IpAddr_copy_FUN_005084a0 ; 00506e3d
        ;   XREF to: 005084a0 (UNCONDITIONAL_CALL)  ; SIpAddr * core_netgame.cpp_IpAddr_copy_FUN_005084a0(SIpAddr * this_ptr, SIpAddr * other)
    ADD ESP,0x8                         ; 00506e42
    MOV EAX,dword ptr [ESP + 0x15c]     ; 00506e45
    MOV AX,word ptr [EAX + 0x4]         ; 00506e4c
    MOV word ptr [ESP + 0xd4],AX        ; 00506e50
    MOV EAX,dword ptr [EBP + 0x24]      ; 00506e58
    MOV dword ptr [ESP + 0xd8],EAX      ; 00506e5b
    MOV EAX,dword ptr [EBP + 0x28]      ; 00506e62
    MOV dword ptr [ESP + 0xdc],EAX      ; 00506e65
    MOV EAX,dword ptr [EBP + 0x2c]      ; 00506e6c
    MOV dword ptr [ESP + 0xe0],EAX      ; 00506e6f
    MOV EAX,dword ptr [EBP + 0x30]      ; 00506e76
    MOV dword ptr [ESP + 0xe4],EAX      ; 00506e79
    MOV EAX,dword ptr [EBP + 0x34]      ; 00506e80
    MOV dword ptr [ESP + 0xe8],EAX      ; 00506e83
    MOV EAX,dword ptr [EBP + 0x38]      ; 00506e8a
    MOV dword ptr [ESP + 0xec],EAX      ; 00506e8d
    MOV EAX,dword ptr [EBP + 0x3c]      ; 00506e94
    MOV dword ptr [ESP + 0xf0],EAX      ; 00506e97
    MOV EAX,dword ptr [EBP + 0x40]      ; 00506e9e
    MOV dword ptr [ESP + 0xf4],EAX      ; 00506ea1
    MOV EAX,dword ptr [EBP + 0x44]      ; 00506ea8
    MOV dword ptr [ESP + 0xf8],EAX      ; 00506eab
    MOV EAX,dword ptr [EBP + 0x48]      ; 00506eb2
    MOV dword ptr [ESP + 0xfc],EAX      ; 00506eb5
    MOV EAX,dword ptr [EBX + -0x34]     ; 00506ebc
    MOV dword ptr [ESP + 0x100],EAX     ; 00506ebf
    MOV EAX,dword ptr [EBX + -0x30]     ; 00506ec6
    MOV dword ptr [ESP + 0x104],EAX     ; 00506ec9
    MOV EAX,dword ptr [EBX + -0x2c]     ; 00506ed0
    MOV dword ptr [ESP + 0x108],EAX     ; 00506ed3
    MOV EAX,dword ptr [EBX + -0x28]     ; 00506eda
    MOV dword ptr [ESP + 0x10c],EAX     ; 00506edd
    MOV EAX,dword ptr [EBX + -0x24]     ; 00506ee4
    MOV dword ptr [ESP + 0x110],EAX     ; 00506ee7
    MOV EAX,dword ptr [EBX + -0x20]     ; 00506eee
    MOV dword ptr [ESP + 0x114],EAX     ; 00506ef1
    MOV EAX,dword ptr [EBX + -0x1c]     ; 00506ef8
    MOV dword ptr [ESP + 0x118],EAX     ; 00506efb
    MOV EAX,dword ptr [EBX + -0x18]     ; 00506f02
    MOV dword ptr [ESP + 0x11c],EAX     ; 00506f05
    MOV EAX,dword ptr [EBX + -0x14]     ; 00506f0c
    MOV dword ptr [ESP + 0x120],EAX     ; 00506f0f
    MOV EAX,dword ptr [EBX + -0x10]     ; 00506f16
    MOV dword ptr [ESP + 0x124],EAX     ; 00506f19
    MOV EAX,dword ptr [EBX + -0xc]      ; 00506f20
    MOV dword ptr [ESP + 0x128],EAX     ; 00506f23
    MOV EAX,dword ptr [EBX + -0x8]      ; 00506f2a
    MOV EDI,EBP                         ; 00506f2d
    MOV dword ptr [ESP + 0x12c],EAX     ; 00506f2f
    MOV ESI,EBX                         ; 00506f36
    MOV EAX,dword ptr [EBX + -0x4]      ; 00506f38
    MOV ECX,0x20                        ; 00506f3b
    MOV dword ptr [ESP + 0x130],EAX     ; 00506f40
    MOVSD.REP ES:EDI,ESI                ; 00506f47
    MOV ECX,0x20                        ; 00506f49
    LEA ESI,[ESP + 0xb4]                ; 00506f4e
    MOV EDI,EBX                         ; 00506f55
    MOVSD.REP ES:EDI,ESI                ; 00506f57
    MOV EDX,dword ptr [ESP + 0x164]     ; 00506f59
        ;   Label: LAB_00506f59
    MOV ECX,dword ptr [ESP + 0x15c]     ; 00506f60
    MOV ESI,dword ptr [ESP + 0x160]     ; 00506f67
    MOV EDI,dword ptr [ESP + 0x13c]     ; 00506f6e
    ADD EBX,0x80                        ; 00506f75
    ADD EDX,0x4                         ; 00506f7b
    ADD ECX,0x80                        ; 00506f7e
    INC ESI                             ; 00506f84
    MOV dword ptr [ESP + 0x164],EDX     ; 00506f85
    MOV dword ptr [ESP + 0x15c],ECX     ; 00506f8c
    MOV dword ptr [ESP + 0x160],ESI     ; 00506f93
    CMP ESI,EDI                         ; 00506f9a
    JL 0x00506dbe                       ; 00506f9c
        ;   XREF to: 00506dbe (CONDITIONAL_JUMP)  ; LAB_00506dbe
    MOV ESI,dword ptr [ESP + 0x13c]     ; 00506fa2
        ;   Label: LAB_00506fa2
    DEC ESI                             ; 00506fa9
    MOV dword ptr [ESP + 0x13c],ESI     ; 00506faa
    TEST ESI,ESI                        ; 00506fb1
    JGE 0x00506d81                      ; 00506fb3
        ;   XREF to: 00506d81 (CONDITIONAL_JUMP)  ; LAB_00506d81
    MOV EAX,0x1                         ; 00506fb9
        ;   Label: LAB_00506fb9
    ADD ESP,0x168                       ; 00506fbe
    POP EBP                             ; 00506fc4
    POP EDI                             ; 00506fc5
    POP ESI                             ; 00506fc6
    POP EBX                             ; 00506fc7
    RET                                 ; 00506fc8
    XOR EAX,EAX                         ; 00506fc9
        ;   Label: LAB_00506fc9
    ADD ESP,0x168                       ; 00506fcb
    POP EBP                             ; 00506fd1
    POP EDI                             ; 00506fd2
    POP ESI                             ; 00506fd3
    POP EBX                             ; 00506fd4
    RET                                 ; 00506fd5
    INC EBX                             ; 00506fd6
        ;   Label: LAB_00506fd6
    ADD EAX,0x28                        ; 00506fd7
    CMP EBX,ECX                         ; 00506fda
    JL 0x00506c88                       ; 00506fdc
        ;   XREF to: 00506c88 (CONDITIONAL_JUMP)  ; LAB_00506c88
    JMP 0x00506ca1                      ; 00506fe2
        ;   XREF to: 00506ca1 (UNCONDITIONAL_JUMP)  ; LAB_00506ca1
    MOV EAX,dword ptr [ESP + 0x148]     ; 00506fe7
        ;   Label: LAB_00506fe7
    MOV dword ptr [ESP + EAX*0x1 + 0x134],EBX ; 00506fee
    IMUL EDX,EBX,0x28                   ; 00506ff5
    MOV ECX,dword ptr [ESP + 0x154]     ; 00506ff8
    LEA ESI,[ESP + 0x61]                ; 00506fff
    MOV EDI,dword ptr [ESP + 0x17c]     ; 00507003
    SHL ECX,0x7                         ; 0050700a
    MOV EAX,dword ptr [ESP + 0x154]     ; 0050700d
    MOV EBP,dword ptr [EDI + 0x124]     ; 00507014
    ADD ESI,EDX                         ; 0050701a
    CMP EAX,EBP                         ; 0050701c
    JNZ 0x005070f7                      ; 0050701e
        ;   XREF to: 005070f7 (CONDITIONAL_JUMP)  ; LAB_005070f7
    PUSH ESI                            ; 00507024
    MOV EDX,dword ptr [ESP + 0x154]     ; 00507025
    XOR EAX,EBP                         ; 0050702c
    PUSH EDX                            ; 0050702e
    MOV [0x00603454],EAX                ; 0050702f | DAT_00603454
    CALL crt_string.c__strcmp_FUN_005a3d00 ; 00507034
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005a3d00(char * str1, char * str2)
    ADD ESP,0x8                         ; 00507039
    TEST EAX,EAX                        ; 0050703c
    JZ 0x0050704a                       ; 0050703e
        ;   XREF to: 0050704a (CONDITIONAL_JUMP)  ; LAB_0050704a
    MOV dword ptr [0x00603454],0x1      ; 00507040 | DAT_00603454
    IMUL EDX,EBX,0x28                   ; 0050704a
        ;   Label: LAB_0050704a
    MOV EAX,dword ptr [ESP + 0x14c]     ; 0050704d
    MOV EAX,dword ptr [EAX + 0x64]      ; 00507054
    CMP EAX,dword ptr [ESP + EDX*0x1 + 0x85] ; 00507057
    JZ 0x005070e8                       ; 0050705e
        ;   XREF to: 005070e8 (CONDITIONAL_JUMP)  ; LAB_005070e8
    MOV dword ptr [0x00603454],0x1      ; 00507064 | DAT_00603454
    MOV EAX,dword ptr [ESP + 0x17c]     ; 0050706e
        ;   Label: LAB_0050706e
    PUSH EAX                            ; 00507075
    CALL core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_00507660 ; 00507076
        ;   XREF to: 00507660 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_00507660(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 0050707b
    IMUL EBX,EBX,0x28                   ; 0050707e
        ;   Label: LAB_0050707e
    MOV ECX,dword ptr [ESP + 0x150]     ; 00507081
    MOV ESI,dword ptr [ESP + 0x14c]     ; 00507088
    MOV EDI,dword ptr [ESP + 0x154]     ; 0050708f
    XOR DL,DL                           ; 00507096
    ADD ECX,0x80                        ; 00507098
    ADD ESI,0x80                        ; 0050709e
    INC EDI                             ; 005070a4
    MOV dword ptr [ESP + 0x150],ECX     ; 005070a5
    MOV dword ptr [ESP + 0x14c],ESI     ; 005070ac
    MOV dword ptr [ESP + 0x154],EDI     ; 005070b3
    MOV byte ptr [ESP + EBX*0x1 + 0x61],DL ; 005070ba
    MOV EDX,dword ptr [ESP + 0x144]     ; 005070be
    MOV EBX,dword ptr [ESP + 0x148]     ; 005070c5
    ADD EDX,0x80                        ; 005070cc
    ADD EBX,0x4                         ; 005070d2
    MOV dword ptr [ESP + 0x144],EDX     ; 005070d5
    MOV dword ptr [ESP + 0x148],EBX     ; 005070dc
    JMP 0x00506cfb                      ; 005070e3
        ;   XREF to: 00506cfb (UNCONDITIONAL_JUMP)  ; LAB_00506cfb
    CMP dword ptr [0x00603454],0x0      ; 005070e8 | DAT_00603454
        ;   Label: LAB_005070e8
    JNZ 0x0050706e                      ; 005070ef
        ;   XREF to: 0050706e (CONDITIONAL_JUMP)  ; LAB_0050706e
    JMP 0x0050707e                      ; 005070f5
        ;   XREF to: 0050707e (UNCONDITIONAL_JUMP)  ; LAB_0050707e
    MOV EDI,dword ptr [ESP + 0x150]     ; 005070f7
        ;   Label: LAB_005070f7
    PUSH EDI                            ; 005070fe
    MOV AL,byte ptr [ESI]               ; 005070ff
        ;   Label: LAB_005070ff
    MOV byte ptr [EDI],AL               ; 00507101
    CMP AL,0x0                          ; 00507103
    JZ 0x00507117                       ; 00507105
        ;   XREF to: 00507117 (CONDITIONAL_JUMP)  ; LAB_00507117
    MOV AL,byte ptr [ESI + 0x1]         ; 00507107
    ADD ESI,0x2                         ; 0050710a
    MOV byte ptr [EDI + 0x1],AL         ; 0050710d
    ADD EDI,0x2                         ; 00507110
    CMP AL,0x0                          ; 00507113
    JNZ 0x005070ff                      ; 00507115
        ;   XREF to: 005070ff (CONDITIONAL_JUMP)  ; LAB_005070ff
    POP EDI                             ; 00507117
        ;   Label: LAB_00507117
    MOV EAX,dword ptr [ESP + 0x17c]     ; 00507118
    ADD EAX,ECX                         ; 0050711f
    MOV ECX,dword ptr [ESP + EDX*0x1 + 0x85] ; 00507121
    MOV dword ptr [EAX + 0x64],ECX      ; 00507128
    MOV ECX,dword ptr [ESP + EDX*0x1 + 0x7d] ; 0050712b
    MOV dword ptr [EAX + 0x34],ECX      ; 0050712f
    MOV EDX,dword ptr [ESP + EDX*0x1 + 0x81] ; 00507132
    MOV dword ptr [EAX + 0x38],EDX      ; 00507139
    JMP 0x0050707e                      ; 0050713c
        ;   XREF to: 0050707e (UNCONDITIONAL_JUMP)  ; LAB_0050707e
    MOV EDX,dword ptr [ESP + EBX*0x1 + 0x81] ; 00507141
        ;   Label: LAB_00507141
    PUSH EDX                            ; 00507148
    MOV ECX,dword ptr [ESP + EBX*0x1 + 0x81] ; 00507149
    LEA EAX,[ESP + 0x65]                ; 00507150
    PUSH ECX                            ; 00507154
    ADD EAX,EBX                         ; 00507155
    PUSH EAX                            ; 00507157
    ADD EAX,0x14                        ; 00507158
    PUSH EAX                            ; 0050715b
    PUSH EDI                            ; 0050715c
    CALL core_netgame.cpp_FUN_00505950  ; 0050715d
        ;   XREF to: 00505950 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_FUN_00505950()
    MOV EDX,EAX                         ; 00507162
    SHL EDX,0x7                         ; 00507164
    ADD ESP,0x14                        ; 00507167
    ADD EDX,EDI                         ; 0050716a
    MOV ECX,dword ptr [ESP + EBX*0x1 + 0x85] ; 0050716c
    MOV dword ptr [EDX + 0x64],ECX      ; 00507173
    MOV dword ptr [ESP + EAX*0x4 + 0x134],ESI ; 00507176
    MOV EAX,dword ptr [ESP + 0x5d]      ; 0050717d
    INC ESI                             ; 00507181
    ADD EBX,0x28                        ; 00507182
    CMP ESI,EAX                         ; 00507185
    JL 0x00506d25                       ; 00507187
        ;   XREF to: 00506d25 (CONDITIONAL_JUMP)  ; LAB_00506d25
    JMP 0x00506d30                      ; 0050718d
        ;   XREF to: 00506d30 (UNCONDITIONAL_JUMP)  ; LAB_00506d30

