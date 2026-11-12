; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_process_FUN_004bf4b0(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x24]:8  local_24
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_FUN_004b6f30 at 004b6f9c
;
; Referenced Globals:
;   undefined4 s_G_s_3_2f_ms_005c39af+1
;   undefined4 s_gFilterFX_process_005c39d7+1
;   TerminatedCString s_gScript_process_005c39ed
;   TerminatedCString s_gSet_process_005c3a00
;   TerminatedCString s_gGore_process_005c3a10
;   TerminatedCString s_gFire_process_005c3a21
;   TerminatedCString s_gEventList_process_005c3a32
;   TerminatedCString s_gSit_process_005c3a48
;   TerminatedCString s_simulate_3_2f_ms_005c3a58
;   undefined4 DAT_005c3a70
;   undefined4 DAT_005c3a78
;   undefined4 DAT_005c3a80
;   CConsole* g_CConsolePtr = 007f7ea4
;   CFilterFX* g_CFilterFXPtr = 01549a94
;   undefined4 DAT_005fba60
;   ... and 28 more
;
; Called Functions:
;   core_actor.cpp_setRandomSeed_FUN_0040cdc0
;   core_bmppuzzl.cpp_FUN_00411a90
;   core_dfilter.cpp_CFilterFX_process_FUN_00459e90
;   core_event.cpp_CEventList_process_FUN_0048c020
;   core_fire.cpp_FUN_004a1760
;   core_fldnotes.cpp_FUN_004ac6b0
;   core_game.cpp_CGame_processCheatCodes_FUN_004bb100
;   core_game.cpp_CGame_saveClockTime_FUN_004b4430
;   core_game.cpp_CGame_updateFadeTransition_FUN_004bd6d0
;   core_gore.cpp_CGore_process_FUN_004ce7e0
;   core_mission.cpp_CDemonMission_process_FUN_004f70a0
;   core_script.cpp_CScript_process_FUN_00528e00
;   core_set.cpp_CDemonSet_process_FUN_00539c50
;   core_set.cpp_CDemonSet_processActors_FUN_005353e0
;   core_setdir.cpp_FUN_0053f940
;   ... and 8 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bf4b0
        ;   Label: core_game.cpp_CGame_process_FUN_004bf4b0
    PUSH ESI                            ; 004bf4b1
    PUSH EDI                            ; 004bf4b2
    PUSH EBP                            ; 004bf4b3
    SUB ESP,0xc                         ; 004bf4b4
    MOV EBX,dword ptr [ESP + 0x20]      ; 004bf4b7
    CMP dword ptr [EBX + 0x230],0x0     ; 004bf4bb
    JNZ 0x004bf973                      ; 004bf4c2
        ;   XREF to: 004bf973 (CONDITIONAL_JUMP)  ; LAB_004bf973
    MOV EAX,[0x00603450]                ; 004bf4c8 | g_CNetGamePtr
        ;   Label: LAB_004bf4c8
    MOV dword ptr [EBX + 0x260],0x1     ; 004bf4cd
    CMP dword ptr [EAX],0x0             ; 004bf4d7 | g_CNetGameInstance
    JNZ 0x004bf97f                      ; 004bf4da
        ;   XREF to: 004bf97f (CONDITIONAL_JUMP)  ; LAB_004bf97f
    CALL crt_stdlib.c_rand_FUN_005a35cc ; 004bf4e0
        ;   XREF to: 005a35cc (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005a35cc()
    PUSH EAX                            ; 004bf4e5
    CALL core_actor.cpp_setRandomSeed_FUN_0040cdc0 ; 004bf4e6
        ;   XREF to: 0040cdc0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_setRandomSeed_FUN_0040cdc0(uint seed_value)
        ;   Label: LAB_004bf4e6
    ADD ESP,0x4                         ; 004bf4eb
    PUSH EBX                            ; 004bf4ee
    CALL core_game.cpp_CGame_updateFadeTransition_FUN_004bd6d0 ; 004bf4ef
        ;   XREF to: 004bd6d0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_updateFadeTransition_FUN_004bd6d0(CGame * this_ptr)
    MOV EAX,[0x005fe9dc]                ; 004bf4f4 | g_CGamePtr
    MOV EBP,dword ptr [EAX + 0x230]     ; 004bf4f9 | g_CGameInstance.profile_mode
    ADD ESP,0x4                         ; 004bf4ff
    CMP EBP,0x1                         ; 004bf502
    JNZ 0x004bf511                      ; 004bf505
        ;   XREF to: 004bf511 (CONDITIONAL_JUMP)  ; LAB_004bf511
    CALL wincore_winrun.cpp_getTime_FUN_005806a0 ; 004bf507
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005806a0()
    MOV [0x01d22c98],EAX                ; 004bf50c | DAT_01d22c98
    MOV EAX,[0x005f1910]                ; 004bf511 | g_CFilterFXPtr
        ;   Label: LAB_004bf511
    PUSH EAX                            ; 004bf516
    CALL core_dfilter.cpp_CFilterFX_process_FUN_00459e90 ; 004bf517
        ;   XREF to: 00459e90 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CFilterFX_process_FUN_00459e90(CFilterFX * this_ptr)
    MOV EAX,[0x005fe9dc]                ; 004bf51c | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x230]     ; 004bf521 | g_CGameInstance.profile_mode
    ADD ESP,0x4                         ; 004bf527
    CMP EDX,0x1                         ; 004bf52a
    JNZ 0x004bf584                      ; 004bf52d
        ;   XREF to: 004bf584 (CONDITIONAL_JUMP)  ; LAB_004bf584
    CALL wincore_winrun.cpp_getTime_FUN_005806a0 ; 004bf52f
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005806a0()
    MOV ECX,dword ptr [0x01d22c98]      ; 004bf534 | DAT_01d22c98
    SUB EAX,ECX                         ; 004bf53a
    MOV dword ptr [ESP + 0x8],EAX       ; 004bf53c
    FILD dword ptr [ESP + 0x8]          ; 004bf540
    FMUL double ptr [0x005c3a70]        ; 004bf544 | DAT_005c3a70
    MOV EAX,[0x005fe9dc]                ; 004bf54a | g_CGamePtr
    FMUL double ptr [0x005c3a78]        ; 004bf54f | DAT_005c3a78
    FLD float ptr [EAX + 0x314]         ; 004bf555 | g_CGameInstance.delta_time_float
    FXCH                                ; 004bf55b
    FMUL double ptr [0x005c3a80]        ; 004bf55d | DAT_005c3a80
    FDIVRP                              ; 004bf563
    SUB ESP,0x8                         ; 004bf565
    FSTP double ptr [ESP]               ; 004bf568
    PUSH 0x5c39d8                       ; 004bf56b | s_gFilterFX_process_005c39d7+1
    PUSH 0x5c39b0                       ; 004bf570 | s_G_s_3_2f_ms_005c39af+1
    MOV EDI,dword ptr [0x005f1690]      ; 004bf575 | g_CConsolePtr
    PUSH EDI                            ; 004bf57b | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 004bf57c
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    ADD ESP,0x14                        ; 004bf581
    MOV EAX,[0x005fe9dc]                ; 004bf584 | g_CGamePtr
        ;   Label: LAB_004bf584
    CMP dword ptr [EAX + 0x230],0x1     ; 004bf589 | g_CGameInstance.profile_mode
    JNZ 0x004bf59c                      ; 004bf590
        ;   XREF to: 004bf59c (CONDITIONAL_JUMP)  ; LAB_004bf59c
    CALL wincore_winrun.cpp_getTime_FUN_005806a0 ; 004bf592
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005806a0()
    MOV [0x01d22c98],EAX                ; 004bf597 | DAT_01d22c98
    MOV EAX,[0x006039e0]                ; 004bf59c | g_CScriptPtr
        ;   Label: LAB_004bf59c
    PUSH EAX                            ; 004bf5a1 | g_CScriptInstance
    CALL core_script.cpp_CScript_process_FUN_00528e00 ; 004bf5a2
        ;   XREF to: 00528e00 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_process_FUN_00528e00(CScript * this_ptr)
    MOV EAX,[0x005fe9dc]                ; 004bf5a7 | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x230]     ; 004bf5ac | g_CGameInstance.profile_mode
    ADD ESP,0x4                         ; 004bf5b2
    CMP EDX,0x1                         ; 004bf5b5
    JNZ 0x004bf60f                      ; 004bf5b8
        ;   XREF to: 004bf60f (CONDITIONAL_JUMP)  ; LAB_004bf60f
    CALL wincore_winrun.cpp_getTime_FUN_005806a0 ; 004bf5ba
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005806a0()
    MOV ECX,dword ptr [0x01d22c98]      ; 004bf5bf | DAT_01d22c98
    SUB EAX,ECX                         ; 004bf5c5
    MOV dword ptr [ESP + 0x8],EAX       ; 004bf5c7
    FILD dword ptr [ESP + 0x8]          ; 004bf5cb
    FMUL double ptr [0x005c3a70]        ; 004bf5cf | DAT_005c3a70
    MOV EAX,[0x005fe9dc]                ; 004bf5d5 | g_CGamePtr
    FMUL double ptr [0x005c3a78]        ; 004bf5da | DAT_005c3a78
    FLD float ptr [EAX + 0x314]         ; 004bf5e0 | g_CGameInstance.delta_time_float
    FXCH                                ; 004bf5e6
    FMUL double ptr [0x005c3a80]        ; 004bf5e8 | DAT_005c3a80
    FDIVRP                              ; 004bf5ee
    SUB ESP,0x8                         ; 004bf5f0
    FSTP double ptr [ESP]               ; 004bf5f3
    PUSH 0x5c39ed                       ; 004bf5f6 | = "gScript->process()"
    PUSH 0x5c39b0                       ; 004bf5fb | s_G_s_3_2f_ms_005c39af+1
    MOV EDI,dword ptr [0x005f1690]      ; 004bf600 | g_CConsolePtr
    PUSH EDI                            ; 004bf606 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 004bf607
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    ADD ESP,0x14                        ; 004bf60c
    CMP dword ptr [EBX + 0xe8],0x0      ; 004bf60f
        ;   Label: LAB_004bf60f
    JZ 0x004bf62b                       ; 004bf616
        ;   XREF to: 004bf62b (CONDITIONAL_JUMP)  ; LAB_004bf62b
    MOV EAX,dword ptr [EBX + 0x24c]     ; 004bf618
    TEST EAX,EAX                        ; 004bf61e
    JZ 0x004bf98b                       ; 004bf620
        ;   XREF to: 004bf98b (CONDITIONAL_JUMP)  ; LAB_004bf98b
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 004bf626
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    MOV EAX,[0x005fe9dc]                ; 004bf62b | g_CGamePtr
        ;   Label: LAB_004bf62b
    CMP dword ptr [EAX + 0x230],0x1     ; 004bf630 | g_CGameInstance.profile_mode
    JNZ 0x004bf643                      ; 004bf637
        ;   XREF to: 004bf643 (CONDITIONAL_JUMP)  ; LAB_004bf643
    CALL wincore_winrun.cpp_getTime_FUN_005806a0 ; 004bf639
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005806a0()
    MOV [0x01d22c98],EAX                ; 004bf63e | DAT_01d22c98
    MOV EAX,[0x00603b28]                ; 004bf643 | g_CDemonSetPtr
        ;   Label: LAB_004bf643
    PUSH EAX                            ; 004bf648 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_process_FUN_00539c50 ; 004bf649
        ;   XREF to: 00539c50 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_process_FUN_00539c50(CDemonSet * this_ptr)
    MOV EAX,[0x005fe9dc]                ; 004bf64e | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x230]     ; 004bf653 | g_CGameInstance.profile_mode
    ADD ESP,0x4                         ; 004bf659
    CMP EDX,0x1                         ; 004bf65c
    JNZ 0x004bf6b6                      ; 004bf65f
        ;   XREF to: 004bf6b6 (CONDITIONAL_JUMP)  ; LAB_004bf6b6
    CALL wincore_winrun.cpp_getTime_FUN_005806a0 ; 004bf661
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005806a0()
    MOV ECX,dword ptr [0x01d22c98]      ; 004bf666 | DAT_01d22c98
    SUB EAX,ECX                         ; 004bf66c
    MOV dword ptr [ESP + 0x8],EAX       ; 004bf66e
    FILD dword ptr [ESP + 0x8]          ; 004bf672
    FMUL double ptr [0x005c3a70]        ; 004bf676 | DAT_005c3a70
    MOV EAX,[0x005fe9dc]                ; 004bf67c | g_CGamePtr
    FMUL double ptr [0x005c3a78]        ; 004bf681 | DAT_005c3a78
    FLD float ptr [EAX + 0x314]         ; 004bf687 | g_CGameInstance.delta_time_float
    FXCH                                ; 004bf68d
    FMUL double ptr [0x005c3a80]        ; 004bf68f | DAT_005c3a80
    FDIVRP                              ; 004bf695
    SUB ESP,0x8                         ; 004bf697
    FSTP double ptr [ESP]               ; 004bf69a
    PUSH 0x5c3a00                       ; 004bf69d | = "gSet->process()"
    PUSH 0x5c39b0                       ; 004bf6a2 | s_G_s_3_2f_ms_005c39af+1
    MOV EDI,dword ptr [0x005f1690]      ; 004bf6a7 | g_CConsolePtr
    PUSH EDI                            ; 004bf6ad | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 004bf6ae
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    ADD ESP,0x14                        ; 004bf6b3
    MOV EAX,[0x005fe9dc]                ; 004bf6b6 | g_CGamePtr
        ;   Label: LAB_004bf6b6
    CMP dword ptr [EAX + 0x230],0x1     ; 004bf6bb | g_CGameInstance.profile_mode
    JNZ 0x004bf6ce                      ; 004bf6c2
        ;   XREF to: 004bf6ce (CONDITIONAL_JUMP)  ; LAB_004bf6ce
    CALL wincore_winrun.cpp_getTime_FUN_005806a0 ; 004bf6c4
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005806a0()
    MOV [0x01d22c98],EAX                ; 004bf6c9 | DAT_01d22c98
    MOV EAX,[0x005fed24]                ; 004bf6ce | g_CGorePtr
        ;   Label: LAB_004bf6ce
    PUSH EAX                            ; 004bf6d3
    CALL core_gore.cpp_CGore_process_FUN_004ce7e0 ; 004bf6d4
        ;   XREF to: 004ce7e0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_process_FUN_004ce7e0(CGore * this_ptr)
    MOV EAX,[0x005fe9dc]                ; 004bf6d9 | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x230]     ; 004bf6de | g_CGameInstance.profile_mode
    ADD ESP,0x4                         ; 004bf6e4
    CMP EDX,0x1                         ; 004bf6e7
    JNZ 0x004bf741                      ; 004bf6ea
        ;   XREF to: 004bf741 (CONDITIONAL_JUMP)  ; LAB_004bf741
    CALL wincore_winrun.cpp_getTime_FUN_005806a0 ; 004bf6ec
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005806a0()
    MOV ECX,dword ptr [0x01d22c98]      ; 004bf6f1 | DAT_01d22c98
    SUB EAX,ECX                         ; 004bf6f7
    MOV dword ptr [ESP + 0x8],EAX       ; 004bf6f9
    FILD dword ptr [ESP + 0x8]          ; 004bf6fd
    FMUL double ptr [0x005c3a70]        ; 004bf701 | DAT_005c3a70
    MOV EAX,[0x005fe9dc]                ; 004bf707 | g_CGamePtr
    FMUL double ptr [0x005c3a78]        ; 004bf70c | DAT_005c3a78
    FLD float ptr [EAX + 0x314]         ; 004bf712 | g_CGameInstance.delta_time_float
    FXCH                                ; 004bf718
    FMUL double ptr [0x005c3a80]        ; 004bf71a | DAT_005c3a80
    FDIVRP                              ; 004bf720
    SUB ESP,0x8                         ; 004bf722
    FSTP double ptr [ESP]               ; 004bf725
    PUSH 0x5c3a10                       ; 004bf728 | = "gGore->process()"
    PUSH 0x5c39b0                       ; 004bf72d | s_G_s_3_2f_ms_005c39af+1
    MOV EDI,dword ptr [0x005f1690]      ; 004bf732 | g_CConsolePtr
    PUSH EDI                            ; 004bf738 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 004bf739
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    ADD ESP,0x14                        ; 004bf73e
    MOV EBP,dword ptr [0x00606b20]      ; 004bf741 | g_CWaterPtr
        ;   Label: LAB_004bf741
    PUSH EBP                            ; 004bf747 | g_CWaterInstance
    CALL core_water.cpp_CWater_process_FUN_005772e0 ; 004bf748
        ;   XREF to: 005772e0 (UNCONDITIONAL_CALL)  ; void core_water.cpp_CWater_process_FUN_005772e0(CWater * this_ptr)
    MOV EAX,[0x005fe9dc]                ; 004bf74d | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x230]     ; 004bf752 | g_CGameInstance.profile_mode
    ADD ESP,0x4                         ; 004bf758
    CMP EDX,0x1                         ; 004bf75b
    JNZ 0x004bf76a                      ; 004bf75e
        ;   XREF to: 004bf76a (CONDITIONAL_JUMP)  ; LAB_004bf76a
    CALL wincore_winrun.cpp_getTime_FUN_005806a0 ; 004bf760
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005806a0()
    MOV [0x01d22c98],EAX                ; 004bf765 | DAT_01d22c98
    MOV ECX,dword ptr [0x005fc5a0]      ; 004bf76a | DAT_005fc5a0
        ;   Label: LAB_004bf76a
    PUSH ECX                            ; 004bf770
    CALL core_fire.cpp_FUN_004a1760     ; 004bf771
        ;   XREF to: 004a1760 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a1760()
    MOV EAX,[0x005fe9dc]                ; 004bf776 | g_CGamePtr
    MOV EDI,dword ptr [EAX + 0x230]     ; 004bf77b | g_CGameInstance.profile_mode
    ADD ESP,0x4                         ; 004bf781
    CMP EDI,0x1                         ; 004bf784
    JNZ 0x004bf7dd                      ; 004bf787
        ;   XREF to: 004bf7dd (CONDITIONAL_JUMP)  ; LAB_004bf7dd
    CALL wincore_winrun.cpp_getTime_FUN_005806a0 ; 004bf789
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005806a0()
    MOV EBP,dword ptr [0x01d22c98]      ; 004bf78e | DAT_01d22c98
    SUB EAX,EBP                         ; 004bf794
    MOV dword ptr [ESP + 0x8],EAX       ; 004bf796
    FILD dword ptr [ESP + 0x8]          ; 004bf79a
    FMUL double ptr [0x005c3a70]        ; 004bf79e | DAT_005c3a70
    MOV EAX,[0x005fe9dc]                ; 004bf7a4 | g_CGamePtr
    FMUL double ptr [0x005c3a78]        ; 004bf7a9 | DAT_005c3a78
    FLD float ptr [EAX + 0x314]         ; 004bf7af | g_CGameInstance.delta_time_float
    FXCH                                ; 004bf7b5
    FMUL double ptr [0x005c3a80]        ; 004bf7b7 | DAT_005c3a80
    FDIVRP                              ; 004bf7bd
    SUB ESP,0x8                         ; 004bf7bf
    FSTP double ptr [ESP]               ; 004bf7c2
    PUSH 0x5c3a21                       ; 004bf7c5 | = "gFire->process()"
    PUSH 0x5c39b0                       ; 004bf7ca | s_G_s_3_2f_ms_005c39af+1
    MOV EAX,[0x005f1690]                ; 004bf7cf | g_CConsolePtr
    PUSH EAX                            ; 004bf7d4 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 004bf7d5
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    ADD ESP,0x14                        ; 004bf7da
    MOV EAX,[0x005fe9dc]                ; 004bf7dd | g_CGamePtr
        ;   Label: LAB_004bf7dd
    CMP dword ptr [EAX + 0x230],0x1     ; 004bf7e2 | g_CGameInstance.profile_mode
    JNZ 0x004bf7f5                      ; 004bf7e9
        ;   XREF to: 004bf7f5 (CONDITIONAL_JUMP)  ; LAB_004bf7f5
    CALL wincore_winrun.cpp_getTime_FUN_005806a0 ; 004bf7eb
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005806a0()
    MOV [0x01d22c98],EAX                ; 004bf7f0 | DAT_01d22c98
    MOV ECX,dword ptr [0x005fba60]      ; 004bf7f5 | DAT_005fba60
        ;   Label: LAB_004bf7f5
    PUSH ECX                            ; 004bf7fb
    CALL core_event.cpp_CEventList_process_FUN_0048c020 ; 004bf7fc
        ;   XREF to: 0048c020 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_process_FUN_0048c020(CEventList * this_ptr)
    MOV EAX,[0x005fe9dc]                ; 004bf801 | g_CGamePtr
    MOV EDI,dword ptr [EAX + 0x230]     ; 004bf806 | g_CGameInstance.profile_mode
    ADD ESP,0x4                         ; 004bf80c
    CMP EDI,0x1                         ; 004bf80f
    JNZ 0x004bf868                      ; 004bf812
        ;   XREF to: 004bf868 (CONDITIONAL_JUMP)  ; LAB_004bf868
    CALL wincore_winrun.cpp_getTime_FUN_005806a0 ; 004bf814
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005806a0()
    MOV EBP,dword ptr [0x01d22c98]      ; 004bf819 | DAT_01d22c98
    SUB EAX,EBP                         ; 004bf81f
    MOV dword ptr [ESP + 0x8],EAX       ; 004bf821
    FILD dword ptr [ESP + 0x8]          ; 004bf825
    FMUL double ptr [0x005c3a70]        ; 004bf829 | DAT_005c3a70
    MOV EAX,[0x005fe9dc]                ; 004bf82f | g_CGamePtr
    FMUL double ptr [0x005c3a78]        ; 004bf834 | DAT_005c3a78
    FLD float ptr [EAX + 0x314]         ; 004bf83a | g_CGameInstance.delta_time_float
    FXCH                                ; 004bf840
    FMUL double ptr [0x005c3a80]        ; 004bf842 | DAT_005c3a80
    FDIVRP                              ; 004bf848
    SUB ESP,0x8                         ; 004bf84a
    FSTP double ptr [ESP]               ; 004bf84d
    PUSH 0x5c3a32                       ; 004bf850 | = "gEventList->process()"
    PUSH 0x5c39b0                       ; 004bf855 | s_G_s_3_2f_ms_005c39af+1
    MOV EAX,[0x005f1690]                ; 004bf85a | g_CConsolePtr
    PUSH EAX                            ; 004bf85f | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 004bf860
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    ADD ESP,0x14                        ; 004bf865
    MOV EDX,dword ptr [0x00606aa0]      ; 004bf868 | DAT_00606aa0
        ;   Label: LAB_004bf868
    PUSH EDX                            ; 004bf86e
    CALL core_terrain.cpp_CTerrain_process_FUN_005724e0 ; 004bf86f
        ;   XREF to: 005724e0 (UNCONDITIONAL_CALL)  ; void core_terrain.cpp_CTerrain_process_FUN_005724e0(CTerrain * this_ptr)
    ADD ESP,0x4                         ; 004bf874
    MOV ECX,dword ptr [0x006071f0]      ; 004bf877 | DAT_006071f0
    PUSH ECX                            ; 004bf87d | DAT_02d0c1a0
    CALL core_weather.cpp_FUN_0057bda0  ; 004bf87e
        ;   XREF to: 0057bda0 (UNCONDITIONAL_CALL)  ; undefined core_weather.cpp_FUN_0057bda0()
    ADD ESP,0x4                         ; 004bf883
    PUSH EBX                            ; 004bf886
    CALL core_game.cpp_CGame_processCheatCodes_FUN_004bb100 ; 004bf887
        ;   XREF to: 004bb100 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_processCheatCodes_FUN_004bb100(CGame * this_ptr)
    ADD ESP,0x4                         ; 004bf88c
    MOV EDI,dword ptr [0x005fe4b0]      ; 004bf88f | g_CFieldNotesPtr
    PUSH EDI                            ; 004bf895 | g_CFieldNotesInstance
    CALL core_fldnotes.cpp_FUN_004ac6b0 ; 004bf896
        ;   XREF to: 004ac6b0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004ac6b0()
    ADD ESP,0x4                         ; 004bf89b
    CALL core_bmppuzzl.cpp_FUN_00411a90 ; 004bf89e
        ;   XREF to: 00411a90 (UNCONDITIONAL_CALL)  ; undefined core_bmppuzzl.cpp_FUN_00411a90()
    MOV EAX,[0x005fe4b0]                ; 004bf8a3 | g_CFieldNotesPtr
    CMP dword ptr [EAX + 0x40],0x0      ; 004bf8a8 | g_CFieldNotesInstance.is_displayed
    JZ 0x004bf9d4                       ; 004bf8ac
        ;   XREF to: 004bf9d4 (CONDITIONAL_JUMP)  ; LAB_004bf9d4
    MOV EAX,[0x005fe9dc]                ; 004bf8b2 | g_CGamePtr
        ;   Label: LAB_004bf8b2
    CMP dword ptr [EAX + 0x230],0x1     ; 004bf8b7 | g_CGameInstance.profile_mode
    JNZ 0x004bf8ca                      ; 004bf8be
        ;   XREF to: 004bf8ca (CONDITIONAL_JUMP)  ; LAB_004bf8ca
    CALL wincore_winrun.cpp_getTime_FUN_005806a0 ; 004bf8c0
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005806a0()
    MOV [0x01d22c98],EAX                ; 004bf8c5 | DAT_01d22c98
    MOV ECX,dword ptr [0x00600530]      ; 004bf8ca | DAT_00600530
        ;   Label: LAB_004bf8ca
    PUSH ECX                            ; 004bf8d0 | DAT_01d81080
    CALL core_mission.cpp_CDemonMission_process_FUN_004f70a0 ; 004bf8d1
        ;   XREF to: 004f70a0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_process_FUN_004f70a0(CDemonMission * this_ptr)
    MOV EAX,[0x005fe9dc]                ; 004bf8d6 | g_CGamePtr
    MOV EDI,dword ptr [EAX + 0x230]     ; 004bf8db | g_CGameInstance.profile_mode
    ADD ESP,0x4                         ; 004bf8e1
    CMP EDI,0x1                         ; 004bf8e4
    JNZ 0x004bf93d                      ; 004bf8e7
        ;   XREF to: 004bf93d (CONDITIONAL_JUMP)  ; LAB_004bf93d
    CALL wincore_winrun.cpp_getTime_FUN_005806a0 ; 004bf8e9
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005806a0()
    MOV EBP,dword ptr [0x01d22c98]      ; 004bf8ee | DAT_01d22c98
    SUB EAX,EBP                         ; 004bf8f4
    MOV dword ptr [ESP + 0x8],EAX       ; 004bf8f6
    FILD dword ptr [ESP + 0x8]          ; 004bf8fa
    FMUL double ptr [0x005c3a70]        ; 004bf8fe | DAT_005c3a70
    MOV EAX,[0x005fe9dc]                ; 004bf904 | g_CGamePtr
    FMUL double ptr [0x005c3a78]        ; 004bf909 | DAT_005c3a78
    FLD float ptr [EAX + 0x314]         ; 004bf90f | g_CGameInstance.delta_time_float
    FXCH                                ; 004bf915
    FMUL double ptr [0x005c3a80]        ; 004bf917 | DAT_005c3a80
    FDIVRP                              ; 004bf91d
    SUB ESP,0x8                         ; 004bf91f
    FSTP double ptr [ESP]               ; 004bf922
    PUSH 0x5c3a48                       ; 004bf925 | = "gSit->process()"
    PUSH 0x5c39b0                       ; 004bf92a | s_G_s_3_2f_ms_005c39af+1
    MOV EAX,[0x005f1690]                ; 004bf92f | g_CConsolePtr
    PUSH EAX                            ; 004bf934 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 004bf935
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    ADD ESP,0x14                        ; 004bf93a
    MOV EAX,[0x005fe9dc]                ; 004bf93d | g_CGamePtr | g_CGameInstance
        ;   Label: LAB_004bf93d
    MOV dword ptr [EBX + 0x260],0x0     ; 004bf942
    CMP dword ptr [EAX + 0x230],0x0     ; 004bf94c | g_CGameInstance.profile_mode
    JNZ 0x004bf9e7                      ; 004bf953
        ;   XREF to: 004bf9e7 (CONDITIONAL_JUMP)  ; LAB_004bf9e7
    FLD float ptr [EBX + 0x314]         ; 004bf959
        ;   Label: LAB_004bf959
    FADD float ptr [EBX + 0x278]        ; 004bf95f
    FSTP float ptr [EBX + 0x278]        ; 004bf965
    ADD ESP,0xc                         ; 004bf96b
    POP EBP                             ; 004bf96e
    POP EDI                             ; 004bf96f
    POP ESI                             ; 004bf970
    POP EBX                             ; 004bf971
    RET                                 ; 004bf972
    CALL wincore_winrun.cpp_getTime_FUN_005806a0 ; 004bf973
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005806a0()
        ;   Label: LAB_004bf973
    MOV ESI,EAX                         ; 004bf978
    JMP 0x004bf4c8                      ; 004bf97a
        ;   XREF to: 004bf4c8 (UNCONDITIONAL_JUMP)  ; LAB_004bf4c8
    MOV EDI,dword ptr [EAX + 0x17c]     ; 004bf97f | g_CNetGameInstance.random_seed
        ;   Label: LAB_004bf97f
    PUSH EDI                            ; 004bf985
    JMP 0x004bf4e6                      ; 004bf986
        ;   XREF to: 004bf4e6 (UNCONDITIONAL_JUMP)  ; LAB_004bf4e6
    MOV EDX,dword ptr [0x006045f8]      ; 004bf98b | DAT_006045f8
        ;   Label: LAB_004bf98b
    PUSH EDX                            ; 004bf991
    MOV dword ptr [EBX + 0xe8],EAX      ; 004bf992
    CALL core_sound.cpp_FUN_0055fd30    ; 004bf998
        ;   XREF to: 0055fd30 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_FUN_0055fd30(CSound * this_ptr)
    ADD ESP,0x4                         ; 004bf99d
    MOV EAX,[0x006039e0]                ; 004bf9a0 | g_CScriptPtr
    PUSH 0x2                            ; 004bf9a5
    MOV ECX,dword ptr [EAX + 0xc]       ; 004bf9a7 | g_CScriptInstance.focus_actor
    PUSH ECX                            ; 004bf9aa
    MOV EDI,dword ptr [0x00603b28]      ; 004bf9ab | g_CDemonSetPtr
    PUSH EDI                            ; 004bf9b1 | g_CDemonSetInstance
    CALL core_setdir.cpp_FUN_0053f940   ; 004bf9b2
        ;   XREF to: 0053f940 (UNCONDITIONAL_CALL)  ; undefined core_setdir.cpp_FUN_0053f940()
    ADD ESP,0xc                         ; 004bf9b7
    PUSH EBX                            ; 004bf9ba
    CALL core_game.cpp_CGame_saveClockTime_FUN_004b4430 ; 004bf9bb
        ;   XREF to: 004b4430 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_saveClockTime_FUN_004b4430(CGame * this_ptr)
    MOV EAX,[0x006039e0]                ; 004bf9c0 | g_CScriptPtr
    ADD ESP,0x4                         ; 004bf9c5
    MOV dword ptr [EAX + 0x10],0x0      ; 004bf9c8 | g_CScriptInstance.focus_actor_changed
    JMP 0x004bf62b                      ; 004bf9cf
        ;   XREF to: 004bf62b (UNCONDITIONAL_JUMP)  ; LAB_004bf62b
    MOV EAX,[0x00603b28]                ; 004bf9d4 | g_CDemonSetPtr
        ;   Label: LAB_004bf9d4
    PUSH EAX                            ; 004bf9d9 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_processActors_FUN_005353e0 ; 004bf9da
        ;   XREF to: 005353e0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_processActors_FUN_005353e0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004bf9df
    JMP 0x004bf8b2                      ; 004bf9e2
        ;   XREF to: 004bf8b2 (UNCONDITIONAL_JUMP)  ; LAB_004bf8b2
    CALL wincore_winrun.cpp_getTime_FUN_005806a0 ; 004bf9e7
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005806a0()
        ;   Label: LAB_004bf9e7
    SUB EAX,ESI                         ; 004bf9ec
    MOV dword ptr [ESP + 0x8],EAX       ; 004bf9ee
    FILD dword ptr [ESP + 0x8]          ; 004bf9f2
    FMUL double ptr [0x005c3a70]        ; 004bf9f6 | DAT_005c3a70
    MOV EAX,[0x005fe9dc]                ; 004bf9fc | g_CGamePtr
    FMUL double ptr [0x005c3a78]        ; 004bfa01 | DAT_005c3a78
    FLD float ptr [EAX + 0x314]         ; 004bfa07 | g_CGameInstance.delta_time_float
    FXCH                                ; 004bfa0d
    FMUL double ptr [0x005c3a80]        ; 004bfa0f | DAT_005c3a80
    FDIVRP                              ; 004bfa15
    SUB ESP,0x8                         ; 004bfa17
    FSTP double ptr [ESP]               ; 004bfa1a
    PUSH 0x5c3a58                       ; 004bfa1d | = "simulate : %3.2f ms\n"
    MOV ECX,dword ptr [0x005f1690]      ; 004bfa22 | g_CConsolePtr
    PUSH ECX                            ; 004bfa28 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 004bfa29
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    ADD ESP,0x10                        ; 004bfa2e
    JMP 0x004bf959                      ; 004bfa31
        ;   XREF to: 004bf959 (UNCONDITIONAL_JUMP)  ; LAB_004bf959

