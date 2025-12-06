; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_inv.cpp_CInventory_renderAllItems_FUN_00500690(CInventory * this_ptr)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x690]:8  local_690
; undefined8       Stack[-0x688]:8  local_688
; undefined4       Stack[-0x680]:4  local_680
; undefined4       Stack[-0x67c]:4  local_67c
; undefined1       Stack[-0x678]:1  local_678
; undefined1       Stack[-0x578]:1  local_578
; undefined1       Stack[-0x478]:1  local_478
; undefined1       Stack[-0x378]:1  local_378
; undefined1       Stack[-0x278]:1  local_278
; undefined1       Stack[-0x178]:1  local_178
; undefined1       Stack[-0x177]:1  local_177
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
; int              Stack[-0x48]:4  local_48
; int              Stack[-0x44]:4  local_44
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
;   core_game.cpp_CGame_processFrame_FUN_004da100 at 004da4b5
;
; Referenced Globals:
;   TerminatedCString s_d_00630b0e
;   TerminatedCString s_CTommyGun_00630b13
;   TerminatedCString s_CShotgun_00630b1d
;   TerminatedCString s_CElephantGun_00630b26
;   TerminatedCString s_CGun_00630b33
;   TerminatedCString s_d_00630b38
;   TerminatedCString s_s_d_00630b3b
;   TerminatedCString s_s_s_00630b41
;   TerminatedCString s_s_s_s_00630b48
;   TerminatedCString s_are_loaded_00630b52
;   TerminatedCString s_s_s_00630b5f
;   TerminatedCString s_d_x_3_0f_00630b66
;   TerminatedCString s_s_00630b72
;   TerminatedCString s_s_s_00630b75
;   float FLOAT_00630b7e = 65535
;   ... and 38 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;   core_inv.cpp_CInventory_isWeaponInCategory_FUN_004ffe70
;   core_inv.cpp_getItemDisplayName_FUN_004fcf00
;   core_inv.cpp_getItemIconName_FUN_004fcf70
;   core_inv.cpp_loadInventory_FUN_004fd220
;   crt_math.c_round_FUN_005fe6b0
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_2d.c_fillRectColor_FUN_00403170
;   engine_3d.c_setRenderAlpha_FUN_00406d80
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950
;   engine_alphabit.cpp_CAlphaBitmap_render_FUN_00410b00
;   engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
;   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00500690
        ;   Label: core_inv.cpp_CInventory_renderAllItems_FUN_00500690
    PUSH ESI                            ; 00500691
    PUSH EDI                            ; 00500692
    PUSH EBP                            ; 00500693
    MOV EBP,ESP                         ; 00500694
    SUB ESP,0x678                       ; 00500696
    AND ESP,0xfffffff8                  ; 0050069c
    MOV EAX,[0x0067b654]                ; 0050069f | CGame g_CGameInstance | CGame * g_CGamePtr
    CMP dword ptr [EAX + 0x228],0x0     ; 005006a4 | DAT_02d81cc4
    JNZ 0x00500fec                      ; 005006ab | LAB_00500fec
        ;   XREF to: 00500fec (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 005006b1
    MOV EDX,dword ptr [0x02db87d0]      ; 005006b4 | int g_LocalHeroIndex
    MOV EAX,dword ptr [EAX + 0x4]       ; 005006ba
    CMP EAX,dword ptr [EDX*0x4 + 0x2db87c0] ; 005006bd | CHero *[4] g_HeroActors
    JNZ 0x00500fec                      ; 005006c4 | LAB_00500fec
        ;   XREF to: 00500fec (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [0x00679398]      ; 005006ca | int g_WindowHeight
    CMP EBX,dword ptr [0x02dcd790]      ; 005006d0 | int g_InventoryScreenHeight
    JNZ 0x00500ff3                      ; 005006d6 | LAB_00500ff3
        ;   XREF to: 00500ff3 (CONDITIONAL_JUMP)
    MOV EAX,[0x02d03e94]                ; 005006dc | int g_UseExternalRenderer
        ;   Label: LAB_005006dc
    MOV EDI,dword ptr [0x00679398]      ; 005006e1 | int g_WindowHeight
    XOR ESI,ESI                         ; 005006e7
    MOV dword ptr [ESP + 0x61c],EAX     ; 005006e9
    MOV EAX,[0x020a5724]                ; 005006f0 | CBitFont * g_SmallEditorFont
    MOV dword ptr [0x02d03e94],ESI      ; 005006f5 | int g_UseExternalRenderer
    MOV dword ptr [ESP + 0x644],EAX     ; 005006fb
    CMP EDI,0x180                       ; 00500702
    JGE 0x0050071a                      ; 00500708 | LAB_0050071a
        ;   XREF to: 0050071a (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050070a
    CMP dword ptr [EAX + 0x44c],0x0     ; 0050070d
    JZ 0x00500ffd                       ; 00500714 | LAB_00500ffd
        ;   XREF to: 00500ffd (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050071a
        ;   Label: LAB_0050071a
    CMP dword ptr [EAX + 0x330],0x0     ; 0050071d
    JZ 0x005009c0                       ; 00500724 | LAB_005009c0
        ;   XREF to: 005009c0 (CONDITIONAL_JUMP)
    FLD float ptr [EAX + 0x338]         ; 0050072a
    FLDZ                                ; 00500730
    FCOMPP                              ; 00500732
    FNSTSW AX                           ; 00500734
    SAHF                                ; 00500736
    JNC 0x005009c0                      ; 00500737 | LAB_005009c0
        ;   XREF to: 005009c0 (CONDITIONAL_JUMP)
    MOV EBX,0x10                        ; 0050073d
    MOV ESI,0x70                        ; 00500742
    MOV EAX,[0x0067ce40]                ; 00500747 | int g_InventoryWidth
    MOV EDI,dword ptr [0x00679398]      ; 0050074c | int g_WindowHeight
    MOV dword ptr [ESP + 0x638],EAX     ; 00500752
    MOV dword ptr [ESP + 0x640],EBX     ; 00500759
    MOV dword ptr [ESP + 0x630],ESI     ; 00500760
    MOV EAX,[0x0067ce44]                ; 00500767 | int g_InventoryHeight
    MOV EBX,0x24                        ; 0050076c
    MOV dword ptr [ESP + 0x634],EAX     ; 00500771
    CMP EDI,0x180                       ; 00500778
    JGE 0x00500790                      ; 0050077e | LAB_00500790
        ;   XREF to: 00500790 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 00500780
    CMP dword ptr [EAX + 0x44c],0x0     ; 00500783
    JZ 0x0050100e                       ; 0050078a | LAB_0050100e
        ;   XREF to: 0050100e (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 00500790
        ;   Label: LAB_00500790
    MOV EDI,0xffff                      ; 00500793
    FLD float ptr [EAX + 0x338]         ; 00500798
    FLD1                                ; 0050079e
    MOV dword ptr [ESP + 0x620],EDI     ; 005007a0
    FCOMPP                              ; 005007a7
    FNSTSW AX                           ; 005007a9
    SAHF                                ; 005007ab
    JBE 0x005007c9                      ; 005007ac | LAB_005007c9
        ;   XREF to: 005007c9 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 005007ae
    FLD float ptr [EAX + 0x338]         ; 005007b1
    FMUL float ptr [0x00630b7e]         ; 005007b7 | float FLOAT_00630b7e
    CALL crt_math.c_round_FUN_005fe6b0  ; 005007bd | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [ESP + 0x620]       ; 005007c2
    MOV EAX,[0x02dd30f0]                ; 005007c9 | g_CLightGunClassInfo.name_hash
        ;   Label: LAB_005007c9
    PUSH EAX                            ; 005007ce
    MOV EAX,dword ptr [EBP + 0x14]      ; 005007cf
    MOV EDX,dword ptr [EAX + 0x330]     ; 005007d2
    PUSH EDX                            ; 005007d8
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005007d9 | CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005007de
    TEST EAX,EAX                        ; 005007e1
    JZ 0x0050105e                       ; 005007e3 | LAB_0050105e
        ;   XREF to: 0050105e (CONDITIONAL_JUMP)
    FLD float ptr [EAX + 0x584]         ; 005007e9
    FMUL double ptr [0x00630b82]        ; 005007ef | double DOUBLE_00630b82
    CALL crt_math.c_round_FUN_005fe6b0  ; 005007f5 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [ESP + 0x674]       ; 005007fa
    MOV ESI,dword ptr [ESP + 0x674]     ; 00500801
    PUSH ESI                            ; 00500808
    PUSH 0x630b0e                       ; 00500809 | = "%d%%" | s_d_00630b0e = %d%%
    LEA EAX,[ESP + 0x218]               ; 0050080e
    PUSH EAX                            ; 00500815
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00500816 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0050081b
    PUSH 0x58                           ; 0050081e
    MOV EDI,dword ptr [ESP + 0x648]     ; 00500820
    PUSH EDI                            ; 00500827
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 00500828 | int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0050082d
    MOV EBX,EAX                         ; 00500830
    LEA EAX,[ESP + 0x210]               ; 00500832
    PUSH EAX                            ; 00500839
    PUSH EDI                            ; 0050083a
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80 ; 0050083b | int engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont * this_ptr, char * text)
        ;   XREF to: 004cfe80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00500840
    MOV EDX,dword ptr [0x00679398]      ; 00500843 | int g_WindowHeight
    MOV ECX,dword ptr [ESP + 0x640]     ; 00500849
    PUSH 0x0                            ; 00500850
    SUB EDX,ECX                         ; 00500852
    PUSH 0xf8                           ; 00500854
    SUB EDX,EBX                         ; 00500859
    PUSH EDX                            ; 0050085b
    MOV EDX,dword ptr [0x00679394]      ; 0050085c | int g_WindowWidth
    SUB EDX,ECX                         ; 00500862
    SUB EDX,EAX                         ; 00500864
    PUSH EDX                            ; 00500866
    LEA EAX,[ESP + 0x220]               ; 00500867
    PUSH EAX                            ; 0050086e
    PUSH EDI                            ; 0050086f
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 00500870 | int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
        ;   Label: LAB_00500870
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 00500875
    MOV EAX,dword ptr [EBP + 0x14]      ; 00500878
        ;   Label: LAB_00500878
    CMP dword ptr [EAX + 0x44c],0x0     ; 0050087b
    JZ 0x005009c0                       ; 00500882 | LAB_005009c0
        ;   XREF to: 005009c0 (CONDITIONAL_JUMP)
    PUSH 0x3                            ; 00500888
    MOV EDX,dword ptr [EAX + 0x330]     ; 0050088a
    PUSH EDX                            ; 00500890
    PUSH EAX                            ; 00500891
    CALL core_inv.cpp_CInventory_isWeaponInCategory_FUN_004ffe70 ; 00500892 | int core_inv.cpp_CInventory_isWeaponInCategory_FUN_004ffe70(CInventory * this_ptr, CDemonActor * weapon_actor, int weapon_category)
        ;   XREF to: 004ffe70 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00500897
    TEST EAX,EAX                        ; 0050089a
    JZ 0x00501276                       ; 0050089c | LAB_00501276
        ;   XREF to: 00501276 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 005008a2
    MOV EDX,dword ptr [EAX + 0x330]     ; 005008a5
    PUSH EDX                            ; 005008ab
    CALL core_inv.cpp_getItemIconName_FUN_004fcf70 ; 005008ac | char * core_inv.cpp_getItemIconName_FUN_004fcf70(CDemonActor * actor_ptr)
        ;   XREF to: 004fcf70 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005008b1
    PUSH EAX                            ; 005008b4
    MOV EAX,dword ptr [EBP + 0x14]      ; 005008b5
    MOV ECX,dword ptr [EAX + 0x330]     ; 005008b8
    PUSH ECX                            ; 005008be
    CALL core_inv.cpp_getItemDisplayName_FUN_004fcf00 ; 005008bf | char * core_inv.cpp_getItemDisplayName_FUN_004fcf00(CDemonActor * actor_ptr)
        ;   XREF to: 004fcf00 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005008c4
    PUSH EAX                            ; 005008c7
    PUSH 0x630b41                       ; 005008c8 | = "%s\n\n%s" | s_s_s_00630b41 = %s

        ; %s
    LEA EAX,[ESP + 0x51c]               ; 005008cd
        ;   Label: LAB_005008cd
    PUSH EAX                            ; 005008d4
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005008d5 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005008da
    MOV EAX,dword ptr [ESP + 0x644]     ; 005008dd
        ;   Label: LAB_005008dd
    MOV EBX,dword ptr [ESP + 0x630]     ; 005008e4
    MOV dword ptr [ESP + 0x660],EAX     ; 005008eb
    MOV EAX,dword ptr [ESP + 0x638]     ; 005008f2
    SUB EAX,EBX                         ; 005008f9
    PUSH EAX                            ; 005008fb
    PUSH 0x100                          ; 005008fc
    PUSH 0xa                            ; 00500901
    PUSH 0x2db8c70                      ; 00500903 | char[256] DAT_02db8c70
    LEA EAX,[ESP + 0x520]               ; 00500908
    PUSH EAX                            ; 0050090f
    MOV ESI,dword ptr [ESP + 0x658]     ; 00500910
    PUSH ESI                            ; 00500917
    CALL engine_font.cpp_CBitFont_wrapText_FUN_004d0010 ; 00500918 | int engine_font.cpp_CBitFont_wrapText_FUN_004d0010(CBitFont * this_ptr, char * source_text, char * dest_buffer, int max_lines, ...)
        ;   XREF to: 004d0010 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 0050091d
    PUSH 0x58                           ; 00500920
    MOV EDI,dword ptr [ESP + 0x648]     ; 00500922
    PUSH EDI                            ; 00500929
    MOV ESI,EAX                         ; 0050092a
    MOV dword ptr [ESP + 0x660],EAX     ; 0050092c
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 00500933 | int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00500938
    MOV EBX,dword ptr [0x00679398]      ; 0050093b | int g_WindowHeight
    MOV dword ptr [ESP + 0x654],EAX     ; 00500941
    MOV EAX,dword ptr [ESP + 0x634]     ; 00500948
    MOV ECX,dword ptr [ESP + 0x638]     ; 0050094f
    SUB EBX,EAX                         ; 00500956
    MOV EAX,[0x00679394]                ; 00500958 | int g_WindowWidth
    MOV EDX,dword ptr [ESP + 0x640]     ; 0050095d
    SUB EAX,ECX                         ; 00500964
    ADD EBX,EDX                         ; 00500966
    ADD EDX,EAX                         ; 00500968
    XOR EDI,EDI                         ; 0050096a
    MOV dword ptr [ESP + 0x65c],EDX     ; 0050096c
    TEST ESI,ESI                        ; 00500973
    JLE 0x005009c0                      ; 00500975 | LAB_005009c0
        ;   XREF to: 005009c0 (CONDITIONAL_JUMP)
    MOV ESI,0x2db8c70                   ; 00500977 | char[256] DAT_02db8c70
    PUSH 0x0                            ; 0050097c
        ;   Label: LAB_0050097c
    PUSH 0xf8                           ; 0050097e
    PUSH EBX                            ; 00500983
    MOV EAX,dword ptr [ESP + 0x668]     ; 00500984
    PUSH EAX                            ; 0050098b
    PUSH ESI                            ; 0050098c | char[256] DAT_02db8c70
    MOV EDX,dword ptr [ESP + 0x674]     ; 0050098d
    PUSH EDX                            ; 00500994
    INC EDI                             ; 00500995
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 00500996 | int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 0050099b
    ADD ESI,0x100                       ; 0050099e
    MOV ECX,dword ptr [ESP + 0x654]     ; 005009a4
    MOV EAX,dword ptr [ESP + 0x658]     ; 005009ab
    ADD EBX,ECX                         ; 005009b2
    CMP EDI,EAX                         ; 005009b4
    JL 0x0050097c                       ; 005009b6 | LAB_0050097c
        ;   XREF to: 0050097c (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 005009b8
    MOV EDX,EDX                         ; 005009be
    MOV EAX,dword ptr [EBP + 0x14]      ; 005009c0
        ;   Label: LAB_005009c0
    CMP dword ptr [EAX + 0x334],0x0     ; 005009c3
    JZ 0x00500ca0                       ; 005009ca | LAB_00500ca0
        ;   XREF to: 00500ca0 (CONDITIONAL_JUMP)
    FLD float ptr [EAX + 0x33c]         ; 005009d0
    FLDZ                                ; 005009d6
    FCOMPP                              ; 005009d8
    FNSTSW AX                           ; 005009da
    SAHF                                ; 005009dc
    JNC 0x00500ca0                      ; 005009dd | LAB_00500ca0
        ;   XREF to: 00500ca0 (CONDITIONAL_JUMP)
    MOV EBX,0x70                        ; 005009e3
    MOV ECX,0x10                        ; 005009e8
    MOV ESI,dword ptr [0x0067ce44]      ; 005009ed | int g_InventoryHeight
    MOV EDI,dword ptr [0x00679398]      ; 005009f3 | int g_WindowHeight
    MOV dword ptr [ESP + 0x62c],EBX     ; 005009f9
    MOV dword ptr [ESP + 0x63c],ECX     ; 00500a00
    MOV EBX,dword ptr [0x0067ce40]      ; 00500a07 | int g_InventoryWidth
    CMP EDI,0x180                       ; 00500a0d
    JGE 0x00500a25                      ; 00500a13 | LAB_00500a25
        ;   XREF to: 00500a25 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 00500a15
    CMP dword ptr [EAX + 0x44c],0x0     ; 00500a18
    JZ 0x00501366                       ; 00500a1f | LAB_00501366
        ;   XREF to: 00501366 (CONDITIONAL_JUMP)
    MOV EAX,[0x02db87b8]                ; 00500a25 | DAT_02db8780.name_hash
        ;   Label: LAB_00500a25
    PUSH EAX                            ; 00500a2a
    MOV EAX,dword ptr [EBP + 0x14]      ; 00500a2b
    MOV EDX,dword ptr [EAX + 0x334]     ; 00500a2e
    PUSH EDX                            ; 00500a34
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 00500a35 | CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00500a3a
    TEST EAX,EAX                        ; 00500a3d
    JZ 0x00500ad5                       ; 00500a3f | LAB_00500ad5
        ;   XREF to: 00500ad5 (CONDITIONAL_JUMP)
    SUB ESP,0x8                         ; 00500a45
    FLD float ptr [EAX + 0x2d8]         ; 00500a48
    FSTP double ptr [ESP]               ; 00500a4e
    MOV ECX,dword ptr [EAX + 0x2d4]     ; 00500a51
    PUSH ECX                            ; 00500a57
    PUSH 0x630b66                       ; 00500a58 | = "%d x%3.0f%%" | s_d_x_3_0f_00630b66 = %d x%3.0f%%
    LEA EAX,[ESP + 0x320]               ; 00500a5d
    PUSH EAX                            ; 00500a64
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00500a65 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00500a6a
    PUSH 0x58                           ; 00500a6d
    MOV EDI,dword ptr [ESP + 0x648]     ; 00500a6f
    PUSH EDI                            ; 00500a76
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 00500a77 | int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00500a7c
    MOV EDI,EAX                         ; 00500a7f
    LEA EAX,[ESP + 0x310]               ; 00500a81
    PUSH EAX                            ; 00500a88
    MOV EAX,dword ptr [ESP + 0x648]     ; 00500a89
    PUSH EAX                            ; 00500a90
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80 ; 00500a91 | int engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont * this_ptr, char * text)
        ;   XREF to: 004cfe80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00500a96
    MOV EDX,dword ptr [0x00679398]      ; 00500a99 | int g_WindowHeight
    MOV ECX,dword ptr [ESP + 0x63c]     ; 00500a9f
    PUSH 0x0                            ; 00500aa6
    SUB EDX,ECX                         ; 00500aa8
    PUSH 0xf8                           ; 00500aaa
    SUB EDX,EDI                         ; 00500aaf
    PUSH EDX                            ; 00500ab1
    MOV EDX,dword ptr [0x00679394]      ; 00500ab2 | int g_WindowWidth
    SUB EDX,ECX                         ; 00500ab8
    SUB EDX,EAX                         ; 00500aba
    PUSH EDX                            ; 00500abc
    LEA EAX,[ESP + 0x320]               ; 00500abd
    PUSH EAX                            ; 00500ac4
    MOV EAX,dword ptr [ESP + 0x658]     ; 00500ac5
    PUSH EAX                            ; 00500acc
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 00500acd | int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 00500ad2
    MOV EDX,dword ptr [0x02d12d70]      ; 00500ad5 | g_CFilmReelClassInfo.name_hash
        ;   Label: LAB_00500ad5
    MOV EAX,dword ptr [EBP + 0x14]      ; 00500adb
    PUSH EDX                            ; 00500ade
    MOV ECX,dword ptr [EAX + 0x334]     ; 00500adf
    PUSH ECX                            ; 00500ae5
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 00500ae6 | CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00500aeb
    TEST EAX,EAX                        ; 00500aee
    JZ 0x00500b7d                       ; 00500af0 | LAB_00500b7d
        ;   XREF to: 00500b7d (CONDITIONAL_JUMP)
    PUSH EAX                            ; 00500af6
    CALL core_inv.cpp_getItemDisplayName_FUN_004fcf00 ; 00500af7 | char * core_inv.cpp_getItemDisplayName_FUN_004fcf00(CDemonActor * actor_ptr)
        ;   XREF to: 004fcf00 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00500afc
    PUSH EAX                            ; 00500aff
    PUSH 0x630b72                       ; 00500b00 | = "%s" | s_s_00630b72 = %s
    LEA EAX,[ESP + 0x418]               ; 00500b05
    PUSH EAX                            ; 00500b0c
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00500b0d | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00500b12
    PUSH 0x58                           ; 00500b15
    MOV EDI,dword ptr [ESP + 0x648]     ; 00500b17
    PUSH EDI                            ; 00500b1e
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 00500b1f | int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00500b24
    MOV EDI,EAX                         ; 00500b27
    LEA EAX,[ESP + 0x410]               ; 00500b29
    PUSH EAX                            ; 00500b30
    MOV EAX,dword ptr [ESP + 0x648]     ; 00500b31
    PUSH EAX                            ; 00500b38
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80 ; 00500b39 | int engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont * this_ptr, char * text)
        ;   XREF to: 004cfe80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00500b3e
    MOV EDX,dword ptr [0x00679398]      ; 00500b41 | int g_WindowHeight
    MOV ECX,dword ptr [ESP + 0x63c]     ; 00500b47
    PUSH 0x0                            ; 00500b4e
    SUB EDX,ECX                         ; 00500b50
    PUSH 0xf8                           ; 00500b52
    SUB EDX,EDI                         ; 00500b57
    PUSH EDX                            ; 00500b59
    MOV EDX,dword ptr [0x00679394]      ; 00500b5a | int g_WindowWidth
    SUB EDX,ECX                         ; 00500b60
    SUB EDX,EAX                         ; 00500b62
    PUSH EDX                            ; 00500b64
    LEA EAX,[ESP + 0x420]               ; 00500b65
    PUSH EAX                            ; 00500b6c
    MOV EAX,dword ptr [ESP + 0x658]     ; 00500b6d
    PUSH EAX                            ; 00500b74
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 00500b75 | int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 00500b7a
    MOV EAX,dword ptr [EBP + 0x14]      ; 00500b7d
        ;   Label: LAB_00500b7d
    CMP dword ptr [EAX + 0x44c],0x0     ; 00500b80
    JZ 0x00500ca0                       ; 00500b87 | LAB_00500ca0
        ;   XREF to: 00500ca0 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EAX + 0x334]     ; 00500b8d
    PUSH ECX                            ; 00500b93
    CALL core_inv.cpp_getItemIconName_FUN_004fcf70 ; 00500b94 | char * core_inv.cpp_getItemIconName_FUN_004fcf70(CDemonActor * actor_ptr)
        ;   XREF to: 004fcf70 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00500b99
    PUSH EAX                            ; 00500b9c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00500b9d
    MOV EDI,dword ptr [EAX + 0x334]     ; 00500ba0
    PUSH EDI                            ; 00500ba6
    CALL core_inv.cpp_getItemDisplayName_FUN_004fcf00 ; 00500ba7 | char * core_inv.cpp_getItemDisplayName_FUN_004fcf00(CDemonActor * actor_ptr)
        ;   XREF to: 004fcf00 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00500bac
    PUSH EAX                            ; 00500baf
    PUSH 0x630b75                       ; 00500bb0 | = "%s\n\n%s" | s_s_s_00630b75 = %s

        ; %s
    LEA EAX,[ESP + 0x11c]               ; 00500bb5
    PUSH EAX                            ; 00500bbc
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00500bbd | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00500bc2
    MOV EAX,dword ptr [ESP + 0x644]     ; 00500bc5
    MOV EDX,dword ptr [ESP + 0x62c]     ; 00500bcc
    MOV dword ptr [ESP + 0x664],EAX     ; 00500bd3
    MOV EAX,EBX                         ; 00500bda
    SUB EAX,EDX                         ; 00500bdc
    PUSH EAX                            ; 00500bde
    PUSH 0x100                          ; 00500bdf
    PUSH 0xa                            ; 00500be4
    PUSH 0x2db9670                      ; 00500be6 | char[256] DAT_02db9670
    LEA EAX,[ESP + 0x120]               ; 00500beb
    PUSH EAX                            ; 00500bf2
    MOV ECX,dword ptr [ESP + 0x658]     ; 00500bf3
    PUSH ECX                            ; 00500bfa
    CALL engine_font.cpp_CBitFont_wrapText_FUN_004d0010 ; 00500bfb | int engine_font.cpp_CBitFont_wrapText_FUN_004d0010(CBitFont * this_ptr, char * source_text, char * dest_buffer, int max_lines, ...)
        ;   XREF to: 004d0010 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x68c],EAX     ; 00500c00
    ADD ESP,0x18                        ; 00500c07
    PUSH 0x58                           ; 00500c0a
    MOV EDI,dword ptr [ESP + 0x648]     ; 00500c0c
    PUSH EDI                            ; 00500c13
    MOV dword ptr [ESP + 0x650],EAX     ; 00500c14
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 00500c1b | int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00500c20
    MOV EDI,dword ptr [0x00679398]      ; 00500c23 | int g_WindowHeight
    MOV dword ptr [ESP + 0x64c],EAX     ; 00500c29
    SUB EDI,ESI                         ; 00500c30
    ADD EDI,dword ptr [ESP + 0x63c]     ; 00500c32
    MOV EAX,[0x00679394]                ; 00500c39 | int g_WindowWidth
    MOV EDX,dword ptr [ESP + 0x63c]     ; 00500c3e
    SUB EAX,EBX                         ; 00500c45
    ADD EDX,EAX                         ; 00500c47
    MOV dword ptr [ESP + 0x650],EDX     ; 00500c49
    MOV EDX,dword ptr [ESP + 0x674]     ; 00500c50
    XOR ESI,ESI                         ; 00500c57
    TEST EDX,EDX                        ; 00500c59
    JLE 0x00500ca0                      ; 00500c5b | LAB_00500ca0
        ;   XREF to: 00500ca0 (CONDITIONAL_JUMP)
    MOV EBX,0x2db9670                   ; 00500c5d | char[256] DAT_02db9670
    PUSH 0x0                            ; 00500c62
        ;   Label: LAB_00500c62
    PUSH 0xf8                           ; 00500c64
    PUSH EDI                            ; 00500c69
    MOV ECX,dword ptr [ESP + 0x65c]     ; 00500c6a
    PUSH ECX                            ; 00500c71
    PUSH EBX                            ; 00500c72 | char[256] DAT_02db9670
    MOV EAX,dword ptr [ESP + 0x678]     ; 00500c73
    PUSH EAX                            ; 00500c7a
    INC ESI                             ; 00500c7b
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 00500c7c | int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 00500c81
    ADD EBX,0x100                       ; 00500c84 | DAT_02db9770
    MOV EDX,dword ptr [ESP + 0x64c]     ; 00500c8a
    MOV ECX,dword ptr [ESP + 0x648]     ; 00500c91
    ADD EDI,EDX                         ; 00500c98
    CMP ESI,ECX                         ; 00500c9a
    JL 0x00500c62                       ; 00500c9c | LAB_00500c62
        ;   XREF to: 00500c62 (CONDITIONAL_JUMP)
    MOV EAX,EAX                         ; 00500c9e
    MOV EAX,[0x0067b654]                ; 00500ca0 | CGame * g_CGamePtr
        ;   Label: LAB_00500ca0
    CMP dword ptr [EAX + 0x244],0x0     ; 00500ca5 | g_CGameInstance.auto_save_blocked
    JZ 0x0050139d                       ; 00500cac | LAB_0050139d
        ;   XREF to: 0050139d (CONDITIONAL_JUMP)
    MOV EAX,[0x00679398]                ; 00500cb2 | int g_WindowHeight
        ;   Label: LAB_00500cb2
    SUB EAX,0x21                        ; 00500cb7
    MOV dword ptr [ESP + 0x610],EAX     ; 00500cba
    MOV EAX,[0x00679398]                ; 00500cc1 | int g_WindowHeight
    MOV EDX,dword ptr [ESP + 0x610]     ; 00500cc6
    SUB EAX,0x6                         ; 00500ccd
    SUB EDX,EAX                         ; 00500cd0
    MOV dword ptr [ESP + 0x674],EDX     ; 00500cd2
    MOV EDX,dword ptr [EBP + 0x14]      ; 00500cd9
    FILD dword ptr [ESP + 0x674]        ; 00500cdc
    FMUL float ptr [EDX]                ; 00500ce3
    FMUL double ptr [0x00630b8a]        ; 00500ce5 | double DOUBLE_00630b8a
    PUSH 0x2                            ; 00500ceb
    MOV dword ptr [ESP + 0x678],EAX     ; 00500ced
    PUSH EAX                            ; 00500cf4
    FILD dword ptr [ESP + 0x67c]        ; 00500cf5
    FADDP                               ; 00500cfc
    PUSH 0x10                           ; 00500cfe
    CALL crt_math.c_round_FUN_005fe6b0  ; 00500d00 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [ESP + 0x61c]       ; 00500d05
    MOV EDI,dword ptr [ESP + 0x61c]     ; 00500d0c
    PUSH EDI                            ; 00500d13
    PUSH 0x6                            ; 00500d14
    MOV EBX,dword ptr [0x00679398]      ; 00500d16 | int g_WindowHeight
    CALL engine_2d.c_fillRectColor_FUN_00403170 ; 00500d1c | void engine_2d.c_fillRectColor_FUN_00403170(int x1, int y1, int x2, int y2, ...)
        ;   XREF to: 00403170 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00500d21
    PUSH 0xffff                         ; 00500d24
    SUB EBX,0x24                        ; 00500d29
    PUSH EBX                            ; 00500d2c
    PUSH 0x4                            ; 00500d2d
    PUSH 0x2dcd6c8                      ; 00500d2f | CAlphaBitmap g_BatteryIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950 ; 00500d34 | void engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950(CAlphaBitmap * this_ptr, int x, int y, int alpha)
        ;   XREF to: 00410950 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00500d39
    MOV EAX,dword ptr [EBP + 0x14]      ; 00500d3c
        ;   Label: LAB_00500d3c
    FLD float ptr [EAX + 0x33c]         ; 00500d3f
    FLDZ                                ; 00500d45
    FCOMPP                              ; 00500d47
    FNSTSW AX                           ; 00500d49
    SAHF                                ; 00500d4b
    JNC 0x005013af                      ; 00500d4c | LAB_005013af
        ;   XREF to: 005013af (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 00500d52
        ;   Label: LAB_00500d52
    MOV EAX,dword ptr [EAX + 0x340]     ; 00500d55
    MOV dword ptr [ESP + 0xc],EAX       ; 00500d5b
    MOV EAX,dword ptr [EBP + 0x14]      ; 00500d5f
    FLD float ptr [EAX + 0x33c]         ; 00500d62
    FCOMP float ptr [ESP + 0xc]         ; 00500d68
    FNSTSW AX                           ; 00500d6c
    SAHF                                ; 00500d6e
    JBE 0x00500d7e                      ; 00500d6f | LAB_00500d7e
        ;   XREF to: 00500d7e (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 00500d71
    MOV EAX,dword ptr [EAX + 0x33c]     ; 00500d74
    MOV dword ptr [ESP + 0xc],EAX       ; 00500d7a
    FLD float ptr [ESP + 0xc]           ; 00500d7e
        ;   Label: LAB_00500d7e
    MOV EAX,0xffff                      ; 00500d82
    FLD1                                ; 00500d87
    MOV dword ptr [ESP + 0x624],EAX     ; 00500d89
    FCOMPP                              ; 00500d90
    FNSTSW AX                           ; 00500d92
    SAHF                                ; 00500d94
    JBE 0x00500dad                      ; 00500d95 | LAB_00500dad
        ;   XREF to: 00500dad (CONDITIONAL_JUMP)
    FLD float ptr [ESP + 0xc]           ; 00500d97
    FMUL float ptr [0x00630b7e]         ; 00500d9b | float FLOAT_00630b7e
    CALL crt_math.c_round_FUN_005fe6b0  ; 00500da1 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [ESP + 0x624]       ; 00500da6
    MOV EAX,[0x02db87d0]                ; 00500dad | int g_LocalHeroIndex
        ;   Label: LAB_00500dad
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 00500db2 | CHero *[4] g_HeroActors
    FLD float ptr [EAX + 0x243c]        ; 00500db9
    FMUL double ptr [0x00630b8a]        ; 00500dbf | double DOUBLE_00630b8a
    FST float ptr [ESP + 0x8]           ; 00500dc5
    FLDZ                                ; 00500dc9
    FCOMPP                              ; 00500dcb
    FNSTSW AX                           ; 00500dcd
    SAHF                                ; 00500dcf
    JBE 0x00500dd8                      ; 00500dd0 | LAB_00500dd8
        ;   XREF to: 00500dd8 (CONDITIONAL_JUMP)
    XOR EDX,EDX                         ; 00500dd2
    MOV dword ptr [ESP + 0x8],EDX       ; 00500dd4
    FLD float ptr [ESP + 0x8]           ; 00500dd8
        ;   Label: LAB_00500dd8
    FLD1                                ; 00500ddc
    FCOMPP                              ; 00500dde
    FNSTSW AX                           ; 00500de0
    SAHF                                ; 00500de2
    JNC 0x00500ded                      ; 00500de3 | LAB_00500ded
        ;   XREF to: 00500ded (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 00500de5
    MOV EBX,0x3f                        ; 00500ded
        ;   Label: LAB_00500ded
    MOV ESI,dword ptr [0x00679398]      ; 00500df2 | int g_WindowHeight
    MOV EDI,0x1b                        ; 00500df8
    CMP ESI,0x180                       ; 00500dfd
    JGE 0x00500e0f                      ; 00500e03 | LAB_00500e0f
        ;   XREF to: 00500e0f (CONDITIONAL_JUMP)
    MOV EBX,0x1f                        ; 00500e05
    MOV EDI,0xd                         ; 00500e0a
    MOV EAX,[0x00679394]                ; 00500e0f | int g_WindowWidth
        ;   Label: LAB_00500e0f
    SUB EAX,0x4                         ; 00500e14
    SUB EAX,EDI                         ; 00500e17
    MOV dword ptr [ESP + 0x614],EAX     ; 00500e19
    MOV EAX,dword ptr [ESP + 0x624]     ; 00500e20
    MOV EDX,EAX                         ; 00500e27
    SAR EDX,0x1f                        ; 00500e29
    SUB EAX,EDX                         ; 00500e2c
    SAR EAX,0x1                         ; 00500e2e
    MOV dword ptr [ESP + 0x674],EBX     ; 00500e30
    FILD dword ptr [ESP + 0x674]        ; 00500e37
    FLD ST0                             ; 00500e3e
    FMUL float ptr [ESP + 0x8]          ; 00500e40
    DEC EDI                             ; 00500e44
    PUSH EAX                            ; 00500e45
    FSUBP                               ; 00500e46
    PUSH EBX                            ; 00500e48
    CALL crt_math.c_round_FUN_005fe6b0  ; 00500e49 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    PUSH EDI                            ; 00500e4e
    FISTP dword ptr [ESP + 0x624]       ; 00500e4f
    MOV EDI,dword ptr [ESP + 0x624]     ; 00500e56
    PUSH EDI                            ; 00500e5d
    PUSH 0x0                            ; 00500e5e
    MOV ESI,EAX                         ; 00500e60
    LEA EAX,[EDI + 0x4]                 ; 00500e62
    PUSH EAX                            ; 00500e65
    MOV EAX,dword ptr [ESP + 0x62c]     ; 00500e66
    PUSH EAX                            ; 00500e6d
    PUSH 0x2dcd6dc                      ; 00500e6e | CAlphaBitmap g_HealthBar1Bitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_render_FUN_00410b00 ; 00500e73 | void engine_alphabit.cpp_CAlphaBitmap_render_FUN_00410b00(CAlphaBitmap * this_ptr, int dest_y, int dest_x, int left_x, ...)
        ;   XREF to: 00410b00 (UNCONDITIONAL_CALL)
    ADD ESP,0x20                        ; 00500e78
    PUSH ESI                            ; 00500e7b
    PUSH 0x4                            ; 00500e7c
    MOV EDX,dword ptr [ESP + 0x61c]     ; 00500e7e
    PUSH EDX                            ; 00500e85
    PUSH 0x2dcd6f0                      ; 00500e86 | CAlphaBitmap g_HealthBar2Bitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950 ; 00500e8b | void engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950(CAlphaBitmap * this_ptr, int x, int y, int alpha)
        ;   XREF to: 00410950 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00500e90
    MOV EAX,dword ptr [EBP + 0x14]      ; 00500e93
        ;   Label: LAB_00500e93
    FLDZ                                ; 00500e96
    FLD float ptr [EAX + 0x344]         ; 00500e98
    FSTP double ptr [ESP]               ; 00500e9e
    FCOMP double ptr [ESP]              ; 00500ea1
    FNSTSW AX                           ; 00500ea4
    SAHF                                ; 00500ea6
    JNC 0x00500fe0                      ; 00500ea7 | LAB_00500fe0
        ;   XREF to: 00500fe0 (CONDITIONAL_JUMP)
    MOV ECX,0xffff                      ; 00500ead
    FLD1                                ; 00500eb2
    MOV dword ptr [ESP + 0x628],ECX     ; 00500eb4
    FCOMP double ptr [ESP]              ; 00500ebb
    FNSTSW AX                           ; 00500ebe
    SAHF                                ; 00500ec0
    JBE 0x00500ed8                      ; 00500ec1 | LAB_00500ed8
        ;   XREF to: 00500ed8 (CONDITIONAL_JUMP)
    FLD double ptr [ESP]                ; 00500ec3
    FMUL double ptr [0x00630b92]        ; 00500ec6 | double DOUBLE_00630b92
    CALL crt_math.c_round_FUN_005fe6b0  ; 00500ecc | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [ESP + 0x628]       ; 00500ed1
    MOV EBX,dword ptr [ESP + 0x628]     ; 00500ed8
        ;   Label: LAB_00500ed8
    PUSH EBX                            ; 00500edf
    CALL engine_3d.c_setRenderAlpha_FUN_00406d80 ; 00500ee0 | void engine_3d.c_setRenderAlpha_FUN_00406d80(int alpha_color_value)
        ;   XREF to: 00406d80 (UNCONDITIONAL_CALL)
    MOV EAX,[0x020a5724]                ; 00500ee5 | CBitFont * g_SmallEditorFont
    MOV EDX,dword ptr [0x0067ce44]      ; 00500eea | int g_InventoryHeight
    ADD ESP,0x4                         ; 00500ef0
    MOV ESI,dword ptr [0x00679398]      ; 00500ef3 | int g_WindowHeight
    MOV dword ptr [ESP + 0x670],EAX     ; 00500ef9
    CMP ESI,0x180                       ; 00500f00
    JGE 0x00500f1f                      ; 00500f06 | LAB_00500f1f
        ;   XREF to: 00500f1f (CONDITIONAL_JUMP)
    MOV EAX,EDX                         ; 00500f08
    SAR EDX,0x1f                        ; 00500f0a
    SUB EAX,EDX                         ; 00500f0d
    SAR EAX,0x1                         ; 00500f0f
    MOV EDX,EAX                         ; 00500f11
    MOV EAX,[0x020a572c]                ; 00500f13 | CBitFont * g_MicroFont
    MOV dword ptr [ESP + 0x670],EAX     ; 00500f18
    MOV EAX,[0x00679394]                ; 00500f1f | int g_WindowWidth
        ;   Label: LAB_00500f1f
    SUB EAX,EDX                         ; 00500f24
    SUB EAX,0x4                         ; 00500f26
    PUSH EAX                            ; 00500f29
    PUSH 0x100                          ; 00500f2a
    PUSH 0xa                            ; 00500f2f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00500f31
    PUSH 0x2dba070                      ; 00500f34 | char[256] DAT_02dba070
    ADD EAX,0x34c                       ; 00500f39
    PUSH EAX                            ; 00500f3e
    MOV EDI,dword ptr [ESP + 0x684]     ; 00500f3f
    PUSH EDI                            ; 00500f46
    CALL engine_font.cpp_CBitFont_wrapText_FUN_004d0010 ; 00500f47 | int engine_font.cpp_CBitFont_wrapText_FUN_004d0010(CBitFont * this_ptr, char * source_text, char * dest_buffer, int max_lines, ...)
        ;   XREF to: 004d0010 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 00500f4c
    PUSH 0x58                           ; 00500f4f
    PUSH EDI                            ; 00500f51
    MOV EBX,EAX                         ; 00500f52
    MOV dword ptr [ESP + 0x674],EAX     ; 00500f54
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 00500f5b | int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00500f60
    MOV dword ptr [ESP + 0x668],EAX     ; 00500f63
    IMUL EAX,EBX                        ; 00500f6a
    MOV EDI,dword ptr [0x00679398]      ; 00500f6d | int g_WindowHeight
    SUB EDI,0x4                         ; 00500f73
    MOV EDX,dword ptr [0x020a572c]      ; 00500f76 | CBitFont * g_MicroFont
    SUB EDI,EAX                         ; 00500f7c
    CMP EDX,dword ptr [ESP + 0x670]     ; 00500f7e
    JNZ 0x00500f90                      ; 00500f85 | LAB_00500f90
        ;   XREF to: 00500f90 (CONDITIONAL_JUMP)
    CMP dword ptr [0x02fa8cd0],0x0      ; 00500f87 | int g_MessageCount
    JNZ 0x00500fe0                      ; 00500f8e | LAB_00500fe0
        ;   XREF to: 00500fe0 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [ESP + 0x66c]     ; 00500f90
        ;   Label: LAB_00500f90
    XOR EBX,EBX                         ; 00500f97
    TEST ESI,ESI                        ; 00500f99
    JLE 0x00500fe0                      ; 00500f9b | LAB_00500fe0
        ;   XREF to: 00500fe0 (CONDITIONAL_JUMP)
    MOV ESI,0x2dba070                   ; 00500f9d | char[256] DAT_02dba070
    PUSH 0x0                            ; 00500fa2
        ;   Label: LAB_00500fa2
    PUSH 0xf8                           ; 00500fa4
    PUSH EDI                            ; 00500fa9
    PUSH 0x4                            ; 00500faa
    PUSH ESI                            ; 00500fac | char[256] DAT_02dba070
    MOV EAX,dword ptr [ESP + 0x684]     ; 00500fad
    PUSH EAX                            ; 00500fb4
    INC EBX                             ; 00500fb5
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 00500fb6 | int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 00500fbb
    ADD ESI,0x100                       ; 00500fbe
    MOV EDX,dword ptr [ESP + 0x668]     ; 00500fc4
    MOV ECX,dword ptr [ESP + 0x66c]     ; 00500fcb
    ADD EDI,EDX                         ; 00500fd2
    CMP EBX,ECX                         ; 00500fd4
    JL 0x00500fa2                       ; 00500fd6 | LAB_00500fa2
        ;   XREF to: 00500fa2 (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 00500fd8
    MOV EDX,EDX                         ; 00500fde
    MOV EAX,dword ptr [ESP + 0x61c]     ; 00500fe0
        ;   Label: LAB_00500fe0
    MOV [0x02d03e94],EAX                ; 00500fe7 | int g_UseExternalRenderer
    MOV ESP,EBP                         ; 00500fec
        ;   Label: LAB_00500fec
    POP EBP                             ; 00500fee
    POP EDI                             ; 00500fef
    POP ESI                             ; 00500ff0
    POP EBX                             ; 00500ff1
    RET                                 ; 00500ff2
    CALL core_inv.cpp_loadInventory_FUN_004fd220 ; 00500ff3 | void core_inv.cpp_loadInventory_FUN_004fd220()
        ;   Label: LAB_00500ff3
        ;   XREF to: 004fd220 (UNCONDITIONAL_CALL)
    JMP 0x005006dc                      ; 00500ff8 | LAB_005006dc
        ;   XREF to: 005006dc (UNCONDITIONAL_JUMP)
    MOV EAX,[0x020a572c]                ; 00500ffd | CBitFont * g_MicroFont
        ;   Label: LAB_00500ffd
    MOV dword ptr [ESP + 0x644],EAX     ; 00501002
    JMP 0x0050071a                      ; 00501009 | LAB_0050071a
        ;   XREF to: 0050071a (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x638]     ; 0050100e
        ;   Label: LAB_0050100e
    MOV EDX,EAX                         ; 00501015
    SAR EDX,0x1f                        ; 00501017
    SUB EAX,EDX                         ; 0050101a
    SAR EAX,0x1                         ; 0050101c
    MOV dword ptr [ESP + 0x638],EAX     ; 0050101e
    MOV EAX,dword ptr [ESP + 0x634]     ; 00501025
    MOV EDX,EAX                         ; 0050102c
    SAR EDX,0x1f                        ; 0050102e
    SUB EAX,EDX                         ; 00501031
    SAR EAX,0x1                         ; 00501033
    MOV ESI,0x28                        ; 00501035
    MOV ECX,0x8                         ; 0050103a
    MOV EBX,0x12                        ; 0050103f
    MOV dword ptr [ESP + 0x630],ESI     ; 00501044
    MOV dword ptr [ESP + 0x640],ECX     ; 0050104b
    MOV dword ptr [ESP + 0x634],EAX     ; 00501052
    JMP 0x00500790                      ; 00501059 | LAB_00500790
        ;   XREF to: 00500790 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050105e
        ;   Label: LAB_0050105e
    PUSH 0x3                            ; 00501061
    MOV ECX,dword ptr [EAX + 0x330]     ; 00501063
    PUSH ECX                            ; 00501069
    PUSH EAX                            ; 0050106a
    CALL core_inv.cpp_CInventory_isWeaponInCategory_FUN_004ffe70 ; 0050106b | int core_inv.cpp_CInventory_isWeaponInCategory_FUN_004ffe70(CInventory * this_ptr, CDemonActor * weapon_actor, int weapon_category)
        ;   XREF to: 004ffe70 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00501070
    TEST EAX,EAX                        ; 00501073
    JNZ 0x00500878                      ; 00501075 | LAB_00500878
        ;   XREF to: 00500878 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050107b
    PUSH 0x630b13                       ; 0050107e | = "CTommyGun" | s_CTommyGun_00630b13 = CTommyGun
    MOV ESI,dword ptr [0x00679394]      ; 00501083 | int g_WindowWidth
    MOV EDX,dword ptr [EAX + 0x330]     ; 00501089
    MOV EDI,dword ptr [0x00679398]      ; 0050108f | int g_WindowHeight
    PUSH EDX                            ; 00501095
    SUB ESI,EBX                         ; 00501096
    SUB EDI,EBX                         ; 00501098
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 0050109a | int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
    XOR EBX,EBX                         ; 0050109f
    ADD ESP,0x8                         ; 005010a1
    TEST EAX,EAX                        ; 005010a4
    JZ 0x005010ad                       ; 005010a6 | LAB_005010ad
        ;   XREF to: 005010ad (CONDITIONAL_JUMP)
    MOV EBX,0x2dcd704                   ; 005010a8 | CAlphaBitmap g_TommyClipIconBitmap
    MOV EAX,dword ptr [EBP + 0x14]      ; 005010ad
        ;   Label: LAB_005010ad
    PUSH 0x630b1d                       ; 005010b0 | = "CShotgun" | s_CShotgun_00630b1d = CShotgun
    MOV ECX,dword ptr [EAX + 0x330]     ; 005010b5
    PUSH ECX                            ; 005010bb
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 005010bc | int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005010c1
    TEST EAX,EAX                        ; 005010c4
    JZ 0x005010cd                       ; 005010c6 | LAB_005010cd
        ;   XREF to: 005010cd (CONDITIONAL_JUMP)
    MOV EBX,0x2dcd754                   ; 005010c8 | CAlphaBitmap g_ShotShellIconBitmap
    MOV EAX,dword ptr [EBP + 0x14]      ; 005010cd
        ;   Label: LAB_005010cd
    PUSH 0x630b26                       ; 005010d0 | = "CElephantGun" | s_CElephantGun_00630b26 = CElephantGun
    MOV EDX,dword ptr [EAX + 0x330]     ; 005010d5
    PUSH EDX                            ; 005010db
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 005010dc | int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005010e1
    TEST EAX,EAX                        ; 005010e4
    JZ 0x005010ed                       ; 005010e6 | LAB_005010ed
        ;   XREF to: 005010ed (CONDITIONAL_JUMP)
    MOV EBX,0x2dcd754                   ; 005010e8 | CAlphaBitmap g_ShotShellIconBitmap
    MOV EAX,dword ptr [EBP + 0x14]      ; 005010ed
        ;   Label: LAB_005010ed
    PUSH 0x630b33                       ; 005010f0 | = "CGun" | s_CGun_00630b33 = CGun
    MOV ECX,dword ptr [EAX + 0x330]     ; 005010f5
    PUSH ECX                            ; 005010fb
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 005010fc | int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00501101
    TEST EAX,EAX                        ; 00501104
    JZ 0x0050117f                       ; 00501106 | LAB_0050117f
        ;   XREF to: 0050117f (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050110c
    MOV EAX,dword ptr [EAX + 0x330]     ; 0050110f
    CMP dword ptr [EAX + 0x56c],0x0     ; 00501115
    JNZ 0x00501123                      ; 0050111c | LAB_00501123
        ;   XREF to: 00501123 (CONDITIONAL_JUMP)
    MOV EBX,0x2dcd718                   ; 0050111e | CAlphaBitmap g_BulletIconBitmap
    MOV EAX,dword ptr [EBP + 0x14]      ; 00501123
        ;   Label: LAB_00501123
    MOV EAX,dword ptr [EAX + 0x330]     ; 00501126
    CMP dword ptr [EAX + 0x56c],0x3     ; 0050112c
    JNZ 0x0050113a                      ; 00501133 | LAB_0050113a
        ;   XREF to: 0050113a (CONDITIONAL_JUMP)
    MOV EBX,0x2dcd72c                   ; 00501135 | CAlphaBitmap g_LithiumIconBitmap
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050113a
        ;   Label: LAB_0050113a
    MOV EAX,dword ptr [EAX + 0x330]     ; 0050113d
    CMP dword ptr [EAX + 0x56c],0x7     ; 00501143
    JNZ 0x00501151                      ; 0050114a | LAB_00501151
        ;   XREF to: 00501151 (CONDITIONAL_JUMP)
    MOV EBX,0x2dcd740                   ; 0050114c | CAlphaBitmap g_MercuryBulletIconBitmap
    MOV EAX,dword ptr [EBP + 0x14]      ; 00501151
        ;   Label: LAB_00501151
    MOV EAX,dword ptr [EAX + 0x330]     ; 00501154
    CMP dword ptr [EAX + 0x56c],0x8     ; 0050115a
    JNZ 0x00501168                      ; 00501161 | LAB_00501168
        ;   XREF to: 00501168 (CONDITIONAL_JUMP)
    MOV EBX,0x2dcd768                   ; 00501163 | CAlphaBitmap g_SilverBulletIconBitmap
    MOV EAX,dword ptr [EBP + 0x14]      ; 00501168
        ;   Label: LAB_00501168
    MOV EAX,dword ptr [EAX + 0x330]     ; 0050116b
    CMP dword ptr [EAX + 0x56c],0x1     ; 00501171
    JNZ 0x0050117f                      ; 00501178 | LAB_0050117f
        ;   XREF to: 0050117f (CONDITIONAL_JUMP)
    MOV EBX,0x2dcd77c                   ; 0050117a | CAlphaBitmap g_HolyBulletIconBitmap
    TEST EBX,EBX                        ; 0050117f
        ;   Label: LAB_0050117f
    JNZ 0x00501217                      ; 00501181 | LAB_00501217
        ;   XREF to: 00501217 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 00501187
        ;   Label: LAB_00501187
    FLD float ptr [EAX + 0x348]         ; 0050118a
    FLDZ                                ; 00501190
    FCOMPP                              ; 00501192
    FNSTSW AX                           ; 00501194
    SAHF                                ; 00501196
    JC 0x0050122f                       ; 00501197 | LAB_0050122f
        ;   XREF to: 0050122f (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050119d
        ;   Label: LAB_0050119d
    MOV EAX,dword ptr [EAX + 0x330]     ; 005011a0
    MOV EDX,dword ptr [EAX + 0x568]     ; 005011a6
    PUSH EDX                            ; 005011ac
    PUSH 0x630b38                       ; 005011ad | = "%d" | s_d_00630b38 = %d
    LEA EAX,[ESP + 0x18]                ; 005011b2
    PUSH EAX                            ; 005011b6
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005011b7 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005011bc
    PUSH 0x58                           ; 005011bf
        ;   Label: LAB_005011bf
    MOV ECX,dword ptr [ESP + 0x648]     ; 005011c1
    PUSH ECX                            ; 005011c8
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 005011c9 | int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005011ce
    MOV EBX,EAX                         ; 005011d1
    LEA EAX,[ESP + 0x10]                ; 005011d3
    PUSH EAX                            ; 005011d7
    MOV ESI,dword ptr [ESP + 0x648]     ; 005011d8
    PUSH ESI                            ; 005011df
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80 ; 005011e0 | int engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont * this_ptr, char * text)
        ;   XREF to: 004cfe80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005011e5
    MOV EDX,dword ptr [0x00679398]      ; 005011e8 | int g_WindowHeight
    MOV EDI,dword ptr [ESP + 0x640]     ; 005011ee
    PUSH 0x0                            ; 005011f5
    SUB EDX,EDI                         ; 005011f7
    PUSH 0xf8                           ; 005011f9
    SUB EDX,EBX                         ; 005011fe
    PUSH EDX                            ; 00501200
    MOV EDX,dword ptr [0x00679394]      ; 00501201 | int g_WindowWidth
    SUB EDX,EDI                         ; 00501207
    SUB EDX,EAX                         ; 00501209
    PUSH EDX                            ; 0050120b
    LEA EAX,[ESP + 0x20]                ; 0050120c
    PUSH EAX                            ; 00501210
    PUSH ESI                            ; 00501211
    JMP 0x00500870                      ; 00501212 | LAB_00500870
        ;   XREF to: 00500870 (UNCONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0x620]     ; 00501217
        ;   Label: LAB_00501217
    PUSH ECX                            ; 0050121e
    PUSH EDI                            ; 0050121f
    PUSH ESI                            ; 00501220
    PUSH EBX                            ; 00501221 | CAlphaBitmap g_HolyBulletIconBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950 ; 00501222 | void engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950(CAlphaBitmap * this_ptr, int x, int y, int alpha)
        ;   XREF to: 00410950 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00501227
    JMP 0x00501187                      ; 0050122a | LAB_00501187
        ;   XREF to: 00501187 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050122f
        ;   Label: LAB_0050122f
    CMP dword ptr [EAX + 0x44c],0x0     ; 00501232
    JNZ 0x0050119d                      ; 00501239 | LAB_0050119d
        ;   XREF to: 0050119d (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EAX + 0x330]     ; 0050123f
    MOV ESI,dword ptr [EAX + 0x568]     ; 00501245
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050124b
    PUSH ESI                            ; 0050124e
    MOV EDI,dword ptr [EAX + 0x458]     ; 0050124f
    PUSH EDI                            ; 00501255
    CALL core_inv.cpp_getItemDisplayName_FUN_004fcf00 ; 00501256 | char * core_inv.cpp_getItemDisplayName_FUN_004fcf00(CDemonActor * actor_ptr)
        ;   XREF to: 004fcf00 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0050125b
    PUSH EAX                            ; 0050125e
    PUSH 0x630b3b                       ; 0050125f | = "%s %d" | s_s_d_00630b3b = %s %d
    LEA EAX,[ESP + 0x1c]                ; 00501264
    PUSH EAX                            ; 00501268
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00501269 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0050126e
    JMP 0x005011bf                      ; 00501271 | LAB_005011bf
        ;   XREF to: 005011bf (UNCONDITIONAL_JUMP)
    PUSH EAX                            ; 00501276
        ;   Label: LAB_00501276
    MOV EAX,dword ptr [EBP + 0x14]      ; 00501277
    MOV EBX,dword ptr [EAX + 0x330]     ; 0050127a
    PUSH EBX                            ; 00501280
    PUSH EAX                            ; 00501281
    CALL core_inv.cpp_CInventory_isWeaponInCategory_FUN_004ffe70 ; 00501282 | int core_inv.cpp_CInventory_isWeaponInCategory_FUN_004ffe70(CInventory * this_ptr, CDemonActor * weapon_actor, int weapon_category)
        ;   XREF to: 004ffe70 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00501287
    TEST EAX,EAX                        ; 0050128a
    JNZ 0x005012ab                      ; 0050128c | LAB_005012ab
        ;   XREF to: 005012ab (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050128e
    PUSH 0x1                            ; 00501291
    MOV EDI,dword ptr [EAX + 0x330]     ; 00501293
    PUSH EDI                            ; 00501299
    PUSH EAX                            ; 0050129a
    CALL core_inv.cpp_CInventory_isWeaponInCategory_FUN_004ffe70 ; 0050129b | int core_inv.cpp_CInventory_isWeaponInCategory_FUN_004ffe70(CInventory * this_ptr, CDemonActor * weapon_actor, int weapon_category)
        ;   XREF to: 004ffe70 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005012a0
    TEST EAX,EAX                        ; 005012a3
    JZ 0x00501336                       ; 005012a5 | LAB_00501336
        ;   XREF to: 00501336 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 005012ab
        ;   Label: LAB_005012ab
    MOV EBX,dword ptr [EAX + 0x458]     ; 005012ae
    PUSH EBX                            ; 005012b4
    CALL core_inv.cpp_getItemDisplayName_FUN_004fcf00 ; 005012b5 | char * core_inv.cpp_getItemDisplayName_FUN_004fcf00(CDemonActor * actor_ptr)
        ;   XREF to: 004fcf00 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005012ba
    PUSH EAX                            ; 005012bd
    MOV EAX,dword ptr [EBP + 0x14]      ; 005012be
    MOV ESI,dword ptr [EAX + 0x330]     ; 005012c1
    PUSH ESI                            ; 005012c7
    CALL core_inv.cpp_getItemIconName_FUN_004fcf70 ; 005012c8 | char * core_inv.cpp_getItemIconName_FUN_004fcf70(CDemonActor * actor_ptr)
        ;   XREF to: 004fcf70 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005012cd
    PUSH EAX                            ; 005012d0
    MOV EAX,dword ptr [EBP + 0x14]      ; 005012d1
    MOV EDI,dword ptr [EAX + 0x330]     ; 005012d4
    PUSH EDI                            ; 005012da
    CALL core_inv.cpp_getItemDisplayName_FUN_004fcf00 ; 005012db | char * core_inv.cpp_getItemDisplayName_FUN_004fcf00(CDemonActor * actor_ptr)
        ;   XREF to: 004fcf00 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005012e0
    PUSH EAX                            ; 005012e3
    PUSH 0x630b48                       ; 005012e4 | = "%s\n\n%s %s" | s_s_s_s_00630b48 = %s

        ; %s %s
    LEA EAX,[ESP + 0x520]               ; 005012e9
    PUSH EAX                            ; 005012f0
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005012f1 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 005012f6
    PUSH 0x630b52                       ; 005012f9 | = " are loaded." | s_are_loaded_00630b52 =  are loaded.
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 005012fe | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00501303
    LEA EDI,[ESP + 0x510]               ; 00501306
    MOV ESI,EAX                         ; 0050130d
    PUSH EDI                            ; 0050130f
    SUB ECX,ECX                         ; 00501310
    DEC ECX                             ; 00501312
    MOV AL,0x0                          ; 00501313
    SCASB.REPNE ES:EDI                  ; 00501315
    DEC EDI                             ; 00501317
    MOV AL,byte ptr [ESI]               ; 00501318
        ;   Label: LAB_00501318
    MOV byte ptr [EDI],AL               ; 0050131a
    CMP AL,0x0                          ; 0050131c
    JZ 0x00501330                       ; 0050131e | LAB_00501330
        ;   XREF to: 00501330 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 00501320
    ADD ESI,0x2                         ; 00501323
    MOV byte ptr [EDI + 0x1],AL         ; 00501326
    ADD EDI,0x2                         ; 00501329
    CMP AL,0x0                          ; 0050132c
    JNZ 0x00501318                      ; 0050132e | LAB_00501318
        ;   XREF to: 00501318 (CONDITIONAL_JUMP)
    POP EDI                             ; 00501330
        ;   Label: LAB_00501330
    JMP 0x005008dd                      ; 00501331 | LAB_005008dd
        ;   XREF to: 005008dd (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 00501336
        ;   Label: LAB_00501336
    MOV EDX,dword ptr [EAX + 0x330]     ; 00501339
    PUSH EDX                            ; 0050133f
    CALL core_inv.cpp_getItemIconName_FUN_004fcf70 ; 00501340 | char * core_inv.cpp_getItemIconName_FUN_004fcf70(CDemonActor * actor_ptr)
        ;   XREF to: 004fcf70 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00501345
    PUSH EAX                            ; 00501348
    MOV EAX,dword ptr [EBP + 0x14]      ; 00501349
    MOV ECX,dword ptr [EAX + 0x330]     ; 0050134c
    PUSH ECX                            ; 00501352
    CALL core_inv.cpp_getItemDisplayName_FUN_004fcf00 ; 00501353 | char * core_inv.cpp_getItemDisplayName_FUN_004fcf00(CDemonActor * actor_ptr)
        ;   XREF to: 004fcf00 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00501358
    PUSH EAX                            ; 0050135b
    PUSH 0x630b5f                       ; 0050135c | = "%s\n\n%s" | s_s_s_00630b5f = %s

        ; %s
    JMP 0x005008cd                      ; 00501361 | LAB_005008cd
        ;   XREF to: 005008cd (UNCONDITIONAL_JUMP)
    MOV EDX,EBX                         ; 00501366
        ;   Label: LAB_00501366
    MOV EAX,EBX                         ; 00501368
    SAR EDX,0x1f                        ; 0050136a
    SUB EAX,EDX                         ; 0050136d
    SAR EAX,0x1                         ; 0050136f
    MOV EBX,EAX                         ; 00501371
    MOV EDX,ESI                         ; 00501373
    MOV EAX,ESI                         ; 00501375
    SAR EDX,0x1f                        ; 00501377
    SUB EAX,EDX                         ; 0050137a
    SAR EAX,0x1                         ; 0050137c
    MOV EDI,0x28                        ; 0050137e
    MOV ECX,0x8                         ; 00501383
    MOV dword ptr [ESP + 0x62c],EDI     ; 00501388
    MOV dword ptr [ESP + 0x63c],ECX     ; 0050138f
    MOV ESI,EAX                         ; 00501396
    JMP 0x00500a25                      ; 00501398 | LAB_00500a25
        ;   XREF to: 00500a25 (UNCONDITIONAL_JUMP)
    CMP dword ptr [EAX + 0x240],0x0     ; 0050139d | g_CGameInstance.block_auto_save
        ;   Label: LAB_0050139d
    JNZ 0x00500cb2                      ; 005013a4 | LAB_00500cb2
        ;   XREF to: 00500cb2 (CONDITIONAL_JUMP)
    JMP 0x00500d3c                      ; 005013aa | LAB_00500d3c
        ;   XREF to: 00500d3c (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 005013af
        ;   Label: LAB_005013af
    FLD float ptr [EAX + 0x340]         ; 005013b2
    FLDZ                                ; 005013b8
    FCOMPP                              ; 005013ba
    FNSTSW AX                           ; 005013bc
    SAHF                                ; 005013be
    JC 0x00500d52                       ; 005013bf | LAB_00500d52
        ;   XREF to: 00500d52 (CONDITIONAL_JUMP)
    JMP 0x00500e93                      ; 005013c5 | LAB_00500e93
        ;   XREF to: 00500e93 (UNCONDITIONAL_JUMP)

