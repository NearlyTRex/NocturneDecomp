; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_process_FUN_004e3190(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
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
;   core_game.cpp_CGame_updateFadeTransition_FUN_004e09c0
;   core_gore.cpp_CGore_process_FUN_004ed9e0
;   core_mission.cpp_CDemonMission_process_FUN_00524250
;   core_script.cpp_CScript_process_FUN_00559960
;   core_set.cpp_CDemonSet_process_FUN_0056f940
;   core_set.cpp_CDemonSet_processActors_FUN_0056b810
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
    JNZ 0x004e363d                      ; 004e31a2
        ;   XREF to: 004e363d (CONDITIONAL_JUMP)  ; LAB_004e363d
    MOV EAX,[0x00680a00]                ; 004e31a8 | g_CNetGameInstance | g_CNetGamePtr
        ;   Label: LAB_004e31a8
    MOV dword ptr [EBX + 0x23c],0x1     ; 004e31ad
    CMP dword ptr [EAX],0x0             ; 004e31b7 | g_CNetGameInstance
    JNZ 0x004e3649                      ; 004e31ba
        ;   XREF to: 004e3649 (CONDITIONAL_JUMP)  ; LAB_004e3649
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 004e31c0
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005feb5c()
    PUSH EAX                            ; 004e31c5
    CALL core_actor.cpp_setRandomSeed_FUN_0040cb90 ; 004e31c6
        ;   XREF to: 0040cb90 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_setRandomSeed_FUN_0040cb90(uint seed_value)
        ;   Label: LAB_004e31c6
    ADD ESP,0x4                         ; 004e31cb
    PUSH EBX                            ; 004e31ce
    CALL core_game.cpp_CGame_updateFadeTransition_FUN_004e09c0 ; 004e31cf
        ;   XREF to: 004e09c0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_updateFadeTransition_FUN_004e09c0(CGame * this_ptr)
    MOV EAX,[0x0067b654]                ; 004e31d4 | g_CGameInstance | g_CGamePtr
    MOV EBP,dword ptr [EAX + 0x20c]     ; 004e31d9 | DAT_02d81ca8
    ADD ESP,0x4                         ; 004e31df
    CMP EBP,0x1                         ; 004e31e2
    JNZ 0x004e31f1                      ; 004e31e5
        ;   XREF to: 004e31f1 (CONDITIONAL_JUMP)  ; LAB_004e31f1
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 004e31e7
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    MOV [0x02d831fc],EAX                ; 004e31ec | g_ProfileStartTime
    MOV EAX,[0x0066efd0]                ; 004e31f1 | g_CFilterFXInstance | g_CFilterFXPtr
        ;   Label: LAB_004e31f1
    PUSH EAX                            ; 004e31f6 | g_CFilterFXInstance
    CALL core_dfilter.cpp_CFilterFX_process_FUN_004708e0 ; 004e31f7
        ;   XREF to: 004708e0 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CFilterFX_process_FUN_004708e0(CFilterFx * this_ptr)
    MOV EAX,[0x0067b654]                ; 004e31fc | g_CGameInstance | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x20c]     ; 004e3201 | DAT_02d81ca8
    ADD ESP,0x4                         ; 004e3207
    CMP EDX,0x1                         ; 004e320a
    JNZ 0x004e3264                      ; 004e320d
        ;   XREF to: 004e3264 (CONDITIONAL_JUMP)  ; LAB_004e3264
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 004e320f
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    MOV ECX,dword ptr [0x02d831fc]      ; 004e3214 | g_ProfileStartTime
    SUB EAX,ECX                         ; 004e321a
    MOV dword ptr [ESP + 0x8],EAX       ; 004e321c
    FILD dword ptr [ESP + 0x8]          ; 004e3220
    FMUL double ptr [0x0062d4ad]        ; 004e3224 | DOUBLE_0062d4ad
    MOV EAX,[0x0067b654]                ; 004e322a | g_CGameInstance | g_CGamePtr
    FMUL double ptr [0x0062d4b5]        ; 004e322f | DOUBLE_0062d4b5
    FLD float ptr [EAX + 0x264]         ; 004e3235 | g_CGameInstance.delta_time_float
    FXCH                                ; 004e323b
    FMUL double ptr [0x0062d4bd]        ; 004e323d | DOUBLE_0062d4bd
    FDIVRP                              ; 004e3243
    SUB ESP,0x8                         ; 004e3245
    FSTP double ptr [ESP]               ; 004e3248
    PUSH 0x62d415                       ; 004e324b | = "gFilterFX->process()"
    PUSH 0x62d3e9                       ; 004e3250 | = "%s : %3.2f ms\n"
    MOV EDI,dword ptr [0x0066e8e0]      ; 004e3255 | g_CConsolePtr
    PUSH EDI                            ; 004e325b | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004e325c
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x14                        ; 004e3261
    MOV EAX,[0x0067b654]                ; 004e3264 | g_CGameInstance | g_CGamePtr
        ;   Label: LAB_004e3264
    CMP dword ptr [EAX + 0x20c],0x1     ; 004e3269 | DAT_02d81ca8
    JNZ 0x004e327c                      ; 004e3270
        ;   XREF to: 004e327c (CONDITIONAL_JUMP)  ; LAB_004e327c
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 004e3272
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    MOV [0x02d831fc],EAX                ; 004e3277 | g_ProfileStartTime
    MOV EAX,[0x00680d50]                ; 004e327c | g_CScriptInstance | g_CScriptPtr
        ;   Label: LAB_004e327c
    PUSH EAX                            ; 004e3281 | g_CScriptInstance
    CALL core_script.cpp_CScript_process_FUN_00559960 ; 004e3282
        ;   XREF to: 00559960 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_process_FUN_00559960(CScript * this_ptr)
    MOV EAX,[0x0067b654]                ; 004e3287 | g_CGameInstance | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x20c]     ; 004e328c | DAT_02d81ca8
    ADD ESP,0x4                         ; 004e3292
    CMP EDX,0x1                         ; 004e3295
    JNZ 0x004e32ef                      ; 004e3298
        ;   XREF to: 004e32ef (CONDITIONAL_JUMP)  ; LAB_004e32ef
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 004e329a
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    MOV ECX,dword ptr [0x02d831fc]      ; 004e329f | g_ProfileStartTime
    SUB EAX,ECX                         ; 004e32a5
    MOV dword ptr [ESP + 0x8],EAX       ; 004e32a7
    FILD dword ptr [ESP + 0x8]          ; 004e32ab
    FMUL double ptr [0x0062d4ad]        ; 004e32af | DOUBLE_0062d4ad
    MOV EAX,[0x0067b654]                ; 004e32b5 | g_CGameInstance | g_CGamePtr
    FMUL double ptr [0x0062d4b5]        ; 004e32ba | DOUBLE_0062d4b5
    FLD float ptr [EAX + 0x264]         ; 004e32c0 | g_CGameInstance.delta_time_float
    FXCH                                ; 004e32c6
    FMUL double ptr [0x0062d4bd]        ; 004e32c8 | DOUBLE_0062d4bd
    FDIVRP                              ; 004e32ce
    SUB ESP,0x8                         ; 004e32d0
    FSTP double ptr [ESP]               ; 004e32d3
    PUSH 0x62d42a                       ; 004e32d6 | = "gScript->process()"
    PUSH 0x62d3e9                       ; 004e32db | = "%s : %3.2f ms\n"
    MOV EDI,dword ptr [0x0066e8e0]      ; 004e32e0 | g_CConsolePtr
    PUSH EDI                            ; 004e32e6 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004e32e7
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x14                        ; 004e32ec
    CMP dword ptr [EBX + 0xcc],0x0      ; 004e32ef
        ;   Label: LAB_004e32ef
    JZ 0x004e330b                       ; 004e32f6
        ;   XREF to: 004e330b (CONDITIONAL_JUMP)  ; LAB_004e330b
    MOV EAX,dword ptr [EBX + 0x228]     ; 004e32f8
    TEST EAX,EAX                        ; 004e32fe
    JZ 0x004e3655                       ; 004e3300
        ;   XREF to: 004e3655 (CONDITIONAL_JUMP)  ; LAB_004e3655
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 004e3306
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    MOV EAX,[0x0067b654]                ; 004e330b | g_CGameInstance | g_CGamePtr
        ;   Label: LAB_004e330b
    CMP dword ptr [EAX + 0x20c],0x1     ; 004e3310 | DAT_02d81ca8
    JNZ 0x004e3323                      ; 004e3317
        ;   XREF to: 004e3323 (CONDITIONAL_JUMP)  ; LAB_004e3323
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 004e3319
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    MOV [0x02d831fc],EAX                ; 004e331e | g_ProfileStartTime
    MOV EAX,[0x006810c8]                ; 004e3323 | g_CDemonSetInstance | g_CDemonSetPtr
        ;   Label: LAB_004e3323
    PUSH EAX                            ; 004e3328 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_process_FUN_0056f940 ; 004e3329
        ;   XREF to: 0056f940 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_process_FUN_0056f940(CDemonSet * this_ptr)
    MOV EAX,[0x0067b654]                ; 004e332e | g_CGameInstance | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x20c]     ; 004e3333 | DAT_02d81ca8
    ADD ESP,0x4                         ; 004e3339
    CMP EDX,0x1                         ; 004e333c
    JNZ 0x004e3396                      ; 004e333f
        ;   XREF to: 004e3396 (CONDITIONAL_JUMP)  ; LAB_004e3396
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 004e3341
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    MOV ECX,dword ptr [0x02d831fc]      ; 004e3346 | g_ProfileStartTime
    SUB EAX,ECX                         ; 004e334c
    MOV dword ptr [ESP + 0x8],EAX       ; 004e334e
    FILD dword ptr [ESP + 0x8]          ; 004e3352
    FMUL double ptr [0x0062d4ad]        ; 004e3356 | DOUBLE_0062d4ad
    MOV EAX,[0x0067b654]                ; 004e335c | g_CGameInstance | g_CGamePtr
    FMUL double ptr [0x0062d4b5]        ; 004e3361 | DOUBLE_0062d4b5
    FLD float ptr [EAX + 0x264]         ; 004e3367 | g_CGameInstance.delta_time_float
    FXCH                                ; 004e336d
    FMUL double ptr [0x0062d4bd]        ; 004e336f | DOUBLE_0062d4bd
    FDIVRP                              ; 004e3375
    SUB ESP,0x8                         ; 004e3377
    FSTP double ptr [ESP]               ; 004e337a
    PUSH 0x62d43d                       ; 004e337d | = "gSet->process()"
    PUSH 0x62d3e9                       ; 004e3382 | = "%s : %3.2f ms\n"
    MOV EDI,dword ptr [0x0066e8e0]      ; 004e3387 | g_CConsolePtr
    PUSH EDI                            ; 004e338d | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004e338e
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x14                        ; 004e3393
    MOV EAX,[0x0067b654]                ; 004e3396 | g_CGameInstance | g_CGamePtr
        ;   Label: LAB_004e3396
    CMP dword ptr [EAX + 0x20c],0x1     ; 004e339b | DAT_02d81ca8
    JNZ 0x004e33ae                      ; 004e33a2
        ;   XREF to: 004e33ae (CONDITIONAL_JUMP)  ; LAB_004e33ae
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 004e33a4
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    MOV [0x02d831fc],EAX                ; 004e33a9 | g_ProfileStartTime
    MOV EAX,[0x0067b9a0]                ; 004e33ae | g_CGoreInstance | g_CGorePtr
        ;   Label: LAB_004e33ae
    PUSH EAX                            ; 004e33b3 | g_CGoreInstance
    CALL core_gore.cpp_CGore_process_FUN_004ed9e0 ; 004e33b4
        ;   XREF to: 004ed9e0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_process_FUN_004ed9e0(CGore * this_ptr)
    MOV EAX,[0x0067b654]                ; 004e33b9 | g_CGameInstance | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x20c]     ; 004e33be | DAT_02d81ca8
    ADD ESP,0x4                         ; 004e33c4
    CMP EDX,0x1                         ; 004e33c7
    JNZ 0x004e3421                      ; 004e33ca
        ;   XREF to: 004e3421 (CONDITIONAL_JUMP)  ; LAB_004e3421
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 004e33cc
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    MOV ECX,dword ptr [0x02d831fc]      ; 004e33d1 | g_ProfileStartTime
    SUB EAX,ECX                         ; 004e33d7
    MOV dword ptr [ESP + 0x8],EAX       ; 004e33d9
    FILD dword ptr [ESP + 0x8]          ; 004e33dd
    FMUL double ptr [0x0062d4ad]        ; 004e33e1 | DOUBLE_0062d4ad
    MOV EAX,[0x0067b654]                ; 004e33e7 | g_CGameInstance | g_CGamePtr
    FMUL double ptr [0x0062d4b5]        ; 004e33ec | DOUBLE_0062d4b5
    FLD float ptr [EAX + 0x264]         ; 004e33f2 | g_CGameInstance.delta_time_float
    FXCH                                ; 004e33f8
    FMUL double ptr [0x0062d4bd]        ; 004e33fa | DOUBLE_0062d4bd
    FDIVRP                              ; 004e3400
    SUB ESP,0x8                         ; 004e3402
    FSTP double ptr [ESP]               ; 004e3405
    PUSH 0x62d44d                       ; 004e3408 | = "gGore->process()"
    PUSH 0x62d3e9                       ; 004e340d | = "%s : %3.2f ms\n"
    MOV EDI,dword ptr [0x0066e8e0]      ; 004e3412 | g_CConsolePtr
    PUSH EDI                            ; 004e3418 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004e3419
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x14                        ; 004e341e
    MOV EBP,dword ptr [0x006844f0]      ; 004e3421 | g_CWaterPtr
        ;   Label: LAB_004e3421
    PUSH EBP                            ; 004e3427 | g_CWaterInstance
    CALL core_water.cpp_CWater_process_FUN_005e9ed0 ; 004e3428
        ;   XREF to: 005e9ed0 (UNCONDITIONAL_CALL)  ; void core_water.cpp_CWater_process_FUN_005e9ed0(CWater * this_ptr)
    MOV EAX,[0x0067b654]                ; 004e342d | g_CGameInstance | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x20c]     ; 004e3432 | DAT_02d81ca8
    ADD ESP,0x4                         ; 004e3438
    CMP EDX,0x1                         ; 004e343b
    JNZ 0x004e344a                      ; 004e343e
        ;   XREF to: 004e344a (CONDITIONAL_JUMP)  ; LAB_004e344a
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 004e3440
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    MOV [0x02d831fc],EAX                ; 004e3445 | g_ProfileStartTime
    MOV ECX,dword ptr [0x0067a3d0]      ; 004e344a | g_CFireEffectInstance | g_CFireEffectPtr
        ;   Label: LAB_004e344a
    PUSH ECX                            ; 004e3450 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_process_FUN_004c6ec0 ; 004e3451
        ;   XREF to: 004c6ec0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_process_FUN_004c6ec0(CFireEffect * this_ptr)
    MOV EAX,[0x0067b654]                ; 004e3456 | g_CGameInstance | g_CGamePtr
    MOV EDI,dword ptr [EAX + 0x20c]     ; 004e345b | DAT_02d81ca8
    ADD ESP,0x4                         ; 004e3461
    CMP EDI,0x1                         ; 004e3464
    JNZ 0x004e34bd                      ; 004e3467
        ;   XREF to: 004e34bd (CONDITIONAL_JUMP)  ; LAB_004e34bd
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 004e3469
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    MOV EBP,dword ptr [0x02d831fc]      ; 004e346e | g_ProfileStartTime
    SUB EAX,EBP                         ; 004e3474
    MOV dword ptr [ESP + 0x8],EAX       ; 004e3476
    FILD dword ptr [ESP + 0x8]          ; 004e347a
    FMUL double ptr [0x0062d4ad]        ; 004e347e | DOUBLE_0062d4ad
    MOV EAX,[0x0067b654]                ; 004e3484 | g_CGamePtr
    FMUL double ptr [0x0062d4b5]        ; 004e3489 | DOUBLE_0062d4b5
    FLD float ptr [EAX + 0x264]         ; 004e348f | g_CGameInstance.delta_time_float
    FXCH                                ; 004e3495
    FMUL double ptr [0x0062d4bd]        ; 004e3497 | DOUBLE_0062d4bd
    FDIVRP                              ; 004e349d
    SUB ESP,0x8                         ; 004e349f
    FSTP double ptr [ESP]               ; 004e34a2
    PUSH 0x62d45e                       ; 004e34a5 | = "gFire->process()"
    PUSH 0x62d3e9                       ; 004e34aa | = "%s : %3.2f ms\n"
    MOV EAX,[0x0066e8e0]                ; 004e34af | g_CConsoleInstance | g_CConsolePtr
    PUSH EAX                            ; 004e34b4 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004e34b5
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x14                        ; 004e34ba
    MOV EAX,[0x0067b654]                ; 004e34bd | g_CGameInstance | g_CGamePtr
        ;   Label: LAB_004e34bd
    CMP dword ptr [EAX + 0x20c],0x1     ; 004e34c2 | DAT_02d81ca8
    JNZ 0x004e34d5                      ; 004e34c9
        ;   XREF to: 004e34d5 (CONDITIONAL_JUMP)  ; LAB_004e34d5
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 004e34cb
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    MOV [0x02d831fc],EAX                ; 004e34d0 | g_ProfileStartTime
    MOV ECX,dword ptr [0x006793d0]      ; 004e34d5 | g_CEventListInstance | g_CEventListPtr
        ;   Label: LAB_004e34d5
    PUSH ECX                            ; 004e34db | g_CEventListInstance
    CALL core_event.cpp_CEventList_process_FUN_004aaac0 ; 004e34dc
        ;   XREF to: 004aaac0 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_process_FUN_004aaac0(CEventList * this_ptr)
    MOV EAX,[0x0067b654]                ; 004e34e1 | g_CGameInstance | g_CGamePtr
    MOV EDI,dword ptr [EAX + 0x20c]     ; 004e34e6 | DAT_02d81ca8
    ADD ESP,0x4                         ; 004e34ec
    CMP EDI,0x1                         ; 004e34ef
    JNZ 0x004e3548                      ; 004e34f2
        ;   XREF to: 004e3548 (CONDITIONAL_JUMP)  ; LAB_004e3548
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 004e34f4
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    MOV EBP,dword ptr [0x02d831fc]      ; 004e34f9 | g_ProfileStartTime
    SUB EAX,EBP                         ; 004e34ff
    MOV dword ptr [ESP + 0x8],EAX       ; 004e3501
    FILD dword ptr [ESP + 0x8]          ; 004e3505
    FMUL double ptr [0x0062d4ad]        ; 004e3509 | DOUBLE_0062d4ad
    MOV EAX,[0x0067b654]                ; 004e350f | g_CGamePtr
    FMUL double ptr [0x0062d4b5]        ; 004e3514 | DOUBLE_0062d4b5
    FLD float ptr [EAX + 0x264]         ; 004e351a | g_CGameInstance.delta_time_float
    FXCH                                ; 004e3520
    FMUL double ptr [0x0062d4bd]        ; 004e3522 | DOUBLE_0062d4bd
    FDIVRP                              ; 004e3528
    SUB ESP,0x8                         ; 004e352a
    FSTP double ptr [ESP]               ; 004e352d
    PUSH 0x62d46f                       ; 004e3530 | = "gEventList->process()"
    PUSH 0x62d3e9                       ; 004e3535 | = "%s : %3.2f ms\n"
    MOV EAX,[0x0066e8e0]                ; 004e353a | g_CConsoleInstance | g_CConsolePtr
    PUSH EAX                            ; 004e353f | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004e3540
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x14                        ; 004e3545
    MOV EDX,dword ptr [0x006843f8]      ; 004e3548 | g_CTerrainInstance | g_CTerrainPtr
        ;   Label: LAB_004e3548
    PUSH EDX                            ; 004e354e | g_CTerrainInstance
    CALL core_terrain.cpp_CTerrain_process_FUN_005e2050 ; 004e354f
        ;   XREF to: 005e2050 (UNCONDITIONAL_CALL)  ; void core_terrain.cpp_CTerrain_process_FUN_005e2050(CTerrain * this_ptr)
    ADD ESP,0x4                         ; 004e3554
    MOV ECX,dword ptr [0x006848fc]      ; 004e3557 | g_CWeatherInstance | g_CWeatherPtr
    PUSH ECX                            ; 004e355d | g_CWeatherInstance
    CALL core_weather.cpp_CWeather_update_FUN_005eeaf0 ; 004e355e
        ;   XREF to: 005eeaf0 (UNCONDITIONAL_CALL)  ; void core_weather.cpp_CWeather_update_FUN_005eeaf0(CWeather * this_ptr)
    ADD ESP,0x4                         ; 004e3563
    PUSH EBX                            ; 004e3566
    CALL core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 ; 004e3567
        ;   XREF to: 004ddaf0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0(CGame * this_ptr)
    ADD ESP,0x4                         ; 004e356c
    MOV EDI,dword ptr [0x006810c8]      ; 004e356f | g_CDemonSetPtr
    PUSH EDI                            ; 004e3575 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_processActors_FUN_0056b810 ; 004e3576
        ;   XREF to: 0056b810 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_processActors_FUN_0056b810(CDemonSet * this_ptr)
    MOV EAX,[0x0067b654]                ; 004e357b | g_CGameInstance | g_CGamePtr
    MOV EBP,dword ptr [EAX + 0x20c]     ; 004e3580 | DAT_02d81ca8
    ADD ESP,0x4                         ; 004e3586
    CMP EBP,0x1                         ; 004e3589
    JNZ 0x004e3598                      ; 004e358c
        ;   XREF to: 004e3598 (CONDITIONAL_JUMP)  ; LAB_004e3598
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 004e358e
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    MOV [0x02d831fc],EAX                ; 004e3593 | g_ProfileStartTime
    MOV EAX,[0x0067d550]                ; 004e3598 | g_CDemonMissionInstance | g_CDemonMissionPtr
        ;   Label: LAB_004e3598
    PUSH EAX                            ; 004e359d | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_process_FUN_00524250 ; 004e359e
        ;   XREF to: 00524250 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_process_FUN_00524250(CDemonMission * this_ptr)
    MOV EAX,[0x0067b654]                ; 004e35a3 | g_CGameInstance | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x20c]     ; 004e35a8 | DAT_02d81ca8
    ADD ESP,0x4                         ; 004e35ae
    CMP EDX,0x1                         ; 004e35b1
    JNZ 0x004e360b                      ; 004e35b4
        ;   XREF to: 004e360b (CONDITIONAL_JUMP)  ; LAB_004e360b
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 004e35b6
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    MOV ECX,dword ptr [0x02d831fc]      ; 004e35bb | g_ProfileStartTime
    SUB EAX,ECX                         ; 004e35c1
    MOV dword ptr [ESP + 0x8],EAX       ; 004e35c3
    FILD dword ptr [ESP + 0x8]          ; 004e35c7
    FMUL double ptr [0x0062d4ad]        ; 004e35cb | DOUBLE_0062d4ad
    MOV EAX,[0x0067b654]                ; 004e35d1 | g_CGameInstance | g_CGamePtr
    FMUL double ptr [0x0062d4b5]        ; 004e35d6 | DOUBLE_0062d4b5
    FLD float ptr [EAX + 0x264]         ; 004e35dc | g_CGameInstance.delta_time_float
    FXCH                                ; 004e35e2
    FMUL double ptr [0x0062d4bd]        ; 004e35e4 | DOUBLE_0062d4bd
    FDIVRP                              ; 004e35ea
    SUB ESP,0x8                         ; 004e35ec
    FSTP double ptr [ESP]               ; 004e35ef
    PUSH 0x62d485                       ; 004e35f2 | = "gSit->process()"
    PUSH 0x62d3e9                       ; 004e35f7 | = "%s : %3.2f ms\n"
    MOV EDI,dword ptr [0x0066e8e0]      ; 004e35fc | g_CConsolePtr
    PUSH EDI                            ; 004e3602 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004e3603
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x14                        ; 004e3608
    MOV EAX,[0x0067b654]                ; 004e360b | g_CGameInstance | g_CGamePtr
        ;   Label: LAB_004e360b
    MOV dword ptr [EBX + 0x23c],0x0     ; 004e3610
    CMP dword ptr [EAX + 0x20c],0x0     ; 004e361a | DAT_02d81ca8
    JNZ 0x004e369e                      ; 004e3621
        ;   XREF to: 004e369e (CONDITIONAL_JUMP)  ; LAB_004e369e
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
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 004e363d
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   Label: LAB_004e363d
    MOV ESI,EAX                         ; 004e3642
    JMP 0x004e31a8                      ; 004e3644
        ;   XREF to: 004e31a8 (UNCONDITIONAL_JUMP)  ; LAB_004e31a8
    MOV EDI,dword ptr [EAX + 0x16c]     ; 004e3649 | DAT_02f7c8ac
        ;   Label: LAB_004e3649
    PUSH EDI                            ; 004e364f
    JMP 0x004e31c6                      ; 004e3650
        ;   XREF to: 004e31c6 (UNCONDITIONAL_JUMP)  ; LAB_004e31c6
    MOV EDX,dword ptr [0x00681ef8]      ; 004e3655 | g_CSoundInstance | g_CSoundPtr
        ;   Label: LAB_004e3655
    PUSH EDX                            ; 004e365b | g_CSoundInstance
    MOV dword ptr [EBX + 0xcc],EAX      ; 004e365c
    CALL core_sound.cpp_CSound_init_FUN_005b2dd0 ; 004e3662
        ;   XREF to: 005b2dd0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_init_FUN_005b2dd0(CSound * this_ptr)
    ADD ESP,0x4                         ; 004e3667
    MOV EAX,[0x00680d50]                ; 004e366a | g_CScriptInstance | g_CScriptPtr
    PUSH 0x2                            ; 004e366f
    MOV ECX,dword ptr [EAX + 0xc]       ; 004e3671 | DAT_0310f864
    PUSH ECX                            ; 004e3674
    MOV EDI,dword ptr [0x006810c8]      ; 004e3675 | g_CDemonSetPtr
    PUSH EDI                            ; 004e367b | g_CDemonSetInstance
    CALL core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0 ; 004e367c
        ;   XREF to: 005751d0 (UNCONDITIONAL_CALL)  ; int core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0(CDemonSet * this_ptr, CDemonActor * actor, int force_evaluation_mode)
    ADD ESP,0xc                         ; 004e3681
    PUSH EBX                            ; 004e3684
    CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80 ; 004e3685
        ;   XREF to: 004d7d80 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_saveClockTime_FUN_004d7d80(CGame * this_ptr)
    MOV EAX,[0x00680d50]                ; 004e368a | g_CScriptPtr
    ADD ESP,0x4                         ; 004e368f
    MOV dword ptr [EAX + 0x10],0x0      ; 004e3692 | DAT_0310f868
    JMP 0x004e330b                      ; 004e3699
        ;   XREF to: 004e330b (UNCONDITIONAL_JUMP)  ; LAB_004e330b
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 004e369e
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   Label: LAB_004e369e
    SUB EAX,ESI                         ; 004e36a3
    MOV dword ptr [ESP + 0x8],EAX       ; 004e36a5
    FILD dword ptr [ESP + 0x8]          ; 004e36a9
    FMUL double ptr [0x0062d4ad]        ; 004e36ad | DOUBLE_0062d4ad
    MOV EAX,[0x0067b654]                ; 004e36b3 | g_CGamePtr
    FMUL double ptr [0x0062d4b5]        ; 004e36b8 | DOUBLE_0062d4b5
    FLD float ptr [EAX + 0x264]         ; 004e36be | g_CGameInstance.delta_time_float
    FXCH                                ; 004e36c4
    FMUL double ptr [0x0062d4bd]        ; 004e36c6 | DOUBLE_0062d4bd
    FDIVRP                              ; 004e36cc
    SUB ESP,0x8                         ; 004e36ce
    FSTP double ptr [ESP]               ; 004e36d1
    PUSH 0x62d495                       ; 004e36d4 | = "simulate : %3.2f ms\n"
    MOV EAX,[0x0066e8e0]                ; 004e36d9 | g_CConsoleInstance | g_CConsolePtr
    PUSH EAX                            ; 004e36de | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004e36df
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x10                        ; 004e36e4
    JMP 0x004e3623                      ; 004e36e7
        ;   XREF to: 004e3623 (UNCONDITIONAL_JUMP)  ; LAB_004e3623

