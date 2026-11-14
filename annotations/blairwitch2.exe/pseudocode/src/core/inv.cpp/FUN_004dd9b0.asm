; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_inv_cpp_FUN_004dd9b0(float *param_1)
;
; Local Variables:
; undefined8       Stack[-0x918]:8  local_918
; undefined8       Stack[-0x910]:8  local_910
; undefined4       Stack[-0x908]:4  local_908
; undefined4       Stack[-0x904]:4  local_904
; undefined        Stack[-0x900]:1  local_900
; undefined1       Stack[-0x8ff]:1  local_8ff
; undefined        Stack[-0x800]:1  local_800
; undefined        Stack[-0x700]:1  local_700
; undefined        Stack[-0x600]:1  local_600
; undefined        Stack[-0x500]:1  local_500
; undefined        Stack[-0x400]:1  local_400
; undefined        Stack[-0x300]:1  local_300
; undefined        Stack[-0x200]:1  local_200
; undefined4       Stack[-0x1fc]:4  local_1fc
; undefined4       Stack[-0x1e8]:4  local_1e8
; undefined4       Stack[-0x1e4]:4  local_1e4
; undefined4       Stack[-0x1e0]:4  local_1e0
; undefined4       Stack[-0x1dc]:4  local_1dc
; undefined4       Stack[-0x1d8]:4  local_1d8
; undefined4       Stack[-0x1d4]:4  local_1d4
; undefined4       Stack[-0x1d0]:4  local_1d0
; undefined4       Stack[-0x1cc]:4  local_1cc
; undefined4       Stack[-0x1c8]:4  local_1c8
; undefined4       Stack[-0x1c4]:4  local_1c4
; undefined4       Stack[-0x1c0]:4  local_1c0
; undefined4       Stack[-0x1bc]:4  local_1bc
; undefined        Stack[-0x1b8]:1  local_1b8
; undefined4       Stack[-0x190]:4  local_190
; undefined4       Stack[-0x18c]:4  local_18c
; undefined4       Stack[-0x188]:4  local_188
; undefined4       Stack[-0x184]:4  local_184
; undefined4       Stack[-0x180]:4  local_180
; undefined4       Stack[-0x17c]:4  local_17c
; undefined        Stack[-0x178]:1  local_178
; undefined4       Stack[-0x16c]:4  local_16c
; undefined4       Stack[-0x168]:4  local_168
; undefined4       Stack[-0x164]:4  local_164
; undefined4       Stack[-0x160]:4  local_160
; undefined4       Stack[-0x15c]:4  local_15c
; undefined4       Stack[-0x158]:4  local_158
; undefined        Stack[-0x154]:1  local_154
; undefined4       Stack[-0x148]:4  local_148
; undefined4       Stack[-0x144]:4  local_144
; undefined4       Stack[-0x140]:4  local_140
; undefined        Stack[-0x13c]:1  local_13c
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined        Stack[-0x124]:1  local_124
; undefined        Stack[-0x118]:1  local_118
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined        Stack[-0x100]:1  local_100
; undefined        Stack[-0xf4]:1  local_f4
; undefined        Stack[-0xe8]:1  local_e8
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined        Stack[-0xd0]:1  local_d0
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined        Stack[-0xac]:1  local_ac
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
;
; XREF[1]:
;   core_game.cpp_FUN_004b5190 at 004b55c3
;
; Referenced Globals:
;   undefined4 DAT_005dba8a
;   TerminatedCString s_CTommyGun_005dba8f
;   TerminatedCString s_CShotgun_005dba99
;   TerminatedCString s_CElephantGun_005dbaa2
;   undefined4 DAT_005dbaaf
;   undefined4 DAT_005dbab4
;   TerminatedCString s_Bullets_d_005dbab7
;   TerminatedCString s_s_s_005dbac2
;   TerminatedCString s_s_s_s_005dbac9
;   TerminatedCString s_are_loaded_005dbad3
;   TerminatedCString s_s_s_005dbae0
;   TerminatedCString s_d_x_3_0f_005dbae7
;   TerminatedCString s_d_x_6_005dbaf3
;   undefined4 DAT_005dbafa
;   TerminatedCString s_s_s_005dbafd
;   ... and 29 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_isOfClass_FUN_0040c840
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
;   core_dirmat.cpp_FUN_00449530
;   core_inv.cpp_FUN_004d9ff0
;   core_inv.cpp_FUN_004dd0a0
;   core_inv.cpp_getItemDescription_FUN_004d9f80
;   core_inv.cpp_getItemDisplayName_FUN_004d9f10
;   core_inv.cpp_loadAssets_FUN_004da990
;   crt_math.c_round_FUN_005b7ff0
;   crt_unknown.c_sprintf_FUN_005b7790
;   engine_2d.c_fillRectColor_FUN_004031c0
;   engine_3d.c_setRenderAlpha_FUN_00406da0
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900
;   engine_alphabit.cpp_CAlphaBitmap_render_FUN_0040dab0
;   ... and 12 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dd9b0
        ;   Label: core_inv.cpp_FUN_004dd9b0
    PUSH ESI                            ; 004dd9b1
    PUSH EDI                            ; 004dd9b2
    PUSH EBP                            ; 004dd9b3
    MOV EBP,ESP                         ; 004dd9b4
    SUB ESP,0x8fc                       ; 004dd9b6
    AND ESP,0xfffffff8                  ; 004dd9bc
    MOV EBX,dword ptr [EBP + 0x14]      ; 004dd9bf
    MOV EAX,[0x00616494]                ; 004dd9c2 | g_CGamePtr
    CMP dword ptr [EAX + 0x244],0x0     ; 004dd9c7 | g_CGameInstance.letterbox_mode
    JNZ 0x004de9c6                      ; 004dd9ce
        ;   XREF to: 004de9c6 (CONDITIONAL_JUMP)  ; LAB_004de9c6
    MOV EDX,dword ptr [0x01cedef4]      ; 004dd9d4 | DAT_01cedef4
    MOV EAX,dword ptr [EBX + 0x4]       ; 004dd9da
    CMP EAX,dword ptr [EDX*0x4 + 0x1cedee4] ; 004dd9dd
    JNZ 0x004de9c6                      ; 004dd9e4
        ;   XREF to: 004de9c6 (CONDITIONAL_JUMP)  ; LAB_004de9c6
    MOV ESI,dword ptr [0x006141bc]      ; 004dd9ea | DAT_006141bc
    CMP ESI,dword ptr [0x01d02f40]      ; 004dd9f0 | DAT_01d02f40
    JNZ 0x004de9cd                      ; 004dd9f6
        ;   XREF to: 004de9cd (CONDITIONAL_JUMP)  ; LAB_004de9cd
    MOV EAX,[0x01c37788]                ; 004dd9fc | DAT_01c37788
        ;   Label: LAB_004dd9fc
    MOV dword ptr [ESP + 0x87c],EAX     ; 004dda01
    MOV EAX,[0x01511cc4]                ; 004dda08 | DAT_01511cc4
    XOR EDI,EDI                         ; 004dda0d
    MOV dword ptr [ESP + 0x8e0],EAX     ; 004dda0f
    MOV EAX,[0x006141bc]                ; 004dda16 | DAT_006141bc
    MOV dword ptr [0x01c37788],EDI      ; 004dda1b | DAT_01c37788
    CMP EAX,0x180                       ; 004dda21
    JGE 0x004dda35                      ; 004dda26
        ;   XREF to: 004dda35 (CONDITIONAL_JUMP)  ; LAB_004dda35
    CMP dword ptr [EBX + 0x454],0x0     ; 004dda28
    JZ 0x004de9d7                       ; 004dda2f
        ;   XREF to: 004de9d7 (CONDITIONAL_JUMP)  ; LAB_004de9d7
    MOV EAX,dword ptr [EBX + 0x468]     ; 004dda35
        ;   Label: LAB_004dda35
    CMP dword ptr [EBX + EAX*0x4 + 0x610],0x0 ; 004dda3b
    JZ 0x004ddd00                       ; 004dda43
        ;   XREF to: 004ddd00 (CONDITIONAL_JUMP)  ; LAB_004ddd00
    FLD float ptr [EBX + 0x340]         ; 004dda49
    FLDZ                                ; 004dda4f
    FCOMPP                              ; 004dda51
    FNSTSW AX                           ; 004dda53
    SAHF                                ; 004dda55
    JNC 0x004ddd00                      ; 004dda56
        ;   XREF to: 004ddd00 (CONDITIONAL_JUMP)  ; LAB_004ddd00
    MOV ESI,0x10                        ; 004dda5c
    MOV EAX,[0x00617cd0]                ; 004dda61 | DAT_00617cd0
    MOV EDI,0x70                        ; 004dda66
    MOV dword ptr [ESP + 0x8a8],EAX     ; 004dda6b
    MOV dword ptr [ESP + 0x8b4],ESI     ; 004dda72
    MOV EAX,[0x00617cd4]                ; 004dda79 | DAT_00617cd4
    MOV dword ptr [ESP + 0x888],EDI     ; 004dda7e
    MOV dword ptr [ESP + 0x898],EAX     ; 004dda85
    MOV EAX,[0x006141bc]                ; 004dda8c | DAT_006141bc
    MOV ESI,0x24                        ; 004dda91
    CMP EAX,0x180                       ; 004dda96
    JGE 0x004ddaaa                      ; 004dda9b
        ;   XREF to: 004ddaaa (CONDITIONAL_JUMP)  ; LAB_004ddaaa
    CMP dword ptr [EBX + 0x454],0x0     ; 004dda9d
    JZ 0x004de9e8                       ; 004ddaa4
        ;   XREF to: 004de9e8 (CONDITIONAL_JUMP)  ; LAB_004de9e8
    FLD float ptr [EBX + 0x340]         ; 004ddaaa
        ;   Label: LAB_004ddaaa
    MOV EAX,0xffff                      ; 004ddab0
    FLD1                                ; 004ddab5
    MOV dword ptr [ESP + 0x884],EAX     ; 004ddab7
    FCOMPP                              ; 004ddabe
    FNSTSW AX                           ; 004ddac0
    SAHF                                ; 004ddac2
    JBE 0x004ddadd                      ; 004ddac3
        ;   XREF to: 004ddadd (CONDITIONAL_JUMP)  ; LAB_004ddadd
    FLD float ptr [EBX + 0x340]         ; 004ddac5
    FMUL float ptr [0x005dbb06]         ; 004ddacb | DAT_005dbb06
    CALL crt_math.c_round_FUN_005b7ff0  ; 004ddad1
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x884]       ; 004ddad6
    MOV EDX,dword ptr [0x01d03560]      ; 004ddadd | g_CLightGunClassInfo.name_hash
        ;   Label: LAB_004ddadd
    MOV EAX,dword ptr [EBX + 0x468]     ; 004ddae3
    PUSH EDX                            ; 004ddae9
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x610] ; 004ddaea
    PUSH ECX                            ; 004ddaf1
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004ddaf2
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004ddaf7
    TEST EAX,EAX                        ; 004ddafa
    JZ 0x004dea38                       ; 004ddafc
        ;   XREF to: 004dea38 (CONDITIONAL_JUMP)  ; LAB_004dea38
    FLD float ptr [EAX + 0x6e0]         ; 004ddb02
    FMUL double ptr [0x005dbb0a]        ; 004ddb08 | DAT_005dbb0a
    CALL crt_math.c_round_FUN_005b7ff0  ; 004ddb0e
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x8f4]       ; 004ddb13
    MOV EAX,dword ptr [ESP + 0x8f4]     ; 004ddb1a
    PUSH EAX                            ; 004ddb21
    PUSH 0x5dba8a                       ; 004ddb22 | DAT_005dba8a
    LEA EAX,[ESP + 0x218]               ; 004ddb27
    PUSH EAX                            ; 004ddb2e
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004ddb2f
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 004ddb34
    PUSH 0x58                           ; 004ddb37
    MOV EDX,dword ptr [ESP + 0x8e4]     ; 004ddb39
    PUSH EDX                            ; 004ddb40
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560 ; 004ddb41
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004ddb46
    MOV ESI,EAX                         ; 004ddb49
    LEA EAX,[ESP + 0x210]               ; 004ddb4b
    PUSH EAX                            ; 004ddb52
    MOV ECX,dword ptr [ESP + 0x8e4]     ; 004ddb53
    PUSH ECX                            ; 004ddb5a
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00 ; 004ddb5b
        ;   XREF to: 004aaf00 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 004ddb60
    MOV EDX,dword ptr [0x006141bc]      ; 004ddb63 | DAT_006141bc
    MOV EDI,dword ptr [ESP + 0x8b4]     ; 004ddb69
    PUSH 0x0                            ; 004ddb70
    SUB EDX,EDI                         ; 004ddb72
    PUSH 0xf8                           ; 004ddb74
    SUB EDX,ESI                         ; 004ddb79
    PUSH EDX                            ; 004ddb7b
    MOV EDX,dword ptr [0x006141b8]      ; 004ddb7c | DAT_006141b8
    SUB EDX,EDI                         ; 004ddb82
    SUB EDX,EAX                         ; 004ddb84
    PUSH EDX                            ; 004ddb86
    LEA EAX,[ESP + 0x220]               ; 004ddb87
    PUSH EAX                            ; 004ddb8e
    MOV ESI,dword ptr [ESP + 0x8f4]     ; 004ddb8f
    PUSH ESI                            ; 004ddb96
    CALL engine_font.cpp_FUN_004a8df0   ; 004ddb97
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
        ;   Label: LAB_004ddb97
    ADD ESP,0x18                        ; 004ddb9c
    CMP dword ptr [EBX + 0x454],0x0     ; 004ddb9f
        ;   Label: LAB_004ddb9f
    JZ 0x004ddd00                       ; 004ddba6
        ;   XREF to: 004ddd00 (CONDITIONAL_JUMP)  ; LAB_004ddd00
    MOV EAX,dword ptr [EBX + 0x468]     ; 004ddbac
    PUSH 0x3                            ; 004ddbb2
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x610] ; 004ddbb4
    PUSH EDX                            ; 004ddbbb
    PUSH EBX                            ; 004ddbbc
    CALL core_inv.cpp_FUN_004dd0a0      ; 004ddbbd
        ;   XREF to: 004dd0a0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004dd0a0()
    ADD ESP,0xc                         ; 004ddbc2
    TEST EAX,EAX                        ; 004ddbc5
    JZ 0x004dec9b                       ; 004ddbc7
        ;   XREF to: 004dec9b (CONDITIONAL_JUMP)  ; LAB_004dec9b
    MOV EAX,dword ptr [EBX + 0x468]     ; 004ddbcd
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x610] ; 004ddbd3
    PUSH EDX                            ; 004ddbda
    CALL core_inv.cpp_getItemDescription_FUN_004d9f80 ; 004ddbdb
        ;   XREF to: 004d9f80 (UNCONDITIONAL_CALL)  ; char * core_inv.cpp_getItemDescription_FUN_004d9f80(CDemonActor * actor_ptr)
    ADD ESP,0x4                         ; 004ddbe0
    PUSH EAX                            ; 004ddbe3
    MOV EAX,dword ptr [EBX + 0x468]     ; 004ddbe4
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x610] ; 004ddbea
    PUSH ECX                            ; 004ddbf1
    CALL core_inv.cpp_getItemDisplayName_FUN_004d9f10 ; 004ddbf2
        ;   XREF to: 004d9f10 (UNCONDITIONAL_CALL)  ; char * core_inv.cpp_getItemDisplayName_FUN_004d9f10(CDemonActor * actor_ptr)
    ADD ESP,0x4                         ; 004ddbf7
    PUSH EAX                            ; 004ddbfa
    PUSH 0x5dbac2                       ; 004ddbfb | = "%s\n\n%s"
    LEA EAX,[ESP + 0x1c]                ; 004ddc00
        ;   Label: LAB_004ddc00
    PUSH EAX                            ; 004ddc04
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004ddc05
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004ddc0a
    MOV EAX,dword ptr [ESP + 0x8e0]     ; 004ddc0d
        ;   Label: LAB_004ddc0d
    MOV ESI,dword ptr [ESP + 0x888]     ; 004ddc14
    MOV dword ptr [ESP + 0x8d0],EAX     ; 004ddc1b
    MOV EAX,dword ptr [ESP + 0x8a8]     ; 004ddc22
    SUB EAX,ESI                         ; 004ddc29
    PUSH EAX                            ; 004ddc2b
    PUSH 0x100                          ; 004ddc2c
    PUSH 0xa                            ; 004ddc31
    PUSH 0x1cee3b0                      ; 004ddc33
    LEA EAX,[ESP + 0x20]                ; 004ddc38
    PUSH EAX                            ; 004ddc3c
    MOV EDI,dword ptr [ESP + 0x8f4]     ; 004ddc3d
    PUSH EDI                            ; 004ddc44
    CALL engine_font.cpp_FUN_004ab2b0   ; 004ddc45
        ;   XREF to: 004ab2b0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004ab2b0()
    ADD ESP,0x18                        ; 004ddc4a
    MOV EDI,EAX                         ; 004ddc4d
    PUSH 0x58                           ; 004ddc4f
    MOV dword ptr [ESP + 0x8c8],EAX     ; 004ddc51
    MOV EAX,dword ptr [ESP + 0x8e4]     ; 004ddc58
    PUSH EAX                            ; 004ddc5f
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560 ; 004ddc60
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004ddc65
    MOV ESI,dword ptr [0x006141bc]      ; 004ddc68 | DAT_006141bc
    MOV EDX,dword ptr [ESP + 0x898]     ; 004ddc6e
    MOV dword ptr [ESP + 0x8b8],EAX     ; 004ddc75
    MOV EAX,[0x006141b8]                ; 004ddc7c | DAT_006141b8
    SUB ESI,EDX                         ; 004ddc81
    MOV EDX,dword ptr [ESP + 0x8a8]     ; 004ddc83
    MOV ECX,dword ptr [ESP + 0x8b4]     ; 004ddc8a
    SUB EAX,EDX                         ; 004ddc91
    ADD ESI,ECX                         ; 004ddc93
    LEA EDX,[ECX + EAX*0x1]             ; 004ddc95
    XOR ECX,ECX                         ; 004ddc98
    MOV dword ptr [ESP + 0x8c0],EDX     ; 004ddc9a
    MOV dword ptr [ESP + 0x8f0],ECX     ; 004ddca1
    TEST EDI,EDI                        ; 004ddca8
    JLE 0x004ddd00                      ; 004ddcaa
        ;   XREF to: 004ddd00 (CONDITIONAL_JUMP)  ; LAB_004ddd00
    MOV EDI,0x1cee3b0                   ; 004ddcac
    PUSH 0x0                            ; 004ddcb1
        ;   Label: LAB_004ddcb1
    PUSH 0xf8                           ; 004ddcb3
    PUSH ESI                            ; 004ddcb8
    MOV EAX,dword ptr [ESP + 0x8cc]     ; 004ddcb9
    PUSH EAX                            ; 004ddcc0
    PUSH EDI                            ; 004ddcc1
    MOV EDX,dword ptr [ESP + 0x8e4]     ; 004ddcc2
    PUSH EDX                            ; 004ddcc9
    CALL engine_font.cpp_FUN_004a8df0   ; 004ddcca
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    ADD ESP,0x18                        ; 004ddccf
    ADD EDI,0x100                       ; 004ddcd2
    MOV ECX,dword ptr [ESP + 0x8b8]     ; 004ddcd8
    MOV EAX,dword ptr [ESP + 0x8f0]     ; 004ddcdf
    MOV EDX,dword ptr [ESP + 0x8c4]     ; 004ddce6
    INC EAX                             ; 004ddced
    ADD ESI,ECX                         ; 004ddcee
    MOV dword ptr [ESP + 0x8f0],EAX     ; 004ddcf0
    CMP EAX,EDX                         ; 004ddcf7
    JL 0x004ddcb1                       ; 004ddcf9
        ;   XREF to: 004ddcb1 (CONDITIONAL_JUMP)  ; LAB_004ddcb1
    LEA EAX,[EAX]                       ; 004ddcfb
    MOV ECX,ECX                         ; 004ddcfe
    MOV EAX,dword ptr [EBX + 0x468]     ; 004ddd00
        ;   Label: LAB_004ddd00
    CMP dword ptr [EBX + EAX*0x4 + 0x5fc],0x0 ; 004ddd06
    JZ 0x004de0c0                       ; 004ddd0e
        ;   XREF to: 004de0c0 (CONDITIONAL_JUMP)  ; LAB_004de0c0
    FLD float ptr [EBX + 0x344]         ; 004ddd14
    FLDZ                                ; 004ddd1a
    FCOMPP                              ; 004ddd1c
    FNSTSW AX                           ; 004ddd1e
    SAHF                                ; 004ddd20
    JNC 0x004de0c0                      ; 004ddd21
        ;   XREF to: 004de0c0 (CONDITIONAL_JUMP)  ; LAB_004de0c0
    MOV ESI,0x70                        ; 004ddd27
    MOV EDI,0x10                        ; 004ddd2c
    MOV EAX,[0x00617cd0]                ; 004ddd31 | DAT_00617cd0
    MOV dword ptr [ESP + 0x88c],ESI     ; 004ddd36
    MOV dword ptr [ESP + 0x8ac],EAX     ; 004ddd3d
    MOV EAX,[0x006141bc]                ; 004ddd44 | DAT_006141bc
    MOV ESI,dword ptr [0x00617cd4]      ; 004ddd49 | DAT_00617cd4
    CMP EAX,0x180                       ; 004ddd4f
    JGE 0x004ddd63                      ; 004ddd54
        ;   XREF to: 004ddd63 (CONDITIONAL_JUMP)  ; LAB_004ddd63
    CMP dword ptr [EBX + 0x454],0x0     ; 004ddd56
    JZ 0x004ded9a                       ; 004ddd5d
        ;   XREF to: 004ded9a (CONDITIONAL_JUMP)  ; LAB_004ded9a
    MOV EAX,[0x01ceded8]                ; 004ddd63 | g_CHealthItemClassInfo.name_hash
        ;   Label: LAB_004ddd63
    PUSH EAX                            ; 004ddd68
    MOV EAX,dword ptr [EBX + 0x468]     ; 004ddd69
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x5fc] ; 004ddd6f
    PUSH EDX                            ; 004ddd76
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004ddd77
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004ddd7c
    TEST EAX,EAX                        ; 004ddd7f
    JZ 0x004dde1c                       ; 004ddd81
        ;   XREF to: 004dde1c (CONDITIONAL_JUMP)  ; LAB_004dde1c
    SUB ESP,0x8                         ; 004ddd87
    FLD float ptr [EAX + 0x434]         ; 004ddd8a
    FSTP double ptr [ESP]               ; 004ddd90
    MOV ECX,dword ptr [EAX + 0x430]     ; 004ddd93
    PUSH ECX                            ; 004ddd99
    PUSH 0x5dbae7                       ; 004ddd9a | = "%d x%3.0f%%"
    LEA EAX,[ESP + 0x520]               ; 004ddd9f
    PUSH EAX                            ; 004ddda6
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004ddda7
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x14                        ; 004dddac
    PUSH 0x58                           ; 004dddaf
    MOV EAX,dword ptr [ESP + 0x8e4]     ; 004dddb1
    PUSH EAX                            ; 004dddb8
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560 ; 004dddb9
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560(CBitFont * this_ptr, int char_code)
    MOV dword ptr [ESP + 0x8fc],EAX     ; 004dddbe
    ADD ESP,0x8                         ; 004dddc5
    LEA EAX,[ESP + 0x510]               ; 004dddc8
    PUSH EAX                            ; 004dddcf
    MOV EDX,dword ptr [ESP + 0x8e4]     ; 004dddd0
    PUSH EDX                            ; 004dddd7
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00 ; 004dddd8
        ;   XREF to: 004aaf00 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 004ddddd
    MOV EDX,dword ptr [0x006141bc]      ; 004ddde0 | DAT_006141bc
    PUSH 0x0                            ; 004ddde6
    MOV ECX,dword ptr [ESP + 0x8f8]     ; 004ddde8
    SUB EDX,EDI                         ; 004dddef
    PUSH 0xf8                           ; 004dddf1
    SUB EDX,ECX                         ; 004dddf6
    PUSH EDX                            ; 004dddf8
    MOV EDX,dword ptr [0x006141b8]      ; 004dddf9 | DAT_006141b8
    SUB EDX,EDI                         ; 004dddff
    SUB EDX,EAX                         ; 004dde01
    PUSH EDX                            ; 004dde03
    LEA EAX,[ESP + 0x520]               ; 004dde04
    PUSH EAX                            ; 004dde0b
    MOV EAX,dword ptr [ESP + 0x8f4]     ; 004dde0c
    PUSH EAX                            ; 004dde13
    CALL engine_font.cpp_FUN_004a8df0   ; 004dde14
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    ADD ESP,0x18                        ; 004dde19
    MOV EDX,dword ptr [0x007bc3a4]      ; 004dde1c | g_CAmmoClassInfo.name_hash
        ;   Label: LAB_004dde1c
    MOV EAX,dword ptr [EBX + 0x468]     ; 004dde22
    PUSH EDX                            ; 004dde28
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x5fc] ; 004dde29
    PUSH ECX                            ; 004dde30
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004dde31
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004dde36
    TEST EAX,EAX                        ; 004dde39
    JZ 0x004ddeca                       ; 004dde3b
        ;   XREF to: 004ddeca (CONDITIONAL_JUMP)  ; LAB_004ddeca
    MOV EDX,dword ptr [EAX + 0x470]     ; 004dde41
    PUSH EDX                            ; 004dde47
    PUSH 0x5dbaf3                       ; 004dde48 | = "%d x 6"
    LEA EAX,[ESP + 0x418]               ; 004dde4d
    PUSH EAX                            ; 004dde54
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004dde55
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 004dde5a
    PUSH 0x58                           ; 004dde5d
    MOV ECX,dword ptr [ESP + 0x8e4]     ; 004dde5f
    PUSH ECX                            ; 004dde66
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560 ; 004dde67
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560(CBitFont * this_ptr, int char_code)
    MOV dword ptr [ESP + 0x8fc],EAX     ; 004dde6c
    ADD ESP,0x8                         ; 004dde73
    LEA EAX,[ESP + 0x410]               ; 004dde76
    PUSH EAX                            ; 004dde7d
    MOV EAX,dword ptr [ESP + 0x8e4]     ; 004dde7e
    PUSH EAX                            ; 004dde85
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00 ; 004dde86
        ;   XREF to: 004aaf00 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 004dde8b
    MOV EDX,dword ptr [0x006141bc]      ; 004dde8e | DAT_006141bc
    PUSH 0x0                            ; 004dde94
    MOV ECX,dword ptr [ESP + 0x8f8]     ; 004dde96
    SUB EDX,EDI                         ; 004dde9d
    PUSH 0xf8                           ; 004dde9f
    SUB EDX,ECX                         ; 004ddea4
    PUSH EDX                            ; 004ddea6
    MOV EDX,dword ptr [0x006141b8]      ; 004ddea7 | DAT_006141b8
    SUB EDX,EDI                         ; 004ddead
    SUB EDX,EAX                         ; 004ddeaf
    PUSH EDX                            ; 004ddeb1
    LEA EAX,[ESP + 0x420]               ; 004ddeb2
    PUSH EAX                            ; 004ddeb9
    MOV EAX,dword ptr [ESP + 0x8f4]     ; 004ddeba
    PUSH EAX                            ; 004ddec1
    CALL engine_font.cpp_FUN_004a8df0   ; 004ddec2
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    ADD ESP,0x18                        ; 004ddec7
    MOV EDX,dword ptr [0x01c3de74]      ; 004ddeca | g_CFilmReelClassInfo.name_hash
        ;   Label: LAB_004ddeca
    MOV EAX,dword ptr [EBX + 0x468]     ; 004dded0
    PUSH EDX                            ; 004dded6
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x5fc] ; 004dded7
    PUSH ECX                            ; 004ddede
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004ddedf
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004ddee4
    TEST EAX,EAX                        ; 004ddee7
    JZ 0x004ddf7b                       ; 004ddee9
        ;   XREF to: 004ddf7b (CONDITIONAL_JUMP)  ; LAB_004ddf7b
    PUSH EAX                            ; 004ddeef
    CALL core_inv.cpp_getItemDisplayName_FUN_004d9f10 ; 004ddef0
        ;   XREF to: 004d9f10 (UNCONDITIONAL_CALL)  ; char * core_inv.cpp_getItemDisplayName_FUN_004d9f10(CDemonActor * actor_ptr)
    ADD ESP,0x4                         ; 004ddef5
    PUSH EAX                            ; 004ddef8
    PUSH 0x5dbafa                       ; 004ddef9 | DAT_005dbafa
    LEA EAX,[ESP + 0x318]               ; 004ddefe
    PUSH EAX                            ; 004ddf05
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004ddf06
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 004ddf0b
    PUSH 0x58                           ; 004ddf0e
    MOV EAX,dword ptr [ESP + 0x8e4]     ; 004ddf10
    PUSH EAX                            ; 004ddf17
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560 ; 004ddf18
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560(CBitFont * this_ptr, int char_code)
    MOV dword ptr [ESP + 0x8fc],EAX     ; 004ddf1d
    ADD ESP,0x8                         ; 004ddf24
    LEA EAX,[ESP + 0x310]               ; 004ddf27
    PUSH EAX                            ; 004ddf2e
    MOV EDX,dword ptr [ESP + 0x8e4]     ; 004ddf2f
    PUSH EDX                            ; 004ddf36
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00 ; 004ddf37
        ;   XREF to: 004aaf00 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 004ddf3c
    MOV EDX,dword ptr [0x006141bc]      ; 004ddf3f | DAT_006141bc
    PUSH 0x0                            ; 004ddf45
    MOV ECX,dword ptr [ESP + 0x8f8]     ; 004ddf47
    SUB EDX,EDI                         ; 004ddf4e
    PUSH 0xf8                           ; 004ddf50
    SUB EDX,ECX                         ; 004ddf55
    PUSH EDX                            ; 004ddf57
    MOV EDX,dword ptr [0x006141b8]      ; 004ddf58 | DAT_006141b8
    SUB EDX,EDI                         ; 004ddf5e
    SUB EDX,EAX                         ; 004ddf60
    PUSH EDX                            ; 004ddf62
    LEA EAX,[ESP + 0x320]               ; 004ddf63
    PUSH EAX                            ; 004ddf6a
    MOV EAX,dword ptr [ESP + 0x8f4]     ; 004ddf6b
    PUSH EAX                            ; 004ddf72
    CALL engine_font.cpp_FUN_004a8df0   ; 004ddf73
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    ADD ESP,0x18                        ; 004ddf78
    CMP dword ptr [EBX + 0x454],0x0     ; 004ddf7b
        ;   Label: LAB_004ddf7b
    JZ 0x004de0c0                       ; 004ddf82
        ;   XREF to: 004de0c0 (CONDITIONAL_JUMP)  ; LAB_004de0c0
    MOV EAX,dword ptr [EBX + 0x468]     ; 004ddf88
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x5fc] ; 004ddf8e
    PUSH ECX                            ; 004ddf95
    CALL core_inv.cpp_getItemDescription_FUN_004d9f80 ; 004ddf96
        ;   XREF to: 004d9f80 (UNCONDITIONAL_CALL)  ; char * core_inv.cpp_getItemDescription_FUN_004d9f80(CDemonActor * actor_ptr)
    ADD ESP,0x4                         ; 004ddf9b
    PUSH EAX                            ; 004ddf9e
    MOV EAX,dword ptr [EBX + 0x468]     ; 004ddf9f
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x5fc] ; 004ddfa5
    PUSH EDX                            ; 004ddfac
    CALL core_inv.cpp_getItemDisplayName_FUN_004d9f10 ; 004ddfad
        ;   XREF to: 004d9f10 (UNCONDITIONAL_CALL)  ; char * core_inv.cpp_getItemDisplayName_FUN_004d9f10(CDemonActor * actor_ptr)
    ADD ESP,0x4                         ; 004ddfb2
    PUSH EAX                            ; 004ddfb5
    PUSH 0x5dbafd                       ; 004ddfb6 | = "%s\n\n%s"
    LEA EAX,[ESP + 0x11c]               ; 004ddfbb
    PUSH EAX                            ; 004ddfc2
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004ddfc3
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004ddfc8
    MOV EAX,dword ptr [ESP + 0x8e0]     ; 004ddfcb
    MOV ECX,dword ptr [ESP + 0x88c]     ; 004ddfd2
    MOV dword ptr [ESP + 0x8cc],EAX     ; 004ddfd9
    MOV EAX,dword ptr [ESP + 0x8ac]     ; 004ddfe0
    SUB EAX,ECX                         ; 004ddfe7
    PUSH EAX                            ; 004ddfe9
    PUSH 0x100                          ; 004ddfea
    PUSH 0xa                            ; 004ddfef
    PUSH 0x1ceedb0                      ; 004ddff1
    LEA EAX,[ESP + 0x120]               ; 004ddff6
    PUSH EAX                            ; 004ddffd
    MOV EAX,dword ptr [ESP + 0x8f4]     ; 004ddffe
    PUSH EAX                            ; 004de005
    CALL engine_font.cpp_FUN_004ab2b0   ; 004de006
        ;   XREF to: 004ab2b0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004ab2b0()
    MOV dword ptr [ESP + 0x90c],EAX     ; 004de00b
    ADD ESP,0x18                        ; 004de012
    PUSH 0x58                           ; 004de015
    MOV EDX,dword ptr [ESP + 0x8e4]     ; 004de017
    PUSH EDX                            ; 004de01e
    MOV dword ptr [ESP + 0x8d0],EAX     ; 004de01f
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560 ; 004de026
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004de02b
    MOV dword ptr [ESP + 0x8bc],EAX     ; 004de02e
    MOV EAX,[0x006141bc]                ; 004de035 | DAT_006141bc
    SUB EAX,ESI                         ; 004de03a
    LEA ESI,[EAX + EDI*0x1]             ; 004de03c
    MOV ECX,dword ptr [ESP + 0x8ac]     ; 004de03f
    MOV EAX,[0x006141b8]                ; 004de046 | DAT_006141b8
    SUB EAX,ECX                         ; 004de04b
    ADD EAX,EDI                         ; 004de04d
    MOV dword ptr [ESP + 0x8d8],EAX     ; 004de04f
    XOR EDI,EDI                         ; 004de056
    MOV EAX,dword ptr [ESP + 0x8f4]     ; 004de058
    MOV dword ptr [ESP + 0x8ec],EDI     ; 004de05f
    TEST EAX,EAX                        ; 004de066
    JLE 0x004de0c0                      ; 004de068
        ;   XREF to: 004de0c0 (CONDITIONAL_JUMP)  ; LAB_004de0c0
    MOV EDI,0x1ceedb0                   ; 004de06a
    PUSH 0x0                            ; 004de06f
        ;   Label: LAB_004de06f
    PUSH 0xf8                           ; 004de071
    PUSH ESI                            ; 004de076
    MOV EDX,dword ptr [ESP + 0x8e4]     ; 004de077
    PUSH EDX                            ; 004de07e
    PUSH EDI                            ; 004de07f
    MOV ECX,dword ptr [ESP + 0x8e0]     ; 004de080
    PUSH ECX                            ; 004de087
    CALL engine_font.cpp_FUN_004a8df0   ; 004de088
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    ADD ESP,0x18                        ; 004de08d
    ADD EDI,0x100                       ; 004de090
    MOV EAX,dword ptr [ESP + 0x8bc]     ; 004de096
    MOV EDX,dword ptr [ESP + 0x8ec]     ; 004de09d
    MOV ECX,dword ptr [ESP + 0x8c8]     ; 004de0a4
    INC EDX                             ; 004de0ab
    ADD ESI,EAX                         ; 004de0ac
    MOV dword ptr [ESP + 0x8ec],EDX     ; 004de0ae
    CMP EDX,ECX                         ; 004de0b5
    JL 0x004de06f                       ; 004de0b7
        ;   XREF to: 004de06f (CONDITIONAL_JUMP)  ; LAB_004de06f
    LEA EAX,[EAX]                       ; 004de0b9
    NOP                                 ; 004de0bf
    MOV EAX,[0x00616494]                ; 004de0c0 | g_CGamePtr
        ;   Label: LAB_004de0c0
    CMP dword ptr [EAX + 0x264],0x0     ; 004de0c5 | g_CGameInstance.flashlight_active
    JZ 0x004dedd4                       ; 004de0cc
        ;   XREF to: 004dedd4 (CONDITIONAL_JUMP)  ; LAB_004dedd4
    MOV EAX,[0x006141bc]                ; 004de0d2 | DAT_006141bc
        ;   Label: LAB_004de0d2
    SUB EAX,0x21                        ; 004de0d7
    MOV dword ptr [ESP + 0x870],EAX     ; 004de0da
    MOV EAX,[0x006141bc]                ; 004de0e1 | DAT_006141bc
    MOV EDX,dword ptr [ESP + 0x870]     ; 004de0e6
    SUB EAX,0x6                         ; 004de0ed
    SUB EDX,EAX                         ; 004de0f0
    MOV dword ptr [ESP + 0x8f4],EDX     ; 004de0f2
    FILD dword ptr [ESP + 0x8f4]        ; 004de0f9
    FMUL float ptr [EBX]                ; 004de100
    FMUL double ptr [0x005dbb12]        ; 004de102 | DAT_005dbb12
    PUSH 0x2                            ; 004de108
    MOV dword ptr [ESP + 0x8f8],EAX     ; 004de10a
    PUSH EAX                            ; 004de111
    FILD dword ptr [ESP + 0x8fc]        ; 004de112
    FADDP                               ; 004de119
    PUSH 0x10                           ; 004de11b
    CALL crt_math.c_round_FUN_005b7ff0  ; 004de11d
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x87c]       ; 004de122
    MOV EAX,dword ptr [ESP + 0x87c]     ; 004de129
    PUSH EAX                            ; 004de130
    PUSH 0x6                            ; 004de131
    MOV ESI,dword ptr [0x006141bc]      ; 004de133 | DAT_006141bc
    CALL engine_2d.c_fillRectColor_FUN_004031c0 ; 004de139
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_004031c0(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 004de13e
    PUSH 0xffff                         ; 004de141
    SUB ESI,0x24                        ; 004de146
    PUSH ESI                            ; 004de149
    PUSH 0x4                            ; 004de14a
    PUSH 0x1d02e08                      ; 004de14c
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900 ; 004de151
        ;   XREF to: 0040d900 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004de156
    FLD float ptr [EBX + 0x344]         ; 004de159
        ;   Label: LAB_004de159
    FLDZ                                ; 004de15f
    FCOMPP                              ; 004de161
    FNSTSW AX                           ; 004de163
    SAHF                                ; 004de165
    JNC 0x004dede6                      ; 004de166
        ;   XREF to: 004dede6 (CONDITIONAL_JUMP)  ; LAB_004dede6
    MOV EAX,dword ptr [EBX + 0x348]     ; 004de16c
        ;   Label: LAB_004de16c
    MOV dword ptr [ESP + 0x8],EAX       ; 004de172
    FLD float ptr [EBX + 0x344]         ; 004de176
    FCOMP float ptr [ESP + 0x8]         ; 004de17c
    FNSTSW AX                           ; 004de180
    SAHF                                ; 004de182
    JBE 0x004de18f                      ; 004de183
        ;   XREF to: 004de18f (CONDITIONAL_JUMP)  ; LAB_004de18f
    MOV EAX,dword ptr [EBX + 0x344]     ; 004de185
    MOV dword ptr [ESP + 0x8],EAX       ; 004de18b
    FLD float ptr [ESP + 0x8]           ; 004de18f
        ;   Label: LAB_004de18f
    MOV EDX,0xffff                      ; 004de193
    FLD1                                ; 004de198
    MOV dword ptr [ESP + 0x890],EDX     ; 004de19a
    FCOMPP                              ; 004de1a1
    FNSTSW AX                           ; 004de1a3
    SAHF                                ; 004de1a5
    JBE 0x004de1be                      ; 004de1a6
        ;   XREF to: 004de1be (CONDITIONAL_JUMP)  ; LAB_004de1be
    FLD float ptr [ESP + 0x8]           ; 004de1a8
    FMUL float ptr [0x005dbb06]         ; 004de1ac | DAT_005dbb06
    CALL crt_math.c_round_FUN_005b7ff0  ; 004de1b2
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x890]       ; 004de1b7
    MOV EAX,[0x01cedef4]                ; 004de1be | DAT_01cedef4
        ;   Label: LAB_004de1be
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004de1c3
    FLD float ptr [EAX + 0x25a8]        ; 004de1ca
    FMUL double ptr [0x005dbb12]        ; 004de1d0 | DAT_005dbb12
    FST float ptr [ESP + 0xc]           ; 004de1d6
    FLDZ                                ; 004de1da
    FCOMPP                              ; 004de1dc
    FNSTSW AX                           ; 004de1de
    SAHF                                ; 004de1e0
    JBE 0x004de1e9                      ; 004de1e1
        ;   XREF to: 004de1e9 (CONDITIONAL_JUMP)  ; LAB_004de1e9
    XOR ECX,ECX                         ; 004de1e3
    MOV dword ptr [ESP + 0xc],ECX       ; 004de1e5
    FLD float ptr [ESP + 0xc]           ; 004de1e9
        ;   Label: LAB_004de1e9
    FLD1                                ; 004de1ed
    FCOMPP                              ; 004de1ef
    FNSTSW AX                           ; 004de1f1
    SAHF                                ; 004de1f3
    JNC 0x004de1fe                      ; 004de1f4
        ;   XREF to: 004de1fe (CONDITIONAL_JUMP)  ; LAB_004de1fe
    MOV dword ptr [ESP + 0xc],0x3f800000 ; 004de1f6
    MOV ECX,0x3f                        ; 004de1fe
        ;   Label: LAB_004de1fe
    MOV EDI,dword ptr [0x006141bc]      ; 004de203 | DAT_006141bc
    MOV ESI,0x1b                        ; 004de209
    CMP EDI,0x180                       ; 004de20e
    JGE 0x004de220                      ; 004de214
        ;   XREF to: 004de220 (CONDITIONAL_JUMP)  ; LAB_004de220
    MOV ECX,0x1f                        ; 004de216
    MOV ESI,0xd                         ; 004de21b
    MOV EAX,[0x006141b8]                ; 004de220 | DAT_006141b8
        ;   Label: LAB_004de220
    SUB EAX,0x4                         ; 004de225
    SUB EAX,ESI                         ; 004de228
    MOV dword ptr [ESP + 0x874],EAX     ; 004de22a
    MOV EAX,dword ptr [ESP + 0x890]     ; 004de231
    MOV EDX,EAX                         ; 004de238
    SAR EDX,0x1f                        ; 004de23a
    SUB EAX,EDX                         ; 004de23d
    SAR EAX,0x1                         ; 004de23f
    MOV dword ptr [ESP + 0x8f4],ECX     ; 004de241
    FILD dword ptr [ESP + 0x8f4]        ; 004de248
    FLD ST0                             ; 004de24f
    FMUL float ptr [ESP + 0xc]          ; 004de251
    DEC ESI                             ; 004de255
    FSUBP                               ; 004de256
    PUSH EAX                            ; 004de258
    CALL crt_math.c_round_FUN_005b7ff0  ; 004de259
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    PUSH ECX                            ; 004de25e
    FISTP dword ptr [ESP + 0x880]       ; 004de25f
    PUSH ESI                            ; 004de266
    MOV EDI,EAX                         ; 004de267
    MOV EAX,dword ptr [ESP + 0x884]     ; 004de269
    PUSH EAX                            ; 004de270
    PUSH 0x0                            ; 004de271
    ADD EAX,0x4                         ; 004de273
    PUSH EAX                            ; 004de276
    MOV EDX,dword ptr [ESP + 0x88c]     ; 004de277
    PUSH EDX                            ; 004de27e
    PUSH 0x1d02e1c                      ; 004de27f
    CALL engine_alphabit.cpp_CAlphaBitmap_render_FUN_0040dab0 ; 004de284
        ;   XREF to: 0040dab0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_render_FUN_0040dab0(CAlphaBitmap * this_ptr, int dest_x, int dest_y, int left_x, ...)
    ADD ESP,0x20                        ; 004de289
    PUSH EDI                            ; 004de28c
    PUSH 0x4                            ; 004de28d
    MOV ECX,dword ptr [ESP + 0x87c]     ; 004de28f
    PUSH ECX                            ; 004de296
    PUSH 0x1d02e30                      ; 004de297
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900 ; 004de29c
        ;   XREF to: 0040d900 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004de2a1
    FLDZ                                ; 004de2a4
        ;   Label: LAB_004de2a4
    FLD float ptr [EBX + 0x34c]         ; 004de2a6
    FSTP double ptr [ESP]               ; 004de2ac
    FCOMP double ptr [ESP]              ; 004de2af
    FNSTSW AX                           ; 004de2b2
    SAHF                                ; 004de2b4
    JNC 0x004de3b0                      ; 004de2b5
        ;   XREF to: 004de3b0 (CONDITIONAL_JUMP)  ; LAB_004de3b0
    MOV ESI,0xffff                      ; 004de2bb
    FLD1                                ; 004de2c0
    MOV dword ptr [ESP + 0x894],ESI     ; 004de2c2
    FCOMP double ptr [ESP]              ; 004de2c9
    FNSTSW AX                           ; 004de2cc
    SAHF                                ; 004de2ce
    JBE 0x004de2e6                      ; 004de2cf
        ;   XREF to: 004de2e6 (CONDITIONAL_JUMP)  ; LAB_004de2e6
    FLD double ptr [ESP]                ; 004de2d1
    FMUL double ptr [0x005dbb1a]        ; 004de2d4 | DAT_005dbb1a
    CALL crt_math.c_round_FUN_005b7ff0  ; 004de2da
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x894]       ; 004de2df
    MOV EDI,dword ptr [ESP + 0x894]     ; 004de2e6
        ;   Label: LAB_004de2e6
    PUSH EDI                            ; 004de2ed
    CALL engine_3d.c_setRenderAlpha_FUN_00406da0 ; 004de2ee
        ;   XREF to: 00406da0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406da0(int alpha_color_value)
    MOV EAX,[0x01511cc4]                ; 004de2f3 | DAT_01511cc4
    ADD ESP,0x4                         ; 004de2f8
    MOV dword ptr [ESP + 0x8e4],EAX     ; 004de2fb
    MOV EAX,[0x006141bc]                ; 004de302 | DAT_006141bc
    MOV EDX,dword ptr [0x00617cd4]      ; 004de307 | DAT_00617cd4
    CMP EAX,0x180                       ; 004de30d
    JGE 0x004de32b                      ; 004de312
        ;   XREF to: 004de32b (CONDITIONAL_JUMP)  ; LAB_004de32b
    MOV EAX,EDX                         ; 004de314
    SAR EDX,0x1f                        ; 004de316
    SUB EAX,EDX                         ; 004de319
    SAR EAX,0x1                         ; 004de31b
    MOV EDX,EAX                         ; 004de31d
    MOV EAX,[0x01511ccc]                ; 004de31f | DAT_01511ccc
    MOV dword ptr [ESP + 0x8e4],EAX     ; 004de324
    MOV EAX,[0x006141b8]                ; 004de32b | DAT_006141b8
        ;   Label: LAB_004de32b
    SUB EAX,EDX                         ; 004de330
    SUB EAX,0x4                         ; 004de332
    PUSH EAX                            ; 004de335
    PUSH 0x100                          ; 004de336
    PUSH 0xa                            ; 004de33b
    PUSH 0x1cef7b0                      ; 004de33d
    LEA EAX,[EBX + 0x354]               ; 004de342
    PUSH EAX                            ; 004de348
    MOV EDX,dword ptr [ESP + 0x8f8]     ; 004de349
    PUSH EDX                            ; 004de350
    CALL engine_font.cpp_FUN_004ab2b0   ; 004de351
        ;   XREF to: 004ab2b0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004ab2b0()
    ADD ESP,0x18                        ; 004de356
    PUSH 0x58                           ; 004de359
    MOV ECX,dword ptr [ESP + 0x8e8]     ; 004de35b
    PUSH ECX                            ; 004de362
    MOV ESI,EAX                         ; 004de363
    MOV dword ptr [ESP + 0x8e4],EAX     ; 004de365
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560 ; 004de36c
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004de371
    MOV dword ptr [ESP + 0x8d4],EAX     ; 004de374
    IMUL EAX,ESI                        ; 004de37b
    MOV ESI,dword ptr [0x006141bc]      ; 004de37e | DAT_006141bc
    SUB ESI,0x4                         ; 004de384
    MOV EDI,dword ptr [0x01511ccc]      ; 004de387 | DAT_01511ccc
    SUB ESI,EAX                         ; 004de38d
    CMP EDI,dword ptr [ESP + 0x8e4]     ; 004de38f
    JNZ 0x004dedfe                      ; 004de396
        ;   XREF to: 004dedfe (CONDITIONAL_JUMP)  ; LAB_004dedfe
    CMP dword ptr [0x01d63250],0x0      ; 004de39c | DAT_01d63250
    JZ 0x004dedfe                       ; 004de3a3
        ;   XREF to: 004dedfe (CONDITIONAL_JUMP)  ; LAB_004dedfe
    LEA EAX,[EAX]                       ; 004de3a9
    NOP                                 ; 004de3af
    CMP dword ptr [EBX + 0x8],0x0       ; 004de3b0
        ;   Label: LAB_004de3b0
    JZ 0x004de9ba                       ; 004de3b4
        ;   XREF to: 004de9ba (CONDITIONAL_JUMP)  ; LAB_004de9ba
    MOV EBX,dword ptr [0x006141bc]      ; 004de3ba | DAT_006141bc
    SUB EBX,0x2                         ; 004de3c0
    MOV EAX,[0x01d02ee0]                ; 004de3c3 | CAlphaBitmap_01d02ed0.height
    MOV ESI,EBX                         ; 004de3c8
    PUSH 0xffff                         ; 004de3ca
    SUB ESI,EAX                         ; 004de3cf
    PUSH ESI                            ; 004de3d1
    PUSH 0x2                            ; 004de3d2
    MOV EDI,dword ptr [0x01d02edc]      ; 004de3d4 | CAlphaBitmap_01d02ed0.width
    PUSH 0x1d02ed0                      ; 004de3da
    ADD EDI,0x2                         ; 004de3df
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900 ; 004de3e2
        ;   XREF to: 0040d900 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004de3e7
    LEA EAX,[EDI + -0x2]                ; 004de3ea
    MOV dword ptr [ESP + 0x8f4],EAX     ; 004de3ed
    ADD EDI,0x2                         ; 004de3f4
    FLD double ptr [0x005dbb22]         ; 004de3f7 | DAT_005dbb22
    FILD dword ptr [ESP + 0x8f4]        ; 004de3fd
    FMUL ST1                            ; 004de404
    MOV dword ptr [ESP + 0x8f8],EDI     ; 004de406
    MOV EAX,EBX                         ; 004de40d
    FILD dword ptr [ESP + 0x8f8]        ; 004de40f
    FMUL ST2                            ; 004de416
    SUB EAX,ESI                         ; 004de418
    ADD EBX,ESI                         ; 004de41a
    MOV dword ptr [ESP + 0x8f4],EAX     ; 004de41c
    MOV dword ptr [ESP + 0x8f8],EBX     ; 004de423
    FILD dword ptr [ESP + 0x8f4]        ; 004de42a
    FMUL ST3                            ; 004de431
    FILD dword ptr [ESP + 0x8f8]        ; 004de433
    FMULP ST4                           ; 004de43a
    XOR EDX,EDX                         ; 004de43c
    XOR ECX,ECX                         ; 004de43e
    MOV dword ptr [0x01c37788],EDX      ; 004de440 | DAT_01c37788
    MOV dword ptr [ESP + 0x78c],ECX     ; 004de446
    MOV EAX,[0x01cedef4]                ; 004de44d | DAT_01cedef4
    MOV dword ptr [ESP + 0x790],ECX     ; 004de452
    LEA EDI,[ESP + 0x864]               ; 004de459
    MOV EDX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004de460
    FXCH ST2                            ; 004de467
    FSTP float ptr [ESP + 0x8a4]        ; 004de469
    MOV EAX,[0x0061b5a8]                ; 004de470 | g_CDemonSetPtr
    FLD float ptr [EDX + 0x34]          ; 004de475
    FSUB float ptr [EAX + 0x15acbc]     ; 004de478 | g_CDemonSetInstance.altitude_reference_y
    LEA ESI,[ESP + 0x78c]               ; 004de47e
    FSTP float ptr [ESP + 0x8f4]        ; 004de485
    MOV EAX,dword ptr [ESP + 0x8f4]     ; 004de48c
    FSTP float ptr [ESP + 0x8a0]        ; 004de493
    MOV dword ptr [ESP + 0x794],EAX     ; 004de49a
    LEA EAX,[ESP + 0x864]               ; 004de4a1
    FSTP float ptr [ESP + 0x8b0]        ; 004de4a8
    PUSH EAX                            ; 004de4af
    LEA EAX,[ESP + 0x75c]               ; 004de4b0
    FSTP float ptr [ESP + 0x8a0]        ; 004de4b7
    PUSH EAX                            ; 004de4be
    MOVSD ES:EDI,ESI                    ; 004de4bf
    MOVSD ES:EDI,ESI                    ; 004de4c0
    MOVSD ES:EDI,ESI                    ; 004de4c1
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280 ; 004de4c2
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 004de4c7
    LEA EDI,[ESP + 0x7b0]               ; 004de4ca
    XOR ESI,ESI                         ; 004de4d1
    CALL engine_matrix.c_invertTransformMatrix_FUN_004e8730 ; 004de4d3
        ;   XREF to: 004e8730 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_invertTransformMatrix_FUN_004e8730()
    FLD float ptr [ESP + 0x8a4]         ; 004de4d8
    FLD float ptr [ESP + 0x8b0]         ; 004de4df
    FCHS                                ; 004de4e6
    FSTP float ptr [ESP + 0x8f4]        ; 004de4e8
    MOV EAX,dword ptr [ESP + 0x8f4]     ; 004de4ef
    MOV dword ptr [ESP + 0x7e8],ESI     ; 004de4f6
    MOV dword ptr [ESP + 0x7e4],EAX     ; 004de4fd
    LEA EAX,[ESP + 0x7e0]               ; 004de504
    FCHS                                ; 004de50b
    PUSH EAX                            ; 004de50d
    LEA EAX,[ESP + 0x75c]               ; 004de50e
    LEA ESI,[ESP + 0x844]               ; 004de515
    PUSH EAX                            ; 004de51c
    FSTP float ptr [ESP + 0x7e8]        ; 004de51d
    CALL core_dirmat.cpp_FUN_00449530   ; 004de524
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449530()
    LEA ESI,[ESP + 0x848]               ; 004de529
    LEA EDX,[ESP + 0x7b8]               ; 004de530
    ADD ESP,0x8                         ; 004de537
    LEA EAX,[ESP + 0x804]               ; 004de53a
    MOVSD ES:EDI,ESI                    ; 004de541
    MOVSD ES:EDI,ESI                    ; 004de542
    MOVSD ES:EDI,ESI                    ; 004de543
    CMP EAX,EDX                         ; 004de544
    JZ 0x004de572                       ; 004de546
        ;   XREF to: 004de572 (CONDITIONAL_JUMP)  ; LAB_004de572
    MOV EAX,dword ptr [ESP + 0x7b0]     ; 004de548
    MOV dword ptr [ESP + 0x804],EAX     ; 004de54f
    MOV EAX,dword ptr [ESP + 0x7b4]     ; 004de556
    MOV dword ptr [ESP + 0x808],EAX     ; 004de55d
    MOV EAX,dword ptr [ESP + 0x7b8]     ; 004de564
    MOV dword ptr [ESP + 0x80c],EAX     ; 004de56b
    FLD float ptr [ESP + 0x89c]         ; 004de572
        ;   Label: LAB_004de572
    LEA ESI,[ESP + 0x828]               ; 004de579
    FADD float ptr [ESP + 0x808]        ; 004de580
    SUB ESP,0x4                         ; 004de587
    FLD float ptr [ESP + 0x8a4]         ; 004de58a
    FXCH                                ; 004de591
    FSTP float ptr [ESP]                ; 004de593
    FADD float ptr [ESP + 0x808]        ; 004de596
    SUB ESP,0x4                         ; 004de59d
    LEA EDI,[ESP + 0x7f4]               ; 004de5a0
    FSTP float ptr [ESP]                ; 004de5a7
    CALL core_inv.cpp_FUN_004d9ff0      ; 004de5aa
        ;   XREF to: 004d9ff0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004d9ff0()
    LEA ESI,[ESP + 0x830]               ; 004de5af
    LEA EAX,[ESP + 0x7f4]               ; 004de5b6
    ADD ESP,0x8                         ; 004de5bd
    MOV EDX,dword ptr [0x0060b280]      ; 004de5c0 | DAT_0060b280
    MOVSD ES:EDI,ESI                    ; 004de5c6
    MOVSD ES:EDI,ESI                    ; 004de5c7
    MOVSD ES:EDI,ESI                    ; 004de5c8
    PUSH EAX                            ; 004de5c9
    MOV EAX,dword ptr [EDX]             ; 004de5ca | DAT_01ba5c50
    PUSH EAX                            ; 004de5cc
    CALL engine_special.cpp_FUN_0055d723 ; 004de5cd
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004de5d2
    FLD float ptr [ESP + 0x8b0]         ; 004de5d5
    MOV EAX,dword ptr [ESP + 0x8a4]     ; 004de5dc
    FCHS                                ; 004de5e3
    FSTP float ptr [ESP + 0x8f4]        ; 004de5e5
    MOV dword ptr [ESP + 0x834],EAX     ; 004de5ec
    MOV EAX,dword ptr [ESP + 0x8f4]     ; 004de5f3
    MOV dword ptr [ESP + 0x838],EAX     ; 004de5fa
    LEA EAX,[ESP + 0x834]               ; 004de601
    LEA ESI,[ESP + 0x7bc]               ; 004de608
    PUSH EAX                            ; 004de60f
    LEA EAX,[ESP + 0x75c]               ; 004de610
    XOR EDI,EDI                         ; 004de617
    PUSH EAX                            ; 004de619
    MOV dword ptr [ESP + 0x844],EDI     ; 004de61a
    LEA EDI,[ESP + 0x860]               ; 004de621
    CALL core_dirmat.cpp_FUN_00449530   ; 004de628
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449530()
    LEA ESI,[ESP + 0x7c4]               ; 004de62d
    LEA EAX,[ESP + 0x860]               ; 004de634
    ADD ESP,0x8                         ; 004de63b
    LEA EDX,[ESP + 0x804]               ; 004de63e
    MOVSD ES:EDI,ESI                    ; 004de645
    MOVSD ES:EDI,ESI                    ; 004de646
    MOVSD ES:EDI,ESI                    ; 004de647
    CMP EDX,EAX                         ; 004de648
    JZ 0x004de676                       ; 004de64a
        ;   XREF to: 004de676 (CONDITIONAL_JUMP)  ; LAB_004de676
    MOV EAX,dword ptr [ESP + 0x858]     ; 004de64c
    MOV dword ptr [ESP + 0x804],EAX     ; 004de653
    MOV EAX,dword ptr [ESP + 0x85c]     ; 004de65a
    MOV dword ptr [ESP + 0x808],EAX     ; 004de661
    MOV EAX,dword ptr [ESP + 0x860]     ; 004de668
    MOV dword ptr [ESP + 0x80c],EAX     ; 004de66f
    FLD float ptr [ESP + 0x89c]         ; 004de676
        ;   Label: LAB_004de676
    LEA ESI,[ESP + 0x81c]               ; 004de67d
    FADD float ptr [ESP + 0x808]        ; 004de684
    SUB ESP,0x4                         ; 004de68b
    FLD float ptr [ESP + 0x8a4]         ; 004de68e
    FXCH                                ; 004de695
    FSTP float ptr [ESP]                ; 004de697
    FADD float ptr [ESP + 0x808]        ; 004de69a
    SUB ESP,0x4                         ; 004de6a1
    LEA EDI,[ESP + 0x7f4]               ; 004de6a4
    FSTP float ptr [ESP]                ; 004de6ab
    CALL core_inv.cpp_FUN_004d9ff0      ; 004de6ae
        ;   XREF to: 004d9ff0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004d9ff0()
    LEA ESI,[ESP + 0x824]               ; 004de6b3
    LEA EAX,[ESP + 0x7f4]               ; 004de6ba
    ADD ESP,0x8                         ; 004de6c1
    MOV EDX,dword ptr [0x0060b280]      ; 004de6c4 | DAT_0060b280
    MOVSD ES:EDI,ESI                    ; 004de6ca
    MOVSD ES:EDI,ESI                    ; 004de6cb
    MOVSD ES:EDI,ESI                    ; 004de6cc
    PUSH EAX                            ; 004de6cd
    MOV EAX,dword ptr [EDX]             ; 004de6ce | DAT_01ba5c50
    ADD EAX,0x30                        ; 004de6d0
    PUSH EAX                            ; 004de6d3
    CALL engine_special.cpp_FUN_0055d723 ; 004de6d4
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004de6d9
    MOV EAX,dword ptr [ESP + 0x8a4]     ; 004de6dc
    MOV dword ptr [ESP + 0x7c8],EAX     ; 004de6e3
    MOV EAX,dword ptr [ESP + 0x8b0]     ; 004de6ea
    MOV dword ptr [ESP + 0x7cc],EAX     ; 004de6f1
    XOR EAX,EAX                         ; 004de6f8
    MOV dword ptr [ESP + 0x7d0],EAX     ; 004de6fa
    LEA EAX,[ESP + 0x7c8]               ; 004de701
    PUSH EAX                            ; 004de708
    LEA EAX,[ESP + 0x75c]               ; 004de709
    PUSH EAX                            ; 004de710
    LEA ESI,[ESP + 0x800]               ; 004de711
    LEA EDI,[ESP + 0x788]               ; 004de718
    CALL core_dirmat.cpp_FUN_00449530   ; 004de71f
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449530()
    LEA ESI,[ESP + 0x800]               ; 004de724
    LEA EAX,[ESP + 0x788]               ; 004de72b
    ADD ESP,0x8                         ; 004de732
    LEA EDX,[ESP + 0x804]               ; 004de735
    MOVSD ES:EDI,ESI                    ; 004de73c
    MOVSD ES:EDI,ESI                    ; 004de73d
    MOVSD ES:EDI,ESI                    ; 004de73e
    CMP EDX,EAX                         ; 004de73f
    JZ 0x004de76d                       ; 004de741
        ;   XREF to: 004de76d (CONDITIONAL_JUMP)  ; LAB_004de76d
    MOV EAX,dword ptr [ESP + 0x780]     ; 004de743
    MOV dword ptr [ESP + 0x804],EAX     ; 004de74a
    MOV EAX,dword ptr [ESP + 0x784]     ; 004de751
    MOV dword ptr [ESP + 0x808],EAX     ; 004de758
    MOV EAX,dword ptr [ESP + 0x788]     ; 004de75f
    MOV dword ptr [ESP + 0x80c],EAX     ; 004de766
    FLD float ptr [ESP + 0x89c]         ; 004de76d
        ;   Label: LAB_004de76d
    LEA ESI,[ESP + 0x810]               ; 004de774
    FADD float ptr [ESP + 0x808]        ; 004de77b
    SUB ESP,0x4                         ; 004de782
    FLD float ptr [ESP + 0x8a4]         ; 004de785
    FXCH                                ; 004de78c
    FSTP float ptr [ESP]                ; 004de78e
    FADD float ptr [ESP + 0x808]        ; 004de791
    SUB ESP,0x4                         ; 004de798
    LEA EDI,[ESP + 0x7f4]               ; 004de79b
    FSTP float ptr [ESP]                ; 004de7a2
    CALL core_inv.cpp_FUN_004d9ff0      ; 004de7a5
        ;   XREF to: 004d9ff0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004d9ff0()
    LEA ESI,[ESP + 0x818]               ; 004de7aa
    ADD ESP,0x8                         ; 004de7b1
    MOV EAX,[0x0060b280]                ; 004de7b4 | DAT_0060b280
    MOVSD ES:EDI,ESI                    ; 004de7b9
    MOVSD ES:EDI,ESI                    ; 004de7ba
    MOVSD ES:EDI,ESI                    ; 004de7bb
    LEA EDX,[ESP + 0x7ec]               ; 004de7bc
    MOV EAX,dword ptr [EAX]             ; 004de7c3 | DAT_01ba5c50
    PUSH EDX                            ; 004de7c5
    ADD EAX,0x60                        ; 004de7c6
    PUSH EAX                            ; 004de7c9
    LEA ESI,[ESP + 0x7a0]               ; 004de7ca
    LEA EDI,[ESP + 0x7ac]               ; 004de7d1
    CALL engine_special.cpp_FUN_0055d723 ; 004de7d8
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004de7dd
    XOR EDX,EDX                         ; 004de7e0
    MOV EAX,dword ptr [ESP + 0x8b0]     ; 004de7e2
    FLD float ptr [ESP + 0x8a4]         ; 004de7e9
    MOV dword ptr [ESP + 0x850],EAX     ; 004de7f0
    LEA EAX,[ESP + 0x84c]               ; 004de7f7
    FCHS                                ; 004de7fe
    PUSH EAX                            ; 004de800
    LEA EAX,[ESP + 0x75c]               ; 004de801
    MOV dword ptr [ESP + 0x858],EDX     ; 004de808
    PUSH EAX                            ; 004de80f
    FSTP float ptr [ESP + 0x854]        ; 004de810
    CALL core_dirmat.cpp_FUN_00449530   ; 004de817
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449530()
    LEA ESI,[ESP + 0x7a0]               ; 004de81c
    LEA EDX,[ESP + 0x7ac]               ; 004de823
    ADD ESP,0x8                         ; 004de82a
    LEA EAX,[ESP + 0x804]               ; 004de82d
    MOVSD ES:EDI,ESI                    ; 004de834
    MOVSD ES:EDI,ESI                    ; 004de835
    MOVSD ES:EDI,ESI                    ; 004de836
    CMP EAX,EDX                         ; 004de837
    JZ 0x004de865                       ; 004de839
        ;   XREF to: 004de865 (CONDITIONAL_JUMP)  ; LAB_004de865
    MOV EAX,dword ptr [ESP + 0x7a4]     ; 004de83b
    MOV dword ptr [ESP + 0x804],EAX     ; 004de842
    MOV EAX,dword ptr [ESP + 0x7a8]     ; 004de849
    MOV dword ptr [ESP + 0x808],EAX     ; 004de850
    MOV EAX,dword ptr [ESP + 0x7ac]     ; 004de857
    MOV dword ptr [ESP + 0x80c],EAX     ; 004de85e
    FLD float ptr [ESP + 0x89c]         ; 004de865
        ;   Label: LAB_004de865
    LEA ESI,[ESP + 0x7d4]               ; 004de86c
    FADD float ptr [ESP + 0x808]        ; 004de873
    SUB ESP,0x4                         ; 004de87a
    FLD float ptr [ESP + 0x8a4]         ; 004de87d
    FXCH                                ; 004de884
    FSTP float ptr [ESP]                ; 004de886
    FADD float ptr [ESP + 0x808]        ; 004de889
    SUB ESP,0x4                         ; 004de890
    LEA EDI,[ESP + 0x7f4]               ; 004de893
    FSTP float ptr [ESP]                ; 004de89a
    CALL core_inv.cpp_FUN_004d9ff0      ; 004de89d
        ;   XREF to: 004d9ff0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004d9ff0()
    LEA ESI,[ESP + 0x7dc]               ; 004de8a2
    LEA EAX,[ESP + 0x7f4]               ; 004de8a9
    ADD ESP,0x8                         ; 004de8b0
    MOV EDX,dword ptr [0x0060b280]      ; 004de8b3 | DAT_0060b280
    MOVSD ES:EDI,ESI                    ; 004de8b9
    MOVSD ES:EDI,ESI                    ; 004de8ba
    MOVSD ES:EDI,ESI                    ; 004de8bb
    PUSH EAX                            ; 004de8bc
    MOV EAX,dword ptr [EDX]             ; 004de8bd | DAT_01ba5c50
    ADD EAX,0x90                        ; 004de8bf
    PUSH EAX                            ; 004de8c4
    CALL engine_special.cpp_FUN_0055d723 ; 004de8c5
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    MOV ECX,0x4                         ; 004de8ca
    MOV EAX,0x1                         ; 004de8cf
    MOV EDX,0x1000000                   ; 004de8d4
    ADD ESP,0x8                         ; 004de8d9
    XOR EBX,EBX                         ; 004de8dc
    MOV dword ptr [ESP + 0x714],ECX     ; 004de8de
    MOV dword ptr [ESP + 0x728],EBX     ; 004de8e5
    MOV dword ptr [ESP + 0x72c],EBX     ; 004de8ec
    MOV dword ptr [ESP + 0x730],EBX     ; 004de8f3
    MOV dword ptr [ESP + 0x734],EAX     ; 004de8fa
    MOV dword ptr [ESP + 0x738],EDX     ; 004de901
    MOV dword ptr [ESP + 0x73c],EBX     ; 004de908
    MOV ESI,EDX                         ; 004de90f
    MOV dword ptr [ESP + 0x744],EDX     ; 004de911
    MOV dword ptr [ESP + 0x748],EDX     ; 004de918
    MOV EBX,0x2                         ; 004de91f
    MOV EAX,0x3                         ; 004de924
    XOR EDX,EDX                         ; 004de929
    MOV dword ptr [ESP + 0x740],EBX     ; 004de92b
    PUSH EDX                            ; 004de932
    MOV EBX,dword ptr [0x0060b280]      ; 004de933 | DAT_0060b280
    MOV dword ptr [ESP + 0x758],ESI     ; 004de939
    PUSH EBX                            ; 004de940 | DAT_01ba5c50
    MOV dword ptr [ESP + 0x754],EAX     ; 004de941
    MOV dword ptr [ESP + 0x758],EDX     ; 004de948
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880 ; 004de94f
        ;   XREF to: 0046b880 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 004de954
    XOR EDI,EDI                         ; 004de957
    PUSH EDI                            ; 004de959
    MOV ESI,dword ptr [0x0060b280]      ; 004de95a | DAT_0060b280
    PUSH ESI                            ; 004de960 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870 ; 004de961
        ;   XREF to: 0046b870 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 004de966
    PUSH 0xffff                         ; 004de969
    MOV EDI,dword ptr [0x0060b280]      ; 004de96e | DAT_0060b280
    PUSH EDI                            ; 004de974 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0 ; 004de975
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004de97a
    PUSH 0x1d02ee4                      ; 004de97d
    MOV EAX,[0x0060b280]                ; 004de982 | DAT_0060b280
    PUSH EAX                            ; 004de987 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 004de988
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004de98d
    PUSH 0x23                           ; 004de990
    LEA EAX,[ESP + 0x714]               ; 004de992
    PUSH EAX                            ; 004de999
    MOV EDX,dword ptr [0x0060b280]      ; 004de99a | DAT_0060b280
    PUSH EDX                            ; 004de9a0 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_00469d00 ; 004de9a1
        ;   XREF to: 00469d00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_00469d00(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly, int render_flags)
    ADD ESP,0xc                         ; 004de9a6
    PUSH 0x1                            ; 004de9a9
    MOV ECX,dword ptr [0x0060b280]      ; 004de9ab | DAT_0060b280
    PUSH ECX                            ; 004de9b1 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870 ; 004de9b2
        ;   XREF to: 0046b870 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 004de9b7
    MOV EAX,dword ptr [ESP + 0x87c]     ; 004de9ba
        ;   Label: LAB_004de9ba
    MOV [0x01c37788],EAX                ; 004de9c1 | DAT_01c37788
    MOV ESP,EBP                         ; 004de9c6
        ;   Label: LAB_004de9c6
    POP EBP                             ; 004de9c8
    POP EDI                             ; 004de9c9
    POP ESI                             ; 004de9ca
    POP EBX                             ; 004de9cb
    RET                                 ; 004de9cc
    CALL core_inv.cpp_loadAssets_FUN_004da990 ; 004de9cd
        ;   XREF to: 004da990 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_loadAssets_FUN_004da990()
        ;   Label: LAB_004de9cd
    JMP 0x004dd9fc                      ; 004de9d2
        ;   XREF to: 004dd9fc (UNCONDITIONAL_JUMP)  ; LAB_004dd9fc
    MOV EAX,[0x01511ccc]                ; 004de9d7 | DAT_01511ccc
        ;   Label: LAB_004de9d7
    MOV dword ptr [ESP + 0x8e0],EAX     ; 004de9dc
    JMP 0x004dda35                      ; 004de9e3
        ;   XREF to: 004dda35 (UNCONDITIONAL_JUMP)  ; LAB_004dda35
    MOV EAX,dword ptr [ESP + 0x8a8]     ; 004de9e8
        ;   Label: LAB_004de9e8
    MOV EDX,EAX                         ; 004de9ef
    SAR EDX,0x1f                        ; 004de9f1
    SUB EAX,EDX                         ; 004de9f4
    SAR EAX,0x1                         ; 004de9f6
    MOV dword ptr [ESP + 0x8a8],EAX     ; 004de9f8
    MOV EAX,dword ptr [ESP + 0x898]     ; 004de9ff
    MOV EDX,EAX                         ; 004dea06
    SAR EDX,0x1f                        ; 004dea08
    SUB EAX,EDX                         ; 004dea0b
    SAR EAX,0x1                         ; 004dea0d
    MOV EDI,0x28                        ; 004dea0f
    MOV ECX,0x8                         ; 004dea14
    MOV ESI,0x12                        ; 004dea19
    MOV dword ptr [ESP + 0x888],EDI     ; 004dea1e
    MOV dword ptr [ESP + 0x8b4],ECX     ; 004dea25
    MOV dword ptr [ESP + 0x898],EAX     ; 004dea2c
    JMP 0x004ddaaa                      ; 004dea33
        ;   XREF to: 004ddaaa (UNCONDITIONAL_JUMP)  ; LAB_004ddaaa
    MOV EAX,dword ptr [EBX + 0x468]     ; 004dea38
        ;   Label: LAB_004dea38
    PUSH 0x3                            ; 004dea3e
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x610] ; 004dea40
    PUSH EDI                            ; 004dea47
    PUSH EBX                            ; 004dea48
    CALL core_inv.cpp_FUN_004dd0a0      ; 004dea49
        ;   XREF to: 004dd0a0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004dd0a0()
    ADD ESP,0xc                         ; 004dea4e
    TEST EAX,EAX                        ; 004dea51
    JNZ 0x004ddb9f                      ; 004dea53
        ;   XREF to: 004ddb9f (CONDITIONAL_JUMP)  ; LAB_004ddb9f
    MOV EAX,dword ptr [EBX + 0x468]     ; 004dea59
    PUSH 0x6                            ; 004dea5f
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x610] ; 004dea61
    PUSH EDX                            ; 004dea68
    PUSH EBX                            ; 004dea69
    CALL core_inv.cpp_FUN_004dd0a0      ; 004dea6a
        ;   XREF to: 004dd0a0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004dd0a0()
    ADD ESP,0xc                         ; 004dea6f
    TEST EAX,EAX                        ; 004dea72
    JNZ 0x004ddb9f                      ; 004dea74
        ;   XREF to: 004ddb9f (CONDITIONAL_JUMP)  ; LAB_004ddb9f
    MOV EAX,[0x006141bc]                ; 004dea7a | DAT_006141bc
    SUB EAX,ESI                         ; 004dea7f
    MOV dword ptr [ESP + 0x880],EAX     ; 004dea81
    MOV EAX,dword ptr [EBX + 0x468]     ; 004dea88
    PUSH 0x5dba8f                       ; 004dea8e | = "CTommyGun"
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x610] ; 004dea93
    MOV EDI,dword ptr [0x006141b8]      ; 004dea9a | DAT_006141b8
    PUSH ECX                            ; 004deaa0
    SUB EDI,ESI                         ; 004deaa1
    XOR ESI,ESI                         ; 004deaa3
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004deaa5
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004deaaa
    TEST EAX,EAX                        ; 004deaad
    JZ 0x004deab6                       ; 004deaaf
        ;   XREF to: 004deab6 (CONDITIONAL_JUMP)  ; LAB_004deab6
    MOV ESI,0x1d02e44                   ; 004deab1
    MOV EAX,dword ptr [EBX + 0x468]     ; 004deab6
        ;   Label: LAB_004deab6
    PUSH 0x5dba99                       ; 004deabc | = "CShotgun"
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x610] ; 004deac1
    PUSH EDX                            ; 004deac8
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004deac9
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004deace
    TEST EAX,EAX                        ; 004dead1
    JZ 0x004deada                       ; 004dead3
        ;   XREF to: 004deada (CONDITIONAL_JUMP)  ; LAB_004deada
    MOV ESI,0x1d02e94                   ; 004dead5
    MOV EAX,dword ptr [EBX + 0x468]     ; 004deada
        ;   Label: LAB_004deada
    PUSH 0x5dbaa2                       ; 004deae0 | = "CElephantGun"
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x610] ; 004deae5
    PUSH ECX                            ; 004deaec
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004deaed
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004deaf2
    TEST EAX,EAX                        ; 004deaf5
    JZ 0x004deafe                       ; 004deaf7
        ;   XREF to: 004deafe (CONDITIONAL_JUMP)  ; LAB_004deafe
    MOV ESI,0x1d02e94                   ; 004deaf9
    MOV EAX,dword ptr [EBX + 0x468]     ; 004deafe
        ;   Label: LAB_004deafe
    PUSH 0x5dbaaf                       ; 004deb04 | DAT_005dbaaf
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x610] ; 004deb09
    PUSH EDX                            ; 004deb10
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004deb11
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004deb16
    TEST EAX,EAX                        ; 004deb19
    JZ 0x004deba8                       ; 004deb1b
        ;   XREF to: 004deba8 (CONDITIONAL_JUMP)  ; LAB_004deba8
    MOV EAX,dword ptr [EBX + 0x468]     ; 004deb21
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x610] ; 004deb27
    CMP dword ptr [EAX + 0x6c8],0x0     ; 004deb2e
    JNZ 0x004deb3c                      ; 004deb35
        ;   XREF to: 004deb3c (CONDITIONAL_JUMP)  ; LAB_004deb3c
    MOV ESI,0x1d02e58                   ; 004deb37
    MOV EAX,dword ptr [EBX + 0x468]     ; 004deb3c
        ;   Label: LAB_004deb3c
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x610] ; 004deb42
    CMP dword ptr [EAX + 0x6c8],0x3     ; 004deb49
    JNZ 0x004deb57                      ; 004deb50
        ;   XREF to: 004deb57 (CONDITIONAL_JUMP)  ; LAB_004deb57
    MOV ESI,0x1d02e6c                   ; 004deb52
    MOV EAX,dword ptr [EBX + 0x468]     ; 004deb57
        ;   Label: LAB_004deb57
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x610] ; 004deb5d
    CMP dword ptr [EAX + 0x6c8],0x7     ; 004deb64
    JNZ 0x004deb72                      ; 004deb6b
        ;   XREF to: 004deb72 (CONDITIONAL_JUMP)  ; LAB_004deb72
    MOV ESI,0x1d02e80                   ; 004deb6d
    MOV EAX,dword ptr [EBX + 0x468]     ; 004deb72
        ;   Label: LAB_004deb72
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x610] ; 004deb78
    CMP dword ptr [EAX + 0x6c8],0x8     ; 004deb7f
    JNZ 0x004deb8d                      ; 004deb86
        ;   XREF to: 004deb8d (CONDITIONAL_JUMP)  ; LAB_004deb8d
    MOV ESI,0x1d02ea8                   ; 004deb88
    MOV EAX,dword ptr [EBX + 0x468]     ; 004deb8d
        ;   Label: LAB_004deb8d
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x610] ; 004deb93
    CMP dword ptr [EAX + 0x6c8],0x1     ; 004deb9a
    JNZ 0x004deba8                      ; 004deba1
        ;   XREF to: 004deba8 (CONDITIONAL_JUMP)  ; LAB_004deba8
    MOV ESI,0x1d02ebc                   ; 004deba3
    TEST ESI,ESI                        ; 004deba8
        ;   Label: LAB_004deba8
    JNZ 0x004dec51                      ; 004debaa
        ;   XREF to: 004dec51 (CONDITIONAL_JUMP)  ; LAB_004dec51
    FLD float ptr [EBX + 0x350]         ; 004debb0
        ;   Label: LAB_004debb0
    FLDZ                                ; 004debb6
    FCOMPP                              ; 004debb8
    FNSTSW AX                           ; 004debba
    SAHF                                ; 004debbc
    JC 0x004dec70                       ; 004debbd
        ;   XREF to: 004dec70 (CONDITIONAL_JUMP)  ; LAB_004dec70
    MOV EAX,dword ptr [EBX + 0x468]     ; 004debc3
        ;   Label: LAB_004debc3
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x610] ; 004debc9
    MOV EDI,dword ptr [EAX + 0x6c4]     ; 004debd0
    PUSH EDI                            ; 004debd6
    PUSH 0x5dbab4                       ; 004debd7 | DAT_005dbab4
    LEA EAX,[ESP + 0x618]               ; 004debdc
        ;   Label: LAB_004debdc
    PUSH EAX                            ; 004debe3
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004debe4
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 004debe9
    PUSH 0x58                           ; 004debec
    MOV EAX,dword ptr [ESP + 0x8e4]     ; 004debee
    PUSH EAX                            ; 004debf5
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560 ; 004debf6
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004debfb
    MOV ESI,EAX                         ; 004debfe
    LEA EAX,[ESP + 0x610]               ; 004dec00
    PUSH EAX                            ; 004dec07
    MOV EDX,dword ptr [ESP + 0x8e4]     ; 004dec08
    PUSH EDX                            ; 004dec0f
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00 ; 004dec10
        ;   XREF to: 004aaf00 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 004dec15
    MOV EDX,dword ptr [0x006141bc]      ; 004dec18 | DAT_006141bc
    MOV ECX,dword ptr [ESP + 0x8b4]     ; 004dec1e
    PUSH 0x0                            ; 004dec25
    SUB EDX,ECX                         ; 004dec27
    PUSH 0xf8                           ; 004dec29
    SUB EDX,ESI                         ; 004dec2e
    PUSH EDX                            ; 004dec30
    MOV EDX,dword ptr [0x006141b8]      ; 004dec31 | DAT_006141b8
    SUB EDX,ECX                         ; 004dec37
    SUB EDX,EAX                         ; 004dec39
    PUSH EDX                            ; 004dec3b
    LEA EAX,[ESP + 0x620]               ; 004dec3c
    PUSH EAX                            ; 004dec43
    MOV EDI,dword ptr [ESP + 0x8f4]     ; 004dec44
    PUSH EDI                            ; 004dec4b
    JMP 0x004ddb97                      ; 004dec4c
        ;   XREF to: 004ddb97 (UNCONDITIONAL_JUMP)  ; LAB_004ddb97
    MOV EAX,dword ptr [ESP + 0x884]     ; 004dec51
        ;   Label: LAB_004dec51
    PUSH EAX                            ; 004dec58
    MOV EDX,dword ptr [ESP + 0x884]     ; 004dec59
    PUSH EDX                            ; 004dec60
    PUSH EDI                            ; 004dec61
    PUSH ESI                            ; 004dec62
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900 ; 004dec63
        ;   XREF to: 0040d900 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004dec68
    JMP 0x004debb0                      ; 004dec6b
        ;   XREF to: 004debb0 (UNCONDITIONAL_JUMP)  ; LAB_004debb0
    CMP dword ptr [EBX + 0x454],0x0     ; 004dec70
        ;   Label: LAB_004dec70
    JNZ 0x004debc3                      ; 004dec77
        ;   XREF to: 004debc3 (CONDITIONAL_JUMP)  ; LAB_004debc3
    MOV EAX,dword ptr [EBX + 0x468]     ; 004dec7d
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x610] ; 004dec83
    MOV ESI,dword ptr [EAX + 0x6c4]     ; 004dec8a
    PUSH ESI                            ; 004dec90
    PUSH 0x5dbab7                       ; 004dec91 | = "Bullets %d"
    JMP 0x004debdc                      ; 004dec96
        ;   XREF to: 004debdc (UNCONDITIONAL_JUMP)  ; LAB_004debdc
    PUSH EAX                            ; 004dec9b
        ;   Label: LAB_004dec9b
    MOV EAX,dword ptr [EBX + 0x468]     ; 004dec9c
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x610] ; 004deca2
    PUSH ECX                            ; 004deca9
    PUSH EBX                            ; 004decaa
    CALL core_inv.cpp_FUN_004dd0a0      ; 004decab
        ;   XREF to: 004dd0a0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004dd0a0()
    ADD ESP,0xc                         ; 004decb0
    TEST EAX,EAX                        ; 004decb3
    JNZ 0x004decd8                      ; 004decb5
        ;   XREF to: 004decd8 (CONDITIONAL_JUMP)  ; LAB_004decd8
    MOV EAX,dword ptr [EBX + 0x468]     ; 004decb7
    PUSH 0x1                            ; 004decbd
    MOV ESI,dword ptr [EBX + EAX*0x4 + 0x610] ; 004decbf
    PUSH ESI                            ; 004decc6
    PUSH EBX                            ; 004decc7
    CALL core_inv.cpp_FUN_004dd0a0      ; 004decc8
        ;   XREF to: 004dd0a0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004dd0a0()
    ADD ESP,0xc                         ; 004deccd
    TEST EAX,EAX                        ; 004decd0
    JZ 0x004ded62                       ; 004decd2
        ;   XREF to: 004ded62 (CONDITIONAL_JUMP)  ; LAB_004ded62
    MOV ECX,dword ptr [EBX + 0x464]     ; 004decd8
        ;   Label: LAB_004decd8
    PUSH ECX                            ; 004decde
    CALL core_inv.cpp_getItemDisplayName_FUN_004d9f10 ; 004decdf
        ;   XREF to: 004d9f10 (UNCONDITIONAL_CALL)  ; char * core_inv.cpp_getItemDisplayName_FUN_004d9f10(CDemonActor * actor_ptr)
    ADD ESP,0x4                         ; 004dece4
    PUSH EAX                            ; 004dece7
    MOV EAX,dword ptr [EBX + 0x468]     ; 004dece8
    MOV ESI,dword ptr [EBX + EAX*0x4 + 0x610] ; 004decee
    PUSH ESI                            ; 004decf5
    CALL core_inv.cpp_getItemDescription_FUN_004d9f80 ; 004decf6
        ;   XREF to: 004d9f80 (UNCONDITIONAL_CALL)  ; char * core_inv.cpp_getItemDescription_FUN_004d9f80(CDemonActor * actor_ptr)
    ADD ESP,0x4                         ; 004decfb
    PUSH EAX                            ; 004decfe
    MOV EAX,dword ptr [EBX + 0x468]     ; 004decff
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x610] ; 004ded05
    PUSH EDI                            ; 004ded0c
    CALL core_inv.cpp_getItemDisplayName_FUN_004d9f10 ; 004ded0d
        ;   XREF to: 004d9f10 (UNCONDITIONAL_CALL)  ; char * core_inv.cpp_getItemDisplayName_FUN_004d9f10(CDemonActor * actor_ptr)
    ADD ESP,0x4                         ; 004ded12
    PUSH EAX                            ; 004ded15
    PUSH 0x5dbac9                       ; 004ded16 | = "%s\n\n%s %s"
    LEA EAX,[ESP + 0x20]                ; 004ded1b
    PUSH EAX                            ; 004ded1f
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004ded20
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x14                        ; 004ded25
    PUSH 0x5dbad3                       ; 004ded28 | = " are loaded."
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ded2d
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004ded32
    LEA EDI,[ESP + 0x10]                ; 004ded35
    MOV ESI,EAX                         ; 004ded39
    PUSH EDI                            ; 004ded3b
    SUB ECX,ECX                         ; 004ded3c
    DEC ECX                             ; 004ded3e
    MOV AL,0x0                          ; 004ded3f
    SCASB.REPNE ES:EDI                  ; 004ded41
    DEC EDI                             ; 004ded43
    MOV AL,byte ptr [ESI]               ; 004ded44
        ;   Label: LAB_004ded44
    MOV byte ptr [EDI],AL               ; 004ded46
    CMP AL,0x0                          ; 004ded48
    JZ 0x004ded5c                       ; 004ded4a
        ;   XREF to: 004ded5c (CONDITIONAL_JUMP)  ; LAB_004ded5c
    MOV AL,byte ptr [ESI + 0x1]         ; 004ded4c
    ADD ESI,0x2                         ; 004ded4f
    MOV byte ptr [EDI + 0x1],AL         ; 004ded52
    ADD EDI,0x2                         ; 004ded55
    CMP AL,0x0                          ; 004ded58
    JNZ 0x004ded44                      ; 004ded5a
        ;   XREF to: 004ded44 (CONDITIONAL_JUMP)  ; LAB_004ded44
    POP EDI                             ; 004ded5c
        ;   Label: LAB_004ded5c
    JMP 0x004ddc0d                      ; 004ded5d
        ;   XREF to: 004ddc0d (UNCONDITIONAL_JUMP)  ; LAB_004ddc0d
    MOV EAX,dword ptr [EBX + 0x468]     ; 004ded62
        ;   Label: LAB_004ded62
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x610] ; 004ded68
    PUSH EDI                            ; 004ded6f
    CALL core_inv.cpp_getItemDescription_FUN_004d9f80 ; 004ded70
        ;   XREF to: 004d9f80 (UNCONDITIONAL_CALL)  ; char * core_inv.cpp_getItemDescription_FUN_004d9f80(CDemonActor * actor_ptr)
    ADD ESP,0x4                         ; 004ded75
    PUSH EAX                            ; 004ded78
    MOV EAX,dword ptr [EBX + 0x468]     ; 004ded79
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x610] ; 004ded7f
    PUSH EDX                            ; 004ded86
    CALL core_inv.cpp_getItemDisplayName_FUN_004d9f10 ; 004ded87
        ;   XREF to: 004d9f10 (UNCONDITIONAL_CALL)  ; char * core_inv.cpp_getItemDisplayName_FUN_004d9f10(CDemonActor * actor_ptr)
    ADD ESP,0x4                         ; 004ded8c
    PUSH EAX                            ; 004ded8f
    PUSH 0x5dbae0                       ; 004ded90 | = "%s\n\n%s"
    JMP 0x004ddc00                      ; 004ded95
        ;   XREF to: 004ddc00 (UNCONDITIONAL_JUMP)  ; LAB_004ddc00
    MOV EAX,dword ptr [ESP + 0x8ac]     ; 004ded9a
        ;   Label: LAB_004ded9a
    MOV EDX,EAX                         ; 004deda1
    SAR EDX,0x1f                        ; 004deda3
    SUB EAX,EDX                         ; 004deda6
    SAR EAX,0x1                         ; 004deda8
    MOV dword ptr [ESP + 0x8ac],EAX     ; 004dedaa
    MOV EDX,ESI                         ; 004dedb1
    MOV EAX,ESI                         ; 004dedb3
    SAR EDX,0x1f                        ; 004dedb5
    SUB EAX,EDX                         ; 004dedb8
    SAR EAX,0x1                         ; 004dedba
    MOV ECX,0x28                        ; 004dedbc
    MOV EDI,0x8                         ; 004dedc1
    MOV dword ptr [ESP + 0x88c],ECX     ; 004dedc6
    MOV ESI,EAX                         ; 004dedcd
    JMP 0x004ddd63                      ; 004dedcf
        ;   XREF to: 004ddd63 (UNCONDITIONAL_JUMP)  ; LAB_004ddd63
    CMP dword ptr [EAX + 0x25c],0x0     ; 004dedd4 | g_CGameInstance.goggles_active
        ;   Label: LAB_004dedd4
    JNZ 0x004de0d2                      ; 004deddb
        ;   XREF to: 004de0d2 (CONDITIONAL_JUMP)  ; LAB_004de0d2
    JMP 0x004de159                      ; 004dede1
        ;   XREF to: 004de159 (UNCONDITIONAL_JUMP)  ; LAB_004de159
    FLD float ptr [EBX + 0x348]         ; 004dede6
        ;   Label: LAB_004dede6
    FLDZ                                ; 004dedec
    FCOMPP                              ; 004dedee
    FNSTSW AX                           ; 004dedf0
    SAHF                                ; 004dedf2
    JC 0x004de16c                       ; 004dedf3
        ;   XREF to: 004de16c (CONDITIONAL_JUMP)  ; LAB_004de16c
    JMP 0x004de2a4                      ; 004dedf9
        ;   XREF to: 004de2a4 (UNCONDITIONAL_JUMP)  ; LAB_004de2a4
    MOV EDX,dword ptr [ESP + 0x8dc]     ; 004dedfe
        ;   Label: LAB_004dedfe
    XOR EDI,EDI                         ; 004dee05
    TEST EDX,EDX                        ; 004dee07
    JLE 0x004de3b0                      ; 004dee09
        ;   XREF to: 004de3b0 (CONDITIONAL_JUMP)  ; LAB_004de3b0
    MOV dword ptr [ESP + 0x8e8],0x1cef7b0 ; 004dee0f
    PUSH 0x0                            ; 004dee1a
        ;   Label: LAB_004dee1a
    PUSH 0xf8                           ; 004dee1c
    PUSH ESI                            ; 004dee21
    PUSH 0x4                            ; 004dee22
    MOV ECX,dword ptr [ESP + 0x8f8]     ; 004dee24
    PUSH ECX                            ; 004dee2b
    MOV EAX,dword ptr [ESP + 0x8f8]     ; 004dee2c
    PUSH EAX                            ; 004dee33
    CALL engine_font.cpp_FUN_004a8df0   ; 004dee34
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    ADD ESP,0x18                        ; 004dee39
    INC EDI                             ; 004dee3c
    MOV EDX,dword ptr [ESP + 0x8d4]     ; 004dee3d
    MOV ECX,dword ptr [ESP + 0x8e8]     ; 004dee44
    MOV EAX,dword ptr [ESP + 0x8dc]     ; 004dee4b
    ADD ECX,0x100                       ; 004dee52
    ADD ESI,EDX                         ; 004dee58
    MOV dword ptr [ESP + 0x8e8],ECX     ; 004dee5a
    CMP EDI,EAX                         ; 004dee61
    JL 0x004dee1a                       ; 004dee63
        ;   XREF to: 004dee1a (CONDITIONAL_JUMP)  ; LAB_004dee1a
    JMP 0x004de3b0                      ; 004dee65
        ;   XREF to: 004de3b0 (UNCONDITIONAL_JUMP)  ; LAB_004de3b0

