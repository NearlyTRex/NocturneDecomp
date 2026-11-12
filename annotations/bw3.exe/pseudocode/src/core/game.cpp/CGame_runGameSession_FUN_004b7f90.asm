; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_game_cpp_CGame_runGameSession_FUN_004b7f90(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x8a4]:1  local_8a4
; undefined        Stack[-0x4e4]:1  local_4e4
; undefined        Stack[-0x124]:1  local_124
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_mission.cpp_CDemonMission_run_FUN_004f72a0 at 004f7317
;
; Referenced Globals:
;   TerminatedCString s_Blair_Witch_3_started_005c25fc
;   TerminatedCString s_s_16_06_32_005c2613
;   TerminatedCString s_Oct_30_2000_005c261c
;   TerminatedCString s_game_cpp_built_on_s_s_005c2628
;   TerminatedCString s_System_RAM_d_005c2642
;   TerminatedCString s_Swap_file_d_005c2652
;   undefined4 DAT_005c2661
;   TerminatedCString s_ESP_08X_005c2665
;   TerminatedCString s_VELOCITY_005c2670
;   TerminatedCString s_Flashlight_005c2679
;   undefined4 s_lashlight_005c2679+1
;   undefined4 s_ashlight_005c2679+2
;   undefined4 s_shlight_005c2679+3
;   TerminatedCString s_Leave_network_game_005c2684
;   TerminatedCString s_Return_to_game_005c2697
;   ... and 66 more
;
; Called Functions:
;   core_bmppuzzl.cpp_FUN_004119a0
;   core_bmppuzzl.cpp_FUN_00411a40
;   core_dlight.cpp_CDemonLight_init_FUN_0045c2a0
;   core_event.cpp_FUN_004946f0
;   core_fire.cpp_FUN_004a1480
;   core_game.cpp_CGame_beginFadeOut_FUN_004bd660
;   core_game.cpp_CGame_clearOverlay_FUN_004b4710
;   core_game.cpp_CGame_fadeIn_FUN_004bd8d0
;   core_game.cpp_CGame_loadAssets_FUN_004bd430
;   core_game.cpp_CGame_playerControls_FUN_004b92e0
;   core_game.cpp_CGame_processFudge_FUN_004b4f00
;   core_game.cpp_CGame_processHotkeys_FUN_004ba540
;   core_game.cpp_CGame_promptLoadGame_FUN_004bfa40
;   core_game.cpp_CGame_saveClockTime_FUN_004b4430
;   core_game.cpp_CGame_setGameRes_FUN_004b7de0
;   ... and 52 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b7f90
        ;   Label: core_game.cpp_CGame_runGameSession_FUN_004b7f90
    PUSH ESI                            ; 004b7f91
    PUSH EDI                            ; 004b7f92
    PUSH EBP                            ; 004b7f93
    MOV EBP,ESP                         ; 004b7f94
    SUB ESP,0x894                       ; 004b7f96
    MOV ESI,dword ptr [0x005f1690]      ; 004b7f9c | g_CConsolePtr
    XOR EDX,EDX                         ; 004b7fa2
    PUSH ESI                            ; 004b7fa4 | g_CConsoleInstance
    MOV dword ptr [EBP + -0x4],EDX      ; 004b7fa5
    MOV dword ptr [EBP + -0xc],EDX      ; 004b7fa8
    CALL engine_console.cpp_CConsole_reset_FUN_00442190 ; 004b7fab
        ;   XREF to: 00442190 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_reset_FUN_00442190(CConsole * this_ptr)
    ADD ESP,0x4                         ; 004b7fb0
    PUSH 0x5c25fc                       ; 004b7fb3 | = "Blair Witch 3 started\n"
    MOV EDI,dword ptr [0x005f1690]      ; 004b7fb8 | g_CConsolePtr
    PUSH EDI                            ; 004b7fbe | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 004b7fbf
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0x8                         ; 004b7fc4
    PUSH 0x5c2613                       ; 004b7fc7 | = "16:06:32"
    PUSH 0x5c261c                       ; 004b7fcc | = "Oct 30 2000"
    PUSH 0x5c2628                       ; 004b7fd1 | = "game.cpp built on %s %s\n\n"
    MOV EAX,[0x005f1690]                ; 004b7fd6 | g_CConsolePtr
    PUSH EAX                            ; 004b7fdb | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 004b7fdc
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0x10                        ; 004b7fe1
    MOV EDX,dword ptr [0x02d21b88]      ; 004b7fe4 | DAT_02d21b88
    PUSH EDX                            ; 004b7fea
    PUSH 0x5c2642                       ; 004b7feb | = "System RAM: %d\n"
    MOV ECX,dword ptr [0x005f1690]      ; 004b7ff0 | g_CConsolePtr
    PUSH ECX                            ; 004b7ff6 | g_CConsoleInstance
    MOV EBX,0x1                         ; 004b7ff7
    CALL engine_console.cpp_FUN_00441ff0 ; 004b7ffc
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0xc                         ; 004b8001
    MOV dword ptr [EBP + -0x8],EBX      ; 004b8004
    MOV EBX,dword ptr [0x02d21b8c]      ; 004b8007 | DAT_02d21b8c
    PUSH EBX                            ; 004b800d
    PUSH 0x5c2652                       ; 004b800e | = "Swap file: %d\n"
    MOV ESI,dword ptr [0x005f1690]      ; 004b8013 | g_CConsolePtr
    PUSH ESI                            ; 004b8019 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 004b801a
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0xc                         ; 004b801f
    LEA EAX,[EBP + 0xfffffeec]          ; 004b8022
    PUSH EAX                            ; 004b8028
    MOV EDI,dword ptr [0x005fb140]      ; 004b8029 | g_CEditorToolsPtr
    PUSH EDI                            ; 004b802f
    CALL shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004819e0 ; 004b8030
        ;   XREF to: 004819e0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004819e0(CEditorTools * this_ptr, char * output_buffer)
    ADD ESP,0x8                         ; 004b8035
    LEA EAX,[EBP + 0xfffffeec]          ; 004b8038
    PUSH EAX                            ; 004b803e
    PUSH 0x5c2661                       ; 004b803f | DAT_005c2661
    MOV EAX,[0x005f1690]                ; 004b8044 | g_CConsolePtr
    PUSH EAX                            ; 004b8049 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 004b804a
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0xc                         ; 004b804f
    MOV dword ptr [EBP + 0xffffffec],ESP ; 004b8052
    MOV EAX,dword ptr [EBP + -0x14]     ; 004b8058
    PUSH EAX                            ; 004b805b
    PUSH 0x5c2665                       ; 004b805c | = "ESP: %08X\n"
    MOV EDX,dword ptr [0x005f1690]      ; 004b8061 | g_CConsolePtr
    PUSH EDX                            ; 004b8067 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 004b8068
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b806d
    MOV dword ptr [EAX + 0x320],0x0     ; 004b8070
    MOV dword ptr [EAX + 0x220],0x0     ; 004b807a
    MOV dword ptr [EAX + 0x324],0x1     ; 004b8084
    MOV dword ptr [EAX + 0x208],0x0     ; 004b808e
    MOV dword ptr [EAX + 0x20c],0x0     ; 004b8098
    MOV dword ptr [EAX + 0x328],0x0     ; 004b80a2
    MOV dword ptr [EAX + 0x1f4],0x0     ; 004b80ac
    MOV dword ptr [EAX + 0x204],0x0     ; 004b80b6
    MOV dword ptr [EAX + 0x1f8],0x0     ; 004b80c0
    MOV dword ptr [EAX + 0x1fc],0x0     ; 004b80ca
    MOV dword ptr [EAX + 0x200],0x0     ; 004b80d4
    MOV dword ptr [EAX + 0x32c],0x0     ; 004b80de
    ADD ESP,0xc                         ; 004b80e8
    MOV dword ptr [EAX + 0x330],0x0     ; 004b80eb
    MOV dword ptr [EAX + 0x210],0x3f800000 ; 004b80f5
    MOV dword ptr [EAX + 0x214],0x0     ; 004b80ff
    MOV dword ptr [EAX + 0x218],0x0     ; 004b8109
    MOV dword ptr [EAX + 0x21c],0x0     ; 004b8113
    MOV byte ptr [EAX + 0x968],0x0      ; 004b811d
    MOV dword ptr [EAX + 0xa68],0x0     ; 004b8124
    MOV dword ptr [EAX + 0xa6c],0x0     ; 004b812e
    MOV dword ptr [EAX + 0x260],0x0     ; 004b8138
    MOV dword ptr [EAX + 0xe8],0x0      ; 004b8142
    XOR ECX,ECX                         ; 004b814c
    MOV dword ptr [EAX + 0x22c],ECX     ; 004b814e
    MOV dword ptr [EAX + 0x25c],ECX     ; 004b8154
    MOV dword ptr [EAX + 0x230],ECX     ; 004b815a
    MOV dword ptr [EAX + 0xb7c],ECX     ; 004b8160
    MOV dword ptr [EAX + 0x264],ECX     ; 004b8166
    MOV dword ptr [EAX + 0x268],ECX     ; 004b816c
    MOV dword ptr [EAX + 0x26c],ECX     ; 004b8172
    MOV dword ptr [EAX + 0x244],ECX     ; 004b8178
    MOV dword ptr [EAX + 0x23c],ECX     ; 004b817e
    MOV dword ptr [EAX + 0x240],ECX     ; 004b8184
    MOV EAX,[0x005fe4b0]                ; 004b818a | g_CFieldNotesPtr
    MOV dword ptr [0x01d22200],ECX      ; 004b818f | DAT_01d22200
    MOV dword ptr [EAX + 0x40],ECX      ; 004b8195 | g_CFieldNotesInstance.is_displayed
    CALL core_bmppuzzl.cpp_FUN_00411a40 ; 004b8198
        ;   XREF to: 00411a40 (UNCONDITIONAL_CALL)  ; undefined core_bmppuzzl.cpp_FUN_00411a40()
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b819d
    XOR EBX,EBX                         ; 004b81a0
    PUSH EAX                            ; 004b81a2
    MOV dword ptr [0x01d22c2c],EBX      ; 004b81a3 | DAT_01d22c2c
    MOV dword ptr [EAX + 0x234],0x0     ; 004b81a9
    CALL core_game.cpp_CGame_setGameRes_FUN_004b7de0 ; 004b81b3
        ;   XREF to: 004b7de0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_setGameRes_FUN_004b7de0(CGame * this_ptr)
    ADD ESP,0x4                         ; 004b81b8
    PUSH 0x5c2670                       ; 004b81bb | = "VELOCITY"
    CALL crt_env.c_getenv_FUN_005a5ec0  ; 004b81c0
        ;   XREF to: 005a5ec0 (UNCONDITIONAL_CALL)  ; char * crt_env.c_getenv_FUN_005a5ec0(char * name)
    ADD ESP,0x4                         ; 004b81c5
    TEST EAX,EAX                        ; 004b81c8
    JZ 0x004b81d9                       ; 004b81ca
        ;   XREF to: 004b81d9 (CONDITIONAL_JUMP)  ; LAB_004b81d9
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b81cc
    MOV dword ptr [EAX + 0x234],0x1     ; 004b81cf
    PUSH 0x1d1e360                      ; 004b81d9
        ;   Label: LAB_004b81d9
    CALL core_dlight.cpp_CDemonLight_init_FUN_0045c2a0 ; 004b81de
        ;   XREF to: 0045c2a0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_init_FUN_0045c2a0(CDemonLight * this_ptr)
    ADD ESP,0x4                         ; 004b81e3
    MOV EDI,dword ptr [EBP + 0x14]      ; 004b81e6
    PUSH EDI                            ; 004b81e9
    MOV ESI,0x5c2679                    ; 004b81ea | = "Flashlight"
    CALL core_game.cpp_FUN_004c48b0     ; 004b81ef
        ;   XREF to: 004c48b0 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004c48b0()
    ADD ESP,0x4                         ; 004b81f4
    MOV EDI,0x1d1e3a0                   ; 004b81f7
    MOV EDX,0x42000000                  ; 004b81fc
    PUSH EDI                            ; 004b8201
    MOV AL,byte ptr [ESI]               ; 004b8202 | = "Flashlight" | s_ashlight_005c2679+2
        ;   Label: LAB_004b8202
    MOV byte ptr [EDI],AL               ; 004b8204 | g_CDemonLightInstance.base.camera_name[0] | g_CDemonLightInstance.base.camera_name[2]
    CMP AL,0x0                          ; 004b8206
    JZ 0x004b821a                       ; 004b8208
        ;   XREF to: 004b821a (CONDITIONAL_JUMP)  ; LAB_004b821a
    MOV AL,byte ptr [ESI + 0x1]         ; 004b820a | s_lashlight_005c2679+1 | s_shlight_005c2679+3
    ADD ESI,0x2                         ; 004b820d
    MOV byte ptr [EDI + 0x1],AL         ; 004b8210 | g_CDemonLightInstance.base.camera_name[1] | g_CDemonLightInstance.base.camera_name[3]
    ADD EDI,0x2                         ; 004b8213
    CMP AL,0x0                          ; 004b8216
    JNZ 0x004b8202                      ; 004b8218
        ;   XREF to: 004b8202 (CONDITIONAL_JUMP)  ; LAB_004b8202
    POP EDI                             ; 004b821a
        ;   Label: LAB_004b821a
    MOV ECX,dword ptr [0x00603b28]      ; 004b821b | g_CDemonSetPtr
    XOR EAX,EAX                         ; 004b8221
    PUSH ECX                            ; 004b8223 | g_CDemonSetInstance
    MOV dword ptr [0x01d1e4a0],EDX      ; 004b8224 | g_CDemonLightInstance.base.max_distance
    MOV [0x01d20014],EAX                ; 004b822a | g_CDemonLightInstance.light_enabled_flag
    CALL core_set.cpp_CDemonSet_initScene_FUN_00534420 ; 004b822f
        ;   XREF to: 00534420 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_initScene_FUN_00534420(CDemonSet * this_ptr)
    MOV EBX,dword ptr [0x01d226c8]      ; 004b8234 | DAT_01d226c8
    ADD ESP,0x4                         ; 004b823a
    TEST EBX,EBX                        ; 004b823d
    JZ 0x004b8664                       ; 004b823f
        ;   XREF to: 004b8664 (CONDITIONAL_JUMP)  ; LAB_004b8664
    PUSH 0x1d226cc                      ; 004b8245 | DAT_01d226cc
    MOV EAX,[0x00603b28]                ; 004b824a | g_CDemonSetPtr
    XOR EDI,EDI                         ; 004b824f
    PUSH EAX                            ; 004b8251 | g_CDemonSetInstance
    MOV dword ptr [0x01d226c8],EDI      ; 004b8252 | DAT_01d226c8
    CALL core_set.cpp_CDemonSet_loadMasterLightStates_FUN_0053b660 ; 004b8258
        ;   XREF to: 0053b660 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_loadMasterLightStates_FUN_0053b660(CDemonSet * this_ptr, int * light_state_buffer)
    ADD ESP,0x8                         ; 004b825d
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b8260
        ;   Label: LAB_004b8260
    MOV EDX,dword ptr [EAX + 0x248]     ; 004b8263
    CMP EDX,0x8000                      ; 004b8269
    JGE 0x004b8678                      ; 004b826f
        ;   XREF to: 004b8678 (CONDITIONAL_JUMP)  ; LAB_004b8678
    MOV dword ptr [EAX + 0x248],0x8000  ; 004b8275
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b827f
        ;   Label: LAB_004b827f
    MOV EBX,dword ptr [EAX + 0x248]     ; 004b8282
    PUSH EBX                            ; 004b8288
    MOV ESI,dword ptr [0x00603b28]      ; 004b8289 | g_CDemonSetPtr
    PUSH ESI                            ; 004b828f | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setGamma_FUN_0053b1c0 ; 004b8290
        ;   XREF to: 0053b1c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setGamma_FUN_0053b1c0(CDemonSet * this_ptr, int gamma)
    ADD ESP,0x8                         ; 004b8295
    MOV EDI,dword ptr [EBP + 0x14]      ; 004b8298
    PUSH EDI                            ; 004b829b
    CALL core_game.cpp_CGame_clearOverlay_FUN_004b4710 ; 004b829c
        ;   XREF to: 004b4710 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_clearOverlay_FUN_004b4710(CGame * this_ptr)
    ADD ESP,0x4                         ; 004b82a1
    PUSH 0x1d22204                      ; 004b82a4 | g_CPickList
    CALL shape_edittool.cpp_CPickList_clear_FUN_00484f10 ; 004b82a9
        ;   XREF to: 00484f10 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_clear_FUN_00484f10(CPickList * this_ptr)
    MOV EDX,dword ptr [EDI + 0x324]     ; 004b82ae
    ADD ESP,0x4                         ; 004b82b4
    TEST EDX,EDX                        ; 004b82b7
    JZ 0x004b8693                       ; 004b82b9
        ;   XREF to: 004b8693 (CONDITIONAL_JUMP)  ; LAB_004b8693
    MOV EAX,[0x006039e0]                ; 004b82bf | g_CScriptPtr
    PUSH 0x1                            ; 004b82c4
    MOV ESI,dword ptr [EAX + 0xc]       ; 004b82c6 | g_CScriptInstance.focus_actor
    PUSH ESI                            ; 004b82c9
    MOV EDI,dword ptr [0x00603b28]      ; 004b82ca | g_CDemonSetPtr
    PUSH EDI                            ; 004b82d0 | g_CDemonSetInstance
    CALL core_setdir.cpp_FUN_0053f940   ; 004b82d1
        ;   XREF to: 0053f940 (UNCONDITIONAL_CALL)  ; undefined core_setdir.cpp_FUN_0053f940()
    ADD ESP,0xc                         ; 004b82d6
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b82d9
        ;   Label: LAB_004b82d9
    PUSH EAX                            ; 004b82dc
    CALL core_game.cpp_FUN_004bd620     ; 004b82dd
        ;   XREF to: 004bd620 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004bd620(CGame * this_ptr)
    ADD ESP,0x4                         ; 004b82e2
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b82e5
    PUSH EDX                            ; 004b82e8
    CALL core_game.cpp_CGame_loadAssets_FUN_004bd430 ; 004b82e9
        ;   XREF to: 004bd430 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_loadAssets_FUN_004bd430(CGame * this_ptr)
    ADD ESP,0x4                         ; 004b82ee
    PUSH 0x3                            ; 004b82f1
    MOV ECX,dword ptr [0x00603450]      ; 004b82f3 | g_CNetGamePtr
    PUSH ECX                            ; 004b82f9 | g_CNetGameInstance
    CALL core_netgame.cpp_CNetGame_syncPlayers_FUN_00504890 ; 004b82fa
        ;   XREF to: 00504890 (UNCONDITIONAL_CALL)  ; int core_netgame.cpp_CNetGame_syncPlayers_FUN_00504890(CNetGame * this_ptr, int sync_stage)
    ADD ESP,0x8                         ; 004b82ff
    TEST EAX,EAX                        ; 004b8302
    JZ 0x004b8594                       ; 004b8304
        ;   XREF to: 004b8594 (CONDITIONAL_JUMP)  ; LAB_004b8594
    PUSH 0x4                            ; 004b830a
    MOV EBX,dword ptr [0x00603450]      ; 004b830c | g_CNetGamePtr
    PUSH EBX                            ; 004b8312 | g_CNetGameInstance
    CALL core_netgame.cpp_CNetGame_syncPlayers_FUN_00504890 ; 004b8313
        ;   XREF to: 00504890 (UNCONDITIONAL_CALL)  ; int core_netgame.cpp_CNetGame_syncPlayers_FUN_00504890(CNetGame * this_ptr, int sync_stage)
    ADD ESP,0x8                         ; 004b8318
    TEST EAX,EAX                        ; 004b831b
    JZ 0x004b8594                       ; 004b831d
        ;   XREF to: 004b8594 (CONDITIONAL_JUMP)  ; LAB_004b8594
    MOV ESI,dword ptr [EBP + 0x14]      ; 004b8323
    MOV EAX,[0x00603450]                ; 004b8326 | g_CNetGamePtr
    PUSH ESI                            ; 004b832b
    MOV dword ptr [EAX + 0x4],0x3       ; 004b832c | g_CNetGameInstance.network_mode
    CALL core_game.cpp_CGame_saveClockTime_FUN_004b4430 ; 004b8333
        ;   XREF to: 004b4430 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_saveClockTime_FUN_004b4430(CGame * this_ptr)
    ADD ESP,0x4                         ; 004b8338
    PUSH ESI                            ; 004b833b
    CALL core_game.cpp_FUN_004ba490     ; 004b833c
        ;   XREF to: 004ba490 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004ba490()
    ADD ESP,0x4                         ; 004b8341
    MOV EAX,[0x00603450]                ; 004b8344 | g_CNetGamePtr
    PUSH EAX                            ; 004b8349 | g_CNetGameInstance
    CALL core_netgame.cpp_CNetGame_processServerFrame_FUN_00507790 ; 004b834a
        ;   XREF to: 00507790 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_processServerFrame_FUN_00507790(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 004b834f
    MOV EDX,dword ptr [0x006002ac]      ; 004b8352 | DAT_006002ac
    PUSH EDX                            ; 004b8358
    CALL core_level.cpp_FUN_004dfc40    ; 004b8359
        ;   XREF to: 004dfc40 (UNCONDITIONAL_CALL)  ; undefined core_level.cpp_FUN_004dfc40()
    MOV EAX,[0x01d5ba14]                ; 004b835e | DAT_01d5ba14
    LEA EDI,[ESI + 0xb80]               ; 004b8363
    ADD ESP,0x4                         ; 004b8369
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004b836c
    MOV EDX,dword ptr [ESI + 0xdc]      ; 004b8373
    XOR ECX,ECX                         ; 004b8379
    MOV dword ptr [EAX + 0x206e4],EDX   ; 004b837b
    MOV dword ptr [0x01d22c68],ECX      ; 004b8381 | DAT_01d22c68
    MOV dword ptr [ESI + 0x284],0x0     ; 004b8387
    CMP dword ptr [0x01d22c3c],0x0      ; 004b8391 | DAT_01d22c3c
        ;   Label: LAB_004b8391
    JZ 0x004b83fb                       ; 004b8398
        ;   XREF to: 004b83fb (CONDITIONAL_JUMP)  ; LAB_004b83fb
    CMP dword ptr [0x007dffb4],0x0      ; 004b839a | DAT_007dffb4
    JZ 0x004b86ae                       ; 004b83a1
        ;   XREF to: 004b86ae (CONDITIONAL_JUMP)  ; LAB_004b86ae
    MOV EAX,0x1                         ; 004b83a7
        ;   Label: LAB_004b83a7
    MOV EBX,EAX                         ; 004b83ac
        ;   Label: LAB_004b83ac
    TEST EAX,EAX                        ; 004b83ae
    JZ 0x004b83c7                       ; 004b83b0
        ;   XREF to: 004b83c7 (CONDITIONAL_JUMP)  ; LAB_004b83c7
    CMP dword ptr [0x01d22c68],0x0      ; 004b83b2 | DAT_01d22c68
    JNZ 0x004b83c7                      ; 004b83b9
        ;   XREF to: 004b83c7 (CONDITIONAL_JUMP)  ; LAB_004b83c7
    MOV ESI,dword ptr [EBP + 0x14]      ; 004b83bb
    PUSH ESI                            ; 004b83be
    CALL core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004b7ee0 ; 004b83bf
        ;   XREF to: 004b7ee0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004b7ee0(CGame * this_ptr)
    ADD ESP,0x4                         ; 004b83c4
    TEST EBX,EBX                        ; 004b83c7
        ;   Label: LAB_004b83c7
    JNZ 0x004b83f5                      ; 004b83c9
        ;   XREF to: 004b83f5 (CONDITIONAL_JUMP)  ; LAB_004b83f5
    CMP dword ptr [0x01d22c68],0x0      ; 004b83cb | DAT_01d22c68
    JZ 0x004b83f5                       ; 004b83d2
        ;   XREF to: 004b83f5 (CONDITIONAL_JUMP)  ; LAB_004b83f5
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b83d4
    PUSH EDX                            ; 004b83d7
    CALL core_game.cpp_CGame_setGameRes_FUN_004b7de0 ; 004b83d8
        ;   XREF to: 004b7de0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_setGameRes_FUN_004b7de0(CGame * this_ptr)
    MOV EAX,[0x00603b28]                ; 004b83dd | g_CDemonSetPtr
    ADD ESP,0x4                         ; 004b83e2
    MOV EDX,dword ptr [EAX + 0x15aeb8]  ; 004b83e5 | g_CDemonSetInstance.selected_camera_index
    PUSH EDX                            ; 004b83eb
    PUSH EAX                            ; 004b83ec | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_00534890 ; 004b83ed
        ;   XREF to: 00534890 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraView_FUN_00534890(CDemonSet * this_ptr, int index)
    ADD ESP,0x8                         ; 004b83f2
    MOV dword ptr [0x01d22c68],EBX      ; 004b83f5 | DAT_01d22c68
        ;   Label: LAB_004b83f5
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b83fb
        ;   Label: LAB_004b83fb
    CMP dword ptr [EAX + 0x220],0x0     ; 004b83fe
    JZ 0x004b86c4                       ; 004b8405
        ;   XREF to: 004b86c4 (CONDITIONAL_JUMP)  ; LAB_004b86c4
    XOR EAX,EAX                         ; 004b840b
        ;   Label: LAB_004b840b
    PUSH EAX                            ; 004b840d
        ;   Label: LAB_004b840d
    MOV ESI,dword ptr [0x00600284]      ; 004b840e | DAT_00600284
    PUSH ESI                            ; 004b8414 | DAT_01d70a78
    CALL engine_keys.cpp_CKeys_toggleInputMask_FUN_004df5d0 ; 004b8415
        ;   XREF to: 004df5d0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_toggleInputMask_FUN_004df5d0(CKeys * this_ptr, int enable_extended)
    ADD ESP,0x8                         ; 004b841a
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b841d
    PUSH EAX                            ; 004b8420
    CALL core_game.cpp_CGame_processHotkeys_FUN_004ba540 ; 004b8421
        ;   XREF to: 004ba540 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_processHotkeys_FUN_004ba540(CGame * this_ptr)
    ADD ESP,0x4                         ; 004b8426
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b8429
    PUSH EDX                            ; 004b842c
    CALL core_game.cpp_CGame_updateStatusDisplays_FUN_004b4d50 ; 004b842d
        ;   XREF to: 004b4d50 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_updateStatusDisplays_FUN_004b4d50(CGame * this_ptr)
    ADD ESP,0x4                         ; 004b8432
    MOV ECX,dword ptr [EBP + 0x14]      ; 004b8435
    PUSH ECX                            ; 004b8438
    CALL core_game.cpp_CGame_processFudge_FUN_004b4f00 ; 004b8439
        ;   XREF to: 004b4f00 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_processFudge_FUN_004b4f00(CGame * this_ptr)
    ADD ESP,0x4                         ; 004b843e
    MOV EBX,dword ptr [EBP + 0x14]      ; 004b8441
    PUSH EBX                            ; 004b8444
    CALL core_game.cpp_CGame_playerControls_FUN_004b92e0 ; 004b8445
        ;   XREF to: 004b92e0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_playerControls_FUN_004b92e0(CGame * this_ptr)
    ADD ESP,0x4                         ; 004b844a
    PUSH EBX                            ; 004b844d
    CALL core_game.cpp_FUN_004c4bc0     ; 004b844e
        ;   XREF to: 004c4bc0 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004c4bc0()
    MOV EAX,[0x01d5ba14]                ; 004b8453 | DAT_01d5ba14
    SHL EAX,0x2                         ; 004b8458
    MOV EDX,dword ptr [EAX + 0x1d5ba04] ; 004b845b
    ADD ESP,0x4                         ; 004b8461
    TEST EDX,EDX                        ; 004b8464
    JZ 0x004b84af                       ; 004b8466
        ;   XREF to: 004b84af (CONDITIONAL_JUMP)  ; LAB_004b84af
    MOV EAX,EDX                         ; 004b8468
    PUSH EAX                            ; 004b846a
    MOV EDX,dword ptr [EDX + 0x154]     ; 004b846b
    CALL dword ptr [EDX + 0x10c]        ; 004b8471
    ADD ESP,0x4                         ; 004b8477
    TEST EAX,EAX                        ; 004b847a
    JZ 0x004b84af                       ; 004b847c
        ;   XREF to: 004b84af (CONDITIONAL_JUMP)  ; LAB_004b84af
    MOV EAX,[0x005fe4b0]                ; 004b847e | g_CFieldNotesPtr
    MOV dword ptr [EBX + 0x264],0x0     ; 004b8483
    CMP dword ptr [EAX + 0x40],0x0      ; 004b848d | g_CFieldNotesInstance.is_displayed
    JZ 0x004b849a                       ; 004b8491
        ;   XREF to: 004b849a (CONDITIONAL_JUMP)  ; LAB_004b849a
    MOV dword ptr [EAX + 0x40],0x0      ; 004b8493 | g_CFieldNotesInstance.is_displayed
    MOV EBX,dword ptr [0x007dffb4]      ; 004b849a | DAT_007dffb4
        ;   Label: LAB_004b849a
    TEST EBX,EBX                        ; 004b84a0
    JZ 0x004b84af                       ; 004b84a2
        ;   XREF to: 004b84af (CONDITIONAL_JUMP)  ; LAB_004b84af
    PUSH 0x0                            ; 004b84a4
    PUSH EBX                            ; 004b84a6
    CALL core_bmppuzzl.cpp_FUN_004119a0 ; 004b84a7
        ;   XREF to: 004119a0 (UNCONDITIONAL_CALL)  ; undefined core_bmppuzzl.cpp_FUN_004119a0()
    ADD ESP,0x8                         ; 004b84ac
    MOV EAX,[0x00603b28]                ; 004b84af | g_CDemonSetPtr
        ;   Label: LAB_004b84af
    MOV EAX,dword ptr [EAX + 0x15aeb8]  ; 004b84b4 | g_CDemonSetInstance.selected_camera_index
    XOR EDX,EDX                         ; 004b84ba
    TEST EAX,EAX                        ; 004b84bc
    JL 0x004b86db                       ; 004b84be
        ;   XREF to: 004b86db (CONDITIONAL_JUMP)  ; LAB_004b86db
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b84c4
    CMP dword ptr [EAX + 0x324],0x0     ; 004b84c7
    JZ 0x004b84dd                       ; 004b84ce
        ;   XREF to: 004b84dd (CONDITIONAL_JUMP)  ; LAB_004b84dd
    CMP dword ptr [EAX + 0xe8],0x0      ; 004b84d0
    JZ 0x004b86ec                       ; 004b84d7
        ;   XREF to: 004b86ec (CONDITIONAL_JUMP)  ; LAB_004b86ec
    TEST EDX,EDX                        ; 004b84dd
        ;   Label: LAB_004b84dd
    JZ 0x004b8518                       ; 004b84df
        ;   XREF to: 004b8518 (CONDITIONAL_JUMP)  ; LAB_004b8518
    MOV EAX,[0x006039e0]                ; 004b84e1 | g_CScriptPtr
        ;   Label: LAB_004b84e1
    MOV EBX,dword ptr [EAX + 0x10]      ; 004b84e6 | g_CScriptInstance.focus_actor_changed
    PUSH EBX                            ; 004b84e9
    MOV ESI,dword ptr [EAX + 0xc]       ; 004b84ea | g_CScriptInstance.focus_actor
    PUSH ESI                            ; 004b84ed
    MOV EAX,[0x00603b28]                ; 004b84ee | g_CDemonSetPtr
    PUSH EAX                            ; 004b84f3 | g_CDemonSetInstance
    CALL core_setdir.cpp_FUN_0053f940   ; 004b84f4
        ;   XREF to: 0053f940 (UNCONDITIONAL_CALL)  ; undefined core_setdir.cpp_FUN_0053f940()
    ADD ESP,0xc                         ; 004b84f9
    TEST EAX,EAX                        ; 004b84fc
    JZ 0x004b850c                       ; 004b84fe
        ;   XREF to: 004b850c (CONDITIONAL_JUMP)  ; LAB_004b850c
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b8500
    PUSH EDX                            ; 004b8503
    CALL core_game.cpp_CGame_saveClockTime_FUN_004b4430 ; 004b8504
        ;   XREF to: 004b4430 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_saveClockTime_FUN_004b4430(CGame * this_ptr)
    ADD ESP,0x4                         ; 004b8509
    MOV EAX,[0x006039e0]                ; 004b850c | g_CScriptPtr
        ;   Label: LAB_004b850c
    MOV dword ptr [EAX + 0x10],0x0      ; 004b8511 | g_CScriptInstance.focus_actor_changed
    MOV ECX,dword ptr [EBP + 0x14]      ; 004b8518
        ;   Label: LAB_004b8518
    PUSH ECX                            ; 004b851b
    XOR EBX,EBX                         ; 004b851c
    CALL core_game.cpp_FUN_004b6f30     ; 004b851e
        ;   XREF to: 004b6f30 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004b6f30()
    MOV ESI,dword ptr [0x01d22200]      ; 004b8523 | DAT_01d22200
    ADD ESP,0x4                         ; 004b8529
    TEST ESI,ESI                        ; 004b852c
    JZ 0x004b8821                       ; 004b852e
        ;   XREF to: 004b8821 (CONDITIONAL_JUMP)  ; LAB_004b8821
    MOV EAX,[0x01d22204]                ; 004b8534 | g_CPickList
    TEST EAX,EAX                        ; 004b8539
    JLE 0x004b8713                      ; 004b853b
        ;   XREF to: 004b8713 (CONDITIONAL_JUMP)  ; LAB_004b8713
    PUSH 0x1d22204                      ; 004b8541 | g_CPickList
    CALL shape_edittool.cpp_CPickList_handleDialogInput_FUN_00483970 ; 004b8546
        ;   XREF to: 00483970 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_handleDialogInput_FUN_00483970(CPickList * this_ptr)
    ADD ESP,0x4                         ; 004b854b
    MOV ESI,EAX                         ; 004b854e
    CMP EAX,-0x2                        ; 004b8550
    JZ 0x004b857b                       ; 004b8553
        ;   XREF to: 004b857b (CONDITIONAL_JUMP)  ; LAB_004b857b
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 004b8555
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    MOV EAX,[0x005fb140]                ; 004b855a | g_CEditorToolsPtr
    PUSH EAX                            ; 004b855f
    CALL shape_edittool.cpp_FUN_0047f970 ; 004b8560
        ;   XREF to: 0047f970 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047f970()
    ADD ESP,0x4                         ; 004b8565
    PUSH 0x1d22204                      ; 004b8568 | g_CPickList
    CALL shape_edittool.cpp_CPickList_clear_FUN_00484f10 ; 004b856d
        ;   XREF to: 00484f10 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_clear_FUN_00484f10(CPickList * this_ptr)
    ADD ESP,0x4                         ; 004b8572
    MOV dword ptr [0x01d22200],EBX      ; 004b8575 | DAT_01d22200
    TEST ESI,ESI                        ; 004b857b
        ;   Label: LAB_004b857b
    JNZ 0x004b8719                      ; 004b857d
        ;   XREF to: 004b8719 (CONDITIONAL_JUMP)  ; LAB_004b8719
    PUSH 0x1                            ; 004b8583
    MOV ESI,dword ptr [0x00603450]      ; 004b8585 | g_CNetGamePtr
    PUSH ESI                            ; 004b858b | g_CNetGameInstance
    CALL core_netgame.cpp_CNetGame_disconnect_FUN_005043b0 ; 004b858c
        ;   XREF to: 005043b0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_disconnect_FUN_005043b0(CNetGame * this_ptr, int perform_handshake)
    ADD ESP,0x8                         ; 004b8591
        ;   Label: LAB_004b8591
    MOV EAX,[0x01d5ba14]                ; 004b8594 | DAT_01d5ba14
        ;   Label: LAB_004b8594
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004b8599
    PUSH EAX                            ; 004b85a0
    MOV EDX,dword ptr [EAX + 0x154]     ; 004b85a1
    CALL dword ptr [EDX + 0x10c]        ; 004b85a7
    ADD ESP,0x4                         ; 004b85ad
    CMP EAX,0x2                         ; 004b85b0
    JNZ 0x004b8da5                      ; 004b85b3
        ;   XREF to: 004b8da5 (CONDITIONAL_JUMP)  ; LAB_004b8da5
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b85b9
        ;   Label: LAB_004b85b9
    CMP dword ptr [EAX + 0xa78],0x0     ; 004b85bc
    JZ 0x004b8dbd                       ; 004b85c3
        ;   XREF to: 004b8dbd (CONDITIONAL_JUMP)  ; LAB_004b8dbd
    MOV EBX,dword ptr [0x00600530]      ; 004b85c9 | DAT_00600530
        ;   Label: LAB_004b85c9
    PUSH EBX                            ; 004b85cf | DAT_01d81080
    CALL core_mission.cpp_FUN_004f7bf0  ; 004b85d0
        ;   XREF to: 004f7bf0 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_004f7bf0()
    ADD ESP,0x4                         ; 004b85d5
    PUSH 0x0                            ; 004b85d8
    MOV ESI,dword ptr [0x00600284]      ; 004b85da | DAT_00600284
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b85e0
    PUSH ESI                            ; 004b85e3 | DAT_01d70a78
    MOV dword ptr [EDX + 0x274],EAX     ; 004b85e4
    CALL engine_keys.cpp_CKeys_toggleInputMask_FUN_004df5d0 ; 004b85ea
        ;   XREF to: 004df5d0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_toggleInputMask_FUN_004df5d0(CKeys * this_ptr, int enable_extended)
    ADD ESP,0x8                         ; 004b85ef
    MOV EDI,dword ptr [0x006045f8]      ; 004b85f2 | DAT_006045f8
    PUSH EDI                            ; 004b85f8
    CALL core_sound.cpp_CSound_shutdown_FUN_0055fee0 ; 004b85f9
        ;   XREF to: 0055fee0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_shutdown_FUN_0055fee0(CSound * this_ptr)
    ADD ESP,0x4                         ; 004b85fe
    CALL core_bmppuzzl.cpp_FUN_00411a40 ; 004b8601
        ;   XREF to: 00411a40 (UNCONDITIONAL_CALL)  ; undefined core_bmppuzzl.cpp_FUN_00411a40()
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b8606
    PUSH EAX                            ; 004b8609
    CALL core_game.cpp_FUN_004c49f0     ; 004b860a
        ;   XREF to: 004c49f0 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004c49f0()
    ADD ESP,0x4                         ; 004b860f
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b8612
    PUSH EDX                            ; 004b8615
    CALL core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004b7ee0 ; 004b8616
        ;   XREF to: 004b7ee0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004b7ee0(CGame * this_ptr)
    ADD ESP,0x4                         ; 004b861b
    MOV EAX,[0x00600284]                ; 004b861e | DAT_00600284
    PUSH EAX                            ; 004b8623 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 004b8624 | DAT_01d70a78
    CALL dword ptr [EDX + 0x8]          ; 004b8626
    ADD ESP,0x4                         ; 004b8629
    MOV ECX,dword ptr [0x00603b28]      ; 004b862c | g_CDemonSetPtr
    PUSH ECX                            ; 004b8632 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_clearLights_FUN_00537520 ; 004b8633
        ;   XREF to: 00537520 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_clearLights_FUN_00537520(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004b8638
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b863b
    PUSH 0x1d22204                      ; 004b863e | g_CPickList
    MOV dword ptr [EAX + 0x210],0x3f800000 ; 004b8643
    CALL shape_edittool.cpp_CPickList_clear_FUN_00484f10 ; 004b864d
        ;   XREF to: 00484f10 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_clear_FUN_00484f10(CPickList * this_ptr)
    ADD ESP,0x4                         ; 004b8652
    CALL core_inv.cpp_FUN_004da840      ; 004b8655
        ;   XREF to: 004da840 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004da840()
    MOV EAX,dword ptr [EBP + -0xc]      ; 004b865a
    MOV ESP,EBP                         ; 004b865d
    POP EBP                             ; 004b865f
    POP EDI                             ; 004b8660
    POP ESI                             ; 004b8661
    POP EBX                             ; 004b8662
    RET                                 ; 004b8663
    MOV ESI,dword ptr [0x005fc5a0]      ; 004b8664 | DAT_005fc5a0
        ;   Label: LAB_004b8664
    PUSH ESI                            ; 004b866a
    CALL core_fire.cpp_FUN_004a1480     ; 004b866b
        ;   XREF to: 004a1480 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a1480()
    ADD ESP,0x4                         ; 004b8670
    JMP 0x004b8260                      ; 004b8673
        ;   XREF to: 004b8260 (UNCONDITIONAL_JUMP)  ; LAB_004b8260
    CMP EDX,0x10000                     ; 004b8678
        ;   Label: LAB_004b8678
    JLE 0x004b827f                      ; 004b867e
        ;   XREF to: 004b827f (CONDITIONAL_JUMP)  ; LAB_004b827f
    MOV dword ptr [EAX + 0x248],0x10000 ; 004b8684
    JMP 0x004b827f                      ; 004b868e
        ;   XREF to: 004b827f (UNCONDITIONAL_JUMP)  ; LAB_004b827f
    MOV ECX,dword ptr [EDI + 0x320]     ; 004b8693
        ;   Label: LAB_004b8693
    PUSH ECX                            ; 004b8699
    MOV EBX,dword ptr [0x00603b28]      ; 004b869a | g_CDemonSetPtr
    PUSH EBX                            ; 004b86a0 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_00534890 ; 004b86a1
        ;   XREF to: 00534890 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraView_FUN_00534890(CDemonSet * this_ptr, int index)
    ADD ESP,0x8                         ; 004b86a6
    JMP 0x004b82d9                      ; 004b86a9
        ;   XREF to: 004b82d9 (UNCONDITIONAL_JUMP)  ; LAB_004b82d9
    MOV EAX,[0x005fe4b0]                ; 004b86ae | g_CFieldNotesPtr
        ;   Label: LAB_004b86ae
    CMP dword ptr [EAX + 0x40],0x0      ; 004b86b3 | g_CFieldNotesInstance.is_displayed
    JNZ 0x004b83a7                      ; 004b86b7
        ;   XREF to: 004b83a7 (CONDITIONAL_JUMP)  ; LAB_004b83a7
    XOR EAX,EAX                         ; 004b86bd
    JMP 0x004b83ac                      ; 004b86bf
        ;   XREF to: 004b83ac (UNCONDITIONAL_JUMP)  ; LAB_004b83ac
    CMP dword ptr [0x01d22200],0x0      ; 004b86c4 | DAT_01d22200
        ;   Label: LAB_004b86c4
    JNZ 0x004b840b                      ; 004b86cb
        ;   XREF to: 004b840b (CONDITIONAL_JUMP)  ; LAB_004b840b
    MOV EAX,0x1                         ; 004b86d1
    JMP 0x004b840d                      ; 004b86d6
        ;   XREF to: 004b840d (UNCONDITIONAL_JUMP)  ; LAB_004b840d
    MOV EAX,[0x006039e0]                ; 004b86db | g_CScriptPtr
        ;   Label: LAB_004b86db
    MOV dword ptr [EAX + 0x10],0x2      ; 004b86e0 | g_CScriptInstance.focus_actor_changed
    JMP 0x004b84e1                      ; 004b86e7
        ;   XREF to: 004b84e1 (UNCONDITIONAL_JUMP)  ; LAB_004b84e1
    MOV EAX,[0x00603450]                ; 004b86ec | g_CNetGamePtr
        ;   Label: LAB_004b86ec
    CMP dword ptr [EAX + 0x178],0x0     ; 004b86f1 | g_CNetGameInstance.has_pending_sim_frame
    JNZ 0x004b84dd                      ; 004b86f8
        ;   XREF to: 004b84dd (CONDITIONAL_JUMP)  ; LAB_004b84dd
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b86fe
    CMP dword ptr [EAX + 0x264],0x0     ; 004b8701
    JNZ 0x004b84dd                      ; 004b8708
        ;   XREF to: 004b84dd (CONDITIONAL_JUMP)  ; LAB_004b84dd
    JMP 0x004b84e1                      ; 004b870e
        ;   XREF to: 004b84e1 (UNCONDITIONAL_JUMP)  ; LAB_004b84e1
    MOV dword ptr [0x01d22200],EBX      ; 004b8713 | DAT_01d22200
        ;   Label: LAB_004b8713
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b8719
        ;   Label: LAB_004b8719
    CMP dword ptr [EAX + 0xe8],0x0      ; 004b871c
    JZ 0x004b8c2d                       ; 004b8723
        ;   XREF to: 004b8c2d (CONDITIONAL_JUMP)  ; LAB_004b8c2d
    CALL wincore_winrun.cpp_FUN_00580f70 ; 004b8729
        ;   XREF to: 00580f70 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_FUN_00580f70()
        ;   Label: LAB_004b8729
    CMP dword ptr [0x02d21b84],0x0      ; 004b872e | DAT_02d21b84
        ;   Label: LAB_004b872e
    JZ 0x004b8754                       ; 004b8735
        ;   XREF to: 004b8754 (CONDITIONAL_JUMP)  ; LAB_004b8754
    XOR EDX,EDX                         ; 004b8737
    MOV EAX,[0x00603b28]                ; 004b8739 | g_CDemonSetPtr
    MOV dword ptr [0x02d21b84],EDX      ; 004b873e | DAT_02d21b84
    MOV EDX,dword ptr [EAX + 0x15aeb8]  ; 004b8744 | g_CDemonSetInstance.selected_camera_index
    PUSH EDX                            ; 004b874a
    PUSH EAX                            ; 004b874b | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_00534890 ; 004b874c
        ;   XREF to: 00534890 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraView_FUN_00534890(CDemonSet * this_ptr, int index)
    ADD ESP,0x8                         ; 004b8751
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b8754
        ;   Label: LAB_004b8754
    FLDZ                                ; 004b8757
    FCOMP float ptr [EAX + 0x294]       ; 004b8759
    FNSTSW AX                           ; 004b875f
    SAHF                                ; 004b8761
    JNC 0x004b8c9a                      ; 004b8762
        ;   XREF to: 004b8c9a (CONDITIONAL_JUMP)  ; LAB_004b8c9a
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b8768
    FLD float ptr [EAX + 0x314]         ; 004b876b
    FSUBR float ptr [EAX + 0x294]       ; 004b8771
    FLD1                                ; 004b8777
    FXCH                                ; 004b8779
    FSTP float ptr [EAX + 0x294]        ; 004b877b
    FADD float ptr [EAX + 0x294]        ; 004b8781
    CALL crt_math.c_round_FUN_005a3120  ; 004b8787
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [EBP + -0x10]       ; 004b878c
    MOV ECX,dword ptr [EBP + -0x10]     ; 004b878f
    PUSH ECX                            ; 004b8792
    PUSH 0x5c2792                       ; 004b8793 | DAT_005c2792
    PUSH EDI                            ; 004b8798
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004b8799
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b879e
    FLDZ                                ; 004b87a1
    ADD ESP,0xc                         ; 004b87a3
    FCOMP float ptr [EAX + 0x294]       ; 004b87a6
    FNSTSW AX                           ; 004b87ac
    SAHF                                ; 004b87ae
    JC 0x004b87cf                       ; 004b87af
        ;   XREF to: 004b87cf (CONDITIONAL_JUMP)  ; LAB_004b87cf
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b87b1
    PUSH EAX                            ; 004b87b4
    MOV ESI,0xbf800000                  ; 004b87b5
    MOV dword ptr [EAX + 0x294],0x0     ; 004b87ba
    CALL core_game.cpp_CGame_beginFadeOut_FUN_004bd660 ; 004b87c4
        ;   XREF to: 004bd660 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_beginFadeOut_FUN_004bd660(CGame * this_ptr)
    MOV dword ptr [EBP + -0x4],ESI      ; 004b87c9
    ADD ESP,0x4                         ; 004b87cc
    MOV EAX,[0x01d5ba14]                ; 004b87cf | DAT_01d5ba14
        ;   Label: LAB_004b87cf
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004b87d4
    PUSH EAX                            ; 004b87db
    MOV EDX,dword ptr [EAX + 0x154]     ; 004b87dc
    CALL dword ptr [EDX + 0x10c]        ; 004b87e2
    ADD ESP,0x4                         ; 004b87e8
    CMP EAX,0x2                         ; 004b87eb
    JZ 0x004b8ca9                       ; 004b87ee
        ;   XREF to: 004b8ca9 (CONDITIONAL_JUMP)  ; LAB_004b8ca9
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b87f4
    TEST dword ptr [EAX + 0x294],0x7fffffff ; 004b87f7
    JZ 0x004b8ca9                       ; 004b8801
        ;   XREF to: 004b8ca9 (CONDITIONAL_JUMP)  ; LAB_004b8ca9
    MOV EAX,[0x006039e0]                ; 004b8807 | g_CScriptPtr
        ;   Label: LAB_004b8807
    CMP dword ptr [EAX],0x0             ; 004b880c | g_CScriptInstance
    JZ 0x004b8d1d                       ; 004b880f
        ;   XREF to: 004b8d1d (CONDITIONAL_JUMP)  ; LAB_004b8d1d
    MOV dword ptr [EBP + -0xc],0x1      ; 004b8815
    JMP 0x004b8594                      ; 004b881c
        ;   XREF to: 004b8594 (UNCONDITIONAL_JUMP)  ; LAB_004b8594
    PUSH 0x1                            ; 004b8821
        ;   Label: LAB_004b8821
    MOV EAX,[0x00600284]                ; 004b8823 | DAT_00600284
    PUSH EAX                            ; 004b8828 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 004b8829 | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004b882b
    ADD ESP,0x8                         ; 004b882e
    TEST EAX,EAX                        ; 004b8831
    JZ 0x004b8719                       ; 004b8833
        ;   XREF to: 004b8719 (CONDITIONAL_JUMP)  ; LAB_004b8719
    MOV EAX,[0x00600530]                ; 004b8839 | DAT_00600530
    CMP dword ptr [EAX + 0x1014],0x0    ; 004b883e | DAT_01d82094
    JNZ 0x004b8391                      ; 004b8845
        ;   XREF to: 004b8391 (CONDITIONAL_JUMP)  ; LAB_004b8391
    PUSH 0x1d22204                      ; 004b884b | g_CPickList
    CALL shape_edittool.cpp_CPickList_clear_FUN_00484f10 ; 004b8850
        ;   XREF to: 00484f10 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_clear_FUN_00484f10(CPickList * this_ptr)
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b8855
    MOV dword ptr [EAX + 0x224],EBX     ; 004b8858
    MOV EAX,[0x005fe4b0]                ; 004b885e | g_CFieldNotesPtr
    MOV ECX,dword ptr [EAX + 0x40]      ; 004b8863 | g_CFieldNotesInstance.is_displayed
    ADD ESP,0x4                         ; 004b8866
    TEST ECX,ECX                        ; 004b8869
    JZ 0x004b8875                       ; 004b886b
        ;   XREF to: 004b8875 (CONDITIONAL_JUMP)  ; LAB_004b8875
    MOV dword ptr [EAX + 0x40],EBX      ; 004b886d | g_CFieldNotesInstance.is_displayed
    JMP 0x004b8719                      ; 004b8870
        ;   XREF to: 004b8719 (UNCONDITIONAL_JUMP)  ; LAB_004b8719
    MOV ESI,dword ptr [0x007dffb4]      ; 004b8875 | DAT_007dffb4
        ;   Label: LAB_004b8875
    TEST ESI,ESI                        ; 004b887b
    JZ 0x004b888e                       ; 004b887d
        ;   XREF to: 004b888e (CONDITIONAL_JUMP)  ; LAB_004b888e
    PUSH EBX                            ; 004b887f
    PUSH ESI                            ; 004b8880
    CALL core_bmppuzzl.cpp_FUN_004119a0 ; 004b8881
        ;   XREF to: 004119a0 (UNCONDITIONAL_CALL)  ; undefined core_bmppuzzl.cpp_FUN_004119a0()
    ADD ESP,0x8                         ; 004b8886
    JMP 0x004b8719                      ; 004b8889
        ;   XREF to: 004b8719 (UNCONDITIONAL_JUMP)  ; LAB_004b8719
    MOV EAX,[0x01d5ba14]                ; 004b888e | DAT_01d5ba14
        ;   Label: LAB_004b888e
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004b8893
    PUSH EAX                            ; 004b889a
    MOV EDX,dword ptr [EAX + 0x154]     ; 004b889b
    CALL dword ptr [EDX + 0x10c]        ; 004b88a1
    ADD ESP,0x4                         ; 004b88a7
    CMP EAX,0x1                         ; 004b88aa
    JG 0x004b8594                       ; 004b88ad
        ;   XREF to: 004b8594 (CONDITIONAL_JUMP)  ; LAB_004b8594
    MOV EAX,[0x00603450]                ; 004b88b3 | g_CNetGamePtr
    MOV EDX,dword ptr [EAX]             ; 004b88b8 | g_CNetGameInstance
    CMP EDX,0x2                         ; 004b88ba
    JZ 0x004b8b49                       ; 004b88bd
        ;   XREF to: 004b8b49 (CONDITIONAL_JUMP)  ; LAB_004b8b49
    CMP EDX,0x1                         ; 004b88c3
    JZ 0x004b8bac                       ; 004b88c6
        ;   XREF to: 004b8bac (CONDITIONAL_JUMP)  ; LAB_004b8bac
    MOV EBX,dword ptr [EBP + 0x14]      ; 004b88cc
    PUSH EBX                            ; 004b88cf
    CALL core_game.cpp_FUN_004c4cc0     ; 004b88d0
        ;   XREF to: 004c4cc0 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004c4cc0()
    ADD ESP,0x4                         ; 004b88d5
    MOV ESI,dword ptr [0x006045f8]      ; 004b88d8 | DAT_006045f8
    PUSH ESI                            ; 004b88de
    CALL core_sound.cpp_CSound_shutdown_FUN_0055fee0 ; 004b88df
        ;   XREF to: 0055fee0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_shutdown_FUN_0055fee0(CSound * this_ptr)
    ADD ESP,0x4                         ; 004b88e4
    LEA EAX,[EBP + 0xfffff76c]          ; 004b88e7
    PUSH EAX                            ; 004b88ed
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004831c0 ; 004b88ee
        ;   XREF to: 004831c0 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004831c0(CPickList * this_ptr)
    ADD ESP,0x4                         ; 004b88f3
    PUSH 0x5c2749                       ; 004b88f6 | = "Return"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b88fb
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b8900
    PUSH EAX                            ; 004b8903
    LEA EAX,[EBP + 0xfffff76c]          ; 004b8904
    PUSH EAX                            ; 004b890a
    CALL shape_edittool.cpp_CStrList_add_FUN_00482070 ; 004b890b
        ;   XREF to: 00482070 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00482070(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004b8910
    PUSH 0x5c2750                       ; 004b8913 | = "Options"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b8918
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b891d
    PUSH EAX                            ; 004b8920
    LEA EAX,[EBP + 0xfffff76c]          ; 004b8921
    PUSH EAX                            ; 004b8927
    CALL shape_edittool.cpp_CStrList_add_FUN_00482070 ; 004b8928
        ;   XREF to: 00482070 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00482070(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004b892d
    PUSH 0x5c2758                       ; 004b8930 | = "Load game"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b8935
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b893a
    PUSH EAX                            ; 004b893d
    LEA EAX,[EBP + 0xfffff76c]          ; 004b893e
    PUSH EAX                            ; 004b8944
    CALL shape_edittool.cpp_CStrList_add_FUN_00482070 ; 004b8945
        ;   XREF to: 00482070 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00482070(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004b894a
    PUSH 0x5c2762                       ; 004b894d | = "Save game"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b8952
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b8957
    PUSH EAX                            ; 004b895a
    LEA EAX,[EBP + 0xfffff76c]          ; 004b895b
    PUSH EAX                            ; 004b8961
    CALL shape_edittool.cpp_CStrList_add_FUN_00482070 ; 004b8962
        ;   XREF to: 00482070 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00482070(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004b8967
    PUSH 0x5c276c                       ; 004b896a | DAT_005c276c
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b896f
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b8974
    PUSH EAX                            ; 004b8977
    LEA EAX,[EBP + 0xfffff76c]          ; 004b8978
    PUSH EAX                            ; 004b897e
    CALL shape_edittool.cpp_CStrList_add_FUN_00482070 ; 004b897f
        ;   XREF to: 00482070 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00482070(CStrList * this_ptr, char * string_data)
    MOV EDX,dword ptr [EBX + 0x24c]     ; 004b8984
    ADD ESP,0x8                         ; 004b898a
    CMP EDX,0x1                         ; 004b898d
    JNZ 0x004b89af                      ; 004b8990
        ;   XREF to: 004b89af (CONDITIONAL_JUMP)  ; LAB_004b89af
    PUSH 0x5c2771                       ; 004b8992 | = "Skip cinematic."
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b8997
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b899c
    PUSH EAX                            ; 004b899f
    LEA EAX,[EBP + 0xfffff76c]          ; 004b89a0
    PUSH EAX                            ; 004b89a6
    CALL shape_edittool.cpp_CStrList_add_FUN_00482070 ; 004b89a7
        ;   XREF to: 00482070 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00482070(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004b89ac
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b89af
        ;   Label: LAB_004b89af
    CMP dword ptr [EAX + 0x24c],0x0     ; 004b89b2
    JZ 0x004b89ce                       ; 004b89b9
        ;   XREF to: 004b89ce (CONDITIONAL_JUMP)  ; LAB_004b89ce
    PUSH 0x0                            ; 004b89bb
    PUSH 0x3                            ; 004b89bd
    LEA EAX,[EBP + 0xfffff76c]          ; 004b89bf
    PUSH EAX                            ; 004b89c5
    CALL shape_edittool.cpp_CPickList_enableItem_FUN_00484bd0 ; 004b89c6
        ;   XREF to: 00484bd0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_enableItem_FUN_00484bd0(CPickList * this_ptr, int item_index, int enable_flag)
    ADD ESP,0xc                         ; 004b89cb
    PUSH 0x0                            ; 004b89ce
        ;   Label: LAB_004b89ce
    PUSH -0x1                           ; 004b89d0
    PUSH 0x5c2781                       ; 004b89d2 | = "Game paused"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b89d7
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b89dc
    PUSH EAX                            ; 004b89df
    LEA EAX,[EBP + 0xfffff76c]          ; 004b89e0
    PUSH EAX                            ; 004b89e6
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00483450 ; 004b89e7
        ;   XREF to: 00483450 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00483450(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 004b89ec
    MOV EBX,EAX                         ; 004b89ef
    CMP EAX,0x1                         ; 004b89f1
    JNZ 0x004b8a7e                      ; 004b89f4
        ;   XREF to: 004b8a7e (CONDITIONAL_JUMP)  ; LAB_004b8a7e
    PUSH 0x0                            ; 004b89fa
    MOV ESI,dword ptr [0x00600284]      ; 004b89fc | DAT_00600284
    PUSH ESI                            ; 004b8a02 | DAT_01d70a78
    CALL engine_keys.cpp_CKeys_toggleInputMask_FUN_004df5d0 ; 004b8a03
        ;   XREF to: 004df5d0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_toggleInputMask_FUN_004df5d0(CKeys * this_ptr, int enable_extended)
    ADD ESP,0x8                         ; 004b8a08
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b8a0b
    PUSH EAX                            ; 004b8a0e
    CALL core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004b7ee0 ; 004b8a0f
        ;   XREF to: 004b7ee0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004b7ee0(CGame * this_ptr)
    ADD ESP,0x4                         ; 004b8a14
    PUSH EBX                            ; 004b8a17
    CALL core_menu.cpp_FUN_004ea280     ; 004b8a18
        ;   XREF to: 004ea280 (UNCONDITIONAL_CALL)  ; void core_menu.cpp_FUN_004ea280(int initialize_systems)
    ADD ESP,0x4                         ; 004b8a1d
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b8a20
    PUSH EDX                            ; 004b8a23
    CALL core_game.cpp_CGame_setGameRes_FUN_004b7de0 ; 004b8a24
        ;   XREF to: 004b7de0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_setGameRes_FUN_004b7de0(CGame * this_ptr)
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b8a29
    MOV ECX,dword ptr [EAX + 0x220]     ; 004b8a2c
    ADD ESP,0x4                         ; 004b8a32
    TEST ECX,ECX                        ; 004b8a35
    SETZ AL                             ; 004b8a37
    AND EAX,0xff                        ; 004b8a3a
    PUSH EAX                            ; 004b8a3f
    MOV ESI,dword ptr [0x00600284]      ; 004b8a40 | DAT_00600284
    PUSH ESI                            ; 004b8a46 | DAT_01d70a78
    CALL engine_keys.cpp_CKeys_toggleInputMask_FUN_004df5d0 ; 004b8a47
        ;   XREF to: 004df5d0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_toggleInputMask_FUN_004df5d0(CKeys * this_ptr, int enable_extended)
    MOV EAX,[0x00603b28]                ; 004b8a4c | g_CDemonSetPtr
    ADD ESP,0x8                         ; 004b8a51
    MOV EDX,dword ptr [EAX + 0x15aeb8]  ; 004b8a54 | g_CDemonSetInstance.selected_camera_index
    PUSH EDX                            ; 004b8a5a
    PUSH EAX                            ; 004b8a5b | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_00534890 ; 004b8a5c
        ;   XREF to: 00534890 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraView_FUN_00534890(CDemonSet * this_ptr, int index)
    MOV EAX,[0x005fba1c]                ; 004b8a61 | DAT_005fba1c
    ADD ESP,0x8                         ; 004b8a66
    CMP EAX,0xf0                        ; 004b8a69
    JLE 0x004b8c10                      ; 004b8a6e
        ;   XREF to: 004b8c10 (CONDITIONAL_JUMP)  ; LAB_004b8c10
    MOV EAX,[0x01549aa8]                ; 004b8a74 | DAT_01549aa8
    MOV [0x01c5b0e0],EAX                ; 004b8a79 | DAT_01c5b0e0
        ;   Label: LAB_004b8a79
    CMP EBX,0x2                         ; 004b8a7e
        ;   Label: LAB_004b8a7e
    JNZ 0x004b8a8f                      ; 004b8a81
        ;   XREF to: 004b8a8f (CONDITIONAL_JUMP)  ; LAB_004b8a8f
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b8a83
    PUSH EDX                            ; 004b8a86
    CALL core_game.cpp_CGame_promptLoadGame_FUN_004bfa40 ; 004b8a87
        ;   XREF to: 004bfa40 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_promptLoadGame_FUN_004bfa40(CGame * this_ptr)
    ADD ESP,0x4                         ; 004b8a8c
    CMP EBX,0x3                         ; 004b8a8f
        ;   Label: LAB_004b8a8f
    JNZ 0x004b8aa2                      ; 004b8a92
        ;   XREF to: 004b8aa2 (CONDITIONAL_JUMP)  ; LAB_004b8aa2
    PUSH 0x0                            ; 004b8a94
    MOV ECX,dword ptr [EBP + 0x14]      ; 004b8a96
    PUSH ECX                            ; 004b8a99
    CALL core_game.cpp_FUN_004bda10     ; 004b8a9a
        ;   XREF to: 004bda10 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004bda10(CGame * this_ptr, char * save_filename)
    ADD ESP,0x8                         ; 004b8a9f
    CMP EBX,0x4                         ; 004b8aa2
        ;   Label: LAB_004b8aa2
    JNZ 0x004b8acc                      ; 004b8aa5
        ;   XREF to: 004b8acc (CONDITIONAL_JUMP)  ; LAB_004b8acc
    PUSH 0x5c278d                       ; 004b8aa7 | DAT_005c278d
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b8aac
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b8ab1
    PUSH EAX                            ; 004b8ab4
    MOV ESI,dword ptr [0x005fb140]      ; 004b8ab5 | g_CEditorToolsPtr
    PUSH ESI                            ; 004b8abb
    CALL shape_edittool.cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0047d8c0 ; 004b8abc
        ;   XREF to: 0047d8c0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0047d8c0(CEditorTools * this_ptr, char * format_string)
    ADD ESP,0x8                         ; 004b8ac1
    TEST EAX,EAX                        ; 004b8ac4
    JNZ 0x004b8c1a                      ; 004b8ac6
        ;   XREF to: 004b8c1a (CONDITIONAL_JUMP)  ; LAB_004b8c1a
    CMP EBX,0x5                         ; 004b8acc
        ;   Label: LAB_004b8acc
    JNZ 0x004b8aff                      ; 004b8acf
        ;   XREF to: 004b8aff (CONDITIONAL_JUMP)  ; LAB_004b8aff
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b8ad1
    PUSH EAX                            ; 004b8ad4
    CALL core_game.cpp_FUN_004bd470     ; 004b8ad5
        ;   XREF to: 004bd470 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004bd470()
    ADD ESP,0x4                         ; 004b8ada
    MOV EDX,dword ptr [0x006039e0]      ; 004b8add | g_CScriptPtr
    PUSH EDX                            ; 004b8ae3 | g_CScriptInstance
    CALL core_script.cpp_CScript_skipCinematic_FUN_00530530 ; 004b8ae4
        ;   XREF to: 00530530 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_skipCinematic_FUN_00530530(CScript * this_ptr)
    ADD ESP,0x4                         ; 004b8ae9
    TEST EAX,EAX                        ; 004b8aec
    SETZ AL                             ; 004b8aee
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b8af1
    AND EAX,0xff                        ; 004b8af4
    MOV dword ptr [EDX + 0xe8],EAX      ; 004b8af9
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 004b8aff
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
        ;   Label: LAB_004b8aff
    MOV ECX,dword ptr [0x006045f8]      ; 004b8b04 | DAT_006045f8
    PUSH ECX                            ; 004b8b0a
    CALL core_sound.cpp_FUN_0055fd30    ; 004b8b0b
        ;   XREF to: 0055fd30 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_FUN_0055fd30(CSound * this_ptr)
    MOV EAX,[0x01d5ba14]                ; 004b8b10 | DAT_01d5ba14
    MOV EDX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004b8b15
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b8b1c
    ADD ESP,0x4                         ; 004b8b1f
    MOV EAX,dword ptr [EAX + 0xdc]      ; 004b8b22
    PUSH 0x0                            ; 004b8b28
    MOV dword ptr [EDX + 0x206e4],EAX   ; 004b8b2a
    LEA EAX,[EBP + 0xfffff76c]          ; 004b8b30
    PUSH EAX                            ; 004b8b36
    MOV EBX,0x1                         ; 004b8b37
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004832b0 ; 004b8b3c
        ;   XREF to: 004832b0 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004832b0(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b8b41
    JMP 0x004b8719                      ; 004b8b44
        ;   XREF to: 004b8719 (UNCONDITIONAL_JUMP)  ; LAB_004b8719
    PUSH 0x5c2684                       ; 004b8b49 | = "Leave network game"
        ;   Label: LAB_004b8b49
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b8b4e
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b8b53
    PUSH EAX                            ; 004b8b56
    PUSH 0x1d22204                      ; 004b8b57 | g_CPickList
    CALL shape_edittool.cpp_CStrList_add_FUN_00482070 ; 004b8b5c
        ;   XREF to: 00482070 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00482070(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004b8b61
    PUSH 0x5c2697                       ; 004b8b64 | = "Return to game"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b8b69
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b8b6e
    PUSH EAX                            ; 004b8b71
    PUSH 0x1d22204                      ; 004b8b72 | g_CPickList
    CALL shape_edittool.cpp_CStrList_add_FUN_00482070 ; 004b8b77
        ;   XREF to: 00482070 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00482070(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004b8b7c
    PUSH 0x1                            ; 004b8b7f
    PUSH EBX                            ; 004b8b81
    PUSH 0x5c26a6                       ; 004b8b82 | = "You are connect to a network game.\nD..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b8b87
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b8b8c
    PUSH EAX                            ; 004b8b8f
    PUSH 0x1d22204                      ; 004b8b90 | g_CPickList
    CALL shape_edittool.cpp_CPickList_initializeDialog_FUN_00483520 ; 004b8b95
        ;   XREF to: 00483520 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_initializeDialog_FUN_00483520(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    MOV EAX,0x1                         ; 004b8b9a
    ADD ESP,0x10                        ; 004b8b9f
    MOV [0x01d22200],EAX                ; 004b8ba2 | DAT_01d22200
    JMP 0x004b8719                      ; 004b8ba7
        ;   XREF to: 004b8719 (UNCONDITIONAL_JUMP)  ; LAB_004b8719
    PUSH 0x5c26e8                       ; 004b8bac | = "Abort network game"
        ;   Label: LAB_004b8bac
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b8bb1
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b8bb6
    PUSH EAX                            ; 004b8bb9
    PUSH 0x1d22204                      ; 004b8bba | g_CPickList
    CALL shape_edittool.cpp_CStrList_add_FUN_00482070 ; 004b8bbf
        ;   XREF to: 00482070 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00482070(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004b8bc4
    PUSH 0x5c26fb                       ; 004b8bc7 | = "Return to game"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b8bcc
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b8bd1
    PUSH EAX                            ; 004b8bd4
    PUSH 0x1d22204                      ; 004b8bd5 | g_CPickList
    CALL shape_edittool.cpp_CStrList_add_FUN_00482070 ; 004b8bda
        ;   XREF to: 00482070 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00482070(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004b8bdf
    PUSH 0x1                            ; 004b8be2
    PUSH EBX                            ; 004b8be4
    PUSH 0x5c270a                       ; 004b8be5 | = "You are hosting a network game.\nDo y..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b8bea
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b8bef
    PUSH EAX                            ; 004b8bf2
    PUSH 0x1d22204                      ; 004b8bf3 | g_CPickList
    MOV ESI,0x1                         ; 004b8bf8
    CALL shape_edittool.cpp_CPickList_initializeDialog_FUN_00483520 ; 004b8bfd
        ;   XREF to: 00483520 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_initializeDialog_FUN_00483520(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 004b8c02
    MOV dword ptr [0x01d22200],ESI      ; 004b8c05 | DAT_01d22200
    JMP 0x004b8719                      ; 004b8c0b
        ;   XREF to: 004b8719 (UNCONDITIONAL_JUMP)  ; LAB_004b8719
    MOV EAX,[0x01549ab4]                ; 004b8c10 | DAT_01549ab4
        ;   Label: LAB_004b8c10
    JMP 0x004b8a79                      ; 004b8c15
        ;   XREF to: 004b8a79 (UNCONDITIONAL_JUMP)  ; LAB_004b8a79
    PUSH 0x0                            ; 004b8c1a
        ;   Label: LAB_004b8c1a
    LEA EAX,[EBP + 0xfffff76c]          ; 004b8c1c
    PUSH EAX                            ; 004b8c22
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004832b0 ; 004b8c23
        ;   XREF to: 004832b0 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004832b0(CPickList * this_ptr, uint flags)
    JMP 0x004b8591                      ; 004b8c28
        ;   XREF to: 004b8591 (UNCONDITIONAL_JUMP)  ; LAB_004b8591
    MOV EAX,[0x00603450]                ; 004b8c2d | g_CNetGamePtr
        ;   Label: LAB_004b8c2d
    CMP dword ptr [EAX + 0x178],0x0     ; 004b8c32 | g_CNetGameInstance.has_pending_sim_frame
    JNZ 0x004b8729                      ; 004b8c39
        ;   XREF to: 004b8729 (CONDITIONAL_JUMP)  ; LAB_004b8729
    TEST EBX,EBX                        ; 004b8c3f
    JNZ 0x004b8729                      ; 004b8c41
        ;   XREF to: 004b8729 (CONDITIONAL_JUMP)  ; LAB_004b8729
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b8c47
    CMP dword ptr [EAX + 0x280],0x3     ; 004b8c4a
    JGE 0x004b8c61                      ; 004b8c51
        ;   XREF to: 004b8c61 (CONDITIONAL_JUMP)  ; LAB_004b8c61
    CALL engine_special.cpp_clearScreen_FUN_00560d70 ; 004b8c53
        ;   XREF to: 00560d70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_00560d70()
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b8c58
    INC dword ptr [EAX + 0x280]         ; 004b8c5b
    CMP dword ptr [0x01c6cee8],0x0      ; 004b8c61 | DAT_01c6cee8
        ;   Label: LAB_004b8c61
    JZ 0x004b8c87                       ; 004b8c68
        ;   XREF to: 004b8c87 (CONDITIONAL_JUMP)  ; LAB_004b8c87
    PUSH 0x1                            ; 004b8c6a
    CALL engine_special.cpp_presentToExternalRenderer_FUN_00566260 ; 004b8c6c
        ;   XREF to: 00566260 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_presentToExternalRenderer_FUN_00566260(int skip_buffer_copy)
    ADD ESP,0x4                         ; 004b8c71
    CALL wincore_winrun.cpp_FUN_00580f70 ; 004b8c74
        ;   XREF to: 00580f70 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_FUN_00580f70()
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b8c79
    INC dword ptr [EAX + 0x31c]         ; 004b8c7c
    JMP 0x004b872e                      ; 004b8c82
        ;   XREF to: 004b872e (UNCONDITIONAL_JUMP)  ; LAB_004b872e
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0 ; 004b8c87
        ;   XREF to: 0057a8a0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0()
        ;   Label: LAB_004b8c87
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b8c8c
    INC dword ptr [EAX + 0x31c]         ; 004b8c8f
    JMP 0x004b872e                      ; 004b8c95
        ;   XREF to: 004b872e (UNCONDITIONAL_JUMP)  ; LAB_004b872e
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b8c9a
        ;   Label: LAB_004b8c9a
    MOV byte ptr [EAX + 0xb80],0x0      ; 004b8c9d
    JMP 0x004b87cf                      ; 004b8ca4
        ;   XREF to: 004b87cf (UNCONDITIONAL_JUMP)  ; LAB_004b87cf
    PUSH 0x1c                           ; 004b8ca9
        ;   Label: LAB_004b8ca9
    MOV EAX,[0x00600284]                ; 004b8cab | DAT_00600284
    PUSH EAX                            ; 004b8cb0 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 004b8cb1 | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004b8cb3
    ADD ESP,0x8                         ; 004b8cb6
    TEST EAX,EAX                        ; 004b8cb9
    JNZ 0x004b8594                      ; 004b8cbb
        ;   XREF to: 004b8594 (CONDITIONAL_JUMP)  ; LAB_004b8594
    FLD float ptr [EBP + -0x4]          ; 004b8cc1
    FLDZ                                ; 004b8cc4
    FCOMPP                              ; 004b8cc6
    FNSTSW AX                           ; 004b8cc8
    SAHF                                ; 004b8cca
    JA 0x004b8d04                       ; 004b8ccb
        ;   XREF to: 004b8d04 (CONDITIONAL_JUMP)  ; LAB_004b8d04
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b8ccd
    FLD float ptr [EBP + -0x4]          ; 004b8cd0
    FADD float ptr [EAX + 0x314]        ; 004b8cd3
    FST float ptr [EBP + -0x4]          ; 004b8cd9
    FCOMP double ptr [0x005c27b8]       ; 004b8cdc | DAT_005c27b8
    FNSTSW AX                           ; 004b8ce2
    SAHF                                ; 004b8ce4
    JBE 0x004b8807                      ; 004b8ce5
        ;   XREF to: 004b8807 (CONDITIONAL_JUMP)  ; LAB_004b8807
    MOV ECX,dword ptr [EBP + 0x14]      ; 004b8ceb
    PUSH ECX                            ; 004b8cee
    MOV EBX,0xbf800000                  ; 004b8cef
    CALL core_game.cpp_CGame_beginFadeOut_FUN_004bd660 ; 004b8cf4
        ;   XREF to: 004bd660 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_beginFadeOut_FUN_004bd660(CGame * this_ptr)
    MOV dword ptr [EBP + -0x4],EBX      ; 004b8cf9
    ADD ESP,0x4                         ; 004b8cfc
    JMP 0x004b8807                      ; 004b8cff
        ;   XREF to: 004b8807 (UNCONDITIONAL_JUMP)  ; LAB_004b8807
    MOV ESI,dword ptr [EBP + 0x14]      ; 004b8d04
        ;   Label: LAB_004b8d04
    PUSH ESI                            ; 004b8d07
    CALL core_game.cpp_CGame_fadeIn_FUN_004bd8d0 ; 004b8d08
        ;   XREF to: 004bd8d0 (UNCONDITIONAL_CALL)  ; uint core_game.cpp_CGame_fadeIn_FUN_004bd8d0(CGame * this_ptr)
    ADD ESP,0x4                         ; 004b8d0d
    TEST EAX,EAX                        ; 004b8d10
    JNZ 0x004b8594                      ; 004b8d12
        ;   XREF to: 004b8594 (CONDITIONAL_JUMP)  ; LAB_004b8594
    JMP 0x004b8807                      ; 004b8d18
        ;   XREF to: 004b8807 (UNCONDITIONAL_JUMP)  ; LAB_004b8807
    MOV ECX,dword ptr [EBP + 0x14]      ; 004b8d1d
        ;   Label: LAB_004b8d1d
    PUSH ECX                            ; 004b8d20
    CALL core_game.cpp_FUN_004bec20     ; 004b8d21
        ;   XREF to: 004bec20 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004bec20()
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b8d26
    MOV EBX,dword ptr [EAX + 0x224]     ; 004b8d29
    ADD ESP,0x4                         ; 004b8d2f
    TEST EBX,EBX                        ; 004b8d32
    JZ 0x004b8d3b                       ; 004b8d34
        ;   XREF to: 004b8d3b (CONDITIONAL_JUMP)  ; LAB_004b8d3b
    CALL wincore_winrun.cpp_getNextKeypress_FUN_00580790 ; 004b8d36
        ;   XREF to: 00580790 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_00580790()
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b8d3b
        ;   Label: LAB_004b8d3b
    MOV ESI,dword ptr [EAX + 0xa78]     ; 004b8d3e
    TEST ESI,ESI                        ; 004b8d44
    JZ 0x004b8d52                       ; 004b8d46
        ;   XREF to: 004b8d52 (CONDITIONAL_JUMP)  ; LAB_004b8d52
    XOR ECX,ECX                         ; 004b8d48
    MOV dword ptr [EBP + -0xc],ECX      ; 004b8d4a
    JMP 0x004b8594                      ; 004b8d4d
        ;   XREF to: 004b8594 (UNCONDITIONAL_JUMP)  ; LAB_004b8594
    CMP dword ptr [EBP + -0x8],0x0      ; 004b8d52
        ;   Label: LAB_004b8d52
    JZ 0x004b8d6a                       ; 004b8d56
        ;   XREF to: 004b8d6a (CONDITIONAL_JUMP)  ; LAB_004b8d6a
    MOV ECX,dword ptr [0x006045f8]      ; 004b8d58 | DAT_006045f8
    PUSH ECX                            ; 004b8d5e
    MOV dword ptr [EBP + -0x8],ESI      ; 004b8d5f
    CALL core_sound.cpp_FUN_0055fd30    ; 004b8d62
        ;   XREF to: 0055fd30 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_FUN_0055fd30(CSound * this_ptr)
    ADD ESP,0x4                         ; 004b8d67
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b8d6a
        ;   Label: LAB_004b8d6a
    CMP dword ptr [EAX + 0x290],0x0     ; 004b8d6d
    JZ 0x004b8391                       ; 004b8d74
        ;   XREF to: 004b8391 (CONDITIONAL_JUMP)  ; LAB_004b8391
    PUSH 0x1                            ; 004b8d7a
    PUSH 0x5c2795                       ; 004b8d7c | = "NewSet"
    MOV ESI,dword ptr [0x005fba60]      ; 004b8d81 | DAT_005fba60
    PUSH ESI                            ; 004b8d87
    CALL core_event.cpp_FUN_004946f0    ; 004b8d88
        ;   XREF to: 004946f0 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_FUN_004946f0()
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b8d8d
    MOV EDX,dword ptr [EAX + 0x290]     ; 004b8d90
    DEC EDX                             ; 004b8d96
    ADD ESP,0xc                         ; 004b8d97
    MOV dword ptr [EAX + 0x290],EDX     ; 004b8d9a
    JMP 0x004b8391                      ; 004b8da0
        ;   XREF to: 004b8391 (UNCONDITIONAL_JUMP)  ; LAB_004b8391
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b8da5
        ;   Label: LAB_004b8da5
    TEST dword ptr [EAX + 0x294],0x7fffffff ; 004b8da8
    JZ 0x004b85b9                       ; 004b8db2
        ;   XREF to: 004b85b9 (CONDITIONAL_JUMP)  ; LAB_004b85b9
    JMP 0x004b85c9                      ; 004b8db8
        ;   XREF to: 004b85c9 (UNCONDITIONAL_JUMP)  ; LAB_004b85c9
    LEA EAX,[EBP + 0xfffffb2c]          ; 004b8dbd
        ;   Label: LAB_004b8dbd
    PUSH EAX                            ; 004b8dc3
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004831c0 ; 004b8dc4
        ;   XREF to: 004831c0 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004831c0(CPickList * this_ptr)
    ADD ESP,0x4                         ; 004b8dc9
    PUSH 0x5c279c                       ; 004b8dcc | = "Load game"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b8dd1
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b8dd6
    PUSH EAX                            ; 004b8dd9
    LEA EAX,[EBP + 0xfffffb2c]          ; 004b8dda
    PUSH EAX                            ; 004b8de0
    CALL shape_edittool.cpp_CStrList_add_FUN_00482070 ; 004b8de1
        ;   XREF to: 00482070 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00482070(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004b8de6
    PUSH 0x5c27a6                       ; 004b8de9 | DAT_005c27a6
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b8dee
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b8df3
    PUSH EAX                            ; 004b8df6
    LEA EAX,[EBP + 0xfffffb2c]          ; 004b8df7
    PUSH EAX                            ; 004b8dfd
    CALL shape_edittool.cpp_CStrList_add_FUN_00482070 ; 004b8dfe
        ;   XREF to: 00482070 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00482070(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004b8e03
    XOR EBX,EBX                         ; 004b8e06
    PUSH EBX                            ; 004b8e08
        ;   Label: LAB_004b8e08
    PUSH -0x1                           ; 004b8e09
    PUSH 0x5c27ab                       ; 004b8e0b | = "Game Over"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b8e10
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b8e15
    PUSH EAX                            ; 004b8e18
    LEA EAX,[EBP + 0xfffffb2c]          ; 004b8e19
    PUSH EAX                            ; 004b8e1f
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00483450 ; 004b8e20
        ;   XREF to: 00483450 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00483450(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 004b8e25
    TEST EAX,EAX                        ; 004b8e28
    JNZ 0x004b8e4e                      ; 004b8e2a
        ;   XREF to: 004b8e4e (CONDITIONAL_JUMP)  ; LAB_004b8e4e
    MOV ECX,dword ptr [EBP + 0x14]      ; 004b8e2c
    PUSH ECX                            ; 004b8e2f
    CALL core_game.cpp_CGame_promptLoadGame_FUN_004bfa40 ; 004b8e30
        ;   XREF to: 004bfa40 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_promptLoadGame_FUN_004bfa40(CGame * this_ptr)
    ADD ESP,0x4                         ; 004b8e35
    PUSH 0x0                            ; 004b8e38
        ;   Label: LAB_004b8e38
    LEA EAX,[EBP + 0xfffffb2c]          ; 004b8e3a
    PUSH EAX                            ; 004b8e40
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004832b0 ; 004b8e41
        ;   XREF to: 004832b0 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004832b0(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b8e46
    JMP 0x004b85c9                      ; 004b8e49
        ;   XREF to: 004b85c9 (UNCONDITIONAL_JUMP)  ; LAB_004b85c9
    CMP EAX,0x1                         ; 004b8e4e
        ;   Label: LAB_004b8e4e
    JZ 0x004b8e38                       ; 004b8e51
        ;   XREF to: 004b8e38 (CONDITIONAL_JUMP)  ; LAB_004b8e38
    JMP 0x004b8e08                      ; 004b8e53
        ;   XREF to: 004b8e08 (UNCONDITIONAL_JUMP)  ; LAB_004b8e08

