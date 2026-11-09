; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_FUN_004b5190(CGame *param_1)
;
; Local Variables:
; undefined        Stack[-0x830]:1  local_830
; undefined        Stack[-0x6e0]:1  local_6e0
; undefined        Stack[-0x5e0]:1  local_5e0
; undefined        Stack[-0x4e0]:1  local_4e0
; undefined        Stack[-0x3e0]:1  local_3e0
; undefined        Stack[-0x2e0]:1  local_2e0
; undefined1       Stack[-0x2df]:1  local_2df
; undefined        Stack[-0x1e0]:1  local_1e0
; undefined        Stack[-0x118]:1  local_118
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined        Stack[-0x98]:1  local_98
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined        Stack[-0x74]:1  local_74
; undefined4       Stack[-0x5c]:4  local_5c
; undefined        Stack[-0x58]:1  local_58
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
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   core_game.cpp_FUN_004b6170 at 004b666e
;
; Referenced Globals:
;   TerminatedCString s_noc_05d_raw_005d72b7
;   TerminatedCString s_Movie_recording_active_m_005d72c3
;   undefined4 DAT_005d72e4
;   TerminatedCString s_movie_005d72e7
;   TerminatedCString s_screen_paint_3_2f_ms_005d74d3
;   TerminatedCString s_SPOOKHOUSE_005d74ec
;   TerminatedCString s_demon_d_pcx_005d74f7
;   TerminatedCString s_blood_timer_005d7503
;   undefined4 DAT_005d750f
;   TerminatedCString s_Set_s_Camera_s_group_d_005d7514
;   TerminatedCString s_FR_f_AVG_f_PC_d_005d7532
;   TerminatedCString s_Hero_4_2f_4_2f_4_2f_xyz_005d754a
;   TerminatedCString s_Slew_s_Virtual_Director_005d7581
;   TerminatedCString s_Fudge_g_g_g_005d75a2
;   TerminatedCString s_SFX_d_Samples_Active_d_1_005d75b2
;   ... and 57 more
;
; Called Functions:
;   core_dcamera.cpp_FUN_0043c6b0
;   core_dcamera.cpp_FUN_0043c780
;   core_event.cpp_CEventList_findTimer_FUN_004915e0
;   core_event.cpp_CEventList_render_FUN_0048e490
;   core_event.cpp_FUN_00491240
;   core_fldnotes.cpp_FUN_004a5700
;   core_game.cpp_CGame_drawScreenBorder_FUN_004b30d0
;   core_game.cpp_CGame_slamDT_FUN_004bd460
;   core_game.cpp_FUN_004b3010
;   core_game.cpp_FUN_004b32c0
;   core_game.cpp_FUN_004b3c50
;   core_game.cpp_FUN_004bb3d0
;   core_game.cpp_FUN_004bd570
;   core_inv.cpp_FUN_004dd9b0
;   core_netgame.cpp_CNetGame_processServerFrame_FUN_0050ecb0
;   ... and 46 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b5190
        ;   Label: core_game.cpp_FUN_004b5190
    PUSH ESI                            ; 004b5191
    PUSH EDI                            ; 004b5192
    PUSH EBP                            ; 004b5193
    MOV EBP,ESP                         ; 004b5194
    SUB ESP,0x820                       ; 004b5196
    SUB EBP,0x7e                        ; 004b519c
    MOV EAX,dword ptr [EBP + 0x92]      ; 004b519f
    XOR EDX,EDX                         ; 004b51a5
    MOV ECX,dword ptr [EAX + 0x228]     ; 004b51a7
    MOV dword ptr [EBP + 0x4e],EDX      ; 004b51ad
    TEST ECX,ECX                        ; 004b51b0
    JNZ 0x004b5244                      ; 004b51b2
        ;   XREF to: 004b5244 (CONDITIONAL_JUMP)  ; LAB_004b5244
    MOV EAX,dword ptr [EBP + 0x92]      ; 004b51b8
        ;   Label: LAB_004b51b8
    XOR EBX,EBX                         ; 004b51be
    MOV ESI,dword ptr [EAX + 0xe0]      ; 004b51c0
    MOV dword ptr [0x01e61b58],EBX      ; 004b51c6 | DAT_01e61b58
    TEST ESI,ESI                        ; 004b51cc
    JNZ 0x004b51e2                      ; 004b51ce
        ;   XREF to: 004b51e2 (CONDITIONAL_JUMP)  ; LAB_004b51e2
    MOV EAX,[0x0061b120]                ; 004b51d0 | g_CNetGamePtr
    CMP dword ptr [EAX + 0x178],0x0     ; 004b51d5 | g_CNetGameInstance.field376_0x178
    JZ 0x004b525c                       ; 004b51dc
        ;   XREF to: 004b525c (CONDITIONAL_JUMP)  ; LAB_004b525c
    MOV EDX,dword ptr [0x0061b120]      ; 004b51e2 | g_CNetGamePtr
        ;   Label: LAB_004b51e2
    MOV EAX,dword ptr [EBP + 0x92]      ; 004b51e8
    PUSH EDX                            ; 004b51ee | g_CNetGameInstance
    MOV dword ptr [EAX + 0x218],0x0     ; 004b51ef
    CALL core_netgame.cpp_FUN_0050f120  ; 004b51f9
        ;   XREF to: 0050f120 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_FUN_0050f120()
    ADD ESP,0x4                         ; 004b51fe
    MOV ECX,dword ptr [EBP + 0x92]      ; 004b5201
    PUSH ECX                            ; 004b5207
    CALL core_game.cpp_FUN_004bd570     ; 004b5208
        ;   XREF to: 004bd570 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004bd570(CGame * this_ptr)
    MOV EAX,dword ptr [EBP + 0x92]      ; 004b520d
    MOV EBX,dword ptr [EAX + 0xe0]      ; 004b5213
    ADD ESP,0x4                         ; 004b5219
    TEST EBX,EBX                        ; 004b521c
    JZ 0x004b5251                       ; 004b521e
        ;   XREF to: 004b5251 (CONDITIONAL_JUMP)  ; LAB_004b5251
    PUSH 0x3e800000                     ; 004b5220
    PUSH EAX                            ; 004b5225
    CALL core_game.cpp_CGame_slamDT_FUN_004bd460 ; 004b5226
        ;   XREF to: 004bd460 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_slamDT_FUN_004bd460(CGame * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004b522b
    MOV EAX,[0x0061b120]                ; 004b522e | g_CNetGamePtr
        ;   Label: LAB_004b522e
    PUSH EAX                            ; 004b5233 | g_CNetGameInstance
    CALL core_netgame.cpp_CNetGame_processServerFrame_FUN_0050ecb0 ; 004b5234
        ;   XREF to: 0050ecb0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_processServerFrame_FUN_0050ecb0(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 004b5239
    LEA ESP,[EBP + 0x7e]                ; 004b523c
        ;   Label: LAB_004b523c
    POP EBP                             ; 004b523f
    POP EDI                             ; 004b5240
    POP ESI                             ; 004b5241
    POP EBX                             ; 004b5242
    RET                                 ; 004b5243
    CALL wincore_winrun.cpp_FUN_0058e9e0 ; 004b5244
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_0058e9e0()
        ;   Label: LAB_004b5244
    MOV dword ptr [EBP + 0x4a],EAX      ; 004b5249
    JMP 0x004b51b8                      ; 004b524c
        ;   XREF to: 004b51b8 (UNCONDITIONAL_JUMP)  ; LAB_004b51b8
    PUSH EAX                            ; 004b5251
        ;   Label: LAB_004b5251
    CALL core_game.cpp_FUN_004b3010     ; 004b5252
        ;   XREF to: 004b3010 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004b3010(CGame * this_ptr)
    ADD ESP,0x4                         ; 004b5257
    JMP 0x004b522e                      ; 004b525a
        ;   XREF to: 004b522e (UNCONDITIONAL_JUMP)  ; LAB_004b522e
    CMP dword ptr [0x01c37788],0x0      ; 004b525c | DAT_01c37788
        ;   Label: LAB_004b525c
    JZ 0x004b5271                       ; 004b5263
        ;   XREF to: 004b5271 (CONDITIONAL_JUMP)  ; LAB_004b5271
    CALL wincore_wddvmem.cpp_FUN_005890c0 ; 004b5265
        ;   XREF to: 005890c0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_FUN_005890c0()
    MOV dword ptr [EBP + 0x4e],0x1      ; 004b526a
    MOV EAX,dword ptr [EBP + 0x92]      ; 004b5271
        ;   Label: LAB_004b5271
    CMP dword ptr [EAX + 0x298],0x0     ; 004b5277
    JZ 0x004b5c68                       ; 004b527e
        ;   XREF to: 004b5c68 (CONDITIONAL_JUMP)  ; LAB_004b5c68
    CALL engine_special.cpp_clearScreen_FUN_0055b1f0 ; 004b5284
        ;   XREF to: 0055b1f0 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0055b1f0()
        ;   Label: LAB_004b5284
    MOV EAX,[0x00616044]                ; 004b5289 | g_CFieldNotesPtr
        ;   Label: LAB_004b5289
    CMP dword ptr [EAX + 0x40],0x0      ; 004b528e | g_CFieldNotesInstance.field64_0x40
    JZ 0x004b5c7a                       ; 004b5292
        ;   XREF to: 004b5c7a (CONDITIONAL_JUMP)  ; LAB_004b5c7a
    MOV ECX,dword ptr [0x026677e0]      ; 004b5298 | DAT_026677e0
        ;   Label: LAB_004b5298
    TEST ECX,ECX                        ; 004b529e
    JZ 0x004b52ab                       ; 004b52a0
        ;   XREF to: 004b52ab (CONDITIONAL_JUMP)  ; LAB_004b52ab
    PUSH ECX                            ; 004b52a2
    MOV EDX,dword ptr [ECX]             ; 004b52a3
    CALL dword ptr [EDX + 0x1c]         ; 004b52a5
    ADD ESP,0x4                         ; 004b52a8
    MOV EBX,dword ptr [0x0061b120]      ; 004b52ab | g_CNetGamePtr
        ;   Label: LAB_004b52ab
    PUSH EBX                            ; 004b52b1 | g_CNetGameInstance
    CALL core_netgame.cpp_FUN_0050f120  ; 004b52b2
        ;   XREF to: 0050f120 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_FUN_0050f120()
    MOV EAX,dword ptr [EBP + 0x92]      ; 004b52b7
    MOV ESI,dword ptr [EAX + 0x218]     ; 004b52bd
    ADD ESP,0x4                         ; 004b52c3
    TEST ESI,ESI                        ; 004b52c6
    JZ 0x004b5cb0                       ; 004b52c8
        ;   XREF to: 004b5cb0 (CONDITIONAL_JUMP)  ; LAB_004b5cb0
    LEA EAX,[EBP + -0x26]               ; 004b52ce
    PUSH EAX                            ; 004b52d1
    CALL core_slew.cpp_FUN_00549380     ; 004b52d2
        ;   XREF to: 00549380 (UNCONDITIONAL_CALL)  ; undefined core_slew.cpp_FUN_00549380()
    MOV EDX,dword ptr [0x01cedef4]      ; 004b52d7 | DAT_01cedef4
    MOV EDX,dword ptr [EDX*0x4 + 0x1cedee4] ; 004b52dd
    LEA EAX,[EBP + -0x26]               ; 004b52e4
    ADD EDX,0x20                        ; 004b52e7
    ADD ESP,0x4                         ; 004b52ea
    CMP EAX,EDX                         ; 004b52ed
    JZ 0x004b5302                       ; 004b52ef
        ;   XREF to: 004b5302 (CONDITIONAL_JUMP)  ; LAB_004b5302
    MOV EAX,dword ptr [EDX]             ; 004b52f1
    MOV dword ptr [EBP + -0x26],EAX     ; 004b52f3
    MOV EAX,dword ptr [EDX + 0x4]       ; 004b52f6
    MOV dword ptr [EBP + -0x22],EAX     ; 004b52f9
    MOV EAX,dword ptr [EDX + 0x8]       ; 004b52fc
    MOV dword ptr [EBP + -0x1e],EAX     ; 004b52ff
    MOV EAX,[0x01cedef4]                ; 004b5302 | DAT_01cedef4
        ;   Label: LAB_004b5302
    MOV EDX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004b5307
    LEA EAX,[EBP + -0x1a]               ; 004b530e
    ADD EDX,0x30                        ; 004b5311
    CMP EAX,EDX                         ; 004b5314
    JZ 0x004b5329                       ; 004b5316
        ;   XREF to: 004b5329 (CONDITIONAL_JUMP)  ; LAB_004b5329
    MOV EAX,dword ptr [EDX]             ; 004b5318
    MOV dword ptr [EBP + -0x1a],EAX     ; 004b531a
    MOV EAX,dword ptr [EDX + 0x4]       ; 004b531d
    MOV dword ptr [EBP + -0x16],EAX     ; 004b5320
    MOV EAX,dword ptr [EDX + 0x8]       ; 004b5323
    MOV dword ptr [EBP + -0x12],EAX     ; 004b5326
    LEA EAX,[EBP + -0x26]               ; 004b5329
        ;   Label: LAB_004b5329
    PUSH EAX                            ; 004b532c
    CALL core_slew.cpp_FUN_005493d0     ; 004b532d
        ;   XREF to: 005493d0 (UNCONDITIONAL_CALL)  ; undefined core_slew.cpp_FUN_005493d0()
    ADD ESP,0x4                         ; 004b5332
    LEA EDX,[EBP + -0x1a]               ; 004b5335
    MOV EAX,[0x01cedef4]                ; 004b5338 | DAT_01cedef4
    PUSH EDX                            ; 004b533d
    LEA EDX,[EBP + -0x26]               ; 004b533e
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004b5341
    PUSH EDX                            ; 004b5348
    MOV ECX,dword ptr [EAX + 0x2b0]     ; 004b5349
    PUSH EAX                            ; 004b534f
    CALL dword ptr [ECX + 0x70]         ; 004b5350
    MOV AH,byte ptr [0x01c2a384]        ; 004b5353 | DAT_01c2a384
    ADD ESP,0xc                         ; 004b5359
    TEST AH,0x1                         ; 004b535c
    JZ 0x004b5401                       ; 004b535f
        ;   XREF to: 004b5401 (CONDITIONAL_JUMP)  ; LAB_004b5401
    MOV EDX,dword ptr [0x01c2a380]      ; 004b5365 | DAT_01c2a380
    PUSH EDX                            ; 004b536b
    MOV ECX,dword ptr [0x01c2a37c]      ; 004b536c | DAT_01c2a37c
    PUSH ECX                            ; 004b5372
    PUSH 0x1fc7838                      ; 004b5373
    LEA ESI,[EBP + -0xa]                ; 004b5378
    LEA EDI,[EBP + 0xe]                 ; 004b537b
    CALL core_dcamera.cpp_FUN_0043c6b0  ; 004b537e
        ;   XREF to: 0043c6b0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0043c6b0()
    LEA ESI,[EBP + -0xa]                ; 004b5383
    ADD ESP,0xc                         ; 004b5386
    LEA EAX,[EBP + 0xe]                 ; 004b5389
    LEA EBX,[EBP + 0x2]                 ; 004b538c
    PUSH EAX                            ; 004b538f
    MOVSD ES:EDI,ESI                    ; 004b5390
    MOVSD ES:EDI,ESI                    ; 004b5391
    MOVSD ES:EDI,ESI                    ; 004b5392
    PUSH 0x1fc7838                      ; 004b5393
    LEA ESI,[EBP + 0x1a]                ; 004b5398
    LEA EDI,[EBP + 0xe]                 ; 004b539b
    CALL core_dcamera.cpp_FUN_0043c780  ; 004b539e
        ;   XREF to: 0043c780 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0043c780()
    LEA ESI,[EBP + 0x1a]                ; 004b53a3
    LEA EAX,[EBP + 0xe]                 ; 004b53a6
    ADD ESP,0x8                         ; 004b53a9
    MOVSD ES:EDI,ESI                    ; 004b53ac
    MOVSD ES:EDI,ESI                    ; 004b53ad
    MOVSD ES:EDI,ESI                    ; 004b53ae
    FILD dword ptr [EAX]                ; 004b53af
    FMUL float ptr [0x005f7558]         ; 004b53b1 | DAT_005f7558
    FSTP float ptr [EBX]                ; 004b53b7
    FILD dword ptr [EAX + 0x4]          ; 004b53b9
    FMUL float ptr [0x005f7558]         ; 004b53bc | DAT_005f7558
    FSTP float ptr [EBX + 0x4]          ; 004b53c2
    FILD dword ptr [EAX + 0x8]          ; 004b53c5
    FMUL float ptr [0x005f7558]         ; 004b53c8 | DAT_005f7558
    FSTP float ptr [EBX + 0x8]          ; 004b53ce
    MOV EAX,[0x01cedef4]                ; 004b53d1 | DAT_01cedef4
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004b53d6
    LEA EDX,[EAX + 0x30]                ; 004b53dd
    PUSH EDX                            ; 004b53e0
    LEA EDX,[EBP + 0x2]                 ; 004b53e1
    PUSH EDX                            ; 004b53e4
    MOV ECX,dword ptr [EAX + 0x2b0]     ; 004b53e5
    PUSH EAX                            ; 004b53eb
    CALL dword ptr [ECX + 0x70]         ; 004b53ec
    MOV DL,byte ptr [0x01c2a384]        ; 004b53ef | DAT_01c2a384
    AND DL,0xfe                         ; 004b53f5
    ADD ESP,0xc                         ; 004b53f8
    MOV byte ptr [0x01c2a384],DL        ; 004b53fb | DAT_01c2a384
    MOV EBX,dword ptr [EBP + 0x92]      ; 004b5401
        ;   Label: LAB_004b5401
    PUSH EBX                            ; 004b5407
    CALL core_game.cpp_FUN_004b3010     ; 004b5408
        ;   XREF to: 004b3010 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004b3010(CGame * this_ptr)
    ADD ESP,0x4                         ; 004b540d
    MOV ESI,dword ptr [0x0061b120]      ; 004b5410 | g_CNetGamePtr
    PUSH ESI                            ; 004b5416 | g_CNetGameInstance
    CALL core_netgame.cpp_CNetGame_processServerFrame_FUN_0050ecb0 ; 004b5417
        ;   XREF to: 0050ecb0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_processServerFrame_FUN_0050ecb0(CNetGame * this_ptr)
    MOV EAX,[0x00616044]                ; 004b541c | g_CFieldNotesPtr
    MOV EDI,dword ptr [EAX + 0x40]      ; 004b5421 | g_CFieldNotesInstance.field64_0x40
    ADD ESP,0x4                         ; 004b5424
    TEST EDI,EDI                        ; 004b5427
    JZ 0x004b5ccc                       ; 004b5429
        ;   XREF to: 004b5ccc (CONDITIONAL_JUMP)  ; LAB_004b5ccc
    PUSH 0xffff                         ; 004b542f
        ;   Label: LAB_004b542f
    MOV ESI,dword ptr [0x0060b280]      ; 004b5434 | DAT_0060b280
    PUSH ESI                            ; 004b543a | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0 ; 004b543b
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(CDemonRenderer * this_ptr, int render_alpha)
    MOV EAX,dword ptr [EBP + 0x92]      ; 004b5440
    MOV EDI,dword ptr [EAX + 0x228]     ; 004b5446
    ADD ESP,0x8                         ; 004b544c
    TEST EDI,EDI                        ; 004b544f
    JZ 0x004b549e                       ; 004b5451
        ;   XREF to: 004b549e (CONDITIONAL_JUMP)  ; LAB_004b549e
    CALL wincore_winrun.cpp_FUN_0058e9e0 ; 004b5453
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_0058e9e0()
    MOV EDX,dword ptr [EBP + 0x4a]      ; 004b5458
    SUB EAX,EDX                         ; 004b545b
    MOV dword ptr [EBP + 0x7a],EAX      ; 004b545d
    FILD dword ptr [EBP + 0x7a]         ; 004b5460
    FMUL double ptr [0x005d7643]        ; 004b5463 | DAT_005d7643
    MOV EAX,[0x00616494]                ; 004b5469 | g_CGamePtr
    FMUL double ptr [0x005d764b]        ; 004b546e | DAT_005d764b
    FLD float ptr [EAX + 0x284]         ; 004b5474 | g_CGameInstance.field644_0x284
    FXCH                                ; 004b547a
    FMUL double ptr [0x005d7653]        ; 004b547c | DAT_005d7653
    FDIVRP                              ; 004b5482
    SUB ESP,0x8                         ; 004b5484
    FSTP double ptr [ESP]               ; 004b5487
    PUSH 0x5d74d3                       ; 004b548a | = "screen paint : %3.2f ms\n"
    MOV ECX,dword ptr [0x00609ed0]      ; 004b548f | g_CConsolePtr
    PUSH ECX                            ; 004b5495 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 004b5496
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0x10                        ; 004b549b
    MOV EAX,dword ptr [EBP + 0x92]      ; 004b549e
        ;   Label: LAB_004b549e
    CMP dword ptr [EAX + 0x224],0x0     ; 004b54a4
    JNZ 0x004b5c51                      ; 004b54ab
        ;   XREF to: 004b5c51 (CONDITIONAL_JUMP)  ; LAB_004b5c51
    CALL engine_special.cpp_FUN_0055f500 ; 004b54b1
        ;   XREF to: 0055f500 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_0055f500()
    MOV EAX,[0x00616044]                ; 004b54b6 | g_CFieldNotesPtr
    CMP dword ptr [EAX + 0x40],0x0      ; 004b54bb | g_CFieldNotesInstance.field64_0x40
    JZ 0x004b5cfa                       ; 004b54bf
        ;   XREF to: 004b5cfa (CONDITIONAL_JUMP)  ; LAB_004b5cfa
    PUSH EAX                            ; 004b54c5
    CALL core_fldnotes.cpp_FUN_004a5700 ; 004b54c6
        ;   XREF to: 004a5700 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a5700()
    ADD ESP,0x4                         ; 004b54cb
        ;   Label: LAB_004b54cb
    MOV EAX,dword ptr [EBP + 0x92]      ; 004b54ce
        ;   Label: LAB_004b54ce
    CMP dword ptr [EAX + 0x22c],0x0     ; 004b54d4
    JZ 0x004b5d4d                       ; 004b54db
        ;   XREF to: 004b5d4d (CONDITIONAL_JUMP)  ; LAB_004b5d4d
    PUSH 0x3e                           ; 004b54e1
        ;   Label: LAB_004b54e1
    MOV EAX,[0x00617dd4]                ; 004b54e3 | DAT_00617dd4
    PUSH EAX                            ; 004b54e8 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004b54e9 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004b54eb
    ADD ESP,0x8                         ; 004b54ee
    TEST EAX,EAX                        ; 004b54f1
    JZ 0x004b5520                       ; 004b54f3
        ;   XREF to: 004b5520 (CONDITIONAL_JUMP)  ; LAB_004b5520
    MOV EAX,[0x01cb7420]                ; 004b54f5 | DAT_01cb7420
    INC EAX                             ; 004b54fa
    PUSH EAX                            ; 004b54fb
    PUSH 0x5d74f7                       ; 004b54fc | = "demon%d.pcx"
    PUSH 0x1cb7428                      ; 004b5501
    MOV [0x01cb7420],EAX                ; 004b5506 | DAT_01cb7420
    CALL crt_unknown.c_FUN_005b7790     ; 004b550b
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0xc                         ; 004b5510
    PUSH 0x1cb7428                      ; 004b5513
    CALL engine_pcx.c_FUN_00514a30      ; 004b5518
        ;   XREF to: 00514a30 (UNCONDITIONAL_CALL)  ; void engine_pcx.c_FUN_00514a30(char * filename)
    ADD ESP,0x4                         ; 004b551d
    PUSH 0x5d7503                       ; 004b5520 | = "blood_timer"
        ;   Label: LAB_004b5520
    MOV ECX,dword ptr [0x006141f0]      ; 004b5525 | DAT_006141f0
    PUSH ECX                            ; 004b552b
    CALL core_event.cpp_CEventList_findTimer_FUN_004915e0 ; 004b552c
        ;   XREF to: 004915e0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_findTimer_FUN_004915e0(CEventList * this_ptr, char * name)
    ADD ESP,0x8                         ; 004b5531
    TEST EAX,EAX                        ; 004b5534
    JL 0x004b55b1                       ; 004b5536
        ;   XREF to: 004b55b1 (CONDITIONAL_JUMP)  ; LAB_004b55b1
    PUSH EAX                            ; 004b5538
    MOV EBX,dword ptr [0x006141f0]      ; 004b5539 | DAT_006141f0
    PUSH EBX                            ; 004b553f
    CALL core_event.cpp_FUN_00491240    ; 004b5540
        ;   XREF to: 00491240 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_FUN_00491240()
    ADD ESP,0x8                         ; 004b5545
    MOV dword ptr [EBP + 0x7a],EAX      ; 004b5548
    SUB ESP,0x8                         ; 004b554b
    FLD float ptr [EBP + 0x7a]          ; 004b554e
    FSTP double ptr [ESP]               ; 004b5551
    PUSH 0x5d750f                       ; 004b5554 | DAT_005d750f
    LEA EAX,[EBP + 0xfffffbae]          ; 004b5559
    PUSH EAX                            ; 004b555f
    MOV EBX,dword ptr [0x01511cc0]      ; 004b5560 | DAT_01511cc0
    CALL crt_unknown.c_FUN_005b7790     ; 004b5566
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x10                        ; 004b556b
    PUSH 0x58                           ; 004b556e
    PUSH EBX                            ; 004b5570
    CALL engine_font.cpp_FUN_004ab560   ; 004b5571
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004ab560(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004b5576
    LEA EAX,[EBP + 0xfffffbae]          ; 004b5579
    PUSH EAX                            ; 004b557f
    PUSH EBX                            ; 004b5580
    CALL engine_font.cpp_FUN_004aaf00   ; 004b5581
        ;   XREF to: 004aaf00 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004aaf00()
    MOV EDX,dword ptr [0x006141b8]      ; 004b5586 | DAT_006141b8
    SUB EDX,EAX                         ; 004b558c
    MOV EAX,EDX                         ; 004b558e
    SAR EDX,0x1f                        ; 004b5590
    SUB EAX,EDX                         ; 004b5593
    SAR EAX,0x1                         ; 004b5595
    ADD ESP,0x8                         ; 004b5597
    PUSH 0x0                            ; 004b559a
    PUSH 0x1                            ; 004b559c
    PUSH 0x32                           ; 004b559e
    PUSH EAX                            ; 004b55a0
    LEA EAX,[EBP + 0xfffffbae]          ; 004b55a1
    PUSH EAX                            ; 004b55a7
    PUSH EBX                            ; 004b55a8
    CALL engine_font.cpp_FUN_004a8df0   ; 004b55a9
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    ADD ESP,0x18                        ; 004b55ae
    MOV EAX,[0x01cedef4]                ; 004b55b1 | DAT_01cedef4
        ;   Label: LAB_004b55b1
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004b55b6
    ADD EAX,0x2437c                     ; 004b55bd
    PUSH EAX                            ; 004b55c2
    CALL core_inv.cpp_FUN_004dd9b0      ; 004b55c3
        ;   XREF to: 004dd9b0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004dd9b0()
    MOV EAX,dword ptr [EBP + 0x92]      ; 004b55c8
    MOV ESI,dword ptr [EAX + 0x298]     ; 004b55ce
    ADD ESP,0x4                         ; 004b55d4
    TEST ESI,ESI                        ; 004b55d7
    JZ 0x004b55ea                       ; 004b55d9
        ;   XREF to: 004b55ea (CONDITIONAL_JUMP)  ; LAB_004b55ea
    MOV EDI,dword ptr [0x0061b5a8]      ; 004b55db | g_CDemonSetPtr
    PUSH EDI                            ; 004b55e1
    CALL core_set.cpp_CDemonSet_renderLightDebugView_FUN_005307a0 ; 004b55e2
        ;   XREF to: 005307a0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderLightDebugView_FUN_005307a0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004b55e7
    MOV EAX,dword ptr [EBP + 0x92]      ; 004b55ea
        ;   Label: LAB_004b55ea
    PUSH EAX                            ; 004b55f0
    CALL core_game.cpp_CGame_drawScreenBorder_FUN_004b30d0 ; 004b55f1
        ;   XREF to: 004b30d0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_drawScreenBorder_FUN_004b30d0(CGame * this_ptr)
    MOV EDX,dword ptr [0x01cb80d0]      ; 004b55f6 | DAT_01cb80d0
    ADD ESP,0x4                         ; 004b55fc
    TEST EDX,EDX                        ; 004b55ff
    JZ 0x004b5666                       ; 004b5601
        ;   XREF to: 004b5666 (CONDITIONAL_JUMP)  ; LAB_004b5666
    PUSH 0x1d                           ; 004b5603
    MOV EAX,[0x00617dd4]                ; 004b5605 | DAT_00617dd4
    PUSH EAX                            ; 004b560a | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004b560b | DAT_01d02f84
    CALL dword ptr [EDX]                ; 004b560d
    ADD ESP,0x8                         ; 004b560f
    TEST EAX,EAX                        ; 004b5612
    JZ 0x004b5640                       ; 004b5614
        ;   XREF to: 004b5640 (CONDITIONAL_JUMP)  ; LAB_004b5640
    PUSH 0x2f                           ; 004b5616
    MOV EAX,[0x00617dd4]                ; 004b5618 | DAT_00617dd4
    PUSH EAX                            ; 004b561d | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004b561e | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004b5620
    ADD ESP,0x8                         ; 004b5623
    TEST EAX,EAX                        ; 004b5626
    JZ 0x004b5640                       ; 004b5628
        ;   XREF to: 004b5640 (CONDITIONAL_JUMP)  ; LAB_004b5640
    MOV ECX,dword ptr [0x01cb80d4]      ; 004b562a | DAT_01cb80d4
    TEST ECX,ECX                        ; 004b5630
    JZ 0x004b5d67                       ; 004b5632
        ;   XREF to: 004b5d67 (CONDITIONAL_JUMP)  ; LAB_004b5d67
    XOR EDI,EDI                         ; 004b5638
    MOV dword ptr [0x01cb80d4],EDI      ; 004b563a | DAT_01cb80d4
    CMP dword ptr [0x01cb80d8],0x0      ; 004b5640 | DAT_01cb80d8
        ;   Label: LAB_004b5640
    JLE 0x004b5d7d                      ; 004b5647
        ;   XREF to: 004b5d7d (CONDITIONAL_JUMP)  ; LAB_004b5d7d
    MOV EDX,dword ptr [0x01cb80d8]      ; 004b564d | DAT_01cb80d8
    CMP EDX,dword ptr [0x01cb80dc]      ; 004b5653 | DAT_01cb80dc
    JG 0x004b5d7d                       ; 004b5659
        ;   XREF to: 004b5d7d (CONDITIONAL_JUMP)  ; LAB_004b5d7d
    XOR EAX,EAX                         ; 004b565f
    MOV [0x01cb80d4],EAX                ; 004b5661 | DAT_01cb80d4
    MOV EAX,[0x0061b460]                ; 004b5666 | g_CScriptPtr
        ;   Label: LAB_004b5666
    PUSH EAX                            ; 004b566b | g_CScriptInstance
    CALL core_script.cpp_FUN_005218a0   ; 004b566c
        ;   XREF to: 005218a0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_FUN_005218a0(CScript * this_ptr)
    ADD ESP,0x4                         ; 004b5671
    MOV EDX,dword ptr [EBP + 0x92]      ; 004b5674
    PUSH EDX                            ; 004b567a
    CALL core_game.cpp_FUN_004b32c0     ; 004b567b
        ;   XREF to: 004b32c0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004b32c0(CGame * this_ptr)
    ADD ESP,0x4                         ; 004b5680
    MOV ECX,dword ptr [EBP + 0x92]      ; 004b5683
    PUSH ECX                            ; 004b5689
    CALL core_game.cpp_FUN_004bb3d0     ; 004b568a
        ;   XREF to: 004bb3d0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004bb3d0(CGame * this_ptr)
    MOV EAX,dword ptr [EBP + 0x92]      ; 004b568f
    MOV EBX,dword ptr [EAX + 0x200]     ; 004b5695
    ADD ESP,0x4                         ; 004b569b
    TEST EBX,EBX                        ; 004b569e
    JZ 0x004b5fa5                       ; 004b56a0
        ;   XREF to: 004b5fa5 (CONDITIONAL_JUMP)  ; LAB_004b5fa5
    PUSH 0x0                            ; 004b56a6
    LEA EAX,[EBP + 0xfffffcae]          ; 004b56a8
    PUSH EAX                            ; 004b56ae
    PUSH 0x0                            ; 004b56af
    MOV EAX,[0x0061b5a8]                ; 004b56b1 | g_CDemonSetPtr
    PUSH 0x0                            ; 004b56b6
    ADD EAX,0x14d0f0                    ; 004b56b8
    PUSH EAX                            ; 004b56bd
    CALL engine_dosio.cpp_FUN_00461070  ; 004b56be
        ;   XREF to: 00461070 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_FUN_00461070(char * full_path, char * drive, char * directory, char * filename, ...)
    MOV EAX,[0x0061b5a8]                ; 004b56c3 | g_CDemonSetPtr
    ADD ESP,0x14                        ; 004b56c8
    MOV EDX,dword ptr [EAX + 0x15aeb8]  ; 004b56cb | g_CDemonSetInstance.field1420984_0x15aeb8
    IMUL EDX,EDX,0x1a4                  ; 004b56d1
    MOV ECX,dword ptr [EDX + EAX*0x1 + 0x150] ; 004b56d7
    PUSH ECX                            ; 004b56de
    PUSH 0x1fc7878                      ; 004b56df
    LEA EAX,[EBP + 0xfffffcae]          ; 004b56e4
    PUSH EAX                            ; 004b56ea
    PUSH 0x5d7514                       ; 004b56eb | = "Set: %s Camera: \"%s\" group %d"
    LEA EAX,[EBP + 0xfffff9ae]          ; 004b56f0
    PUSH EAX                            ; 004b56f6
    CALL crt_unknown.c_FUN_005b7790     ; 004b56f7
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    MOV EAX,[0x006141bc]                ; 004b56fc | DAT_006141bc
    ADD ESP,0x14                        ; 004b5701
    SUB EAX,0x16                        ; 004b5704
    PUSH EAX                            ; 004b5707
    PUSH 0x0                            ; 004b5708
    LEA EAX,[EBP + 0xfffff9ae]          ; 004b570a
    PUSH EAX                            ; 004b5710
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 004b5711
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    MOV EAX,dword ptr [EBP + 0x92]      ; 004b5716
    MOV EBX,dword ptr [0x01cb1118]      ; 004b571c | DAT_01cb1118
    FLD double ptr [0x01cb1110]         ; 004b5722 | DAT_01cb1110
    INC EBX                             ; 004b5728
    FLD float ptr [EAX + 0x284]         ; 004b5729
    MOV dword ptr [0x01cb1118],EBX      ; 004b572f | DAT_01cb1118
    FXCH                                ; 004b5735
    FADD ST0,ST1                        ; 004b5737
    FILD dword ptr [0x01cb1118]         ; 004b5739 | DAT_01cb1118
    FXCH                                ; 004b573f
    FSTP double ptr [0x01cb1110]        ; 004b5741 | DAT_01cb1110
    FDIV double ptr [0x01cb1110]        ; 004b5747 | DAT_01cb1110
    FLD1                                ; 004b574d
    FDIVRP ST2,ST0                      ; 004b574f
    ADD ESP,0xc                         ; 004b5751
    MOV ESI,dword ptr [0x01e61b58]      ; 004b5754 | DAT_01e61b58
    PUSH ESI                            ; 004b575a
    SUB ESP,0x8                         ; 004b575b
    FSTP double ptr [ESP]               ; 004b575e
    SUB ESP,0x8                         ; 004b5761
    FSTP double ptr [ESP]               ; 004b5764
    PUSH 0x5d7532                       ; 004b5767 | = "FR: %f, AVG: %f, PC: %d"
    LEA EAX,[EBP + 0xfffff9ae]          ; 004b576c
    PUSH EAX                            ; 004b5772
    CALL crt_unknown.c_FUN_005b7790     ; 004b5773
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    MOV EAX,[0x006141bc]                ; 004b5778 | DAT_006141bc
    ADD ESP,0x1c                        ; 004b577d
    SUB EAX,0xb                         ; 004b5780
    PUSH EAX                            ; 004b5783
    PUSH 0x0                            ; 004b5784
    LEA EAX,[EBP + 0xfffff9ae]          ; 004b5786
    PUSH EAX                            ; 004b578c
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 004b578d
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    MOV EAX,[0x01cedef4]                ; 004b5792 | DAT_01cedef4
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004b5797
    FLD float ptr [0x005d765b]          ; 004b579e | DAT_005d765b
    FLD float ptr [EAX + 0x34]          ; 004b57a4
    FMUL ST1                            ; 004b57a7
    ADD ESP,0xc                         ; 004b57a9
    FLD double ptr [0x005d7663]         ; 004b57ac | DAT_005d7663
    FXCH                                ; 004b57b2
    FMUL ST1                            ; 004b57b4
    SUB ESP,0x8                         ; 004b57b6
    FSTP double ptr [ESP]               ; 004b57b9
    FLD float ptr [EAX + 0x38]          ; 004b57bc
    FMUL ST2                            ; 004b57bf
    FMUL ST1                            ; 004b57c1
    SUB ESP,0x8                         ; 004b57c3
    FSTP double ptr [ESP]               ; 004b57c6
    FLD float ptr [EAX + 0x30]          ; 004b57c9
    FMULP ST2                           ; 004b57cc
    FMULP                               ; 004b57ce
    SUB ESP,0x8                         ; 004b57d0
    FSTP double ptr [ESP]               ; 004b57d3
    SUB ESP,0x8                         ; 004b57d6
    FLD float ptr [EAX + 0x28]          ; 004b57d9
    FSTP double ptr [ESP]               ; 004b57dc
    SUB ESP,0x8                         ; 004b57df
    FLD float ptr [EAX + 0x24]          ; 004b57e2
    FSTP double ptr [ESP]               ; 004b57e5
    SUB ESP,0x8                         ; 004b57e8
    FLD float ptr [EAX + 0x20]          ; 004b57eb
    FSTP double ptr [ESP]               ; 004b57ee
    PUSH 0x5d754a                       ; 004b57f1 | = "Hero : %4.2f,%4.2f,%4.2f xyz and %3.2..."
    LEA EAX,[EBP + 0xfffff9ae]          ; 004b57f6
    PUSH EAX                            ; 004b57fc
    CALL crt_unknown.c_FUN_005b7790     ; 004b57fd
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x38                        ; 004b5802
    PUSH 0x0                            ; 004b5805
    PUSH 0x0                            ; 004b5807
    LEA EAX,[EBP + 0xfffff9ae]          ; 004b5809
    PUSH EAX                            ; 004b580f
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 004b5810
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004b5815
    MOV EAX,dword ptr [EBP + 0x92]      ; 004b5818
    MOV EAX,dword ptr [EAX + 0x294]     ; 004b581e
    MOV EDI,dword ptr [EAX*0x4 + 0x616498] ; 004b5824 | PTR_DAT_00616498
    MOV EAX,dword ptr [EBP + 0x92]      ; 004b582b
    MOV EAX,dword ptr [EAX + 0x218]     ; 004b5831
    PUSH EDI                            ; 004b5837
    MOV EDX,dword ptr [EAX*0x4 + 0x616498] ; 004b5838 | PTR_DAT_00616498
    PUSH EDX                            ; 004b583f
    PUSH 0x5d7581                       ; 004b5840 | = "Slew : %s, Virtual Director : %s"
    LEA EAX,[EBP + 0xfffff9ae]          ; 004b5845
    PUSH EAX                            ; 004b584b
    CALL crt_unknown.c_FUN_005b7790     ; 004b584c
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x10                        ; 004b5851
    PUSH 0xb                            ; 004b5854
    PUSH 0x0                            ; 004b5856
    LEA EAX,[EBP + 0xfffff9ae]          ; 004b5858
    PUSH EAX                            ; 004b585e
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 004b585f
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    MOV EAX,dword ptr [EBP + 0x92]      ; 004b5864
    MOV ECX,dword ptr [EAX + 0x9e0]     ; 004b586a
    ADD ESP,0xc                         ; 004b5870
    TEST ECX,ECX                        ; 004b5873
    JZ 0x004b58bf                       ; 004b5875
        ;   XREF to: 004b58bf (CONDITIONAL_JUMP)  ; LAB_004b58bf
    SUB ESP,0x8                         ; 004b5877
    FLD float ptr [ECX + 0x8]           ; 004b587a
    FSTP double ptr [ESP]               ; 004b587d
    SUB ESP,0x8                         ; 004b5880
    FLD float ptr [ECX + 0x4]           ; 004b5883
    FSTP double ptr [ESP]               ; 004b5886
    SUB ESP,0x8                         ; 004b5889
    FLD float ptr [ECX]                 ; 004b588c
    FSTP double ptr [ESP]               ; 004b588e
    PUSH 0x5d75a2                       ; 004b5891 | = "Fudge: %g,%g,%g"
    LEA EAX,[EBP + 0xfffff9ae]          ; 004b5896
    PUSH EAX                            ; 004b589c
    CALL crt_unknown.c_FUN_005b7790     ; 004b589d
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    MOV EAX,[0x006141bc]                ; 004b58a2 | DAT_006141bc
    ADD ESP,0x20                        ; 004b58a7
    SUB EAX,0x4d                        ; 004b58aa
    PUSH EAX                            ; 004b58ad
    PUSH 0x0                            ; 004b58ae
    LEA EAX,[EBP + 0xfffff9ae]          ; 004b58b0
    PUSH EAX                            ; 004b58b6
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 004b58b7
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004b58bc
    LEA EAX,[EBP + 0x3a]                ; 004b58bf
        ;   Label: LAB_004b58bf
    PUSH EAX                            ; 004b58c2
    LEA EAX,[EBP + 0x36]                ; 004b58c3
    PUSH EAX                            ; 004b58c6
    LEA EAX,[EBP + 0x46]                ; 004b58c7
    PUSH EAX                            ; 004b58ca
    LEA EAX,[EBP + 0x42]                ; 004b58cb
    PUSH EAX                            ; 004b58ce
    LEA EAX,[EBP + 0x32]                ; 004b58cf
    PUSH EAX                            ; 004b58d2
    LEA EAX,[EBP + 0x3e]                ; 004b58d3
    PUSH EAX                            ; 004b58d6
    CALL sound_sndmain.cpp_FUN_00551cb0 ; 004b58d7
        ;   XREF to: 00551cb0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00551cb0()
    MOV EAX,dword ptr [EBP + 0x3a]      ; 004b58dc
    MOV dword ptr [EBP + 0x7a],EAX      ; 004b58df
    ADD ESP,0x18                        ; 004b58e2
    FLD double ptr [0x005d766b]         ; 004b58e5 | DAT_005d766b
    FILD dword ptr [EBP + 0x7a]         ; 004b58eb
    FMUL ST1                            ; 004b58ee
    SUB ESP,0x8                         ; 004b58f0
    FSTP double ptr [ESP]               ; 004b58f3
    MOV EBX,dword ptr [EBP + 0x46]      ; 004b58f6
    MOV EAX,dword ptr [EBP + 0x32]      ; 004b58f9
    MOV dword ptr [EBP + 0x7a],EBX      ; 004b58fc
    ADD EAX,EBX                         ; 004b58ff
    FILD dword ptr [EBP + 0x7a]         ; 004b5901
    MOV dword ptr [EBP + 0x7a],EAX      ; 004b5904
    FMUL ST1                            ; 004b5907
    FILD dword ptr [EBP + 0x7a]         ; 004b5909
    FMUL ST2                            ; 004b590c
    SUB ESP,0x8                         ; 004b590e
    FSTP double ptr [ESP]               ; 004b5911
    SUB ESP,0x8                         ; 004b5914
    FSTP double ptr [ESP]               ; 004b5917
    MOV EAX,dword ptr [EBP + 0x32]      ; 004b591a
    MOV ESI,dword ptr [EBP + 0x42]      ; 004b591d
    MOV dword ptr [EBP + 0x7a],EAX      ; 004b5920
    PUSH ESI                            ; 004b5923
    FILD dword ptr [EBP + 0x7a]         ; 004b5924
    FMULP                               ; 004b5927
    SUB ESP,0x8                         ; 004b5929
    FSTP double ptr [ESP]               ; 004b592c
    MOV EDI,dword ptr [EBP + 0x3e]      ; 004b592f
    PUSH EDI                            ; 004b5932
    CALL sound_sndmain.cpp_FUN_005513f0 ; 004b5933
        ;   XREF to: 005513f0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005513f0()
    PUSH EAX                            ; 004b5938
    PUSH 0x5d75b2                       ; 004b5939 | = "SFX: %d Samples: Active: %d/%.1fk Ava..."
    LEA EAX,[EBP + 0xfffff9ae]          ; 004b593e
    PUSH EAX                            ; 004b5944
    CALL crt_unknown.c_FUN_005b7790     ; 004b5945
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    MOV EAX,[0x006141bc]                ; 004b594a | DAT_006141bc
    ADD ESP,0x34                        ; 004b594f
    SUB EAX,0x42                        ; 004b5952
    PUSH EAX                            ; 004b5955
    PUSH 0x0                            ; 004b5956
    LEA EAX,[EBP + 0xfffff9ae]          ; 004b5958
    PUSH EAX                            ; 004b595e
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 004b595f
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004b5964
    LEA EAX,[EBP + 0xfffff9ae]          ; 004b5967
    PUSH EAX                            ; 004b596d
    CALL engine_texture.cpp_getTextureCacheStats_FUN_005750b0 ; 004b596e
        ;   XREF to: 005750b0 (UNCONDITIONAL_CALL)  ; void engine_texture.cpp_getTextureCacheStats_FUN_005750b0(char * output_buffer)
    MOV EAX,[0x006141bc]                ; 004b5973 | DAT_006141bc
    ADD ESP,0x4                         ; 004b5978
    SUB EAX,0x37                        ; 004b597b
    PUSH EAX                            ; 004b597e
    PUSH 0x0                            ; 004b597f
    LEA EAX,[EBP + 0xfffff9ae]          ; 004b5981
    PUSH EAX                            ; 004b5987
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 004b5988
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004b598d
    LEA EAX,[EBP + 0xfffff9ae]          ; 004b5990
    PUSH EAX                            ; 004b5996
    CALL core_skeleton.cpp_FUN_005490d0 ; 004b5997
        ;   XREF to: 005490d0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_005490d0(char * output_buffer)
    MOV EAX,[0x006141bc]                ; 004b599c | DAT_006141bc
    ADD ESP,0x4                         ; 004b59a1
    SUB EAX,0x2c                        ; 004b59a4
    PUSH EAX                            ; 004b59a7
    PUSH 0x0                            ; 004b59a8
    LEA EAX,[EBP + 0xfffff9ae]          ; 004b59aa
    PUSH EAX                            ; 004b59b0
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 004b59b1
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    MOV EAX,[0x006141bc]                ; 004b59b6 | DAT_006141bc
    ADD ESP,0xc                         ; 004b59bb
    SUB EAX,0x21                        ; 004b59be
    PUSH EAX                            ; 004b59c1
    MOV EAX,dword ptr [EBP + 0x92]      ; 004b59c2
    PUSH 0x0                            ; 004b59c8
    ADD EAX,0xec                        ; 004b59ca
    PUSH EAX                            ; 004b59cf
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 004b59d0
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    MOV EAX,[0x0264bba0]                ; 004b59d5 | DAT_0264bba0
    ADD ESP,0xc                         ; 004b59da
    TEST EAX,EAX                        ; 004b59dd
    JZ 0x004b5a56                       ; 004b59df
        ;   XREF to: 004b5a56 (CONDITIONAL_JUMP)  ; LAB_004b5a56
    PUSH 0x400                          ; 004b59e1
    CALL engine_special.cpp_FUN_005601a0 ; 004b59e6
        ;   XREF to: 005601a0 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_005601a0()
    ADD ESP,0x4                         ; 004b59eb
    PUSH EAX                            ; 004b59ee
    PUSH 0x200                          ; 004b59ef
    CALL engine_special.cpp_FUN_005601a0 ; 004b59f4
        ;   XREF to: 005601a0 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_005601a0()
    ADD ESP,0x4                         ; 004b59f9
    PUSH EAX                            ; 004b59fc
    PUSH 0x100                          ; 004b59fd
    CALL engine_special.cpp_FUN_005601a0 ; 004b5a02
        ;   XREF to: 005601a0 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_005601a0()
    ADD ESP,0x4                         ; 004b5a07
    PUSH EAX                            ; 004b5a0a
    PUSH 0x80                           ; 004b5a0b
    CALL engine_special.cpp_FUN_005601a0 ; 004b5a10
        ;   XREF to: 005601a0 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_005601a0()
    ADD ESP,0x4                         ; 004b5a15
    PUSH EAX                            ; 004b5a18
    PUSH 0x40                           ; 004b5a19
    CALL engine_special.cpp_FUN_005601a0 ; 004b5a1b
        ;   XREF to: 005601a0 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_005601a0()
    ADD ESP,0x4                         ; 004b5a20
    PUSH EAX                            ; 004b5a23
    PUSH 0x20                           ; 004b5a24
    CALL engine_special.cpp_FUN_005601a0 ; 004b5a26
        ;   XREF to: 005601a0 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_005601a0()
    ADD ESP,0x4                         ; 004b5a2b
    PUSH EAX                            ; 004b5a2e
    PUSH 0x5d7603                       ; 004b5a2f | = "32:%d,64:%d,128:%d,256:%d,512:%d,1024:%d"
    LEA EAX,[EBP + 0xfffff9ae]          ; 004b5a34
    PUSH EAX                            ; 004b5a3a
    CALL crt_unknown.c_FUN_005b7790     ; 004b5a3b
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x20                        ; 004b5a40
    PUSH 0x2c                           ; 004b5a43
    PUSH 0x0                            ; 004b5a45
    LEA EAX,[EBP + 0xfffff9ae]          ; 004b5a47
    PUSH EAX                            ; 004b5a4d
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 004b5a4e
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004b5a53
    CMP dword ptr [0x01cb80e4],0x0      ; 004b5a56 | DAT_01cb80e4
        ;   Label: LAB_004b5a56
    JZ 0x004b5ab6                       ; 004b5a5d
        ;   XREF to: 004b5ab6 (CONDITIONAL_JUMP)  ; LAB_004b5ab6
    CALL sound_sndmain.cpp_FUN_005512f0 ; 004b5a5f
        ;   XREF to: 005512f0 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_FUN_005512f0()
    MOV ESI,0x37                        ; 004b5a64
    MOV EBX,EAX                         ; 004b5a69
    TEST EAX,EAX                        ; 004b5a6b
    JZ 0x004b5ab6                       ; 004b5a6d
        ;   XREF to: 004b5ab6 (CONDITIONAL_JUMP)  ; LAB_004b5ab6
    LEA EAX,[EBP + 0xfffff85e]          ; 004b5a6f
        ;   Label: LAB_004b5a6f
    PUSH EAX                            ; 004b5a75
    CALL sound_sndmain.cpp_CSfxSample_init_FUN_0054fcd0 ; 004b5a76
        ;   XREF to: 0054fcd0 (UNCONDITIONAL_CALL)  ; CSfxSample * sound_sndmain.cpp_CSfxSample_init_FUN_0054fcd0(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 004b5a7b
    LEA EAX,[EBP + 0xfffff85e]          ; 004b5a7e
    PUSH EAX                            ; 004b5a84
    PUSH EBX                            ; 004b5a85
    CALL sound_sndmain.cpp_FUN_00550bf0 ; 004b5a86
        ;   XREF to: 00550bf0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550bf0(uint sfx_handle, CSfxSample * output_buffer)
    ADD ESP,0x8                         ; 004b5a8b
    TEST EAX,EAX                        ; 004b5a8e
    JZ 0x004b5aa7                       ; 004b5a90
        ;   XREF to: 004b5aa7 (CONDITIONAL_JUMP)  ; LAB_004b5aa7
    LEA EAX,[EBP + 0xfffff85e]          ; 004b5a92
    PUSH EAX                            ; 004b5a98
    PUSH ESI                            ; 004b5a99
    PUSH 0x0                            ; 004b5a9a
    CALL engine_2d.c_FUN_00402140       ; 004b5a9c
        ;   XREF to: 00402140 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_FUN_00402140()
    ADD ESI,0xb                         ; 004b5aa1
    ADD ESP,0xc                         ; 004b5aa4
    PUSH EBX                            ; 004b5aa7
        ;   Label: LAB_004b5aa7
    CALL sound_sndmain.cpp_FUN_00551330 ; 004b5aa8
        ;   XREF to: 00551330 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00551330()
    ADD ESP,0x4                         ; 004b5aad
    MOV EBX,EAX                         ; 004b5ab0
    TEST EAX,EAX                        ; 004b5ab2
    JNZ 0x004b5a6f                      ; 004b5ab4
        ;   XREF to: 004b5a6f (CONDITIONAL_JUMP)  ; LAB_004b5a6f
    MOV EAX,dword ptr [EBP + 0x92]      ; 004b5ab6
        ;   Label: LAB_004b5ab6
    CMP dword ptr [EAX + 0x1f4],0x0     ; 004b5abc
    JZ 0x004b5ad4                       ; 004b5ac3
        ;   XREF to: 004b5ad4 (CONDITIONAL_JUMP)  ; LAB_004b5ad4
    MOV EBX,dword ptr [0x006141f0]      ; 004b5ac5 | DAT_006141f0
    PUSH EBX                            ; 004b5acb
    CALL core_event.cpp_CEventList_render_FUN_0048e490 ; 004b5acc
        ;   XREF to: 0048e490 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_render_FUN_0048e490(CEventList * this_ptr)
    ADD ESP,0x4                         ; 004b5ad1
    MOV EAX,dword ptr [EBP + 0x92]      ; 004b5ad4
        ;   Label: LAB_004b5ad4
    CMP dword ptr [EAX + 0x1f8],0x0     ; 004b5ada
    JZ 0x004b5b0f                       ; 004b5ae1
        ;   XREF to: 004b5b0f (CONDITIONAL_JUMP)  ; LAB_004b5b0f
    CMP dword ptr [EAX + 0x298],0x0     ; 004b5ae3
    JZ 0x004b5b0f                       ; 004b5aea
        ;   XREF to: 004b5b0f (CONDITIONAL_JUMP)  ; LAB_004b5b0f
    MOV EAX,[0x006141bc]                ; 004b5aec | DAT_006141bc
    DEC EAX                             ; 004b5af1
    PUSH EAX                            ; 004b5af2
    MOV EAX,[0x006141b8]                ; 004b5af3 | DAT_006141b8
    DEC EAX                             ; 004b5af8
    PUSH EAX                            ; 004b5af9
    PUSH 0xf0                           ; 004b5afa
    PUSH 0x0                            ; 004b5aff
    MOV EAX,[0x0061b460]                ; 004b5b01 | g_CScriptPtr
    PUSH EAX                            ; 004b5b06 | g_CScriptInstance
    CALL core_script.cpp_FUN_00521af0   ; 004b5b07
        ;   XREF to: 00521af0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_FUN_00521af0(CScript * this_ptr, int left, int top, int right, ...)
    ADD ESP,0x14                        ; 004b5b0c
    MOV EAX,dword ptr [EBP + 0x92]      ; 004b5b0f
        ;   Label: LAB_004b5b0f
    CMP dword ptr [EAX + 0x214],0x0     ; 004b5b15
    JZ 0x004b5b4e                       ; 004b5b1c
        ;   XREF to: 004b5b4e (CONDITIONAL_JUMP)  ; LAB_004b5b4e
    LEA EAX,[EBP + 0xfffffaae]          ; 004b5b1e
    PUSH EAX                            ; 004b5b24
    MOV ECX,dword ptr [0x006138e0]      ; 004b5b25 | g_CEditorToolsPtr
    PUSH ECX                            ; 004b5b2b
    CALL shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004807e0 ; 004b5b2c
        ;   XREF to: 004807e0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004807e0(CEditorTools * this_ptr, char * output_buffer)
    MOV EAX,[0x006141bc]                ; 004b5b31 | DAT_006141bc
    ADD ESP,0x8                         ; 004b5b36
    SUB EAX,0x42                        ; 004b5b39
    PUSH EAX                            ; 004b5b3c
    PUSH 0x0                            ; 004b5b3d
    LEA EAX,[EBP + 0xfffffaae]          ; 004b5b3f
    PUSH EAX                            ; 004b5b45
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 004b5b46
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004b5b4b
    MOV EAX,[0x01cedef4]                ; 004b5b4e | DAT_01cedef4
        ;   Label: LAB_004b5b4e
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004b5b53
    PUSH EAX                            ; 004b5b5a
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 004b5b5b
    CALL dword ptr [EDX + 0x114]        ; 004b5b61
    ADD ESP,0x4                         ; 004b5b67
    CMP EAX,0x2                         ; 004b5b6a
    JNZ 0x004b5bd7                      ; 004b5b6d
        ;   XREF to: 004b5bd7 (CONDITIONAL_JUMP)  ; LAB_004b5bd7
    PUSH 0x5d762c                       ; 004b5b6f | = "You have failed"
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004b5b74
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004b5b79
    LEA EDI,[EBP + 0xfffffdae]          ; 004b5b7c
    MOV ESI,EAX                         ; 004b5b82
    PUSH EDI                            ; 004b5b84
    MOV AL,byte ptr [ESI]               ; 004b5b85
        ;   Label: LAB_004b5b85
    MOV byte ptr [EDI],AL               ; 004b5b87
    CMP AL,0x0                          ; 004b5b89
    JZ 0x004b5b9d                       ; 004b5b8b
        ;   XREF to: 004b5b9d (CONDITIONAL_JUMP)  ; LAB_004b5b9d
    MOV AL,byte ptr [ESI + 0x1]         ; 004b5b8d
    ADD ESI,0x2                         ; 004b5b90
    MOV byte ptr [EDI + 0x1],AL         ; 004b5b93
    ADD EDI,0x2                         ; 004b5b96
    CMP AL,0x0                          ; 004b5b99
    JNZ 0x004b5b85                      ; 004b5b9b
        ;   XREF to: 004b5b85 (CONDITIONAL_JUMP)  ; LAB_004b5b85
    POP EDI                             ; 004b5b9d
        ;   Label: LAB_004b5b9d
    LEA EAX,[EBP + 0xfffffdae]          ; 004b5b9e
    PUSH EAX                            ; 004b5ba4
    XOR EAX,EAX                         ; 004b5ba5
    PUSH 0x0                            ; 004b5ba7
    MOV AL,[0x01c34510]                 ; 004b5ba9 | DAT_01c34510
    PUSH EAX                            ; 004b5bae
    MOV EAX,[0x01511cb8]                ; 004b5baf | DAT_01511cb8
    MOV EDX,dword ptr [EAX + 0x41ec]    ; 004b5bb4
    MOV ECX,dword ptr [0x006141bc]      ; 004b5bba | DAT_006141bc
    ADD EDX,EDX                         ; 004b5bc0
    SUB ECX,EDX                         ; 004b5bc2
    PUSH ECX                            ; 004b5bc4
    MOV EBX,dword ptr [0x006141b8]      ; 004b5bc5 | DAT_006141b8
    PUSH EBX                            ; 004b5bcb
    PUSH 0x0                            ; 004b5bcc
    PUSH EAX                            ; 004b5bce
    CALL engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004a93a0 ; 004b5bcf
        ;   XREF to: 004a93a0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004a93a0(CBitFont * this_ptr, int left_x, int right_x, int y, ...)
    ADD ESP,0x1c                        ; 004b5bd4
    MOV EAX,dword ptr [EBP + 0x92]      ; 004b5bd7
        ;   Label: LAB_004b5bd7
    CMP dword ptr [EAX + 0xaec],0x0     ; 004b5bdd
    JZ 0x004b5bef                       ; 004b5be4
        ;   XREF to: 004b5bef (CONDITIONAL_JUMP)  ; LAB_004b5bef
    PUSH EAX                            ; 004b5be6
    CALL core_game.cpp_FUN_004b3c50     ; 004b5be7
        ;   XREF to: 004b3c50 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004b3c50(CGame * this_ptr)
    ADD ESP,0x4                         ; 004b5bec
    MOV EAX,dword ptr [EBP + 0x92]      ; 004b5bef
        ;   Label: LAB_004b5bef
    CMP dword ptr [EAX + 0x2a0],0x0     ; 004b5bf5
    JZ 0x004b5c0d                       ; 004b5bfc
        ;   XREF to: 004b5c0d (CONDITIONAL_JUMP)  ; LAB_004b5c0d
    MOV ECX,dword ptr [0x00609ed0]      ; 004b5bfe | g_CConsolePtr
    PUSH ECX                            ; 004b5c04 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436970 ; 004b5c05
        ;   XREF to: 00436970 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_FUN_00436970(CConsole * this_ptr)
    ADD ESP,0x4                         ; 004b5c0a
    MOV EAX,[0x01cb778c]                ; 004b5c0d | g_CPickList
        ;   Label: LAB_004b5c0d
    TEST EAX,EAX                        ; 004b5c12
    JLE 0x004b5c23                      ; 004b5c14
        ;   XREF to: 004b5c23 (CONDITIONAL_JUMP)  ; LAB_004b5c23
    PUSH 0x1cb778c                      ; 004b5c16 | g_CPickList
    CALL shape_edittool.cpp_FUN_004831d0 ; 004b5c1b
        ;   XREF to: 004831d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_FUN_004831d0(CPickList * this_ptr)
    ADD ESP,0x4                         ; 004b5c20
    MOV EAX,dword ptr [EBP + 0x92]      ; 004b5c23
        ;   Label: LAB_004b5c23
    CMP dword ptr [EAX + 0x218],0x0     ; 004b5c29
    JZ 0x004b5fbc                       ; 004b5c30
        ;   XREF to: 004b5fbc (CONDITIONAL_JUMP)  ; LAB_004b5fbc
    PUSH 0x0                            ; 004b5c36
        ;   Label: LAB_004b5c36
    MOV EDI,dword ptr [0x006138e0]      ; 004b5c38 | g_CEditorToolsPtr
    PUSH EDI                            ; 004b5c3e
    CALL shape_edittool.cpp_FUN_0047f210 ; 004b5c3f
        ;   XREF to: 0047f210 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047f210()
    ADD ESP,0x8                         ; 004b5c44
    PUSH 0x0                            ; 004b5c47
        ;   Label: LAB_004b5c47
    CALL engine_special.cpp_FUN_0055f550 ; 004b5c49
        ;   XREF to: 0055f550 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_FUN_0055f550(int clear_lock_flag)
    ADD ESP,0x4                         ; 004b5c4e
    CMP dword ptr [EBP + 0x4e],0x0      ; 004b5c51
        ;   Label: LAB_004b5c51
    JZ 0x004b523c                       ; 004b5c55
        ;   XREF to: 004b523c (CONDITIONAL_JUMP)  ; LAB_004b523c
    CALL wincore_wddvmem.cpp_FUN_00589170 ; 004b5c5b
        ;   XREF to: 00589170 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_FUN_00589170()
    LEA ESP,[EBP + 0x7e]                ; 004b5c60
    POP EBP                             ; 004b5c63
    POP EDI                             ; 004b5c64
    POP ESI                             ; 004b5c65
    POP EBX                             ; 004b5c66
    RET                                 ; 004b5c67
    CMP dword ptr [EAX + 0x29c],0x0     ; 004b5c68
        ;   Label: LAB_004b5c68
    JNZ 0x004b5284                      ; 004b5c6f
        ;   XREF to: 004b5284 (CONDITIONAL_JUMP)  ; LAB_004b5284
    JMP 0x004b5289                      ; 004b5c75
        ;   XREF to: 004b5289 (UNCONDITIONAL_JUMP)  ; LAB_004b5289
    MOV EAX,dword ptr [EBP + 0x92]      ; 004b5c7a
        ;   Label: LAB_004b5c7a
    CMP dword ptr [EAX + 0x25c],0x0     ; 004b5c80
    JNZ 0x004b5298                      ; 004b5c87
        ;   XREF to: 004b5298 (CONDITIONAL_JUMP)  ; LAB_004b5298
    CMP dword ptr [0x026677e0],0x0      ; 004b5c8d | DAT_026677e0
    JNZ 0x004b5298                      ; 004b5c94
        ;   XREF to: 004b5298 (CONDITIONAL_JUMP)  ; LAB_004b5298
    PUSH 0x1                            ; 004b5c9a
    MOV EDX,dword ptr [0x0061b5a8]      ; 004b5c9c | g_CDemonSetPtr
    PUSH EDX                            ; 004b5ca2
    CALL core_set.cpp_FUN_0052f2a0      ; 004b5ca3
        ;   XREF to: 0052f2a0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_0052f2a0(CDemonSet * this_ptr, int skip_prerender)
    ADD ESP,0x8                         ; 004b5ca8
    JMP 0x004b5298                      ; 004b5cab
        ;   XREF to: 004b5298 (UNCONDITIONAL_JUMP)  ; LAB_004b5298
    PUSH EAX                            ; 004b5cb0
        ;   Label: LAB_004b5cb0
    CALL core_game.cpp_FUN_004bd570     ; 004b5cb1
        ;   XREF to: 004bd570 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004bd570(CGame * this_ptr)
    ADD ESP,0x4                         ; 004b5cb6
    MOV EAX,[0x0061c068]                ; 004b5cb9 | DAT_0061c068
    PUSH EAX                            ; 004b5cbe
    CALL core_sound.cpp_FUN_0055a3c0    ; 004b5cbf
        ;   XREF to: 0055a3c0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_FUN_0055a3c0(CSound * this_ptr)
    ADD ESP,0x4                         ; 004b5cc4
    JMP 0x004b5401                      ; 004b5cc7
        ;   XREF to: 004b5401 (UNCONDITIONAL_JUMP)  ; LAB_004b5401
    CMP dword ptr [EBX + 0x25c],0x0     ; 004b5ccc
        ;   Label: LAB_004b5ccc
    JNZ 0x004b542f                      ; 004b5cd3
        ;   XREF to: 004b542f (CONDITIONAL_JUMP)  ; LAB_004b542f
    CMP dword ptr [0x026677e0],0x0      ; 004b5cd9 | DAT_026677e0
    JNZ 0x004b542f                      ; 004b5ce0
        ;   XREF to: 004b542f (CONDITIONAL_JUMP)  ; LAB_004b542f
    MOV EBX,dword ptr [0x0061b5a8]      ; 004b5ce6 | g_CDemonSetPtr
    PUSH EBX                            ; 004b5cec
    CALL core_set.cpp_FUN_0052ef80      ; 004b5ced
        ;   XREF to: 0052ef80 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_0052ef80(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004b5cf2
    JMP 0x004b542f                      ; 004b5cf5
        ;   XREF to: 004b542f (UNCONDITIONAL_JUMP)  ; LAB_004b542f
    MOV EDI,dword ptr [0x026677e0]      ; 004b5cfa | DAT_026677e0
        ;   Label: LAB_004b5cfa
    TEST EDI,EDI                        ; 004b5d00
    JNZ 0x004b5d31                      ; 004b5d02
        ;   XREF to: 004b5d31 (CONDITIONAL_JUMP)  ; LAB_004b5d31
    MOV EAX,dword ptr [EBP + 0x92]      ; 004b5d04
    CMP dword ptr [EAX + 0x25c],0x0     ; 004b5d0a
    JNZ 0x004b5d3c                      ; 004b5d11
        ;   XREF to: 004b5d3c (CONDITIONAL_JUMP)  ; LAB_004b5d3c
    CMP dword ptr [EAX + 0x260],0x0     ; 004b5d13
    JZ 0x004b54ce                       ; 004b5d1a
        ;   XREF to: 004b54ce (CONDITIONAL_JUMP)  ; LAB_004b54ce
    MOV EBX,dword ptr [0x0061b5a8]      ; 004b5d20 | g_CDemonSetPtr
    PUSH EBX                            ; 004b5d26
    CALL core_set.cpp_FUN_0052fea0      ; 004b5d27
        ;   XREF to: 0052fea0 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_FUN_0052fea0()
    JMP 0x004b54cb                      ; 004b5d2c
        ;   XREF to: 004b54cb (UNCONDITIONAL_JUMP)  ; LAB_004b54cb
    PUSH EDI                            ; 004b5d31
        ;   Label: LAB_004b5d31
    MOV EDX,dword ptr [EDI]             ; 004b5d32
    CALL dword ptr [EDX + 0x18]         ; 004b5d34
    JMP 0x004b54cb                      ; 004b5d37
        ;   XREF to: 004b54cb (UNCONDITIONAL_JUMP)  ; LAB_004b54cb
    MOV ESI,dword ptr [0x0061b5a8]      ; 004b5d3c | g_CDemonSetPtr
        ;   Label: LAB_004b5d3c
    PUSH ESI                            ; 004b5d42
    CALL core_set.cpp_FUN_0052fad0      ; 004b5d43
        ;   XREF to: 0052fad0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_0052fad0(CDemonSet * this_ptr)
    JMP 0x004b54cb                      ; 004b5d48
        ;   XREF to: 004b54cb (UNCONDITIONAL_JUMP)  ; LAB_004b54cb
    PUSH 0x5d74ec                       ; 004b5d4d | = "SPOOKHOUSE"
        ;   Label: LAB_004b5d4d
    CALL crt_env.c_getenv_FUN_005bac90  ; 004b5d52
        ;   XREF to: 005bac90 (UNCONDITIONAL_CALL)  ; char * crt_env.c_getenv_FUN_005bac90(char * name)
    ADD ESP,0x4                         ; 004b5d57
    TEST EAX,EAX                        ; 004b5d5a
    JNZ 0x004b54e1                      ; 004b5d5c
        ;   XREF to: 004b54e1 (CONDITIONAL_JUMP)  ; LAB_004b54e1
    JMP 0x004b5520                      ; 004b5d62
        ;   XREF to: 004b5520 (UNCONDITIONAL_JUMP)  ; LAB_004b5520
    MOV ESI,0x1                         ; 004b5d67
        ;   Label: LAB_004b5d67
    MOV dword ptr [0x01cb80dc],ECX      ; 004b5d6c | DAT_01cb80dc
    MOV dword ptr [0x01cb80d4],ESI      ; 004b5d72 | DAT_01cb80d4
    JMP 0x004b5640                      ; 004b5d78
        ;   XREF to: 004b5640 (UNCONDITIONAL_JUMP)  ; LAB_004b5640
    CMP dword ptr [0x01cb80d4],0x0      ; 004b5d7d | DAT_01cb80d4
        ;   Label: LAB_004b5d7d
    JZ 0x004b5666                       ; 004b5d84
        ;   XREF to: 004b5666 (CONDITIONAL_JUMP)  ; LAB_004b5666
    MOV EBX,dword ptr [0x01cb80dc]      ; 004b5d8a | DAT_01cb80dc
    PUSH EBX                            ; 004b5d90
    PUSH 0x5d72b7                       ; 004b5d91 | = "noc%05d.raw"
    LEA EAX,[EBP + 0xffffff76]          ; 004b5d96
    PUSH EAX                            ; 004b5d9c
    CALL crt_unknown.c_FUN_005b7790     ; 004b5d9d
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0xc                         ; 004b5da2
    LEA EAX,[EBP + 0xffffff76]          ; 004b5da5
    PUSH EAX                            ; 004b5dab
    PUSH 0x5d72c3                       ; 004b5dac | = "Movie recording active: movie\\%s"
    LEA EAX,[EBP + 0xfffffeae]          ; 004b5db1
    PUSH EAX                            ; 004b5db7
    CALL crt_unknown.c_FUN_005b7790     ; 004b5db8
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0xc                         ; 004b5dbd
    PUSH 0x5d72e4                       ; 004b5dc0 | DAT_005d72e4
    LEA EAX,[EBP + 0xffffff76]          ; 004b5dc5
    PUSH EAX                            ; 004b5dcb
    PUSH 0x5d72e7                       ; 004b5dcc | = "movie"
    CALL engine_dosio.cpp_FUN_00460c70  ; 004b5dd1
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00460c70(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004b5dd6
    MOV dword ptr [EBP + 0x5a],EAX      ; 004b5dd9
    TEST EAX,EAX                        ; 004b5ddc
    JZ 0x004b5666                       ; 004b5dde
        ;   XREF to: 004b5666 (CONDITIONAL_JUMP)  ; LAB_004b5666
    XOR ESI,ESI                         ; 004b5de4
    MOV EDI,dword ptr [0x006164a8]      ; 004b5de6 | DAT_006164a8
    MOV dword ptr [EBP + 0x56],ESI      ; 004b5dec
    TEST EDI,EDI                        ; 004b5def
    JLE 0x004b5f74                      ; 004b5df1
        ;   XREF to: 004b5f74 (CONDITIONAL_JUMP)  ; LAB_004b5f74
    XOR EDI,EDI                         ; 004b5df7
        ;   Label: LAB_004b5df7
    MOV EAX,[0x006164a4]                ; 004b5df9 | DAT_006164a4
    MOV dword ptr [EBP + 0x5e],EDI      ; 004b5dfe
    TEST EAX,EAX                        ; 004b5e01
    JLE 0x004b5f5f                      ; 004b5e03
        ;   XREF to: 004b5f5f (CONDITIONAL_JUMP)  ; LAB_004b5f5f
    MOV EAX,dword ptr [EBP + 0x56]      ; 004b5e09
    INC EAX                             ; 004b5e0c
    MOV dword ptr [EBP + 0x52],EAX      ; 004b5e0d
    MOV EDX,dword ptr [EBP + 0x5e]      ; 004b5e10
        ;   Label: LAB_004b5e10
    IMUL EDX,dword ptr [0x006141b8]     ; 004b5e13 | DAT_006141b8
    MOV ECX,dword ptr [0x006164a4]      ; 004b5e1a | DAT_006164a4
    MOV EAX,EDX                         ; 004b5e20
    SAR EDX,0x1f                        ; 004b5e22
    IDIV ECX                            ; 004b5e25
    MOV EDX,dword ptr [EBP + 0x5e]      ; 004b5e27
    MOV EBX,dword ptr [0x006141b8]      ; 004b5e2a | DAT_006141b8
    INC EDX                             ; 004b5e30
    IMUL EDX,EBX                        ; 004b5e31
    MOV dword ptr [EBP + 0x66],EAX      ; 004b5e34
    MOV EAX,EDX                         ; 004b5e37
    SAR EDX,0x1f                        ; 004b5e39
    IDIV ECX                            ; 004b5e3c
    MOV EDI,dword ptr [0x006141bc]      ; 004b5e3e | DAT_006141bc
    MOV EDX,dword ptr [EBP + 0x56]      ; 004b5e44
    IMUL EDX,EDI                        ; 004b5e47
    MOV ECX,dword ptr [0x006164a8]      ; 004b5e4a | DAT_006164a8
    MOV dword ptr [EBP + 0x6e],EAX      ; 004b5e50
    MOV EAX,EDX                         ; 004b5e53
    SAR EDX,0x1f                        ; 004b5e55
    IDIV ECX                            ; 004b5e58
    MOV EDX,dword ptr [EBP + 0x52]      ; 004b5e5a
    IMUL EDX,EDI                        ; 004b5e5d
    MOV ESI,dword ptr [0x006164a8]      ; 004b5e60 | DAT_006164a8
    MOV ECX,EAX                         ; 004b5e66
    MOV EAX,EDX                         ; 004b5e68
    SAR EDX,0x1f                        ; 004b5e6a
    IDIV ESI                            ; 004b5e6d
    XOR EDI,EDI                         ; 004b5e6f
    XOR EBX,EBX                         ; 004b5e71
    MOV dword ptr [EBP + 0x72],EDI      ; 004b5e73
    MOV dword ptr [EBP + 0x76],EDI      ; 004b5e76
    XOR ESI,ESI                         ; 004b5e79
    CMP ECX,EAX                         ; 004b5e7b
    JGE 0x004b5efa                      ; 004b5e7d
        ;   XREF to: 004b5efa (CONDITIONAL_JUMP)  ; LAB_004b5efa
    LEA EDX,[ECX*0x4 + 0x0]             ; 004b5e83
    SHL EAX,0x2                         ; 004b5e8a
    MOV dword ptr [EBP + 0x6a],EDX      ; 004b5e8d
    MOV dword ptr [EBP + 0x62],EAX      ; 004b5e90
    MOV ECX,dword ptr [EBP + 0x6e]      ; 004b5e93
        ;   Label: LAB_004b5e93
    MOV EDX,dword ptr [EBP + 0x66]      ; 004b5e96
    CMP EDX,ECX                         ; 004b5e99
    JGE 0x004b5eea                      ; 004b5e9b
        ;   XREF to: 004b5eea (CONDITIONAL_JUMP)  ; LAB_004b5eea
    MOV EAX,dword ptr [EBP + 0x6a]      ; 004b5e9d
    LEA ECX,[EDX*0x4 + 0x0]             ; 004b5ea0
    MOV EAX,dword ptr [EAX + 0x1c2a38c] ; 004b5ea7 | DAT_01c2a38c | DAT_01c2a390
    ADD ECX,EAX                         ; 004b5ead
    MOV EAX,dword ptr [ECX]             ; 004b5eaf
        ;   Label: LAB_004b5eaf
    MOV EDI,EAX                         ; 004b5eb1
    SHR EDI,0x10                        ; 004b5eb3
    AND EDI,0xff                        ; 004b5eb6
    ADD ESI,EDI                         ; 004b5ebc
    MOV EDI,EAX                         ; 004b5ebe
    SHR EDI,0x8                         ; 004b5ec0
    ADD ECX,0x4                         ; 004b5ec3
    AND EDI,0xff                        ; 004b5ec6
    AND EAX,0xff                        ; 004b5ecc
    ADD EBX,EDI                         ; 004b5ed1
    MOV EDI,dword ptr [EBP + 0x76]      ; 004b5ed3
    INC EDX                             ; 004b5ed6
    ADD EDI,EAX                         ; 004b5ed7
    MOV EAX,dword ptr [EBP + 0x72]      ; 004b5ed9
    MOV dword ptr [EBP + 0x76],EDI      ; 004b5edc
    INC EAX                             ; 004b5edf
    MOV EDI,dword ptr [EBP + 0x6e]      ; 004b5ee0
    MOV dword ptr [EBP + 0x72],EAX      ; 004b5ee3
    CMP EDX,EDI                         ; 004b5ee6
    JL 0x004b5eaf                       ; 004b5ee8
        ;   XREF to: 004b5eaf (CONDITIONAL_JUMP)  ; LAB_004b5eaf
    MOV ECX,dword ptr [EBP + 0x6a]      ; 004b5eea
        ;   Label: LAB_004b5eea
    ADD ECX,0x4                         ; 004b5eed
    MOV EDI,dword ptr [EBP + 0x62]      ; 004b5ef0
    MOV dword ptr [EBP + 0x6a],ECX      ; 004b5ef3
    CMP ECX,EDI                         ; 004b5ef6
    JL 0x004b5e93                       ; 004b5ef8
        ;   XREF to: 004b5e93 (CONDITIONAL_JUMP)  ; LAB_004b5e93
    MOV ECX,dword ptr [EBP + 0x72]      ; 004b5efa
        ;   Label: LAB_004b5efa
    MOV EDX,ESI                         ; 004b5efd
    MOV EAX,ESI                         ; 004b5eff
    SAR EDX,0x1f                        ; 004b5f01
    IDIV ECX                            ; 004b5f04
    MOV ESI,EAX                         ; 004b5f06
    MOV EDX,EBX                         ; 004b5f08
    MOV EAX,EBX                         ; 004b5f0a
    SAR EDX,0x1f                        ; 004b5f0c
    IDIV ECX                            ; 004b5f0f
    MOV EBX,EAX                         ; 004b5f11
    MOV EAX,dword ptr [EBP + 0x76]      ; 004b5f13
    MOV EDX,EAX                         ; 004b5f16
    SAR EDX,0x1f                        ; 004b5f18
    IDIV ECX                            ; 004b5f1b
    MOV dword ptr [EBP + 0x76],EAX      ; 004b5f1d
    MOV EAX,dword ptr [EBP + 0x5a]      ; 004b5f20
    PUSH EAX                            ; 004b5f23
    PUSH ESI                            ; 004b5f24
    CALL crt_stdio.c_fputc_FUN_005bab40 ; 004b5f25
        ;   XREF to: 005bab40 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fputc_FUN_005bab40()
    ADD ESP,0x8                         ; 004b5f2a
    MOV EDX,dword ptr [EBP + 0x5a]      ; 004b5f2d
    PUSH EDX                            ; 004b5f30
    PUSH EBX                            ; 004b5f31
    CALL crt_stdio.c_fputc_FUN_005bab40 ; 004b5f32
        ;   XREF to: 005bab40 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fputc_FUN_005bab40()
    ADD ESP,0x8                         ; 004b5f37
    MOV ECX,dword ptr [EBP + 0x5a]      ; 004b5f3a
    MOV ESI,dword ptr [EBP + 0x5e]      ; 004b5f3d
    PUSH ECX                            ; 004b5f40
    MOV EBX,dword ptr [EBP + 0x76]      ; 004b5f41
    INC ESI                             ; 004b5f44
    PUSH EBX                            ; 004b5f45
    MOV dword ptr [EBP + 0x5e],ESI      ; 004b5f46
    CALL crt_stdio.c_fputc_FUN_005bab40 ; 004b5f49
        ;   XREF to: 005bab40 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fputc_FUN_005bab40()
    MOV EDI,dword ptr [0x006164a4]      ; 004b5f4e | DAT_006164a4
    ADD ESP,0x8                         ; 004b5f54
    CMP ESI,EDI                         ; 004b5f57
    JL 0x004b5e10                       ; 004b5f59
        ;   XREF to: 004b5e10 (CONDITIONAL_JUMP)  ; LAB_004b5e10
    MOV EDX,dword ptr [EBP + 0x56]      ; 004b5f5f
        ;   Label: LAB_004b5f5f
    INC EDX                             ; 004b5f62
    MOV ECX,dword ptr [0x006164a8]      ; 004b5f63 | DAT_006164a8
    MOV dword ptr [EBP + 0x56],EDX      ; 004b5f69
    CMP EDX,ECX                         ; 004b5f6c
    JL 0x004b5df7                       ; 004b5f6e
        ;   XREF to: 004b5df7 (CONDITIONAL_JUMP)  ; LAB_004b5df7
    MOV EBX,dword ptr [EBP + 0x5a]      ; 004b5f74
        ;   Label: LAB_004b5f74
    PUSH EBX                            ; 004b5f77
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 004b5f78
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 004b5f7d
    PUSH 0x0                            ; 004b5f80
    PUSH 0x0                            ; 004b5f82
    LEA EAX,[EBP + 0xfffffeae]          ; 004b5f84
    PUSH EAX                            ; 004b5f8a
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 004b5f8b
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    MOV ESI,dword ptr [0x01cb80dc]      ; 004b5f90 | DAT_01cb80dc
    INC ESI                             ; 004b5f96
    ADD ESP,0xc                         ; 004b5f97
    MOV dword ptr [0x01cb80dc],ESI      ; 004b5f9a | DAT_01cb80dc
    JMP 0x004b5666                      ; 004b5fa0
        ;   XREF to: 004b5666 (UNCONDITIONAL_JUMP)  ; LAB_004b5666
    MOV dword ptr [0x01cb1118],EBX      ; 004b5fa5 | DAT_01cb1118
        ;   Label: LAB_004b5fa5
    MOV dword ptr [0x01cb1110],EBX      ; 004b5fab | DAT_01cb1110
    MOV dword ptr [0x01cb1114],EBX      ; 004b5fb1 | DAT_01cb1114
    JMP 0x004b5a56                      ; 004b5fb7
        ;   XREF to: 004b5a56 (UNCONDITIONAL_JUMP)  ; LAB_004b5a56
    CMP dword ptr [EAX + 0xd0],0x3      ; 004b5fbc
        ;   Label: LAB_004b5fbc
    JZ 0x004b5c36                       ; 004b5fc3
        ;   XREF to: 004b5c36 (CONDITIONAL_JUMP)  ; LAB_004b5c36
    JMP 0x004b5c47                      ; 004b5fc9
        ;   XREF to: 004b5c47 (UNCONDITIONAL_JUMP)  ; LAB_004b5c47

