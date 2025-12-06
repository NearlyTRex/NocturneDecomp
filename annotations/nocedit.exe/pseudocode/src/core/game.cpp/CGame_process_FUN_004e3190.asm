; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_game.cpp_CGame_process_FUN_004e3190(CGame * this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x24]:8  local_24
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_CGame_processFrame_FUN_004da100 at 004dab42
;
; Referenced Globals:
;   TerminatedCString s_s_3_2f_ms_0062d3e9
;   TerminatedCString s_gFilterFX_process_0062d415
;   TerminatedCString s_gScript_process_0062d42a
;   TerminatedCString s_gSet_process_0062d43d
;   TerminatedCString s_gGore_process_0062d44d
;   TerminatedCString s_gFire_process_0062d45e
;   TerminatedCString s_gEventList_process_0062d46f
;   TerminatedCString s_gSit_process_0062d485
;   TerminatedCString s_simulate_3_2f_ms_0062d495
;   double DOUBLE_0062d4ad = 0.0555555555555556
;   double DOUBLE_0062d4b5 = 0.0000152587890625
;   double DOUBLE_0062d4bd = 1000
;   CConsole* g_CConsolePtr = 0083b1a4
;   CFilterFx* g_CFilterFXPtr = 020a570c
;   CEventList* g_CEventListPtr = 02d05310
;   ... and 31 more
;
; Called Functions:
;   core_actor.cpp_setRandomSeed_FUN_0040cb90
;   core_dfilter.cpp_CFilterFX_process_FUN_004708e0
;   core_event.cpp_CEventList_process_FUN_004aaac0
;   core_fire.cpp_CFireEffect_process_FUN_004c6ec0
;   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0
;   core_game.cpp_CGame_saveClockTime_FUN_004d7d80
;   core_game.cpp_FUN_004e09c0
;   core_gore.cpp_CGore_process_FUN_004ed9e0
;   core_mission.cpp_CDemonMission_process_FUN_00524250
;   core_script.cpp_CScript_process_FUN_00559960
;   core_set.cpp_CDemonSet_FUN_0056b810
;   core_set.cpp_CDemonSet_process_FUN_0056f940
;   core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
;   core_sound.cpp_CSound_init_FUN_005b2dd0
;   core_terrain.cpp_CTerrain_process_FUN_005e2050
;   ... and 6 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e3190
        ;   Label: core_game.cpp_CGame_process_FUN_004e3190
    PUSH ESI                            ; 004e3191
    PUSH EDI                            ; 004e3192
    PUSH EBP                            ; 004e3193
    SUB ESP,0xc                         ; 004e3194
    MOV EBX,dword ptr [ESP + 0x20]      ; 004e3197
    CMP dword ptr [EBX + 0x20c],0x0     ; 004e319b
    JNZ 0x004e363d                      ; 004e31a2 | LAB_004e363d
        ;   XREF to: 004e363d (CONDITIONAL_JUMP)
    MOV EAX,[0x00680a00]                ; 004e31a8 | undefined4 DAT_02f7c740 | CNetGame * g_CNetGameInstance
        ;   Label: LAB_004e31a8
    MOV dword ptr [EBX + 0x23c],0x1     ; 004e31ad
    CMP dword ptr [EAX],0x0             ; 004e31b7 | undefined4 DAT_02f7c740
    JNZ 0x004e3649                      ; 004e31ba | LAB_004e3649
        ;   XREF to: 004e3649 (CONDITIONAL_JUMP)
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 004e31c0 | int crt_stdlib.c_rand_FUN_005feb5c()
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)
    PUSH EAX                            ; 004e31c5
    CALL core_actor.cpp_setRandomSeed_FUN_0040cb90 ; 004e31c6 | void core_actor.cpp_setRandomSeed_FUN_0040cb90(uint seed_value)
        ;   Label: LAB_004e31c6
        ;   XREF to: 0040cb90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e31cb
    PUSH EBX                            ; 004e31ce
    CALL core_game.cpp_FUN_004e09c0     ; 004e31cf | undefined core_game.cpp_FUN_004e09c0()
        ;   XREF to: 004e09c0 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004e31d4 | CGame g_CGameInstance | CGame * g_CGamePtr
    MOV EBP,dword ptr [EAX + 0x20c]     ; 004e31d9 | DAT_02d81ca8
    ADD ESP,0x4                         ; 004e31df
    CMP EBP,0x1                         ; 004e31e2
    JNZ 0x004e31f1                      ; 004e31e5 | LAB_004e31f1
        ;   XREF to: 004e31f1 (CONDITIONAL_JUMP)
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 004e31e7 | int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
    MOV [0x02d831fc],EAX                ; 004e31ec | int g_ProfileStartTime
    MOV EAX,[0x0066efd0]                ; 004e31f1 | CFilterFx g_CFilterFXInstance | CFilterFx * g_CFilterFXPtr
        ;   Label: LAB_004e31f1
    PUSH EAX                            ; 004e31f6 | CFilterFx g_CFilterFXInstance
    CALL core_dfilter.cpp_CFilterFX_process_FUN_004708e0 ; 004e31f7 | void core_dfilter.cpp_CFilterFX_process_FUN_004708e0(CFilterFx * this_ptr)
        ;   XREF to: 004708e0 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004e31fc | CGame g_CGameInstance | CGame * g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x20c]     ; 004e3201 | DAT_02d81ca8
    ADD ESP,0x4                         ; 004e3207
    CMP EDX,0x1                         ; 004e320a
    JNZ 0x004e3264                      ; 004e320d | LAB_004e3264
        ;   XREF to: 004e3264 (CONDITIONAL_JUMP)
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 004e320f | int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [0x02d831fc]      ; 004e3214 | int g_ProfileStartTime
    SUB EAX,ECX                         ; 004e321a
    MOV dword ptr [ESP + 0x8],EAX       ; 004e321c
    FILD dword ptr [ESP + 0x8]          ; 004e3220
    FMUL double ptr [0x0062d4ad]        ; 004e3224 | double DOUBLE_0062d4ad
    MOV EAX,[0x0067b654]                ; 004e322a | CGame g_CGameInstance | CGame * g_CGamePtr
    FMUL double ptr [0x0062d4b5]        ; 004e322f | double DOUBLE_0062d4b5
    FLD float ptr [EAX + 0x264]         ; 004e3235 | g_CGameInstance.delta_time_float
    FXCH                                ; 004e323b
    FMUL double ptr [0x0062d4bd]        ; 004e323d | double DOUBLE_0062d4bd
    FDIVRP                              ; 004e3243
    SUB ESP,0x8                         ; 004e3245
    FSTP double ptr [ESP]               ; 004e3248
    PUSH 0x62d415                       ; 004e324b | = "gFilterFX->process()" | s_gFilterFX_process_0062d415 = gFilterFX->process()
    PUSH 0x62d3e9                       ; 004e3250 | = "%s : %3.2f ms\n" | s_s_3_2f_ms_0062d3e9 = %s : %3.2f ms

    MOV EDI,dword ptr [0x0066e8e0]      ; 004e3255 | CConsole * g_CConsolePtr
    PUSH EDI                            ; 004e325b | CConsole g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004e325c | void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004e3261
    MOV EAX,[0x0067b654]                ; 004e3264 | CGame g_CGameInstance | CGame * g_CGamePtr
        ;   Label: LAB_004e3264
    CMP dword ptr [EAX + 0x20c],0x1     ; 004e3269 | DAT_02d81ca8
    JNZ 0x004e327c                      ; 004e3270 | LAB_004e327c
        ;   XREF to: 004e327c (CONDITIONAL_JUMP)
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 004e3272 | int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
    MOV [0x02d831fc],EAX                ; 004e3277 | int g_ProfileStartTime
    MOV EAX,[0x00680d50]                ; 004e327c | CScript g_CScriptInstance | CScript * g_CScriptPtr
        ;   Label: LAB_004e327c
    PUSH EAX                            ; 004e3281 | CScript g_CScriptInstance
    CALL core_script.cpp_CScript_process_FUN_00559960 ; 004e3282 | void core_script.cpp_CScript_process_FUN_00559960(CScript * this_ptr)
        ;   XREF to: 00559960 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004e3287 | CGame g_CGameInstance | CGame * g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x20c]     ; 004e328c | DAT_02d81ca8
    ADD ESP,0x4                         ; 004e3292
    CMP EDX,0x1                         ; 004e3295
    JNZ 0x004e32ef                      ; 004e3298 | LAB_004e32ef
        ;   XREF to: 004e32ef (CONDITIONAL_JUMP)
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 004e329a | int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [0x02d831fc]      ; 004e329f | int g_ProfileStartTime
    SUB EAX,ECX                         ; 004e32a5
    MOV dword ptr [ESP + 0x8],EAX       ; 004e32a7
    FILD dword ptr [ESP + 0x8]          ; 004e32ab
    FMUL double ptr [0x0062d4ad]        ; 004e32af | double DOUBLE_0062d4ad
    MOV EAX,[0x0067b654]                ; 004e32b5 | CGame g_CGameInstance | CGame * g_CGamePtr
    FMUL double ptr [0x0062d4b5]        ; 004e32ba | double DOUBLE_0062d4b5
    FLD float ptr [EAX + 0x264]         ; 004e32c0 | g_CGameInstance.delta_time_float
    FXCH                                ; 004e32c6
    FMUL double ptr [0x0062d4bd]        ; 004e32c8 | double DOUBLE_0062d4bd
    FDIVRP                              ; 004e32ce
    SUB ESP,0x8                         ; 004e32d0
    FSTP double ptr [ESP]               ; 004e32d3
    PUSH 0x62d42a                       ; 004e32d6 | = "gScript->process()" | s_gScript_process_0062d42a = gScript->process()
    PUSH 0x62d3e9                       ; 004e32db | = "%s : %3.2f ms\n" | s_s_3_2f_ms_0062d3e9 = %s : %3.2f ms

    MOV EDI,dword ptr [0x0066e8e0]      ; 004e32e0 | CConsole * g_CConsolePtr
    PUSH EDI                            ; 004e32e6 | CConsole g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004e32e7 | void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004e32ec
    CMP dword ptr [EBX + 0xcc],0x0      ; 004e32ef
        ;   Label: LAB_004e32ef
    JZ 0x004e330b                       ; 004e32f6 | LAB_004e330b
        ;   XREF to: 004e330b (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x228]     ; 004e32f8
    TEST EAX,EAX                        ; 004e32fe
    JZ 0x004e3655                       ; 004e3300 | LAB_004e3655
        ;   XREF to: 004e3655 (CONDITIONAL_JUMP)
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 004e3306 | void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004e330b | CGame g_CGameInstance | CGame * g_CGamePtr
        ;   Label: LAB_004e330b
    CMP dword ptr [EAX + 0x20c],0x1     ; 004e3310 | DAT_02d81ca8
    JNZ 0x004e3323                      ; 004e3317 | LAB_004e3323
        ;   XREF to: 004e3323 (CONDITIONAL_JUMP)
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 004e3319 | int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
    MOV [0x02d831fc],EAX                ; 004e331e | int g_ProfileStartTime
    MOV EAX,[0x006810c8]                ; 004e3323 | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
        ;   Label: LAB_004e3323
    PUSH EAX                            ; 004e3328 | CDemonSet g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_process_FUN_0056f940 ; 004e3329 | void core_set.cpp_CDemonSet_process_FUN_0056f940(CDemonSet * this_ptr)
        ;   XREF to: 0056f940 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004e332e | CGame g_CGameInstance | CGame * g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x20c]     ; 004e3333 | DAT_02d81ca8
    ADD ESP,0x4                         ; 004e3339
    CMP EDX,0x1                         ; 004e333c
    JNZ 0x004e3396                      ; 004e333f | LAB_004e3396
        ;   XREF to: 004e3396 (CONDITIONAL_JUMP)
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 004e3341 | int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [0x02d831fc]      ; 004e3346 | int g_ProfileStartTime
    SUB EAX,ECX                         ; 004e334c
    MOV dword ptr [ESP + 0x8],EAX       ; 004e334e
    FILD dword ptr [ESP + 0x8]          ; 004e3352
    FMUL double ptr [0x0062d4ad]        ; 004e3356 | double DOUBLE_0062d4ad
    MOV EAX,[0x0067b654]                ; 004e335c | CGame g_CGameInstance | CGame * g_CGamePtr
    FMUL double ptr [0x0062d4b5]        ; 004e3361 | double DOUBLE_0062d4b5
    FLD float ptr [EAX + 0x264]         ; 004e3367 | g_CGameInstance.delta_time_float
    FXCH                                ; 004e336d
    FMUL double ptr [0x0062d4bd]        ; 004e336f | double DOUBLE_0062d4bd
    FDIVRP                              ; 004e3375
    SUB ESP,0x8                         ; 004e3377
    FSTP double ptr [ESP]               ; 004e337a
    PUSH 0x62d43d                       ; 004e337d | = "gSet->process()" | s_gSet_process_0062d43d = gSet->process()
    PUSH 0x62d3e9                       ; 004e3382 | = "%s : %3.2f ms\n" | s_s_3_2f_ms_0062d3e9 = %s : %3.2f ms

    MOV EDI,dword ptr [0x0066e8e0]      ; 004e3387 | CConsole * g_CConsolePtr
    PUSH EDI                            ; 004e338d | CConsole g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004e338e | void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004e3393
    MOV EAX,[0x0067b654]                ; 004e3396 | CGame g_CGameInstance | CGame * g_CGamePtr
        ;   Label: LAB_004e3396
    CMP dword ptr [EAX + 0x20c],0x1     ; 004e339b | DAT_02d81ca8
    JNZ 0x004e33ae                      ; 004e33a2 | LAB_004e33ae
        ;   XREF to: 004e33ae (CONDITIONAL_JUMP)
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 004e33a4 | int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
    MOV [0x02d831fc],EAX                ; 004e33a9 | int g_ProfileStartTime
    MOV EAX,[0x0067b9a0]                ; 004e33ae | CGore g_CGoreInstance | CGore * g_CGorePtr
        ;   Label: LAB_004e33ae
    PUSH EAX                            ; 004e33b3 | CGore g_CGoreInstance
    CALL core_gore.cpp_CGore_process_FUN_004ed9e0 ; 004e33b4 | undefined core_gore.cpp_CGore_process_FUN_004ed9e0()
        ;   XREF to: 004ed9e0 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004e33b9 | CGame g_CGameInstance | CGame * g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x20c]     ; 004e33be | DAT_02d81ca8
    ADD ESP,0x4                         ; 004e33c4
    CMP EDX,0x1                         ; 004e33c7
    JNZ 0x004e3421                      ; 004e33ca | LAB_004e3421
        ;   XREF to: 004e3421 (CONDITIONAL_JUMP)
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 004e33cc | int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [0x02d831fc]      ; 004e33d1 | int g_ProfileStartTime
    SUB EAX,ECX                         ; 004e33d7
    MOV dword ptr [ESP + 0x8],EAX       ; 004e33d9
    FILD dword ptr [ESP + 0x8]          ; 004e33dd
    FMUL double ptr [0x0062d4ad]        ; 004e33e1 | double DOUBLE_0062d4ad
    MOV EAX,[0x0067b654]                ; 004e33e7 | CGame g_CGameInstance | CGame * g_CGamePtr
    FMUL double ptr [0x0062d4b5]        ; 004e33ec | double DOUBLE_0062d4b5
    FLD float ptr [EAX + 0x264]         ; 004e33f2 | g_CGameInstance.delta_time_float
    FXCH                                ; 004e33f8
    FMUL double ptr [0x0062d4bd]        ; 004e33fa | double DOUBLE_0062d4bd
    FDIVRP                              ; 004e3400
    SUB ESP,0x8                         ; 004e3402
    FSTP double ptr [ESP]               ; 004e3405
    PUSH 0x62d44d                       ; 004e3408 | = "gGore->process()" | s_gGore_process_0062d44d = gGore->process()
    PUSH 0x62d3e9                       ; 004e340d | = "%s : %3.2f ms\n" | s_s_3_2f_ms_0062d3e9 = %s : %3.2f ms

    MOV EDI,dword ptr [0x0066e8e0]      ; 004e3412 | CConsole * g_CConsolePtr
    PUSH EDI                            ; 004e3418 | CConsole g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004e3419 | void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004e341e
    MOV EBP,dword ptr [0x006844f0]      ; 004e3421 | CWater * g_CWaterPtr
        ;   Label: LAB_004e3421
    PUSH EBP                            ; 004e3427 | CWater g_CWaterInstance
    CALL core_water.cpp_CWater_process_FUN_005e9ed0 ; 004e3428 | void core_water.cpp_CWater_process_FUN_005e9ed0()
        ;   XREF to: 005e9ed0 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004e342d | CGame g_CGameInstance | CGame * g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x20c]     ; 004e3432 | DAT_02d81ca8
    ADD ESP,0x4                         ; 004e3438
    CMP EDX,0x1                         ; 004e343b
    JNZ 0x004e344a                      ; 004e343e | LAB_004e344a
        ;   XREF to: 004e344a (CONDITIONAL_JUMP)
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 004e3440 | int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
    MOV [0x02d831fc],EAX                ; 004e3445 | int g_ProfileStartTime
    MOV ECX,dword ptr [0x0067a3d0]      ; 004e344a | CFireEffect g_CFireEffectInstance | CFireEffect * g_CFireEffectPtr
        ;   Label: LAB_004e344a
    PUSH ECX                            ; 004e3450 | CFireEffect g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_process_FUN_004c6ec0 ; 004e3451 | void core_fire.cpp_CFireEffect_process_FUN_004c6ec0(CFireEffect * this_ptr)
        ;   XREF to: 004c6ec0 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004e3456 | CGame g_CGameInstance | CGame * g_CGamePtr
    MOV EDI,dword ptr [EAX + 0x20c]     ; 004e345b | DAT_02d81ca8
    ADD ESP,0x4                         ; 004e3461
    CMP EDI,0x1                         ; 004e3464
    JNZ 0x004e34bd                      ; 004e3467 | LAB_004e34bd
        ;   XREF to: 004e34bd (CONDITIONAL_JUMP)
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 004e3469 | int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
    MOV EBP,dword ptr [0x02d831fc]      ; 004e346e | int g_ProfileStartTime
    SUB EAX,EBP                         ; 004e3474
    MOV dword ptr [ESP + 0x8],EAX       ; 004e3476
    FILD dword ptr [ESP + 0x8]          ; 004e347a
    FMUL double ptr [0x0062d4ad]        ; 004e347e | double DOUBLE_0062d4ad
    MOV EAX,[0x0067b654]                ; 004e3484 | CGame * g_CGamePtr
    FMUL double ptr [0x0062d4b5]        ; 004e3489 | double DOUBLE_0062d4b5
    FLD float ptr [EAX + 0x264]         ; 004e348f | g_CGameInstance.delta_time_float
    FXCH                                ; 004e3495
    FMUL double ptr [0x0062d4bd]        ; 004e3497 | double DOUBLE_0062d4bd
    FDIVRP                              ; 004e349d
    SUB ESP,0x8                         ; 004e349f
    FSTP double ptr [ESP]               ; 004e34a2
    PUSH 0x62d45e                       ; 004e34a5 | = "gFire->process()" | s_gFire_process_0062d45e = gFire->process()
    PUSH 0x62d3e9                       ; 004e34aa | = "%s : %3.2f ms\n" | s_s_3_2f_ms_0062d3e9 = %s : %3.2f ms

    MOV EAX,[0x0066e8e0]                ; 004e34af | CConsole g_ConsolePtr | CConsole * g_CConsolePtr
    PUSH EAX                            ; 004e34b4 | CConsole g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004e34b5 | void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004e34ba
    MOV EAX,[0x0067b654]                ; 004e34bd | CGame g_CGameInstance | CGame * g_CGamePtr
        ;   Label: LAB_004e34bd
    CMP dword ptr [EAX + 0x20c],0x1     ; 004e34c2 | DAT_02d81ca8
    JNZ 0x004e34d5                      ; 004e34c9 | LAB_004e34d5
        ;   XREF to: 004e34d5 (CONDITIONAL_JUMP)
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 004e34cb | int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
    MOV [0x02d831fc],EAX                ; 004e34d0 | int g_ProfileStartTime
    MOV ECX,dword ptr [0x006793d0]      ; 004e34d5 | CEventList g_CEventListInstance | CEventList * g_CEventListPtr
        ;   Label: LAB_004e34d5
    PUSH ECX                            ; 004e34db | CEventList g_CEventListInstance
    CALL core_event.cpp_CEventList_process_FUN_004aaac0 ; 004e34dc | void core_event.cpp_CEventList_process_FUN_004aaac0(CEventList * this_ptr)
        ;   XREF to: 004aaac0 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004e34e1 | CGame g_CGameInstance | CGame * g_CGamePtr
    MOV EDI,dword ptr [EAX + 0x20c]     ; 004e34e6 | DAT_02d81ca8
    ADD ESP,0x4                         ; 004e34ec
    CMP EDI,0x1                         ; 004e34ef
    JNZ 0x004e3548                      ; 004e34f2 | LAB_004e3548
        ;   XREF to: 004e3548 (CONDITIONAL_JUMP)
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 004e34f4 | int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
    MOV EBP,dword ptr [0x02d831fc]      ; 004e34f9 | int g_ProfileStartTime
    SUB EAX,EBP                         ; 004e34ff
    MOV dword ptr [ESP + 0x8],EAX       ; 004e3501
    FILD dword ptr [ESP + 0x8]          ; 004e3505
    FMUL double ptr [0x0062d4ad]        ; 004e3509 | double DOUBLE_0062d4ad
    MOV EAX,[0x0067b654]                ; 004e350f | CGame * g_CGamePtr
    FMUL double ptr [0x0062d4b5]        ; 004e3514 | double DOUBLE_0062d4b5
    FLD float ptr [EAX + 0x264]         ; 004e351a | g_CGameInstance.delta_time_float
    FXCH                                ; 004e3520
    FMUL double ptr [0x0062d4bd]        ; 004e3522 | double DOUBLE_0062d4bd
    FDIVRP                              ; 004e3528
    SUB ESP,0x8                         ; 004e352a
    FSTP double ptr [ESP]               ; 004e352d
    PUSH 0x62d46f                       ; 004e3530 | = "gEventList->process()" | s_gEventList_process_0062d46f = gEventList->process()
    PUSH 0x62d3e9                       ; 004e3535 | = "%s : %3.2f ms\n" | s_s_3_2f_ms_0062d3e9 = %s : %3.2f ms

    MOV EAX,[0x0066e8e0]                ; 004e353a | CConsole g_ConsolePtr | CConsole * g_CConsolePtr
    PUSH EAX                            ; 004e353f | CConsole g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004e3540 | void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004e3545
    MOV EDX,dword ptr [0x006843f8]      ; 004e3548 | CTerrain g_CTerrainInstance | CTerrain * g_CTerrainPtr
        ;   Label: LAB_004e3548
    PUSH EDX                            ; 004e354e | CTerrain g_CTerrainInstance
    CALL core_terrain.cpp_CTerrain_process_FUN_005e2050 ; 004e354f | void core_terrain.cpp_CTerrain_process_FUN_005e2050(CTerrain * this_ptr)
        ;   XREF to: 005e2050 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e3554
    MOV ECX,dword ptr [0x006848fc]      ; 004e3557 | CWeather g_CWeatherInstance | CWeather * g_CWeatherPtr
    PUSH ECX                            ; 004e355d | CWeather g_CWeatherInstance
    CALL core_weather.cpp_CWeather_SomethingWithLightingThunder_FUN_005eeaf0 ; 004e355e | undefined core_weather.cpp_CWeather_SomethingWithLightingThunder_FUN_005eeaf0()
        ;   XREF to: 005eeaf0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e3563
    PUSH EBX                            ; 004e3566
    CALL core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 ; 004e3567 | void core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0(CGame * this_ptr)
        ;   XREF to: 004ddaf0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e356c
    MOV EDI,dword ptr [0x006810c8]      ; 004e356f | CDemonSet * g_CDemonSetPtr
    PUSH EDI                            ; 004e3575 | CDemonSet g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_FUN_0056b810 ; 004e3576 | int core_set.cpp_CDemonSet_FUN_0056b810(CDemonSet * this_ptr)
        ;   XREF to: 0056b810 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004e357b | CGame g_CGameInstance | CGame * g_CGamePtr
    MOV EBP,dword ptr [EAX + 0x20c]     ; 004e3580 | DAT_02d81ca8
    ADD ESP,0x4                         ; 004e3586
    CMP EBP,0x1                         ; 004e3589
    JNZ 0x004e3598                      ; 004e358c | LAB_004e3598
        ;   XREF to: 004e3598 (CONDITIONAL_JUMP)
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 004e358e | int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
    MOV [0x02d831fc],EAX                ; 004e3593 | int g_ProfileStartTime
    MOV EAX,[0x0067d550]                ; 004e3598 | CDemonMission g_CDemonMissionInstance | CDemonMission * g_CDemonMissionPtr
        ;   Label: LAB_004e3598
    PUSH EAX                            ; 004e359d | CDemonMission g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_process_FUN_00524250 ; 004e359e | void core_mission.cpp_CDemonMission_process_FUN_00524250(CDemonMission * this_ptr)
        ;   XREF to: 00524250 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004e35a3 | CGame g_CGameInstance | CGame * g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x20c]     ; 004e35a8 | DAT_02d81ca8
    ADD ESP,0x4                         ; 004e35ae
    CMP EDX,0x1                         ; 004e35b1
    JNZ 0x004e360b                      ; 004e35b4 | LAB_004e360b
        ;   XREF to: 004e360b (CONDITIONAL_JUMP)
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 004e35b6 | int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [0x02d831fc]      ; 004e35bb | int g_ProfileStartTime
    SUB EAX,ECX                         ; 004e35c1
    MOV dword ptr [ESP + 0x8],EAX       ; 004e35c3
    FILD dword ptr [ESP + 0x8]          ; 004e35c7
    FMUL double ptr [0x0062d4ad]        ; 004e35cb | double DOUBLE_0062d4ad
    MOV EAX,[0x0067b654]                ; 004e35d1 | CGame g_CGameInstance | CGame * g_CGamePtr
    FMUL double ptr [0x0062d4b5]        ; 004e35d6 | double DOUBLE_0062d4b5
    FLD float ptr [EAX + 0x264]         ; 004e35dc | g_CGameInstance.delta_time_float
    FXCH                                ; 004e35e2
    FMUL double ptr [0x0062d4bd]        ; 004e35e4 | double DOUBLE_0062d4bd
    FDIVRP                              ; 004e35ea
    SUB ESP,0x8                         ; 004e35ec
    FSTP double ptr [ESP]               ; 004e35ef
    PUSH 0x62d485                       ; 004e35f2 | = "gSit->process()" | s_gSit_process_0062d485 = gSit->process()
    PUSH 0x62d3e9                       ; 004e35f7 | = "%s : %3.2f ms\n" | s_s_3_2f_ms_0062d3e9 = %s : %3.2f ms

    MOV EDI,dword ptr [0x0066e8e0]      ; 004e35fc | CConsole * g_CConsolePtr
    PUSH EDI                            ; 004e3602 | CConsole g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004e3603 | void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004e3608
    MOV EAX,[0x0067b654]                ; 004e360b | CGame g_CGameInstance | CGame * g_CGamePtr
        ;   Label: LAB_004e360b
    MOV dword ptr [EBX + 0x23c],0x0     ; 004e3610
    CMP dword ptr [EAX + 0x20c],0x0     ; 004e361a | DAT_02d81ca8
    JNZ 0x004e369e                      ; 004e3621 | LAB_004e369e
        ;   XREF to: 004e369e (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0x264]         ; 004e3623
        ;   Label: LAB_004e3623
    FADD float ptr [EBX + 0x250]        ; 004e3629
    FSTP float ptr [EBX + 0x250]        ; 004e362f
    ADD ESP,0xc                         ; 004e3635
    POP EBP                             ; 004e3638
    POP EDI                             ; 004e3639
    POP ESI                             ; 004e363a
    POP EBX                             ; 004e363b
    RET                                 ; 004e363c
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 004e363d | int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   Label: LAB_004e363d
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
    MOV ESI,EAX                         ; 004e3642
    JMP 0x004e31a8                      ; 004e3644 | LAB_004e31a8
        ;   XREF to: 004e31a8 (UNCONDITIONAL_JUMP)
    MOV EDI,dword ptr [EAX + 0x16c]     ; 004e3649 | undefined4 DAT_02f7c8ac
        ;   Label: LAB_004e3649
    PUSH EDI                            ; 004e364f
    JMP 0x004e31c6                      ; 004e3650 | LAB_004e31c6
        ;   XREF to: 004e31c6 (UNCONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x00681ef8]      ; 004e3655 | CSound g_CSoundInstance | CSound * g_CSoundPtr
        ;   Label: LAB_004e3655
    PUSH EDX                            ; 004e365b | CSound g_CSoundInstance
    MOV dword ptr [EBX + 0xcc],EAX      ; 004e365c
    CALL core_sound.cpp_CSound_init_FUN_005b2dd0 ; 004e3662 | void core_sound.cpp_CSound_init_FUN_005b2dd0(CSound * this_ptr)
        ;   XREF to: 005b2dd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e3667
    MOV EAX,[0x00680d50]                ; 004e366a | CScript g_CScriptInstance | CScript * g_CScriptPtr
    PUSH 0x2                            ; 004e366f
    MOV ECX,dword ptr [EAX + 0xc]       ; 004e3671 | DAT_0310f864
    PUSH ECX                            ; 004e3674
    MOV EDI,dword ptr [0x006810c8]      ; 004e3675 | CDemonSet * g_CDemonSetPtr
    PUSH EDI                            ; 004e367b | CDemonSet g_CDemonSetInstance
    CALL core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0 ; 004e367c | int core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0(CDemonSet * this_ptr, CDemonActor * actor, int force_evaluation_mode)
        ;   XREF to: 005751d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004e3681
    PUSH EBX                            ; 004e3684
    CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80 ; 004e3685 | void core_game.cpp_CGame_saveClockTime_FUN_004d7d80(CGame * n1, CGame * n2)
        ;   XREF to: 004d7d80 (UNCONDITIONAL_CALL)
    MOV EAX,[0x00680d50]                ; 004e368a | CScript * g_CScriptPtr
    ADD ESP,0x4                         ; 004e368f
    MOV dword ptr [EAX + 0x10],0x0      ; 004e3692 | DAT_0310f868
    JMP 0x004e330b                      ; 004e3699 | LAB_004e330b
        ;   XREF to: 004e330b (UNCONDITIONAL_JUMP)
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 004e369e | int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   Label: LAB_004e369e
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
    SUB EAX,ESI                         ; 004e36a3
    MOV dword ptr [ESP + 0x8],EAX       ; 004e36a5
    FILD dword ptr [ESP + 0x8]          ; 004e36a9
    FMUL double ptr [0x0062d4ad]        ; 004e36ad | double DOUBLE_0062d4ad
    MOV EAX,[0x0067b654]                ; 004e36b3 | CGame * g_CGamePtr
    FMUL double ptr [0x0062d4b5]        ; 004e36b8 | double DOUBLE_0062d4b5
    FLD float ptr [EAX + 0x264]         ; 004e36be | g_CGameInstance.delta_time_float
    FXCH                                ; 004e36c4
    FMUL double ptr [0x0062d4bd]        ; 004e36c6 | double DOUBLE_0062d4bd
    FDIVRP                              ; 004e36cc
    SUB ESP,0x8                         ; 004e36ce
    FSTP double ptr [ESP]               ; 004e36d1
    PUSH 0x62d495                       ; 004e36d4 | = "simulate : %3.2f ms\n" | s_simulate_3_2f_ms_0062d495 = simulate : %3.2f ms

    MOV EAX,[0x0066e8e0]                ; 004e36d9 | CConsole g_ConsolePtr | CConsole * g_CConsolePtr
    PUSH EAX                            ; 004e36de | CConsole g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004e36df | void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004e36e4
    JMP 0x004e3623                      ; 004e36e7 | LAB_004e3623
        ;   XREF to: 004e3623 (UNCONDITIONAL_JUMP)

