; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_FUN_004b6f30(CGame *param_1)
;
; Local Variables:
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
;
; XREF[1]:
;   core_game.cpp_CGame_runGameSession_FUN_004b7f90 at 004b851e
;
; Referenced Globals:
;   TerminatedCString s_noc_05d_raw_005c21ac
;   TerminatedCString s_Movie_recording_active_m_005c21b8
;   undefined4 DAT_005c21d9
;   TerminatedCString s_movie_005c21dc
;   TerminatedCString s_screen_paint_3_2f_ms_005c2404
;   TerminatedCString s_SPOOKHOUSE_005c241d
;   TerminatedCString s_demon_d_pcx_005c2428
;   TerminatedCString s_Set_s_Camera_s_group_d_005c2434
;   TerminatedCString s_FR_f_AVG_f_PC_d_005c2452
;   TerminatedCString s_Hero_4_2f_4_2f_4_2f_xyz_005c246a
;   TerminatedCString s_Slew_s_Virtual_Director_005c24a1
;   TerminatedCString s_Fudge_g_g_g_005c24c2
;   TerminatedCString s_SFX_d_Samples_Active_d_1_005c24d2
;   TerminatedCString s_s_32_d_64_d_128_d_256_d_005c2523
;   TerminatedCString s_You_re_dead_Game_over_005c254c
;   ... and 57 more
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_00449f80
;   core_dcamera.cpp_FUN_00449eb0
;   core_event.cpp_CEventList_executeCommands_FUN_0048c150
;   core_event.cpp_CEventList_render_FUN_00491bf0
;   core_fldnotes.cpp_FUN_004abe00
;   core_game.cpp_CGame_drawScreenBorder_FUN_004b45e0
;   core_game.cpp_CGame_process_FUN_004bf4b0
;   core_game.cpp_CGame_renderIrisFade_FUN_004bd7d0
;   core_game.cpp_CGame_renderOverlay_FUN_004b47d0
;   core_game.cpp_CGame_slamDT_FUN_004bf3a0
;   core_game.cpp_FUN_004b4440
;   core_game.cpp_FUN_004b51e0
;   core_game.cpp_FUN_004c4a10
;   core_inv.cpp_CInventory_renderAllItems_FUN_004dda90
;   core_netgame.cpp_CNetGame_processClientFrame_FUN_00507c00
;   ... and 42 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b6f30
        ;   Label: core_game.cpp_FUN_004b6f30
    PUSH ESI                            ; 004b6f31
    PUSH EDI                            ; 004b6f32
    PUSH EBP                            ; 004b6f33
    MOV EBP,ESP                         ; 004b6f34
    SUB ESP,0x71c                       ; 004b6f36
    AND ESP,0xfffffff8                  ; 004b6f3c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b6f3f
    XOR EDX,EDX                         ; 004b6f42
    MOV ECX,dword ptr [EAX + 0x230]     ; 004b6f44
    MOV dword ptr [ESP + 0x6ec],EDX     ; 004b6f4a
    TEST ECX,ECX                        ; 004b6f51
    JNZ 0x004b6fd4                      ; 004b6f53
        ;   XREF to: 004b6fd4 (CONDITIONAL_JUMP)  ; LAB_004b6fd4
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b6f59
        ;   Label: LAB_004b6f59
    XOR EBX,EBX                         ; 004b6f5c
    MOV ESI,dword ptr [EAX + 0xe8]      ; 004b6f5e
    MOV dword ptr [0x01ed3198],EBX      ; 004b6f64 | DAT_01ed3198
    TEST ESI,ESI                        ; 004b6f6a
    JNZ 0x004b6f7c                      ; 004b6f6c
        ;   XREF to: 004b6f7c (CONDITIONAL_JUMP)  ; LAB_004b6f7c
    MOV EAX,[0x00603450]                ; 004b6f6e | g_CNetGamePtr
    CMP dword ptr [EAX + 0x178],0x0     ; 004b6f73 | g_CNetGameInstance.has_pending_sim_frame
    JZ 0x004b6ff0                       ; 004b6f7a
        ;   XREF to: 004b6ff0 (CONDITIONAL_JUMP)  ; LAB_004b6ff0
    MOV EDI,dword ptr [0x00603450]      ; 004b6f7c | g_CNetGamePtr
        ;   Label: LAB_004b6f7c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b6f82
    PUSH EDI                            ; 004b6f85 | g_CNetGameInstance
    MOV dword ptr [EAX + 0x220],0x0     ; 004b6f86
    CALL core_netgame.cpp_CNetGame_processClientFrame_FUN_00507c00 ; 004b6f90
        ;   XREF to: 00507c00 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_processClientFrame_FUN_00507c00(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 004b6f95
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b6f98
    PUSH EAX                            ; 004b6f9b
    CALL core_game.cpp_CGame_process_FUN_004bf4b0 ; 004b6f9c
        ;   XREF to: 004bf4b0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_process_FUN_004bf4b0(CGame * this_ptr)
    ADD ESP,0x4                         ; 004b6fa1
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b6fa4
    CMP dword ptr [EAX + 0xe8],0x0      ; 004b6fa7
    JZ 0x004b6fe5                       ; 004b6fae
        ;   XREF to: 004b6fe5 (CONDITIONAL_JUMP)  ; LAB_004b6fe5
    PUSH 0x3e800000                     ; 004b6fb0
    PUSH EAX                            ; 004b6fb5
    CALL core_game.cpp_CGame_slamDT_FUN_004bf3a0 ; 004b6fb6
        ;   XREF to: 004bf3a0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_slamDT_FUN_004bf3a0(CGame * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004b6fbb
    MOV ESI,dword ptr [0x00603450]      ; 004b6fbe | g_CNetGamePtr
        ;   Label: LAB_004b6fbe
    PUSH ESI                            ; 004b6fc4 | g_CNetGameInstance
    CALL core_netgame.cpp_CNetGame_processServerFrame_FUN_00507790 ; 004b6fc5
        ;   XREF to: 00507790 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_processServerFrame_FUN_00507790(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 004b6fca
    MOV ESP,EBP                         ; 004b6fcd
        ;   Label: LAB_004b6fcd
    POP EBP                             ; 004b6fcf
    POP EDI                             ; 004b6fd0
    POP ESI                             ; 004b6fd1
    POP EBX                             ; 004b6fd2
    RET                                 ; 004b6fd3
    CALL wincore_winrun.cpp_getTime_FUN_005806a0 ; 004b6fd4
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005806a0()
        ;   Label: LAB_004b6fd4
    MOV dword ptr [ESP + 0x6e8],EAX     ; 004b6fd9
    JMP 0x004b6f59                      ; 004b6fe0
        ;   XREF to: 004b6f59 (UNCONDITIONAL_JUMP)  ; LAB_004b6f59
    PUSH EAX                            ; 004b6fe5
        ;   Label: LAB_004b6fe5
    CALL core_game.cpp_FUN_004b4440     ; 004b6fe6
        ;   XREF to: 004b4440 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004b4440()
    ADD ESP,0x4                         ; 004b6feb
    JMP 0x004b6fbe                      ; 004b6fee
        ;   XREF to: 004b6fbe (UNCONDITIONAL_JUMP)  ; LAB_004b6fbe
    CMP dword ptr [0x01c6cee8],0x0      ; 004b6ff0 | DAT_01c6cee8
        ;   Label: LAB_004b6ff0
    JZ 0x004b7009                       ; 004b6ff7
        ;   XREF to: 004b7009 (CONDITIONAL_JUMP)  ; LAB_004b7009
    CALL wincore_wddvmem.cpp_openScreenDevice_FUN_0057a3c0 ; 004b6ff9
        ;   XREF to: 0057a3c0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_openScreenDevice_FUN_0057a3c0()
    MOV dword ptr [ESP + 0x6ec],0x1     ; 004b6ffe
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b7009
        ;   Label: LAB_004b7009
    CMP dword ptr [EAX + 0x328],0x0     ; 004b700c
    JZ 0x004b79f8                       ; 004b7013
        ;   XREF to: 004b79f8 (CONDITIONAL_JUMP)  ; LAB_004b79f8
    CALL engine_special.cpp_clearScreen_FUN_00560d70 ; 004b7019
        ;   XREF to: 00560d70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_00560d70()
        ;   Label: LAB_004b7019
    MOV EAX,[0x005fe4b0]                ; 004b701e | g_CFieldNotesPtr
        ;   Label: LAB_004b701e
    CMP dword ptr [EAX + 0x40],0x0      ; 004b7023 | g_CFieldNotesInstance.is_displayed
    JZ 0x004b7a0a                       ; 004b7027
        ;   XREF to: 004b7a0a (CONDITIONAL_JUMP)  ; LAB_004b7a0a
    MOV ECX,dword ptr [0x007dffb4]      ; 004b702d | DAT_007dffb4
        ;   Label: LAB_004b702d
    TEST ECX,ECX                        ; 004b7033
    JZ 0x004b7040                       ; 004b7035
        ;   XREF to: 004b7040 (CONDITIONAL_JUMP)  ; LAB_004b7040
    PUSH ECX                            ; 004b7037
    MOV EDX,dword ptr [ECX]             ; 004b7038
    CALL dword ptr [EDX + 0x1c]         ; 004b703a
    ADD ESP,0x4                         ; 004b703d
    MOV EBX,dword ptr [0x00603450]      ; 004b7040 | g_CNetGamePtr
        ;   Label: LAB_004b7040
    PUSH EBX                            ; 004b7046 | g_CNetGameInstance
    CALL core_netgame.cpp_CNetGame_processClientFrame_FUN_00507c00 ; 004b7047
        ;   XREF to: 00507c00 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_processClientFrame_FUN_00507c00(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 004b704c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b704f
    CMP dword ptr [EAX + 0x220],0x0     ; 004b7052
    JZ 0x004b7a3d                       ; 004b7059
        ;   XREF to: 004b7a3d (CONDITIONAL_JUMP)  ; LAB_004b7a3d
    LEA EAX,[ESP + 0x688]               ; 004b705f
    PUSH EAX                            ; 004b7066
    CALL core_slew.cpp_FUN_00550590     ; 004b7067
        ;   XREF to: 00550590 (UNCONDITIONAL_CALL)  ; undefined core_slew.cpp_FUN_00550590()
    MOV EAX,[0x01d5ba14]                ; 004b706c | DAT_01d5ba14
    MOV EDX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004b7071
    LEA EAX,[ESP + 0x68c]               ; 004b7078
    ADD EDX,0x20                        ; 004b707f
    ADD ESP,0x4                         ; 004b7082
    CMP EAX,EDX                         ; 004b7085
    JZ 0x004b70a6                       ; 004b7087
        ;   XREF to: 004b70a6 (CONDITIONAL_JUMP)  ; LAB_004b70a6
    MOV EAX,dword ptr [EDX]             ; 004b7089
    MOV dword ptr [ESP + 0x688],EAX     ; 004b708b
    MOV EAX,dword ptr [EDX + 0x4]       ; 004b7092
    MOV dword ptr [ESP + 0x68c],EAX     ; 004b7095
    MOV EAX,dword ptr [EDX + 0x8]       ; 004b709c
    MOV dword ptr [ESP + 0x690],EAX     ; 004b709f
    MOV EAX,[0x01d5ba14]                ; 004b70a6 | DAT_01d5ba14
        ;   Label: LAB_004b70a6
    MOV EDX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004b70ab
    LEA EAX,[ESP + 0x694]               ; 004b70b2
    ADD EDX,0x30                        ; 004b70b9
    CMP EAX,EDX                         ; 004b70bc
    JZ 0x004b70dd                       ; 004b70be
        ;   XREF to: 004b70dd (CONDITIONAL_JUMP)  ; LAB_004b70dd
    MOV EAX,dword ptr [EDX]             ; 004b70c0
    MOV dword ptr [ESP + 0x694],EAX     ; 004b70c2
    MOV EAX,dword ptr [EDX + 0x4]       ; 004b70c9
    MOV dword ptr [ESP + 0x698],EAX     ; 004b70cc
    MOV EAX,dword ptr [EDX + 0x8]       ; 004b70d3
    MOV dword ptr [ESP + 0x69c],EAX     ; 004b70d6
    LEA EAX,[ESP + 0x688]               ; 004b70dd
        ;   Label: LAB_004b70dd
    PUSH EAX                            ; 004b70e4
    CALL core_slew.cpp_FUN_005505e0     ; 004b70e5
        ;   XREF to: 005505e0 (UNCONDITIONAL_CALL)  ; undefined core_slew.cpp_FUN_005505e0()
    ADD ESP,0x4                         ; 004b70ea
    LEA EDX,[ESP + 0x694]               ; 004b70ed
    MOV EAX,[0x01d5ba14]                ; 004b70f4 | DAT_01d5ba14
    PUSH EDX                            ; 004b70f9
    LEA EDX,[ESP + 0x68c]               ; 004b70fa
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004b7101
    PUSH EDX                            ; 004b7108
    MOV ECX,dword ptr [EAX + 0x154]     ; 004b7109
    PUSH EAX                            ; 004b710f
    CALL dword ptr [ECX + 0x68]         ; 004b7110
    MOV AH,byte ptr [0x01c5fae4]        ; 004b7113 | DAT_01c5fae4
    ADD ESP,0xc                         ; 004b7119
    TEST AH,0x1                         ; 004b711c
    JZ 0x004b71e9                       ; 004b711f
        ;   XREF to: 004b71e9 (CONDITIONAL_JUMP)  ; LAB_004b71e9
    MOV EDX,dword ptr [0x01c5fae0]      ; 004b7125 | DAT_01c5fae0
    PUSH EDX                            ; 004b712b
    MOV ECX,dword ptr [0x01c5fadc]      ; 004b712c | DAT_01c5fadc
    PUSH ECX                            ; 004b7132
    PUSH 0x2038f4c                      ; 004b7133
    LEA ESI,[ESP + 0x6d4]               ; 004b7138
    LEA EDI,[ESP + 0x6b0]               ; 004b713f
    CALL core_dcamera.cpp_FUN_00449eb0  ; 004b7146
        ;   XREF to: 00449eb0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_00449eb0()
    LEA ESI,[ESP + 0x6d4]               ; 004b714b
    ADD ESP,0xc                         ; 004b7152
    LEA EAX,[ESP + 0x6a4]               ; 004b7155
    LEA EBX,[ESP + 0x6bc]               ; 004b715c
    PUSH EAX                            ; 004b7163
    MOVSD ES:EDI,ESI                    ; 004b7164
    MOVSD ES:EDI,ESI                    ; 004b7165
    MOVSD ES:EDI,ESI                    ; 004b7166
    PUSH 0x2038f4c                      ; 004b7167
    LEA ESI,[ESP + 0x6b8]               ; 004b716c
    LEA EDI,[ESP + 0x6ac]               ; 004b7173
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_00449f80 ; 004b717a
        ;   XREF to: 00449f80 (UNCONDITIONAL_CALL)  ; CVector3i * core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_00449f80(CDemonCamera * this_ptr, CVector3i * input_ptr, CVector3i * output_ptr)
    LEA ESI,[ESP + 0x6b8]               ; 004b717f
    ADD ESP,0x8                         ; 004b7186
    LEA EAX,[ESP + 0x6a4]               ; 004b7189
    MOVSD ES:EDI,ESI                    ; 004b7190
    MOVSD ES:EDI,ESI                    ; 004b7191
    MOVSD ES:EDI,ESI                    ; 004b7192
    FILD dword ptr [EAX]                ; 004b7193
    FMUL float ptr [0x005e06e4]         ; 004b7195 | DAT_005e06e4
    FSTP float ptr [EBX]                ; 004b719b
    FILD dword ptr [EAX + 0x4]          ; 004b719d
    FMUL float ptr [0x005e06e4]         ; 004b71a0 | DAT_005e06e4
    FSTP float ptr [EBX + 0x4]          ; 004b71a6
    FILD dword ptr [EAX + 0x8]          ; 004b71a9
    FMUL float ptr [0x005e06e4]         ; 004b71ac | DAT_005e06e4
    FSTP float ptr [EBX + 0x8]          ; 004b71b2
    MOV EAX,[0x01d5ba14]                ; 004b71b5 | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004b71ba
    LEA EDX,[EAX + 0x30]                ; 004b71c1
    PUSH EDX                            ; 004b71c4
    LEA EDX,[ESP + 0x6c0]               ; 004b71c5
    PUSH EDX                            ; 004b71cc
    MOV ECX,dword ptr [EAX + 0x154]     ; 004b71cd
    PUSH EAX                            ; 004b71d3
    CALL dword ptr [ECX + 0x68]         ; 004b71d4
    MOV DL,byte ptr [0x01c5fae4]        ; 004b71d7 | DAT_01c5fae4
    AND DL,0xfe                         ; 004b71dd
    ADD ESP,0xc                         ; 004b71e0
    MOV byte ptr [0x01c5fae4],DL        ; 004b71e3 | DAT_01c5fae4
    MOV EBX,dword ptr [EBP + 0x14]      ; 004b71e9
        ;   Label: LAB_004b71e9
    PUSH EBX                            ; 004b71ec
    CALL core_game.cpp_FUN_004b4440     ; 004b71ed
        ;   XREF to: 004b4440 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004b4440()
    ADD ESP,0x4                         ; 004b71f2
    MOV ESI,dword ptr [0x00603450]      ; 004b71f5 | g_CNetGamePtr
    PUSH ESI                            ; 004b71fb | g_CNetGameInstance
    CALL core_netgame.cpp_CNetGame_processServerFrame_FUN_00507790 ; 004b71fc
        ;   XREF to: 00507790 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_processServerFrame_FUN_00507790(CNetGame * this_ptr)
    MOV EAX,[0x005fe4b0]                ; 004b7201 | g_CFieldNotesPtr
    MOV EDI,dword ptr [EAX + 0x40]      ; 004b7206 | g_CFieldNotesInstance.is_displayed
    ADD ESP,0x4                         ; 004b7209
    TEST EDI,EDI                        ; 004b720c
    JZ 0x004b7a59                       ; 004b720e
        ;   XREF to: 004b7a59 (CONDITIONAL_JUMP)  ; LAB_004b7a59
    PUSH 0xffff                         ; 004b7214
        ;   Label: LAB_004b7214
    MOV ESI,dword ptr [0x005f2afc]      ; 004b7219 | DAT_005f2afc
    PUSH ESI                            ; 004b721f | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0 ; 004b7220
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004b7225
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b7228
    CMP dword ptr [EAX + 0x230],0x0     ; 004b722b
    JZ 0x004b728b                       ; 004b7232
        ;   XREF to: 004b728b (CONDITIONAL_JUMP)  ; LAB_004b728b
    CALL wincore_winrun.cpp_getTime_FUN_005806a0 ; 004b7234
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005806a0()
    MOV EDX,dword ptr [ESP + 0x6e8]     ; 004b7239
    SUB EAX,EDX                         ; 004b7240
    MOV dword ptr [ESP + 0x718],EAX     ; 004b7242
    FILD dword ptr [ESP + 0x718]        ; 004b7249
    FMUL double ptr [0x005c2578]        ; 004b7250 | DAT_005c2578
    MOV EAX,[0x005fe9dc]                ; 004b7256 | g_CGamePtr
    FMUL double ptr [0x005c2580]        ; 004b725b | DAT_005c2580
    FLD float ptr [EAX + 0x314]         ; 004b7261 | g_CGameInstance.delta_time_float
    FXCH                                ; 004b7267
    FMUL double ptr [0x005c2588]        ; 004b7269 | DAT_005c2588
    FDIVRP                              ; 004b726f
    SUB ESP,0x8                         ; 004b7271
    FSTP double ptr [ESP]               ; 004b7274
    PUSH 0x5c2404                       ; 004b7277 | = "screen paint : %3.2f ms\n"
    MOV ECX,dword ptr [0x005f1690]      ; 004b727c | g_CConsolePtr
    PUSH ECX                            ; 004b7282 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 004b7283
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    ADD ESP,0x10                        ; 004b7288
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b728b
        ;   Label: LAB_004b728b
    CMP dword ptr [EAX + 0x22c],0x0     ; 004b728e
    JNZ 0x004b79de                      ; 004b7295
        ;   XREF to: 004b79de (CONDITIONAL_JUMP)  ; LAB_004b79de
    CALL engine_special.cpp_FUN_00565820 ; 004b729b
        ;   XREF to: 00565820 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_00565820()
    MOV EAX,[0x005fe4b0]                ; 004b72a0 | g_CFieldNotesPtr
    CMP dword ptr [EAX + 0x40],0x0      ; 004b72a5 | g_CFieldNotesInstance.is_displayed
    JZ 0x004b7a87                       ; 004b72a9
        ;   XREF to: 004b7a87 (CONDITIONAL_JUMP)  ; LAB_004b7a87
    PUSH EAX                            ; 004b72af | g_CFieldNotesInstance
    CALL core_fldnotes.cpp_FUN_004abe00 ; 004b72b0
        ;   XREF to: 004abe00 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004abe00()
    ADD ESP,0x4                         ; 004b72b5
        ;   Label: LAB_004b72b5
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b72b8
        ;   Label: LAB_004b72b8
    CMP dword ptr [EAX + 0x234],0x0     ; 004b72bb
    JZ 0x004b7ad7                       ; 004b72c2
        ;   XREF to: 004b7ad7 (CONDITIONAL_JUMP)  ; LAB_004b7ad7
    PUSH 0x3e                           ; 004b72c8
        ;   Label: LAB_004b72c8
    MOV EAX,[0x00600284]                ; 004b72ca | DAT_00600284
    PUSH EAX                            ; 004b72cf | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 004b72d0 | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004b72d2
    ADD ESP,0x8                         ; 004b72d5
    TEST EAX,EAX                        ; 004b72d8
    JZ 0x004b7307                       ; 004b72da
        ;   XREF to: 004b7307 (CONDITIONAL_JUMP)  ; LAB_004b7307
    MOV EAX,[0x01d21e9c]                ; 004b72dc | DAT_01d21e9c
    INC EAX                             ; 004b72e1
    PUSH EAX                            ; 004b72e2
    PUSH 0x5c2428                       ; 004b72e3 | = "demon%d.pcx"
    PUSH 0x1d21ea0                      ; 004b72e8
    MOV [0x01d21e9c],EAX                ; 004b72ed | DAT_01d21e9c
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004b72f2
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004b72f7
    PUSH 0x1d21ea0                      ; 004b72fa
    CALL engine_pcx.c_saveScreenshotGeneral_FUN_0050da60 ; 004b72ff
        ;   XREF to: 0050da60 (UNCONDITIONAL_CALL)  ; void engine_pcx.c_saveScreenshotGeneral_FUN_0050da60(char * filename)
    ADD ESP,0x4                         ; 004b7304
    MOV EAX,[0x01d5ba14]                ; 004b7307 | DAT_01d5ba14
        ;   Label: LAB_004b7307
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004b730c
    ADD EAX,0x206e8                     ; 004b7313
    PUSH EAX                            ; 004b7318
    CALL core_inv.cpp_CInventory_renderAllItems_FUN_004dda90 ; 004b7319
        ;   XREF to: 004dda90 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_renderAllItems_FUN_004dda90(CInventory * this_ptr)
    ADD ESP,0x4                         ; 004b731e
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b7321
    CMP dword ptr [EAX + 0x328],0x0     ; 004b7324
    JZ 0x004b733c                       ; 004b732b
        ;   XREF to: 004b733c (CONDITIONAL_JUMP)  ; LAB_004b733c
    MOV EBX,dword ptr [0x00603b28]      ; 004b732d | g_CDemonSetPtr
    PUSH EBX                            ; 004b7333 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_renderLightDebugView_FUN_005373e0 ; 004b7334
        ;   XREF to: 005373e0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderLightDebugView_FUN_005373e0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004b7339
    MOV ESI,dword ptr [EBP + 0x14]      ; 004b733c
        ;   Label: LAB_004b733c
    PUSH ESI                            ; 004b733f
    CALL core_game.cpp_CGame_drawScreenBorder_FUN_004b45e0 ; 004b7340
        ;   XREF to: 004b45e0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_drawScreenBorder_FUN_004b45e0(CGame * this_ptr)
    MOV EDI,dword ptr [0x01d22c40]      ; 004b7345 | DAT_01d22c40
    ADD ESP,0x4                         ; 004b734b
    TEST EDI,EDI                        ; 004b734e
    JZ 0x004b73b0                       ; 004b7350
        ;   XREF to: 004b73b0 (CONDITIONAL_JUMP)  ; LAB_004b73b0
    PUSH 0x1d                           ; 004b7352
    MOV EAX,[0x00600284]                ; 004b7354 | DAT_00600284
    PUSH EAX                            ; 004b7359 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 004b735a | DAT_01d70a78
    CALL dword ptr [EDX]                ; 004b735c
    ADD ESP,0x8                         ; 004b735e
    TEST EAX,EAX                        ; 004b7361
    JZ 0x004b738e                       ; 004b7363
        ;   XREF to: 004b738e (CONDITIONAL_JUMP)  ; LAB_004b738e
    PUSH 0x2f                           ; 004b7365
    MOV EAX,[0x00600284]                ; 004b7367 | DAT_00600284
    PUSH EAX                            ; 004b736c | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 004b736d | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004b736f
    ADD ESP,0x8                         ; 004b7372
    TEST EAX,EAX                        ; 004b7375
    JZ 0x004b738e                       ; 004b7377
        ;   XREF to: 004b738e (CONDITIONAL_JUMP)  ; LAB_004b738e
    MOV EAX,[0x01d22c44]                ; 004b7379 | DAT_01d22c44
    TEST EAX,EAX                        ; 004b737e
    JZ 0x004b7af1                       ; 004b7380
        ;   XREF to: 004b7af1 (CONDITIONAL_JUMP)  ; LAB_004b7af1
    XOR EBX,EBX                         ; 004b7386
    MOV dword ptr [0x01d22c44],EBX      ; 004b7388 | DAT_01d22c44
    MOV ESI,dword ptr [0x01d22c48]      ; 004b738e | DAT_01d22c48
        ;   Label: LAB_004b738e
    TEST ESI,ESI                        ; 004b7394
    JLE 0x004b7b06                      ; 004b7396
        ;   XREF to: 004b7b06 (CONDITIONAL_JUMP)  ; LAB_004b7b06
    CMP ESI,dword ptr [0x01d22c4c]      ; 004b739c | DAT_01d22c4c
    JG 0x004b7b06                       ; 004b73a2
        ;   XREF to: 004b7b06 (CONDITIONAL_JUMP)  ; LAB_004b7b06
    XOR ESI,ESI                         ; 004b73a8
    MOV dword ptr [0x01d22c44],ESI      ; 004b73aa | DAT_01d22c44
    MOV EAX,[0x006039e0]                ; 004b73b0 | g_CScriptPtr
        ;   Label: LAB_004b73b0
    PUSH EAX                            ; 004b73b5
    CALL core_script.cpp_CScript_renderSubtitles_FUN_00528fc0 ; 004b73b6
        ;   XREF to: 00528fc0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_renderSubtitles_FUN_00528fc0(CScript * this_ptr)
    ADD ESP,0x4                         ; 004b73bb
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b73be
    PUSH EDX                            ; 004b73c1
    CALL core_game.cpp_CGame_renderOverlay_FUN_004b47d0 ; 004b73c2
        ;   XREF to: 004b47d0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_renderOverlay_FUN_004b47d0(CGame * this_ptr)
    ADD ESP,0x4                         ; 004b73c7
    MOV ECX,dword ptr [EBP + 0x14]      ; 004b73ca
    PUSH ECX                            ; 004b73cd
    CALL core_game.cpp_CGame_renderIrisFade_FUN_004bd7d0 ; 004b73ce
        ;   XREF to: 004bd7d0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_renderIrisFade_FUN_004bd7d0(CGame * this_ptr)
    ADD ESP,0x4                         ; 004b73d3
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b73d6
    MOV EBX,dword ptr [EAX + 0x208]     ; 004b73d9
    TEST EBX,EBX                        ; 004b73df
    JZ 0x004b7dc3                       ; 004b73e1
        ;   XREF to: 004b7dc3 (CONDITIONAL_JUMP)  ; LAB_004b7dc3
    PUSH 0x0                            ; 004b73e7
    LEA EAX,[ESP + 0x160]               ; 004b73e9
    PUSH EAX                            ; 004b73f0
    PUSH 0x0                            ; 004b73f1
    MOV EAX,[0x00603b28]                ; 004b73f3 | g_CDemonSetPtr
    PUSH 0x0                            ; 004b73f8
    ADD EAX,0x14d0f0                    ; 004b73fa
    PUSH EAX                            ; 004b73ff
    CALL engine_dosio.cpp_splitPath_FUN_00465e50 ; 004b7400
        ;   XREF to: 00465e50 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00465e50(char * full_path, char * drive, char * directory, char * filename, ...)
    MOV EAX,[0x00603b28]                ; 004b7405 | g_CDemonSetPtr
    ADD ESP,0x14                        ; 004b740a
    MOV EDX,dword ptr [EAX + 0x15aeb8]  ; 004b740d | g_CDemonSetInstance.selected_camera_index
    IMUL EDX,EDX,0x1a4                  ; 004b7413
    MOV ECX,dword ptr [EDX + EAX*0x1 + 0x150] ; 004b7419 | g_CDemonSetInstance.cameras[0].camera_group
    PUSH ECX                            ; 004b7420
    PUSH 0x2038f8c                      ; 004b7421
    LEA EAX,[ESP + 0x164]               ; 004b7426
    PUSH EAX                            ; 004b742d
    PUSH 0x5c2434                       ; 004b742e | = "Set: %s Camera: \"%s\" group %d"
    LEA EAX,[ESP + 0x46c]               ; 004b7433
    PUSH EAX                            ; 004b743a
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004b743b
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    MOV EAX,[0x005fba1c]                ; 004b7440 | DAT_005fba1c
    ADD ESP,0x14                        ; 004b7445
    SUB EAX,0x16                        ; 004b7448
    PUSH EAX                            ; 004b744b
    PUSH 0x0                            ; 004b744c
    LEA EAX,[ESP + 0x464]               ; 004b744e
    PUSH EAX                            ; 004b7455
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 004b7456
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004b745b
    MOV EBX,dword ptr [0x01d1bb18]      ; 004b745e | DAT_01d1bb18
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b7464
    FLD double ptr [0x01d1bb10]         ; 004b7467 | DAT_01d1bb10
    INC EBX                             ; 004b746d
    FLD float ptr [EAX + 0x314]         ; 004b746e
    MOV dword ptr [0x01d1bb18],EBX      ; 004b7474 | DAT_01d1bb18
    FXCH                                ; 004b747a
    FADD ST0,ST1                        ; 004b747c
    FILD dword ptr [0x01d1bb18]         ; 004b747e | DAT_01d1bb18
    FXCH                                ; 004b7484
    FSTP double ptr [0x01d1bb10]        ; 004b7486 | DAT_01d1bb10
    FDIV double ptr [0x01d1bb10]        ; 004b748c | DAT_01d1bb10
    MOV ESI,dword ptr [0x01ed3198]      ; 004b7492 | DAT_01ed3198
    PUSH ESI                            ; 004b7498
    FLD1                                ; 004b7499
    SUB ESP,0x8                         ; 004b749b
    FDIVRP ST2,ST0                      ; 004b749e
    FSTP double ptr [ESP]               ; 004b74a0
    SUB ESP,0x8                         ; 004b74a3
    FSTP double ptr [ESP]               ; 004b74a6
    PUSH 0x5c2452                       ; 004b74a9 | = "FR: %f, AVG: %f, PC: %d"
    LEA EAX,[ESP + 0x474]               ; 004b74ae
    PUSH EAX                            ; 004b74b5
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004b74b6
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    MOV EAX,[0x005fba1c]                ; 004b74bb | DAT_005fba1c
    ADD ESP,0x1c                        ; 004b74c0
    SUB EAX,0xb                         ; 004b74c3
    PUSH EAX                            ; 004b74c6
    PUSH 0x0                            ; 004b74c7
    LEA EAX,[ESP + 0x464]               ; 004b74c9
    PUSH EAX                            ; 004b74d0
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 004b74d1
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    MOV EAX,[0x01d5ba14]                ; 004b74d6 | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004b74db
    FLD float ptr [0x005c2590]          ; 004b74e2 | DAT_005c2590
    FLD float ptr [EAX + 0x34]          ; 004b74e8
    FMUL ST1                            ; 004b74eb
    ADD ESP,0xc                         ; 004b74ed
    FLD double ptr [0x005c2598]         ; 004b74f0 | DAT_005c2598
    FXCH                                ; 004b74f6
    FMUL ST1                            ; 004b74f8
    SUB ESP,0x8                         ; 004b74fa
    FSTP double ptr [ESP]               ; 004b74fd
    FLD float ptr [EAX + 0x38]          ; 004b7500
    FMUL ST2                            ; 004b7503
    FMUL ST1                            ; 004b7505
    SUB ESP,0x8                         ; 004b7507
    FSTP double ptr [ESP]               ; 004b750a
    FLD float ptr [EAX + 0x30]          ; 004b750d
    FMULP ST2                           ; 004b7510
    FMULP                               ; 004b7512
    SUB ESP,0x8                         ; 004b7514
    FSTP double ptr [ESP]               ; 004b7517
    SUB ESP,0x8                         ; 004b751a
    FLD float ptr [EAX + 0x28]          ; 004b751d
    FSTP double ptr [ESP]               ; 004b7520
    SUB ESP,0x8                         ; 004b7523
    FLD float ptr [EAX + 0x24]          ; 004b7526
    FSTP double ptr [ESP]               ; 004b7529
    SUB ESP,0x8                         ; 004b752c
    FLD float ptr [EAX + 0x20]          ; 004b752f
    FSTP double ptr [ESP]               ; 004b7532
    PUSH 0x5c246a                       ; 004b7535 | = "Hero : %4.2f,%4.2f,%4.2f xyz and %3.2..."
    LEA EAX,[ESP + 0x490]               ; 004b753a
    PUSH EAX                            ; 004b7541
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004b7542
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x38                        ; 004b7547
    PUSH 0x0                            ; 004b754a
    PUSH 0x0                            ; 004b754c
    LEA EAX,[ESP + 0x464]               ; 004b754e
    PUSH EAX                            ; 004b7555
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 004b7556
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004b755b
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b755e
    MOV EAX,dword ptr [EAX + 0x324]     ; 004b7561
    MOV EDI,dword ptr [EAX*0x4 + 0x5fe9e0] ; 004b7567 | PTR_DAT_005fe9e0
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b756e
    MOV EAX,dword ptr [EAX + 0x220]     ; 004b7571
    PUSH EDI                            ; 004b7577
    MOV EDX,dword ptr [EAX*0x4 + 0x5fe9e0] ; 004b7578 | PTR_DAT_005fe9e0
    PUSH EDX                            ; 004b757f
    PUSH 0x5c24a1                       ; 004b7580 | = "Slew : %s, Virtual Director : %s"
    LEA EAX,[ESP + 0x468]               ; 004b7585
    PUSH EAX                            ; 004b758c
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004b758d
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004b7592
    PUSH 0xb                            ; 004b7595
    PUSH 0x0                            ; 004b7597
    LEA EAX,[ESP + 0x464]               ; 004b7599
    PUSH EAX                            ; 004b75a0
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 004b75a1
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004b75a6
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b75a9
    MOV ECX,dword ptr [EAX + 0xa70]     ; 004b75ac
    TEST ECX,ECX                        ; 004b75b2
    JZ 0x004b7600                       ; 004b75b4
        ;   XREF to: 004b7600 (CONDITIONAL_JUMP)  ; LAB_004b7600
    SUB ESP,0x8                         ; 004b75b6
    FLD float ptr [ECX + 0x8]           ; 004b75b9
    FSTP double ptr [ESP]               ; 004b75bc
    SUB ESP,0x8                         ; 004b75bf
    FLD float ptr [ECX + 0x4]           ; 004b75c2
    FSTP double ptr [ESP]               ; 004b75c5
    SUB ESP,0x8                         ; 004b75c8
    FLD float ptr [ECX]                 ; 004b75cb
    FSTP double ptr [ESP]               ; 004b75cd
    PUSH 0x5c24c2                       ; 004b75d0 | = "Fudge: %g,%g,%g"
    LEA EAX,[ESP + 0x478]               ; 004b75d5
    PUSH EAX                            ; 004b75dc
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004b75dd
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    MOV EAX,[0x005fba1c]                ; 004b75e2 | DAT_005fba1c
    ADD ESP,0x20                        ; 004b75e7
    SUB EAX,0x4d                        ; 004b75ea
    PUSH EAX                            ; 004b75ed
    PUSH 0x0                            ; 004b75ee
    LEA EAX,[ESP + 0x464]               ; 004b75f0
    PUSH EAX                            ; 004b75f7
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 004b75f8
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004b75fd
    MOV EAX,ESP                         ; 004b7600
        ;   Label: LAB_004b7600
    PUSH EAX                            ; 004b7602
    LEA EAX,[ESP + 0x6e8]               ; 004b7603
    PUSH EAX                            ; 004b760a
    LEA EAX,[ESP + 0xc]                 ; 004b760b
    PUSH EAX                            ; 004b760f
    LEA EAX,[ESP + 0x6ec]               ; 004b7610
    PUSH EAX                            ; 004b7617
    LEA EAX,[ESP + 0x18]                ; 004b7618
    PUSH EAX                            ; 004b761c
    LEA EAX,[ESP + 0x6f0]               ; 004b761d
    PUSH EAX                            ; 004b7624
    CALL sound_sndmain.cpp_getSoundMemoryStats_FUN_00557840 ; 004b7625
        ;   XREF to: 00557840 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_getSoundMemoryStats_FUN_00557840(int * out_referenced_count, int * out_total_bytes_referenced, int * out_unreferenced_count, int * out_total_bytes_unreferenced, ...)
    ADD ESP,0x18                        ; 004b762a
    MOV EAX,dword ptr [ESP]             ; 004b762d
    MOV dword ptr [ESP + 0x718],EAX     ; 004b7630
    FLD double ptr [0x005c25a0]         ; 004b7637 | DAT_005c25a0
    FILD dword ptr [ESP + 0x718]        ; 004b763d
    FMUL ST1                            ; 004b7644
    SUB ESP,0x8                         ; 004b7646
    FSTP double ptr [ESP]               ; 004b7649
    MOV EAX,dword ptr [ESP + 0x10]      ; 004b764c
    MOV EBX,dword ptr [ESP + 0xc]       ; 004b7650
    ADD EAX,EBX                         ; 004b7654
    MOV dword ptr [ESP + 0x720],EAX     ; 004b7656
    FILD dword ptr [ESP + 0x720]        ; 004b765d
    SUB ESP,0x8                         ; 004b7664
    MOV dword ptr [ESP + 0x728],EBX     ; 004b7667
    FMUL ST1                            ; 004b766e
    FILD dword ptr [ESP + 0x728]        ; 004b7670
    FMUL ST2                            ; 004b7677
    FXCH                                ; 004b7679
    FSTP double ptr [ESP]               ; 004b767b
    SUB ESP,0x8                         ; 004b767e
    FSTP double ptr [ESP]               ; 004b7681
    MOV EAX,dword ptr [ESP + 0x20]      ; 004b7684
    MOV ESI,dword ptr [ESP + 0x6f8]     ; 004b7688
    MOV dword ptr [ESP + 0x730],EAX     ; 004b768f
    PUSH ESI                            ; 004b7696
    FILD dword ptr [ESP + 0x734]        ; 004b7697
    FMULP                               ; 004b769e
    SUB ESP,0x8                         ; 004b76a0
    FSTP double ptr [ESP]               ; 004b76a3
    MOV EDI,dword ptr [ESP + 0x700]     ; 004b76a6
    PUSH EDI                            ; 004b76ad
    CALL sound_sndmain.cpp_countActiveSfx_FUN_00556f80 ; 004b76ae
        ;   XREF to: 00556f80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_countActiveSfx_FUN_00556f80()
    PUSH EAX                            ; 004b76b3
    PUSH 0x5c24d2                       ; 004b76b4 | = "SFX: %d Samples: Active: %d/%.1fk Ava..."
    LEA EAX,[ESP + 0x48c]               ; 004b76b9
    PUSH EAX                            ; 004b76c0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004b76c1
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    MOV EAX,[0x005fba1c]                ; 004b76c6 | DAT_005fba1c
    ADD ESP,0x34                        ; 004b76cb
    SUB EAX,0x42                        ; 004b76ce
    PUSH EAX                            ; 004b76d1
    PUSH 0x0                            ; 004b76d2
    LEA EAX,[ESP + 0x464]               ; 004b76d4
    PUSH EAX                            ; 004b76db
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 004b76dc
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004b76e1
    LEA EAX,[ESP + 0x45c]               ; 004b76e4
    PUSH EAX                            ; 004b76eb
    CALL engine_texture.cpp_getTextureCacheStats_FUN_0056acc0 ; 004b76ec
        ;   XREF to: 0056acc0 (UNCONDITIONAL_CALL)  ; void engine_texture.cpp_getTextureCacheStats_FUN_0056acc0(char * output_buffer)
    MOV EAX,[0x005fba1c]                ; 004b76f1 | DAT_005fba1c
    ADD ESP,0x4                         ; 004b76f6
    SUB EAX,0x37                        ; 004b76f9
    PUSH EAX                            ; 004b76fc
    PUSH 0x0                            ; 004b76fd
    LEA EAX,[ESP + 0x464]               ; 004b76ff
    PUSH EAX                            ; 004b7706
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 004b7707
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004b770c
    LEA EAX,[ESP + 0x45c]               ; 004b770f
    PUSH EAX                            ; 004b7716
    CALL core_skeleton.cpp_FUN_00550310 ; 004b7717
        ;   XREF to: 00550310 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_00550310(char * output_buffer)
    MOV EAX,[0x005fba1c]                ; 004b771c | DAT_005fba1c
    ADD ESP,0x4                         ; 004b7721
    SUB EAX,0x2c                        ; 004b7724
    PUSH EAX                            ; 004b7727
    PUSH 0x0                            ; 004b7728
    LEA EAX,[ESP + 0x464]               ; 004b772a
    PUSH EAX                            ; 004b7731
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 004b7732
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    MOV EAX,[0x005fba1c]                ; 004b7737 | DAT_005fba1c
    ADD ESP,0xc                         ; 004b773c
    SUB EAX,0x21                        ; 004b773f
    PUSH EAX                            ; 004b7742
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b7743
    PUSH 0x0                            ; 004b7746
    ADD EAX,0xf4                        ; 004b7748
    PUSH EAX                            ; 004b774d
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 004b774e
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    MOV EAX,[0x02cf5fcc]                ; 004b7753 | DAT_02cf5fcc
    ADD ESP,0xc                         ; 004b7758
    TEST EAX,EAX                        ; 004b775b
    JZ 0x004b77d6                       ; 004b775d
        ;   XREF to: 004b77d6 (CONDITIONAL_JUMP)  ; LAB_004b77d6
    PUSH 0x400                          ; 004b775f
    CALL engine_special.cpp_FUN_005664c0 ; 004b7764
        ;   XREF to: 005664c0 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_005664c0()
    ADD ESP,0x4                         ; 004b7769
    PUSH EAX                            ; 004b776c
    PUSH 0x200                          ; 004b776d
    CALL engine_special.cpp_FUN_005664c0 ; 004b7772
        ;   XREF to: 005664c0 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_005664c0()
    ADD ESP,0x4                         ; 004b7777
    PUSH EAX                            ; 004b777a
    PUSH 0x100                          ; 004b777b
    CALL engine_special.cpp_FUN_005664c0 ; 004b7780
        ;   XREF to: 005664c0 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_005664c0()
    ADD ESP,0x4                         ; 004b7785
    PUSH EAX                            ; 004b7788
    PUSH 0x80                           ; 004b7789
    CALL engine_special.cpp_FUN_005664c0 ; 004b778e
        ;   XREF to: 005664c0 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_005664c0()
    ADD ESP,0x4                         ; 004b7793
    PUSH EAX                            ; 004b7796
    PUSH 0x40                           ; 004b7797
    CALL engine_special.cpp_FUN_005664c0 ; 004b7799
        ;   XREF to: 005664c0 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_005664c0()
    ADD ESP,0x4                         ; 004b779e
    PUSH EAX                            ; 004b77a1
    PUSH 0x20                           ; 004b77a2
    CALL engine_special.cpp_FUN_005664c0 ; 004b77a4
        ;   XREF to: 005664c0 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_005664c0()
    ADD ESP,0x4                         ; 004b77a9
    PUSH EAX                            ; 004b77ac
    PUSH 0x5c2523                       ; 004b77ad | = "32:%d,64:%d,128:%d,256:%d,512:%d,1024:%d"
    LEA EAX,[ESP + 0x478]               ; 004b77b2
    PUSH EAX                            ; 004b77b9
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004b77ba
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x20                        ; 004b77bf
    PUSH 0x2c                           ; 004b77c2
    PUSH 0x0                            ; 004b77c4
    LEA EAX,[ESP + 0x464]               ; 004b77c6
    PUSH EAX                            ; 004b77cd
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 004b77ce
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004b77d3
    CMP dword ptr [0x01d22c50],0x0      ; 004b77d6 | DAT_01d22c50
        ;   Label: LAB_004b77d6
    JZ 0x004b7830                       ; 004b77dd
        ;   XREF to: 004b7830 (CONDITIONAL_JUMP)  ; LAB_004b7830
    CALL sound_sndmain.cpp_getFirstActiveSfx_FUN_00556e80 ; 004b77df
        ;   XREF to: 00556e80 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_getFirstActiveSfx_FUN_00556e80()
    MOV ESI,0x37                        ; 004b77e4
    MOV EBX,EAX                         ; 004b77e9
    TEST EAX,EAX                        ; 004b77eb
    JZ 0x004b7830                       ; 004b77ed
        ;   XREF to: 004b7830 (CONDITIONAL_JUMP)  ; LAB_004b7830
    LEA EAX,[ESP + 0xc]                 ; 004b77ef
        ;   Label: LAB_004b77ef
    PUSH EAX                            ; 004b77f3
    CALL sound_sndmain.cpp_CSfxSample_init_FUN_00555840 ; 004b77f4
        ;   XREF to: 00555840 (UNCONDITIONAL_CALL)  ; CSfxSample * sound_sndmain.cpp_CSfxSample_init_FUN_00555840(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 004b77f9
    LEA EAX,[ESP + 0xc]                 ; 004b77fc
    PUSH EAX                            ; 004b7800
    PUSH EBX                            ; 004b7801
    CALL sound_sndmain.cpp_getSfxSampleInfo_FUN_00556780 ; 004b7802
        ;   XREF to: 00556780 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getSfxSampleInfo_FUN_00556780(uint sfx_handle, CSfxSample * output_buffer)
    ADD ESP,0x8                         ; 004b7807
    TEST EAX,EAX                        ; 004b780a
    JZ 0x004b7821                       ; 004b780c
        ;   XREF to: 004b7821 (CONDITIONAL_JUMP)  ; LAB_004b7821
    LEA EAX,[ESP + 0xc]                 ; 004b780e
    PUSH EAX                            ; 004b7812
    PUSH ESI                            ; 004b7813
    PUSH 0x0                            ; 004b7814
    CALL engine_2d.c_drawTextXY_FUN_00402140 ; 004b7816
        ;   XREF to: 00402140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextXY_FUN_00402140(int x, int y, char * text)
    ADD ESI,0xb                         ; 004b781b
    ADD ESP,0xc                         ; 004b781e
    PUSH EBX                            ; 004b7821
        ;   Label: LAB_004b7821
    CALL sound_sndmain.cpp_FUN_00556ec0 ; 004b7822
        ;   XREF to: 00556ec0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556ec0()
    ADD ESP,0x4                         ; 004b7827
    MOV EBX,EAX                         ; 004b782a
    TEST EAX,EAX                        ; 004b782c
    JNZ 0x004b77ef                      ; 004b782e
        ;   XREF to: 004b77ef (CONDITIONAL_JUMP)  ; LAB_004b77ef
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b7830
        ;   Label: LAB_004b7830
    CMP dword ptr [EAX + 0x1fc],0x0     ; 004b7833
    JZ 0x004b784b                       ; 004b783a
        ;   XREF to: 004b784b (CONDITIONAL_JUMP)  ; LAB_004b784b
    MOV EBX,dword ptr [0x005fba60]      ; 004b783c | DAT_005fba60
    PUSH EBX                            ; 004b7842
    CALL core_event.cpp_CEventList_render_FUN_00491bf0 ; 004b7843
        ;   XREF to: 00491bf0 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_render_FUN_00491bf0(CEventList * this_ptr)
    ADD ESP,0x4                         ; 004b7848
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b784b
        ;   Label: LAB_004b784b
    CMP dword ptr [EAX + 0x200],0x0     ; 004b784e
    JZ 0x004b7883                       ; 004b7855
        ;   XREF to: 004b7883 (CONDITIONAL_JUMP)  ; LAB_004b7883
    CMP dword ptr [EAX + 0x328],0x0     ; 004b7857
    JZ 0x004b7883                       ; 004b785e
        ;   XREF to: 004b7883 (CONDITIONAL_JUMP)  ; LAB_004b7883
    MOV EAX,[0x005fba1c]                ; 004b7860 | DAT_005fba1c
    DEC EAX                             ; 004b7865
    PUSH EAX                            ; 004b7866
    MOV EAX,[0x005fba18]                ; 004b7867 | DAT_005fba18
    DEC EAX                             ; 004b786c
    PUSH EAX                            ; 004b786d
    PUSH 0xf0                           ; 004b786e
    PUSH 0x0                            ; 004b7873
    MOV EAX,[0x006039e0]                ; 004b7875 | g_CScriptPtr
    PUSH EAX                            ; 004b787a
    CALL core_script.cpp_CScript_renderEditor_FUN_00529210 ; 004b787b
        ;   XREF to: 00529210 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_renderEditor_FUN_00529210(CScript * this_ptr, int left, int top, int right, ...)
    ADD ESP,0x14                        ; 004b7880
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b7883
        ;   Label: LAB_004b7883
    CMP dword ptr [EAX + 0x21c],0x0     ; 004b7886
    JZ 0x004b78c1                       ; 004b788d
        ;   XREF to: 004b78c1 (CONDITIONAL_JUMP)  ; LAB_004b78c1
    LEA EAX,[ESP + 0x25c]               ; 004b788f
    PUSH EAX                            ; 004b7896
    MOV ECX,dword ptr [0x005fb140]      ; 004b7897 | g_CEditorToolsPtr
    PUSH ECX                            ; 004b789d
    CALL shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004819e0 ; 004b789e
        ;   XREF to: 004819e0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004819e0(CEditorTools * this_ptr, char * output_buffer)
    MOV EAX,[0x005fba1c]                ; 004b78a3 | DAT_005fba1c
    ADD ESP,0x8                         ; 004b78a8
    SUB EAX,0x42                        ; 004b78ab
    PUSH EAX                            ; 004b78ae
    PUSH 0x0                            ; 004b78af
    LEA EAX,[ESP + 0x264]               ; 004b78b1
    PUSH EAX                            ; 004b78b8
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 004b78b9
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004b78be
    MOV EAX,[0x01d5ba14]                ; 004b78c1 | DAT_01d5ba14
        ;   Label: LAB_004b78c1
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004b78c6
    PUSH EAX                            ; 004b78cd
    MOV EDX,dword ptr [EAX + 0x154]     ; 004b78ce
    CALL dword ptr [EDX + 0x10c]        ; 004b78d4
    ADD ESP,0x4                         ; 004b78da
    CMP EAX,0x2                         ; 004b78dd
    JNZ 0x004b7912                      ; 004b78e0
        ;   XREF to: 004b7912 (CONDITIONAL_JUMP)  ; LAB_004b7912
    PUSH 0x5c254c                       ; 004b78e2 | = "You're dead.  Game over."
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b78e7
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b78ec
    LEA EDI,[ESP + 0x35c]               ; 004b78ef
    MOV ESI,EAX                         ; 004b78f6
    PUSH EDI                            ; 004b78f8
    MOV AL,byte ptr [ESI]               ; 004b78f9
        ;   Label: LAB_004b78f9
    MOV byte ptr [EDI],AL               ; 004b78fb
    CMP AL,0x0                          ; 004b78fd
    JZ 0x004b7911                       ; 004b78ff
        ;   XREF to: 004b7911 (CONDITIONAL_JUMP)  ; LAB_004b7911
    MOV AL,byte ptr [ESI + 0x1]         ; 004b7901
    ADD ESI,0x2                         ; 004b7904
    MOV byte ptr [EDI + 0x1],AL         ; 004b7907
    ADD EDI,0x2                         ; 004b790a
    CMP AL,0x0                          ; 004b790d
    JNZ 0x004b78f9                      ; 004b790f
        ;   XREF to: 004b78f9 (CONDITIONAL_JUMP)  ; LAB_004b78f9
    POP EDI                             ; 004b7911
        ;   Label: LAB_004b7911
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b7912
        ;   Label: LAB_004b7912
    CMP dword ptr [EAX + 0xb7c],0x0     ; 004b7915
    JZ 0x004b7927                       ; 004b791c
        ;   XREF to: 004b7927 (CONDITIONAL_JUMP)  ; LAB_004b7927
    PUSH EAX                            ; 004b791e
    CALL core_game.cpp_FUN_004b51e0     ; 004b791f
        ;   XREF to: 004b51e0 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004b51e0()
    ADD ESP,0x4                         ; 004b7924
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b7927
        ;   Label: LAB_004b7927
    CMP dword ptr [EAX + 0x330],0x0     ; 004b792a
    JZ 0x004b7941                       ; 004b7931
        ;   XREF to: 004b7941 (CONDITIONAL_JUMP)  ; LAB_004b7941
    MOV EAX,[0x005f1690]                ; 004b7933 | g_CConsolePtr
    PUSH EAX                            ; 004b7938 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_render_FUN_00442250 ; 004b7939
        ;   XREF to: 00442250 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_render_FUN_00442250(CConsole * this_ptr)
    ADD ESP,0x4                         ; 004b793e
    MOV EAX,[0x01d22204]                ; 004b7941 | g_CPickList
        ;   Label: LAB_004b7941
    TEST EAX,EAX                        ; 004b7946
    JLE 0x004b7957                      ; 004b7948
        ;   XREF to: 004b7957 (CONDITIONAL_JUMP)  ; LAB_004b7957
    PUSH 0x1d22204                      ; 004b794a | g_CPickList
    CALL shape_edittool.cpp_CPickList_renderDialog_FUN_004843d0 ; 004b794f
        ;   XREF to: 004843d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_renderDialog_FUN_004843d0(CPickList * this_ptr)
    ADD ESP,0x4                         ; 004b7954
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b7957
        ;   Label: LAB_004b7957
    CMP dword ptr [EAX + 0x220],0x0     ; 004b795a
    JZ 0x004b7974                       ; 004b7961
        ;   XREF to: 004b7974 (CONDITIONAL_JUMP)  ; LAB_004b7974
    PUSH 0x0                            ; 004b7963
    MOV ECX,dword ptr [0x005fb140]      ; 004b7965 | g_CEditorToolsPtr
    PUSH ECX                            ; 004b796b
    CALL shape_edittool.cpp_FUN_00480410 ; 004b796c
        ;   XREF to: 00480410 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00480410()
    ADD ESP,0x8                         ; 004b7971
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b7974
        ;   Label: LAB_004b7974
    CMP dword ptr [EAX + 0xd4],0x3      ; 004b7977
    JNZ 0x004b79aa                      ; 004b797e
        ;   XREF to: 004b79aa (CONDITIONAL_JUMP)  ; LAB_004b79aa
    PUSH 0x5c2565                       ; 004b7980 | = "MouseControlMode"
    MOV ESI,dword ptr [0x005fba60]      ; 004b7985 | DAT_005fba60
    PUSH ESI                            ; 004b798b
    CALL core_event.cpp_CEventList_executeCommands_FUN_0048c150 ; 004b798c
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0048c150(CEventList * this_ptr, char * commands)
    MOV EDI,dword ptr [0x01d22b48]      ; 004b7991 | DAT_01d22b48
    ADD ESP,0x8                         ; 004b7997
    TEST EDI,EDI                        ; 004b799a
    JL 0x004b79aa                       ; 004b799c
        ;   XREF to: 004b79aa (CONDITIONAL_JUMP)  ; LAB_004b79aa
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b799e
    PUSH EAX                            ; 004b79a1
    CALL core_game.cpp_FUN_004c4a10     ; 004b79a2
        ;   XREF to: 004c4a10 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004c4a10()
    ADD ESP,0x4                         ; 004b79a7
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b79aa
        ;   Label: LAB_004b79aa
    MOV ESI,dword ptr [EBP + 0x14]      ; 004b79ad
    MOV ECX,dword ptr [EDX + 0x268]     ; 004b79b0
    MOV ESI,dword ptr [ESI + 0x264]     ; 004b79b6
    OR ESI,ECX                          ; 004b79bc
    JNZ 0x004b79ce                      ; 004b79be
        ;   XREF to: 004b79ce (CONDITIONAL_JUMP)  ; LAB_004b79ce
    CMP dword ptr [0x01d22c64],0x0      ; 004b79c0 | DAT_01d22c64
    JZ 0x004b79ce                       ; 004b79c7
        ;   XREF to: 004b79ce (CONDITIONAL_JUMP)  ; LAB_004b79ce
    CALL engine_special.cpp_clearScreen_FUN_00560d70 ; 004b79c9
        ;   XREF to: 00560d70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_00560d70()
    PUSH 0x0                            ; 004b79ce
        ;   Label: LAB_004b79ce
    MOV dword ptr [0x01d22c64],ESI      ; 004b79d0 | DAT_01d22c64
    CALL engine_special.cpp_unlockFrame_FUN_00565870 ; 004b79d6
        ;   XREF to: 00565870 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_unlockFrame_FUN_00565870(int clear_lock_flag)
    ADD ESP,0x4                         ; 004b79db
    CMP dword ptr [ESP + 0x6ec],0x0     ; 004b79de
        ;   Label: LAB_004b79de
    JZ 0x004b6fcd                       ; 004b79e6
        ;   XREF to: 004b6fcd (CONDITIONAL_JUMP)  ; LAB_004b6fcd
    CALL wincore_wddvmem.cpp_closeScreenDevice_FUN_0057a4b0 ; 004b79ec
        ;   XREF to: 0057a4b0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_closeScreenDevice_FUN_0057a4b0()
    MOV ESP,EBP                         ; 004b79f1
    POP EBP                             ; 004b79f3
    POP EDI                             ; 004b79f4
    POP ESI                             ; 004b79f5
    POP EBX                             ; 004b79f6
    RET                                 ; 004b79f7
    CMP dword ptr [EAX + 0x32c],0x0     ; 004b79f8
        ;   Label: LAB_004b79f8
    JNZ 0x004b7019                      ; 004b79ff
        ;   XREF to: 004b7019 (CONDITIONAL_JUMP)  ; LAB_004b7019
    JMP 0x004b701e                      ; 004b7a05
        ;   XREF to: 004b701e (UNCONDITIONAL_JUMP)  ; LAB_004b701e
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b7a0a
        ;   Label: LAB_004b7a0a
    CMP dword ptr [EAX + 0x264],0x0     ; 004b7a0d
    JNZ 0x004b702d                      ; 004b7a14
        ;   XREF to: 004b702d (CONDITIONAL_JUMP)  ; LAB_004b702d
    CMP dword ptr [0x007dffb4],0x0      ; 004b7a1a | DAT_007dffb4
    JNZ 0x004b702d                      ; 004b7a21
        ;   XREF to: 004b702d (CONDITIONAL_JUMP)  ; LAB_004b702d
    PUSH 0x1                            ; 004b7a27
    MOV EDX,dword ptr [0x00603b28]      ; 004b7a29 | g_CDemonSetPtr
    PUSH EDX                            ; 004b7a2f | g_CDemonSetInstance
    CALL core_set.cpp_FUN_00535da0      ; 004b7a30
        ;   XREF to: 00535da0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_00535da0(CDemonSet * this_ptr, int skip_prerender)
    ADD ESP,0x8                         ; 004b7a35
    JMP 0x004b702d                      ; 004b7a38
        ;   XREF to: 004b702d (UNCONDITIONAL_JUMP)  ; LAB_004b702d
    PUSH EAX                            ; 004b7a3d
        ;   Label: LAB_004b7a3d
    CALL core_game.cpp_CGame_process_FUN_004bf4b0 ; 004b7a3e
        ;   XREF to: 004bf4b0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_process_FUN_004bf4b0(CGame * this_ptr)
    ADD ESP,0x4                         ; 004b7a43
    MOV EAX,[0x006045f8]                ; 004b7a46 | DAT_006045f8
    PUSH EAX                            ; 004b7a4b
    CALL core_sound.cpp_CSound_process_FUN_0055ff40 ; 004b7a4c
        ;   XREF to: 0055ff40 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_process_FUN_0055ff40(CSound * this_ptr)
    ADD ESP,0x4                         ; 004b7a51
    JMP 0x004b71e9                      ; 004b7a54
        ;   XREF to: 004b71e9 (UNCONDITIONAL_JUMP)  ; LAB_004b71e9
    CMP dword ptr [EBX + 0x264],0x0     ; 004b7a59
        ;   Label: LAB_004b7a59
    JNZ 0x004b7214                      ; 004b7a60
        ;   XREF to: 004b7214 (CONDITIONAL_JUMP)  ; LAB_004b7214
    CMP dword ptr [0x007dffb4],0x0      ; 004b7a66 | DAT_007dffb4
    JNZ 0x004b7214                      ; 004b7a6d
        ;   XREF to: 004b7214 (CONDITIONAL_JUMP)  ; LAB_004b7214
    MOV EBX,dword ptr [0x00603b28]      ; 004b7a73 | g_CDemonSetPtr
    PUSH EBX                            ; 004b7a79 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_renderStaticLights_FUN_00535a80 ; 004b7a7a
        ;   XREF to: 00535a80 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderStaticLights_FUN_00535a80(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004b7a7f
    JMP 0x004b7214                      ; 004b7a82
        ;   XREF to: 004b7214 (UNCONDITIONAL_JUMP)  ; LAB_004b7214
    MOV EDI,dword ptr [0x007dffb4]      ; 004b7a87 | DAT_007dffb4
        ;   Label: LAB_004b7a87
    TEST EDI,EDI                        ; 004b7a8d
    JNZ 0x004b7abb                      ; 004b7a8f
        ;   XREF to: 004b7abb (CONDITIONAL_JUMP)  ; LAB_004b7abb
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b7a91
    CMP dword ptr [EAX + 0x264],0x0     ; 004b7a94
    JNZ 0x004b7ac6                      ; 004b7a9b
        ;   XREF to: 004b7ac6 (CONDITIONAL_JUMP)  ; LAB_004b7ac6
    CMP dword ptr [EAX + 0x268],0x0     ; 004b7a9d
    JZ 0x004b72b8                       ; 004b7aa4
        ;   XREF to: 004b72b8 (CONDITIONAL_JUMP)  ; LAB_004b72b8
    MOV EBX,dword ptr [0x00603b28]      ; 004b7aaa | g_CDemonSetPtr
    PUSH EBX                            ; 004b7ab0 | g_CDemonSetInstance
    CALL core_set.cpp_FUN_00536990      ; 004b7ab1
        ;   XREF to: 00536990 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_FUN_00536990()
    JMP 0x004b72b5                      ; 004b7ab6
        ;   XREF to: 004b72b5 (UNCONDITIONAL_JUMP)  ; LAB_004b72b5
    PUSH EDI                            ; 004b7abb
        ;   Label: LAB_004b7abb
    MOV EDX,dword ptr [EDI]             ; 004b7abc
    CALL dword ptr [EDX + 0x18]         ; 004b7abe
    JMP 0x004b72b5                      ; 004b7ac1
        ;   XREF to: 004b72b5 (UNCONDITIONAL_JUMP)  ; LAB_004b72b5
    MOV ESI,dword ptr [0x00603b28]      ; 004b7ac6 | g_CDemonSetPtr
        ;   Label: LAB_004b7ac6
    PUSH ESI                            ; 004b7acc | g_CDemonSetInstance
    CALL core_set.cpp_FUN_005365c0      ; 004b7acd
        ;   XREF to: 005365c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_005365c0(CDemonSet * this_ptr)
    JMP 0x004b72b5                      ; 004b7ad2
        ;   XREF to: 004b72b5 (UNCONDITIONAL_JUMP)  ; LAB_004b72b5
    PUSH 0x5c241d                       ; 004b7ad7 | = "SPOOKHOUSE"
        ;   Label: LAB_004b7ad7
    CALL crt_env.c_getenv_FUN_005a5ec0  ; 004b7adc
        ;   XREF to: 005a5ec0 (UNCONDITIONAL_CALL)  ; char * crt_env.c_getenv_FUN_005a5ec0(char * name)
    ADD ESP,0x4                         ; 004b7ae1
    TEST EAX,EAX                        ; 004b7ae4
    JNZ 0x004b72c8                      ; 004b7ae6
        ;   XREF to: 004b72c8 (CONDITIONAL_JUMP)  ; LAB_004b72c8
    JMP 0x004b7307                      ; 004b7aec
        ;   XREF to: 004b7307 (UNCONDITIONAL_JUMP)  ; LAB_004b7307
    MOV ECX,0x1                         ; 004b7af1
        ;   Label: LAB_004b7af1
    MOV [0x01d22c4c],EAX                ; 004b7af6 | DAT_01d22c4c
    MOV dword ptr [0x01d22c44],ECX      ; 004b7afb | DAT_01d22c44
    JMP 0x004b738e                      ; 004b7b01
        ;   XREF to: 004b738e (UNCONDITIONAL_JUMP)  ; LAB_004b738e
    CMP dword ptr [0x01d22c44],0x0      ; 004b7b06 | DAT_01d22c44
        ;   Label: LAB_004b7b06
    JZ 0x004b73b0                       ; 004b7b0d
        ;   XREF to: 004b73b0 (CONDITIONAL_JUMP)  ; LAB_004b73b0
    MOV EDX,dword ptr [0x01d22c4c]      ; 004b7b13 | DAT_01d22c4c
    PUSH EDX                            ; 004b7b19
    PUSH 0x5c21ac                       ; 004b7b1a | = "noc%05d.raw"
    LEA EAX,[ESP + 0x62c]               ; 004b7b1f
    PUSH EAX                            ; 004b7b26
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004b7b27
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004b7b2c
    LEA EAX,[ESP + 0x624]               ; 004b7b2f
    PUSH EAX                            ; 004b7b36
    PUSH 0x5c21b8                       ; 004b7b37 | = "Movie recording active: movie\\%s"
    LEA EAX,[ESP + 0x564]               ; 004b7b3c
    PUSH EAX                            ; 004b7b43
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004b7b44
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004b7b49
    PUSH 0x5c21d9                       ; 004b7b4c | DAT_005c21d9
    LEA EAX,[ESP + 0x628]               ; 004b7b51
    PUSH EAX                            ; 004b7b58
    PUSH 0x5c21dc                       ; 004b7b59 | = "movie"
    CALL engine_dosio.cpp_FUN_004659c0  ; 004b7b5e
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_004659c0(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004b7b63
    MOV dword ptr [ESP + 0x6f8],EAX     ; 004b7b66
    TEST EAX,EAX                        ; 004b7b6d
    JZ 0x004b73b0                       ; 004b7b6f
        ;   XREF to: 004b73b0 (CONDITIONAL_JUMP)  ; LAB_004b73b0
    XOR ECX,ECX                         ; 004b7b75
    MOV EBX,dword ptr [0x005fe9f0]      ; 004b7b77 | DAT_005fe9f0
    MOV dword ptr [ESP + 0x6f4],ECX     ; 004b7b7d
    TEST EBX,EBX                        ; 004b7b84
    JLE 0x004b7d8d                      ; 004b7b86
        ;   XREF to: 004b7d8d (CONDITIONAL_JUMP)  ; LAB_004b7d8d
    XOR ESI,ESI                         ; 004b7b8c
        ;   Label: LAB_004b7b8c
    MOV EDI,dword ptr [0x005fe9ec]      ; 004b7b8e | DAT_005fe9ec
    MOV dword ptr [ESP + 0x6fc],ESI     ; 004b7b94
    TEST EDI,EDI                        ; 004b7b9b
    JLE 0x004b7d70                      ; 004b7b9d
        ;   XREF to: 004b7d70 (CONDITIONAL_JUMP)  ; LAB_004b7d70
    MOV EAX,dword ptr [ESP + 0x6f4]     ; 004b7ba3
    INC EAX                             ; 004b7baa
    MOV dword ptr [ESP + 0x6f0],EAX     ; 004b7bab
    MOV EDX,dword ptr [ESP + 0x6fc]     ; 004b7bb2
        ;   Label: LAB_004b7bb2
    MOV ECX,dword ptr [0x005fba18]      ; 004b7bb9 | DAT_005fba18
    IMUL EDX,ECX                        ; 004b7bbf
    MOV EBX,dword ptr [0x005fe9ec]      ; 004b7bc2 | DAT_005fe9ec
    MOV EAX,EDX                         ; 004b7bc8
    SAR EDX,0x1f                        ; 004b7bca
    IDIV EBX                            ; 004b7bcd
    MOV EDX,dword ptr [ESP + 0x6fc]     ; 004b7bcf
    INC EDX                             ; 004b7bd6
    IMUL EDX,ECX                        ; 004b7bd7
    MOV dword ptr [ESP + 0x704],EAX     ; 004b7bda
    MOV EAX,EDX                         ; 004b7be1
    SAR EDX,0x1f                        ; 004b7be3
    IDIV EBX                            ; 004b7be6
    MOV EDX,dword ptr [ESP + 0x6f4]     ; 004b7be8
    MOV dword ptr [ESP + 0x70c],EAX     ; 004b7bef
    IMUL EDX,dword ptr [0x005fba1c]     ; 004b7bf6 | DAT_005fba1c
    MOV ECX,dword ptr [0x005fe9f0]      ; 004b7bfd | DAT_005fe9f0
    MOV EAX,EDX                         ; 004b7c03
    SAR EDX,0x1f                        ; 004b7c05
    IDIV ECX                            ; 004b7c08
    MOV EBX,dword ptr [0x005fba1c]      ; 004b7c0a | DAT_005fba1c
    MOV EDX,dword ptr [ESP + 0x6f0]     ; 004b7c10
    IMUL EDX,EBX                        ; 004b7c17
    MOV ESI,dword ptr [0x005fe9f0]      ; 004b7c1a | DAT_005fe9f0
    MOV ECX,EAX                         ; 004b7c20
    MOV EAX,EDX                         ; 004b7c22
    SAR EDX,0x1f                        ; 004b7c24
    IDIV ESI                            ; 004b7c27
    XOR EDI,EDI                         ; 004b7c29
    MOV dword ptr [ESP + 0x714],EDI     ; 004b7c2b
    MOV dword ptr [ESP + 0x710],EDI     ; 004b7c32
    XOR EBX,EBX                         ; 004b7c39
    XOR ESI,ESI                         ; 004b7c3b
    CMP ECX,EAX                         ; 004b7c3d
    JGE 0x004b7ce7                      ; 004b7c3f
        ;   XREF to: 004b7ce7 (CONDITIONAL_JUMP)  ; LAB_004b7ce7
    SHL ECX,0x2                         ; 004b7c45
    SHL EAX,0x2                         ; 004b7c48
    MOV dword ptr [ESP + 0x708],ECX     ; 004b7c4b
    MOV dword ptr [ESP + 0x700],EAX     ; 004b7c52
    MOV EDX,dword ptr [ESP + 0x70c]     ; 004b7c59
        ;   Label: LAB_004b7c59
    MOV ECX,dword ptr [ESP + 0x704]     ; 004b7c60
    CMP ECX,EDX                         ; 004b7c67
    JGE 0x004b7cc7                      ; 004b7c69
        ;   XREF to: 004b7cc7 (CONDITIONAL_JUMP)  ; LAB_004b7cc7
    MOV EAX,dword ptr [ESP + 0x708]     ; 004b7c6b
    LEA EDX,[ECX*0x4 + 0x0]             ; 004b7c72
    MOV EAX,dword ptr [EAX + 0x1c5faec] ; 004b7c79 | DAT_01c5faec | DAT_01c5faf0
    ADD EDX,EAX                         ; 004b7c7f
    MOV EAX,dword ptr [EDX]             ; 004b7c81
        ;   Label: LAB_004b7c81
    MOV EDI,EAX                         ; 004b7c83
    SHR EDI,0x10                        ; 004b7c85
    AND EDI,0xff                        ; 004b7c88
    ADD EDX,0x4                         ; 004b7c8e
    ADD dword ptr [ESP + 0x710],EDI     ; 004b7c91
    MOV EDI,EAX                         ; 004b7c98
    INC ECX                             ; 004b7c9a
    SHR EDI,0x8                         ; 004b7c9b
    AND EAX,0xff                        ; 004b7c9e
    ADD EBX,EAX                         ; 004b7ca3
    AND EDI,0xff                        ; 004b7ca5
    MOV EAX,dword ptr [ESP + 0x714]     ; 004b7cab
    INC EAX                             ; 004b7cb2
    ADD ESI,EDI                         ; 004b7cb3
    MOV EDI,dword ptr [ESP + 0x70c]     ; 004b7cb5
    MOV dword ptr [ESP + 0x714],EAX     ; 004b7cbc
    CMP ECX,EDI                         ; 004b7cc3
    JL 0x004b7c81                       ; 004b7cc5
        ;   XREF to: 004b7c81 (CONDITIONAL_JUMP)  ; LAB_004b7c81
    MOV ECX,dword ptr [ESP + 0x708]     ; 004b7cc7
        ;   Label: LAB_004b7cc7
    ADD ECX,0x4                         ; 004b7cce
    MOV EDI,dword ptr [ESP + 0x700]     ; 004b7cd1
    MOV dword ptr [ESP + 0x708],ECX     ; 004b7cd8
    CMP ECX,EDI                         ; 004b7cdf
    JL 0x004b7c59                       ; 004b7ce1
        ;   XREF to: 004b7c59 (CONDITIONAL_JUMP)  ; LAB_004b7c59
    MOV EAX,dword ptr [ESP + 0x710]     ; 004b7ce7
        ;   Label: LAB_004b7ce7
    MOV EDX,EAX                         ; 004b7cee
    MOV ECX,dword ptr [ESP + 0x714]     ; 004b7cf0
    SAR EDX,0x1f                        ; 004b7cf7
    IDIV ECX                            ; 004b7cfa
    MOV dword ptr [ESP + 0x710],EAX     ; 004b7cfc
    MOV EDX,ESI                         ; 004b7d03
    MOV EAX,ESI                         ; 004b7d05
    SAR EDX,0x1f                        ; 004b7d07
    IDIV ECX                            ; 004b7d0a
    MOV ESI,EAX                         ; 004b7d0c
    MOV EDX,EBX                         ; 004b7d0e
    MOV EAX,EBX                         ; 004b7d10
    SAR EDX,0x1f                        ; 004b7d12
    IDIV ECX                            ; 004b7d15
    MOV EBX,EAX                         ; 004b7d17
    MOV EAX,dword ptr [ESP + 0x6f8]     ; 004b7d19
    PUSH EAX                            ; 004b7d20
    MOV EDX,dword ptr [ESP + 0x714]     ; 004b7d21
    PUSH EDX                            ; 004b7d28
    CALL crt_stdio.c_fputc_FUN_005a5d70 ; 004b7d29
        ;   XREF to: 005a5d70 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_005a5d70(int character, _FILE * file)
    ADD ESP,0x8                         ; 004b7d2e
    MOV ECX,dword ptr [ESP + 0x6f8]     ; 004b7d31
    PUSH ECX                            ; 004b7d38
    PUSH ESI                            ; 004b7d39
    CALL crt_stdio.c_fputc_FUN_005a5d70 ; 004b7d3a
        ;   XREF to: 005a5d70 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_005a5d70(int character, _FILE * file)
    ADD ESP,0x8                         ; 004b7d3f
    MOV ESI,dword ptr [ESP + 0x6f8]     ; 004b7d42
    PUSH ESI                            ; 004b7d49
    PUSH EBX                            ; 004b7d4a
    CALL crt_stdio.c_fputc_FUN_005a5d70 ; 004b7d4b
        ;   XREF to: 005a5d70 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_005a5d70(int character, _FILE * file)
    ADD ESP,0x8                         ; 004b7d50
    MOV EDI,dword ptr [ESP + 0x6fc]     ; 004b7d53
    INC EDI                             ; 004b7d5a
    MOV EDX,dword ptr [0x005fe9ec]      ; 004b7d5b | DAT_005fe9ec
    MOV dword ptr [ESP + 0x6fc],EDI     ; 004b7d61
    CMP EDI,EDX                         ; 004b7d68
    JL 0x004b7bb2                       ; 004b7d6a
        ;   XREF to: 004b7bb2 (CONDITIONAL_JUMP)  ; LAB_004b7bb2
    MOV EDI,dword ptr [ESP + 0x6f4]     ; 004b7d70
        ;   Label: LAB_004b7d70
    INC EDI                             ; 004b7d77
    MOV EDX,dword ptr [0x005fe9f0]      ; 004b7d78 | DAT_005fe9f0
    MOV dword ptr [ESP + 0x6f4],EDI     ; 004b7d7e
    CMP EDI,EDX                         ; 004b7d85
    JL 0x004b7b8c                       ; 004b7d87
        ;   XREF to: 004b7b8c (CONDITIONAL_JUMP)  ; LAB_004b7b8c
    MOV ECX,dword ptr [ESP + 0x6f8]     ; 004b7d8d
        ;   Label: LAB_004b7d8d
    PUSH ECX                            ; 004b7d94
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 004b7d95
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 004b7d9a
    PUSH 0x0                            ; 004b7d9d
    PUSH 0x0                            ; 004b7d9f
    LEA EAX,[ESP + 0x564]               ; 004b7da1
    PUSH EAX                            ; 004b7da8
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 004b7da9
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    MOV EBX,dword ptr [0x01d22c4c]      ; 004b7dae | DAT_01d22c4c
    INC EBX                             ; 004b7db4
    ADD ESP,0xc                         ; 004b7db5
    MOV dword ptr [0x01d22c4c],EBX      ; 004b7db8 | DAT_01d22c4c
    JMP 0x004b73b0                      ; 004b7dbe
        ;   XREF to: 004b73b0 (UNCONDITIONAL_JUMP)  ; LAB_004b73b0
    MOV dword ptr [0x01d1bb18],EBX      ; 004b7dc3 | DAT_01d1bb18
        ;   Label: LAB_004b7dc3
    MOV dword ptr [0x01d1bb10],EBX      ; 004b7dc9 | DAT_01d1bb10
    MOV dword ptr [0x01d1bb14],EBX      ; 004b7dcf | DAT_01d1bb14
    JMP 0x004b77d6                      ; 004b7dd5
        ;   XREF to: 004b77d6 (UNCONDITIONAL_JUMP)  ; LAB_004b77d6

