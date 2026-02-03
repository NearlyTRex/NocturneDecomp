; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_game_cpp_CGame_processFrame_FUN_004da100(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x62c]:1  local_62c
; undefined1       Stack[-0x4dc]:1  local_4dc
; undefined1       Stack[-0x4db]:1  local_4db
; undefined1       Stack[-0x3dc]:1  local_3dc
; undefined1       Stack[-0x2dc]:1  local_2dc
; undefined1       Stack[-0x1dc]:1  local_1dc
; undefined1       Stack[-0x114]:1  local_114
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined1       Stack[-0x94]:1  local_94
; undefined1       Stack[-0x88]:1  local_88
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined1       Stack[-0x4c]:1  local_4c
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
; undefined1       Stack[-0x10]:1  local_10
;
; XREF[1]:
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004db3bd
;
; Referenced Globals:
;   TerminatedCString s_noc_05d_raw_0062b201
;   TerminatedCString s_Movie_recording_active_m_0062b20d
;   TerminatedCString s_wb_0062b22e
;   TerminatedCString s_movie_0062b231
;   TerminatedCString s_core_game_cpp_0062b237
;   TerminatedCString s_screen_paint_3_2f_ms_0062b462
;   TerminatedCString s_SPOOKHOUSE_0062b47b
;   TerminatedCString s_demon_d_pcx_0062b486
;   TerminatedCString s_Camera_s_Group_d_0062b492
;   TerminatedCString s_FR_f_AVG_f_PC_d_0062b4a8
;   TerminatedCString s_Hero_4_2f_4_2f_4_2f_xyz__0062b4c0
;   TerminatedCString s_Slew_s_Virtual_Director__0062b4f7
;   TerminatedCString s_Fudge_g_g_g_0062b518
;   TerminatedCString s_SFX_d_Samples_Active_d_1_0062b528
;   TerminatedCString s_s_32_d_64_d_128_d_256_d__0062b579
;   ... and 62 more
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
;   core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
;   core_event.cpp_CEventList_FUN_004addf0
;   core_game.cpp_CGame_drawScreenBorder_FUN_004d7e50
;   core_game.cpp_CGame_FUN_004e0aa0
;   core_game.cpp_CGame_process_FUN_004e3190
;   core_game.cpp_CGame_renderOverlay_FUN_004d8040
;   core_game.cpp_CGame_showCustomizableKeys_FUN_004d89d0
;   core_game.cpp_CGame_slamDT_FUN_004e3080
;   core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
;   core_inv.cpp_CInventory_renderAllItems_FUN_00500690
;   core_netgame.cpp_CNetGame_processClientFrame_FUN_005435a0
;   core_netgame.cpp_CNetGame_processServerFrame_FUN_00543150
;   core_script.cpp_CScript_FUN_00559b20
;   core_script.cpp_CScript_FUN_00559d80
;   ... and 38 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004da100
        ;   Label: core_game.cpp_CGame_processFrame_FUN_004da100
    PUSH ESI                            ; 004da101
    PUSH EDI                            ; 004da102
    PUSH EBP                            ; 004da103
    MOV EBP,ESP                         ; 004da104
    SUB ESP,0x61c                       ; 004da106
    SUB EBP,0x7e                        ; 004da10c
    MOV EAX,dword ptr [EBP + 0x92]      ; 004da10f
    XOR EDX,EDX                         ; 004da115
    MOV ECX,dword ptr [EAX + 0x20c]     ; 004da117
    MOV dword ptr [EBP + 0x4e],EDX      ; 004da11d
    TEST ECX,ECX                        ; 004da120
    JNZ 0x004da1b4                      ; 004da122
        ;   XREF to: 004da1b4 (CONDITIONAL_JUMP)  ; LAB_004da1b4
    MOV EAX,dword ptr [EBP + 0x92]      ; 004da128
        ;   Label: LAB_004da128
    XOR EBX,EBX                         ; 004da12e
    MOV ESI,dword ptr [EAX + 0xcc]      ; 004da130
    MOV dword ptr [0x030e56b8],EBX      ; 004da136 | g_RenderedTriangleCount
    TEST ESI,ESI                        ; 004da13c
    JNZ 0x004da152                      ; 004da13e
        ;   XREF to: 004da152 (CONDITIONAL_JUMP)  ; LAB_004da152
    MOV EAX,[0x00680a00]                ; 004da140 | g_CNetGameInstance | g_CNetGamePtr
    CMP dword ptr [EAX + 0x168],0x0     ; 004da145 | DAT_02f7c8a8
    JZ 0x004da1cc                       ; 004da14c
        ;   XREF to: 004da1cc (CONDITIONAL_JUMP)  ; LAB_004da1cc
    MOV EDX,dword ptr [0x00680a00]      ; 004da152 | g_CNetGameInstance | g_CNetGamePtr
        ;   Label: LAB_004da152
    MOV EAX,dword ptr [EBP + 0x92]      ; 004da158
    PUSH EDX                            ; 004da15e | g_CNetGameInstance
    MOV dword ptr [EAX + 0x1fc],0x0     ; 004da15f
    CALL core_netgame.cpp_CNetGame_processClientFrame_FUN_005435a0 ; 004da169
        ;   XREF to: 005435a0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_processClientFrame_FUN_005435a0(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 004da16e
    MOV ECX,dword ptr [EBP + 0x92]      ; 004da171
    PUSH ECX                            ; 004da177
    CALL core_game.cpp_CGame_process_FUN_004e3190 ; 004da178
        ;   XREF to: 004e3190 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_process_FUN_004e3190(CGame * this_ptr)
    MOV EAX,dword ptr [EBP + 0x92]      ; 004da17d
    MOV EBX,dword ptr [EAX + 0xcc]      ; 004da183
    ADD ESP,0x4                         ; 004da189
    TEST EBX,EBX                        ; 004da18c
    JZ 0x004da1c1                       ; 004da18e
        ;   XREF to: 004da1c1 (CONDITIONAL_JUMP)  ; LAB_004da1c1
    PUSH 0x3e800000                     ; 004da190
    PUSH EAX                            ; 004da195
    CALL core_game.cpp_CGame_slamDT_FUN_004e3080 ; 004da196
        ;   XREF to: 004e3080 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_slamDT_FUN_004e3080(CGame * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004da19b
    MOV EAX,[0x00680a00]                ; 004da19e | g_CNetGameInstance | g_CNetGamePtr
        ;   Label: LAB_004da19e
    PUSH EAX                            ; 004da1a3 | g_CNetGameInstance
    CALL core_netgame.cpp_CNetGame_processServerFrame_FUN_00543150 ; 004da1a4
        ;   XREF to: 00543150 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_processServerFrame_FUN_00543150(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 004da1a9
    LEA ESP,[EBP + 0x7e]                ; 004da1ac
        ;   Label: LAB_004da1ac
    POP EBP                             ; 004da1af
    POP EDI                             ; 004da1b0
    POP ESI                             ; 004da1b1
    POP EBX                             ; 004da1b2
    RET                                 ; 004da1b3
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 004da1b4
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   Label: LAB_004da1b4
    MOV dword ptr [EBP + 0x4a],EAX      ; 004da1b9
    JMP 0x004da128                      ; 004da1bc
        ;   XREF to: 004da128 (UNCONDITIONAL_JUMP)  ; LAB_004da128
    PUSH EAX                            ; 004da1c1
        ;   Label: LAB_004da1c1
    CALL core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90 ; 004da1c2
        ;   XREF to: 004d7d90 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90(CGame * this_ptr)
    ADD ESP,0x4                         ; 004da1c7
    JMP 0x004da19e                      ; 004da1ca
        ;   XREF to: 004da19e (UNCONDITIONAL_JUMP)  ; LAB_004da19e
    CMP dword ptr [0x02d03e94],0x0      ; 004da1cc | g_UseExternalRenderer
        ;   Label: LAB_004da1cc
    JZ 0x004da1e1                       ; 004da1d3
        ;   XREF to: 004da1e1 (CONDITIONAL_JUMP)  ; LAB_004da1e1
    CALL wincore_wddvmem.cpp_openScreenDevice_FUN_005ed580 ; 004da1d5
        ;   XREF to: 005ed580 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_openScreenDevice_FUN_005ed580()
    MOV dword ptr [EBP + 0x4e],0x1      ; 004da1da
    MOV EAX,dword ptr [EBP + 0x92]      ; 004da1e1
        ;   Label: LAB_004da1e1
    CMP dword ptr [EAX + 0x278],0x0     ; 004da1e7
    JZ 0x004dab2f                       ; 004da1ee
        ;   XREF to: 004dab2f (CONDITIONAL_JUMP)  ; LAB_004dab2f
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 004da1f4
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_004da1f4
    MOV EAX,dword ptr [EBP + 0x92]      ; 004da1f9
        ;   Label: LAB_004da1f9
    CMP dword ptr [EAX + 0x240],0x0     ; 004da1ff
    JNZ 0x004da219                      ; 004da206
        ;   XREF to: 004da219 (CONDITIONAL_JUMP)  ; LAB_004da219
    PUSH 0x1                            ; 004da208
    MOV EDI,dword ptr [0x006810c8]      ; 004da20a | g_CDemonSetPtr
    PUSH EDI                            ; 004da210 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_FUN_0056c1a0 ; 004da211
        ;   XREF to: 0056c1a0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0056c1a0(CDemonSet * this_ptr)
    ADD ESP,0x8                         ; 004da216
    MOV EAX,[0x00680a00]                ; 004da219 | g_CNetGameInstance | g_CNetGamePtr
        ;   Label: LAB_004da219
    PUSH EAX                            ; 004da21e | g_CNetGameInstance
    CALL core_netgame.cpp_CNetGame_processClientFrame_FUN_005435a0 ; 004da21f
        ;   XREF to: 005435a0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_processClientFrame_FUN_005435a0(CNetGame * this_ptr)
    MOV EAX,dword ptr [EBP + 0x92]      ; 004da224
    MOV EDX,dword ptr [EAX + 0x1fc]     ; 004da22a
    ADD ESP,0x4                         ; 004da230
    TEST EDX,EDX                        ; 004da233
    JZ 0x004dab41                       ; 004da235
        ;   XREF to: 004dab41 (CONDITIONAL_JUMP)  ; LAB_004dab41
    LEA EAX,[EBP + -0x22]               ; 004da23b
    PUSH EAX                            ; 004da23e
    CALL core_slew.cpp_CSlew_init_FUN_005a2060 ; 004da23f
        ;   XREF to: 005a2060 (UNCONDITIONAL_CALL)  ; void core_slew.cpp_CSlew_init_FUN_005a2060(CSlew * this_ptr)
    MOV EAX,[0x02db87d0]                ; 004da244 | g_LocalHeroIndex
    MOV EDX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004da249 | g_HeroActors
    LEA EAX,[EBP + -0x22]               ; 004da250
    ADD EDX,0x20                        ; 004da253
    ADD ESP,0x4                         ; 004da256
    CMP EAX,EDX                         ; 004da259
    JZ 0x004da26e                       ; 004da25b
        ;   XREF to: 004da26e (CONDITIONAL_JUMP)  ; LAB_004da26e
    MOV EAX,dword ptr [EDX]             ; 004da25d
    MOV dword ptr [EBP + -0x22],EAX     ; 004da25f
    MOV EAX,dword ptr [EDX + 0x4]       ; 004da262
    MOV dword ptr [EBP + -0x1e],EAX     ; 004da265
    MOV EAX,dword ptr [EDX + 0x8]       ; 004da268
    MOV dword ptr [EBP + -0x1a],EAX     ; 004da26b
    MOV EAX,[0x02db87d0]                ; 004da26e | g_LocalHeroIndex
        ;   Label: LAB_004da26e
    MOV EDX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004da273 | g_HeroActors
    LEA EAX,[EBP + -0x16]               ; 004da27a
    ADD EDX,0x30                        ; 004da27d
    CMP EAX,EDX                         ; 004da280
    JZ 0x004da295                       ; 004da282
        ;   XREF to: 004da295 (CONDITIONAL_JUMP)  ; LAB_004da295
    MOV EAX,dword ptr [EDX]             ; 004da284
    MOV dword ptr [EBP + -0x16],EAX     ; 004da286
    MOV EAX,dword ptr [EDX + 0x4]       ; 004da289
    MOV dword ptr [EBP + -0x12],EAX     ; 004da28c
    MOV EAX,dword ptr [EDX + 0x8]       ; 004da28f
    MOV dword ptr [EBP + -0xe],EAX      ; 004da292
    LEA EAX,[EBP + -0x22]               ; 004da295
        ;   Label: LAB_004da295
    PUSH EAX                            ; 004da298
    CALL core_slew.cpp_CSlew_processInput_FUN_005a20b0 ; 004da299
        ;   XREF to: 005a20b0 (UNCONDITIONAL_CALL)  ; void core_slew.cpp_CSlew_processInput_FUN_005a20b0(CSlew * this_ptr)
    ADD ESP,0x4                         ; 004da29e
    LEA EDX,[EBP + -0x16]               ; 004da2a1
    MOV EAX,[0x02db87d0]                ; 004da2a4 | g_LocalHeroIndex
    PUSH EDX                            ; 004da2a9
    LEA EDX,[EBP + -0x22]               ; 004da2aa
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004da2ad | g_HeroActors
    PUSH EDX                            ; 004da2b4
    MOV ECX,dword ptr [EAX + 0x154]     ; 004da2b5
    PUSH EAX                            ; 004da2bb
    CALL dword ptr [ECX + 0x60]         ; 004da2bc
    MOV AH,byte ptr [0x02cf6a94]        ; 004da2bf | g_MouseButtonFlags
    ADD ESP,0xc                         ; 004da2c5
    TEST AH,0x1                         ; 004da2c8
    JZ 0x004da36d                       ; 004da2cb
        ;   XREF to: 004da36d (CONDITIONAL_JUMP)  ; LAB_004da36d
    MOV ESI,dword ptr [0x02cf6a90]      ; 004da2d1 | g_MouseY
    PUSH ESI                            ; 004da2d7
    MOV EDI,dword ptr [0x02cf6a8c]      ; 004da2d8 | g_MouseX
    PUSH EDI                            ; 004da2de
    PUSH 0x32758e4                      ; 004da2df | g_CDemonCameraInstance
    LEA ESI,[EBP + 0x6]                 ; 004da2e4
    LEA EDI,[EBP + 0x1e]                ; 004da2e7
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0 ; 004da2ea
        ;   XREF to: 0044d2a0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0(CDemonCamera * this_ptr, int screen_x, int screen_y, CVector3i * output_ptr)
    LEA ESI,[EBP + 0x6]                 ; 004da2ef
    ADD ESP,0xc                         ; 004da2f2
    LEA EAX,[EBP + 0x1e]                ; 004da2f5
    LEA EBX,[EBP + 0x12]                ; 004da2f8
    PUSH EAX                            ; 004da2fb
    MOVSD ES:EDI,ESI                    ; 004da2fc
    MOVSD ES:EDI,ESI                    ; 004da2fd
    MOVSD ES:EDI,ESI                    ; 004da2fe
    PUSH 0x32758e4                      ; 004da2ff | g_CDemonCameraInstance
    LEA ESI,[EBP + -0x6]                ; 004da304
    LEA EDI,[EBP + 0x1e]                ; 004da307
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370 ; 004da30a
        ;   XREF to: 0044d370 (UNCONDITIONAL_CALL)  ; CVector3i * core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370(CDemonCamera * this_ptr, CVector3i * input_ptr, CVector3i * output_ptr)
    LEA ESI,[EBP + -0x6]                ; 004da30f
    LEA EAX,[EBP + 0x1e]                ; 004da312
    ADD ESP,0x8                         ; 004da315
    MOVSD ES:EDI,ESI                    ; 004da318
    MOVSD ES:EDI,ESI                    ; 004da319
    MOVSD ES:EDI,ESI                    ; 004da31a
    FILD dword ptr [EAX]                ; 004da31b
    FMUL float ptr [0x0065e9bc]         ; 004da31d | FLOAT_0065e9bc
    FSTP float ptr [EBX]                ; 004da323
    FILD dword ptr [EAX + 0x4]          ; 004da325
    FMUL float ptr [0x0065e9bc]         ; 004da328 | FLOAT_0065e9bc
    FSTP float ptr [EBX + 0x4]          ; 004da32e
    FILD dword ptr [EAX + 0x8]          ; 004da331
    FMUL float ptr [0x0065e9bc]         ; 004da334 | FLOAT_0065e9bc
    FSTP float ptr [EBX + 0x8]          ; 004da33a
    MOV EAX,[0x02db87d0]                ; 004da33d | g_LocalHeroIndex
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004da342 | g_HeroActors
    LEA EDX,[EAX + 0x30]                ; 004da349
    PUSH EDX                            ; 004da34c
    LEA EDX,[EBP + 0x12]                ; 004da34d
    PUSH EDX                            ; 004da350
    MOV ECX,dword ptr [EAX + 0x154]     ; 004da351
    PUSH EAX                            ; 004da357
    CALL dword ptr [ECX + 0x60]         ; 004da358
    MOV DL,byte ptr [0x02cf6a94]        ; 004da35b | g_MouseButtonFlags
    AND DL,0xfe                         ; 004da361
    ADD ESP,0xc                         ; 004da364
    MOV byte ptr [0x02cf6a94],DL        ; 004da367 | g_MouseButtonFlags
    MOV EAX,dword ptr [EBP + 0x92]      ; 004da36d
        ;   Label: LAB_004da36d
    PUSH EAX                            ; 004da373
    CALL core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90 ; 004da374
        ;   XREF to: 004d7d90 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90(CGame * this_ptr)
    ADD ESP,0x4                         ; 004da379
    MOV EDX,dword ptr [0x00680a00]      ; 004da37c | g_CNetGameInstance | g_CNetGamePtr
    PUSH EDX                            ; 004da382 | g_CNetGameInstance
    CALL core_netgame.cpp_CNetGame_processServerFrame_FUN_00543150 ; 004da383
        ;   XREF to: 00543150 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_processServerFrame_FUN_00543150(CNetGame * this_ptr)
    MOV EAX,dword ptr [EBP + 0x92]      ; 004da388
    MOV ECX,dword ptr [EAX + 0x240]     ; 004da38e
    ADD ESP,0x4                         ; 004da394
    TEST ECX,ECX                        ; 004da397
    JNZ 0x004da3aa                      ; 004da399
        ;   XREF to: 004da3aa (CONDITIONAL_JUMP)  ; LAB_004da3aa
    MOV EBX,dword ptr [0x006810c8]      ; 004da39b | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EBX                            ; 004da3a1 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_FUN_0056be80 ; 004da3a2
        ;   XREF to: 0056be80 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0056be80(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004da3a7
    PUSH 0xffff                         ; 004da3aa
        ;   Label: LAB_004da3aa
    MOV ESI,dword ptr [0x006703ec]      ; 004da3af | g_CDemonRendererPtr2
    PUSH ESI                            ; 004da3b5 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 004da3b6
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
    MOV EAX,dword ptr [EBP + 0x92]      ; 004da3bb
    MOV EDI,dword ptr [EAX + 0x20c]     ; 004da3c1
    ADD ESP,0x8                         ; 004da3c7
    TEST EDI,EDI                        ; 004da3ca
    JZ 0x004da419                       ; 004da3cc
        ;   XREF to: 004da419 (CONDITIONAL_JUMP)  ; LAB_004da419
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 004da3ce
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    MOV EDX,dword ptr [EBP + 0x4a]      ; 004da3d3
    SUB EAX,EDX                         ; 004da3d6
    MOV dword ptr [EBP + 0x7a],EAX      ; 004da3d8
    FILD dword ptr [EBP + 0x7a]         ; 004da3db
    FMUL double ptr [0x0062b5bd]        ; 004da3de | DOUBLE_0062b5bd
    MOV EAX,[0x0067b654]                ; 004da3e4 | g_CGameInstance | g_CGamePtr
    FMUL double ptr [0x0062b5c5]        ; 004da3e9 | DOUBLE_0062b5c5
    FLD float ptr [EAX + 0x264]         ; 004da3ef | g_CGameInstance.delta_time_float
    FXCH                                ; 004da3f5
    FMUL double ptr [0x0062b5cd]        ; 004da3f7 | DOUBLE_0062b5cd
    FDIVRP                              ; 004da3fd
    SUB ESP,0x8                         ; 004da3ff
    FSTP double ptr [ESP]               ; 004da402
    PUSH 0x62b462                       ; 004da405 | = "screen paint : %3.2f ms\n"
    MOV ECX,dword ptr [0x0066e8e0]      ; 004da40a | g_ConsolePtr | g_CConsolePtr
    PUSH ECX                            ; 004da410 | g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004da411
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x10                        ; 004da416
    MOV EAX,dword ptr [EBP + 0x92]      ; 004da419
        ;   Label: LAB_004da419
    CMP dword ptr [EAX + 0x208],0x0     ; 004da41f
    JNZ 0x004dab18                      ; 004da426
        ;   XREF to: 004dab18 (CONDITIONAL_JUMP)  ; LAB_004dab18
    CALL wincore_windll.cpp_lockFrame_FUN_005b7210 ; 004da42c
        ;   XREF to: 005b7210 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_lockFrame_FUN_005b7210()
    MOV EAX,dword ptr [EBP + 0x92]      ; 004da431
    CMP dword ptr [EAX + 0x240],0x0     ; 004da437
    JZ 0x004da44f                       ; 004da43e
        ;   XREF to: 004da44f (CONDITIONAL_JUMP)  ; LAB_004da44f
    MOV EDI,dword ptr [0x006810c8]      ; 004da440 | g_CDemonSetPtr
    PUSH EDI                            ; 004da446 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_FUN_0056c990 ; 004da447
        ;   XREF to: 0056c990 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0056c990(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004da44c
    MOV EAX,dword ptr [EBP + 0x92]      ; 004da44f
        ;   Label: LAB_004da44f
    CMP dword ptr [EAX + 0x210],0x0     ; 004da455
    JZ 0x004dab5e                       ; 004da45c
        ;   XREF to: 004dab5e (CONDITIONAL_JUMP)  ; LAB_004dab5e
    PUSH 0x3e                           ; 004da462
        ;   Label: LAB_004da462
    MOV EAX,[0x0067cf44]                ; 004da464 | g_CKeysPtr
    PUSH EAX                            ; 004da469 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004da46a | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 004da46c
    ADD ESP,0x8                         ; 004da46f
    TEST EAX,EAX                        ; 004da472
    JZ 0x004da4a3                       ; 004da474
        ;   XREF to: 004da4a3 (CONDITIONAL_JUMP)  ; LAB_004da4a3
    MOV ECX,dword ptr [0x02d82568]      ; 004da476 | DAT_02d82568
    INC ECX                             ; 004da47c
    PUSH ECX                            ; 004da47d
    PUSH 0x62b486                       ; 004da47e | = "demon%d.pcx"
    PUSH 0x2d82570                      ; 004da483 | DAT_02d82570
    MOV dword ptr [0x02d82568],ECX      ; 004da488 | DAT_02d82568
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004da48e
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004da493
    PUSH 0x2d82570                      ; 004da496 | DAT_02d82570
    CALL engine_pcx.c_saveScreenshotGeneral_FUN_005490c0 ; 004da49b
        ;   XREF to: 005490c0 (UNCONDITIONAL_CALL)  ; void engine_pcx.c_saveScreenshotGeneral_FUN_005490c0(char * filename)
    ADD ESP,0x4                         ; 004da4a0
    MOV EAX,[0x02db87d0]                ; 004da4a3 | g_LocalHeroIndex
        ;   Label: LAB_004da4a3
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004da4a8 | g_HeroActors
    ADD EAX,0x1f738                     ; 004da4af
    PUSH EAX                            ; 004da4b4
    CALL core_inv.cpp_CInventory_renderAllItems_FUN_00500690 ; 004da4b5
        ;   XREF to: 00500690 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_renderAllItems_FUN_00500690(CInventory * this_ptr)
    MOV EAX,dword ptr [EBP + 0x92]      ; 004da4ba
    MOV ESI,dword ptr [EAX + 0x278]     ; 004da4c0
    ADD ESP,0x4                         ; 004da4c6
    TEST ESI,ESI                        ; 004da4c9
    JZ 0x004da4dc                       ; 004da4cb
        ;   XREF to: 004da4dc (CONDITIONAL_JUMP)  ; LAB_004da4dc
    MOV EDI,dword ptr [0x006810c8]      ; 004da4cd | g_CDemonSetPtr
    PUSH EDI                            ; 004da4d3 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_FUN_0056d190 ; 004da4d4
        ;   XREF to: 0056d190 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0056d190(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004da4d9
    MOV EAX,dword ptr [EBP + 0x92]      ; 004da4dc
        ;   Label: LAB_004da4dc
    PUSH EAX                            ; 004da4e2
    CALL core_game.cpp_CGame_drawScreenBorder_FUN_004d7e50 ; 004da4e3
        ;   XREF to: 004d7e50 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_drawScreenBorder_FUN_004d7e50(CGame * this_ptr)
    MOV EDX,dword ptr [0x02d831b0]      ; 004da4e8 | g_CheatFlags
    ADD ESP,0x4                         ; 004da4ee
    TEST EDX,EDX                        ; 004da4f1
    JZ 0x004da558                       ; 004da4f3
        ;   XREF to: 004da558 (CONDITIONAL_JUMP)  ; LAB_004da558
    PUSH 0x1d                           ; 004da4f5
    MOV EAX,[0x0067cf44]                ; 004da4f7 | g_CKeysPtr
    PUSH EAX                            ; 004da4fc | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004da4fd | g_CKeysInstance
    CALL dword ptr [EDX]                ; 004da4ff
    ADD ESP,0x8                         ; 004da501
    TEST EAX,EAX                        ; 004da504
    JZ 0x004da532                       ; 004da506
        ;   XREF to: 004da532 (CONDITIONAL_JUMP)  ; LAB_004da532
    PUSH 0x2f                           ; 004da508
    MOV EAX,[0x0067cf44]                ; 004da50a | g_CKeysPtr
    PUSH EAX                            ; 004da50f | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004da510 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 004da512
    ADD ESP,0x8                         ; 004da515
    TEST EAX,EAX                        ; 004da518
    JZ 0x004da532                       ; 004da51a
        ;   XREF to: 004da532 (CONDITIONAL_JUMP)  ; LAB_004da532
    MOV ECX,dword ptr [0x02d831b4]      ; 004da51c | g_DebugRecording
    TEST ECX,ECX                        ; 004da522
    JZ 0x004dab78                       ; 004da524
        ;   XREF to: 004dab78 (CONDITIONAL_JUMP)  ; LAB_004dab78
    XOR EDI,EDI                         ; 004da52a
    MOV dword ptr [0x02d831b4],EDI      ; 004da52c | g_DebugRecording
    CMP dword ptr [0x02d831b8],0x0      ; 004da532 | g_DebugRecordingParams
        ;   Label: LAB_004da532
    JLE 0x004dab8e                      ; 004da539
        ;   XREF to: 004dab8e (CONDITIONAL_JUMP)  ; LAB_004dab8e
    MOV EDX,dword ptr [0x02d831b8]      ; 004da53f | g_DebugRecordingParams
    CMP EDX,dword ptr [0x02d831bc]      ; 004da545 | FLOAT_02d831bc
    JG 0x004dab8e                       ; 004da54b
        ;   XREF to: 004dab8e (CONDITIONAL_JUMP)  ; LAB_004dab8e
    XOR EAX,EAX                         ; 004da551
    MOV [0x02d831b4],EAX                ; 004da553 | g_DebugRecording
    MOV EAX,[0x00680d50]                ; 004da558 | g_CScriptInstance | g_CScriptPtr
        ;   Label: LAB_004da558
    PUSH EAX                            ; 004da55d | g_CScriptInstance
    CALL core_script.cpp_CScript_FUN_00559b20 ; 004da55e
        ;   XREF to: 00559b20 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_FUN_00559b20(CScript * this_ptr)
    ADD ESP,0x4                         ; 004da563
    MOV EDX,dword ptr [EBP + 0x92]      ; 004da566
    PUSH EDX                            ; 004da56c
    CALL core_game.cpp_CGame_renderOverlay_FUN_004d8040 ; 004da56d
        ;   XREF to: 004d8040 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_renderOverlay_FUN_004d8040(CGame * this_ptr)
    ADD ESP,0x4                         ; 004da572
    MOV ECX,dword ptr [EBP + 0x92]      ; 004da575
    PUSH ECX                            ; 004da57b
    CALL core_game.cpp_CGame_FUN_004e0aa0 ; 004da57c
        ;   XREF to: 004e0aa0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_FUN_004e0aa0(CGame * this_ptr)
    MOV EAX,dword ptr [EBP + 0x92]      ; 004da581
    MOV EBX,dword ptr [EAX + 0x1e4]     ; 004da587
    ADD ESP,0x4                         ; 004da58d
    TEST EBX,EBX                        ; 004da590
    JZ 0x004dadbc                       ; 004da592
        ;   XREF to: 004dadbc (CONDITIONAL_JUMP)  ; LAB_004dadbc
    MOV EAX,[0x006810c8]                ; 004da598 | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x15aea4]  ; 004da59d | g_CDemonSetInstance.selected_camera_index
    IMUL EDX,EDX,0x1a4                  ; 004da5a3
    MOV ECX,dword ptr [EDX + EAX*0x1 + 0x150] ; 004da5a9 | DAT_031143c8
    PUSH ECX                            ; 004da5b0
    PUSH 0x3275924                      ; 004da5b1 | DAT_03275924
    PUSH 0x62b492                       ; 004da5b6 | = "Camera: \"%s\" Group %d"
    LEA EAX,[EBP + 0xfffffcb2]          ; 004da5bb
    PUSH EAX                            ; 004da5c1
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004da5c2
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EAX,[0x00679398]                ; 004da5c7 | g_WindowHeight
    ADD ESP,0x10                        ; 004da5cc
    SUB EAX,0x16                        ; 004da5cf
    PUSH EAX                            ; 004da5d2
    PUSH 0x0                            ; 004da5d3
    LEA EAX,[EBP + 0xfffffcb2]          ; 004da5d5
    PUSH EAX                            ; 004da5db
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004da5dc
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    MOV EAX,dword ptr [EBP + 0x92]      ; 004da5e1
    MOV EBX,dword ptr [0x02d7c2e8]      ; 004da5e7 | FLOAT_02d7c2e8
    FLD double ptr [0x02d7c2e0]         ; 004da5ed | DOUBLE_02d7c2e0
    INC EBX                             ; 004da5f3
    FLD float ptr [EAX + 0x264]         ; 004da5f4
    MOV dword ptr [0x02d7c2e8],EBX      ; 004da5fa | FLOAT_02d7c2e8
    FXCH                                ; 004da600
    FADD ST0,ST1                        ; 004da602
    FILD dword ptr [0x02d7c2e8]         ; 004da604 | FLOAT_02d7c2e8
    FXCH                                ; 004da60a
    FSTP double ptr [0x02d7c2e0]        ; 004da60c | DOUBLE_02d7c2e0
    FDIV double ptr [0x02d7c2e0]        ; 004da612 | DOUBLE_02d7c2e0
    FLD1                                ; 004da618
    FDIVRP ST2,ST0                      ; 004da61a
    ADD ESP,0xc                         ; 004da61c
    MOV ESI,dword ptr [0x030e56b8]      ; 004da61f | g_RenderedTriangleCount
    PUSH ESI                            ; 004da625
    SUB ESP,0x8                         ; 004da626
    FSTP double ptr [ESP]               ; 004da629
    SUB ESP,0x8                         ; 004da62c
    FSTP double ptr [ESP]               ; 004da62f
    PUSH 0x62b4a8                       ; 004da632 | = "FR: %f, AVG: %f, PC: %d"
    LEA EAX,[EBP + 0xfffffcb2]          ; 004da637
    PUSH EAX                            ; 004da63d
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004da63e
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EAX,[0x00679398]                ; 004da643 | g_WindowHeight
    ADD ESP,0x1c                        ; 004da648
    SUB EAX,0xb                         ; 004da64b
    PUSH EAX                            ; 004da64e
    PUSH 0x0                            ; 004da64f
    LEA EAX,[EBP + 0xfffffcb2]          ; 004da651
    PUSH EAX                            ; 004da657
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004da658
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    MOV EAX,[0x02db87d0]                ; 004da65d | g_LocalHeroIndex
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004da662 | g_HeroActors
    FLD double ptr [0x0062b5d5]         ; 004da669 | DOUBLE_0062b5d5
    FLD float ptr [EAX + 0x34]          ; 004da66f
    FMUL ST1                            ; 004da672
    ADD ESP,0xc                         ; 004da674
    FLD double ptr [0x0062b5dd]         ; 004da677 | DOUBLE_0062b5dd
    FXCH                                ; 004da67d
    FMUL ST1                            ; 004da67f
    SUB ESP,0x8                         ; 004da681
    FSTP double ptr [ESP]               ; 004da684
    FLD float ptr [EAX + 0x38]          ; 004da687
    FMUL ST2                            ; 004da68a
    FMUL ST1                            ; 004da68c
    SUB ESP,0x8                         ; 004da68e
    FSTP double ptr [ESP]               ; 004da691
    FLD float ptr [EAX + 0x30]          ; 004da694
    FMULP ST2                           ; 004da697
    FMULP                               ; 004da699
    SUB ESP,0x8                         ; 004da69b
    FSTP double ptr [ESP]               ; 004da69e
    SUB ESP,0x8                         ; 004da6a1
    FLD float ptr [EAX + 0x28]          ; 004da6a4
    FSTP double ptr [ESP]               ; 004da6a7
    SUB ESP,0x8                         ; 004da6aa
    FLD float ptr [EAX + 0x24]          ; 004da6ad
    FSTP double ptr [ESP]               ; 004da6b0
    SUB ESP,0x8                         ; 004da6b3
    FLD float ptr [EAX + 0x20]          ; 004da6b6
    FSTP double ptr [ESP]               ; 004da6b9
    PUSH 0x62b4c0                       ; 004da6bc | = "Hero : %4.2f,%4.2f,%4.2f xyz and %3.2..."
    LEA EAX,[EBP + 0xfffffcb2]          ; 004da6c1
    PUSH EAX                            ; 004da6c7
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004da6c8
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x38                        ; 004da6cd
    PUSH 0x0                            ; 004da6d0
    PUSH 0x0                            ; 004da6d2
    LEA EAX,[EBP + 0xfffffcb2]          ; 004da6d4
    PUSH EAX                            ; 004da6da
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004da6db
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 004da6e0
    MOV EAX,dword ptr [EBP + 0x92]      ; 004da6e3
    MOV EAX,dword ptr [EAX + 0x274]     ; 004da6e9
    MOV EDI,dword ptr [EAX*0x4 + 0x67b658] ; 004da6ef | PTR_s_Off_0067b658
    MOV EAX,dword ptr [EBP + 0x92]      ; 004da6f6
    MOV EAX,dword ptr [EAX + 0x1fc]     ; 004da6fc
    PUSH EDI                            ; 004da702
    MOV EDX,dword ptr [EAX*0x4 + 0x67b658] ; 004da703 | PTR_s_Off_0067b658
    PUSH EDX                            ; 004da70a
    PUSH 0x62b4f7                       ; 004da70b | = "Slew : %s, Virtual Director : %s"
    LEA EAX,[EBP + 0xfffffcb2]          ; 004da710
    PUSH EAX                            ; 004da716
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004da717
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004da71c
    PUSH 0xb                            ; 004da71f
    PUSH 0x0                            ; 004da721
    LEA EAX,[EBP + 0xfffffcb2]          ; 004da723
    PUSH EAX                            ; 004da729
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004da72a
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    MOV EAX,dword ptr [EBP + 0x92]      ; 004da72f
    MOV ECX,dword ptr [EAX + 0x9bc]     ; 004da735
    ADD ESP,0xc                         ; 004da73b
    TEST ECX,ECX                        ; 004da73e
    JZ 0x004da78a                       ; 004da740
        ;   XREF to: 004da78a (CONDITIONAL_JUMP)  ; LAB_004da78a
    SUB ESP,0x8                         ; 004da742
    FLD float ptr [ECX + 0x8]           ; 004da745
    FSTP double ptr [ESP]               ; 004da748
    SUB ESP,0x8                         ; 004da74b
    FLD float ptr [ECX + 0x4]           ; 004da74e
    FSTP double ptr [ESP]               ; 004da751
    SUB ESP,0x8                         ; 004da754
    FLD float ptr [ECX]                 ; 004da757
    FSTP double ptr [ESP]               ; 004da759
    PUSH 0x62b518                       ; 004da75c | = "Fudge: %g,%g,%g"
    LEA EAX,[EBP + 0xfffffcb2]          ; 004da761
    PUSH EAX                            ; 004da767
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004da768
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EAX,[0x00679398]                ; 004da76d | g_WindowHeight
    ADD ESP,0x20                        ; 004da772
    SUB EAX,0x4d                        ; 004da775
    PUSH EAX                            ; 004da778
    PUSH 0x0                            ; 004da779
    LEA EAX,[EBP + 0xfffffcb2]          ; 004da77b
    PUSH EAX                            ; 004da781
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004da782
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 004da787
    LEA EAX,[EBP + 0x46]                ; 004da78a
        ;   Label: LAB_004da78a
    PUSH EAX                            ; 004da78d
    LEA EAX,[EBP + 0x42]                ; 004da78e
    PUSH EAX                            ; 004da791
    LEA EAX,[EBP + 0x3e]                ; 004da792
    PUSH EAX                            ; 004da795
    LEA EAX,[EBP + 0x3a]                ; 004da796
    PUSH EAX                            ; 004da799
    LEA EAX,[EBP + 0x36]                ; 004da79a
    PUSH EAX                            ; 004da79d
    LEA EAX,[EBP + 0x32]                ; 004da79e
    PUSH EAX                            ; 004da7a1
    CALL sound_sndmain.cpp_getSoundMemoryStats_FUN_005aa6a0 ; 004da7a2
        ;   XREF to: 005aa6a0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_getSoundMemoryStats_FUN_005aa6a0(int * out_referenced_count, int * out_total_bytes_referenced, int * out_unreferenced_count, int * out_total_bytes_unreferenced, ...)
    MOV EAX,dword ptr [EBP + 0x46]      ; 004da7a7
    MOV dword ptr [EBP + 0x7a],EAX      ; 004da7aa
    ADD ESP,0x18                        ; 004da7ad
    FLD double ptr [0x0062b5e5]         ; 004da7b0 | DOUBLE_0062b5e5
    FILD dword ptr [EBP + 0x7a]         ; 004da7b6
    FMUL ST1                            ; 004da7b9
    SUB ESP,0x8                         ; 004da7bb
    FSTP double ptr [ESP]               ; 004da7be
    MOV EBX,dword ptr [EBP + 0x3e]      ; 004da7c1
    MOV EAX,dword ptr [EBP + 0x36]      ; 004da7c4
    MOV dword ptr [EBP + 0x7a],EBX      ; 004da7c7
    ADD EAX,EBX                         ; 004da7ca
    FILD dword ptr [EBP + 0x7a]         ; 004da7cc
    MOV dword ptr [EBP + 0x7a],EAX      ; 004da7cf
    FMUL ST1                            ; 004da7d2
    FILD dword ptr [EBP + 0x7a]         ; 004da7d4
    FMUL ST2                            ; 004da7d7
    SUB ESP,0x8                         ; 004da7d9
    FSTP double ptr [ESP]               ; 004da7dc
    SUB ESP,0x8                         ; 004da7df
    FSTP double ptr [ESP]               ; 004da7e2
    MOV EAX,dword ptr [EBP + 0x36]      ; 004da7e5
    MOV ESI,dword ptr [EBP + 0x3a]      ; 004da7e8
    MOV dword ptr [EBP + 0x7a],EAX      ; 004da7eb
    PUSH ESI                            ; 004da7ee
    FILD dword ptr [EBP + 0x7a]         ; 004da7ef
    FMULP                               ; 004da7f2
    SUB ESP,0x8                         ; 004da7f4
    FSTP double ptr [ESP]               ; 004da7f7
    MOV EDI,dword ptr [EBP + 0x32]      ; 004da7fa
    PUSH EDI                            ; 004da7fd
    CALL sound_sndmain.cpp_countActiveSfx_FUN_005a9ff0 ; 004da7fe
        ;   XREF to: 005a9ff0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_countActiveSfx_FUN_005a9ff0()
    PUSH EAX                            ; 004da803
    PUSH 0x62b528                       ; 004da804 | = "SFX: %d Samples: Active: %d/%.1fk Ava..."
    LEA EAX,[EBP + 0xfffffcb2]          ; 004da809
    PUSH EAX                            ; 004da80f
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004da810
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EAX,[0x00679398]                ; 004da815 | g_WindowHeight
    ADD ESP,0x34                        ; 004da81a
    SUB EAX,0x42                        ; 004da81d
    PUSH EAX                            ; 004da820
    PUSH 0x0                            ; 004da821
    LEA EAX,[EBP + 0xfffffcb2]          ; 004da823
    PUSH EAX                            ; 004da829
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004da82a
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 004da82f
    LEA EAX,[EBP + 0xfffffcb2]          ; 004da832
    PUSH EAX                            ; 004da838
    CALL engine_texture.cpp_getTextureCacheStats_FUN_005dd970 ; 004da839
        ;   XREF to: 005dd970 (UNCONDITIONAL_CALL)  ; void engine_texture.cpp_getTextureCacheStats_FUN_005dd970(char * output_buffer)
    MOV EAX,[0x00679398]                ; 004da83e | g_WindowHeight
    ADD ESP,0x4                         ; 004da843
    SUB EAX,0x37                        ; 004da846
    PUSH EAX                            ; 004da849
    PUSH 0x0                            ; 004da84a
    LEA EAX,[EBP + 0xfffffcb2]          ; 004da84c
    PUSH EAX                            ; 004da852
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004da853
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 004da858
    LEA EAX,[EBP + 0xfffffcb2]          ; 004da85b
    PUSH EAX                            ; 004da861
    CALL core_skeleton.cpp_getMemoryStats_FUN_005a1ed0 ; 004da862
        ;   XREF to: 005a1ed0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_getMemoryStats_FUN_005a1ed0(char * output_buffer)
    MOV EAX,[0x00679398]                ; 004da867 | g_WindowHeight
    ADD ESP,0x4                         ; 004da86c
    SUB EAX,0x2c                        ; 004da86f
    PUSH EAX                            ; 004da872
    PUSH 0x0                            ; 004da873
    LEA EAX,[EBP + 0xfffffcb2]          ; 004da875
    PUSH EAX                            ; 004da87b
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004da87c
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    MOV EAX,[0x00679398]                ; 004da881 | g_WindowHeight
    ADD ESP,0xc                         ; 004da886
    SUB EAX,0x21                        ; 004da889
    PUSH EAX                            ; 004da88c
    MOV EAX,dword ptr [EBP + 0x92]      ; 004da88d
    PUSH 0x0                            ; 004da893
    ADD EAX,0xd0                        ; 004da895
    PUSH EAX                            ; 004da89a
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004da89b
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    MOV EAX,[0x03f6b878]                ; 004da8a0 | g_FullscreenMode
    ADD ESP,0xc                         ; 004da8a5
    TEST EAX,EAX                        ; 004da8a8
    JZ 0x004da921                       ; 004da8aa
        ;   XREF to: 004da921 (CONDITIONAL_JUMP)  ; LAB_004da921
    PUSH 0x400                          ; 004da8ac
    CALL wincore_windll.cpp_getTextureInfo_FUN_005b7e70 ; 004da8b1
        ;   XREF to: 005b7e70 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_getTextureInfo_FUN_005b7e70(int texture_size)
    ADD ESP,0x4                         ; 004da8b6
    PUSH EAX                            ; 004da8b9
    PUSH 0x200                          ; 004da8ba
    CALL wincore_windll.cpp_getTextureInfo_FUN_005b7e70 ; 004da8bf
        ;   XREF to: 005b7e70 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_getTextureInfo_FUN_005b7e70(int texture_size)
    ADD ESP,0x4                         ; 004da8c4
    PUSH EAX                            ; 004da8c7
    PUSH 0x100                          ; 004da8c8
    CALL wincore_windll.cpp_getTextureInfo_FUN_005b7e70 ; 004da8cd
        ;   XREF to: 005b7e70 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_getTextureInfo_FUN_005b7e70(int texture_size)
    ADD ESP,0x4                         ; 004da8d2
    PUSH EAX                            ; 004da8d5
    PUSH 0x80                           ; 004da8d6
    CALL wincore_windll.cpp_getTextureInfo_FUN_005b7e70 ; 004da8db
        ;   XREF to: 005b7e70 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_getTextureInfo_FUN_005b7e70(int texture_size)
    ADD ESP,0x4                         ; 004da8e0
    PUSH EAX                            ; 004da8e3
    PUSH 0x40                           ; 004da8e4
    CALL wincore_windll.cpp_getTextureInfo_FUN_005b7e70 ; 004da8e6
        ;   XREF to: 005b7e70 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_getTextureInfo_FUN_005b7e70(int texture_size)
    ADD ESP,0x4                         ; 004da8eb
    PUSH EAX                            ; 004da8ee
    PUSH 0x20                           ; 004da8ef
    CALL wincore_windll.cpp_getTextureInfo_FUN_005b7e70 ; 004da8f1
        ;   XREF to: 005b7e70 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_getTextureInfo_FUN_005b7e70(int texture_size)
    ADD ESP,0x4                         ; 004da8f6
    PUSH EAX                            ; 004da8f9
    PUSH 0x62b579                       ; 004da8fa | = "32:%d,64:%d,128:%d,256:%d,512:%d,1024:%d"
    LEA EAX,[EBP + 0xfffffcb2]          ; 004da8ff
    PUSH EAX                            ; 004da905
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004da906
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x20                        ; 004da90b
    PUSH 0x2c                           ; 004da90e
    PUSH 0x0                            ; 004da910
    LEA EAX,[EBP + 0xfffffcb2]          ; 004da912
    PUSH EAX                            ; 004da918
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004da919
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 004da91e
    CMP dword ptr [0x02d831c0],0x0      ; 004da921 | INT_02d831c0
        ;   Label: LAB_004da921
    JZ 0x004da981                       ; 004da928
        ;   XREF to: 004da981 (CONDITIONAL_JUMP)  ; LAB_004da981
    CALL sound_sndmain.cpp_getFirstActiveSfx_FUN_005a9ef0 ; 004da92a
        ;   XREF to: 005a9ef0 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_getFirstActiveSfx_FUN_005a9ef0()
    MOV ESI,0x37                        ; 004da92f
    MOV EBX,EAX                         ; 004da934
    TEST EAX,EAX                        ; 004da936
    JZ 0x004da981                       ; 004da938
        ;   XREF to: 004da981 (CONDITIONAL_JUMP)  ; LAB_004da981
    LEA EAX,[EBP + 0xfffffa62]          ; 004da93a
        ;   Label: LAB_004da93a
    PUSH EAX                            ; 004da940
    CALL sound_sndmain.cpp_CSfxSample_init_FUN_005a8480 ; 004da941
        ;   XREF to: 005a8480 (UNCONDITIONAL_CALL)  ; CSfxSample * sound_sndmain.cpp_CSfxSample_init_FUN_005a8480(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 004da946
    LEA EAX,[EBP + 0xfffffa62]          ; 004da949
    PUSH EAX                            ; 004da94f
    PUSH EBX                            ; 004da950
    CALL sound_sndmain.cpp_getSfxSampleInfo_FUN_005a96e0 ; 004da951
        ;   XREF to: 005a96e0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getSfxSampleInfo_FUN_005a96e0(uint sfx_handle, CSfxSample * output_buffer)
    ADD ESP,0x8                         ; 004da956
    TEST EAX,EAX                        ; 004da959
    JZ 0x004da972                       ; 004da95b
        ;   XREF to: 004da972 (CONDITIONAL_JUMP)  ; LAB_004da972
    LEA EAX,[EBP + 0xfffffa62]          ; 004da95d
    PUSH EAX                            ; 004da963
    PUSH ESI                            ; 004da964
    PUSH 0x0                            ; 004da965
    CALL engine_2d.c_drawTextXY_FUN_00402130 ; 004da967
        ;   XREF to: 00402130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextXY_FUN_00402130(int x_pos, int y_pos, char * text)
    ADD ESI,0xb                         ; 004da96c
    ADD ESP,0xc                         ; 004da96f
    PUSH EBX                            ; 004da972
        ;   Label: LAB_004da972
    CALL sound_sndmain.cpp_getNextActiveSfx_FUN_005a9f30 ; 004da973
        ;   XREF to: 005a9f30 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_getNextActiveSfx_FUN_005a9f30(uint current_sfx_handle)
    ADD ESP,0x4                         ; 004da978
    MOV EBX,EAX                         ; 004da97b
    TEST EAX,EAX                        ; 004da97d
    JNZ 0x004da93a                      ; 004da97f
        ;   XREF to: 004da93a (CONDITIONAL_JUMP)  ; LAB_004da93a
    MOV EAX,dword ptr [EBP + 0x92]      ; 004da981
        ;   Label: LAB_004da981
    CMP dword ptr [EAX + 0x1d8],0x0     ; 004da987
    JZ 0x004da99f                       ; 004da98e
        ;   XREF to: 004da99f (CONDITIONAL_JUMP)  ; LAB_004da99f
    MOV EBX,dword ptr [0x006793d0]      ; 004da990 | g_CEventListInstance | g_CEventListPtr
    PUSH EBX                            ; 004da996 | g_CEventListInstance
    CALL core_event.cpp_CEventList_FUN_004addf0 ; 004da997
        ;   XREF to: 004addf0 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_FUN_004addf0(CEventList * this_ptr)
    ADD ESP,0x4                         ; 004da99c
    MOV EAX,dword ptr [EBP + 0x92]      ; 004da99f
        ;   Label: LAB_004da99f
    CMP dword ptr [EAX + 0x1dc],0x0     ; 004da9a5
    JZ 0x004da9da                       ; 004da9ac
        ;   XREF to: 004da9da (CONDITIONAL_JUMP)  ; LAB_004da9da
    CMP dword ptr [EAX + 0x278],0x0     ; 004da9ae
    JZ 0x004da9da                       ; 004da9b5
        ;   XREF to: 004da9da (CONDITIONAL_JUMP)  ; LAB_004da9da
    MOV EAX,[0x00679398]                ; 004da9b7 | g_WindowHeight
    DEC EAX                             ; 004da9bc
    PUSH EAX                            ; 004da9bd
    MOV EAX,[0x00679394]                ; 004da9be | g_WindowWidth
    DEC EAX                             ; 004da9c3
    PUSH EAX                            ; 004da9c4
    PUSH 0xf0                           ; 004da9c5
    PUSH 0x0                            ; 004da9ca
    MOV EAX,[0x00680d50]                ; 004da9cc | g_CScriptInstance | g_CScriptPtr
    PUSH EAX                            ; 004da9d1 | g_CScriptInstance
    CALL core_script.cpp_CScript_FUN_00559d80 ; 004da9d2
        ;   XREF to: 00559d80 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_FUN_00559d80(CScript * this_ptr, int param_2, int param_3, int param_4, ...)
    ADD ESP,0x14                        ; 004da9d7
    MOV EAX,dword ptr [EBP + 0x92]      ; 004da9da
        ;   Label: LAB_004da9da
    CMP dword ptr [EAX + 0x1f8],0x0     ; 004da9e0
    JZ 0x004daa19                       ; 004da9e7
        ;   XREF to: 004daa19 (CONDITIONAL_JUMP)  ; LAB_004daa19
    LEA EAX,[EBP + 0xfffffdb2]          ; 004da9e9
    PUSH EAX                            ; 004da9ef
    MOV ECX,dword ptr [0x00678a60]      ; 004da9f0 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 004da9f6 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004a2590 ; 004da9f7
        ;   XREF to: 004a2590 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004a2590(CEditorTools * this_ptr, char * output_buffer)
    MOV EAX,[0x00679398]                ; 004da9fc | g_WindowHeight
    ADD ESP,0x8                         ; 004daa01
    SUB EAX,0x42                        ; 004daa04
    PUSH EAX                            ; 004daa07
    PUSH 0x0                            ; 004daa08
    LEA EAX,[EBP + 0xfffffdb2]          ; 004daa0a
    PUSH EAX                            ; 004daa10
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004daa11
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 004daa16
    MOV EAX,[0x02db87d0]                ; 004daa19 | g_LocalHeroIndex
        ;   Label: LAB_004daa19
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004daa1e | g_HeroActors
    PUSH EAX                            ; 004daa25
    MOV EDX,dword ptr [EAX + 0x154]     ; 004daa26
    CALL dword ptr [EDX + 0x120]        ; 004daa2c
    ADD ESP,0x4                         ; 004daa32
    CMP EAX,0x2                         ; 004daa35
    JNZ 0x004daaa2                      ; 004daa38
        ;   XREF to: 004daaa2 (CONDITIONAL_JUMP)  ; LAB_004daaa2
    PUSH 0x62b5a2                       ; 004daa3a | = "You're dead.  Game over."
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004daa3f
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004daa44
    LEA EDI,[EBP + 0xfffffbb2]          ; 004daa47
    MOV ESI,EAX                         ; 004daa4d
    PUSH EDI                            ; 004daa4f
    MOV AL,byte ptr [ESI]               ; 004daa50
        ;   Label: LAB_004daa50
    MOV byte ptr [EDI],AL               ; 004daa52
    CMP AL,0x0                          ; 004daa54
    JZ 0x004daa68                       ; 004daa56
        ;   XREF to: 004daa68 (CONDITIONAL_JUMP)  ; LAB_004daa68
    MOV AL,byte ptr [ESI + 0x1]         ; 004daa58
    ADD ESI,0x2                         ; 004daa5b
    MOV byte ptr [EDI + 0x1],AL         ; 004daa5e
    ADD EDI,0x2                         ; 004daa61
    CMP AL,0x0                          ; 004daa64
    JNZ 0x004daa50                      ; 004daa66
        ;   XREF to: 004daa50 (CONDITIONAL_JUMP)  ; LAB_004daa50
    POP EDI                             ; 004daa68
        ;   Label: LAB_004daa68
    LEA EAX,[EBP + 0xfffffbb2]          ; 004daa69
    PUSH EAX                            ; 004daa6f
    XOR EAX,EAX                         ; 004daa70
    PUSH 0x0                            ; 004daa72
    MOV AL,[0x02d00c20]                 ; 004daa74 | UCHAR_ARRAY_02d00c20
    PUSH EAX                            ; 004daa79
    MOV EAX,[0x020a5718]                ; 004daa7a | g_MediumFont
    MOV EDX,dword ptr [EAX + 0x316c]    ; 004daa7f
    MOV ECX,dword ptr [0x00679398]      ; 004daa85 | g_WindowHeight
    ADD EDX,EDX                         ; 004daa8b
    SUB ECX,EDX                         ; 004daa8d
    PUSH ECX                            ; 004daa8f
    MOV EBX,dword ptr [0x00679394]      ; 004daa90 | g_WindowWidth
    PUSH EBX                            ; 004daa96
    PUSH 0x0                            ; 004daa97
    PUSH EAX                            ; 004daa99
    CALL engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0 ; 004daa9a
        ;   XREF to: 004cdee0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0(CBitFont * this_ptr, int left_x, int right_x, int y_pos, ...)
    ADD ESP,0x1c                        ; 004daa9f
    MOV EAX,dword ptr [EBP + 0x92]      ; 004daaa2
        ;   Label: LAB_004daaa2
    CMP dword ptr [EAX + 0xac8],0x0     ; 004daaa8
    JZ 0x004daaba                       ; 004daaaf
        ;   XREF to: 004daaba (CONDITIONAL_JUMP)  ; LAB_004daaba
    PUSH EAX                            ; 004daab1
    CALL core_game.cpp_CGame_showCustomizableKeys_FUN_004d89d0 ; 004daab2
        ;   XREF to: 004d89d0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_showCustomizableKeys_FUN_004d89d0(CGame * this_ptr)
    ADD ESP,0x4                         ; 004daab7
    MOV EAX,dword ptr [EBP + 0x92]      ; 004daaba
        ;   Label: LAB_004daaba
    CMP dword ptr [EAX + 0x280],0x0     ; 004daac0
    JZ 0x004daad8                       ; 004daac7
        ;   XREF to: 004daad8 (CONDITIONAL_JUMP)  ; LAB_004daad8
    MOV ECX,dword ptr [0x0066e8e0]      ; 004daac9 | g_ConsolePtr | g_CConsolePtr
    PUSH ECX                            ; 004daacf | g_ConsolePtr
    CALL engine_console.cpp_CConsole_render_FUN_00441b00 ; 004daad0
        ;   XREF to: 00441b00 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_render_FUN_00441b00(CConsole * this_ptr)
    ADD ESP,0x4                         ; 004daad5
    MOV EAX,[0x02d828d4]                ; 004daad8 | g_CPickList
        ;   Label: LAB_004daad8
    TEST EAX,EAX                        ; 004daadd
    JLE 0x004daaee                      ; 004daadf
        ;   XREF to: 004daaee (CONDITIONAL_JUMP)  ; LAB_004daaee
    PUSH 0x2d828d4                      ; 004daae1 | g_CPickList
    CALL shape_edittool.cpp_CPickList_renderDialog_FUN_004a4d40 ; 004daae6
        ;   XREF to: 004a4d40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_renderDialog_FUN_004a4d40(CPickList * this_ptr)
    ADD ESP,0x4                         ; 004daaeb
    MOV EAX,dword ptr [EBP + 0x92]      ; 004daaee
        ;   Label: LAB_004daaee
    CMP dword ptr [EAX + 0x1fc],0x0     ; 004daaf4
    JZ 0x004dab0e                       ; 004daafb
        ;   XREF to: 004dab0e (CONDITIONAL_JUMP)  ; LAB_004dab0e
    PUSH 0x0                            ; 004daafd
    MOV ESI,dword ptr [0x00678a60]      ; 004daaff | g_CEditorToolsPtr
    PUSH ESI                            ; 004dab05 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380 ; 004dab06
        ;   XREF to: 004a1380 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380(CEditorTools * this_ptr, int use_clipping)
    ADD ESP,0x8                         ; 004dab0b
    PUSH 0x0                            ; 004dab0e
        ;   Label: LAB_004dab0e
    CALL wincore_windll.cpp_unlockFrame_FUN_005b7250 ; 004dab10
        ;   XREF to: 005b7250 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_unlockFrame_FUN_005b7250(int clear_lock_flag)
    ADD ESP,0x4                         ; 004dab15
    CMP dword ptr [EBP + 0x4e],0x0      ; 004dab18
        ;   Label: LAB_004dab18
    JZ 0x004da1ac                       ; 004dab1c
        ;   XREF to: 004da1ac (CONDITIONAL_JUMP)  ; LAB_004da1ac
    CALL wincore_wddvmem.cpp_closeScreenDevice_FUN_005ed630 ; 004dab22
        ;   XREF to: 005ed630 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_closeScreenDevice_FUN_005ed630()
    LEA ESP,[EBP + 0x7e]                ; 004dab27
    POP EBP                             ; 004dab2a
    POP EDI                             ; 004dab2b
    POP ESI                             ; 004dab2c
    POP EBX                             ; 004dab2d
    RET                                 ; 004dab2e
    CMP dword ptr [EAX + 0x27c],0x0     ; 004dab2f
        ;   Label: LAB_004dab2f
    JNZ 0x004da1f4                      ; 004dab36
        ;   XREF to: 004da1f4 (CONDITIONAL_JUMP)  ; LAB_004da1f4
    JMP 0x004da1f9                      ; 004dab3c
        ;   XREF to: 004da1f9 (UNCONDITIONAL_JUMP)  ; LAB_004da1f9
    PUSH EAX                            ; 004dab41
        ;   Label: LAB_004dab41
    CALL core_game.cpp_CGame_process_FUN_004e3190 ; 004dab42
        ;   XREF to: 004e3190 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_process_FUN_004e3190(CGame * this_ptr)
    ADD ESP,0x4                         ; 004dab47
    MOV EBX,dword ptr [0x00681ef8]      ; 004dab4a | g_CSoundInstance | g_CSoundPtr
    PUSH EBX                            ; 004dab50 | g_CSoundInstance
    CALL core_sound.cpp_CSound_process_FUN_005b2fd0 ; 004dab51
        ;   XREF to: 005b2fd0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_process_FUN_005b2fd0(CSound * this_ptr)
    ADD ESP,0x4                         ; 004dab56
    JMP 0x004da36d                      ; 004dab59
        ;   XREF to: 004da36d (UNCONDITIONAL_JUMP)  ; LAB_004da36d
    PUSH 0x62b47b                       ; 004dab5e | = "SPOOKHOUSE"
        ;   Label: LAB_004dab5e
    CALL crt_env.c_getenv_FUN_006013f0  ; 004dab63
        ;   XREF to: 006013f0 (UNCONDITIONAL_CALL)  ; char * crt_env.c_getenv_FUN_006013f0(char * name)
    ADD ESP,0x4                         ; 004dab68
    TEST EAX,EAX                        ; 004dab6b
    JNZ 0x004da462                      ; 004dab6d
        ;   XREF to: 004da462 (CONDITIONAL_JUMP)  ; LAB_004da462
    JMP 0x004da4a3                      ; 004dab73
        ;   XREF to: 004da4a3 (UNCONDITIONAL_JUMP)  ; LAB_004da4a3
    MOV ESI,0x1                         ; 004dab78
        ;   Label: LAB_004dab78
    MOV dword ptr [0x02d831bc],ECX      ; 004dab7d | FLOAT_02d831bc
    MOV dword ptr [0x02d831b4],ESI      ; 004dab83 | g_DebugRecording
    JMP 0x004da532                      ; 004dab89
        ;   XREF to: 004da532 (UNCONDITIONAL_JUMP)  ; LAB_004da532
    CMP dword ptr [0x02d831b4],0x0      ; 004dab8e | g_DebugRecording
        ;   Label: LAB_004dab8e
    JZ 0x004da558                       ; 004dab95
        ;   XREF to: 004da558 (CONDITIONAL_JUMP)  ; LAB_004da558
    MOV EBX,dword ptr [0x02d831bc]      ; 004dab9b | FLOAT_02d831bc
    PUSH EBX                            ; 004daba1
    PUSH 0x62b201                       ; 004daba2 | = "noc%05d.raw"
    LEA EAX,[EBP + 0xffffff7a]          ; 004daba7
    PUSH EAX                            ; 004dabad
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004dabae
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004dabb3
    LEA EAX,[EBP + 0xffffff7a]          ; 004dabb6
    PUSH EAX                            ; 004dabbc
    PUSH 0x62b20d                       ; 004dabbd | = "Movie recording active: movie\\%s"
    LEA EAX,[EBP + 0xfffffeb2]          ; 004dabc2
    PUSH EAX                            ; 004dabc8
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004dabc9
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004dabce
    PUSH 0x62b22e                       ; 004dabd1 | = "wb"
    LEA EAX,[EBP + 0xffffff7a]          ; 004dabd6
    PUSH EAX                            ; 004dabdc
    PUSH 0x62b231                       ; 004dabdd | = "movie"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 004dabe2
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004dabe7
    MOV dword ptr [EBP + 0x5a],EAX      ; 004dabea
    TEST EAX,EAX                        ; 004dabed
    JZ 0x004da558                       ; 004dabef
        ;   XREF to: 004da558 (CONDITIONAL_JUMP)  ; LAB_004da558
    XOR ESI,ESI                         ; 004dabf5
    MOV EDI,dword ptr [0x0067b668]      ; 004dabf7 | DAT_0067b668
    MOV dword ptr [EBP + 0x56],ESI      ; 004dabfd
    TEST EDI,EDI                        ; 004dac00
    JLE 0x004dad81                      ; 004dac02
        ;   XREF to: 004dad81 (CONDITIONAL_JUMP)  ; LAB_004dad81
    XOR EDI,EDI                         ; 004dac08
        ;   Label: LAB_004dac08
    MOV EAX,[0x0067b664]                ; 004dac0a | DAT_0067b664
    MOV dword ptr [EBP + 0x5e],EDI      ; 004dac0f
    TEST EAX,EAX                        ; 004dac12
    JLE 0x004dad6c                      ; 004dac14
        ;   XREF to: 004dad6c (CONDITIONAL_JUMP)  ; LAB_004dad6c
    MOV EAX,dword ptr [EBP + 0x56]      ; 004dac1a
    INC EAX                             ; 004dac1d
    MOV dword ptr [EBP + 0x52],EAX      ; 004dac1e
    MOV EDX,dword ptr [EBP + 0x5e]      ; 004dac21
        ;   Label: LAB_004dac21
    IMUL EDX,dword ptr [0x00679394]     ; 004dac24 | g_WindowWidth
    MOV ECX,dword ptr [0x0067b664]      ; 004dac2b | DAT_0067b664
    MOV EAX,EDX                         ; 004dac31
    SAR EDX,0x1f                        ; 004dac33
    IDIV ECX                            ; 004dac36
    MOV EDX,dword ptr [EBP + 0x5e]      ; 004dac38
    MOV EBX,dword ptr [0x00679394]      ; 004dac3b | g_WindowWidth
    INC EDX                             ; 004dac41
    IMUL EDX,EBX                        ; 004dac42
    MOV dword ptr [EBP + 0x66],EAX      ; 004dac45
    MOV EAX,EDX                         ; 004dac48
    SAR EDX,0x1f                        ; 004dac4a
    IDIV ECX                            ; 004dac4d
    MOV EDI,dword ptr [0x00679398]      ; 004dac4f | g_WindowHeight
    MOV EDX,dword ptr [EBP + 0x56]      ; 004dac55
    IMUL EDX,EDI                        ; 004dac58
    MOV ECX,dword ptr [0x0067b668]      ; 004dac5b | DAT_0067b668
    MOV dword ptr [EBP + 0x6e],EAX      ; 004dac61
    MOV EAX,EDX                         ; 004dac64
    SAR EDX,0x1f                        ; 004dac66
    IDIV ECX                            ; 004dac69
    MOV EDX,dword ptr [EBP + 0x52]      ; 004dac6b
    IMUL EDX,EDI                        ; 004dac6e
    MOV ESI,dword ptr [0x0067b668]      ; 004dac71 | DAT_0067b668
    MOV ECX,EAX                         ; 004dac77
    MOV EAX,EDX                         ; 004dac79
    SAR EDX,0x1f                        ; 004dac7b
    IDIV ESI                            ; 004dac7e
    XOR EDI,EDI                         ; 004dac80
    XOR EBX,EBX                         ; 004dac82
    MOV dword ptr [EBP + 0x76],EDI      ; 004dac84
    MOV dword ptr [EBP + 0x72],EDI      ; 004dac87
    XOR ESI,ESI                         ; 004dac8a
    CMP ECX,EAX                         ; 004dac8c
    JGE 0x004dad07                      ; 004dac8e
        ;   XREF to: 004dad07 (CONDITIONAL_JUMP)  ; LAB_004dad07
    SHL ECX,0x2                         ; 004dac94
    SHL EAX,0x2                         ; 004dac97
    MOV dword ptr [EBP + 0x6a],ECX      ; 004dac9a
    MOV dword ptr [EBP + 0x62],EAX      ; 004dac9d
    MOV EDX,dword ptr [EBP + 0x6e]      ; 004daca0
        ;   Label: LAB_004daca0
    MOV ECX,dword ptr [EBP + 0x66]      ; 004daca3
    CMP ECX,EDX                         ; 004daca6
    JGE 0x004dacf7                      ; 004daca8
        ;   XREF to: 004dacf7 (CONDITIONAL_JUMP)  ; LAB_004dacf7
    MOV EAX,dword ptr [EBP + 0x6a]      ; 004dacaa
    LEA EDX,[ECX*0x4 + 0x0]             ; 004dacad
    MOV EAX,dword ptr [EAX + 0x2cf6a9c] ; 004dacb4 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    ADD EDX,EAX                         ; 004dacba
    MOV EAX,dword ptr [EDX]             ; 004dacbc
        ;   Label: LAB_004dacbc
    MOV EDI,EAX                         ; 004dacbe
    SHR EDI,0x10                        ; 004dacc0
    AND EDI,0xff                        ; 004dacc3
    ADD EBX,EDI                         ; 004dacc9
    MOV EDI,EAX                         ; 004daccb
    SHR EDI,0x8                         ; 004daccd
    ADD EDX,0x4                         ; 004dacd0
    AND EDI,0xff                        ; 004dacd3
    AND EAX,0xff                        ; 004dacd9
    ADD ESI,EDI                         ; 004dacde
    MOV EDI,dword ptr [EBP + 0x72]      ; 004dace0
    INC ECX                             ; 004dace3
    ADD EDI,EAX                         ; 004dace4
    MOV EAX,dword ptr [EBP + 0x76]      ; 004dace6
    MOV dword ptr [EBP + 0x72],EDI      ; 004dace9
    INC EAX                             ; 004dacec
    MOV EDI,dword ptr [EBP + 0x6e]      ; 004daced
    MOV dword ptr [EBP + 0x76],EAX      ; 004dacf0
    CMP ECX,EDI                         ; 004dacf3
    JL 0x004dacbc                       ; 004dacf5
        ;   XREF to: 004dacbc (CONDITIONAL_JUMP)  ; LAB_004dacbc
    MOV ECX,dword ptr [EBP + 0x6a]      ; 004dacf7
        ;   Label: LAB_004dacf7
    ADD ECX,0x4                         ; 004dacfa
    MOV EDI,dword ptr [EBP + 0x62]      ; 004dacfd
    MOV dword ptr [EBP + 0x6a],ECX      ; 004dad00
    CMP ECX,EDI                         ; 004dad03
    JL 0x004daca0                       ; 004dad05
        ;   XREF to: 004daca0 (CONDITIONAL_JUMP)  ; LAB_004daca0
    MOV ECX,dword ptr [EBP + 0x76]      ; 004dad07
        ;   Label: LAB_004dad07
    MOV EDX,EBX                         ; 004dad0a
    MOV EAX,EBX                         ; 004dad0c
    SAR EDX,0x1f                        ; 004dad0e
    IDIV ECX                            ; 004dad11
    MOV EBX,EAX                         ; 004dad13
    MOV EDX,ESI                         ; 004dad15
    MOV EAX,ESI                         ; 004dad17
    SAR EDX,0x1f                        ; 004dad19
    IDIV ECX                            ; 004dad1c
    MOV ESI,EAX                         ; 004dad1e
    MOV EAX,dword ptr [EBP + 0x72]      ; 004dad20
    MOV EDX,EAX                         ; 004dad23
    SAR EDX,0x1f                        ; 004dad25
    IDIV ECX                            ; 004dad28
    MOV dword ptr [EBP + 0x72],EAX      ; 004dad2a
    MOV EAX,dword ptr [EBP + 0x5a]      ; 004dad2d
    PUSH EAX                            ; 004dad30
    PUSH EBX                            ; 004dad31
    CALL crt_stdio.c_fputc_FUN_006007a0 ; 004dad32
        ;   XREF to: 006007a0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_006007a0(int character, _FILE * file)
    ADD ESP,0x8                         ; 004dad37
    MOV EDX,dword ptr [EBP + 0x5a]      ; 004dad3a
    PUSH EDX                            ; 004dad3d
    PUSH ESI                            ; 004dad3e
    CALL crt_stdio.c_fputc_FUN_006007a0 ; 004dad3f
        ;   XREF to: 006007a0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_006007a0(int character, _FILE * file)
    ADD ESP,0x8                         ; 004dad44
    MOV ECX,dword ptr [EBP + 0x5a]      ; 004dad47
    PUSH ECX                            ; 004dad4a
    MOV EBX,dword ptr [EBP + 0x72]      ; 004dad4b
    MOV ESI,dword ptr [EBP + 0x5e]      ; 004dad4e
    PUSH EBX                            ; 004dad51
    INC ESI                             ; 004dad52
    CALL crt_stdio.c_fputc_FUN_006007a0 ; 004dad53
        ;   XREF to: 006007a0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_006007a0(int character, _FILE * file)
    MOV dword ptr [EBP + 0x5e],ESI      ; 004dad58
    MOV EDI,dword ptr [0x0067b664]      ; 004dad5b | DAT_0067b664
    ADD ESP,0x8                         ; 004dad61
    CMP ESI,EDI                         ; 004dad64
    JL 0x004dac21                       ; 004dad66
        ;   XREF to: 004dac21 (CONDITIONAL_JUMP)  ; LAB_004dac21
    MOV EDX,dword ptr [EBP + 0x56]      ; 004dad6c
        ;   Label: LAB_004dad6c
    INC EDX                             ; 004dad6f
    MOV ECX,dword ptr [0x0067b668]      ; 004dad70 | DAT_0067b668
    MOV dword ptr [EBP + 0x56],EDX      ; 004dad76
    CMP EDX,ECX                         ; 004dad79
    JL 0x004dac08                       ; 004dad7b
        ;   XREF to: 004dac08 (CONDITIONAL_JUMP)  ; LAB_004dac08
    PUSH 0x110                          ; 004dad81
        ;   Label: LAB_004dad81
    PUSH 0x62b237                       ; 004dad86 | = "..\\core\\game.cpp"
    MOV EBX,dword ptr [EBP + 0x5a]      ; 004dad8b
    PUSH EBX                            ; 004dad8e
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004dad8f
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004dad94
    PUSH 0x0                            ; 004dad97
    PUSH 0x0                            ; 004dad99
    LEA EAX,[EBP + 0xfffffeb2]          ; 004dad9b
    PUSH EAX                            ; 004dada1
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004dada2
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    MOV ESI,dword ptr [0x02d831bc]      ; 004dada7 | FLOAT_02d831bc
    INC ESI                             ; 004dadad
    ADD ESP,0xc                         ; 004dadae
    MOV dword ptr [0x02d831bc],ESI      ; 004dadb1 | FLOAT_02d831bc
    JMP 0x004da558                      ; 004dadb7
        ;   XREF to: 004da558 (UNCONDITIONAL_JUMP)  ; LAB_004da558
    MOV dword ptr [0x02d7c2e8],EBX      ; 004dadbc | FLOAT_02d7c2e8
        ;   Label: LAB_004dadbc
    MOV dword ptr [0x02d7c2e0],EBX      ; 004dadc2 | DOUBLE_02d7c2e0
    MOV dword ptr [0x02d7c2e4],EBX      ; 004dadc8 | DOUBLE_02d7c2e0+4
    JMP 0x004da921                      ; 004dadce
        ;   XREF to: 004da921 (UNCONDITIONAL_JUMP)  ; LAB_004da921

