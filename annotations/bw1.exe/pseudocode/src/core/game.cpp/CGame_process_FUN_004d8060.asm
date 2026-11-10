; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_process_FUN_004d8060(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x24]:8  local_24
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_FUN_004ce580 at 004ce5ec
;
; Referenced Globals:
;   undefined4 s_G_s_3_2f_ms_005e33ab+1
;   TerminatedCString s_gFilterFX_process_005e33d4
;   TerminatedCString s_gScript_process_005e33e9
;   TerminatedCString s_gSet_process_005e33fc
;   TerminatedCString s_gGore_process_005e340c
;   TerminatedCString s_gFire_process_005e341d
;   TerminatedCString s_gEventList_process_005e342e
;   TerminatedCString s_gSit_process_005e3444
;   TerminatedCString s_simulate_3_2f_ms_005e3454
;   undefined4 DAT_005e346c
;   undefined4 DAT_005e3474
;   undefined4 DAT_005e347c
;   CConsole* g_CConsolePtr = 007db5f0
;   CFilterFX* g_CFilterFXPtr = 0152d230
;   undefined4 DAT_0061b4d0
;   ... and 25 more
;
; Called Functions:
;   core_actor.cpp_setRandomSeed_FUN_0040cb80
;   core_dfilter.cpp_CFilterFX_process_FUN_0045df40
;   core_event.cpp_CEventList_process_FUN_004a1a40
;   core_fire.cpp_CFireEffect_process_FUN_004b4dd0
;   core_fldnotes.cpp_FUN_004be970
;   core_game.cpp_CGame_processCheatCodes_FUN_004d27b0
;   core_game.cpp_CGame_saveClockTime_FUN_004cbf10
;   core_game.cpp_CGame_updateFadeTransition_FUN_004d60e0
;   core_gore.cpp_CGore_process_FUN_004e5e80
;   core_mission.cpp_CDemonMission_process_FUN_0051b8d0
;   core_script.cpp_CScript_process_FUN_005437f0
;   core_set.cpp_CDemonSet_process_FUN_005542c0
;   core_set.cpp_CDemonSet_processActors_FUN_0054fc20
;   core_setdir.cpp_FUN_00559f80
;   core_sound.cpp_FUN_0057cc00
;   ... and 8 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d8060
        ;   Label: core_game.cpp_CGame_process_FUN_004d8060
    PUSH ESI                            ; 004d8061
    PUSH EDI                            ; 004d8062
    PUSH EBP                            ; 004d8063
    SUB ESP,0xc                         ; 004d8064
    MOV EBX,dword ptr [ESP + 0x20]      ; 004d8067
    CMP dword ptr [EBX + 0x228],0x0     ; 004d806b
    JNZ 0x004d8523                      ; 004d8072
        ;   XREF to: 004d8523 (CONDITIONAL_JUMP)  ; LAB_004d8523
    MOV EAX,[0x00622580]                ; 004d8078 | g_CNetGamePtr
        ;   Label: LAB_004d8078
    MOV dword ptr [EBX + 0x258],0x1     ; 004d807d
    CMP dword ptr [EAX],0x0             ; 004d8087 | g_CNetGameInstance
    JNZ 0x004d852f                      ; 004d808a
        ;   XREF to: 004d852f (CONDITIONAL_JUMP)  ; LAB_004d852f
    CALL crt_stdlib.c_rand_FUN_005c084c ; 004d8090
        ;   XREF to: 005c084c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005c084c()
    PUSH EAX                            ; 004d8095
    CALL core_actor.cpp_setRandomSeed_FUN_0040cb80 ; 004d8096
        ;   XREF to: 0040cb80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_setRandomSeed_FUN_0040cb80(uint seed_value)
        ;   Label: LAB_004d8096
    ADD ESP,0x4                         ; 004d809b
    PUSH EBX                            ; 004d809e
    CALL core_game.cpp_CGame_updateFadeTransition_FUN_004d60e0 ; 004d809f
        ;   XREF to: 004d60e0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_updateFadeTransition_FUN_004d60e0(CGame * this_ptr)
    MOV EAX,[0x0061d95c]                ; 004d80a4 | g_CGamePtr
    MOV EBP,dword ptr [EAX + 0x228]     ; 004d80a9 | g_CGameInstance.field504_0x228
    ADD ESP,0x4                         ; 004d80af
    CMP EBP,0x1                         ; 004d80b2
    JNZ 0x004d80c1                      ; 004d80b5
        ;   XREF to: 004d80c1 (CONDITIONAL_JUMP)  ; LAB_004d80c1
    CALL wincore_winrun.cpp_getTime_FUN_005b2420 ; 004d80b7
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_005b2420()
    MOV [0x01cd0c90],EAX                ; 004d80bc | DAT_01cd0c90
    MOV EAX,[0x0061135c]                ; 004d80c1 | g_CFilterFXPtr
        ;   Label: LAB_004d80c1
    PUSH EAX                            ; 004d80c6
    CALL core_dfilter.cpp_CFilterFX_process_FUN_0045df40 ; 004d80c7
        ;   XREF to: 0045df40 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CFilterFX_process_FUN_0045df40(CFilterFX * this_ptr)
    MOV EAX,[0x0061d95c]                ; 004d80cc | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x228]     ; 004d80d1 | g_CGameInstance.field504_0x228
    ADD ESP,0x4                         ; 004d80d7
    CMP EDX,0x1                         ; 004d80da
    JNZ 0x004d8134                      ; 004d80dd
        ;   XREF to: 004d8134 (CONDITIONAL_JUMP)  ; LAB_004d8134
    CALL wincore_winrun.cpp_getTime_FUN_005b2420 ; 004d80df
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_005b2420()
    MOV ECX,dword ptr [0x01cd0c90]      ; 004d80e4 | DAT_01cd0c90
    SUB EAX,ECX                         ; 004d80ea
    MOV dword ptr [ESP + 0x8],EAX       ; 004d80ec
    FILD dword ptr [ESP + 0x8]          ; 004d80f0
    FMUL double ptr [0x005e346c]        ; 004d80f4 | DAT_005e346c
    MOV EAX,[0x0061d95c]                ; 004d80fa | g_CGamePtr
    FMUL double ptr [0x005e3474]        ; 004d80ff | DAT_005e3474
    FLD float ptr [EAX + 0x294]         ; 004d8105 | g_CGameInstance.delta_time_float
    FXCH                                ; 004d810b
    FMUL double ptr [0x005e347c]        ; 004d810d | DAT_005e347c
    FDIVRP                              ; 004d8113
    SUB ESP,0x8                         ; 004d8115
    FSTP double ptr [ESP]               ; 004d8118
    PUSH 0x5e33d4                       ; 004d811b | = "gFilterFX->process()"
    PUSH 0x5e33ac                       ; 004d8120 | s_G_s_3_2f_ms_005e33ab+1
    MOV EDI,dword ptr [0x00611100]      ; 004d8125 | g_CConsolePtr
    PUSH EDI                            ; 004d812b | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 004d812c
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x14                        ; 004d8131
    MOV EAX,[0x0061d95c]                ; 004d8134 | g_CGamePtr
        ;   Label: LAB_004d8134
    CMP dword ptr [EAX + 0x228],0x1     ; 004d8139 | g_CGameInstance.field504_0x228
    JNZ 0x004d814c                      ; 004d8140
        ;   XREF to: 004d814c (CONDITIONAL_JUMP)  ; LAB_004d814c
    CALL wincore_winrun.cpp_getTime_FUN_005b2420 ; 004d8142
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_005b2420()
    MOV [0x01cd0c90],EAX                ; 004d8147 | DAT_01cd0c90
    MOV EAX,[0x00622ad0]                ; 004d814c | g_CScriptPtr
        ;   Label: LAB_004d814c
    PUSH EAX                            ; 004d8151
    CALL core_script.cpp_CScript_process_FUN_005437f0 ; 004d8152
        ;   XREF to: 005437f0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_process_FUN_005437f0(CScript * this_ptr)
    MOV EAX,[0x0061d95c]                ; 004d8157 | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x228]     ; 004d815c | g_CGameInstance.field504_0x228
    ADD ESP,0x4                         ; 004d8162
    CMP EDX,0x1                         ; 004d8165
    JNZ 0x004d81bf                      ; 004d8168
        ;   XREF to: 004d81bf (CONDITIONAL_JUMP)  ; LAB_004d81bf
    CALL wincore_winrun.cpp_getTime_FUN_005b2420 ; 004d816a
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_005b2420()
    MOV ECX,dword ptr [0x01cd0c90]      ; 004d816f | DAT_01cd0c90
    SUB EAX,ECX                         ; 004d8175
    MOV dword ptr [ESP + 0x8],EAX       ; 004d8177
    FILD dword ptr [ESP + 0x8]          ; 004d817b
    FMUL double ptr [0x005e346c]        ; 004d817f | DAT_005e346c
    MOV EAX,[0x0061d95c]                ; 004d8185 | g_CGamePtr
    FMUL double ptr [0x005e3474]        ; 004d818a | DAT_005e3474
    FLD float ptr [EAX + 0x294]         ; 004d8190 | g_CGameInstance.delta_time_float
    FXCH                                ; 004d8196
    FMUL double ptr [0x005e347c]        ; 004d8198 | DAT_005e347c
    FDIVRP                              ; 004d819e
    SUB ESP,0x8                         ; 004d81a0
    FSTP double ptr [ESP]               ; 004d81a3
    PUSH 0x5e33e9                       ; 004d81a6 | = "gScript->process()"
    PUSH 0x5e33ac                       ; 004d81ab | s_G_s_3_2f_ms_005e33ab+1
    MOV EDI,dword ptr [0x00611100]      ; 004d81b0 | g_CConsolePtr
    PUSH EDI                            ; 004d81b6 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 004d81b7
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x14                        ; 004d81bc
    CMP dword ptr [EBX + 0xe0],0x0      ; 004d81bf
        ;   Label: LAB_004d81bf
    JZ 0x004d81db                       ; 004d81c6
        ;   XREF to: 004d81db (CONDITIONAL_JUMP)  ; LAB_004d81db
    MOV EAX,dword ptr [EBX + 0x244]     ; 004d81c8
    TEST EAX,EAX                        ; 004d81ce
    JZ 0x004d853b                       ; 004d81d0
        ;   XREF to: 004d853b (CONDITIONAL_JUMP)  ; LAB_004d853b
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 004d81d6
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    MOV EAX,[0x0061d95c]                ; 004d81db | g_CGamePtr
        ;   Label: LAB_004d81db
    CMP dword ptr [EAX + 0x228],0x1     ; 004d81e0 | g_CGameInstance.field504_0x228
    JNZ 0x004d81f3                      ; 004d81e7
        ;   XREF to: 004d81f3 (CONDITIONAL_JUMP)  ; LAB_004d81f3
    CALL wincore_winrun.cpp_getTime_FUN_005b2420 ; 004d81e9
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_005b2420()
    MOV [0x01cd0c90],EAX                ; 004d81ee | DAT_01cd0c90
    MOV EAX,[0x00622c18]                ; 004d81f3 | g_CDemonSetPtr
        ;   Label: LAB_004d81f3
    PUSH EAX                            ; 004d81f8 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_process_FUN_005542c0 ; 004d81f9
        ;   XREF to: 005542c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_process_FUN_005542c0(CDemonSet * this_ptr)
    MOV EAX,[0x0061d95c]                ; 004d81fe | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x228]     ; 004d8203 | g_CGameInstance.field504_0x228
    ADD ESP,0x4                         ; 004d8209
    CMP EDX,0x1                         ; 004d820c
    JNZ 0x004d8266                      ; 004d820f
        ;   XREF to: 004d8266 (CONDITIONAL_JUMP)  ; LAB_004d8266
    CALL wincore_winrun.cpp_getTime_FUN_005b2420 ; 004d8211
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_005b2420()
    MOV ECX,dword ptr [0x01cd0c90]      ; 004d8216 | DAT_01cd0c90
    SUB EAX,ECX                         ; 004d821c
    MOV dword ptr [ESP + 0x8],EAX       ; 004d821e
    FILD dword ptr [ESP + 0x8]          ; 004d8222
    FMUL double ptr [0x005e346c]        ; 004d8226 | DAT_005e346c
    MOV EAX,[0x0061d95c]                ; 004d822c | g_CGamePtr
    FMUL double ptr [0x005e3474]        ; 004d8231 | DAT_005e3474
    FLD float ptr [EAX + 0x294]         ; 004d8237 | g_CGameInstance.delta_time_float
    FXCH                                ; 004d823d
    FMUL double ptr [0x005e347c]        ; 004d823f | DAT_005e347c
    FDIVRP                              ; 004d8245
    SUB ESP,0x8                         ; 004d8247
    FSTP double ptr [ESP]               ; 004d824a
    PUSH 0x5e33fc                       ; 004d824d | = "gSet->process()"
    PUSH 0x5e33ac                       ; 004d8252 | s_G_s_3_2f_ms_005e33ab+1
    MOV EDI,dword ptr [0x00611100]      ; 004d8257 | g_CConsolePtr
    PUSH EDI                            ; 004d825d | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 004d825e
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x14                        ; 004d8263
    MOV EAX,[0x0061d95c]                ; 004d8266 | g_CGamePtr
        ;   Label: LAB_004d8266
    CMP dword ptr [EAX + 0x228],0x1     ; 004d826b | g_CGameInstance.field504_0x228
    JNZ 0x004d827e                      ; 004d8272
        ;   XREF to: 004d827e (CONDITIONAL_JUMP)  ; LAB_004d827e
    CALL wincore_winrun.cpp_getTime_FUN_005b2420 ; 004d8274
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_005b2420()
    MOV [0x01cd0c90],EAX                ; 004d8279 | DAT_01cd0c90
    MOV EAX,[0x0061dca4]                ; 004d827e | g_CGorePtr
        ;   Label: LAB_004d827e
    PUSH EAX                            ; 004d8283
    CALL core_gore.cpp_CGore_process_FUN_004e5e80 ; 004d8284
        ;   XREF to: 004e5e80 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_process_FUN_004e5e80(CGore * this_ptr)
    MOV EAX,[0x0061d95c]                ; 004d8289 | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x228]     ; 004d828e | g_CGameInstance.field504_0x228
    ADD ESP,0x4                         ; 004d8294
    CMP EDX,0x1                         ; 004d8297
    JNZ 0x004d82f1                      ; 004d829a
        ;   XREF to: 004d82f1 (CONDITIONAL_JUMP)  ; LAB_004d82f1
    CALL wincore_winrun.cpp_getTime_FUN_005b2420 ; 004d829c
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_005b2420()
    MOV ECX,dword ptr [0x01cd0c90]      ; 004d82a1 | DAT_01cd0c90
    SUB EAX,ECX                         ; 004d82a7
    MOV dword ptr [ESP + 0x8],EAX       ; 004d82a9
    FILD dword ptr [ESP + 0x8]          ; 004d82ad
    FMUL double ptr [0x005e346c]        ; 004d82b1 | DAT_005e346c
    MOV EAX,[0x0061d95c]                ; 004d82b7 | g_CGamePtr
    FMUL double ptr [0x005e3474]        ; 004d82bc | DAT_005e3474
    FLD float ptr [EAX + 0x294]         ; 004d82c2 | g_CGameInstance.delta_time_float
    FXCH                                ; 004d82c8
    FMUL double ptr [0x005e347c]        ; 004d82ca | DAT_005e347c
    FDIVRP                              ; 004d82d0
    SUB ESP,0x8                         ; 004d82d2
    FSTP double ptr [ESP]               ; 004d82d5
    PUSH 0x5e340c                       ; 004d82d8 | = "gGore->process()"
    PUSH 0x5e33ac                       ; 004d82dd | s_G_s_3_2f_ms_005e33ab+1
    MOV EDI,dword ptr [0x00611100]      ; 004d82e2 | g_CConsolePtr
    PUSH EDI                            ; 004d82e8 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 004d82e9
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x14                        ; 004d82ee
    MOV EBP,dword ptr [0x00625c90]      ; 004d82f1 | g_CWaterPtr
        ;   Label: LAB_004d82f1
    PUSH EBP                            ; 004d82f7
    CALL core_water.cpp_CWater_process_FUN_005a9a90 ; 004d82f8
        ;   XREF to: 005a9a90 (UNCONDITIONAL_CALL)  ; void core_water.cpp_CWater_process_FUN_005a9a90(CWater * this_ptr)
    MOV EAX,[0x0061d95c]                ; 004d82fd | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x228]     ; 004d8302 | g_CGameInstance.field504_0x228
    ADD ESP,0x4                         ; 004d8308
    CMP EDX,0x1                         ; 004d830b
    JNZ 0x004d831a                      ; 004d830e
        ;   XREF to: 004d831a (CONDITIONAL_JUMP)  ; LAB_004d831a
    CALL wincore_winrun.cpp_getTime_FUN_005b2420 ; 004d8310
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_005b2420()
    MOV [0x01cd0c90],EAX                ; 004d8315 | DAT_01cd0c90
    MOV ECX,dword ptr [0x0061c010]      ; 004d831a | DAT_0061c010
        ;   Label: LAB_004d831a
    PUSH ECX                            ; 004d8320
    CALL core_fire.cpp_CFireEffect_process_FUN_004b4dd0 ; 004d8321
        ;   XREF to: 004b4dd0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_process_FUN_004b4dd0(CFireEffect * this_ptr)
    MOV EAX,[0x0061d95c]                ; 004d8326 | g_CGamePtr
    MOV EDI,dword ptr [EAX + 0x228]     ; 004d832b | g_CGameInstance.field504_0x228
    ADD ESP,0x4                         ; 004d8331
    CMP EDI,0x1                         ; 004d8334
    JNZ 0x004d838d                      ; 004d8337
        ;   XREF to: 004d838d (CONDITIONAL_JUMP)  ; LAB_004d838d
    CALL wincore_winrun.cpp_getTime_FUN_005b2420 ; 004d8339
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_005b2420()
    MOV EBP,dword ptr [0x01cd0c90]      ; 004d833e | DAT_01cd0c90
    SUB EAX,EBP                         ; 004d8344
    MOV dword ptr [ESP + 0x8],EAX       ; 004d8346
    FILD dword ptr [ESP + 0x8]          ; 004d834a
    FMUL double ptr [0x005e346c]        ; 004d834e | DAT_005e346c
    MOV EAX,[0x0061d95c]                ; 004d8354 | g_CGamePtr
    FMUL double ptr [0x005e3474]        ; 004d8359 | DAT_005e3474
    FLD float ptr [EAX + 0x294]         ; 004d835f | g_CGameInstance.delta_time_float
    FXCH                                ; 004d8365
    FMUL double ptr [0x005e347c]        ; 004d8367 | DAT_005e347c
    FDIVRP                              ; 004d836d
    SUB ESP,0x8                         ; 004d836f
    FSTP double ptr [ESP]               ; 004d8372
    PUSH 0x5e341d                       ; 004d8375 | = "gFire->process()"
    PUSH 0x5e33ac                       ; 004d837a | s_G_s_3_2f_ms_005e33ab+1
    MOV EAX,[0x00611100]                ; 004d837f | g_CConsolePtr
    PUSH EAX                            ; 004d8384 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 004d8385
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x14                        ; 004d838a
    MOV EAX,[0x0061d95c]                ; 004d838d | g_CGamePtr
        ;   Label: LAB_004d838d
    CMP dword ptr [EAX + 0x228],0x1     ; 004d8392 | g_CGameInstance.field504_0x228
    JNZ 0x004d83a5                      ; 004d8399
        ;   XREF to: 004d83a5 (CONDITIONAL_JUMP)  ; LAB_004d83a5
    CALL wincore_winrun.cpp_getTime_FUN_005b2420 ; 004d839b
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_005b2420()
    MOV [0x01cd0c90],EAX                ; 004d83a0 | DAT_01cd0c90
    MOV ECX,dword ptr [0x0061b4d0]      ; 004d83a5 | DAT_0061b4d0
        ;   Label: LAB_004d83a5
    PUSH ECX                            ; 004d83ab
    CALL core_event.cpp_CEventList_process_FUN_004a1a40 ; 004d83ac
        ;   XREF to: 004a1a40 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_process_FUN_004a1a40(CEventList * this_ptr)
    MOV EAX,[0x0061d95c]                ; 004d83b1 | g_CGamePtr
    MOV EDI,dword ptr [EAX + 0x228]     ; 004d83b6 | g_CGameInstance.field504_0x228
    ADD ESP,0x4                         ; 004d83bc
    CMP EDI,0x1                         ; 004d83bf
    JNZ 0x004d8418                      ; 004d83c2
        ;   XREF to: 004d8418 (CONDITIONAL_JUMP)  ; LAB_004d8418
    CALL wincore_winrun.cpp_getTime_FUN_005b2420 ; 004d83c4
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_005b2420()
    MOV EBP,dword ptr [0x01cd0c90]      ; 004d83c9 | DAT_01cd0c90
    SUB EAX,EBP                         ; 004d83cf
    MOV dword ptr [ESP + 0x8],EAX       ; 004d83d1
    FILD dword ptr [ESP + 0x8]          ; 004d83d5
    FMUL double ptr [0x005e346c]        ; 004d83d9 | DAT_005e346c
    MOV EAX,[0x0061d95c]                ; 004d83df | g_CGamePtr
    FMUL double ptr [0x005e3474]        ; 004d83e4 | DAT_005e3474
    FLD float ptr [EAX + 0x294]         ; 004d83ea | g_CGameInstance.delta_time_float
    FXCH                                ; 004d83f0
    FMUL double ptr [0x005e347c]        ; 004d83f2 | DAT_005e347c
    FDIVRP                              ; 004d83f8
    SUB ESP,0x8                         ; 004d83fa
    FSTP double ptr [ESP]               ; 004d83fd
    PUSH 0x5e342e                       ; 004d8400 | = "gEventList->process()"
    PUSH 0x5e33ac                       ; 004d8405 | s_G_s_3_2f_ms_005e33ab+1
    MOV EAX,[0x00611100]                ; 004d840a | g_CConsolePtr
    PUSH EAX                            ; 004d840f | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 004d8410
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x14                        ; 004d8415
    MOV EDX,dword ptr [0x00625bc0]      ; 004d8418 | DAT_00625bc0
        ;   Label: LAB_004d8418
    PUSH EDX                            ; 004d841e
    CALL core_terrain.cpp_CTerrain_process_FUN_0059f4f0 ; 004d841f
        ;   XREF to: 0059f4f0 (UNCONDITIONAL_CALL)  ; void core_terrain.cpp_CTerrain_process_FUN_0059f4f0(CTerrain * this_ptr)
    ADD ESP,0x4                         ; 004d8424
    MOV ECX,dword ptr [0x0062604c]      ; 004d8427 | DAT_0062604c
    PUSH ECX                            ; 004d842d
    CALL core_weather.cpp_FUN_005ae190  ; 004d842e
        ;   XREF to: 005ae190 (UNCONDITIONAL_CALL)  ; void core_weather.cpp_FUN_005ae190(CWeather * this_ptr)
    ADD ESP,0x4                         ; 004d8433
    PUSH EBX                            ; 004d8436
    CALL core_game.cpp_CGame_processCheatCodes_FUN_004d27b0 ; 004d8437
        ;   XREF to: 004d27b0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_processCheatCodes_FUN_004d27b0(CGame * this_ptr)
    ADD ESP,0x4                         ; 004d843c
    MOV EDI,dword ptr [0x0061d418]      ; 004d843f | g_CFieldNotesPtr
    PUSH EDI                            ; 004d8445 | g_CFieldNotesInstance
    CALL core_fldnotes.cpp_FUN_004be970 ; 004d8446
        ;   XREF to: 004be970 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004be970()
    ADD ESP,0x4                         ; 004d844b
    CALL unkafter_alphabit.cpp_FUN_00415cd0 ; 004d844e
        ;   XREF to: 00415cd0 (UNCONDITIONAL_CALL)  ; undefined unkafter_alphabit.cpp_FUN_00415cd0()
    MOV EAX,[0x0061d418]                ; 004d8453 | g_CFieldNotesPtr
    CMP dword ptr [EAX + 0x40],0x0      ; 004d8458 | g_CFieldNotesInstance.field64_0x40
    JZ 0x004d8584                       ; 004d845c
        ;   XREF to: 004d8584 (CONDITIONAL_JUMP)  ; LAB_004d8584
    MOV EAX,[0x0061d95c]                ; 004d8462 | g_CGamePtr
        ;   Label: LAB_004d8462
    CMP dword ptr [EAX + 0x228],0x1     ; 004d8467 | g_CGameInstance.field504_0x228
    JNZ 0x004d847a                      ; 004d846e
        ;   XREF to: 004d847a (CONDITIONAL_JUMP)  ; LAB_004d847a
    CALL wincore_winrun.cpp_getTime_FUN_005b2420 ; 004d8470
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_005b2420()
    MOV [0x01cd0c90],EAX                ; 004d8475 | DAT_01cd0c90
    MOV ECX,dword ptr [0x0061f650]      ; 004d847a | DAT_0061f650
        ;   Label: LAB_004d847a
    PUSH ECX                            ; 004d8480 | DAT_01d2c900
    CALL core_mission.cpp_CDemonMission_process_FUN_0051b8d0 ; 004d8481
        ;   XREF to: 0051b8d0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_process_FUN_0051b8d0(CDemonMission * this_ptr)
    MOV EAX,[0x0061d95c]                ; 004d8486 | g_CGamePtr
    MOV EDI,dword ptr [EAX + 0x228]     ; 004d848b | g_CGameInstance.field504_0x228
    ADD ESP,0x4                         ; 004d8491
    CMP EDI,0x1                         ; 004d8494
    JNZ 0x004d84ed                      ; 004d8497
        ;   XREF to: 004d84ed (CONDITIONAL_JUMP)  ; LAB_004d84ed
    CALL wincore_winrun.cpp_getTime_FUN_005b2420 ; 004d8499
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_005b2420()
    MOV EBP,dword ptr [0x01cd0c90]      ; 004d849e | DAT_01cd0c90
    SUB EAX,EBP                         ; 004d84a4
    MOV dword ptr [ESP + 0x8],EAX       ; 004d84a6
    FILD dword ptr [ESP + 0x8]          ; 004d84aa
    FMUL double ptr [0x005e346c]        ; 004d84ae | DAT_005e346c
    MOV EAX,[0x0061d95c]                ; 004d84b4 | g_CGamePtr
    FMUL double ptr [0x005e3474]        ; 004d84b9 | DAT_005e3474
    FLD float ptr [EAX + 0x294]         ; 004d84bf | g_CGameInstance.delta_time_float
    FXCH                                ; 004d84c5
    FMUL double ptr [0x005e347c]        ; 004d84c7 | DAT_005e347c
    FDIVRP                              ; 004d84cd
    SUB ESP,0x8                         ; 004d84cf
    FSTP double ptr [ESP]               ; 004d84d2
    PUSH 0x5e3444                       ; 004d84d5 | = "gSit->process()"
    PUSH 0x5e33ac                       ; 004d84da | s_G_s_3_2f_ms_005e33ab+1
    MOV EAX,[0x00611100]                ; 004d84df | g_CConsolePtr
    PUSH EAX                            ; 004d84e4 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 004d84e5
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x14                        ; 004d84ea
    MOV EAX,[0x0061d95c]                ; 004d84ed | g_CGamePtr | g_CGameInstance
        ;   Label: LAB_004d84ed
    MOV dword ptr [EBX + 0x258],0x0     ; 004d84f2
    CMP dword ptr [EAX + 0x228],0x0     ; 004d84fc | g_CGameInstance.field504_0x228
    JNZ 0x004d8597                      ; 004d8503
        ;   XREF to: 004d8597 (CONDITIONAL_JUMP)  ; LAB_004d8597
    FLD float ptr [EBX + 0x294]         ; 004d8509
        ;   Label: LAB_004d8509
    FADD float ptr [EBX + 0x270]        ; 004d850f
    FSTP float ptr [EBX + 0x270]        ; 004d8515
    ADD ESP,0xc                         ; 004d851b
    POP EBP                             ; 004d851e
    POP EDI                             ; 004d851f
    POP ESI                             ; 004d8520
    POP EBX                             ; 004d8521
    RET                                 ; 004d8522
    CALL wincore_winrun.cpp_getTime_FUN_005b2420 ; 004d8523
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_005b2420()
        ;   Label: LAB_004d8523
    MOV ESI,EAX                         ; 004d8528
    JMP 0x004d8078                      ; 004d852a
        ;   XREF to: 004d8078 (UNCONDITIONAL_JUMP)  ; LAB_004d8078
    MOV EDI,dword ptr [EAX + 0x174]     ; 004d852f | g_CNetGameInstance.random_seed
        ;   Label: LAB_004d852f
    PUSH EDI                            ; 004d8535
    JMP 0x004d8096                      ; 004d8536
        ;   XREF to: 004d8096 (UNCONDITIONAL_JUMP)  ; LAB_004d8096
    MOV EDX,dword ptr [0x006236b8]      ; 004d853b | DAT_006236b8
        ;   Label: LAB_004d853b
    PUSH EDX                            ; 004d8541
    MOV dword ptr [EBX + 0xe0],EAX      ; 004d8542
    CALL core_sound.cpp_FUN_0057cc00    ; 004d8548
        ;   XREF to: 0057cc00 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_FUN_0057cc00(CSound * this_ptr)
    ADD ESP,0x4                         ; 004d854d
    MOV EAX,[0x00622ad0]                ; 004d8550 | g_CScriptPtr
    PUSH 0x2                            ; 004d8555
    MOV ECX,dword ptr [EAX + 0xc]       ; 004d8557 | g_CScriptInstance.focus_actor
    PUSH ECX                            ; 004d855a
    MOV EDI,dword ptr [0x00622c18]      ; 004d855b | g_CDemonSetPtr
    PUSH EDI                            ; 004d8561 | g_CDemonSetInstance
    CALL core_setdir.cpp_FUN_00559f80   ; 004d8562
        ;   XREF to: 00559f80 (UNCONDITIONAL_CALL)  ; undefined core_setdir.cpp_FUN_00559f80()
    ADD ESP,0xc                         ; 004d8567
    PUSH EBX                            ; 004d856a
    CALL core_game.cpp_CGame_saveClockTime_FUN_004cbf10 ; 004d856b
        ;   XREF to: 004cbf10 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_saveClockTime_FUN_004cbf10(CGame * this_ptr)
    MOV EAX,[0x00622ad0]                ; 004d8570 | g_CScriptPtr
    ADD ESP,0x4                         ; 004d8575
    MOV dword ptr [EAX + 0x10],0x0      ; 004d8578 | g_CScriptInstance.focus_actor_changed
    JMP 0x004d81db                      ; 004d857f
        ;   XREF to: 004d81db (UNCONDITIONAL_JUMP)  ; LAB_004d81db
    MOV EAX,[0x00622c18]                ; 004d8584 | g_CDemonSetPtr
        ;   Label: LAB_004d8584
    PUSH EAX                            ; 004d8589 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_processActors_FUN_0054fc20 ; 004d858a
        ;   XREF to: 0054fc20 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_processActors_FUN_0054fc20(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004d858f
    JMP 0x004d8462                      ; 004d8592
        ;   XREF to: 004d8462 (UNCONDITIONAL_JUMP)  ; LAB_004d8462
    CALL wincore_winrun.cpp_getTime_FUN_005b2420 ; 004d8597
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_005b2420()
        ;   Label: LAB_004d8597
    SUB EAX,ESI                         ; 004d859c
    MOV dword ptr [ESP + 0x8],EAX       ; 004d859e
    FILD dword ptr [ESP + 0x8]          ; 004d85a2
    FMUL double ptr [0x005e346c]        ; 004d85a6 | DAT_005e346c
    MOV EAX,[0x0061d95c]                ; 004d85ac | g_CGamePtr
    FMUL double ptr [0x005e3474]        ; 004d85b1 | DAT_005e3474
    FLD float ptr [EAX + 0x294]         ; 004d85b7 | g_CGameInstance.delta_time_float
    FXCH                                ; 004d85bd
    FMUL double ptr [0x005e347c]        ; 004d85bf | DAT_005e347c
    FDIVRP                              ; 004d85c5
    SUB ESP,0x8                         ; 004d85c7
    FSTP double ptr [ESP]               ; 004d85ca
    PUSH 0x5e3454                       ; 004d85cd | = "simulate : %3.2f ms\n"
    MOV ECX,dword ptr [0x00611100]      ; 004d85d2 | g_CConsolePtr
    PUSH ECX                            ; 004d85d8 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 004d85d9
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x10                        ; 004d85de
    JMP 0x004d8509                      ; 004d85e1
        ;   XREF to: 004d8509 (UNCONDITIONAL_JUMP)  ; LAB_004d8509

