; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_processFrame_FUN_0049cc10(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x604]:1  local_604
; undefined        Stack[-0x4dc]:1  local_4dc
; undefined1       Stack[-0x4db]:1  local_4db
; undefined        Stack[-0x3dc]:1  local_3dc
; undefined        Stack[-0x2dc]:1  local_2dc
; undefined        Stack[-0x1dc]:1  local_1dc
; undefined        Stack[-0x114]:1  local_114
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined        Stack[-0x94]:1  local_94
; undefined        Stack[-0x88]:1  local_88
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
; undefined        Stack[-0x4c]:1  local_4c
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
;   core_game.cpp_CGame_runGameSession_FUN_0049da10 at 0049de51
;
; Referenced Globals:
;   TerminatedCString s_noc_05d_raw_00582386
;   TerminatedCString s_Movie_recording_active_m_00582392
;   TerminatedCString s_wb_005823b3
;   TerminatedCString s_movie_005823b6
;   TerminatedCString s_screen_paint_3_2f_ms_005825d7
;   byte[56] BYTE_ARRAY_005825f0
;   TerminatedCString s_demon_d_pcx_00582628
;   TerminatedCString s_Camera_s_Group_d_00582634
;   TerminatedCString s_FR_f_AVG_f_PC_d_0058264a
;   TerminatedCString s_Hero_4_2f_4_2f_4_2f_xyz_00582662
;   TerminatedCString s_Slew_s_Virtual_Director_00582699
;   TerminatedCString s_Fudge_g_g_g_005826ba
;   TerminatedCString s_SFX_d_Samples_Active_d_1_005826ca
;   TerminatedCString s_You_re_dead_Game_over_0058271b
;   double DOUBLE_0058273a = 0.0555555555555556
;   ... and 51 more
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0
;   core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_004411b0
;   core_event.cpp_CEventList_render_FUN_0047dd80
;   core_game.cpp_CGame_drawScreenBorder_FUN_0049a960
;   core_game.cpp_CGame_process_FUN_004a6010
;   core_game.cpp_CGame_renderIrisFade_FUN_004a3960
;   core_game.cpp_CGame_renderOverlay_FUN_0049ab50
;   core_game.cpp_CGame_showCustomizableKeys_FUN_0049b4e0
;   core_game.cpp_CGame_slamDT_FUN_004a5f00
;   core_game.cpp_CGame_updateDT_FUN_0049a8a0
;   core_inv.cpp_CInventory_FUN_004c2470
;   core_netgame.cpp_CNetGame_processClientFrame_FUN_004ed720
;   core_netgame.cpp_CNetGame_processServerFrame_FUN_004ed2d0
;   core_script.cpp_CScript_FUN_004fe770
;   core_script.cpp_CScript_FUN_004fe9d0
;   ... and 39 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049cc10
        ;   Label: core_game.cpp_CGame_processFrame_FUN_0049cc10
    PUSH ESI                            ; 0049cc11
    PUSH EDI                            ; 0049cc12
    PUSH EBP                            ; 0049cc13
    MOV EBP,ESP                         ; 0049cc14
    SUB ESP,0x5f4                       ; 0049cc16
    SUB EBP,0x7e                        ; 0049cc1c
    MOV EAX,dword ptr [EBP + 0x92]      ; 0049cc1f
    XOR EDX,EDX                         ; 0049cc25
    MOV ECX,dword ptr [EAX + 0x20c]     ; 0049cc27
    MOV dword ptr [EBP + 0x4e],EDX      ; 0049cc2d
    TEST ECX,ECX                        ; 0049cc30
    JNZ 0x0049ccc4                      ; 0049cc32
        ;   XREF to: 0049ccc4 (CONDITIONAL_JUMP)  ; LAB_0049ccc4
    MOV EAX,dword ptr [EBP + 0x92]      ; 0049cc38
        ;   Label: LAB_0049cc38
    XOR EBX,EBX                         ; 0049cc3e
    MOV ESI,dword ptr [EAX + 0xcc]      ; 0049cc40
    MOV dword ptr [0x01e52ef8],EBX      ; 0049cc46 | DAT_01e52ef8
    TEST ESI,ESI                        ; 0049cc4c
    JNZ 0x0049cc62                      ; 0049cc4e
        ;   XREF to: 0049cc62 (CONDITIONAL_JUMP)  ; LAB_0049cc62
    MOV EAX,[0x005bdee0]                ; 0049cc50 | g_CNetGame_PTR_005bdee0
    CMP dword ptr [EAX + 0x168],0x0     ; 0049cc55 | g_CNetGame_01cea280.has_pending_sim_frame
    JZ 0x0049ccdc                       ; 0049cc5c
        ;   XREF to: 0049ccdc (CONDITIONAL_JUMP)  ; LAB_0049ccdc
    MOV EDX,dword ptr [0x005bdee0]      ; 0049cc62 | g_CNetGame_PTR_005bdee0
        ;   Label: LAB_0049cc62
    MOV EAX,dword ptr [EBP + 0x92]      ; 0049cc68
    PUSH EDX                            ; 0049cc6e | g_CNetGame_01cea280
    MOV dword ptr [EAX + 0x1fc],0x0     ; 0049cc6f
    CALL core_netgame.cpp_CNetGame_processClientFrame_FUN_004ed720 ; 0049cc79
        ;   XREF to: 004ed720 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_processClientFrame_FUN_004ed720(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 0049cc7e
    MOV ECX,dword ptr [EBP + 0x92]      ; 0049cc81
    PUSH ECX                            ; 0049cc87
    CALL core_game.cpp_CGame_process_FUN_004a6010 ; 0049cc88
        ;   XREF to: 004a6010 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_process_FUN_004a6010(CGame * this_ptr)
    MOV EAX,dword ptr [EBP + 0x92]      ; 0049cc8d
    MOV EBX,dword ptr [EAX + 0xcc]      ; 0049cc93
    ADD ESP,0x4                         ; 0049cc99
    TEST EBX,EBX                        ; 0049cc9c
    JZ 0x0049ccd1                       ; 0049cc9e
        ;   XREF to: 0049ccd1 (CONDITIONAL_JUMP)  ; LAB_0049ccd1
    PUSH 0x3e800000                     ; 0049cca0
    PUSH EAX                            ; 0049cca5
    CALL core_game.cpp_CGame_slamDT_FUN_004a5f00 ; 0049cca6
        ;   XREF to: 004a5f00 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_slamDT_FUN_004a5f00(CGame * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0049ccab
    MOV EAX,[0x005bdee0]                ; 0049ccae | g_CNetGame_PTR_005bdee0
        ;   Label: LAB_0049ccae
    PUSH EAX                            ; 0049ccb3 | g_CNetGame_01cea280
    CALL core_netgame.cpp_CNetGame_processServerFrame_FUN_004ed2d0 ; 0049ccb4
        ;   XREF to: 004ed2d0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_processServerFrame_FUN_004ed2d0(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 0049ccb9
    LEA ESP,[EBP + 0x7e]                ; 0049ccbc
        ;   Label: LAB_0049ccbc
    POP EBP                             ; 0049ccbf
    POP EDI                             ; 0049ccc0
    POP ESI                             ; 0049ccc1
    POP EBX                             ; 0049ccc2
    RET                                 ; 0049ccc3
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 0049ccc4
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_00558a30()
        ;   Label: LAB_0049ccc4
    MOV dword ptr [EBP + 0x4a],EAX      ; 0049ccc9
    JMP 0x0049cc38                      ; 0049cccc
        ;   XREF to: 0049cc38 (UNCONDITIONAL_JUMP)  ; LAB_0049cc38
    PUSH EAX                            ; 0049ccd1
        ;   Label: LAB_0049ccd1
    CALL core_game.cpp_CGame_updateDT_FUN_0049a8a0 ; 0049ccd2
        ;   XREF to: 0049a8a0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_updateDT_FUN_0049a8a0(CGame * this_ptr)
    ADD ESP,0x4                         ; 0049ccd7
    JMP 0x0049ccae                      ; 0049ccda
        ;   XREF to: 0049ccae (UNCONDITIONAL_JUMP)  ; LAB_0049ccae
    CMP dword ptr [0x01c02594],0x0      ; 0049ccdc | g_UseExternalRenderer
        ;   Label: LAB_0049ccdc
    JZ 0x0049ccf1                       ; 0049cce3
        ;   XREF to: 0049ccf1 (CONDITIONAL_JUMP)  ; LAB_0049ccf1
    CALL wincore_wddvmem.cpp_openScreenDevice_FUN_00553470 ; 0049cce5
        ;   XREF to: 00553470 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_openScreenDevice_FUN_00553470()
    MOV dword ptr [EBP + 0x4e],0x1      ; 0049ccea
    MOV EAX,dword ptr [EBP + 0x92]      ; 0049ccf1
        ;   Label: LAB_0049ccf1
    CMP dword ptr [EAX + 0x278],0x0     ; 0049ccf7
    JZ 0x0049d5c7                       ; 0049ccfe
        ;   XREF to: 0049d5c7 (CONDITIONAL_JUMP)  ; LAB_0049d5c7
    CALL engine_special.cpp_clearScreen_FUN_0052ee70 ; 0049cd04
        ;   XREF to: 0052ee70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0052ee70()
        ;   Label: LAB_0049cd04
    MOV EAX,dword ptr [EBP + 0x92]      ; 0049cd09
        ;   Label: LAB_0049cd09
    CMP dword ptr [EAX + 0x240],0x0     ; 0049cd0f
    JNZ 0x0049cd29                      ; 0049cd16
        ;   XREF to: 0049cd29 (CONDITIONAL_JUMP)  ; LAB_0049cd29
    PUSH 0x1                            ; 0049cd18
    MOV EDI,dword ptr [0x005be368]      ; 0049cd1a | g_CDemonSet_PTR_005be368
    PUSH EDI                            ; 0049cd20 | g_CDemonSet_01e57284
    CALL core_set.cpp_CDemonSet_FUN_00509a80 ; 0049cd21
        ;   XREF to: 00509a80 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_00509a80(CDemonSet * this_ptr, int skip_prerender)
    ADD ESP,0x8                         ; 0049cd26
    MOV EAX,[0x005bdee0]                ; 0049cd29 | g_CNetGame_PTR_005bdee0
        ;   Label: LAB_0049cd29
    PUSH EAX                            ; 0049cd2e | g_CNetGame_01cea280
    CALL core_netgame.cpp_CNetGame_processClientFrame_FUN_004ed720 ; 0049cd2f
        ;   XREF to: 004ed720 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_processClientFrame_FUN_004ed720(CNetGame * this_ptr)
    MOV EAX,dword ptr [EBP + 0x92]      ; 0049cd34
    MOV EDX,dword ptr [EAX + 0x1fc]     ; 0049cd3a
    ADD ESP,0x4                         ; 0049cd40
    TEST EDX,EDX                        ; 0049cd43
    JZ 0x0049d5d9                       ; 0049cd45
        ;   XREF to: 0049d5d9 (CONDITIONAL_JUMP)  ; LAB_0049d5d9
    LEA EAX,[EBP + -0x22]               ; 0049cd4b
    PUSH EAX                            ; 0049cd4e
    CALL core_slew.cpp_CSlew_FUN_0051f930 ; 0049cd4f
        ;   XREF to: 0051f930 (UNCONDITIONAL_CALL)  ; void core_slew.cpp_CSlew_FUN_0051f930(CSlew * this_ptr)
    MOV EAX,[0x01cae0e8]                ; 0049cd54 | DAT_01cae0e8
    MOV EDX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 0049cd59
    LEA EAX,[EBP + -0x22]               ; 0049cd60
    ADD EDX,0x20                        ; 0049cd63
    ADD ESP,0x4                         ; 0049cd66
    CMP EAX,EDX                         ; 0049cd69
    JZ 0x0049cd7e                       ; 0049cd6b
        ;   XREF to: 0049cd7e (CONDITIONAL_JUMP)  ; LAB_0049cd7e
    MOV EAX,dword ptr [EDX]             ; 0049cd6d
    MOV dword ptr [EBP + -0x22],EAX     ; 0049cd6f
    MOV EAX,dword ptr [EDX + 0x4]       ; 0049cd72
    MOV dword ptr [EBP + -0x1e],EAX     ; 0049cd75
    MOV EAX,dword ptr [EDX + 0x8]       ; 0049cd78
    MOV dword ptr [EBP + -0x1a],EAX     ; 0049cd7b
    MOV EAX,[0x01cae0e8]                ; 0049cd7e | DAT_01cae0e8
        ;   Label: LAB_0049cd7e
    MOV EDX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 0049cd83
    LEA EAX,[EBP + -0x16]               ; 0049cd8a
    ADD EDX,0x30                        ; 0049cd8d
    CMP EAX,EDX                         ; 0049cd90
    JZ 0x0049cda5                       ; 0049cd92
        ;   XREF to: 0049cda5 (CONDITIONAL_JUMP)  ; LAB_0049cda5
    MOV EAX,dword ptr [EDX]             ; 0049cd94
    MOV dword ptr [EBP + -0x16],EAX     ; 0049cd96
    MOV EAX,dword ptr [EDX + 0x4]       ; 0049cd99
    MOV dword ptr [EBP + -0x12],EAX     ; 0049cd9c
    MOV EAX,dword ptr [EDX + 0x8]       ; 0049cd9f
    MOV dword ptr [EBP + -0xe],EAX      ; 0049cda2
    LEA EAX,[EBP + -0x22]               ; 0049cda5
        ;   Label: LAB_0049cda5
    PUSH EAX                            ; 0049cda8
    CALL core_slew.cpp_CSlew_processInput_FUN_0051f980 ; 0049cda9
        ;   XREF to: 0051f980 (UNCONDITIONAL_CALL)  ; void core_slew.cpp_CSlew_processInput_FUN_0051f980(CSlew * this_ptr)
    ADD ESP,0x4                         ; 0049cdae
    LEA EDX,[EBP + -0x16]               ; 0049cdb1
    MOV EAX,[0x01cae0e8]                ; 0049cdb4 | DAT_01cae0e8
    PUSH EDX                            ; 0049cdb9
    LEA EDX,[EBP + -0x22]               ; 0049cdba
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 0049cdbd
    PUSH EDX                            ; 0049cdc4
    MOV ECX,dword ptr [EAX + 0x14c]     ; 0049cdc5
    PUSH EAX                            ; 0049cdcb
    CALL dword ptr [ECX + 0x60]         ; 0049cdcc
    MOV AH,byte ptr [0x01bd1d94]        ; 0049cdcf | DAT_01bd1d94
    ADD ESP,0xc                         ; 0049cdd5
    TEST AH,0x1                         ; 0049cdd8
    JZ 0x0049ce7c                       ; 0049cddb
        ;   XREF to: 0049ce7c (CONDITIONAL_JUMP)  ; LAB_0049ce7c
    MOV EDI,dword ptr [0x01bd1d90]      ; 0049cde1 | DAT_01bd1d90
    PUSH EDI                            ; 0049cde7
    MOV EAX,[0x01bd1d8c]                ; 0049cde8 | DAT_01bd1d8c
    PUSH EAX                            ; 0049cded
    PUSH 0x1fb8508                      ; 0049cdee
    LEA ESI,[EBP + 0x6]                 ; 0049cdf3
    LEA EDI,[EBP + 0x12]                ; 0049cdf6
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0 ; 0049cdf9
        ;   XREF to: 004410c0 (UNCONDITIONAL_CALL)  ; int core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0(CDemonCamera * this_ptr, int screen_x, int screen_y, CVector3i * output_ptr)
    LEA ESI,[EBP + 0x6]                 ; 0049cdfe
    ADD ESP,0xc                         ; 0049ce01
    LEA EAX,[EBP + 0x12]                ; 0049ce04
    LEA EBX,[EBP + 0x1e]                ; 0049ce07
    PUSH EAX                            ; 0049ce0a
    MOVSD ES:EDI,ESI                    ; 0049ce0b
    MOVSD ES:EDI,ESI                    ; 0049ce0c
    MOVSD ES:EDI,ESI                    ; 0049ce0d
    PUSH 0x1fb8508                      ; 0049ce0e
    LEA ESI,[EBP + -0x6]                ; 0049ce13
    LEA EDI,[EBP + 0x12]                ; 0049ce16
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_004411b0 ; 0049ce19
        ;   XREF to: 004411b0 (UNCONDITIONAL_CALL)  ; CVector3i * core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_004411b0(CDemonCamera * this_ptr, CVector3i * input_ptr, CVector3i * output_ptr)
    LEA ESI,[EBP + -0x6]                ; 0049ce1e
    LEA EAX,[EBP + 0x12]                ; 0049ce21
    ADD ESP,0x8                         ; 0049ce24
    MOVSD ES:EDI,ESI                    ; 0049ce27
    MOVSD ES:EDI,ESI                    ; 0049ce28
    MOVSD ES:EDI,ESI                    ; 0049ce29
    FILD dword ptr [EAX]                ; 0049ce2a
    FMUL float ptr [0x0059de8c]         ; 0049ce2c | DAT_0059de8c
    FSTP float ptr [EBX]                ; 0049ce32
    FILD dword ptr [EAX + 0x4]          ; 0049ce34
    FMUL float ptr [0x0059de8c]         ; 0049ce37 | DAT_0059de8c
    FSTP float ptr [EBX + 0x4]          ; 0049ce3d
    FILD dword ptr [EAX + 0x8]          ; 0049ce40
    FMUL float ptr [0x0059de8c]         ; 0049ce43 | DAT_0059de8c
    FSTP float ptr [EBX + 0x8]          ; 0049ce49
    MOV EAX,[0x01cae0e8]                ; 0049ce4c | DAT_01cae0e8
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 0049ce51
    LEA EDX,[EAX + 0x30]                ; 0049ce58
    PUSH EDX                            ; 0049ce5b
    LEA EDX,[EBP + 0x1e]                ; 0049ce5c
    PUSH EDX                            ; 0049ce5f
    MOV ECX,dword ptr [EAX + 0x14c]     ; 0049ce60
    PUSH EAX                            ; 0049ce66
    CALL dword ptr [ECX + 0x60]         ; 0049ce67
    MOV DL,byte ptr [0x01bd1d94]        ; 0049ce6a | DAT_01bd1d94
    AND DL,0xfe                         ; 0049ce70
    ADD ESP,0xc                         ; 0049ce73
    MOV byte ptr [0x01bd1d94],DL        ; 0049ce76 | DAT_01bd1d94
    MOV EDX,dword ptr [EBP + 0x92]      ; 0049ce7c
        ;   Label: LAB_0049ce7c
    PUSH EDX                            ; 0049ce82
    CALL core_game.cpp_CGame_updateDT_FUN_0049a8a0 ; 0049ce83
        ;   XREF to: 0049a8a0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_updateDT_FUN_0049a8a0(CGame * this_ptr)
    ADD ESP,0x4                         ; 0049ce88
    MOV ECX,dword ptr [0x005bdee0]      ; 0049ce8b | g_CNetGame_PTR_005bdee0
    PUSH ECX                            ; 0049ce91 | g_CNetGame_01cea280
    CALL core_netgame.cpp_CNetGame_processServerFrame_FUN_004ed2d0 ; 0049ce92
        ;   XREF to: 004ed2d0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_processServerFrame_FUN_004ed2d0(CNetGame * this_ptr)
    MOV EAX,dword ptr [EBP + 0x92]      ; 0049ce97
    MOV EBX,dword ptr [EAX + 0x240]     ; 0049ce9d
    ADD ESP,0x4                         ; 0049cea3
    TEST EBX,EBX                        ; 0049cea6
    JNZ 0x0049ceb9                      ; 0049cea8
        ;   XREF to: 0049ceb9 (CONDITIONAL_JUMP)  ; LAB_0049ceb9
    MOV ESI,dword ptr [0x005be368]      ; 0049ceaa | g_CDemonSet_PTR_005be368
    PUSH ESI                            ; 0049ceb0 | g_CDemonSet_01e57284
    CALL core_set.cpp_CDemonSet_renderStaticLights_FUN_00509760 ; 0049ceb1
        ;   XREF to: 00509760 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderStaticLights_FUN_00509760(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0049ceb6
    PUSH 0xffff                         ; 0049ceb9
        ;   Label: LAB_0049ceb9
    MOV EDI,dword ptr [0x005ae704]      ; 0049cebe | g_CDemonRenderer_PTR_005ae704
    PUSH EDI                            ; 0049cec4 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010 ; 0049cec5
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(CDemonRenderer * this_ptr, int render_alpha)
    MOV EAX,dword ptr [EBP + 0x92]      ; 0049ceca
    MOV EDX,dword ptr [EAX + 0x20c]     ; 0049ced0
    ADD ESP,0x8                         ; 0049ced6
    TEST EDX,EDX                        ; 0049ced9
    JZ 0x0049cf28                       ; 0049cedb
        ;   XREF to: 0049cf28 (CONDITIONAL_JUMP)  ; LAB_0049cf28
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 0049cedd
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_00558a30()
    MOV ECX,dword ptr [EBP + 0x4a]      ; 0049cee2
    SUB EAX,ECX                         ; 0049cee5
    MOV dword ptr [EBP + 0x7a],EAX      ; 0049cee7
    FILD dword ptr [EBP + 0x7a]         ; 0049ceea
    FMUL double ptr [0x0058273a]        ; 0049ceed | DOUBLE_0058273a
    MOV EAX,[0x005b9354]                ; 0049cef3 | g_CGame_PTR_005b9354
    FMUL double ptr [0x00582742]        ; 0049cef8 | DOUBLE_00582742
    FLD float ptr [EAX + 0x264]         ; 0049cefe | g_CGame_01c775ec.delta_time_float
    FXCH                                ; 0049cf04
    FMUL double ptr [0x0058274a]        ; 0049cf06 | DOUBLE_0058274a
    FDIVRP                              ; 0049cf0c
    SUB ESP,0x8                         ; 0049cf0e
    FSTP double ptr [ESP]               ; 0049cf11
    PUSH 0x5825d7                       ; 0049cf14 | = "screen paint : %3.2f ms\n"
    MOV EBX,dword ptr [0x005ad350]      ; 0049cf19 | g_CConsole_PTR_005ad350
    PUSH EBX                            ; 0049cf1f | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 0049cf20
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    ADD ESP,0x10                        ; 0049cf25
    MOV EAX,dword ptr [EBP + 0x92]      ; 0049cf28
        ;   Label: LAB_0049cf28
    CMP dword ptr [EAX + 0x208],0x0     ; 0049cf2e
    JNZ 0x0049d5b0                      ; 0049cf35
        ;   XREF to: 0049d5b0 (CONDITIONAL_JUMP)  ; LAB_0049d5b0
    CALL engine_special.cpp_lockFrame_FUN_005322e0 ; 0049cf3b
        ;   XREF to: 005322e0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_lockFrame_FUN_005322e0()
    MOV EAX,dword ptr [EBP + 0x92]      ; 0049cf40
    CMP dword ptr [EAX + 0x240],0x0     ; 0049cf46
    JZ 0x0049cf5d                       ; 0049cf4d
        ;   XREF to: 0049cf5d (CONDITIONAL_JUMP)  ; LAB_0049cf5d
    MOV EAX,[0x005be368]                ; 0049cf4f | g_CDemonSet_PTR_005be368
    PUSH EAX                            ; 0049cf54 | g_CDemonSet_01e57284
    CALL core_set.cpp_CDemonSet_FUN_0050a260 ; 0049cf55
        ;   XREF to: 0050a260 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0050a260(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0049cf5a
    MOV EAX,dword ptr [EBP + 0x92]      ; 0049cf5d
        ;   Label: LAB_0049cf5d
    CMP dword ptr [EAX + 0x210],0x0     ; 0049cf63
    JZ 0x0049d605                       ; 0049cf6a
        ;   XREF to: 0049d605 (CONDITIONAL_JUMP)  ; LAB_0049d605
    PUSH 0x3e                           ; 0049cf70
        ;   Label: LAB_0049cf70
    MOV EAX,[0x005bac64]                ; 0049cf72 | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 0049cf77 | g_CKeys_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 0049cf78 | g_CKeys_01cc30e4
    CALL dword ptr [EDX + 0x4]          ; 0049cf7a
    ADD ESP,0x8                         ; 0049cf7d
    TEST EAX,EAX                        ; 0049cf80
    JZ 0x0049cfb1                       ; 0049cf82
        ;   XREF to: 0049cfb1 (CONDITIONAL_JUMP)  ; LAB_0049cfb1
    MOV ECX,dword ptr [0x01c780b8]      ; 0049cf84 | DAT_01c780b8
    INC ECX                             ; 0049cf8a
    PUSH ECX                            ; 0049cf8b
    PUSH 0x582628                       ; 0049cf8c | = "demon%d.pcx"
    PUSH 0x1c780c0                      ; 0049cf91
    MOV dword ptr [0x01c780b8],ECX      ; 0049cf96 | DAT_01c780b8
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0049cf9c
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 0049cfa1
    PUSH 0x1c780c0                      ; 0049cfa4
    CALL engine_pcx.c_FUN_004f2990      ; 0049cfa9
        ;   XREF to: 004f2990 (UNCONDITIONAL_CALL)  ; void engine_pcx.c_FUN_004f2990(char * filename)
    ADD ESP,0x4                         ; 0049cfae
    MOV EAX,[0x01cae0e8]                ; 0049cfb1 | DAT_01cae0e8
        ;   Label: LAB_0049cfb1
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 0049cfb6
    ADD EAX,0x1f5a0                     ; 0049cfbd
    PUSH EAX                            ; 0049cfc2
    CALL core_inv.cpp_CInventory_FUN_004c2470 ; 0049cfc3
        ;   XREF to: 004c2470 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_FUN_004c2470(CInventory * this_ptr)
    MOV EAX,dword ptr [EBP + 0x92]      ; 0049cfc8
    MOV ESI,dword ptr [EAX + 0x278]     ; 0049cfce
    ADD ESP,0x4                         ; 0049cfd4
    TEST ESI,ESI                        ; 0049cfd7
    JZ 0x0049cfea                       ; 0049cfd9
        ;   XREF to: 0049cfea (CONDITIONAL_JUMP)  ; LAB_0049cfea
    MOV EDI,dword ptr [0x005be368]      ; 0049cfdb | g_CDemonSet_PTR_005be368
    PUSH EDI                            ; 0049cfe1 | g_CDemonSet_01e57284
    CALL core_set.cpp_CDemonSet_FUN_0050aa70 ; 0049cfe2
        ;   XREF to: 0050aa70 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0050aa70(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0049cfe7
    MOV EAX,dword ptr [EBP + 0x92]      ; 0049cfea
        ;   Label: LAB_0049cfea
    PUSH EAX                            ; 0049cff0
    CALL core_game.cpp_CGame_drawScreenBorder_FUN_0049a960 ; 0049cff1
        ;   XREF to: 0049a960 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_drawScreenBorder_FUN_0049a960(CGame * this_ptr)
    MOV EDX,dword ptr [0x01c78ac8]      ; 0049cff6 | DAT_01c78ac8
    ADD ESP,0x4                         ; 0049cffc
    TEST EDX,EDX                        ; 0049cfff
    JZ 0x0049d066                       ; 0049d001
        ;   XREF to: 0049d066 (CONDITIONAL_JUMP)  ; LAB_0049d066
    PUSH 0x1d                           ; 0049d003
    MOV EAX,[0x005bac64]                ; 0049d005 | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 0049d00a | g_CKeys_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 0049d00b | g_CKeys_01cc30e4
    CALL dword ptr [EDX]                ; 0049d00d
    ADD ESP,0x8                         ; 0049d00f
    TEST EAX,EAX                        ; 0049d012
    JZ 0x0049d040                       ; 0049d014
        ;   XREF to: 0049d040 (CONDITIONAL_JUMP)  ; LAB_0049d040
    PUSH 0x2f                           ; 0049d016
    MOV EAX,[0x005bac64]                ; 0049d018 | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 0049d01d | g_CKeys_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 0049d01e | g_CKeys_01cc30e4
    CALL dword ptr [EDX + 0x4]          ; 0049d020
    ADD ESP,0x8                         ; 0049d023
    TEST EAX,EAX                        ; 0049d026
    JZ 0x0049d040                       ; 0049d028
        ;   XREF to: 0049d040 (CONDITIONAL_JUMP)  ; LAB_0049d040
    MOV ECX,dword ptr [0x01c78acc]      ; 0049d02a | DAT_01c78acc
    TEST ECX,ECX                        ; 0049d030
    JZ 0x0049d628                       ; 0049d032
        ;   XREF to: 0049d628 (CONDITIONAL_JUMP)  ; LAB_0049d628
    XOR EDI,EDI                         ; 0049d038
    MOV dword ptr [0x01c78acc],EDI      ; 0049d03a | DAT_01c78acc
    CMP dword ptr [0x01c78ad0],0x0      ; 0049d040 | DAT_01c78ad0
        ;   Label: LAB_0049d040
    JLE 0x0049d63e                      ; 0049d047
        ;   XREF to: 0049d63e (CONDITIONAL_JUMP)  ; LAB_0049d63e
    MOV EDX,dword ptr [0x01c78ad0]      ; 0049d04d | DAT_01c78ad0
    CMP EDX,dword ptr [0x01c78ad4]      ; 0049d053 | DAT_01c78ad4
    JG 0x0049d63e                       ; 0049d059
        ;   XREF to: 0049d63e (CONDITIONAL_JUMP)  ; LAB_0049d63e
    XOR EAX,EAX                         ; 0049d05f
    MOV [0x01c78acc],EAX                ; 0049d061 | DAT_01c78acc
    MOV EAX,[0x005be220]                ; 0049d066 | DAT_005be220
        ;   Label: LAB_0049d066
    PUSH EAX                            ; 0049d06b | g_CScript_01e56da0
    CALL core_script.cpp_CScript_FUN_004fe770 ; 0049d06c
        ;   XREF to: 004fe770 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_FUN_004fe770(CScript * this_ptr)
    ADD ESP,0x4                         ; 0049d071
    MOV EDX,dword ptr [EBP + 0x92]      ; 0049d074
    PUSH EDX                            ; 0049d07a
    CALL core_game.cpp_CGame_renderOverlay_FUN_0049ab50 ; 0049d07b
        ;   XREF to: 0049ab50 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_renderOverlay_FUN_0049ab50(CGame * this_ptr)
    ADD ESP,0x4                         ; 0049d080
    MOV ECX,dword ptr [EBP + 0x92]      ; 0049d083
    PUSH ECX                            ; 0049d089
    CALL core_game.cpp_CGame_renderIrisFade_FUN_004a3960 ; 0049d08a
        ;   XREF to: 004a3960 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_renderIrisFade_FUN_004a3960(CGame * this_ptr)
    MOV EAX,dword ptr [EBP + 0x92]      ; 0049d08f
    MOV EBX,dword ptr [EAX + 0x1e4]     ; 0049d095
    ADD ESP,0x4                         ; 0049d09b
    TEST EBX,EBX                        ; 0049d09e
    JZ 0x0049d859                       ; 0049d0a0
        ;   XREF to: 0049d859 (CONDITIONAL_JUMP)  ; LAB_0049d859
    MOV ECX,dword ptr [0x005be368]      ; 0049d0a6 | g_CDemonSet_PTR_005be368
    MOV EDX,dword ptr [ECX + 0x15aabc]  ; 0049d0ac | g_CDemonSet_01e57284.selected_camera_index
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049d0b2
    SUB EAX,EDX                         ; 0049d0b9
    SHL EAX,0x2                         ; 0049d0bb
    ADD EAX,EDX                         ; 0049d0be
    SHL EAX,0x5                         ; 0049d0c0
    MOV EDX,dword ptr [ECX + EAX*0x1 + 0x14c] ; 0049d0c3
    PUSH EDX                            ; 0049d0ca
    PUSH 0x1fb8508                      ; 0049d0cb
    PUSH 0x582634                       ; 0049d0d0 | = "Camera: \"%s\" Group %d"
    LEA EAX,[EBP + 0xfffffdb2]          ; 0049d0d5
    PUSH EAX                            ; 0049d0db
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0049d0dc
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    MOV EAX,[0x005b7620]                ; 0049d0e1 | g_WindowHeight
    ADD ESP,0x10                        ; 0049d0e6
    SUB EAX,0x16                        ; 0049d0e9
    PUSH EAX                            ; 0049d0ec
    PUSH 0x0                            ; 0049d0ed
    LEA EAX,[EBP + 0xfffffdb2]          ; 0049d0ef
    PUSH EAX                            ; 0049d0f5
    CALL engine_2d.c_drawText_FUN_00402600 ; 0049d0f6
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00402600(char * text, int x, int y)
    MOV EAX,dword ptr [EBP + 0x92]      ; 0049d0fb
    MOV ECX,dword ptr [0x01c71e38]      ; 0049d101 | DAT_01c71e38
    FLD double ptr [0x01c71e30]         ; 0049d107 | DAT_01c71e30
    INC ECX                             ; 0049d10d
    FLD float ptr [EAX + 0x264]         ; 0049d10e
    MOV dword ptr [0x01c71e38],ECX      ; 0049d114 | DAT_01c71e38
    FXCH                                ; 0049d11a
    FADD ST0,ST1                        ; 0049d11c
    FILD dword ptr [0x01c71e38]         ; 0049d11e | DAT_01c71e38
    FXCH                                ; 0049d124
    FSTP double ptr [0x01c71e30]        ; 0049d126 | DAT_01c71e30
    FDIV double ptr [0x01c71e30]        ; 0049d12c | DAT_01c71e30
    FLD1                                ; 0049d132
    FDIVRP ST2,ST0                      ; 0049d134
    ADD ESP,0xc                         ; 0049d136
    MOV EBX,dword ptr [0x01e52ef8]      ; 0049d139 | DAT_01e52ef8
    PUSH EBX                            ; 0049d13f
    SUB ESP,0x8                         ; 0049d140
    FSTP double ptr [ESP]               ; 0049d143
    SUB ESP,0x8                         ; 0049d146
    FSTP double ptr [ESP]               ; 0049d149
    PUSH 0x58264a                       ; 0049d14c | = "FR: %f, AVG: %f, PC: %d"
    LEA EAX,[EBP + 0xfffffdb2]          ; 0049d151
    PUSH EAX                            ; 0049d157
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0049d158
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    MOV EAX,[0x005b7620]                ; 0049d15d | g_WindowHeight
    ADD ESP,0x1c                        ; 0049d162
    SUB EAX,0xb                         ; 0049d165
    PUSH EAX                            ; 0049d168
    PUSH 0x0                            ; 0049d169
    LEA EAX,[EBP + 0xfffffdb2]          ; 0049d16b
    PUSH EAX                            ; 0049d171
    CALL engine_2d.c_drawText_FUN_00402600 ; 0049d172
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00402600(char * text, int x, int y)
    MOV EAX,[0x01cae0e8]                ; 0049d177 | DAT_01cae0e8
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 0049d17c
    FLD double ptr [0x00582752]         ; 0049d183 | DOUBLE_00582752
    FLD float ptr [EAX + 0x34]          ; 0049d189
    FMUL ST1                            ; 0049d18c
    ADD ESP,0xc                         ; 0049d18e
    FLD double ptr [0x0058275a]         ; 0049d191 | DOUBLE_0058275a
    FXCH                                ; 0049d197
    FMUL ST1                            ; 0049d199
    SUB ESP,0x8                         ; 0049d19b
    FSTP double ptr [ESP]               ; 0049d19e
    FLD float ptr [EAX + 0x38]          ; 0049d1a1
    FMUL ST2                            ; 0049d1a4
    FMUL ST1                            ; 0049d1a6
    SUB ESP,0x8                         ; 0049d1a8
    FSTP double ptr [ESP]               ; 0049d1ab
    FLD float ptr [EAX + 0x30]          ; 0049d1ae
    FMULP ST2                           ; 0049d1b1
    FMULP                               ; 0049d1b3
    SUB ESP,0x8                         ; 0049d1b5
    FSTP double ptr [ESP]               ; 0049d1b8
    SUB ESP,0x8                         ; 0049d1bb
    FLD float ptr [EAX + 0x28]          ; 0049d1be
    FSTP double ptr [ESP]               ; 0049d1c1
    SUB ESP,0x8                         ; 0049d1c4
    FLD float ptr [EAX + 0x24]          ; 0049d1c7
    FSTP double ptr [ESP]               ; 0049d1ca
    SUB ESP,0x8                         ; 0049d1cd
    FLD float ptr [EAX + 0x20]          ; 0049d1d0
    FSTP double ptr [ESP]               ; 0049d1d3
    PUSH 0x582662                       ; 0049d1d6 | = "Hero : %4.2f,%4.2f,%4.2f xyz and %3.2..."
    LEA EAX,[EBP + 0xfffffdb2]          ; 0049d1db
    PUSH EAX                            ; 0049d1e1
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0049d1e2
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x38                        ; 0049d1e7
    PUSH 0x0                            ; 0049d1ea
    PUSH 0x0                            ; 0049d1ec
    LEA EAX,[EBP + 0xfffffdb2]          ; 0049d1ee
    PUSH EAX                            ; 0049d1f4
    CALL engine_2d.c_drawText_FUN_00402600 ; 0049d1f5
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00402600(char * text, int x, int y)
    ADD ESP,0xc                         ; 0049d1fa
    MOV EAX,dword ptr [EBP + 0x92]      ; 0049d1fd
    MOV EAX,dword ptr [EAX + 0x274]     ; 0049d203
    MOV ESI,dword ptr [EAX*0x4 + 0x5b9358] ; 0049d209 | PTR_s_Off_005b9358
    MOV EAX,dword ptr [EBP + 0x92]      ; 0049d210
    MOV EAX,dword ptr [EAX + 0x1fc]     ; 0049d216
    PUSH ESI                            ; 0049d21c
    MOV EDI,dword ptr [EAX*0x4 + 0x5b9358] ; 0049d21d | PTR_s_Off_005b9358
    PUSH EDI                            ; 0049d224
    PUSH 0x582699                       ; 0049d225 | = "Slew : %s, Virtual Director : %s"
    LEA EAX,[EBP + 0xfffffdb2]          ; 0049d22a
    PUSH EAX                            ; 0049d230
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0049d231
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x10                        ; 0049d236
    PUSH 0xb                            ; 0049d239
    PUSH 0x0                            ; 0049d23b
    LEA EAX,[EBP + 0xfffffdb2]          ; 0049d23d
    PUSH EAX                            ; 0049d243
    CALL engine_2d.c_drawText_FUN_00402600 ; 0049d244
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00402600(char * text, int x, int y)
    MOV EAX,dword ptr [EBP + 0x92]      ; 0049d249
    MOV EDX,dword ptr [EAX + 0x9bc]     ; 0049d24f
    ADD ESP,0xc                         ; 0049d255
    TEST EDX,EDX                        ; 0049d258
    JZ 0x0049d2a4                       ; 0049d25a
        ;   XREF to: 0049d2a4 (CONDITIONAL_JUMP)  ; LAB_0049d2a4
    SUB ESP,0x8                         ; 0049d25c
    FLD float ptr [EDX + 0x8]           ; 0049d25f
    FSTP double ptr [ESP]               ; 0049d262
    SUB ESP,0x8                         ; 0049d265
    FLD float ptr [EDX + 0x4]           ; 0049d268
    FSTP double ptr [ESP]               ; 0049d26b
    SUB ESP,0x8                         ; 0049d26e
    FLD float ptr [EDX]                 ; 0049d271
    FSTP double ptr [ESP]               ; 0049d273
    PUSH 0x5826ba                       ; 0049d276 | = "Fudge: %g,%g,%g"
    LEA EAX,[EBP + 0xfffffdb2]          ; 0049d27b
    PUSH EAX                            ; 0049d281
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0049d282
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    MOV EAX,[0x005b7620]                ; 0049d287 | g_WindowHeight
    ADD ESP,0x20                        ; 0049d28c
    SUB EAX,0x4d                        ; 0049d28f
    PUSH EAX                            ; 0049d292
    PUSH 0x0                            ; 0049d293
    LEA EAX,[EBP + 0xfffffdb2]          ; 0049d295
    PUSH EAX                            ; 0049d29b
    CALL engine_2d.c_drawText_FUN_00402600 ; 0049d29c
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00402600(char * text, int x, int y)
    ADD ESP,0xc                         ; 0049d2a1
    LEA EAX,[EBP + 0x46]                ; 0049d2a4
        ;   Label: LAB_0049d2a4
    PUSH EAX                            ; 0049d2a7
    LEA EAX,[EBP + 0x42]                ; 0049d2a8
    PUSH EAX                            ; 0049d2ab
    LEA EAX,[EBP + 0x3e]                ; 0049d2ac
    PUSH EAX                            ; 0049d2af
    LEA EAX,[EBP + 0x3a]                ; 0049d2b0
    PUSH EAX                            ; 0049d2b3
    LEA EAX,[EBP + 0x36]                ; 0049d2b4
    PUSH EAX                            ; 0049d2b7
    LEA EAX,[EBP + 0x32]                ; 0049d2b8
    PUSH EAX                            ; 0049d2bb
    CALL sound_sndmain.cpp_getSoundMemoryStats_FUN_00527c70 ; 0049d2bc
        ;   XREF to: 00527c70 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_getSoundMemoryStats_FUN_00527c70(int * out_referenced_count, int * out_total_bytes_referenced, int * out_unreferenced_count, int * out_total_bytes_unreferenced, ...)
    MOV EAX,dword ptr [EBP + 0x46]      ; 0049d2c1
    MOV dword ptr [EBP + 0x7a],EAX      ; 0049d2c4
    ADD ESP,0x18                        ; 0049d2c7
    FLD double ptr [0x00582762]         ; 0049d2ca | DOUBLE_00582762
    FILD dword ptr [EBP + 0x7a]         ; 0049d2d0
    FMUL ST1                            ; 0049d2d3
    SUB ESP,0x8                         ; 0049d2d5
    FSTP double ptr [ESP]               ; 0049d2d8
    MOV ECX,dword ptr [EBP + 0x3e]      ; 0049d2db
    MOV EAX,dword ptr [EBP + 0x36]      ; 0049d2de
    MOV dword ptr [EBP + 0x7a],ECX      ; 0049d2e1
    ADD EAX,ECX                         ; 0049d2e4
    FILD dword ptr [EBP + 0x7a]         ; 0049d2e6
    MOV dword ptr [EBP + 0x7a],EAX      ; 0049d2e9
    FMUL ST1                            ; 0049d2ec
    FILD dword ptr [EBP + 0x7a]         ; 0049d2ee
    FMUL ST2                            ; 0049d2f1
    SUB ESP,0x8                         ; 0049d2f3
    FSTP double ptr [ESP]               ; 0049d2f6
    SUB ESP,0x8                         ; 0049d2f9
    FSTP double ptr [ESP]               ; 0049d2fc
    MOV EAX,dword ptr [EBP + 0x36]      ; 0049d2ff
    MOV EBX,dword ptr [EBP + 0x3a]      ; 0049d302
    MOV dword ptr [EBP + 0x7a],EAX      ; 0049d305
    PUSH EBX                            ; 0049d308
    FILD dword ptr [EBP + 0x7a]         ; 0049d309
    FMULP                               ; 0049d30c
    SUB ESP,0x8                         ; 0049d30e
    FSTP double ptr [ESP]               ; 0049d311
    MOV ESI,dword ptr [EBP + 0x32]      ; 0049d314
    PUSH ESI                            ; 0049d317
    CALL sound_sndmain.cpp_countActiveSfx_FUN_005275e0 ; 0049d318
        ;   XREF to: 005275e0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_countActiveSfx_FUN_005275e0()
    PUSH EAX                            ; 0049d31d
    PUSH 0x5826ca                       ; 0049d31e | = "SFX: %d Samples: Active: %d/%.1fk Ava..."
    LEA EAX,[EBP + 0xfffffdb2]          ; 0049d323
    PUSH EAX                            ; 0049d329
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0049d32a
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    MOV EAX,[0x005b7620]                ; 0049d32f | g_WindowHeight
    ADD ESP,0x34                        ; 0049d334
    SUB EAX,0x42                        ; 0049d337
    PUSH EAX                            ; 0049d33a
    PUSH 0x0                            ; 0049d33b
    LEA EAX,[EBP + 0xfffffdb2]          ; 0049d33d
    PUSH EAX                            ; 0049d343
    CALL engine_2d.c_drawText_FUN_00402600 ; 0049d344
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00402600(char * text, int x, int y)
    ADD ESP,0xc                         ; 0049d349
    LEA EAX,[EBP + 0xfffffdb2]          ; 0049d34c
    PUSH EAX                            ; 0049d352
    CALL engine_texture.cpp_getTextureCacheStats_FUN_00545a80 ; 0049d353
        ;   XREF to: 00545a80 (UNCONDITIONAL_CALL)  ; void engine_texture.cpp_getTextureCacheStats_FUN_00545a80(char * output_buffer)
    MOV EAX,[0x005b7620]                ; 0049d358 | g_WindowHeight
    ADD ESP,0x4                         ; 0049d35d
    SUB EAX,0x37                        ; 0049d360
    PUSH EAX                            ; 0049d363
    PUSH 0x0                            ; 0049d364
    LEA EAX,[EBP + 0xfffffdb2]          ; 0049d366
    PUSH EAX                            ; 0049d36c
    CALL engine_2d.c_drawText_FUN_00402600 ; 0049d36d
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00402600(char * text, int x, int y)
    ADD ESP,0xc                         ; 0049d372
    LEA EAX,[EBP + 0xfffffdb2]          ; 0049d375
    PUSH EAX                            ; 0049d37b
    CALL core_skeleton.cpp_FUN_0051f760 ; 0049d37c
        ;   XREF to: 0051f760 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0051f760(char * output_buffer)
    MOV EAX,[0x005b7620]                ; 0049d381 | g_WindowHeight
    ADD ESP,0x4                         ; 0049d386
    SUB EAX,0x2c                        ; 0049d389
    PUSH EAX                            ; 0049d38c
    PUSH 0x0                            ; 0049d38d
    LEA EAX,[EBP + 0xfffffdb2]          ; 0049d38f
    PUSH EAX                            ; 0049d395
    CALL engine_2d.c_drawText_FUN_00402600 ; 0049d396
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00402600(char * text, int x, int y)
    MOV EAX,[0x005b7620]                ; 0049d39b | g_WindowHeight
    ADD ESP,0xc                         ; 0049d3a0
    SUB EAX,0x21                        ; 0049d3a3
    PUSH EAX                            ; 0049d3a6
    MOV EAX,dword ptr [EBP + 0x92]      ; 0049d3a7
    PUSH 0x0                            ; 0049d3ad
    ADD EAX,0xd0                        ; 0049d3af
    PUSH EAX                            ; 0049d3b4
    CALL engine_2d.c_drawText_FUN_00402600 ; 0049d3b5
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00402600(char * text, int x, int y)
    ADD ESP,0xc                         ; 0049d3ba
    CMP dword ptr [0x01c78ad8],0x0      ; 0049d3bd | DAT_01c78ad8
        ;   Label: LAB_0049d3bd
    JZ 0x0049d41d                       ; 0049d3c4
        ;   XREF to: 0049d41d (CONDITIONAL_JUMP)  ; LAB_0049d41d
    CALL sound_sndmain.cpp_getFirstActiveSfx_FUN_005274e0 ; 0049d3c6
        ;   XREF to: 005274e0 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_getFirstActiveSfx_FUN_005274e0()
    MOV ESI,0x37                        ; 0049d3cb
    MOV EBX,EAX                         ; 0049d3d0
    TEST EAX,EAX                        ; 0049d3d2
    JZ 0x0049d41d                       ; 0049d3d4
        ;   XREF to: 0049d41d (CONDITIONAL_JUMP)  ; LAB_0049d41d
    LEA EAX,[EBP + 0xfffffa8a]          ; 0049d3d6
        ;   Label: LAB_0049d3d6
    PUSH EAX                            ; 0049d3dc
    CALL sound_sndmain.cpp_CSfxSample_init_FUN_00525b70 ; 0049d3dd
        ;   XREF to: 00525b70 (UNCONDITIONAL_CALL)  ; CSfxSample * sound_sndmain.cpp_CSfxSample_init_FUN_00525b70(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 0049d3e2
    LEA EAX,[EBP + 0xfffffa8a]          ; 0049d3e5
    PUSH EAX                            ; 0049d3eb
    PUSH EBX                            ; 0049d3ec
    CALL sound_sndmain.cpp_getSfxSampleInfo_FUN_00526cd0 ; 0049d3ed
        ;   XREF to: 00526cd0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getSfxSampleInfo_FUN_00526cd0(uint sfx_handle, CSfxSample * output_buffer)
    ADD ESP,0x8                         ; 0049d3f2
    TEST EAX,EAX                        ; 0049d3f5
    JZ 0x0049d40e                       ; 0049d3f7
        ;   XREF to: 0049d40e (CONDITIONAL_JUMP)  ; LAB_0049d40e
    LEA EAX,[EBP + 0xfffffa8a]          ; 0049d3f9
    PUSH EAX                            ; 0049d3ff
    PUSH ESI                            ; 0049d400
    PUSH 0x0                            ; 0049d401
    CALL engine_2d.c_FUN_00402760       ; 0049d403
        ;   XREF to: 00402760 (UNCONDITIONAL_CALL)  ; void engine_2d.c_FUN_00402760(int x, int y, char * text)
    ADD ESI,0xb                         ; 0049d408
    ADD ESP,0xc                         ; 0049d40b
    PUSH EBX                            ; 0049d40e
        ;   Label: LAB_0049d40e
    CALL sound_sndmain.cpp_FUN_00527520 ; 0049d40f
        ;   XREF to: 00527520 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_FUN_00527520(uint current_sfx_handle)
    ADD ESP,0x4                         ; 0049d414
    MOV EBX,EAX                         ; 0049d417
    TEST EAX,EAX                        ; 0049d419
    JNZ 0x0049d3d6                      ; 0049d41b
        ;   XREF to: 0049d3d6 (CONDITIONAL_JUMP)  ; LAB_0049d3d6
    MOV EAX,dword ptr [EBP + 0x92]      ; 0049d41d
        ;   Label: LAB_0049d41d
    CMP dword ptr [EAX + 0x1d8],0x0     ; 0049d423
    JZ 0x0049d43b                       ; 0049d42a
        ;   XREF to: 0049d43b (CONDITIONAL_JUMP)  ; LAB_0049d43b
    MOV ECX,dword ptr [0x005b7650]      ; 0049d42c | DAT_005b7650
    PUSH ECX                            ; 0049d432
    CALL core_event.cpp_CEventList_render_FUN_0047dd80 ; 0049d433
        ;   XREF to: 0047dd80 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_render_FUN_0047dd80(CEventList * this_ptr)
    ADD ESP,0x4                         ; 0049d438
    MOV EAX,dword ptr [EBP + 0x92]      ; 0049d43b
        ;   Label: LAB_0049d43b
    CMP dword ptr [EAX + 0x1dc],0x0     ; 0049d441
    JZ 0x0049d477                       ; 0049d448
        ;   XREF to: 0049d477 (CONDITIONAL_JUMP)  ; LAB_0049d477
    CMP dword ptr [EAX + 0x278],0x0     ; 0049d44a
    JZ 0x0049d477                       ; 0049d451
        ;   XREF to: 0049d477 (CONDITIONAL_JUMP)  ; LAB_0049d477
    MOV EAX,[0x005b7620]                ; 0049d453 | g_WindowHeight
    DEC EAX                             ; 0049d458
    PUSH EAX                            ; 0049d459
    MOV EAX,[0x005b761c]                ; 0049d45a | g_WindowWidth
    DEC EAX                             ; 0049d45f
    PUSH EAX                            ; 0049d460
    PUSH 0xf0                           ; 0049d461
    PUSH 0x0                            ; 0049d466
    MOV EDI,dword ptr [0x005be220]      ; 0049d468 | DAT_005be220
    PUSH EDI                            ; 0049d46e | g_CScript_01e56da0
    CALL core_script.cpp_CScript_FUN_004fe9d0 ; 0049d46f
        ;   XREF to: 004fe9d0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_FUN_004fe9d0(CScript * this_ptr, int left, int top, int right, ...)
    ADD ESP,0x14                        ; 0049d474
    MOV EAX,dword ptr [EBP + 0x92]      ; 0049d477
        ;   Label: LAB_0049d477
    CMP dword ptr [EAX + 0x1f8],0x0     ; 0049d47d
    JZ 0x0049d4b6                       ; 0049d484
        ;   XREF to: 0049d4b6 (CONDITIONAL_JUMP)  ; LAB_0049d4b6
    LEA EAX,[EBP + 0xfffffcb2]          ; 0049d486
    PUSH EAX                            ; 0049d48c
    MOV ECX,dword ptr [0x005b6d50]      ; 0049d48d | g_CEditorTools_PTR_005b6d50
    PUSH ECX                            ; 0049d493
    CALL shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004736d0 ; 0049d494
        ;   XREF to: 004736d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004736d0(CEditorTools * this_ptr, char * output_buffer)
    MOV EAX,[0x005b7620]                ; 0049d499 | g_WindowHeight
    ADD ESP,0x8                         ; 0049d49e
    SUB EAX,0x42                        ; 0049d4a1
    PUSH EAX                            ; 0049d4a4
    PUSH 0x0                            ; 0049d4a5
    LEA EAX,[EBP + 0xfffffcb2]          ; 0049d4a7
    PUSH EAX                            ; 0049d4ad
    CALL engine_2d.c_drawText_FUN_00402600 ; 0049d4ae
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00402600(char * text, int x, int y)
    ADD ESP,0xc                         ; 0049d4b3
    MOV EAX,[0x01cae0e8]                ; 0049d4b6 | DAT_01cae0e8
        ;   Label: LAB_0049d4b6
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 0049d4bb
    PUSH EAX                            ; 0049d4c2
    MOV EDX,dword ptr [EAX + 0x14c]     ; 0049d4c3
    CALL dword ptr [EDX + 0x104]        ; 0049d4c9
    ADD ESP,0x4                         ; 0049d4cf
    CMP EAX,0x2                         ; 0049d4d2
    JNZ 0x0049d53f                      ; 0049d4d5
        ;   XREF to: 0049d53f (CONDITIONAL_JUMP)  ; LAB_0049d53f
    PUSH 0x58271b                       ; 0049d4d7 | = "You're dead.  Game over."
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049d4dc
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 0049d4e1
    LEA EDI,[EBP + 0xfffffbb2]          ; 0049d4e4
    MOV ESI,EAX                         ; 0049d4ea
    PUSH EDI                            ; 0049d4ec
    MOV AL,byte ptr [ESI]               ; 0049d4ed
        ;   Label: LAB_0049d4ed
    MOV byte ptr [EDI],AL               ; 0049d4ef
    CMP AL,0x0                          ; 0049d4f1
    JZ 0x0049d505                       ; 0049d4f3
        ;   XREF to: 0049d505 (CONDITIONAL_JUMP)  ; LAB_0049d505
    MOV AL,byte ptr [ESI + 0x1]         ; 0049d4f5
    ADD ESI,0x2                         ; 0049d4f8
    MOV byte ptr [EDI + 0x1],AL         ; 0049d4fb
    ADD EDI,0x2                         ; 0049d4fe
    CMP AL,0x0                          ; 0049d501
    JNZ 0x0049d4ed                      ; 0049d503
        ;   XREF to: 0049d4ed (CONDITIONAL_JUMP)  ; LAB_0049d4ed
    POP EDI                             ; 0049d505
        ;   Label: LAB_0049d505
    LEA EAX,[EBP + 0xfffffbb2]          ; 0049d506
    PUSH EAX                            ; 0049d50c
    XOR EAX,EAX                         ; 0049d50d
    PUSH 0x0                            ; 0049d50f
    MOV AL,[0x01bff320]                 ; 0049d511 | g_ColorCubeLookup+0x7c00
    PUSH EAX                            ; 0049d516
    MOV EAX,[0x014b98f8]                ; 0049d517 | g_CBitFont_PTR_014b98f8
    MOV EDX,dword ptr [EAX + 0x316c]    ; 0049d51c
    MOV ECX,dword ptr [0x005b7620]      ; 0049d522 | g_WindowHeight
    ADD EDX,EDX                         ; 0049d528
    SUB ECX,EDX                         ; 0049d52a
    PUSH ECX                            ; 0049d52c
    MOV EBX,dword ptr [0x005b761c]      ; 0049d52d | g_WindowWidth
    PUSH EBX                            ; 0049d533
    PUSH 0x0                            ; 0049d534
    PUSH EAX                            ; 0049d536
    CALL engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_00490de0 ; 0049d537
        ;   XREF to: 00490de0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_00490de0(CBitFont * this_ptr, int left_x, int right_x, int y, ...)
    ADD ESP,0x1c                        ; 0049d53c
    MOV EAX,dword ptr [EBP + 0x92]      ; 0049d53f
        ;   Label: LAB_0049d53f
    CMP dword ptr [EAX + 0xac8],0x0     ; 0049d545
    JZ 0x0049d557                       ; 0049d54c
        ;   XREF to: 0049d557 (CONDITIONAL_JUMP)  ; LAB_0049d557
    PUSH EAX                            ; 0049d54e
    CALL core_game.cpp_CGame_showCustomizableKeys_FUN_0049b4e0 ; 0049d54f
        ;   XREF to: 0049b4e0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_showCustomizableKeys_FUN_0049b4e0(CGame * this_ptr)
    ADD ESP,0x4                         ; 0049d554
    MOV EAX,dword ptr [EBP + 0x92]      ; 0049d557
        ;   Label: LAB_0049d557
    CMP dword ptr [EAX + 0x280],0x0     ; 0049d55d
    JZ 0x0049d575                       ; 0049d564
        ;   XREF to: 0049d575 (CONDITIONAL_JUMP)  ; LAB_0049d575
    MOV ECX,dword ptr [0x005ad350]      ; 0049d566 | g_CConsole_PTR_005ad350
    PUSH ECX                            ; 0049d56c | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_render_FUN_0043aec0 ; 0049d56d
        ;   XREF to: 0043aec0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_render_FUN_0043aec0(CConsole * this_ptr)
    ADD ESP,0x4                         ; 0049d572
    MOV EAX,[0x01c78424]                ; 0049d575 | g_CPickList_01c78424
        ;   Label: LAB_0049d575
    TEST EAX,EAX                        ; 0049d57a
    JLE 0x0049d58b                      ; 0049d57c
        ;   XREF to: 0049d58b (CONDITIONAL_JUMP)  ; LAB_0049d58b
    PUSH 0x1c78424                      ; 0049d57e | g_CPickList_01c78424
    CALL shape_edittool.cpp_FUN_004759d0 ; 0049d583
        ;   XREF to: 004759d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_FUN_004759d0(CPickList * this_ptr)
    ADD ESP,0x4                         ; 0049d588
    MOV EAX,dword ptr [EBP + 0x92]      ; 0049d58b
        ;   Label: LAB_0049d58b
    CMP dword ptr [EAX + 0x1fc],0x0     ; 0049d591
    JZ 0x0049d5ab                       ; 0049d598
        ;   XREF to: 0049d5ab (CONDITIONAL_JUMP)  ; LAB_0049d5ab
    PUSH 0x0                            ; 0049d59a
    MOV ESI,dword ptr [0x005b6d50]      ; 0049d59c | g_CEditorTools_PTR_005b6d50
    PUSH ESI                            ; 0049d5a2
    CALL shape_edittool.cpp_CEditorTools_drawMousePointer_FUN_004724e0 ; 0049d5a3
        ;   XREF to: 004724e0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_drawMousePointer_FUN_004724e0(CEditorTools * this_ptr, int use_clipping)
    ADD ESP,0x8                         ; 0049d5a8
    CALL engine_special.cpp_unlockFrame_FUN_00532320 ; 0049d5ab
        ;   XREF to: 00532320 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_unlockFrame_FUN_00532320()
        ;   Label: LAB_0049d5ab
    CMP dword ptr [EBP + 0x4e],0x0      ; 0049d5b0
        ;   Label: LAB_0049d5b0
    JZ 0x0049ccbc                       ; 0049d5b4
        ;   XREF to: 0049ccbc (CONDITIONAL_JUMP)  ; LAB_0049ccbc
    CALL wincore_wddvmem.cpp_closeScreenDevice_FUN_00553520 ; 0049d5ba
        ;   XREF to: 00553520 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_closeScreenDevice_FUN_00553520()
    LEA ESP,[EBP + 0x7e]                ; 0049d5bf
    POP EBP                             ; 0049d5c2
    POP EDI                             ; 0049d5c3
    POP ESI                             ; 0049d5c4
    POP EBX                             ; 0049d5c5
    RET                                 ; 0049d5c6
    CMP dword ptr [EAX + 0x27c],0x0     ; 0049d5c7
        ;   Label: LAB_0049d5c7
    JNZ 0x0049cd04                      ; 0049d5ce
        ;   XREF to: 0049cd04 (CONDITIONAL_JUMP)  ; LAB_0049cd04
    JMP 0x0049cd09                      ; 0049d5d4
        ;   XREF to: 0049cd09 (UNCONDITIONAL_JUMP)  ; LAB_0049cd09
    PUSH EAX                            ; 0049d5d9
        ;   Label: LAB_0049d5d9
    CALL core_game.cpp_CGame_process_FUN_004a6010 ; 0049d5da
        ;   XREF to: 004a6010 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_process_FUN_004a6010(CGame * this_ptr)
    ADD ESP,0x4                         ; 0049d5df
    MOV EBX,dword ptr [0x005bed68]      ; 0049d5e2 | g_CSound_PTR_005bed68
    PUSH EBX                            ; 0049d5e8
    CALL core_sound.cpp_CSound_FUN_0052dff0 ; 0049d5e9
        ;   XREF to: 0052dff0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_FUN_0052dff0(CSound * this_ptr)
    ADD ESP,0x4                         ; 0049d5ee
    MOV ESI,dword ptr [0x005b9284]      ; 0049d5f1 | PTR_DAT_005b9284
    PUSH ESI                            ; 0049d5f7
    CALL xxx_unk.c_FUN_004940d0         ; 0049d5f8
        ;   XREF to: 004940d0 (UNCONDITIONAL_CALL)  ; undefined xxx_unk.c_FUN_004940d0()
    ADD ESP,0x4                         ; 0049d5fd
    JMP 0x0049ce7c                      ; 0049d600
        ;   XREF to: 0049ce7c (UNCONDITIONAL_JUMP)  ; LAB_0049ce7c
    PUSH 0x5825f0                       ; 0049d605 | BYTE_ARRAY_005825f0
        ;   Label: LAB_0049d605
    CALL support_newmsg.cpp_decryptMessage_FUN_004ee3f0 ; 0049d60a
        ;   XREF to: 004ee3f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_004ee3f0(char * encrypted_msg)
    ADD ESP,0x4                         ; 0049d60f
    PUSH EAX                            ; 0049d612
    CALL crt_env.c_getenv_FUN_00566e10  ; 0049d613
        ;   XREF to: 00566e10 (UNCONDITIONAL_CALL)  ; char * crt_env.c_getenv_FUN_00566e10(char * name)
    ADD ESP,0x4                         ; 0049d618
    TEST EAX,EAX                        ; 0049d61b
    JNZ 0x0049cf70                      ; 0049d61d
        ;   XREF to: 0049cf70 (CONDITIONAL_JUMP)  ; LAB_0049cf70
    JMP 0x0049cfb1                      ; 0049d623
        ;   XREF to: 0049cfb1 (UNCONDITIONAL_JUMP)  ; LAB_0049cfb1
    MOV ESI,0x1                         ; 0049d628
        ;   Label: LAB_0049d628
    MOV dword ptr [0x01c78ad4],ECX      ; 0049d62d | DAT_01c78ad4
    MOV dword ptr [0x01c78acc],ESI      ; 0049d633 | DAT_01c78acc
    JMP 0x0049d040                      ; 0049d639
        ;   XREF to: 0049d040 (UNCONDITIONAL_JUMP)  ; LAB_0049d040
    CMP dword ptr [0x01c78acc],0x0      ; 0049d63e | DAT_01c78acc
        ;   Label: LAB_0049d63e
    JZ 0x0049d066                       ; 0049d645
        ;   XREF to: 0049d066 (CONDITIONAL_JUMP)  ; LAB_0049d066
    MOV EBX,dword ptr [0x01c78ad4]      ; 0049d64b | DAT_01c78ad4
    PUSH EBX                            ; 0049d651
    PUSH 0x582386                       ; 0049d652 | = "noc%05d.raw"
    LEA EAX,[EBP + 0xffffff7a]          ; 0049d657
    PUSH EAX                            ; 0049d65d
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0049d65e
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 0049d663
    LEA EAX,[EBP + 0xffffff7a]          ; 0049d666
    PUSH EAX                            ; 0049d66c
    PUSH 0x582392                       ; 0049d66d | = "Movie recording active: movie\\%s"
    LEA EAX,[EBP + 0xfffffeb2]          ; 0049d672
    PUSH EAX                            ; 0049d678
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0049d679
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 0049d67e
    PUSH 0x5823b3                       ; 0049d681 | = "wb"
    LEA EAX,[EBP + 0xffffff7a]          ; 0049d686
    PUSH EAX                            ; 0049d68c
    PUSH 0x5823b6                       ; 0049d68d | = "movie"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 0049d692
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00456a60(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0049d697
    MOV dword ptr [EBP + 0x5a],EAX      ; 0049d69a
    TEST EAX,EAX                        ; 0049d69d
    JZ 0x0049d066                       ; 0049d69f
        ;   XREF to: 0049d066 (CONDITIONAL_JUMP)  ; LAB_0049d066
    XOR ESI,ESI                         ; 0049d6a5
    MOV EDI,dword ptr [0x005b9368]      ; 0049d6a7 | DAT_005b9368
    MOV dword ptr [EBP + 0x56],ESI      ; 0049d6ad
    TEST EDI,EDI                        ; 0049d6b0
    JLE 0x0049d828                      ; 0049d6b2
        ;   XREF to: 0049d828 (CONDITIONAL_JUMP)  ; LAB_0049d828
    XOR EDI,EDI                         ; 0049d6b8
        ;   Label: LAB_0049d6b8
    MOV EAX,[0x005b9364]                ; 0049d6ba | DAT_005b9364
    MOV dword ptr [EBP + 0x5e],EDI      ; 0049d6bf
    TEST EAX,EAX                        ; 0049d6c2
    JLE 0x0049d813                      ; 0049d6c4
        ;   XREF to: 0049d813 (CONDITIONAL_JUMP)  ; LAB_0049d813
    MOV EAX,dword ptr [EBP + 0x56]      ; 0049d6ca
    INC EAX                             ; 0049d6cd
    MOV dword ptr [EBP + 0x52],EAX      ; 0049d6ce
    MOV EDX,dword ptr [EBP + 0x5e]      ; 0049d6d1
        ;   Label: LAB_0049d6d1
    MOV EDI,dword ptr [0x005b761c]      ; 0049d6d4 | g_WindowWidth
    IMUL EDX,EDI                        ; 0049d6da
    MOV ECX,dword ptr [0x005b9364]      ; 0049d6dd | DAT_005b9364
    MOV EAX,EDX                         ; 0049d6e3
    SAR EDX,0x1f                        ; 0049d6e5
    IDIV ECX                            ; 0049d6e8
    MOV EDX,dword ptr [EBP + 0x5e]      ; 0049d6ea
    INC EDX                             ; 0049d6ed
    IMUL EDX,EDI                        ; 0049d6ee
    MOV dword ptr [EBP + 0x66],EAX      ; 0049d6f1
    MOV EAX,EDX                         ; 0049d6f4
    SAR EDX,0x1f                        ; 0049d6f6
    IDIV ECX                            ; 0049d6f9
    MOV EDI,dword ptr [0x005b7620]      ; 0049d6fb | g_WindowHeight
    MOV EDX,dword ptr [EBP + 0x56]      ; 0049d701
    IMUL EDX,EDI                        ; 0049d704
    MOV ECX,dword ptr [0x005b9368]      ; 0049d707 | DAT_005b9368
    MOV dword ptr [EBP + 0x6e],EAX      ; 0049d70d
    MOV EAX,EDX                         ; 0049d710
    SAR EDX,0x1f                        ; 0049d712
    IDIV ECX                            ; 0049d715
    MOV EDX,dword ptr [EBP + 0x52]      ; 0049d717
    IMUL EDX,EDI                        ; 0049d71a
    MOV ESI,dword ptr [0x005b9368]      ; 0049d71d | DAT_005b9368
    MOV ECX,EAX                         ; 0049d723
    MOV EAX,EDX                         ; 0049d725
    SAR EDX,0x1f                        ; 0049d727
    IDIV ESI                            ; 0049d72a
    XOR EDI,EDI                         ; 0049d72c
    XOR EBX,EBX                         ; 0049d72e
    MOV dword ptr [EBP + 0x76],EDI      ; 0049d730
    MOV dword ptr [EBP + 0x72],EDI      ; 0049d733
    MOV EDX,EAX                         ; 0049d736
    XOR ESI,ESI                         ; 0049d738
    CMP ECX,EAX                         ; 0049d73a
    JGE 0x0049d7b4                      ; 0049d73c
        ;   XREF to: 0049d7b4 (CONDITIONAL_JUMP)  ; LAB_0049d7b4
    LEA EAX,[ECX*0x4 + 0x0]             ; 0049d742
    SHL EDX,0x2                         ; 0049d749
    MOV dword ptr [EBP + 0x6a],EAX      ; 0049d74c
    MOV dword ptr [EBP + 0x62],EDX      ; 0049d74f
    MOV EDI,dword ptr [EBP + 0x6e]      ; 0049d752
        ;   Label: LAB_0049d752
    MOV EDX,dword ptr [EBP + 0x66]      ; 0049d755
    CMP EDX,EDI                         ; 0049d758
    JGE 0x0049d7a4                      ; 0049d75a
        ;   XREF to: 0049d7a4 (CONDITIONAL_JUMP)  ; LAB_0049d7a4
    MOV EAX,dword ptr [EBP + 0x6a]      ; 0049d75c
    LEA ECX,[EDX*0x4 + 0x0]             ; 0049d75f
    MOV EAX,dword ptr [EAX + 0x1bd2fa0] ; 0049d766 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    ADD ECX,EAX                         ; 0049d76c
    MOV EAX,dword ptr [ECX]             ; 0049d76e
        ;   Label: LAB_0049d76e
    MOV EDI,EAX                         ; 0049d770
    SHR EDI,0x10                        ; 0049d772
    AND EDI,0xff                        ; 0049d775
    ADD ECX,0x4                         ; 0049d77b
    ADD ESI,EDI                         ; 0049d77e
    MOV EDI,EAX                         ; 0049d780
    INC EDX                             ; 0049d782
    SHR EDI,0x8                         ; 0049d783
    AND EAX,0xff                        ; 0049d786
    ADD EBX,EAX                         ; 0049d78b
    AND EDI,0xff                        ; 0049d78d
    MOV EAX,dword ptr [EBP + 0x76]      ; 0049d793
    ADD dword ptr [EBP + 0x72],EDI      ; 0049d796
    INC EAX                             ; 0049d799
    MOV EDI,dword ptr [EBP + 0x6e]      ; 0049d79a
    MOV dword ptr [EBP + 0x76],EAX      ; 0049d79d
    CMP EDX,EDI                         ; 0049d7a0
    JL 0x0049d76e                       ; 0049d7a2
        ;   XREF to: 0049d76e (CONDITIONAL_JUMP)  ; LAB_0049d76e
    MOV EDX,dword ptr [EBP + 0x6a]      ; 0049d7a4
        ;   Label: LAB_0049d7a4
    ADD EDX,0x4                         ; 0049d7a7
    MOV ECX,dword ptr [EBP + 0x62]      ; 0049d7aa
    MOV dword ptr [EBP + 0x6a],EDX      ; 0049d7ad
    CMP EDX,ECX                         ; 0049d7b0
    JL 0x0049d752                       ; 0049d7b2
        ;   XREF to: 0049d752 (CONDITIONAL_JUMP)  ; LAB_0049d752
    MOV ECX,dword ptr [EBP + 0x76]      ; 0049d7b4
        ;   Label: LAB_0049d7b4
    MOV EDX,ESI                         ; 0049d7b7
    MOV EAX,ESI                         ; 0049d7b9
    SAR EDX,0x1f                        ; 0049d7bb
    IDIV ECX                            ; 0049d7be
    MOV ESI,EAX                         ; 0049d7c0
    MOV EAX,dword ptr [EBP + 0x72]      ; 0049d7c2
    MOV EDX,EAX                         ; 0049d7c5
    SAR EDX,0x1f                        ; 0049d7c7
    IDIV ECX                            ; 0049d7ca
    MOV dword ptr [EBP + 0x72],EAX      ; 0049d7cc
    MOV EDX,EBX                         ; 0049d7cf
    MOV EAX,EBX                         ; 0049d7d1
    SAR EDX,0x1f                        ; 0049d7d3
    IDIV ECX                            ; 0049d7d6
    MOV EDI,dword ptr [EBP + 0x5a]      ; 0049d7d8
    PUSH EDI                            ; 0049d7db
    PUSH ESI                            ; 0049d7dc
    MOV EBX,EAX                         ; 0049d7dd
    CALL crt_stdio.c_fputc_FUN_00566cc0 ; 0049d7df
        ;   XREF to: 00566cc0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_00566cc0(int character, _FILE * file)
    ADD ESP,0x8                         ; 0049d7e4
    PUSH EDI                            ; 0049d7e7
    MOV EDX,dword ptr [EBP + 0x72]      ; 0049d7e8
    PUSH EDX                            ; 0049d7eb
    CALL crt_stdio.c_fputc_FUN_00566cc0 ; 0049d7ec
        ;   XREF to: 00566cc0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_00566cc0(int character, _FILE * file)
    ADD ESP,0x8                         ; 0049d7f1
    PUSH EDI                            ; 0049d7f4
    PUSH EBX                            ; 0049d7f5
    CALL crt_stdio.c_fputc_FUN_00566cc0 ; 0049d7f6
        ;   XREF to: 00566cc0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_00566cc0(int character, _FILE * file)
    MOV EBX,dword ptr [EBP + 0x5e]      ; 0049d7fb
    MOV ESI,dword ptr [0x005b9364]      ; 0049d7fe | DAT_005b9364
    INC EBX                             ; 0049d804
    ADD ESP,0x8                         ; 0049d805
    MOV dword ptr [EBP + 0x5e],EBX      ; 0049d808
    CMP EBX,ESI                         ; 0049d80b
    JL 0x0049d6d1                       ; 0049d80d
        ;   XREF to: 0049d6d1 (CONDITIONAL_JUMP)  ; LAB_0049d6d1
    MOV EDX,dword ptr [EBP + 0x56]      ; 0049d813
        ;   Label: LAB_0049d813
    INC EDX                             ; 0049d816
    MOV ECX,dword ptr [0x005b9368]      ; 0049d817 | DAT_005b9368
    MOV dword ptr [EBP + 0x56],EDX      ; 0049d81d
    CMP EDX,ECX                         ; 0049d820
    JL 0x0049d6b8                       ; 0049d822
        ;   XREF to: 0049d6b8 (CONDITIONAL_JUMP)  ; LAB_0049d6b8
    MOV EBX,dword ptr [EBP + 0x5a]      ; 0049d828
        ;   Label: LAB_0049d828
    PUSH EBX                            ; 0049d82b
    CALL crt_stdio.c_fclose_FUN_00563380 ; 0049d82c
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 0049d831
    PUSH 0x0                            ; 0049d834
    PUSH 0x0                            ; 0049d836
    LEA EAX,[EBP + 0xfffffeb2]          ; 0049d838
    PUSH EAX                            ; 0049d83e
    CALL engine_2d.c_drawText_FUN_00402600 ; 0049d83f
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00402600(char * text, int x, int y)
    MOV ESI,dword ptr [0x01c78ad4]      ; 0049d844 | DAT_01c78ad4
    INC ESI                             ; 0049d84a
    ADD ESP,0xc                         ; 0049d84b
    MOV dword ptr [0x01c78ad4],ESI      ; 0049d84e | DAT_01c78ad4
    JMP 0x0049d066                      ; 0049d854
        ;   XREF to: 0049d066 (UNCONDITIONAL_JUMP)  ; LAB_0049d066
    MOV dword ptr [0x01c71e38],EBX      ; 0049d859 | DAT_01c71e38
        ;   Label: LAB_0049d859
    MOV dword ptr [0x01c71e30],EBX      ; 0049d85f | DAT_01c71e30
    MOV dword ptr [0x01c71e34],EBX      ; 0049d865 | DAT_01c71e34
    JMP 0x0049d3bd                      ; 0049d86b
        ;   XREF to: 0049d3bd (UNCONDITIONAL_JUMP)  ; LAB_0049d3bd

