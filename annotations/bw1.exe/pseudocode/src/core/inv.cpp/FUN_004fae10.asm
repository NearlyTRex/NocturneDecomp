; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_inv_cpp_FUN_004fae10(int param_1)
;
; Local Variables:
; undefined8       Stack[-0x8f8]:8  local_8f8
; undefined8       Stack[-0x8f0]:8  local_8f0
; undefined4       Stack[-0x8e8]:4  local_8e8
; undefined4       Stack[-0x8e4]:4  local_8e4
; undefined        Stack[-0x8e0]:1  local_8e0
; undefined        Stack[-0x7e0]:1  local_7e0
; undefined        Stack[-0x6e0]:1  local_6e0
; undefined        Stack[-0x5e0]:1  local_5e0
; undefined        Stack[-0x4e0]:1  local_4e0
; undefined        Stack[-0x3e0]:1  local_3e0
; undefined        Stack[-0x2e0]:1  local_2e0
; undefined1       Stack[-0x2df]:1  local_2df
; undefined        Stack[-0x1e0]:1  local_1e0
; undefined4       Stack[-0x1dc]:4  local_1dc
; undefined4       Stack[-0x1c8]:4  local_1c8
; undefined4       Stack[-0x1c4]:4  local_1c4
; undefined4       Stack[-0x1c0]:4  local_1c0
; undefined4       Stack[-0x1bc]:4  local_1bc
; undefined4       Stack[-0x1b8]:4  local_1b8
; undefined4       Stack[-0x1b4]:4  local_1b4
; undefined4       Stack[-0x1b0]:4  local_1b0
; undefined4       Stack[-0x1ac]:4  local_1ac
; undefined4       Stack[-0x1a8]:4  local_1a8
; undefined4       Stack[-0x1a4]:4  local_1a4
; undefined4       Stack[-0x1a0]:4  local_1a0
; undefined4       Stack[-0x19c]:4  local_19c
; undefined        Stack[-0x198]:1  local_198
; undefined        Stack[-0x170]:1  local_170
; undefined4       Stack[-0x164]:4  local_164
; undefined4       Stack[-0x160]:4  local_160
; undefined4       Stack[-0x15c]:4  local_15c
; undefined        Stack[-0x158]:1  local_158
; undefined4       Stack[-0x14c]:4  local_14c
; undefined4       Stack[-0x148]:4  local_148
; undefined4       Stack[-0x144]:4  local_144
; undefined        Stack[-0x140]:1  local_140
; undefined        Stack[-0x134]:1  local_134
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined        Stack[-0x11c]:1  local_11c
; undefined        Stack[-0x110]:1  local_110
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined        Stack[-0xec]:1  local_ec
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined        Stack[-0xd4]:1  local_d4
; undefined        Stack[-0xc8]:1  local_c8
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined        Stack[-0xa4]:1  local_a4
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
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
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
;   core_game.cpp_FUN_004ce580 at 004ce969
;
; Referenced Globals:
;   undefined4 DAT_005e6894
;   undefined4 DAT_005e6899
;   TerminatedCString s_CTommyGun_005e689e
;   TerminatedCString s_CShotgun_005e68a8
;   TerminatedCString s_CElephantGun_005e68b1
;   undefined4 DAT_005e68be
;   TerminatedCString s_CFlashlight_005e68c3
;   undefined4 DAT_005e68cf
;   TerminatedCString s_s_d_005e68d2
;   TerminatedCString s_s_s_005e68d8
;   TerminatedCString s_s_s_s_005e68df
;   TerminatedCString s_are_loaded_005e68e9
;   TerminatedCString s_s_s_005e68f6
;   TerminatedCString s_d_x_3_0f_005e68fd
;   undefined4 DAT_005e6909
;   ... and 32 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_getRandomInt_FUN_0040cc60
;   core_actor.cpp_isOfClass_FUN_0040c550
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
;   core_dirmat.cpp_FUN_0045f690
;   core_inv.cpp_FUN_004f63c0
;   core_inv.cpp_FUN_004f70e0
;   core_inv.cpp_FUN_004fa540
;   core_inv.cpp_getItemDescription_FUN_004f6350
;   core_inv.cpp_getItemDisplayName_FUN_004f62e0
;   crt_math.c_round_FUN_005c03a0
;   crt_unknown.c_sprintf_FUN_005bfb40
;   engine_3d.c_setRenderAlpha_FUN_00406bd0
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0
;   engine_alphabit.cpp_FUN_0040d660
;   ... and 12 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fae10
        ;   Label: core_inv.cpp_FUN_004fae10
    PUSH ESI                            ; 004fae11
    PUSH EDI                            ; 004fae12
    PUSH EBP                            ; 004fae13
    MOV EBP,ESP                         ; 004fae14
    SUB ESP,0x8e0                       ; 004fae16
    AND ESP,0xfffffff8                  ; 004fae1c
    MOV EAX,[0x0061d95c]                ; 004fae1f | g_CGamePtr | g_CGameInstance
    CMP dword ptr [EAX + 0x244],0x0     ; 004fae24 | g_CGameInstance.letterbox_mode
    JNZ 0x004fbdf0                      ; 004fae2b
        ;   XREF to: 004fbdf0 (CONDITIONAL_JUMP)  ; LAB_004fbdf0
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fae31
    MOV EDX,dword ptr [0x01d06ab4]      ; 004fae34 | DAT_01d06ab4
    MOV EAX,dword ptr [EAX + 0x4]       ; 004fae3a
    CMP EAX,dword ptr [EDX*0x4 + 0x1d06aa4] ; 004fae3d
    JNZ 0x004fbdf0                      ; 004fae44
        ;   XREF to: 004fbdf0 (CONDITIONAL_JUMP)  ; LAB_004fbdf0
    MOV EAX,[0x0061d418]                ; 004fae4a | g_CFieldNotesPtr
    CMP dword ptr [EAX + 0x40],0x0      ; 004fae4f | g_CFieldNotesInstance.is_displayed
    JNZ 0x004fbdf7                      ; 004fae53
        ;   XREF to: 004fbdf7 (CONDITIONAL_JUMP)  ; LAB_004fbdf7
    MOV ESI,dword ptr [0x0061b49c]      ; 004fae59 | DAT_0061b49c
        ;   Label: LAB_004fae59
    CMP ESI,dword ptr [0x01d1bc5c]      ; 004fae5f | DAT_01d1bc5c
    JZ 0x004fae6c                       ; 004fae65
        ;   XREF to: 004fae6c (CONDITIONAL_JUMP)  ; LAB_004fae6c
    CALL core_inv.cpp_FUN_004f70e0      ; 004fae67
        ;   XREF to: 004f70e0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004f70e0()
    MOV EAX,[0x01c50948]                ; 004fae6c | DAT_01c50948
        ;   Label: LAB_004fae6c
    MOV dword ptr [ESP + 0x878],EAX     ; 004fae71
    MOV EAX,[0x0152d248]                ; 004fae78 | DAT_0152d248
    XOR EDI,EDI                         ; 004fae7d
    MOV dword ptr [ESP + 0x8d4],EAX     ; 004fae7f
    MOV EAX,[0x0061b49c]                ; 004fae86 | DAT_0061b49c
    MOV dword ptr [0x01c50948],EDI      ; 004fae8b | DAT_01c50948
    CMP EAX,0x180                       ; 004fae91
    JGE 0x004faea8                      ; 004fae96
        ;   XREF to: 004faea8 (CONDITIONAL_JUMP)  ; LAB_004faea8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fae98
    CMP dword ptr [EAX + 0x454],0x0     ; 004fae9b
    JZ 0x004fbe27                       ; 004faea2
        ;   XREF to: 004fbe27 (CONDITIONAL_JUMP)  ; LAB_004fbe27
    MOV EAX,dword ptr [EBP + 0x14]      ; 004faea8
        ;   Label: LAB_004faea8
    CMP dword ptr [EAX + 0x338],0x0     ; 004faeab
    JZ 0x004fb230                       ; 004faeb2
        ;   XREF to: 004fb230 (CONDITIONAL_JUMP)  ; LAB_004fb230
    FLD float ptr [EAX + 0x340]         ; 004faeb8
    FLDZ                                ; 004faebe
    FCOMPP                              ; 004faec0
    FNSTSW AX                           ; 004faec2
    SAHF                                ; 004faec4
    JNC 0x004fb230                      ; 004faec5
        ;   XREF to: 004fb230 (CONDITIONAL_JUMP)  ; LAB_004fb230
    MOV EBX,0x10                        ; 004faecb
    MOV ESI,0x30                        ; 004faed0
    MOV EAX,[0x0061f1a0]                ; 004faed5 | DAT_0061f1a0
    MOV EDI,0x70                        ; 004faeda
    MOV dword ptr [ESP + 0x89c],EAX     ; 004faedf
    MOV dword ptr [ESP + 0x8a8],EBX     ; 004faee6
    MOV EAX,[0x0061f1a4]                ; 004faeed | DAT_0061f1a4
    MOV dword ptr [ESP + 0x880],EDI     ; 004faef2
    MOV dword ptr [ESP + 0x890],EAX     ; 004faef9
    MOV EAX,[0x0061b49c]                ; 004faf00 | DAT_0061b49c
    MOV EBX,0x24                        ; 004faf05
    CMP EAX,0x180                       ; 004faf0a
    JGE 0x004faf21                      ; 004faf0f
        ;   XREF to: 004faf21 (CONDITIONAL_JUMP)  ; LAB_004faf21
    MOV EAX,dword ptr [EBP + 0x14]      ; 004faf11
    CMP dword ptr [EAX + 0x454],0x0     ; 004faf14
    JZ 0x004fbe38                       ; 004faf1b
        ;   XREF to: 004fbe38 (CONDITIONAL_JUMP)  ; LAB_004fbe38
    MOV dword ptr [ESP + 0x88c],0xffff  ; 004faf21
        ;   Label: LAB_004faf21
    MOV EAX,dword ptr [EBP + 0x14]      ; 004faf2c
    FLD float ptr [EAX + 0x340]         ; 004faf2f
    FLD1                                ; 004faf35
    FCOMPP                              ; 004faf37
    FNSTSW AX                           ; 004faf39
    SAHF                                ; 004faf3b
    JBE 0x004faf59                      ; 004faf3c
        ;   XREF to: 004faf59 (CONDITIONAL_JUMP)  ; LAB_004faf59
    MOV EAX,dword ptr [EBP + 0x14]      ; 004faf3e
    FLD float ptr [EAX + 0x340]         ; 004faf41
    FMUL float ptr [0x005e6914]         ; 004faf47 | DAT_005e6914
    CALL crt_math.c_round_FUN_005c03a0  ; 004faf4d
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x88c]       ; 004faf52
    MOV EDX,dword ptr [0x01d1c27c]      ; 004faf59 | g_CLightGunClassInfo.name_hash
        ;   Label: LAB_004faf59
    MOV EAX,dword ptr [EBP + 0x14]      ; 004faf5f
    PUSH EDX                            ; 004faf62
    MOV ECX,dword ptr [EAX + 0x338]     ; 004faf63
    PUSH ECX                            ; 004faf69
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004faf6a
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 004faf6f
    TEST EAX,EAX                        ; 004faf72
    JZ 0x004fb017                       ; 004faf74
        ;   XREF to: 004fb017 (CONDITIONAL_JUMP)  ; LAB_004fb017
    FLD float ptr [EAX + 0x584]         ; 004faf7a
    FMUL double ptr [0x005e6918]        ; 004faf80 | DAT_005e6918
    CALL crt_math.c_round_FUN_005c03a0  ; 004faf86
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x8dc]       ; 004faf8b
    MOV EDI,dword ptr [ESP + 0x8dc]     ; 004faf92
    PUSH EDI                            ; 004faf99
    PUSH 0x5e6894                       ; 004faf9a | DAT_005e6894
    LEA EAX,[ESP + 0x218]               ; 004faf9f
    PUSH EAX                            ; 004fafa6
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004fafa7
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 004fafac
    PUSH 0x58                           ; 004fafaf
    MOV EAX,dword ptr [ESP + 0x8d8]     ; 004fafb1
    PUSH EAX                            ; 004fafb8
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510 ; 004fafb9
        ;   XREF to: 004c4510 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004fafbe
    MOV EDI,EAX                         ; 004fafc1
    LEA EAX,[ESP + 0x210]               ; 004fafc3
    PUSH EAX                            ; 004fafca
    MOV EDX,dword ptr [ESP + 0x8d8]     ; 004fafcb
    PUSH EDX                            ; 004fafd2
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0 ; 004fafd3
        ;   XREF to: 004c3ea0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 004fafd8
    MOV EDX,dword ptr [0x0061b49c]      ; 004fafdb | DAT_0061b49c
    MOV ECX,dword ptr [ESP + 0x8a8]     ; 004fafe1
    PUSH 0x0                            ; 004fafe8
    SUB EDX,ECX                         ; 004fafea
    PUSH 0xf8                           ; 004fafec
    SUB EDX,EDI                         ; 004faff1
    PUSH EDX                            ; 004faff3
    MOV EDX,dword ptr [0x0061b498]      ; 004faff4 | DAT_0061b498
    SUB EDX,ESI                         ; 004faffa
    SUB EDX,EAX                         ; 004faffc
    PUSH EDX                            ; 004faffe
    LEA EAX,[ESP + 0x220]               ; 004fafff
    PUSH EAX                            ; 004fb006
    MOV EDI,dword ptr [ESP + 0x8e8]     ; 004fb007
    PUSH EDI                            ; 004fb00e
    CALL engine_font.cpp_FUN_004c1dd0   ; 004fb00f
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004c1dd0()
    ADD ESP,0x18                        ; 004fb014
    MOV EAX,[0x01d1c2b8]                ; 004fb017 | g_CLightPisClassInfo.name_hash
        ;   Label: LAB_004fb017
    PUSH EAX                            ; 004fb01c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fb01d
    MOV EDX,dword ptr [EAX + 0x338]     ; 004fb020
    PUSH EDX                            ; 004fb026
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004fb027
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 004fb02c
    TEST EAX,EAX                        ; 004fb02f
    JZ 0x004fb0cb                       ; 004fb031
        ;   XREF to: 004fb0cb (CONDITIONAL_JUMP)  ; LAB_004fb0cb
    FLD float ptr [EAX + 0x584]         ; 004fb037
    FMUL double ptr [0x005e6918]        ; 004fb03d | DAT_005e6918
    CALL crt_math.c_round_FUN_005c03a0  ; 004fb043
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x8dc]       ; 004fb048
    MOV ECX,dword ptr [ESP + 0x8dc]     ; 004fb04f
    PUSH ECX                            ; 004fb056
    PUSH 0x5e6899                       ; 004fb057 | DAT_005e6899
    LEA EAX,[ESP + 0x18]                ; 004fb05c
    PUSH EAX                            ; 004fb060
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004fb061
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 004fb066
    PUSH 0x58                           ; 004fb069
    MOV EDI,dword ptr [ESP + 0x8d8]     ; 004fb06b
    PUSH EDI                            ; 004fb072
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510 ; 004fb073
        ;   XREF to: 004c4510 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004fb078
    MOV EDI,EAX                         ; 004fb07b
    LEA EAX,[ESP + 0x10]                ; 004fb07d
    PUSH EAX                            ; 004fb081
    MOV EAX,dword ptr [ESP + 0x8d8]     ; 004fb082
    PUSH EAX                            ; 004fb089
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0 ; 004fb08a
        ;   XREF to: 004c3ea0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 004fb08f
    MOV EDX,dword ptr [0x0061b49c]      ; 004fb092 | DAT_0061b49c
    MOV ECX,dword ptr [ESP + 0x8a8]     ; 004fb098
    PUSH 0x0                            ; 004fb09f
    SUB EDX,ECX                         ; 004fb0a1
    PUSH 0xf8                           ; 004fb0a3
    SUB EDX,EDI                         ; 004fb0a8
    PUSH EDX                            ; 004fb0aa
    MOV EDX,dword ptr [0x0061b498]      ; 004fb0ab | DAT_0061b498
    SUB EDX,ESI                         ; 004fb0b1
    SUB EDX,EAX                         ; 004fb0b3
    PUSH EDX                            ; 004fb0b5
    LEA EAX,[ESP + 0x20]                ; 004fb0b6
    PUSH EAX                            ; 004fb0ba
    MOV ESI,dword ptr [ESP + 0x8e8]     ; 004fb0bb
    PUSH ESI                            ; 004fb0c2
    CALL engine_font.cpp_FUN_004c1dd0   ; 004fb0c3
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004c1dd0()
    ADD ESP,0x18                        ; 004fb0c8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fb0cb
        ;   Label: LAB_004fb0cb
    PUSH 0x3                            ; 004fb0ce
    MOV EDI,dword ptr [EAX + 0x338]     ; 004fb0d0
    PUSH EDI                            ; 004fb0d6
    PUSH EAX                            ; 004fb0d7
    CALL core_inv.cpp_FUN_004fa540      ; 004fb0d8
        ;   XREF to: 004fa540 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004fa540()
    ADD ESP,0xc                         ; 004fb0dd
    TEST EAX,EAX                        ; 004fb0e0
    JZ 0x004fbe8d                       ; 004fb0e2
        ;   XREF to: 004fbe8d (CONDITIONAL_JUMP)  ; LAB_004fbe8d
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fb0e8
        ;   Label: LAB_004fb0e8
    CMP dword ptr [EAX + 0x454],0x0     ; 004fb0eb
    JZ 0x004fb230                       ; 004fb0f2
        ;   XREF to: 004fb230 (CONDITIONAL_JUMP)  ; LAB_004fb230
    PUSH 0x3                            ; 004fb0f8
    MOV EDI,dword ptr [EAX + 0x338]     ; 004fb0fa
    PUSH EDI                            ; 004fb100
    PUSH EAX                            ; 004fb101
    CALL core_inv.cpp_FUN_004fa540      ; 004fb102
        ;   XREF to: 004fa540 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004fa540()
    ADD ESP,0xc                         ; 004fb107
    TEST EAX,EAX                        ; 004fb10a
    JZ 0x004fc0b2                       ; 004fb10c
        ;   XREF to: 004fc0b2 (CONDITIONAL_JUMP)  ; LAB_004fc0b2
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fb112
    MOV EDI,dword ptr [EAX + 0x338]     ; 004fb115
    PUSH EDI                            ; 004fb11b
    CALL core_inv.cpp_getItemDescription_FUN_004f6350 ; 004fb11c
        ;   XREF to: 004f6350 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_getItemDescription_FUN_004f6350()
    ADD ESP,0x4                         ; 004fb121
    PUSH EAX                            ; 004fb124
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fb125
    MOV EDX,dword ptr [EAX + 0x338]     ; 004fb128
    PUSH EDX                            ; 004fb12e
    CALL core_inv.cpp_getItemDisplayName_FUN_004f62e0 ; 004fb12f
        ;   XREF to: 004f62e0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_getItemDisplayName_FUN_004f62e0()
    ADD ESP,0x4                         ; 004fb134
    PUSH EAX                            ; 004fb137
    PUSH 0x5e68d8                       ; 004fb138 | = "%s\n\n%s"
    LEA EAX,[ESP + 0x61c]               ; 004fb13d
        ;   Label: LAB_004fb13d
    PUSH EAX                            ; 004fb144
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004fb145
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 004fb14a
    MOV EAX,dword ptr [ESP + 0x8d4]     ; 004fb14d
        ;   Label: LAB_004fb14d
    MOV ECX,dword ptr [ESP + 0x880]     ; 004fb154
    MOV dword ptr [ESP + 0x8c4],EAX     ; 004fb15b
    MOV EAX,dword ptr [ESP + 0x89c]     ; 004fb162
    SUB EAX,ECX                         ; 004fb169
    PUSH EAX                            ; 004fb16b
    PUSH 0x100                          ; 004fb16c
    PUSH 0xa                            ; 004fb171
    PUSH 0x1d06f78                      ; 004fb173
    LEA EAX,[ESP + 0x620]               ; 004fb178
    PUSH EAX                            ; 004fb17f
    MOV EBX,dword ptr [ESP + 0x8e8]     ; 004fb180
    PUSH EBX                            ; 004fb187
    CALL engine_font.cpp_FUN_004c4260   ; 004fb188
        ;   XREF to: 004c4260 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004c4260()
    ADD ESP,0x18                        ; 004fb18d
    PUSH 0x58                           ; 004fb190
    PUSH EBX                            ; 004fb192
    MOV EDI,EAX                         ; 004fb193
    MOV dword ptr [ESP + 0x8c4],EAX     ; 004fb195
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510 ; 004fb19c
        ;   XREF to: 004c4510 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004fb1a1
    MOV EBX,dword ptr [0x0061b49c]      ; 004fb1a4 | DAT_0061b49c
    MOV dword ptr [ESP + 0x8b4],EAX     ; 004fb1aa
    MOV EAX,dword ptr [ESP + 0x890]     ; 004fb1b1
    MOV ECX,dword ptr [ESP + 0x89c]     ; 004fb1b8
    SUB EBX,EAX                         ; 004fb1bf
    MOV EAX,[0x0061b498]                ; 004fb1c1 | DAT_0061b498
    MOV EDX,dword ptr [ESP + 0x8a8]     ; 004fb1c6
    SUB EAX,ECX                         ; 004fb1cd
    ADD EBX,EDX                         ; 004fb1cf
    ADD EDX,EAX                         ; 004fb1d1
    XOR ESI,ESI                         ; 004fb1d3
    MOV dword ptr [ESP + 0x8c0],EDX     ; 004fb1d5
    TEST EDI,EDI                        ; 004fb1dc
    JLE 0x004fb230                      ; 004fb1de
        ;   XREF to: 004fb230 (CONDITIONAL_JUMP)  ; LAB_004fb230
    MOV EDI,0x1d06f78                   ; 004fb1e0
    PUSH 0x0                            ; 004fb1e5
        ;   Label: LAB_004fb1e5
    PUSH 0xf8                           ; 004fb1e7
    PUSH EBX                            ; 004fb1ec
    MOV EAX,dword ptr [ESP + 0x8cc]     ; 004fb1ed
    PUSH EAX                            ; 004fb1f4
    PUSH EDI                            ; 004fb1f5
    MOV EDX,dword ptr [ESP + 0x8d8]     ; 004fb1f6
    PUSH EDX                            ; 004fb1fd
    INC ESI                             ; 004fb1fe
    CALL engine_font.cpp_FUN_004c1dd0   ; 004fb1ff
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004c1dd0()
    ADD ESP,0x18                        ; 004fb204
    ADD EDI,0x100                       ; 004fb207
    MOV ECX,dword ptr [ESP + 0x8b4]     ; 004fb20d
    MOV EAX,dword ptr [ESP + 0x8bc]     ; 004fb214
    ADD EBX,ECX                         ; 004fb21b
    CMP ESI,EAX                         ; 004fb21d
    JL 0x004fb1e5                       ; 004fb21f
        ;   XREF to: 004fb1e5 (CONDITIONAL_JUMP)  ; LAB_004fb1e5
    LEA EAX,[EAX]                       ; 004fb221
    LEA EDX,[EDX]                       ; 004fb227
    LEA EAX,[EAX]                       ; 004fb22d
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fb230
        ;   Label: LAB_004fb230
    CMP dword ptr [EAX + 0x33c],0x0     ; 004fb233
    JZ 0x004fb510                       ; 004fb23a
        ;   XREF to: 004fb510 (CONDITIONAL_JUMP)  ; LAB_004fb510
    FLD float ptr [EAX + 0x344]         ; 004fb240
    FLDZ                                ; 004fb246
    FCOMPP                              ; 004fb248
    FNSTSW AX                           ; 004fb24a
    SAHF                                ; 004fb24c
    JNC 0x004fb510                      ; 004fb24d
        ;   XREF to: 004fb510 (CONDITIONAL_JUMP)  ; LAB_004fb510
    MOV ECX,0x70                        ; 004fb253
    MOV EDI,0x10                        ; 004fb258
    MOV ESI,dword ptr [0x0061f1a0]      ; 004fb25d | DAT_0061f1a0
    MOV EBX,dword ptr [0x0061f1a4]      ; 004fb263 | DAT_0061f1a4
    MOV EAX,[0x0061b49c]                ; 004fb269 | DAT_0061b49c
    MOV dword ptr [ESP + 0x884],ECX     ; 004fb26e
    CMP EAX,0x180                       ; 004fb275
    JGE 0x004fb28c                      ; 004fb27a
        ;   XREF to: 004fb28c (CONDITIONAL_JUMP)  ; LAB_004fb28c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fb27c
    CMP dword ptr [EAX + 0x454],0x0     ; 004fb27f
    JZ 0x004fc1a2                       ; 004fb286
        ;   XREF to: 004fc1a2 (CONDITIONAL_JUMP)  ; LAB_004fc1a2
    MOV EAX,[0x01d06a90]                ; 004fb28c | g_CHealthItemClassInfo.name_hash
        ;   Label: LAB_004fb28c
    PUSH EAX                            ; 004fb291
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fb292
    MOV EDX,dword ptr [EAX + 0x33c]     ; 004fb295
    PUSH EDX                            ; 004fb29b
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004fb29c
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 004fb2a1
    TEST EAX,EAX                        ; 004fb2a4
    JZ 0x004fb341                       ; 004fb2a6
        ;   XREF to: 004fb341 (CONDITIONAL_JUMP)  ; LAB_004fb341
    SUB ESP,0x8                         ; 004fb2ac
    FLD float ptr [EAX + 0x2d8]         ; 004fb2af
    FSTP double ptr [ESP]               ; 004fb2b5
    MOV ECX,dword ptr [EAX + 0x2d4]     ; 004fb2b8
    PUSH ECX                            ; 004fb2be
    PUSH 0x5e68fd                       ; 004fb2bf | = "%d x%3.0f%%"
    LEA EAX,[ESP + 0x420]               ; 004fb2c4
    PUSH EAX                            ; 004fb2cb
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004fb2cc
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x14                        ; 004fb2d1
    PUSH 0x58                           ; 004fb2d4
    MOV EAX,dword ptr [ESP + 0x8d8]     ; 004fb2d6
    PUSH EAX                            ; 004fb2dd
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510 ; 004fb2de
        ;   XREF to: 004c4510 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510(CBitFont * this_ptr, int char_code)
    MOV dword ptr [ESP + 0x8e4],EAX     ; 004fb2e3
    ADD ESP,0x8                         ; 004fb2ea
    LEA EAX,[ESP + 0x410]               ; 004fb2ed
    PUSH EAX                            ; 004fb2f4
    MOV EDX,dword ptr [ESP + 0x8d8]     ; 004fb2f5
    PUSH EDX                            ; 004fb2fc
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0 ; 004fb2fd
        ;   XREF to: 004c3ea0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 004fb302
    MOV EDX,dword ptr [0x0061b49c]      ; 004fb305 | DAT_0061b49c
    PUSH 0x0                            ; 004fb30b
    MOV ECX,dword ptr [ESP + 0x8e0]     ; 004fb30d
    SUB EDX,EDI                         ; 004fb314
    PUSH 0xf8                           ; 004fb316
    SUB EDX,ECX                         ; 004fb31b
    PUSH EDX                            ; 004fb31d
    MOV EDX,dword ptr [0x0061b498]      ; 004fb31e | DAT_0061b498
    SUB EDX,EDI                         ; 004fb324
    SUB EDX,EAX                         ; 004fb326
    PUSH EDX                            ; 004fb328
    LEA EAX,[ESP + 0x420]               ; 004fb329
    PUSH EAX                            ; 004fb330
    MOV EAX,dword ptr [ESP + 0x8e8]     ; 004fb331
    PUSH EAX                            ; 004fb338
    CALL engine_font.cpp_FUN_004c1dd0   ; 004fb339
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004c1dd0()
    ADD ESP,0x18                        ; 004fb33e
    MOV EDX,dword ptr [0x01c57034]      ; 004fb341 | g_CFilmReelClassInfo.name_hash
        ;   Label: LAB_004fb341
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fb347
    PUSH EDX                            ; 004fb34a
    MOV ECX,dword ptr [EAX + 0x33c]     ; 004fb34b
    PUSH ECX                            ; 004fb351
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004fb352
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 004fb357
    TEST EAX,EAX                        ; 004fb35a
    JZ 0x004fb3ee                       ; 004fb35c
        ;   XREF to: 004fb3ee (CONDITIONAL_JUMP)  ; LAB_004fb3ee
    PUSH EAX                            ; 004fb362
    CALL core_inv.cpp_getItemDisplayName_FUN_004f62e0 ; 004fb363
        ;   XREF to: 004f62e0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_getItemDisplayName_FUN_004f62e0()
    ADD ESP,0x4                         ; 004fb368
    PUSH EAX                            ; 004fb36b
    PUSH 0x5e6909                       ; 004fb36c | DAT_005e6909
    LEA EAX,[ESP + 0x118]               ; 004fb371
    PUSH EAX                            ; 004fb378
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004fb379
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 004fb37e
    PUSH 0x58                           ; 004fb381
    MOV EAX,dword ptr [ESP + 0x8d8]     ; 004fb383
    PUSH EAX                            ; 004fb38a
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510 ; 004fb38b
        ;   XREF to: 004c4510 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510(CBitFont * this_ptr, int char_code)
    MOV dword ptr [ESP + 0x8e4],EAX     ; 004fb390
    ADD ESP,0x8                         ; 004fb397
    LEA EAX,[ESP + 0x110]               ; 004fb39a
    PUSH EAX                            ; 004fb3a1
    MOV EDX,dword ptr [ESP + 0x8d8]     ; 004fb3a2
    PUSH EDX                            ; 004fb3a9
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0 ; 004fb3aa
        ;   XREF to: 004c3ea0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 004fb3af
    MOV EDX,dword ptr [0x0061b49c]      ; 004fb3b2 | DAT_0061b49c
    PUSH 0x0                            ; 004fb3b8
    MOV ECX,dword ptr [ESP + 0x8e0]     ; 004fb3ba
    SUB EDX,EDI                         ; 004fb3c1
    PUSH 0xf8                           ; 004fb3c3
    SUB EDX,ECX                         ; 004fb3c8
    PUSH EDX                            ; 004fb3ca
    MOV EDX,dword ptr [0x0061b498]      ; 004fb3cb | DAT_0061b498
    SUB EDX,EDI                         ; 004fb3d1
    SUB EDX,EAX                         ; 004fb3d3
    PUSH EDX                            ; 004fb3d5
    LEA EAX,[ESP + 0x120]               ; 004fb3d6
    PUSH EAX                            ; 004fb3dd
    MOV EAX,dword ptr [ESP + 0x8e8]     ; 004fb3de
    PUSH EAX                            ; 004fb3e5
    CALL engine_font.cpp_FUN_004c1dd0   ; 004fb3e6
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004c1dd0()
    ADD ESP,0x18                        ; 004fb3eb
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fb3ee
        ;   Label: LAB_004fb3ee
    CMP dword ptr [EAX + 0x454],0x0     ; 004fb3f1
    JZ 0x004fb510                       ; 004fb3f8
        ;   XREF to: 004fb510 (CONDITIONAL_JUMP)  ; LAB_004fb510
    MOV ECX,dword ptr [EAX + 0x33c]     ; 004fb3fe
    PUSH ECX                            ; 004fb404
    CALL core_inv.cpp_getItemDescription_FUN_004f6350 ; 004fb405
        ;   XREF to: 004f6350 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_getItemDescription_FUN_004f6350()
    ADD ESP,0x4                         ; 004fb40a
    PUSH EAX                            ; 004fb40d
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fb40e
    MOV EDX,dword ptr [EAX + 0x33c]     ; 004fb411
    PUSH EDX                            ; 004fb417
    CALL core_inv.cpp_getItemDisplayName_FUN_004f62e0 ; 004fb418
        ;   XREF to: 004f62e0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_getItemDisplayName_FUN_004f62e0()
    ADD ESP,0x4                         ; 004fb41d
    PUSH EAX                            ; 004fb420
    PUSH 0x5e690c                       ; 004fb421 | = "%s\n\n%s"
    LEA EAX,[ESP + 0x51c]               ; 004fb426
    PUSH EAX                            ; 004fb42d
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004fb42e
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 004fb433
    MOV EAX,dword ptr [ESP + 0x8d4]     ; 004fb436
    MOV ECX,dword ptr [ESP + 0x884]     ; 004fb43d
    MOV dword ptr [ESP + 0x8b0],EAX     ; 004fb444
    MOV EAX,ESI                         ; 004fb44b
    SUB EAX,ECX                         ; 004fb44d
    PUSH EAX                            ; 004fb44f
    PUSH 0x100                          ; 004fb450
    PUSH 0xa                            ; 004fb455
    PUSH 0x1d07978                      ; 004fb457
    LEA EAX,[ESP + 0x520]               ; 004fb45c
    PUSH EAX                            ; 004fb463
    MOV EAX,dword ptr [ESP + 0x8e8]     ; 004fb464
    PUSH EAX                            ; 004fb46b
    CALL engine_font.cpp_FUN_004c4260   ; 004fb46c
        ;   XREF to: 004c4260 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004c4260()
    MOV dword ptr [ESP + 0x8f4],EAX     ; 004fb471
    ADD ESP,0x18                        ; 004fb478
    PUSH 0x58                           ; 004fb47b
    MOV EDX,dword ptr [ESP + 0x8d8]     ; 004fb47d
    PUSH EDX                            ; 004fb484
    MOV dword ptr [ESP + 0x8d4],EAX     ; 004fb485
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510 ; 004fb48c
        ;   XREF to: 004c4510 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004fb491
    MOV dword ptr [ESP + 0x8b8],EAX     ; 004fb494
    MOV EAX,[0x0061b49c]                ; 004fb49b | DAT_0061b49c
    SUB EAX,EBX                         ; 004fb4a0
    LEA EBX,[EAX + EDI*0x1]             ; 004fb4a2
    MOV EAX,[0x0061b498]                ; 004fb4a5 | DAT_0061b498
    SUB EAX,ESI                         ; 004fb4aa
    ADD EAX,EDI                         ; 004fb4ac
    MOV ECX,dword ptr [ESP + 0x8dc]     ; 004fb4ae
    MOV dword ptr [ESP + 0x8c8],EAX     ; 004fb4b5
    XOR EDI,EDI                         ; 004fb4bc
    TEST ECX,ECX                        ; 004fb4be
    JLE 0x004fb510                      ; 004fb4c0
        ;   XREF to: 004fb510 (CONDITIONAL_JUMP)  ; LAB_004fb510
    MOV ESI,0x1d07978                   ; 004fb4c2
    PUSH 0x0                            ; 004fb4c7
        ;   Label: LAB_004fb4c7
    PUSH 0xf8                           ; 004fb4c9
    PUSH EBX                            ; 004fb4ce
    MOV EAX,dword ptr [ESP + 0x8d4]     ; 004fb4cf
    PUSH EAX                            ; 004fb4d6
    PUSH ESI                            ; 004fb4d7
    MOV EDX,dword ptr [ESP + 0x8c4]     ; 004fb4d8
    PUSH EDX                            ; 004fb4df
    INC EDI                             ; 004fb4e0
    CALL engine_font.cpp_FUN_004c1dd0   ; 004fb4e1
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004c1dd0()
    ADD ESP,0x18                        ; 004fb4e6
    ADD ESI,0x100                       ; 004fb4e9
    MOV ECX,dword ptr [ESP + 0x8b8]     ; 004fb4ef
    MOV EAX,dword ptr [ESP + 0x8cc]     ; 004fb4f6
    ADD EBX,ECX                         ; 004fb4fd
    CMP EDI,EAX                         ; 004fb4ff
    JL 0x004fb4c7                       ; 004fb501
        ;   XREF to: 004fb4c7 (CONDITIONAL_JUMP)  ; LAB_004fb4c7
    LEA EAX,[EAX]                       ; 004fb503
    LEA EDX,[EDX]                       ; 004fb509
    NOP                                 ; 004fb50f
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fb510
        ;   Label: LAB_004fb510
    FLD float ptr [EAX + 0x344]         ; 004fb513
    FLDZ                                ; 004fb519
    FCOMPP                              ; 004fb51b
    FNSTSW AX                           ; 004fb51d
    SAHF                                ; 004fb51f
    JNC 0x004fc1d2                      ; 004fb520
        ;   XREF to: 004fc1d2 (CONDITIONAL_JUMP)  ; LAB_004fc1d2
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fb526
        ;   Label: LAB_004fb526
    MOV EAX,dword ptr [EAX + 0x348]     ; 004fb529
    MOV dword ptr [ESP + 0x8],EAX       ; 004fb52f
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fb533
    FLD float ptr [EAX + 0x344]         ; 004fb536
    FCOMP float ptr [ESP + 0x8]         ; 004fb53c
    FNSTSW AX                           ; 004fb540
    SAHF                                ; 004fb542
    JBE 0x004fb552                      ; 004fb543
        ;   XREF to: 004fb552 (CONDITIONAL_JUMP)  ; LAB_004fb552
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fb545
    MOV EAX,dword ptr [EAX + 0x344]     ; 004fb548
    MOV dword ptr [ESP + 0x8],EAX       ; 004fb54e
    FLD float ptr [ESP + 0x8]           ; 004fb552
        ;   Label: LAB_004fb552
    MOV EDX,0xffff                      ; 004fb556
    FLD1                                ; 004fb55b
    MOV dword ptr [ESP + 0x888],EDX     ; 004fb55d
    FCOMPP                              ; 004fb564
    FNSTSW AX                           ; 004fb566
    SAHF                                ; 004fb568
    JBE 0x004fb581                      ; 004fb569
        ;   XREF to: 004fb581 (CONDITIONAL_JUMP)  ; LAB_004fb581
    FLD float ptr [ESP + 0x8]           ; 004fb56b
    FMUL float ptr [0x005e6914]         ; 004fb56f | DAT_005e6914
    CALL crt_math.c_round_FUN_005c03a0  ; 004fb575
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x888]       ; 004fb57a
    MOV EAX,[0x01d06ab4]                ; 004fb581 | DAT_01d06ab4
        ;   Label: LAB_004fb581
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004fb586
    FLD float ptr [EAX + 0x2538]        ; 004fb58d
    FMUL double ptr [0x005e6920]        ; 004fb593 | DAT_005e6920
    FST float ptr [ESP + 0xc]           ; 004fb599
    FLDZ                                ; 004fb59d
    FCOMPP                              ; 004fb59f
    FNSTSW AX                           ; 004fb5a1
    SAHF                                ; 004fb5a3
    JBE 0x004fb5ac                      ; 004fb5a4
        ;   XREF to: 004fb5ac (CONDITIONAL_JUMP)  ; LAB_004fb5ac
    XOR ECX,ECX                         ; 004fb5a6
    MOV dword ptr [ESP + 0xc],ECX       ; 004fb5a8
    FLD float ptr [ESP + 0xc]           ; 004fb5ac
        ;   Label: LAB_004fb5ac
    FLD1                                ; 004fb5b0
    FCOMPP                              ; 004fb5b2
    FNSTSW AX                           ; 004fb5b4
    SAHF                                ; 004fb5b6
    JNC 0x004fb5c1                      ; 004fb5b7
        ;   XREF to: 004fb5c1 (CONDITIONAL_JUMP)  ; LAB_004fb5c1
    MOV dword ptr [ESP + 0xc],0x3f800000 ; 004fb5b9
    MOV ESI,0x3f                        ; 004fb5c1
        ;   Label: LAB_004fb5c1
    MOV EAX,[0x0061b49c]                ; 004fb5c6 | DAT_0061b49c
    MOV EDI,0x1b                        ; 004fb5cb
    CMP EAX,0x180                       ; 004fb5d0
    JGE 0x004fb5e1                      ; 004fb5d5
        ;   XREF to: 004fb5e1 (CONDITIONAL_JUMP)  ; LAB_004fb5e1
    MOV ESI,0x1f                        ; 004fb5d7
    MOV EDI,0xd                         ; 004fb5dc
    MOV EAX,[0x0061b498]                ; 004fb5e1 | DAT_0061b498
        ;   Label: LAB_004fb5e1
    SUB EAX,0x4                         ; 004fb5e6
    SUB EAX,EDI                         ; 004fb5e9
    MOV dword ptr [ESP + 0x870],EAX     ; 004fb5eb
    MOV EAX,dword ptr [ESP + 0x888]     ; 004fb5f2
    MOV EDX,EAX                         ; 004fb5f9
    SAR EDX,0x1f                        ; 004fb5fb
    SUB EAX,EDX                         ; 004fb5fe
    SAR EAX,0x1                         ; 004fb600
    MOV dword ptr [ESP + 0x8dc],ESI     ; 004fb602
    FILD dword ptr [ESP + 0x8dc]        ; 004fb609
    FLD ST0                             ; 004fb610
    FMUL float ptr [ESP + 0xc]          ; 004fb612
    DEC EDI                             ; 004fb616
    PUSH EAX                            ; 004fb617
    FSUBP                               ; 004fb618
    PUSH ESI                            ; 004fb61a
    CALL crt_math.c_round_FUN_005c03a0  ; 004fb61b
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    PUSH EDI                            ; 004fb620
    FISTP dword ptr [ESP + 0x880]       ; 004fb621
    MOV EDX,dword ptr [ESP + 0x880]     ; 004fb628
    PUSH EDX                            ; 004fb62f
    PUSH 0x0                            ; 004fb630
    MOV EBX,EAX                         ; 004fb632
    LEA EAX,[EDX + 0x4]                 ; 004fb634
    PUSH EAX                            ; 004fb637
    MOV ECX,dword ptr [ESP + 0x888]     ; 004fb638
    PUSH ECX                            ; 004fb63f
    PUSH 0x1d1b9e4                      ; 004fb640
    CALL engine_alphabit.cpp_FUN_0040d660 ; 004fb645
        ;   XREF to: 0040d660 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_FUN_0040d660()
    ADD ESP,0x20                        ; 004fb64a
    PUSH EBX                            ; 004fb64d
    PUSH 0x4                            ; 004fb64e
    MOV EBX,dword ptr [ESP + 0x878]     ; 004fb650
    PUSH EBX                            ; 004fb657
    PUSH 0x1d1b9f8                      ; 004fb658
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0 ; 004fb65d
        ;   XREF to: 0040d4b0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004fb662
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fb665
        ;   Label: LAB_004fb665
    FLDZ                                ; 004fb668
    FLD float ptr [EAX + 0x34c]         ; 004fb66a
    FSTP double ptr [ESP]               ; 004fb670
    FCOMP double ptr [ESP]              ; 004fb673
    FNSTSW AX                           ; 004fb676
    SAHF                                ; 004fb678
    JNC 0x004fb770                      ; 004fb679
        ;   XREF to: 004fb770 (CONDITIONAL_JUMP)  ; LAB_004fb770
    MOV ESI,0xffff                      ; 004fb67f
    FLD1                                ; 004fb684
    MOV dword ptr [ESP + 0x87c],ESI     ; 004fb686
    FCOMP double ptr [ESP]              ; 004fb68d
    FNSTSW AX                           ; 004fb690
    SAHF                                ; 004fb692
    JBE 0x004fb6aa                      ; 004fb693
        ;   XREF to: 004fb6aa (CONDITIONAL_JUMP)  ; LAB_004fb6aa
    FLD double ptr [ESP]                ; 004fb695
    FMUL double ptr [0x005e6928]        ; 004fb698 | DAT_005e6928
    CALL crt_math.c_round_FUN_005c03a0  ; 004fb69e
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x87c]       ; 004fb6a3
    MOV EDI,dword ptr [ESP + 0x87c]     ; 004fb6aa
        ;   Label: LAB_004fb6aa
    PUSH EDI                            ; 004fb6b1
    CALL engine_3d.c_setRenderAlpha_FUN_00406bd0 ; 004fb6b2
        ;   XREF to: 00406bd0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406bd0(int alpha_color_value)
    MOV EAX,[0x0152d248]                ; 004fb6b7 | DAT_0152d248
    ADD ESP,0x4                         ; 004fb6bc
    MOV dword ptr [ESP + 0x8d8],EAX     ; 004fb6bf
    MOV EAX,[0x0061b49c]                ; 004fb6c6 | DAT_0061b49c
    MOV EDX,dword ptr [0x0061f1a4]      ; 004fb6cb | DAT_0061f1a4
    CMP EAX,0x180                       ; 004fb6d1
    JGE 0x004fb6ef                      ; 004fb6d6
        ;   XREF to: 004fb6ef (CONDITIONAL_JUMP)  ; LAB_004fb6ef
    MOV EAX,EDX                         ; 004fb6d8
    SAR EDX,0x1f                        ; 004fb6da
    SUB EAX,EDX                         ; 004fb6dd
    SAR EAX,0x1                         ; 004fb6df
    MOV EDX,EAX                         ; 004fb6e1
    MOV EAX,[0x0152d250]                ; 004fb6e3 | DAT_0152d250
    MOV dword ptr [ESP + 0x8d8],EAX     ; 004fb6e8
    MOV EAX,[0x0061b498]                ; 004fb6ef | DAT_0061b498
        ;   Label: LAB_004fb6ef
    SUB EAX,EDX                         ; 004fb6f4
    SUB EAX,0x4                         ; 004fb6f6
    PUSH EAX                            ; 004fb6f9
    PUSH 0x100                          ; 004fb6fa
    PUSH 0xa                            ; 004fb6ff
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fb701
    PUSH 0x1d08378                      ; 004fb704
    ADD EAX,0x354                       ; 004fb709
    PUSH EAX                            ; 004fb70e
    MOV EDX,dword ptr [ESP + 0x8ec]     ; 004fb70f
    PUSH EDX                            ; 004fb716
    CALL engine_font.cpp_FUN_004c4260   ; 004fb717
        ;   XREF to: 004c4260 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004c4260()
    ADD ESP,0x18                        ; 004fb71c
    PUSH 0x58                           ; 004fb71f
    MOV ECX,dword ptr [ESP + 0x8dc]     ; 004fb721
    PUSH ECX                            ; 004fb728
    MOV EBX,EAX                         ; 004fb729
    MOV dword ptr [ESP + 0x8d8],EAX     ; 004fb72b
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510 ; 004fb732
        ;   XREF to: 004c4510 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004fb737
    MOV dword ptr [ESP + 0x8ac],EAX     ; 004fb73a
    IMUL EAX,EBX                        ; 004fb741
    MOV ESI,dword ptr [0x0061b49c]      ; 004fb744 | DAT_0061b49c
    SUB ESI,0x4                         ; 004fb74a
    MOV EBX,dword ptr [0x0152d250]      ; 004fb74d | DAT_0152d250
    SUB ESI,EAX                         ; 004fb753
    CMP EBX,dword ptr [ESP + 0x8d8]     ; 004fb755
    JNZ 0x004fc1ed                      ; 004fb75c
        ;   XREF to: 004fc1ed (CONDITIONAL_JUMP)  ; LAB_004fc1ed
    CMP dword ptr [0x01d7f1b8],0x0      ; 004fb762 | DAT_01d7f1b8
    JZ 0x004fc1ed                       ; 004fb769
        ;   XREF to: 004fc1ed (CONDITIONAL_JUMP)  ; LAB_004fc1ed
    NOP                                 ; 004fb76f
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fb770
        ;   Label: LAB_004fb770
    CMP dword ptr [EAX + 0xc],0x0       ; 004fb773
    JZ 0x004fb7d7                       ; 004fb777
        ;   XREF to: 004fb7d7 (CONDITIONAL_JUMP)  ; LAB_004fb7d7
    PUSH 0xffff                         ; 004fb779
    PUSH 0x2                            ; 004fb77e
    PUSH 0x2                            ; 004fb780
    PUSH 0x1d1baf4                      ; 004fb782
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0 ; 004fb787
        ;   XREF to: 0040d4b0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    MOV ECX,dword ptr [0x01d1bc48]      ; 004fb78c | DAT_01d1bc48
    ADD ESP,0x10                        ; 004fb792
    CMP ECX,-0x1                        ; 004fb795
    JZ 0x004fb7d7                       ; 004fb798
        ;   XREF to: 004fb7d7 (CONDITIONAL_JUMP)  ; LAB_004fb7d7
    PUSH 0xffff                         ; 004fb79a
    PUSH 0x7                            ; 004fb79f
    LEA EAX,[ECX*0x4 + 0x0]             ; 004fb7a1
    PUSH 0x20                           ; 004fb7a8
    MOV EBX,0x1d1bb08                   ; 004fb7aa
    ADD EAX,ECX                         ; 004fb7af
    PUSH 0x3                            ; 004fb7b1
    SHL EAX,0x4                         ; 004fb7b3
    PUSH 0x0                            ; 004fb7b6
    ADD EBX,EAX                         ; 004fb7b8
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 004fb7ba
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    MOV EDX,EAX                         ; 004fb7bf
    SHL EAX,0x2                         ; 004fb7c1
    ADD EAX,EDX                         ; 004fb7c4
    SHL EAX,0x2                         ; 004fb7c6
    ADD ESP,0x8                         ; 004fb7c9
    ADD EAX,EBX                         ; 004fb7cc
    PUSH EAX                            ; 004fb7ce
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0 ; 004fb7cf
        ;   XREF to: 0040d4b0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004fb7d4
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fb7d7
        ;   Label: LAB_004fb7d7
    CMP dword ptr [EAX + 0x8],0x0       ; 004fb7da
    JZ 0x004fbde4                       ; 004fb7de
        ;   XREF to: 004fbde4 (CONDITIONAL_JUMP)  ; LAB_004fbde4
    MOV ESI,dword ptr [0x0061b49c]      ; 004fb7e4 | DAT_0061b49c
    SUB ESI,0x2                         ; 004fb7ea
    MOV EAX,[0x01d1baa8]                ; 004fb7ed | CAlphaBitmap_01d1ba98.height
    MOV EBX,ESI                         ; 004fb7f2
    PUSH 0xffff                         ; 004fb7f4
    SUB EBX,EAX                         ; 004fb7f9
    PUSH EBX                            ; 004fb7fb
    PUSH 0x2                            ; 004fb7fc
    MOV EDI,dword ptr [0x01d1baa4]      ; 004fb7fe | CAlphaBitmap_01d1ba98.width
    PUSH 0x1d1ba98                      ; 004fb804
    ADD EDI,0x2                         ; 004fb809
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0 ; 004fb80c
        ;   XREF to: 0040d4b0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004fb811
    LEA EAX,[EDI + -0x2]                ; 004fb814
    MOV dword ptr [ESP + 0x8dc],EAX     ; 004fb817
    ADD EDI,0x2                         ; 004fb81e
    FLD double ptr [0x005e6930]         ; 004fb821 | DAT_005e6930
    FILD dword ptr [ESP + 0x8dc]        ; 004fb827
    FMUL ST1                            ; 004fb82e
    MOV dword ptr [ESP + 0x8dc],EDI     ; 004fb830
    MOV EAX,ESI                         ; 004fb837
    FILD dword ptr [ESP + 0x8dc]        ; 004fb839
    SUB EAX,EBX                         ; 004fb840
    FMUL ST2                            ; 004fb842
    MOV dword ptr [ESP + 0x8dc],EAX     ; 004fb844
    ADD EBX,ESI                         ; 004fb84b
    FILD dword ptr [ESP + 0x8dc]        ; 004fb84d
    MOV dword ptr [ESP + 0x8dc],EBX     ; 004fb854
    FMUL ST3                            ; 004fb85b
    FILD dword ptr [ESP + 0x8dc]        ; 004fb85d
    FMULP ST4                           ; 004fb864
    XOR EDX,EDX                         ; 004fb866
    XOR ECX,ECX                         ; 004fb868
    MOV dword ptr [0x01c50948],EDX      ; 004fb86a | DAT_01c50948
    MOV dword ptr [ESP + 0x7f8],ECX     ; 004fb870
    MOV EAX,[0x01d06ab4]                ; 004fb877 | DAT_01d06ab4
    MOV dword ptr [ESP + 0x7fc],ECX     ; 004fb87c
    LEA EDI,[ESP + 0x7b0]               ; 004fb883
    MOV EDX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004fb88a
    FXCH ST2                            ; 004fb891
    FSTP float ptr [ESP + 0x8a0]        ; 004fb893
    MOV EAX,[0x00622c18]                ; 004fb89a | g_CDemonSetPtr
    FLD float ptr [EDX + 0x34]          ; 004fb89f
    FSUB float ptr [EAX + 0x15acbc]     ; 004fb8a2 | g_CDemonSetInstance.altitude_reference_y
    FXCH                                ; 004fb8a8
    FSTP float ptr [ESP + 0x894]        ; 004fb8aa
    FSTP float ptr [ESP + 0x8dc]        ; 004fb8b1
    MOV EAX,dword ptr [ESP + 0x8dc]     ; 004fb8b8
    LEA ESI,[ESP + 0x7f8]               ; 004fb8bf
    MOV dword ptr [ESP + 0x800],EAX     ; 004fb8c6
    LEA EAX,[ESP + 0x7b0]               ; 004fb8cd
    FSTP float ptr [ESP + 0x898]        ; 004fb8d4
    PUSH EAX                            ; 004fb8db
    LEA EAX,[ESP + 0x75c]               ; 004fb8dc
    FSTP float ptr [ESP + 0x8a8]        ; 004fb8e3
    PUSH EAX                            ; 004fb8ea
    MOVSD ES:EDI,ESI                    ; 004fb8eb
    MOVSD ES:EDI,ESI                    ; 004fb8ec
    MOVSD ES:EDI,ESI                    ; 004fb8ed
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0 ; 004fb8ee
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 004fb8f3
    LEA EDI,[ESP + 0x7ec]               ; 004fb8f6
    XOR ESI,ESI                         ; 004fb8fd
    CALL engine_matrix.c_invertTransformMatrix_FUN_005073d0 ; 004fb8ff
        ;   XREF to: 005073d0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_invertTransformMatrix_FUN_005073d0()
    FLD float ptr [ESP + 0x8a0]         ; 004fb904
    FLD float ptr [ESP + 0x898]         ; 004fb90b
    FCHS                                ; 004fb912
    FSTP float ptr [ESP + 0x8dc]        ; 004fb914
    MOV EAX,dword ptr [ESP + 0x8dc]     ; 004fb91b
    MOV dword ptr [ESP + 0x83c],ESI     ; 004fb922
    MOV dword ptr [ESP + 0x838],EAX     ; 004fb929
    LEA EAX,[ESP + 0x834]               ; 004fb930
    FCHS                                ; 004fb937
    PUSH EAX                            ; 004fb939
    LEA EAX,[ESP + 0x75c]               ; 004fb93a
    LEA ESI,[ESP + 0x7e4]               ; 004fb941
    PUSH EAX                            ; 004fb948
    FSTP float ptr [ESP + 0x83c]        ; 004fb949
    CALL core_dirmat.cpp_FUN_0045f690   ; 004fb950
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    LEA ESI,[ESP + 0x7e8]               ; 004fb955
    LEA EAX,[ESP + 0x7f4]               ; 004fb95c
    ADD ESP,0x8                         ; 004fb963
    LEA EDX,[ESP + 0x7c8]               ; 004fb966
    MOVSD ES:EDI,ESI                    ; 004fb96d
    MOVSD ES:EDI,ESI                    ; 004fb96e
    MOVSD ES:EDI,ESI                    ; 004fb96f
    CMP EDX,EAX                         ; 004fb970
    JZ 0x004fb99e                       ; 004fb972
        ;   XREF to: 004fb99e (CONDITIONAL_JUMP)  ; LAB_004fb99e
    MOV EAX,dword ptr [ESP + 0x7ec]     ; 004fb974
    MOV dword ptr [ESP + 0x7c8],EAX     ; 004fb97b
    MOV EAX,dword ptr [ESP + 0x7f0]     ; 004fb982
    MOV dword ptr [ESP + 0x7cc],EAX     ; 004fb989
    MOV EAX,dword ptr [ESP + 0x7f4]     ; 004fb990
    MOV dword ptr [ESP + 0x7d0],EAX     ; 004fb997
    FLD float ptr [ESP + 0x8a4]         ; 004fb99e
        ;   Label: LAB_004fb99e
    LEA ESI,[ESP + 0x7bc]               ; 004fb9a5
    FADD float ptr [ESP + 0x7cc]        ; 004fb9ac
    SUB ESP,0x4                         ; 004fb9b3
    FLD float ptr [ESP + 0x898]         ; 004fb9b6
    FXCH                                ; 004fb9bd
    FSTP float ptr [ESP]                ; 004fb9bf
    FADD float ptr [ESP + 0x7cc]        ; 004fb9c2
    SUB ESP,0x4                         ; 004fb9c9
    LEA EDI,[ESP + 0x824]               ; 004fb9cc
    FSTP float ptr [ESP]                ; 004fb9d3
    CALL core_inv.cpp_FUN_004f63c0      ; 004fb9d6
        ;   XREF to: 004f63c0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004f63c0()
    LEA ESI,[ESP + 0x7c4]               ; 004fb9db
    LEA EDX,[ESP + 0x824]               ; 004fb9e2
    ADD ESP,0x8                         ; 004fb9e9
    MOV EAX,[0x00612560]                ; 004fb9ec | DAT_00612560
    MOVSD ES:EDI,ESI                    ; 004fb9f1
    MOVSD ES:EDI,ESI                    ; 004fb9f2
    MOVSD ES:EDI,ESI                    ; 004fb9f3
    PUSH EDX                            ; 004fb9f4
    MOV EAX,dword ptr [EAX]             ; 004fb9f5 | DAT_01bc120c
    PUSH EAX                            ; 004fb9f7
    CALL engine_special.cpp_FUN_00580173 ; 004fb9f8
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004fb9fd
    FLD float ptr [ESP + 0x898]         ; 004fba00
    MOV EAX,dword ptr [ESP + 0x8a0]     ; 004fba07
    FCHS                                ; 004fba0e
    FSTP float ptr [ESP + 0x8dc]        ; 004fba10
    MOV dword ptr [ESP + 0x858],EAX     ; 004fba17
    MOV EAX,dword ptr [ESP + 0x8dc]     ; 004fba1e
    MOV dword ptr [ESP + 0x85c],EAX     ; 004fba25
    LEA EAX,[ESP + 0x858]               ; 004fba2c
    LEA ESI,[ESP + 0x828]               ; 004fba33
    PUSH EAX                            ; 004fba3a
    LEA EAX,[ESP + 0x75c]               ; 004fba3b
    XOR EDI,EDI                         ; 004fba42
    PUSH EAX                            ; 004fba44
    MOV dword ptr [ESP + 0x868],EDI     ; 004fba45
    LEA EDI,[ESP + 0x794]               ; 004fba4c
    CALL core_dirmat.cpp_FUN_0045f690   ; 004fba53
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    LEA ESI,[ESP + 0x830]               ; 004fba58
    LEA EDX,[ESP + 0x794]               ; 004fba5f
    ADD ESP,0x8                         ; 004fba66
    LEA EAX,[ESP + 0x7c8]               ; 004fba69
    MOVSD ES:EDI,ESI                    ; 004fba70
    MOVSD ES:EDI,ESI                    ; 004fba71
    MOVSD ES:EDI,ESI                    ; 004fba72
    CMP EAX,EDX                         ; 004fba73
    JZ 0x004fbaa1                       ; 004fba75
        ;   XREF to: 004fbaa1 (CONDITIONAL_JUMP)  ; LAB_004fbaa1
    MOV EAX,dword ptr [ESP + 0x78c]     ; 004fba77
    MOV dword ptr [ESP + 0x7c8],EAX     ; 004fba7e
    MOV EAX,dword ptr [ESP + 0x790]     ; 004fba85
    MOV dword ptr [ESP + 0x7cc],EAX     ; 004fba8c
    MOV EAX,dword ptr [ESP + 0x794]     ; 004fba93
    MOV dword ptr [ESP + 0x7d0],EAX     ; 004fba9a
    FLD float ptr [ESP + 0x8a4]         ; 004fbaa1
        ;   Label: LAB_004fbaa1
    LEA ESI,[ESP + 0x7d4]               ; 004fbaa8
    FADD float ptr [ESP + 0x7cc]        ; 004fbaaf
    SUB ESP,0x4                         ; 004fbab6
    FLD float ptr [ESP + 0x898]         ; 004fbab9
    FXCH                                ; 004fbac0
    FSTP float ptr [ESP]                ; 004fbac2
    FADD float ptr [ESP + 0x7cc]        ; 004fbac5
    SUB ESP,0x4                         ; 004fbacc
    LEA EDI,[ESP + 0x824]               ; 004fbacf
    FSTP float ptr [ESP]                ; 004fbad6
    CALL core_inv.cpp_FUN_004f63c0      ; 004fbad9
        ;   XREF to: 004f63c0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004f63c0()
    LEA ESI,[ESP + 0x7dc]               ; 004fbade
    ADD ESP,0x8                         ; 004fbae5
    MOV EAX,[0x00612560]                ; 004fbae8 | DAT_00612560
    MOVSD ES:EDI,ESI                    ; 004fbaed
    MOVSD ES:EDI,ESI                    ; 004fbaee
    MOVSD ES:EDI,ESI                    ; 004fbaef
    LEA EDX,[ESP + 0x81c]               ; 004fbaf0
    MOV EAX,dword ptr [EAX]             ; 004fbaf7 | DAT_01bc120c
    PUSH EDX                            ; 004fbaf9
    ADD EAX,0x30                        ; 004fbafa
    PUSH EAX                            ; 004fbafd
    CALL engine_special.cpp_FUN_00580173 ; 004fbafe
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004fbb03
    MOV EAX,dword ptr [ESP + 0x8a0]     ; 004fbb06
    MOV dword ptr [ESP + 0x7a4],EAX     ; 004fbb0d
    MOV EAX,dword ptr [ESP + 0x898]     ; 004fbb14
    MOV dword ptr [ESP + 0x7a8],EAX     ; 004fbb1b
    XOR EAX,EAX                         ; 004fbb22
    MOV dword ptr [ESP + 0x7ac],EAX     ; 004fbb24
    LEA EAX,[ESP + 0x7a4]               ; 004fbb2b
    PUSH EAX                            ; 004fbb32
    LEA EAX,[ESP + 0x75c]               ; 004fbb33
    PUSH EAX                            ; 004fbb3a
    LEA ESI,[ESP + 0x80c]               ; 004fbb3b
    LEA EDI,[ESP + 0x848]               ; 004fbb42
    CALL core_dirmat.cpp_FUN_0045f690   ; 004fbb49
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    LEA ESI,[ESP + 0x80c]               ; 004fbb4e
    LEA EAX,[ESP + 0x848]               ; 004fbb55
    ADD ESP,0x8                         ; 004fbb5c
    LEA EDX,[ESP + 0x7c8]               ; 004fbb5f
    MOVSD ES:EDI,ESI                    ; 004fbb66
    MOVSD ES:EDI,ESI                    ; 004fbb67
    MOVSD ES:EDI,ESI                    ; 004fbb68
    CMP EDX,EAX                         ; 004fbb69
    JZ 0x004fbb97                       ; 004fbb6b
        ;   XREF to: 004fbb97 (CONDITIONAL_JUMP)  ; LAB_004fbb97
    MOV EAX,dword ptr [ESP + 0x840]     ; 004fbb6d
    MOV dword ptr [ESP + 0x7c8],EAX     ; 004fbb74
    MOV EAX,dword ptr [ESP + 0x844]     ; 004fbb7b
    MOV dword ptr [ESP + 0x7cc],EAX     ; 004fbb82
    MOV EAX,dword ptr [ESP + 0x848]     ; 004fbb89
    MOV dword ptr [ESP + 0x7d0],EAX     ; 004fbb90
    FLD float ptr [ESP + 0x8a4]         ; 004fbb97
        ;   Label: LAB_004fbb97
    LEA ESI,[ESP + 0x780]               ; 004fbb9e
    FADD float ptr [ESP + 0x7cc]        ; 004fbba5
    SUB ESP,0x4                         ; 004fbbac
    FLD float ptr [ESP + 0x898]         ; 004fbbaf
    FXCH                                ; 004fbbb6
    FSTP float ptr [ESP]                ; 004fbbb8
    FADD float ptr [ESP + 0x7cc]        ; 004fbbbb
    SUB ESP,0x4                         ; 004fbbc2
    LEA EDI,[ESP + 0x824]               ; 004fbbc5
    FSTP float ptr [ESP]                ; 004fbbcc
    CALL core_inv.cpp_FUN_004f63c0      ; 004fbbcf
        ;   XREF to: 004f63c0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004f63c0()
    LEA ESI,[ESP + 0x788]               ; 004fbbd4
    ADD ESP,0x8                         ; 004fbbdb
    MOV EAX,[0x00612560]                ; 004fbbde | DAT_00612560
    MOVSD ES:EDI,ESI                    ; 004fbbe3
    MOVSD ES:EDI,ESI                    ; 004fbbe4
    MOVSD ES:EDI,ESI                    ; 004fbbe5
    LEA EDX,[ESP + 0x81c]               ; 004fbbe6
    MOV EAX,dword ptr [EAX]             ; 004fbbed | DAT_01bc120c
    PUSH EDX                            ; 004fbbef
    ADD EAX,0x60                        ; 004fbbf0
    PUSH EAX                            ; 004fbbf3
    LEA ESI,[ESP + 0x7a0]               ; 004fbbf4
    LEA EDI,[ESP + 0x818]               ; 004fbbfb
    CALL engine_special.cpp_FUN_00580173 ; 004fbc02
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004fbc07
    XOR EDX,EDX                         ; 004fbc0a
    MOV EAX,dword ptr [ESP + 0x898]     ; 004fbc0c
    FLD float ptr [ESP + 0x8a0]         ; 004fbc13
    MOV dword ptr [ESP + 0x868],EAX     ; 004fbc1a
    LEA EAX,[ESP + 0x864]               ; 004fbc21
    FCHS                                ; 004fbc28
    PUSH EAX                            ; 004fbc2a
    LEA EAX,[ESP + 0x75c]               ; 004fbc2b
    MOV dword ptr [ESP + 0x870],EDX     ; 004fbc32
    PUSH EAX                            ; 004fbc39
    FSTP float ptr [ESP + 0x86c]        ; 004fbc3a
    CALL core_dirmat.cpp_FUN_0045f690   ; 004fbc41
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    LEA ESI,[ESP + 0x7a0]               ; 004fbc46
    LEA EAX,[ESP + 0x818]               ; 004fbc4d
    ADD ESP,0x8                         ; 004fbc54
    LEA EDX,[ESP + 0x7c8]               ; 004fbc57
    MOVSD ES:EDI,ESI                    ; 004fbc5e
    MOVSD ES:EDI,ESI                    ; 004fbc5f
    MOVSD ES:EDI,ESI                    ; 004fbc60
    CMP EDX,EAX                         ; 004fbc61
    JZ 0x004fbc8f                       ; 004fbc63
        ;   XREF to: 004fbc8f (CONDITIONAL_JUMP)  ; LAB_004fbc8f
    MOV EAX,dword ptr [ESP + 0x810]     ; 004fbc65
    MOV dword ptr [ESP + 0x7c8],EAX     ; 004fbc6c
    MOV EAX,dword ptr [ESP + 0x814]     ; 004fbc73
    MOV dword ptr [ESP + 0x7cc],EAX     ; 004fbc7a
    MOV EAX,dword ptr [ESP + 0x818]     ; 004fbc81
    MOV dword ptr [ESP + 0x7d0],EAX     ; 004fbc88
    FLD float ptr [ESP + 0x8a4]         ; 004fbc8f
        ;   Label: LAB_004fbc8f
    LEA ESI,[ESP + 0x84c]               ; 004fbc96
    FADD float ptr [ESP + 0x7cc]        ; 004fbc9d
    SUB ESP,0x4                         ; 004fbca4
    FLD float ptr [ESP + 0x898]         ; 004fbca7
    FXCH                                ; 004fbcae
    FSTP float ptr [ESP]                ; 004fbcb0
    FADD float ptr [ESP + 0x7cc]        ; 004fbcb3
    SUB ESP,0x4                         ; 004fbcba
    LEA EDI,[ESP + 0x824]               ; 004fbcbd
    FSTP float ptr [ESP]                ; 004fbcc4
    CALL core_inv.cpp_FUN_004f63c0      ; 004fbcc7
        ;   XREF to: 004f63c0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004f63c0()
    LEA ESI,[ESP + 0x854]               ; 004fbccc
    LEA EAX,[ESP + 0x824]               ; 004fbcd3
    ADD ESP,0x8                         ; 004fbcda
    MOV EDX,dword ptr [0x00612560]      ; 004fbcdd | DAT_00612560
    MOVSD ES:EDI,ESI                    ; 004fbce3
    MOVSD ES:EDI,ESI                    ; 004fbce4
    MOVSD ES:EDI,ESI                    ; 004fbce5
    PUSH EAX                            ; 004fbce6
    MOV EAX,dword ptr [EDX]             ; 004fbce7 | DAT_01bc120c
    ADD EAX,0x90                        ; 004fbce9
    PUSH EAX                            ; 004fbcee
    CALL engine_special.cpp_FUN_00580173 ; 004fbcef
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    MOV ECX,0x4                         ; 004fbcf4
    MOV EAX,0x1                         ; 004fbcf9
    MOV EDX,0x1000000                   ; 004fbcfe
    ADD ESP,0x8                         ; 004fbd03
    XOR EBX,EBX                         ; 004fbd06
    MOV dword ptr [ESP + 0x714],ECX     ; 004fbd08
    MOV dword ptr [ESP + 0x728],EBX     ; 004fbd0f
    MOV dword ptr [ESP + 0x72c],EBX     ; 004fbd16
    MOV dword ptr [ESP + 0x730],EBX     ; 004fbd1d
    MOV dword ptr [ESP + 0x734],EAX     ; 004fbd24
    MOV dword ptr [ESP + 0x738],EDX     ; 004fbd2b
    MOV dword ptr [ESP + 0x73c],EBX     ; 004fbd32
    MOV ESI,EDX                         ; 004fbd39
    MOV dword ptr [ESP + 0x744],EDX     ; 004fbd3b
    MOV dword ptr [ESP + 0x748],EDX     ; 004fbd42
    MOV EBX,0x2                         ; 004fbd49
    MOV EAX,0x3                         ; 004fbd4e
    XOR EDX,EDX                         ; 004fbd53
    MOV dword ptr [ESP + 0x740],EBX     ; 004fbd55
    PUSH EDX                            ; 004fbd5c
    MOV EBX,dword ptr [0x00612560]      ; 004fbd5d | DAT_00612560
    MOV dword ptr [ESP + 0x758],ESI     ; 004fbd63
    PUSH EBX                            ; 004fbd6a | DAT_01bc120c
    MOV dword ptr [ESP + 0x754],EAX     ; 004fbd6b
    MOV dword ptr [ESP + 0x758],EDX     ; 004fbd72
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80 ; 004fbd79
        ;   XREF to: 00483d80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 004fbd7e
    XOR EDI,EDI                         ; 004fbd81
    PUSH EDI                            ; 004fbd83
    MOV ESI,dword ptr [0x00612560]      ; 004fbd84 | DAT_00612560
    PUSH ESI                            ; 004fbd8a | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70 ; 004fbd8b
        ;   XREF to: 00483d70 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 004fbd90
    PUSH 0xffff                         ; 004fbd93
    MOV EDI,dword ptr [0x00612560]      ; 004fbd98 | DAT_00612560
    PUSH EDI                            ; 004fbd9e | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0 ; 004fbd9f
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004fbda4
    PUSH 0x1d1baac                      ; 004fbda7
    MOV EAX,[0x00612560]                ; 004fbdac | DAT_00612560
    PUSH EAX                            ; 004fbdb1 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 004fbdb2
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004fbdb7
    PUSH 0x23                           ; 004fbdba
    LEA EAX,[ESP + 0x714]               ; 004fbdbc
    PUSH EAX                            ; 004fbdc3
    MOV EDX,dword ptr [0x00612560]      ; 004fbdc4 | DAT_00612560
    PUSH EDX                            ; 004fbdca | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_00482210 ; 004fbdcb
        ;   XREF to: 00482210 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_00482210(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly, int render_flags)
    ADD ESP,0xc                         ; 004fbdd0
    PUSH 0x1                            ; 004fbdd3
    MOV ECX,dword ptr [0x00612560]      ; 004fbdd5 | DAT_00612560
    PUSH ECX                            ; 004fbddb | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70 ; 004fbddc
        ;   XREF to: 00483d70 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 004fbde1
    MOV EAX,dword ptr [ESP + 0x878]     ; 004fbde4
        ;   Label: LAB_004fbde4
    MOV [0x01c50948],EAX                ; 004fbdeb | DAT_01c50948
    MOV ESP,EBP                         ; 004fbdf0
        ;   Label: LAB_004fbdf0
    POP EBP                             ; 004fbdf2
    POP EDI                             ; 004fbdf3
    POP ESI                             ; 004fbdf4
    POP EBX                             ; 004fbdf5
    RET                                 ; 004fbdf6
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fbdf7
        ;   Label: LAB_004fbdf7
    MOV dword ptr [EAX + 0x344],0x0     ; 004fbdfa
    MOV dword ptr [EAX + 0x34c],0x0     ; 004fbe04
    MOV dword ptr [EAX + 0x350],0x0     ; 004fbe0e
    MOV dword ptr [EAX + 0x340],0x0     ; 004fbe18
    JMP 0x004fae59                      ; 004fbe22
        ;   XREF to: 004fae59 (UNCONDITIONAL_JUMP)  ; LAB_004fae59
    MOV EAX,[0x0152d250]                ; 004fbe27 | DAT_0152d250
        ;   Label: LAB_004fbe27
    MOV dword ptr [ESP + 0x8d4],EAX     ; 004fbe2c
    JMP 0x004faea8                      ; 004fbe33
        ;   XREF to: 004faea8 (UNCONDITIONAL_JUMP)  ; LAB_004faea8
    MOV EAX,dword ptr [ESP + 0x89c]     ; 004fbe38
        ;   Label: LAB_004fbe38
    MOV EDX,EAX                         ; 004fbe3f
    SAR EDX,0x1f                        ; 004fbe41
    SUB EAX,EDX                         ; 004fbe44
    SAR EAX,0x1                         ; 004fbe46
    MOV dword ptr [ESP + 0x89c],EAX     ; 004fbe48
    MOV EAX,dword ptr [ESP + 0x890]     ; 004fbe4f
    MOV EDX,EAX                         ; 004fbe56
    SAR EDX,0x1f                        ; 004fbe58
    SUB EAX,EDX                         ; 004fbe5b
    SAR EAX,0x1                         ; 004fbe5d
    MOV EDI,0x28                        ; 004fbe5f
    MOV ECX,0x8                         ; 004fbe64
    MOV ESI,0x18                        ; 004fbe69
    MOV EBX,0x12                        ; 004fbe6e
    MOV dword ptr [ESP + 0x880],EDI     ; 004fbe73
    MOV dword ptr [ESP + 0x8a8],ECX     ; 004fbe7a
    MOV dword ptr [ESP + 0x890],EAX     ; 004fbe81
    JMP 0x004faf21                      ; 004fbe88
        ;   XREF to: 004faf21 (UNCONDITIONAL_JUMP)  ; LAB_004faf21
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fbe8d
        ;   Label: LAB_004fbe8d
    PUSH 0x5e689e                       ; 004fbe90 | = "CTommyGun"
    MOV EDI,dword ptr [0x0061b498]      ; 004fbe95 | DAT_0061b498
    MOV EDX,dword ptr [EAX + 0x338]     ; 004fbe9b
    MOV ESI,dword ptr [0x0061b49c]      ; 004fbea1 | DAT_0061b49c
    PUSH EDX                            ; 004fbea7
    SUB EDI,EBX                         ; 004fbea8
    SUB ESI,EBX                         ; 004fbeaa
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 004fbeac
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    XOR EBX,EBX                         ; 004fbeb1
    ADD ESP,0x8                         ; 004fbeb3
    TEST EAX,EAX                        ; 004fbeb6
    JZ 0x004fbebf                       ; 004fbeb8
        ;   XREF to: 004fbebf (CONDITIONAL_JUMP)  ; LAB_004fbebf
    MOV EBX,0x1d1ba0c                   ; 004fbeba
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fbebf
        ;   Label: LAB_004fbebf
    PUSH 0x5e68a8                       ; 004fbec2 | = "CShotgun"
    MOV ECX,dword ptr [EAX + 0x338]     ; 004fbec7
    PUSH ECX                            ; 004fbecd
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 004fbece
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004fbed3
    TEST EAX,EAX                        ; 004fbed6
    JZ 0x004fbedf                       ; 004fbed8
        ;   XREF to: 004fbedf (CONDITIONAL_JUMP)  ; LAB_004fbedf
    MOV EBX,0x1d1ba5c                   ; 004fbeda
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fbedf
        ;   Label: LAB_004fbedf
    PUSH 0x5e68b1                       ; 004fbee2 | = "CElephantGun"
    MOV EDX,dword ptr [EAX + 0x338]     ; 004fbee7
    PUSH EDX                            ; 004fbeed
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 004fbeee
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004fbef3
    TEST EAX,EAX                        ; 004fbef6
    JZ 0x004fbeff                       ; 004fbef8
        ;   XREF to: 004fbeff (CONDITIONAL_JUMP)  ; LAB_004fbeff
    MOV EBX,0x1d1ba5c                   ; 004fbefa
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fbeff
        ;   Label: LAB_004fbeff
    PUSH 0x5e68be                       ; 004fbf02 | DAT_005e68be
    MOV ECX,dword ptr [EAX + 0x338]     ; 004fbf07
    PUSH ECX                            ; 004fbf0d
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 004fbf0e
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004fbf13
    TEST EAX,EAX                        ; 004fbf16
    JZ 0x004fbf91                       ; 004fbf18
        ;   XREF to: 004fbf91 (CONDITIONAL_JUMP)  ; LAB_004fbf91
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fbf1e
    MOV EAX,dword ptr [EAX + 0x338]     ; 004fbf21
    CMP dword ptr [EAX + 0x56c],0x0     ; 004fbf27
    JNZ 0x004fbf35                      ; 004fbf2e
        ;   XREF to: 004fbf35 (CONDITIONAL_JUMP)  ; LAB_004fbf35
    MOV EBX,0x1d1ba20                   ; 004fbf30
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fbf35
        ;   Label: LAB_004fbf35
    MOV EAX,dword ptr [EAX + 0x338]     ; 004fbf38
    CMP dword ptr [EAX + 0x56c],0x3     ; 004fbf3e
    JNZ 0x004fbf4c                      ; 004fbf45
        ;   XREF to: 004fbf4c (CONDITIONAL_JUMP)  ; LAB_004fbf4c
    MOV EBX,0x1d1ba34                   ; 004fbf47
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fbf4c
        ;   Label: LAB_004fbf4c
    MOV EAX,dword ptr [EAX + 0x338]     ; 004fbf4f
    CMP dword ptr [EAX + 0x56c],0x7     ; 004fbf55
    JNZ 0x004fbf63                      ; 004fbf5c
        ;   XREF to: 004fbf63 (CONDITIONAL_JUMP)  ; LAB_004fbf63
    MOV EBX,0x1d1ba48                   ; 004fbf5e
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fbf63
        ;   Label: LAB_004fbf63
    MOV EAX,dword ptr [EAX + 0x338]     ; 004fbf66
    CMP dword ptr [EAX + 0x56c],0x8     ; 004fbf6c
    JNZ 0x004fbf7a                      ; 004fbf73
        ;   XREF to: 004fbf7a (CONDITIONAL_JUMP)  ; LAB_004fbf7a
    MOV EBX,0x1d1ba70                   ; 004fbf75
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fbf7a
        ;   Label: LAB_004fbf7a
    MOV EAX,dword ptr [EAX + 0x338]     ; 004fbf7d
    CMP dword ptr [EAX + 0x56c],0x1     ; 004fbf83
    JNZ 0x004fbf91                      ; 004fbf8a
        ;   XREF to: 004fbf91 (CONDITIONAL_JUMP)  ; LAB_004fbf91
    MOV EBX,0x1d1ba84                   ; 004fbf8c
    TEST EBX,EBX                        ; 004fbf91
        ;   Label: LAB_004fbf91
    JZ 0x004fbfa8                       ; 004fbf93
        ;   XREF to: 004fbfa8 (CONDITIONAL_JUMP)  ; LAB_004fbfa8
    MOV ECX,dword ptr [ESP + 0x88c]     ; 004fbf95
    PUSH ECX                            ; 004fbf9c
    PUSH ESI                            ; 004fbf9d
    PUSH EDI                            ; 004fbf9e
    PUSH EBX                            ; 004fbf9f
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0 ; 004fbfa0
        ;   XREF to: 0040d4b0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004fbfa5
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fbfa8
        ;   Label: LAB_004fbfa8
    PUSH 0x5e68c3                       ; 004fbfab | = "CFlashlight"
    MOV EBX,dword ptr [EAX + 0x338]     ; 004fbfb0
    PUSH EBX                            ; 004fbfb6
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 004fbfb7
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004fbfbc
    TEST EAX,EAX                        ; 004fbfbf
    JNZ 0x004fb0e8                      ; 004fbfc1
        ;   XREF to: 004fb0e8 (CONDITIONAL_JUMP)  ; LAB_004fb0e8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fbfc7
    FLD float ptr [EAX + 0x350]         ; 004fbfca
    FLDZ                                ; 004fbfd0
    FCOMPP                              ; 004fbfd2
    FNSTSW AX                           ; 004fbfd4
    SAHF                                ; 004fbfd6
    JC 0x004fc068                       ; 004fbfd7
        ;   XREF to: 004fc068 (CONDITIONAL_JUMP)  ; LAB_004fc068
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fbfdd
        ;   Label: LAB_004fbfdd
    MOV EAX,dword ptr [EAX + 0x338]     ; 004fbfe0
    MOV ECX,dword ptr [EAX + 0x568]     ; 004fbfe6
    PUSH ECX                            ; 004fbfec
    PUSH 0x5e68cf                       ; 004fbfed | DAT_005e68cf
    LEA EAX,[ESP + 0x318]               ; 004fbff2
    PUSH EAX                            ; 004fbff9
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004fbffa
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 004fbfff
    PUSH 0x58                           ; 004fc002
        ;   Label: LAB_004fc002
    MOV EBX,dword ptr [ESP + 0x8d8]     ; 004fc004
    PUSH EBX                            ; 004fc00b
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510 ; 004fc00c
        ;   XREF to: 004c4510 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004fc011
    MOV EBX,EAX                         ; 004fc014
    LEA EAX,[ESP + 0x310]               ; 004fc016
    PUSH EAX                            ; 004fc01d
    MOV ESI,dword ptr [ESP + 0x8d8]     ; 004fc01e
    PUSH ESI                            ; 004fc025
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0 ; 004fc026
        ;   XREF to: 004c3ea0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 004fc02b
    MOV EDX,dword ptr [0x0061b49c]      ; 004fc02e | DAT_0061b49c
    MOV EDI,dword ptr [ESP + 0x8a8]     ; 004fc034
    PUSH 0x0                            ; 004fc03b
    SUB EDX,EDI                         ; 004fc03d
    PUSH 0xf8                           ; 004fc03f
    SUB EDX,EBX                         ; 004fc044
    PUSH EDX                            ; 004fc046
    MOV EDX,dword ptr [0x0061b498]      ; 004fc047 | DAT_0061b498
    SUB EDX,EDI                         ; 004fc04d
    SUB EDX,EAX                         ; 004fc04f
    PUSH EDX                            ; 004fc051
    LEA EAX,[ESP + 0x320]               ; 004fc052
    PUSH EAX                            ; 004fc059
    PUSH ESI                            ; 004fc05a
    CALL engine_font.cpp_FUN_004c1dd0   ; 004fc05b
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004c1dd0()
    ADD ESP,0x18                        ; 004fc060
    JMP 0x004fb0e8                      ; 004fc063
        ;   XREF to: 004fb0e8 (UNCONDITIONAL_JUMP)  ; LAB_004fb0e8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fc068
        ;   Label: LAB_004fc068
    CMP dword ptr [EAX + 0x454],0x0     ; 004fc06b
    JNZ 0x004fbfdd                      ; 004fc072
        ;   XREF to: 004fbfdd (CONDITIONAL_JUMP)  ; LAB_004fbfdd
    MOV EAX,dword ptr [EAX + 0x338]     ; 004fc078
    MOV EDI,dword ptr [EAX + 0x568]     ; 004fc07e
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fc084
    PUSH EDI                            ; 004fc087
    MOV EDX,dword ptr [EAX + 0x464]     ; 004fc088
    PUSH EDX                            ; 004fc08e
    CALL core_inv.cpp_getItemDisplayName_FUN_004f62e0 ; 004fc08f
        ;   XREF to: 004f62e0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_getItemDisplayName_FUN_004f62e0()
    ADD ESP,0x4                         ; 004fc094
    PUSH EAX                            ; 004fc097
    PUSH 0x5e68d2                       ; 004fc098 | = "%s %d"
    LEA EAX,[ESP + 0x31c]               ; 004fc09d
    PUSH EAX                            ; 004fc0a4
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004fc0a5
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 004fc0aa
    JMP 0x004fc002                      ; 004fc0ad
        ;   XREF to: 004fc002 (UNCONDITIONAL_JUMP)  ; LAB_004fc002
    PUSH EAX                            ; 004fc0b2
        ;   Label: LAB_004fc0b2
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fc0b3
    MOV EDX,dword ptr [EAX + 0x338]     ; 004fc0b6
    PUSH EDX                            ; 004fc0bc
    PUSH EAX                            ; 004fc0bd
    CALL core_inv.cpp_FUN_004fa540      ; 004fc0be
        ;   XREF to: 004fa540 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004fa540()
    ADD ESP,0xc                         ; 004fc0c3
    TEST EAX,EAX                        ; 004fc0c6
    JNZ 0x004fc0e7                      ; 004fc0c8
        ;   XREF to: 004fc0e7 (CONDITIONAL_JUMP)  ; LAB_004fc0e7
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fc0ca
    PUSH 0x1                            ; 004fc0cd
    MOV EBX,dword ptr [EAX + 0x338]     ; 004fc0cf
    PUSH EBX                            ; 004fc0d5
    PUSH EAX                            ; 004fc0d6
    CALL core_inv.cpp_FUN_004fa540      ; 004fc0d7
        ;   XREF to: 004fa540 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004fa540()
    ADD ESP,0xc                         ; 004fc0dc
    TEST EAX,EAX                        ; 004fc0df
    JZ 0x004fc172                       ; 004fc0e1
        ;   XREF to: 004fc172 (CONDITIONAL_JUMP)  ; LAB_004fc172
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fc0e7
        ;   Label: LAB_004fc0e7
    MOV ECX,dword ptr [EAX + 0x464]     ; 004fc0ea
    PUSH ECX                            ; 004fc0f0
    CALL core_inv.cpp_getItemDisplayName_FUN_004f62e0 ; 004fc0f1
        ;   XREF to: 004f62e0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_getItemDisplayName_FUN_004f62e0()
    ADD ESP,0x4                         ; 004fc0f6
    PUSH EAX                            ; 004fc0f9
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fc0fa
    MOV EBX,dword ptr [EAX + 0x338]     ; 004fc0fd
    PUSH EBX                            ; 004fc103
    CALL core_inv.cpp_getItemDescription_FUN_004f6350 ; 004fc104
        ;   XREF to: 004f6350 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_getItemDescription_FUN_004f6350()
    ADD ESP,0x4                         ; 004fc109
    PUSH EAX                            ; 004fc10c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fc10d
    MOV ESI,dword ptr [EAX + 0x338]     ; 004fc110
    PUSH ESI                            ; 004fc116
    CALL core_inv.cpp_getItemDisplayName_FUN_004f62e0 ; 004fc117
        ;   XREF to: 004f62e0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_getItemDisplayName_FUN_004f62e0()
    ADD ESP,0x4                         ; 004fc11c
    PUSH EAX                            ; 004fc11f
    PUSH 0x5e68df                       ; 004fc120 | = "%s\n\n%s %s"
    LEA EAX,[ESP + 0x620]               ; 004fc125
    PUSH EAX                            ; 004fc12c
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004fc12d
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x14                        ; 004fc132
    PUSH 0x5e68e9                       ; 004fc135 | = " are loaded."
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004fc13a
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004fc13f
    LEA EDI,[ESP + 0x610]               ; 004fc142
    MOV ESI,EAX                         ; 004fc149
    PUSH EDI                            ; 004fc14b
    SUB ECX,ECX                         ; 004fc14c
    DEC ECX                             ; 004fc14e
    MOV AL,0x0                          ; 004fc14f
    SCASB.REPNE ES:EDI                  ; 004fc151
    DEC EDI                             ; 004fc153
    MOV AL,byte ptr [ESI]               ; 004fc154
        ;   Label: LAB_004fc154
    MOV byte ptr [EDI],AL               ; 004fc156
    CMP AL,0x0                          ; 004fc158
    JZ 0x004fc16c                       ; 004fc15a
        ;   XREF to: 004fc16c (CONDITIONAL_JUMP)  ; LAB_004fc16c
    MOV AL,byte ptr [ESI + 0x1]         ; 004fc15c
    ADD ESI,0x2                         ; 004fc15f
    MOV byte ptr [EDI + 0x1],AL         ; 004fc162
    ADD EDI,0x2                         ; 004fc165
    CMP AL,0x0                          ; 004fc168
    JNZ 0x004fc154                      ; 004fc16a
        ;   XREF to: 004fc154 (CONDITIONAL_JUMP)  ; LAB_004fc154
    POP EDI                             ; 004fc16c
        ;   Label: LAB_004fc16c
    JMP 0x004fb14d                      ; 004fc16d
        ;   XREF to: 004fb14d (UNCONDITIONAL_JUMP)  ; LAB_004fb14d
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fc172
        ;   Label: LAB_004fc172
    MOV EDI,dword ptr [EAX + 0x338]     ; 004fc175
    PUSH EDI                            ; 004fc17b
    CALL core_inv.cpp_getItemDescription_FUN_004f6350 ; 004fc17c
        ;   XREF to: 004f6350 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_getItemDescription_FUN_004f6350()
    ADD ESP,0x4                         ; 004fc181
    PUSH EAX                            ; 004fc184
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fc185
    MOV EDX,dword ptr [EAX + 0x338]     ; 004fc188
    PUSH EDX                            ; 004fc18e
    CALL core_inv.cpp_getItemDisplayName_FUN_004f62e0 ; 004fc18f
        ;   XREF to: 004f62e0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_getItemDisplayName_FUN_004f62e0()
    ADD ESP,0x4                         ; 004fc194
    PUSH EAX                            ; 004fc197
    PUSH 0x5e68f6                       ; 004fc198 | = "%s\n\n%s"
    JMP 0x004fb13d                      ; 004fc19d
        ;   XREF to: 004fb13d (UNCONDITIONAL_JUMP)  ; LAB_004fb13d
    MOV EDX,ESI                         ; 004fc1a2
        ;   Label: LAB_004fc1a2
    MOV EAX,ESI                         ; 004fc1a4
    SAR EDX,0x1f                        ; 004fc1a6
    SUB EAX,EDX                         ; 004fc1a9
    SAR EAX,0x1                         ; 004fc1ab
    MOV ESI,EAX                         ; 004fc1ad
    MOV EDX,EBX                         ; 004fc1af
    MOV EAX,EBX                         ; 004fc1b1
    SAR EDX,0x1f                        ; 004fc1b3
    SUB EAX,EDX                         ; 004fc1b6
    SAR EAX,0x1                         ; 004fc1b8
    MOV ECX,0x28                        ; 004fc1ba
    MOV EDI,0x8                         ; 004fc1bf
    MOV dword ptr [ESP + 0x884],ECX     ; 004fc1c4
    MOV EBX,EAX                         ; 004fc1cb
    JMP 0x004fb28c                      ; 004fc1cd
        ;   XREF to: 004fb28c (UNCONDITIONAL_JUMP)  ; LAB_004fb28c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fc1d2
        ;   Label: LAB_004fc1d2
    FLD float ptr [EAX + 0x348]         ; 004fc1d5
    FLDZ                                ; 004fc1db
    FCOMPP                              ; 004fc1dd
    FNSTSW AX                           ; 004fc1df
    SAHF                                ; 004fc1e1
    JC 0x004fb526                       ; 004fc1e2
        ;   XREF to: 004fb526 (CONDITIONAL_JUMP)  ; LAB_004fb526
    JMP 0x004fb665                      ; 004fc1e8
        ;   XREF to: 004fb665 (UNCONDITIONAL_JUMP)  ; LAB_004fb665
    MOV EAX,dword ptr [ESP + 0x8d0]     ; 004fc1ed
        ;   Label: LAB_004fc1ed
    XOR EDI,EDI                         ; 004fc1f4
    TEST EAX,EAX                        ; 004fc1f6
    JLE 0x004fb770                      ; 004fc1f8
        ;   XREF to: 004fb770 (CONDITIONAL_JUMP)  ; LAB_004fb770
    MOV EBX,0x1d08378                   ; 004fc1fe
    PUSH 0x0                            ; 004fc203
        ;   Label: LAB_004fc203
    PUSH 0xf8                           ; 004fc205
    PUSH ESI                            ; 004fc20a
    PUSH 0x4                            ; 004fc20b
    PUSH EBX                            ; 004fc20d
    MOV EDX,dword ptr [ESP + 0x8ec]     ; 004fc20e
    PUSH EDX                            ; 004fc215
    INC EDI                             ; 004fc216
    CALL engine_font.cpp_FUN_004c1dd0   ; 004fc217
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004c1dd0()
    ADD ESP,0x18                        ; 004fc21c
    ADD EBX,0x100                       ; 004fc21f
    MOV ECX,dword ptr [ESP + 0x8ac]     ; 004fc225
    MOV EAX,dword ptr [ESP + 0x8d0]     ; 004fc22c
    ADD ESI,ECX                         ; 004fc233
    CMP EDI,EAX                         ; 004fc235
    JL 0x004fc203                       ; 004fc237
        ;   XREF to: 004fc203 (CONDITIONAL_JUMP)  ; LAB_004fc203
    JMP 0x004fb770                      ; 004fc239
        ;   XREF to: 004fb770 (UNCONDITIONAL_JUMP)  ; LAB_004fb770

