; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_game_cpp_CGame_runGameSession_FUN_0049da10(int param_1)
;
; Local Variables:
; undefined        Stack[-0x400]:1  local_400
; undefined        Stack[-0x290]:1  local_290
; undefined        Stack[-0x120]:1  local_120
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_mission.cpp_CDemonMission_run_FUN_004d9440 at 004d94bb
;
; Referenced Globals:
;   string s_Nocturne_is_alive_and_kicking_005827be
;   string s_15:09:32_005827dd
;   string s_Nov_02_1999_005827e6
;   string s_game.cpp_built_on_%s_%s_005827f2
;   string s_System_RAM:_%d_0058280c
;   string s_Swap_file:_%d_0058281c
;   undefined4 DAT_0058282b
;   string s_ESP:_%08X_0058282f
;   undefined4 DAT_0058283a
;   string s_Flashlight_00582870
;   undefined4 s_lashlight_00582870+1
;   undefined4 s_ashlight_00582870+2
;   undefined4 s_shlight_00582870+3
;   string s_Leave_network_game_0058287b
;   string s_Return_to_game_0058288e
;   ... and 55 more
;
; Called Functions:
;   core_dlight.cpp_CDemonLight_init_FUN_0044e1e0
;   core_fire.cpp_CFireEffect_init_FUN_0048a150
;   core_game.cpp_CGame_beginFadeIn_FUN_004a37e0
;   core_game.cpp_CGame_beginFadeOut_FUN_004a3820
;   core_game.cpp_CGame_clearOverlay_FUN_0049aa90
;   core_game.cpp_CGame_fadeIn_FUN_004a3a50
;   core_game.cpp_CGame_loadAssets_FUN_004a3660
;   core_game.cpp_CGame_playerControls_FUN_0049e7d0
;   core_game.cpp_CGame_processFudge_FUN_0049b260
;   core_game.cpp_CGame_promptLoadGame_FUN_004a6570
;   core_game.cpp_CGame_resetInputAndCenterCursor_FUN_0049f8c0
;   core_game.cpp_CGame_saveClockTime_FUN_0049a890
;   core_game.cpp_CGame_setGameRes_FUN_0049d870
;   core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_0049d960
;   core_game.cpp_CGame_updateStatusDisplays_FUN_0049b0b0
;   ... and 42 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049da10
        ;   Label: core_game.cpp_CGame_runGameSession_FUN_0049da10
    PUSH ESI                            ; 0049da11
    PUSH EDI                            ; 0049da12
    PUSH EBP                            ; 0049da13
    MOV EBP,ESP                         ; 0049da14
    SUB ESP,0x3f0                       ; 0049da16
    MOV ESI,dword ptr [0x005ad350]      ; 0049da1c | PTR_DAT_005ad350
    XOR EDX,EDX                         ; 0049da22
    PUSH ESI                            ; 0049da24 | DAT_0077ad0c
    MOV dword ptr [EBP + -0x4],EDX      ; 0049da25
    MOV dword ptr [EBP + -0xc],EDX      ; 0049da28
    CALL engine_console.cpp_CConsole_reset_FUN_0043ae00 ; 0049da2b
        ;   XREF to: 0043ae00 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_reset_FUN_0043ae00()
    ADD ESP,0x4                         ; 0049da30
    PUSH 0x5827be                       ; 0049da33 | = "Nocturne is alive and kicking\n"
    MOV EDI,dword ptr [0x005ad350]      ; 0049da38 | PTR_DAT_005ad350
    PUSH EDI                            ; 0049da3e | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 0049da3f
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    ADD ESP,0x8                         ; 0049da44
    PUSH 0x5827dd                       ; 0049da47 | = "15:09:32"
    PUSH 0x5827e6                       ; 0049da4c | = "Nov 02 1999"
    PUSH 0x5827f2                       ; 0049da51 | = "game.cpp built on %s %s\n\n"
    MOV EAX,[0x005ad350]                ; 0049da56 | PTR_DAT_005ad350
    PUSH EAX                            ; 0049da5b | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 0049da5c
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    ADD ESP,0x10                        ; 0049da61
    MOV EDX,dword ptr [0x02de20a8]      ; 0049da64 | DAT_02de20a8
    PUSH EDX                            ; 0049da6a
    PUSH 0x58280c                       ; 0049da6b | = "System RAM: %d\n"
    MOV ECX,dword ptr [0x005ad350]      ; 0049da70 | PTR_DAT_005ad350
    PUSH ECX                            ; 0049da76 | DAT_0077ad0c
    MOV EBX,0x1                         ; 0049da77
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 0049da7c
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    ADD ESP,0xc                         ; 0049da81
    MOV dword ptr [EBP + -0x8],EBX      ; 0049da84
    MOV EBX,dword ptr [0x02de20ac]      ; 0049da87 | DAT_02de20ac
    PUSH EBX                            ; 0049da8d
    PUSH 0x58281c                       ; 0049da8e | = "Swap file: %d\n"
    MOV ESI,dword ptr [0x005ad350]      ; 0049da93 | PTR_DAT_005ad350
    PUSH ESI                            ; 0049da99 | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 0049da9a
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    ADD ESP,0xc                         ; 0049da9f
    LEA EAX,[EBP + 0xfffffef0]          ; 0049daa2
    PUSH EAX                            ; 0049daa8
    MOV EDI,dword ptr [0x005b6d50]      ; 0049daa9 | DAT_005b6d50
    PUSH EDI                            ; 0049daaf
    CALL shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004736d0 ; 0049dab0
        ;   XREF to: 004736d0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004736d0()
    ADD ESP,0x8                         ; 0049dab5
    LEA EAX,[EBP + 0xfffffef0]          ; 0049dab8
    PUSH EAX                            ; 0049dabe
    PUSH 0x58282b                       ; 0049dabf | DAT_0058282b
    MOV EAX,[0x005ad350]                ; 0049dac4 | PTR_DAT_005ad350
    PUSH EAX                            ; 0049dac9 | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 0049daca
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    ADD ESP,0xc                         ; 0049dacf
    MOV dword ptr [EBP + 0xfffffff0],ESP ; 0049dad2
    MOV EAX,dword ptr [EBP + -0x10]     ; 0049dad8
    PUSH EAX                            ; 0049dadb
    PUSH 0x58282f                       ; 0049dadc | = "ESP: %08X\n"
    MOV EDX,dword ptr [0x005ad350]      ; 0049dae1 | PTR_DAT_005ad350
    PUSH EDX                            ; 0049dae7 | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 0049dae8
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049daed
    MOV dword ptr [EAX + 0x270],0x0     ; 0049daf0
    MOV dword ptr [EAX + 0x1fc],0x0     ; 0049dafa
    MOV dword ptr [EAX + 0x274],0x1     ; 0049db04
    MOV dword ptr [EAX + 0x1e4],0x0     ; 0049db0e
    MOV dword ptr [EAX + 0x1e8],0x0     ; 0049db18
    MOV dword ptr [EAX + 0x278],0x0     ; 0049db22
    MOV dword ptr [EAX + 0x1d0],0x0     ; 0049db2c
    MOV dword ptr [EAX + 0x1e0],0x0     ; 0049db36
    MOV dword ptr [EAX + 0x1d4],0x0     ; 0049db40
    MOV dword ptr [EAX + 0x1d8],0x0     ; 0049db4a
    MOV dword ptr [EAX + 0x1dc],0x0     ; 0049db54
    MOV dword ptr [EAX + 0x27c],0x0     ; 0049db5e
    ADD ESP,0xc                         ; 0049db68
    MOV dword ptr [EAX + 0x280],0x0     ; 0049db6b
    MOV dword ptr [EAX + 0x1ec],0x3f800000 ; 0049db75
    MOV dword ptr [EAX + 0x1f0],0x0     ; 0049db7f
    MOV dword ptr [EAX + 0x1f4],0x0     ; 0049db89
    MOV dword ptr [EAX + 0x1f8],0x0     ; 0049db93
    MOV byte ptr [EAX + 0x8b4],0x0      ; 0049db9d
    MOV dword ptr [EAX + 0x9b4],0x0     ; 0049dba4
    MOV dword ptr [EAX + 0x9b8],0x0     ; 0049dbae
    MOV dword ptr [EAX + 0x23c],0x0     ; 0049dbb8
    MOV dword ptr [EAX + 0xcc],0x0      ; 0049dbc2
    XOR ECX,ECX                         ; 0049dbcc
    MOV dword ptr [EAX + 0x208],ECX     ; 0049dbce
    MOV dword ptr [EAX + 0x238],ECX     ; 0049dbd4
    MOV dword ptr [EAX + 0x20c],ECX     ; 0049dbda
    MOV dword ptr [EAX + 0xac8],ECX     ; 0049dbe0
    MOV dword ptr [EAX + 0x240],ECX     ; 0049dbe6
    MOV dword ptr [EAX + 0x244],ECX     ; 0049dbec
    MOV dword ptr [EAX + 0x220],ECX     ; 0049dbf2
    MOV dword ptr [EAX + 0x218],ECX     ; 0049dbf8
    PUSH 0x58283a                       ; 0049dbfe | DAT_0058283a
    MOV dword ptr [EAX + 0x21c],ECX     ; 0049dc03
    MOV dword ptr [0x01c78420],ECX      ; 0049dc09 | DAT_01c78420
    MOV dword ptr [EAX + 0x210],ECX     ; 0049dc0f
    CALL support_newmsg.cpp_decryptMessage_FUN_004ee3f0 ; 0049dc15
        ;   XREF to: 004ee3f0 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_decryptMessage_FUN_004ee3f0()
    ADD ESP,0x4                         ; 0049dc1a
    PUSH EAX                            ; 0049dc1d
    CALL crt_env.c_getenv_FUN_00566e10  ; 0049dc1e
        ;   XREF to: 00566e10 (UNCONDITIONAL_CALL)  ; undefined crt_env.c_getenv_FUN_00566e10()
    ADD ESP,0x4                         ; 0049dc23
    TEST EAX,EAX                        ; 0049dc26
    JZ 0x0049dc37                       ; 0049dc28
        ;   XREF to: 0049dc37 (CONDITIONAL_JUMP)  ; LAB_0049dc37
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049dc2a
    MOV dword ptr [EAX + 0x210],0x1     ; 0049dc2d
    PUSH 0x1c74640                      ; 0049dc37 | DAT_01c74640
        ;   Label: LAB_0049dc37
    MOV ESI,0x582870                    ; 0049dc3c | = "Flashlight"
    CALL core_dlight.cpp_CDemonLight_init_FUN_0044e1e0 ; 0049dc41
        ;   XREF to: 0044e1e0 (UNCONDITIONAL_CALL)  ; undefined core_dlight.cpp_CDemonLight_init_FUN_0044e1e0()
    ADD ESP,0x4                         ; 0049dc46
    MOV EDI,0x1c74640                   ; 0049dc49
    XOR EBX,EBX                         ; 0049dc4e
    PUSH EDI                            ; 0049dc50
    MOV AL,byte ptr [ESI]               ; 0049dc51 | = "Flashlight" | s_ashlight_00582870+2
        ;   Label: LAB_0049dc51
    MOV byte ptr [EDI],AL               ; 0049dc53 | DAT_01c74640 | DAT_01c74642
    CMP AL,0x0                          ; 0049dc55
    JZ 0x0049dc69                       ; 0049dc57
        ;   XREF to: 0049dc69 (CONDITIONAL_JUMP)  ; LAB_0049dc69
    MOV AL,byte ptr [ESI + 0x1]         ; 0049dc59 | s_lashlight_00582870+1 | s_shlight_00582870+3
    ADD ESI,0x2                         ; 0049dc5c
    MOV byte ptr [EDI + 0x1],AL         ; 0049dc5f | DAT_01c74641 | DAT_01c74643
    ADD EDI,0x2                         ; 0049dc62
    CMP AL,0x0                          ; 0049dc65
    JNZ 0x0049dc51                      ; 0049dc67
        ;   XREF to: 0049dc51 (CONDITIONAL_JUMP)  ; LAB_0049dc51
    POP EDI                             ; 0049dc69
        ;   Label: LAB_0049dc69
    MOV EDI,dword ptr [0x005be368]      ; 0049dc6a | DAT_005be368
    MOV ESI,0x42800000                  ; 0049dc70
    PUSH EDI                            ; 0049dc75 | DAT_01e57284
    MOV dword ptr [0x01c762f4],EBX      ; 0049dc76 | DAT_01c762f4
    MOV dword ptr [0x01c74740],ESI      ; 0049dc7c | DAT_01c74740
    CALL core_set.cpp_CDemonSet_initScene_FUN_005084c0 ; 0049dc82
        ;   XREF to: 005084c0 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_initScene_FUN_005084c0()
    MOV EAX,[0x01c78698]                ; 0049dc87 | DAT_01c78698
    ADD ESP,0x4                         ; 0049dc8c
    TEST EAX,EAX                        ; 0049dc8f
    JZ 0x0049e018                       ; 0049dc91
        ;   XREF to: 0049e018 (CONDITIONAL_JUMP)  ; LAB_0049e018
    PUSH 0x1c7869c                      ; 0049dc97 | DAT_01c7869c
    MOV dword ptr [0x01c78698],EBX      ; 0049dc9c | DAT_01c78698
    MOV EBX,dword ptr [0x005be368]      ; 0049dca2 | DAT_005be368
    PUSH EBX                            ; 0049dca8 | DAT_01e57284
    CALL core_set.cpp_CDemonSet_loadMasterLightStates_FUN_0050e820 ; 0049dca9
        ;   XREF to: 0050e820 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_loadMasterLightStates_FUN_0050e820()
    ADD ESP,0x8                         ; 0049dcae
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049dcb1
        ;   Label: LAB_0049dcb1
    MOV ESI,dword ptr [EAX + 0x224]     ; 0049dcb4
    CMP ESI,0x8000                      ; 0049dcba
    JGE 0x0049e02c                      ; 0049dcc0
        ;   XREF to: 0049e02c (CONDITIONAL_JUMP)  ; LAB_0049e02c
    MOV dword ptr [EAX + 0x224],0x8000  ; 0049dcc6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049dcd0
        ;   Label: LAB_0049dcd0
    MOV EDX,dword ptr [EAX + 0x224]     ; 0049dcd3
    PUSH EDX                            ; 0049dcd9
    MOV ECX,dword ptr [0x005be368]      ; 0049dcda | DAT_005be368
    PUSH ECX                            ; 0049dce0 | DAT_01e57284
    CALL core_set.cpp_CDemonSet_setGamma_FUN_0050e400 ; 0049dce1
        ;   XREF to: 0050e400 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_setGamma_FUN_0050e400()
    ADD ESP,0x8                         ; 0049dce6
    MOV EBX,dword ptr [EBP + 0x14]      ; 0049dce9
    PUSH EBX                            ; 0049dcec
    CALL core_game.cpp_CGame_setGameRes_FUN_0049d870 ; 0049dced
        ;   XREF to: 0049d870 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_CGame_setGameRes_FUN_0049d870()
    ADD ESP,0x4                         ; 0049dcf2
    PUSH EBX                            ; 0049dcf5
    CALL core_game.cpp_CGame_clearOverlay_FUN_0049aa90 ; 0049dcf6
        ;   XREF to: 0049aa90 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_CGame_clearOverlay_FUN_0049aa90()
    ADD ESP,0x4                         ; 0049dcfb
    PUSH 0x1c78424                      ; 0049dcfe | DAT_01c78424
    CALL FUN_00476160                   ; 0049dd03
        ;   XREF to: 00476160 (UNCONDITIONAL_CALL)  ; undefined FUN_00476160()
    MOV EDI,dword ptr [EBX + 0x274]     ; 0049dd08
    ADD ESP,0x4                         ; 0049dd0e
    TEST EDI,EDI                        ; 0049dd11
    JZ 0x0049e047                       ; 0049dd13
        ;   XREF to: 0049e047 (CONDITIONAL_JUMP)  ; LAB_0049e047
    MOV EAX,[0x005be220]                ; 0049dd19 | DAT_005be220
    PUSH 0x1                            ; 0049dd1e
    MOV EBX,dword ptr [EAX + 0xc]       ; 0049dd20 | DAT_01e56dac
    PUSH EBX                            ; 0049dd23
    MOV ESI,dword ptr [0x005be368]      ; 0049dd24 | DAT_005be368
    PUSH ESI                            ; 0049dd2a | DAT_01e57284
    CALL FUN_005125a0                   ; 0049dd2b
        ;   XREF to: 005125a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005125a0()
    ADD ESP,0xc                         ; 0049dd30
    MOV EDI,dword ptr [EBP + 0x14]      ; 0049dd33
        ;   Label: LAB_0049dd33
    PUSH EDI                            ; 0049dd36
    CALL core_game.cpp_CGame_beginFadeIn_FUN_004a37e0 ; 0049dd37
        ;   XREF to: 004a37e0 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_CGame_beginFadeIn_FUN_004a37e0()
    ADD ESP,0x4                         ; 0049dd3c
    PUSH EDI                            ; 0049dd3f
    CALL core_game.cpp_CGame_loadAssets_FUN_004a3660 ; 0049dd40
        ;   XREF to: 004a3660 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_CGame_loadAssets_FUN_004a3660()
    ADD ESP,0x4                         ; 0049dd45
    PUSH 0x3                            ; 0049dd48
    MOV EDX,dword ptr [0x005bdee0]      ; 0049dd4a | DAT_005bdee0
    PUSH EDX                            ; 0049dd50
    CALL core_netgame.cpp_CNetGame_syncPlayers_FUN_004ea370 ; 0049dd51
        ;   XREF to: 004ea370 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_CNetGame_syncPlayers_FUN_004ea370()
    ADD ESP,0x8                         ; 0049dd56
    TEST EAX,EAX                        ; 0049dd59
    JZ 0x0049dec1                       ; 0049dd5b
        ;   XREF to: 0049dec1 (CONDITIONAL_JUMP)  ; LAB_0049dec1
    PUSH 0x4                            ; 0049dd61
    MOV ECX,dword ptr [0x005bdee0]      ; 0049dd63 | DAT_005bdee0
    PUSH ECX                            ; 0049dd69
    CALL core_netgame.cpp_CNetGame_syncPlayers_FUN_004ea370 ; 0049dd6a
        ;   XREF to: 004ea370 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_CNetGame_syncPlayers_FUN_004ea370()
    ADD ESP,0x8                         ; 0049dd6f
    TEST EAX,EAX                        ; 0049dd72
    JZ 0x0049dec1                       ; 0049dd74
        ;   XREF to: 0049dec1 (CONDITIONAL_JUMP)  ; LAB_0049dec1
    MOV EAX,[0x005bdee0]                ; 0049dd7a | DAT_005bdee0
    PUSH EDI                            ; 0049dd7f
    MOV dword ptr [EAX + 0x4],0x3       ; 0049dd80 | DAT_01cea284
    CALL core_game.cpp_CGame_saveClockTime_FUN_0049a890 ; 0049dd87
        ;   XREF to: 0049a890 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_CGame_saveClockTime_FUN_0049a890()
    ADD ESP,0x4                         ; 0049dd8c
    PUSH EDI                            ; 0049dd8f
    CALL core_game.cpp_CGame_resetInputAndCenterCursor_FUN_0049f8c0 ; 0049dd90
        ;   XREF to: 0049f8c0 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_CGame_resetInputAndCenterCursor_FUN_0049f8c0()
    ADD ESP,0x4                         ; 0049dd95
    MOV EBX,EDI                         ; 0049dd98
    MOV EDI,dword ptr [0x005bdee0]      ; 0049dd9a | DAT_005bdee0
    PUSH EDI                            ; 0049dda0
    CALL core_netgame.cpp_CNetGame_processServerFrame_FUN_004ed2d0 ; 0049dda1
        ;   XREF to: 004ed2d0 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_CNetGame_processServerFrame_FUN_004ed2d0()
    ADD ESP,0x4                         ; 0049dda6
    MOV EAX,[0x005baca0]                ; 0049dda9 | DAT_005baca0
    PUSH EAX                            ; 0049ddae
    CALL core_level.cpp_CLevelLoader_cleanup_FUN_004c5fa0 ; 0049ddaf
        ;   XREF to: 004c5fa0 (UNCONDITIONAL_CALL)  ; undefined core_level.cpp_CLevelLoader_cleanup_FUN_004c5fa0()
    MOV EDX,dword ptr [0x01cae0e8]      ; 0049ddb4 | DAT_01cae0e8
    MOV EDX,dword ptr [EDX*0x4 + 0x1cae0d8] ; 0049ddba
    MOV EAX,dword ptr [EBX + 0xc4]      ; 0049ddc1
    MOV dword ptr [EDX + 0x1f59c],EAX   ; 0049ddc7
    ADD ESP,0x4                         ; 0049ddcd
    MOV dword ptr [EBX + 0x258],0x0     ; 0049ddd0
    MOV EDI,0x1c78424                   ; 0049ddda
    MOV ESI,0x1                         ; 0049dddf
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049dde4
        ;   Label: LAB_0049dde4
    CMP dword ptr [EAX + 0x1fc],0x0     ; 0049dde7
    JZ 0x0049e062                       ; 0049ddee
        ;   XREF to: 0049e062 (CONDITIONAL_JUMP)  ; LAB_0049e062
    XOR EAX,EAX                         ; 0049ddf4
        ;   Label: LAB_0049ddf4
    PUSH EAX                            ; 0049ddf6
        ;   Label: LAB_0049ddf6
    MOV EBX,dword ptr [0x005bac64]      ; 0049ddf7 | DAT_005bac64
    PUSH EBX                            ; 0049ddfd | DAT_01cc30e4
    CALL engine_keys.cpp_CKeys_toggleInputMask_FUN_004c4210 ; 0049ddfe
        ;   XREF to: 004c4210 (UNCONDITIONAL_CALL)  ; undefined engine_keys.cpp_CKeys_toggleInputMask_FUN_004c4210()
    ADD ESP,0x8                         ; 0049de03
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049de06
    PUSH EAX                            ; 0049de09
    CALL FUN_0049f930                   ; 0049de0a
        ;   XREF to: 0049f930 (UNCONDITIONAL_CALL)  ; undefined FUN_0049f930()
    ADD ESP,0x4                         ; 0049de0f
    MOV EDX,dword ptr [EBP + 0x14]      ; 0049de12
    PUSH EDX                            ; 0049de15
    CALL core_game.cpp_CGame_updateStatusDisplays_FUN_0049b0b0 ; 0049de16
        ;   XREF to: 0049b0b0 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_CGame_updateStatusDisplays_FUN_0049b0b0()
    ADD ESP,0x4                         ; 0049de1b
    MOV ECX,dword ptr [EBP + 0x14]      ; 0049de1e
    PUSH ECX                            ; 0049de21
    CALL core_game.cpp_CGame_processFudge_FUN_0049b260 ; 0049de22
        ;   XREF to: 0049b260 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_CGame_processFudge_FUN_0049b260()
    ADD ESP,0x4                         ; 0049de27
    MOV EBX,dword ptr [EBP + 0x14]      ; 0049de2a
    PUSH EBX                            ; 0049de2d
    CALL core_game.cpp_CGame_playerControls_FUN_0049e7d0 ; 0049de2e
        ;   XREF to: 0049e7d0 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_CGame_playerControls_FUN_0049e7d0()
    MOV EDX,dword ptr [EBX + 0x274]     ; 0049de33
    ADD ESP,0x4                         ; 0049de39
    TEST EDX,EDX                        ; 0049de3c
    JZ 0x0049de4d                       ; 0049de3e
        ;   XREF to: 0049de4d (CONDITIONAL_JUMP)  ; LAB_0049de4d
    CMP dword ptr [EBX + 0xcc],0x0      ; 0049de40
    JZ 0x0049e076                       ; 0049de47
        ;   XREF to: 0049e076 (CONDITIONAL_JUMP)  ; LAB_0049e076
    MOV ECX,dword ptr [EBP + 0x14]      ; 0049de4d
        ;   Label: LAB_0049de4d
    PUSH ECX                            ; 0049de50
    CALL FUN_0049cc10                   ; 0049de51
        ;   XREF to: 0049cc10 (UNCONDITIONAL_CALL)  ; undefined FUN_0049cc10()
    MOV EBX,dword ptr [0x01c78420]      ; 0049de56 | DAT_01c78420
    ADD ESP,0x4                         ; 0049de5c
    TEST EBX,EBX                        ; 0049de5f
    JZ 0x0049e156                       ; 0049de61
        ;   XREF to: 0049e156 (CONDITIONAL_JUMP)  ; LAB_0049e156
    MOV EAX,[0x01c78424]                ; 0049de67 | DAT_01c78424
    TEST EAX,EAX                        ; 0049de6c
    JLE 0x0049e0d4                      ; 0049de6e
        ;   XREF to: 0049e0d4 (CONDITIONAL_JUMP)  ; LAB_0049e0d4
    PUSH EDI                            ; 0049de74 | DAT_01c78424
    CALL FUN_00475230                   ; 0049de75
        ;   XREF to: 00475230 (UNCONDITIONAL_CALL)  ; undefined FUN_00475230()
    ADD ESP,0x4                         ; 0049de7a
    MOV EBX,EAX                         ; 0049de7d
    CMP EAX,-0x2                        ; 0049de7f
    JZ 0x0049dea8                       ; 0049de82
        ;   XREF to: 0049dea8 (CONDITIONAL_JUMP)  ; LAB_0049dea8
    CALL engine_2d.c_clearInputAndWait_FUN_00403f50 ; 0049de84
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_clearInputAndWait_FUN_00403f50()
    MOV ECX,dword ptr [0x005b6d50]      ; 0049de89 | DAT_005b6d50
    PUSH ECX                            ; 0049de8f
    CALL FUN_004720c0                   ; 0049de90
        ;   XREF to: 004720c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004720c0()
    ADD ESP,0x4                         ; 0049de95
    PUSH EDI                            ; 0049de98 | DAT_01c78424
    CALL FUN_00476160                   ; 0049de99
        ;   XREF to: 00476160 (UNCONDITIONAL_CALL)  ; undefined FUN_00476160()
    XOR EAX,EAX                         ; 0049de9e
    ADD ESP,0x4                         ; 0049dea0
    MOV [0x01c78420],EAX                ; 0049dea3 | DAT_01c78420
    TEST EBX,EBX                        ; 0049dea8
        ;   Label: LAB_0049dea8
    JNZ 0x0049e0dc                      ; 0049deaa
        ;   XREF to: 0049e0dc (CONDITIONAL_JUMP)  ; LAB_0049e0dc
    PUSH 0x1                            ; 0049deb0
    MOV ESI,dword ptr [0x005bdee0]      ; 0049deb2 | DAT_005bdee0
    PUSH ESI                            ; 0049deb8 | DAT_01cea280
    CALL core_netgame.cpp_CNetGame_disconnect_FUN_004e9e90 ; 0049deb9
        ;   XREF to: 004e9e90 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_CNetGame_disconnect_FUN_004e9e90()
    ADD ESP,0x8                         ; 0049debe
        ;   Label: LAB_0049debe
    MOV EAX,[0x01cae0e8]                ; 0049dec1 | DAT_01cae0e8
        ;   Label: LAB_0049dec1
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 0049dec6
    PUSH EAX                            ; 0049decd
    MOV EDX,dword ptr [EAX + 0x14c]     ; 0049dece
    CALL dword ptr [EDX + 0x104]        ; 0049ded4
    ADD ESP,0x4                         ; 0049deda
    CMP EAX,0x2                         ; 0049dedd
    JNZ 0x0049df83                      ; 0049dee0
        ;   XREF to: 0049df83 (CONDITIONAL_JUMP)  ; LAB_0049df83
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049dee6
    CMP dword ptr [EAX + 0x9c4],0x0     ; 0049dee9
    JNZ 0x0049df83                      ; 0049def0
        ;   XREF to: 0049df83 (CONDITIONAL_JUMP)  ; LAB_0049df83
    LEA EAX,[EBP + 0xfffffc10]          ; 0049def6
    PUSH EAX                            ; 0049defc
    CALL FUN_00474c90                   ; 0049defd
        ;   XREF to: 00474c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00474c90()
    ADD ESP,0x4                         ; 0049df02
    PUSH 0x582989                       ; 0049df05 | = "Load game"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049df0a
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049df0f
    PUSH EAX                            ; 0049df12
    LEA EAX,[EBP + 0xfffffc10]          ; 0049df13
    PUSH EAX                            ; 0049df19
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 0049df1a
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_add_FUN_00473cb0()
    ADD ESP,0x8                         ; 0049df1f
    PUSH 0x582993                       ; 0049df22 | DAT_00582993
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049df27
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049df2c
    PUSH EAX                            ; 0049df2f
    LEA EAX,[EBP + 0xfffffc10]          ; 0049df30
    PUSH EAX                            ; 0049df36
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 0049df37
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_add_FUN_00473cb0()
    ADD ESP,0x8                         ; 0049df3c
    PUSH -0x1                           ; 0049df3f
        ;   Label: LAB_0049df3f
    PUSH 0x582998                       ; 0049df41 | = "Game Over"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049df46
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049df4b
    PUSH EAX                            ; 0049df4e
    LEA EAX,[EBP + 0xfffffc10]          ; 0049df4f
    PUSH EAX                            ; 0049df55
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70 ; 0049df56
        ;   XREF to: 00474d70 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70()
    ADD ESP,0xc                         ; 0049df5b
    TEST EAX,EAX                        ; 0049df5e
    JNZ 0x0049e601                      ; 0049df60
        ;   XREF to: 0049e601 (CONDITIONAL_JUMP)  ; LAB_0049e601
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049df66
    PUSH EAX                            ; 0049df69
    CALL core_game.cpp_CGame_promptLoadGame_FUN_004a6570 ; 0049df6a
        ;   XREF to: 004a6570 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_CGame_promptLoadGame_FUN_004a6570()
    ADD ESP,0x4                         ; 0049df6f
    PUSH 0x0                            ; 0049df72
        ;   Label: LAB_0049df72
    LEA EAX,[EBP + 0xfffffc10]          ; 0049df74
    PUSH EAX                            ; 0049df7a
    CALL shape_edittool.cpp_CPickList_dtor_FUN_00474cf0 ; 0049df7b
        ;   XREF to: 00474cf0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CPickList_dtor_FUN_00474cf0()
    ADD ESP,0x8                         ; 0049df80
    MOV EDX,dword ptr [0x005baf90]      ; 0049df83 | DAT_005baf90
        ;   Label: LAB_0049df83
    PUSH EDX                            ; 0049df89
    CALL core_mission.cpp_CDemonMission_countDamageableEnemies_FUN_004d9df0 ; 0049df8a
        ;   XREF to: 004d9df0 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_CDemonMission_countDamageableEnemies_FUN_004d9df0()
    ADD ESP,0x4                         ; 0049df8f
    PUSH 0x0                            ; 0049df92
    MOV ECX,dword ptr [0x005bac64]      ; 0049df94 | DAT_005bac64
    MOV EDX,dword ptr [EBP + 0x14]      ; 0049df9a
    PUSH ECX                            ; 0049df9d | DAT_01cc30e4
    MOV dword ptr [EDX + 0x24c],EAX     ; 0049df9e
    CALL engine_keys.cpp_CKeys_toggleInputMask_FUN_004c4210 ; 0049dfa4
        ;   XREF to: 004c4210 (UNCONDITIONAL_CALL)  ; undefined engine_keys.cpp_CKeys_toggleInputMask_FUN_004c4210()
    ADD ESP,0x8                         ; 0049dfa9
    MOV EBX,dword ptr [0x005bed68]      ; 0049dfac | DAT_005bed68
    PUSH EBX                            ; 0049dfb2
    CALL core_sound.cpp_CSound_shutdown_FUN_0052df90 ; 0049dfb3
        ;   XREF to: 0052df90 (UNCONDITIONAL_CALL)  ; undefined core_sound.cpp_CSound_shutdown_FUN_0052df90()
    ADD ESP,0x4                         ; 0049dfb8
    MOV ESI,dword ptr [0x005b9284]      ; 0049dfbb | DAT_005b9284
    PUSH ESI                            ; 0049dfc1
    CALL FUN_004940d0                   ; 0049dfc2
        ;   XREF to: 004940d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004940d0()
    ADD ESP,0x4                         ; 0049dfc7
    MOV EDI,dword ptr [EBP + 0x14]      ; 0049dfca
    PUSH EDI                            ; 0049dfcd
    CALL core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_0049d960 ; 0049dfce
        ;   XREF to: 0049d960 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_0049d960()
    ADD ESP,0x4                         ; 0049dfd3
    MOV EAX,[0x005bac64]                ; 0049dfd6 | DAT_005bac64
    PUSH EAX                            ; 0049dfdb | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 0049dfdc | DAT_01cc30e4
    CALL dword ptr [EDX + 0x8]          ; 0049dfde
    ADD ESP,0x4                         ; 0049dfe1
    MOV EAX,[0x005be368]                ; 0049dfe4 | DAT_005be368
    PUSH EAX                            ; 0049dfe9 | DAT_01e57284
    CALL FUN_0050ad20                   ; 0049dfea
        ;   XREF to: 0050ad20 (UNCONDITIONAL_CALL)  ; undefined FUN_0050ad20()
    ADD ESP,0x4                         ; 0049dfef
    PUSH 0x1c78424                      ; 0049dff2 | DAT_01c78424
    MOV dword ptr [EDI + 0x1ec],0x3f800000 ; 0049dff7
    CALL FUN_00476160                   ; 0049e001
        ;   XREF to: 00476160 (UNCONDITIONAL_CALL)  ; undefined FUN_00476160()
    ADD ESP,0x4                         ; 0049e006
    CALL core_inv.cpp_freeInventory_FUN_004bf270 ; 0049e009
        ;   XREF to: 004bf270 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_freeInventory_FUN_004bf270()
    MOV EAX,dword ptr [EBP + -0xc]      ; 0049e00e
    MOV ESP,EBP                         ; 0049e011
    POP EBP                             ; 0049e013
    POP EDI                             ; 0049e014
    POP ESI                             ; 0049e015
    POP EBX                             ; 0049e016
    RET                                 ; 0049e017
    MOV EDX,dword ptr [0x005b80f0]      ; 0049e018 | DAT_005b80f0
        ;   Label: LAB_0049e018
    PUSH EDX                            ; 0049e01e
    CALL core_fire.cpp_CFireEffect_init_FUN_0048a150 ; 0049e01f
        ;   XREF to: 0048a150 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CFireEffect_init_FUN_0048a150()
    ADD ESP,0x4                         ; 0049e024
    JMP 0x0049dcb1                      ; 0049e027
        ;   XREF to: 0049dcb1 (UNCONDITIONAL_JUMP)  ; LAB_0049dcb1
    CMP ESI,0x10000                     ; 0049e02c
        ;   Label: LAB_0049e02c
    JLE 0x0049dcd0                      ; 0049e032
        ;   XREF to: 0049dcd0 (CONDITIONAL_JUMP)  ; LAB_0049dcd0
    MOV dword ptr [EAX + 0x224],0x10000 ; 0049e038
    JMP 0x0049dcd0                      ; 0049e042
        ;   XREF to: 0049dcd0 (UNCONDITIONAL_JUMP)  ; LAB_0049dcd0
    MOV EDX,dword ptr [EBX + 0x270]     ; 0049e047
        ;   Label: LAB_0049e047
    PUSH EDX                            ; 0049e04d
    MOV ECX,dword ptr [0x005be368]      ; 0049e04e | DAT_005be368
    PUSH ECX                            ; 0049e054 | DAT_01e57284
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_005088f0 ; 0049e055
        ;   XREF to: 005088f0 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_setCameraView_FUN_005088f0()
    ADD ESP,0x8                         ; 0049e05a
    JMP 0x0049dd33                      ; 0049e05d
        ;   XREF to: 0049dd33 (UNCONDITIONAL_JUMP)  ; LAB_0049dd33
    CMP dword ptr [0x01c78420],0x0      ; 0049e062 | DAT_01c78420
        ;   Label: LAB_0049e062
    JNZ 0x0049ddf4                      ; 0049e069
        ;   XREF to: 0049ddf4 (CONDITIONAL_JUMP)  ; LAB_0049ddf4
    MOV EAX,ESI                         ; 0049e06f
    JMP 0x0049ddf6                      ; 0049e071
        ;   XREF to: 0049ddf6 (UNCONDITIONAL_JUMP)  ; LAB_0049ddf6
    MOV EAX,[0x005bdee0]                ; 0049e076 | DAT_005bdee0
        ;   Label: LAB_0049e076
    CMP dword ptr [EAX + 0x168],0x0     ; 0049e07b | DAT_01cea3e8
    JNZ 0x0049de4d                      ; 0049e082
        ;   XREF to: 0049de4d (CONDITIONAL_JUMP)  ; LAB_0049de4d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049e088
    CMP dword ptr [EAX + 0x240],0x0     ; 0049e08b
    JNZ 0x0049de4d                      ; 0049e092
        ;   XREF to: 0049de4d (CONDITIONAL_JUMP)  ; LAB_0049de4d
    MOV EAX,[0x005be220]                ; 0049e098 | DAT_005be220
    MOV ECX,dword ptr [EAX + 0x10]      ; 0049e09d | DAT_01e56db0
    PUSH ECX                            ; 0049e0a0
    MOV EBX,dword ptr [EAX + 0xc]       ; 0049e0a1 | DAT_01e56dac
    PUSH EBX                            ; 0049e0a4
    MOV EAX,[0x005be368]                ; 0049e0a5 | DAT_005be368
    PUSH EAX                            ; 0049e0aa | DAT_01e57284
    CALL FUN_005125a0                   ; 0049e0ab
        ;   XREF to: 005125a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005125a0()
    ADD ESP,0xc                         ; 0049e0b0
    TEST EAX,EAX                        ; 0049e0b3
    JZ 0x0049e0c3                       ; 0049e0b5
        ;   XREF to: 0049e0c3 (CONDITIONAL_JUMP)  ; LAB_0049e0c3
    MOV EDX,dword ptr [EBP + 0x14]      ; 0049e0b7
    PUSH EDX                            ; 0049e0ba
    CALL core_game.cpp_CGame_saveClockTime_FUN_0049a890 ; 0049e0bb
        ;   XREF to: 0049a890 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_CGame_saveClockTime_FUN_0049a890()
    ADD ESP,0x4                         ; 0049e0c0
    MOV EAX,[0x005be220]                ; 0049e0c3 | DAT_005be220
        ;   Label: LAB_0049e0c3
    MOV dword ptr [EAX + 0x10],0x0      ; 0049e0c8 | DAT_01e56db0
    JMP 0x0049de4d                      ; 0049e0cf
        ;   XREF to: 0049de4d (UNCONDITIONAL_JUMP)  ; LAB_0049de4d
    XOR EDX,EDX                         ; 0049e0d4
        ;   Label: LAB_0049e0d4
    MOV dword ptr [0x01c78420],EDX      ; 0049e0d6 | DAT_01c78420
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049e0dc
        ;   Label: LAB_0049e0dc
    CMP dword ptr [EAX + 0xcc],0x0      ; 0049e0df
    JZ 0x0049e504                       ; 0049e0e6
        ;   XREF to: 0049e504 (CONDITIONAL_JUMP)  ; LAB_0049e504
    CALL wincore_winrun.cpp_processWindowMessages_FUN_005591c0 ; 0049e0ec
        ;   XREF to: 005591c0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_processWindowMessages_FUN_005591c0()
        ;   Label: LAB_0049e0ec
    CMP dword ptr [0x02de20a4],0x0      ; 0049e0f1 | DAT_02de20a4
        ;   Label: LAB_0049e0f1
    JZ 0x0049e117                       ; 0049e0f8
        ;   XREF to: 0049e117 (CONDITIONAL_JUMP)  ; LAB_0049e117
    XOR EDX,EDX                         ; 0049e0fa
    MOV EAX,[0x005be368]                ; 0049e0fc | DAT_005be368
    MOV dword ptr [0x02de20a4],EDX      ; 0049e101 | DAT_02de20a4
    MOV EDX,dword ptr [EAX + 0x15aabc]  ; 0049e107 | DAT_01fb1d40
    PUSH EDX                            ; 0049e10d
    PUSH EAX                            ; 0049e10e | DAT_01e57284
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_005088f0 ; 0049e10f
        ;   XREF to: 005088f0 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_setCameraView_FUN_005088f0()
    ADD ESP,0x8                         ; 0049e114
    MOV EAX,[0x01cae0e8]                ; 0049e117 | DAT_01cae0e8
        ;   Label: LAB_0049e117
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 0049e11c
    PUSH EAX                            ; 0049e123
    MOV EBX,dword ptr [EAX + 0x14c]     ; 0049e124
    CALL dword ptr [EBX + 0x104]        ; 0049e12a
    ADD ESP,0x4                         ; 0049e130
    CMP EAX,0x2                         ; 0049e133
    JZ 0x0049e529                       ; 0049e136
        ;   XREF to: 0049e529 (CONDITIONAL_JUMP)  ; LAB_0049e529
    MOV EAX,[0x005be220]                ; 0049e13c | DAT_005be220
        ;   Label: LAB_0049e13c
    CMP dword ptr [EAX],0x0             ; 0049e141 | DAT_01e56da0
    JZ 0x0049e59d                       ; 0049e144
        ;   XREF to: 0049e59d (CONDITIONAL_JUMP)  ; LAB_0049e59d
    MOV dword ptr [EBP + -0xc],0x1      ; 0049e14a
    JMP 0x0049dec1                      ; 0049e151
        ;   XREF to: 0049dec1 (UNCONDITIONAL_JUMP)  ; LAB_0049dec1
    PUSH ESI                            ; 0049e156
        ;   Label: LAB_0049e156
    MOV EAX,[0x005bac64]                ; 0049e157 | DAT_005bac64
    PUSH EAX                            ; 0049e15c | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 0049e15d | DAT_01cc30e4
    CALL dword ptr [EDX + 0x4]          ; 0049e15f
    ADD ESP,0x8                         ; 0049e162
    TEST EAX,EAX                        ; 0049e165
    JZ 0x0049e0dc                       ; 0049e167
        ;   XREF to: 0049e0dc (CONDITIONAL_JUMP)  ; LAB_0049e0dc
    PUSH EDI                            ; 0049e16d | DAT_01c78424
    CALL FUN_00476160                   ; 0049e16e
        ;   XREF to: 00476160 (UNCONDITIONAL_CALL)  ; undefined FUN_00476160()
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049e173
    MOV dword ptr [EAX + 0x200],EBX     ; 0049e176
    MOV EAX,[0x01cae0e8]                ; 0049e17c | DAT_01cae0e8
    ADD ESP,0x4                         ; 0049e181
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 0049e184
    PUSH EAX                            ; 0049e18b
    MOV EDX,dword ptr [EAX + 0x14c]     ; 0049e18c
    CALL dword ptr [EDX + 0x104]        ; 0049e192
    ADD ESP,0x4                         ; 0049e198
    CMP EAX,0x1                         ; 0049e19b
    JG 0x0049dec1                       ; 0049e19e
        ;   XREF to: 0049dec1 (CONDITIONAL_JUMP)  ; LAB_0049dec1
    MOV EAX,[0x005bdee0]                ; 0049e1a4 | DAT_005bdee0
    MOV EDX,dword ptr [EAX]             ; 0049e1a9 | DAT_01cea280
    CMP EDX,0x2                         ; 0049e1ab
    JZ 0x0049e443                       ; 0049e1ae
        ;   XREF to: 0049e443 (CONDITIONAL_JUMP)  ; LAB_0049e443
    CMP ESI,EDX                         ; 0049e1b4
    JZ 0x0049e495                       ; 0049e1b6
        ;   XREF to: 0049e495 (CONDITIONAL_JUMP)  ; LAB_0049e495
    MOV EBX,dword ptr [0x005bed68]      ; 0049e1bc | DAT_005bed68
    PUSH EBX                            ; 0049e1c2
    CALL core_sound.cpp_CSound_shutdown_FUN_0052df90 ; 0049e1c3
        ;   XREF to: 0052df90 (UNCONDITIONAL_CALL)  ; undefined core_sound.cpp_CSound_shutdown_FUN_0052df90()
    ADD ESP,0x4                         ; 0049e1c8
    MOV EAX,[0x005b9284]                ; 0049e1cb | DAT_005b9284
    PUSH EAX                            ; 0049e1d0
    CALL FUN_004940d0                   ; 0049e1d1
        ;   XREF to: 004940d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004940d0()
    ADD ESP,0x4                         ; 0049e1d6
    LEA EAX,[EBP + 0xfffffd80]          ; 0049e1d9
    PUSH EAX                            ; 0049e1df
    CALL FUN_00474c90                   ; 0049e1e0
        ;   XREF to: 00474c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00474c90()
    ADD ESP,0x4                         ; 0049e1e5
    PUSH 0x582940                       ; 0049e1e8 | = "Return"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049e1ed
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049e1f2
    PUSH EAX                            ; 0049e1f5
    LEA EAX,[EBP + 0xfffffd80]          ; 0049e1f6
    PUSH EAX                            ; 0049e1fc
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 0049e1fd
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_add_FUN_00473cb0()
    ADD ESP,0x8                         ; 0049e202
    PUSH 0x582947                       ; 0049e205 | = "Options"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049e20a
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049e20f
    PUSH EAX                            ; 0049e212
    LEA EAX,[EBP + 0xfffffd80]          ; 0049e213
    PUSH EAX                            ; 0049e219
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 0049e21a
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_add_FUN_00473cb0()
    ADD ESP,0x8                         ; 0049e21f
    PUSH 0x58294f                       ; 0049e222 | = "Load game"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049e227
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049e22c
    PUSH EAX                            ; 0049e22f
    LEA EAX,[EBP + 0xfffffd80]          ; 0049e230
    PUSH EAX                            ; 0049e236
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 0049e237
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_add_FUN_00473cb0()
    ADD ESP,0x8                         ; 0049e23c
    PUSH 0x582959                       ; 0049e23f | = "Save game"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049e244
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049e249
    PUSH EAX                            ; 0049e24c
    LEA EAX,[EBP + 0xfffffd80]          ; 0049e24d
    PUSH EAX                            ; 0049e253
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 0049e254
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_add_FUN_00473cb0()
    ADD ESP,0x8                         ; 0049e259
    PUSH 0x582963                       ; 0049e25c | DAT_00582963
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049e261
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049e266
    PUSH EAX                            ; 0049e269
    LEA EAX,[EBP + 0xfffffd80]          ; 0049e26a
    PUSH EAX                            ; 0049e270
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 0049e271
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_add_FUN_00473cb0()
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049e276
    MOV EDX,dword ptr [EAX + 0x228]     ; 0049e279
    ADD ESP,0x8                         ; 0049e27f
    CMP ESI,EDX                         ; 0049e282
    JNZ 0x0049e2a3                      ; 0049e284
        ;   XREF to: 0049e2a3 (CONDITIONAL_JUMP)  ; LAB_0049e2a3
    PUSH 0x582968                       ; 0049e286 | = "Skip cinematic."
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049e28b
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049e290
    PUSH EAX                            ; 0049e293
    LEA EAX,[EBP + 0xfffffd80]          ; 0049e294
    PUSH EAX                            ; 0049e29a
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 0049e29b
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_add_FUN_00473cb0()
    ADD ESP,0x8                         ; 0049e2a0
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049e2a3
        ;   Label: LAB_0049e2a3
    CMP dword ptr [EAX + 0x228],0x0     ; 0049e2a6
    JZ 0x0049e2c2                       ; 0049e2ad
        ;   XREF to: 0049e2c2 (CONDITIONAL_JUMP)  ; LAB_0049e2c2
    PUSH 0x0                            ; 0049e2af
    PUSH 0x3                            ; 0049e2b1
    LEA EAX,[EBP + 0xfffffd80]          ; 0049e2b3
    PUSH EAX                            ; 0049e2b9
    CALL shape_edittool.cpp_CPickList_enableItem_FUN_00475f80 ; 0049e2ba
        ;   XREF to: 00475f80 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CPickList_enableItem_FUN_00475f80()
    ADD ESP,0xc                         ; 0049e2bf
    PUSH -0x1                           ; 0049e2c2
        ;   Label: LAB_0049e2c2
    PUSH 0x582978                       ; 0049e2c4 | = "Game paused"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049e2c9
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049e2ce
    PUSH EAX                            ; 0049e2d1
    LEA EAX,[EBP + 0xfffffd80]          ; 0049e2d2
    PUSH EAX                            ; 0049e2d8
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70 ; 0049e2d9
        ;   XREF to: 00474d70 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70()
    ADD ESP,0xc                         ; 0049e2de
    MOV EBX,EAX                         ; 0049e2e1
    CMP EAX,0x1                         ; 0049e2e3
    JNZ 0x0049e36f                      ; 0049e2e6
        ;   XREF to: 0049e36f (CONDITIONAL_JUMP)  ; LAB_0049e36f
    PUSH 0x0                            ; 0049e2ec
    MOV EAX,[0x005bac64]                ; 0049e2ee | DAT_005bac64
    PUSH EAX                            ; 0049e2f3 | DAT_01cc30e4
    CALL engine_keys.cpp_CKeys_toggleInputMask_FUN_004c4210 ; 0049e2f4
        ;   XREF to: 004c4210 (UNCONDITIONAL_CALL)  ; undefined engine_keys.cpp_CKeys_toggleInputMask_FUN_004c4210()
    ADD ESP,0x8                         ; 0049e2f9
    MOV EDX,dword ptr [EBP + 0x14]      ; 0049e2fc
    PUSH EDX                            ; 0049e2ff
    CALL core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_0049d960 ; 0049e300
        ;   XREF to: 0049d960 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_0049d960()
    ADD ESP,0x4                         ; 0049e305
    PUSH ESI                            ; 0049e308
    CALL core_menu.cpp_showOptionsScreen_FUN_004d21c0 ; 0049e309
        ;   XREF to: 004d21c0 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_showOptionsScreen_FUN_004d21c0()
    ADD ESP,0x4                         ; 0049e30e
    MOV ECX,dword ptr [EBP + 0x14]      ; 0049e311
    PUSH ECX                            ; 0049e314
    CALL core_game.cpp_CGame_setGameRes_FUN_0049d870 ; 0049e315
        ;   XREF to: 0049d870 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_CGame_setGameRes_FUN_0049d870()
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049e31a
    MOV EDX,dword ptr [EAX + 0x1fc]     ; 0049e31d
    ADD ESP,0x4                         ; 0049e323
    TEST EDX,EDX                        ; 0049e326
    SETZ AL                             ; 0049e328
    AND EAX,0xff                        ; 0049e32b
    PUSH EAX                            ; 0049e330
    MOV ECX,dword ptr [0x005bac64]      ; 0049e331 | DAT_005bac64
    PUSH ECX                            ; 0049e337 | DAT_01cc30e4
    CALL engine_keys.cpp_CKeys_toggleInputMask_FUN_004c4210 ; 0049e338
        ;   XREF to: 004c4210 (UNCONDITIONAL_CALL)  ; undefined engine_keys.cpp_CKeys_toggleInputMask_FUN_004c4210()
    MOV EAX,[0x005be368]                ; 0049e33d | DAT_005be368
    ADD ESP,0x8                         ; 0049e342
    MOV EDX,dword ptr [EAX + 0x15aabc]  ; 0049e345 | DAT_01fb1d40
    PUSH EDX                            ; 0049e34b
    PUSH EAX                            ; 0049e34c | DAT_01e57284
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_005088f0 ; 0049e34d
        ;   XREF to: 005088f0 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_setCameraView_FUN_005088f0()
    MOV EAX,[0x005b7620]                ; 0049e352 | DAT_005b7620
    ADD ESP,0x8                         ; 0049e357
    CMP EAX,0xf0                        ; 0049e35a
    JLE 0x0049e4e7                      ; 0049e35f
        ;   XREF to: 0049e4e7 (CONDITIONAL_JUMP)  ; LAB_0049e4e7
    MOV EAX,[0x014b9900]                ; 0049e365 | DAT_014b9900
    MOV [0x01bcd070],EAX                ; 0049e36a | DAT_01bcd070
        ;   Label: LAB_0049e36a
    CMP EBX,0x2                         ; 0049e36f
        ;   Label: LAB_0049e36f
    JNZ 0x0049e380                      ; 0049e372
        ;   XREF to: 0049e380 (CONDITIONAL_JUMP)  ; LAB_0049e380
    MOV EDX,dword ptr [EBP + 0x14]      ; 0049e374
    PUSH EDX                            ; 0049e377
    CALL core_game.cpp_CGame_promptLoadGame_FUN_004a6570 ; 0049e378
        ;   XREF to: 004a6570 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_CGame_promptLoadGame_FUN_004a6570()
    ADD ESP,0x4                         ; 0049e37d
    CMP EBX,0x3                         ; 0049e380
        ;   Label: LAB_0049e380
    JNZ 0x0049e393                      ; 0049e383
        ;   XREF to: 0049e393 (CONDITIONAL_JUMP)  ; LAB_0049e393
    PUSH 0x0                            ; 0049e385
    MOV ECX,dword ptr [EBP + 0x14]      ; 0049e387
    PUSH ECX                            ; 0049e38a
    CALL FUN_004a3b90                   ; 0049e38b
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; undefined FUN_004a3b90()
    ADD ESP,0x8                         ; 0049e390
    CMP EBX,0x4                         ; 0049e393
        ;   Label: LAB_0049e393
    JNZ 0x0049e3bc                      ; 0049e396
        ;   XREF to: 0049e3bc (CONDITIONAL_JUMP)  ; LAB_0049e3bc
    PUSH 0x582984                       ; 0049e398 | DAT_00582984
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049e39d
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049e3a2
    PUSH EAX                            ; 0049e3a5
    MOV EAX,[0x005b6d50]                ; 0049e3a6 | DAT_005b6d50
    PUSH EAX                            ; 0049e3ab
    CALL FUN_00470230                   ; 0049e3ac
        ;   XREF to: 00470230 (UNCONDITIONAL_CALL)  ; undefined FUN_00470230()
    ADD ESP,0x8                         ; 0049e3b1
    TEST EAX,EAX                        ; 0049e3b4
    JNZ 0x0049e4f1                      ; 0049e3b6
        ;   XREF to: 0049e4f1 (CONDITIONAL_JUMP)  ; LAB_0049e4f1
    CMP EBX,0x5                         ; 0049e3bc
        ;   Label: LAB_0049e3bc
    JNZ 0x0049e3e3                      ; 0049e3bf
        ;   XREF to: 0049e3e3 (CONDITIONAL_JUMP)  ; LAB_0049e3e3
    MOV EDX,dword ptr [0x005be220]      ; 0049e3c1 | DAT_005be220
    PUSH EDX                            ; 0049e3c7 | DAT_01e56da0
    CALL FUN_00504d90                   ; 0049e3c8
        ;   XREF to: 00504d90 (UNCONDITIONAL_CALL)  ; undefined FUN_00504d90()
    ADD ESP,0x4                         ; 0049e3cd
    TEST EAX,EAX                        ; 0049e3d0
    SETZ AL                             ; 0049e3d2
    MOV EDX,dword ptr [EBP + 0x14]      ; 0049e3d5
    AND EAX,0xff                        ; 0049e3d8
    MOV dword ptr [EDX + 0xcc],EAX      ; 0049e3dd
    CALL engine_2d.c_clearInputAndWait_FUN_00403f50 ; 0049e3e3
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_clearInputAndWait_FUN_00403f50()
        ;   Label: LAB_0049e3e3
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049e3e8
    CMP dword ptr [EAX + 0xcc],0x0      ; 0049e3eb
    JNZ 0x0049e411                      ; 0049e3f2
        ;   XREF to: 0049e411 (CONDITIONAL_JUMP)  ; LAB_0049e411
    MOV EBX,dword ptr [0x005bed68]      ; 0049e3f4 | DAT_005bed68
    PUSH EBX                            ; 0049e3fa
    CALL core_sound.cpp_CSound_init_FUN_0052ddf0 ; 0049e3fb
        ;   XREF to: 0052ddf0 (UNCONDITIONAL_CALL)  ; undefined core_sound.cpp_CSound_init_FUN_0052ddf0()
    ADD ESP,0x4                         ; 0049e400
    MOV EAX,[0x005b9284]                ; 0049e403 | DAT_005b9284
    PUSH EAX                            ; 0049e408
    CALL FUN_004940d0                   ; 0049e409
        ;   XREF to: 004940d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004940d0()
    ADD ESP,0x4                         ; 0049e40e
    MOV EDX,dword ptr [0x01cae0e8]      ; 0049e411 | DAT_01cae0e8
        ;   Label: LAB_0049e411
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049e417
    MOV EDX,dword ptr [EDX*0x4 + 0x1cae0d8] ; 0049e41a
    MOV EAX,dword ptr [EAX + 0xc4]      ; 0049e421
    PUSH 0x0                            ; 0049e427
    MOV dword ptr [EDX + 0x1f59c],EAX   ; 0049e429
    LEA EAX,[EBP + 0xfffffd80]          ; 0049e42f
    PUSH EAX                            ; 0049e435
    CALL shape_edittool.cpp_CPickList_dtor_FUN_00474cf0 ; 0049e436
        ;   XREF to: 00474cf0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CPickList_dtor_FUN_00474cf0()
    ADD ESP,0x8                         ; 0049e43b
    JMP 0x0049e0dc                      ; 0049e43e
        ;   XREF to: 0049e0dc (UNCONDITIONAL_JUMP)  ; LAB_0049e0dc
    PUSH 0x58287b                       ; 0049e443 | = "Leave network game"
        ;   Label: LAB_0049e443
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049e448
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049e44d
    PUSH EAX                            ; 0049e450
    PUSH EDI                            ; 0049e451 | DAT_01c78424
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 0049e452
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_add_FUN_00473cb0()
    ADD ESP,0x8                         ; 0049e457
    PUSH 0x58288e                       ; 0049e45a | = "Return to game"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049e45f
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049e464
    PUSH EAX                            ; 0049e467
    PUSH EDI                            ; 0049e468 | DAT_01c78424
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 0049e469
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_add_FUN_00473cb0()
    ADD ESP,0x8                         ; 0049e46e
    PUSH ESI                            ; 0049e471
    PUSH EBX                            ; 0049e472
    PUSH 0x58289d                       ; 0049e473 | = "You are connect to a network game.\nD..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049e478
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049e47d
    PUSH EAX                            ; 0049e480
    PUSH EDI                            ; 0049e481 | DAT_01c78424
    CALL shape_edittool.cpp_CPickList_initializeDialog_FUN_00474e70 ; 0049e482
        ;   XREF to: 00474e70 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CPickList_initializeDialog_FUN_00474e70()
    ADD ESP,0x10                        ; 0049e487
    MOV dword ptr [0x01c78420],ESI      ; 0049e48a | DAT_01c78420
    JMP 0x0049e0dc                      ; 0049e490
        ;   XREF to: 0049e0dc (UNCONDITIONAL_JUMP)  ; LAB_0049e0dc
    PUSH 0x5828df                       ; 0049e495 | = "Abort network game"
        ;   Label: LAB_0049e495
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049e49a
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049e49f
    PUSH EAX                            ; 0049e4a2
    PUSH EDI                            ; 0049e4a3 | DAT_01c78424
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 0049e4a4
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_add_FUN_00473cb0()
    ADD ESP,0x8                         ; 0049e4a9
    PUSH 0x5828f2                       ; 0049e4ac | = "Return to game"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049e4b1
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049e4b6
    PUSH EAX                            ; 0049e4b9
    PUSH EDI                            ; 0049e4ba | DAT_01c78424
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 0049e4bb
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_add_FUN_00473cb0()
    ADD ESP,0x8                         ; 0049e4c0
    PUSH ESI                            ; 0049e4c3
    PUSH EBX                            ; 0049e4c4
    PUSH 0x582901                       ; 0049e4c5 | = "You are hosting a network game.\nDo y..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049e4ca
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0049e4cf
    PUSH EAX                            ; 0049e4d2
    PUSH EDI                            ; 0049e4d3 | DAT_01c78424
    CALL shape_edittool.cpp_CPickList_initializeDialog_FUN_00474e70 ; 0049e4d4
        ;   XREF to: 00474e70 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CPickList_initializeDialog_FUN_00474e70()
    ADD ESP,0x10                        ; 0049e4d9
    MOV dword ptr [0x01c78420],ESI      ; 0049e4dc | DAT_01c78420
    JMP 0x0049e0dc                      ; 0049e4e2
        ;   XREF to: 0049e0dc (UNCONDITIONAL_JUMP)  ; LAB_0049e0dc
    MOV EAX,[0x014b9904]                ; 0049e4e7 | DAT_014b9904
        ;   Label: LAB_0049e4e7
    JMP 0x0049e36a                      ; 0049e4ec
        ;   XREF to: 0049e36a (UNCONDITIONAL_JUMP)  ; LAB_0049e36a
    PUSH 0x0                            ; 0049e4f1
        ;   Label: LAB_0049e4f1
    LEA EAX,[EBP + 0xfffffd80]          ; 0049e4f3
    PUSH EAX                            ; 0049e4f9
    CALL shape_edittool.cpp_CPickList_dtor_FUN_00474cf0 ; 0049e4fa
        ;   XREF to: 00474cf0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CPickList_dtor_FUN_00474cf0()
    JMP 0x0049debe                      ; 0049e4ff
        ;   XREF to: 0049debe (UNCONDITIONAL_JUMP)  ; LAB_0049debe
    MOV EAX,[0x005bdee0]                ; 0049e504 | DAT_005bdee0
        ;   Label: LAB_0049e504
    CMP dword ptr [EAX + 0x168],0x0     ; 0049e509 | DAT_01cea3e8
    JNZ 0x0049e0ec                      ; 0049e510
        ;   XREF to: 0049e0ec (CONDITIONAL_JUMP)  ; LAB_0049e0ec
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 0049e516
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049e51b
    INC dword ptr [EAX + 0x26c]         ; 0049e51e
    JMP 0x0049e0f1                      ; 0049e524
        ;   XREF to: 0049e0f1 (UNCONDITIONAL_JUMP)  ; LAB_0049e0f1
    PUSH 0x1c                           ; 0049e529
        ;   Label: LAB_0049e529
    MOV EAX,[0x005bac64]                ; 0049e52b | DAT_005bac64
    PUSH EAX                            ; 0049e530 | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 0049e531 | DAT_01cc30e4
    CALL dword ptr [EDX + 0x4]          ; 0049e533
    ADD ESP,0x8                         ; 0049e536
    TEST EAX,EAX                        ; 0049e539
    JNZ 0x0049dec1                      ; 0049e53b
        ;   XREF to: 0049dec1 (CONDITIONAL_JUMP)  ; LAB_0049dec1
    FLD float ptr [EBP + -0x4]          ; 0049e541
    FLDZ                                ; 0049e544
    FCOMPP                              ; 0049e546
    FNSTSW AX                           ; 0049e548
    SAHF                                ; 0049e54a
    JA 0x0049e584                       ; 0049e54b
        ;   XREF to: 0049e584 (CONDITIONAL_JUMP)  ; LAB_0049e584
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049e54d
    FLD float ptr [EBP + -0x4]          ; 0049e550
    FADD float ptr [EAX + 0x264]        ; 0049e553
    FST float ptr [EBP + -0x4]          ; 0049e559
    FCOMP double ptr [0x005829a2]       ; 0049e55c | DAT_005829a2
    FNSTSW AX                           ; 0049e562
    SAHF                                ; 0049e564
    JBE 0x0049e13c                      ; 0049e565
        ;   XREF to: 0049e13c (CONDITIONAL_JUMP)  ; LAB_0049e13c
    MOV ECX,dword ptr [EBP + 0x14]      ; 0049e56b
    PUSH ECX                            ; 0049e56e
    MOV EBX,0xbf800000                  ; 0049e56f
    CALL core_game.cpp_CGame_beginFadeOut_FUN_004a3820 ; 0049e574
        ;   XREF to: 004a3820 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_CGame_beginFadeOut_FUN_004a3820()
    MOV dword ptr [EBP + -0x4],EBX      ; 0049e579
    ADD ESP,0x4                         ; 0049e57c
    JMP 0x0049e13c                      ; 0049e57f
        ;   XREF to: 0049e13c (UNCONDITIONAL_JUMP)  ; LAB_0049e13c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049e584
        ;   Label: LAB_0049e584
    PUSH EAX                            ; 0049e587
    CALL core_game.cpp_CGame_fadeIn_FUN_004a3a50 ; 0049e588
        ;   XREF to: 004a3a50 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_CGame_fadeIn_FUN_004a3a50()
    ADD ESP,0x4                         ; 0049e58d
    TEST EAX,EAX                        ; 0049e590
    JNZ 0x0049dec1                      ; 0049e592
        ;   XREF to: 0049dec1 (CONDITIONAL_JUMP)  ; LAB_0049dec1
    JMP 0x0049e13c                      ; 0049e598
        ;   XREF to: 0049e13c (UNCONDITIONAL_JUMP)  ; LAB_0049e13c
    MOV ECX,dword ptr [EBP + 0x14]      ; 0049e59d
        ;   Label: LAB_0049e59d
    PUSH ECX                            ; 0049e5a0
    CALL FUN_004a57c0                   ; 0049e5a1
        ;   XREF to: 004a57c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a57c0()
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049e5a6
    MOV EBX,dword ptr [EAX + 0x200]     ; 0049e5a9
    ADD ESP,0x4                         ; 0049e5af
    TEST EBX,EBX                        ; 0049e5b2
    JZ 0x0049e5bb                       ; 0049e5b4
        ;   XREF to: 0049e5bb (CONDITIONAL_JUMP)  ; LAB_0049e5bb
    CALL wincore_winrun.cpp_getNextKeypress_FUN_00558b00 ; 0049e5b6
        ;   XREF to: 00558b00 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getNextKeypress_FUN_00558b00()
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049e5bb
        ;   Label: LAB_0049e5bb
    MOV EDX,dword ptr [EAX + 0x9c4]     ; 0049e5be
    TEST EDX,EDX                        ; 0049e5c4
    JZ 0x0049e5d2                       ; 0049e5c6
        ;   XREF to: 0049e5d2 (CONDITIONAL_JUMP)  ; LAB_0049e5d2
    XOR ECX,ECX                         ; 0049e5c8
    MOV dword ptr [EBP + -0xc],ECX      ; 0049e5ca
    JMP 0x0049dec1                      ; 0049e5cd
        ;   XREF to: 0049dec1 (UNCONDITIONAL_JUMP)  ; LAB_0049dec1
    CMP dword ptr [EBP + -0x8],0x0      ; 0049e5d2
        ;   Label: LAB_0049e5d2
    JZ 0x0049dde4                       ; 0049e5d6
        ;   XREF to: 0049dde4 (CONDITIONAL_JUMP)  ; LAB_0049dde4
    MOV EAX,[0x005bed68]                ; 0049e5dc | DAT_005bed68
    PUSH EAX                            ; 0049e5e1
    MOV dword ptr [EBP + -0x8],EDX      ; 0049e5e2
    CALL core_sound.cpp_CSound_init_FUN_0052ddf0 ; 0049e5e5
        ;   XREF to: 0052ddf0 (UNCONDITIONAL_CALL)  ; undefined core_sound.cpp_CSound_init_FUN_0052ddf0()
    ADD ESP,0x4                         ; 0049e5ea
    MOV EDX,dword ptr [0x005b9284]      ; 0049e5ed | DAT_005b9284
    PUSH EDX                            ; 0049e5f3
    CALL FUN_004940d0                   ; 0049e5f4
        ;   XREF to: 004940d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004940d0()
    ADD ESP,0x4                         ; 0049e5f9
    JMP 0x0049dde4                      ; 0049e5fc
        ;   XREF to: 0049dde4 (UNCONDITIONAL_JUMP)  ; LAB_0049dde4
    CMP EAX,0x1                         ; 0049e601
        ;   Label: LAB_0049e601
    JZ 0x0049df72                       ; 0049e604
        ;   XREF to: 0049df72 (CONDITIONAL_JUMP)  ; LAB_0049df72
    JMP 0x0049df3f                      ; 0049e60a
        ;   XREF to: 0049df3f (UNCONDITIONAL_JUMP)  ; LAB_0049df3f

