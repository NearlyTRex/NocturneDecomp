; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_process_FUN_004bd570(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x24]:8  local_24
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_FUN_004b5190 at 004b5208
;
; Referenced Globals:
;   undefined4 s_G_s_3_2f_ms_005d884e+1
;   undefined4 s_gFilterFX_process_005d887a+1
;   TerminatedCString s_gScript_process_005d8890
;   TerminatedCString s_gSet_process_005d88a3
;   TerminatedCString s_gGore_process_005d88b3
;   TerminatedCString s_gFire_process_005d88c4
;   TerminatedCString s_gEventList_process_005d88d5
;   TerminatedCString s_gSit_process_005d88eb
;   TerminatedCString s_simulate_3_2f_ms_005d88fb
;   undefined4 DAT_005d8913
;   undefined4 DAT_005d891b
;   undefined4 DAT_005d8923
;   CConsole* g_CConsolePtr = 007c158c
;   CFilterFX* g_CFilterFXPtr = 01511cac
;   undefined4 DAT_006141f0
;   ... and 26 more
;
; Called Functions:
;   core_actor.cpp_setRandomSeed_FUN_0040cee0
;   core_bwspart.cpp_CSimpleParticleSystem_process_FUN_005a8180
;   core_dfilter.cpp_CFilterFX_process_FUN_00447de0
;   core_event.cpp_CEventList_process_FUN_004893d0
;   core_fire.cpp_CFireEffect_process_FUN_0049c430
;   core_fldnotes.cpp_FUN_004a5f60
;   core_game.cpp_CGame_saveClockTime_FUN_004b3000
;   core_game.cpp_CGame_updateFadeTransition_FUN_004bb2f0
;   core_game.cpp_FUN_004b90d0
;   core_game.cpp_FUN_004bb5b0
;   core_gore.cpp_CGore_process_FUN_004c9670
;   core_mission.cpp_CDemonMission_process_FUN_004fc940
;   core_script.cpp_CScript_process_FUN_005216e0
;   core_set.cpp_CDemonSet_process_FUN_00533010
;   core_set.cpp_CDemonSet_processActors_FUN_0052e940
;   ... and 10 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bd570
        ;   Label: core_game.cpp_CGame_process_FUN_004bd570
    PUSH ESI                            ; 004bd571
    PUSH EDI                            ; 004bd572
    PUSH EBP                            ; 004bd573
    SUB ESP,0xc                         ; 004bd574
    MOV EBX,dword ptr [ESP + 0x20]      ; 004bd577
    CMP dword ptr [EBX + 0x228],0x0     ; 004bd57b
    JNZ 0x004bda5c                      ; 004bd582
        ;   XREF to: 004bda5c (CONDITIONAL_JUMP)  ; LAB_004bda5c
    MOV EAX,[0x0061b120]                ; 004bd588 | g_CNetGamePtr
        ;   Label: LAB_004bd588
    MOV dword ptr [EBX + 0x258],0x1     ; 004bd58d
    CMP dword ptr [EAX],0x0             ; 004bd597 | g_CNetGameInstance
    JNZ 0x004bda68                      ; 004bd59a
        ;   XREF to: 004bda68 (CONDITIONAL_JUMP)  ; LAB_004bda68
    CALL crt_stdlib.c_rand_FUN_005b849c ; 004bd5a0
        ;   XREF to: 005b849c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005b849c()
    PUSH EAX                            ; 004bd5a5
    CALL core_actor.cpp_setRandomSeed_FUN_0040cee0 ; 004bd5a6
        ;   XREF to: 0040cee0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_setRandomSeed_FUN_0040cee0(uint seed_value)
        ;   Label: LAB_004bd5a6
    ADD ESP,0x4                         ; 004bd5ab
    PUSH EBX                            ; 004bd5ae
    CALL core_game.cpp_CGame_updateFadeTransition_FUN_004bb2f0 ; 004bd5af
        ;   XREF to: 004bb2f0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_updateFadeTransition_FUN_004bb2f0(CGame * this_ptr)
    ADD ESP,0x4                         ; 004bd5b4
    PUSH EBX                            ; 004bd5b7
    CALL core_game.cpp_FUN_004bb5b0     ; 004bd5b8
        ;   XREF to: 004bb5b0 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004bb5b0()
    MOV EAX,[0x00616494]                ; 004bd5bd | g_CGamePtr
    MOV EBP,dword ptr [EAX + 0x228]     ; 004bd5c2 | g_CGameInstance.profile_mode
    ADD ESP,0x4                         ; 004bd5c8
    CMP EBP,0x1                         ; 004bd5cb
    JNZ 0x004bd5da                      ; 004bd5ce
        ;   XREF to: 004bd5da (CONDITIONAL_JUMP)  ; LAB_004bd5da
    CALL wincore_winrun.cpp_getTime_FUN_0058e9e0 ; 004bd5d0
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_0058e9e0()
    MOV [0x01cb8118],EAX                ; 004bd5d5 | DAT_01cb8118
    MOV EAX,[0x0060a0b8]                ; 004bd5da | g_CFilterFXPtr
        ;   Label: LAB_004bd5da
    PUSH EAX                            ; 004bd5df
    CALL core_dfilter.cpp_CFilterFX_process_FUN_00447de0 ; 004bd5e0
        ;   XREF to: 00447de0 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CFilterFX_process_FUN_00447de0(CFilterFX * this_ptr)
    MOV EAX,[0x00616494]                ; 004bd5e5 | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x228]     ; 004bd5ea | g_CGameInstance.profile_mode
    ADD ESP,0x4                         ; 004bd5f0
    CMP EDX,0x1                         ; 004bd5f3
    JNZ 0x004bd64d                      ; 004bd5f6
        ;   XREF to: 004bd64d (CONDITIONAL_JUMP)  ; LAB_004bd64d
    CALL wincore_winrun.cpp_getTime_FUN_0058e9e0 ; 004bd5f8
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_0058e9e0()
    MOV ECX,dword ptr [0x01cb8118]      ; 004bd5fd | DAT_01cb8118
    SUB EAX,ECX                         ; 004bd603
    MOV dword ptr [ESP + 0x8],EAX       ; 004bd605
    FILD dword ptr [ESP + 0x8]          ; 004bd609
    FMUL double ptr [0x005d8913]        ; 004bd60d | DAT_005d8913
    MOV EAX,[0x00616494]                ; 004bd613 | g_CGamePtr
    FMUL double ptr [0x005d891b]        ; 004bd618 | DAT_005d891b
    FLD float ptr [EAX + 0x284]         ; 004bd61e | g_CGameInstance.delta_time_float
    FXCH                                ; 004bd624
    FMUL double ptr [0x005d8923]        ; 004bd626 | DAT_005d8923
    FDIVRP                              ; 004bd62c
    SUB ESP,0x8                         ; 004bd62e
    FSTP double ptr [ESP]               ; 004bd631
    PUSH 0x5d887b                       ; 004bd634 | s_gFilterFX_process_005d887a+1
    PUSH 0x5d884f                       ; 004bd639 | s_G_s_3_2f_ms_005d884e+1
    MOV EDI,dword ptr [0x00609ed0]      ; 004bd63e | g_CConsolePtr
    PUSH EDI                            ; 004bd644 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 004bd645
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0x14                        ; 004bd64a
    MOV EAX,[0x00616494]                ; 004bd64d | g_CGamePtr
        ;   Label: LAB_004bd64d
    CMP dword ptr [EAX + 0x228],0x1     ; 004bd652 | g_CGameInstance.profile_mode
    JNZ 0x004bd665                      ; 004bd659
        ;   XREF to: 004bd665 (CONDITIONAL_JUMP)  ; LAB_004bd665
    CALL wincore_winrun.cpp_getTime_FUN_0058e9e0 ; 004bd65b
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_0058e9e0()
    MOV [0x01cb8118],EAX                ; 004bd660 | DAT_01cb8118
    MOV EAX,[0x0061b460]                ; 004bd665 | g_CScriptPtr
        ;   Label: LAB_004bd665
    PUSH EAX                            ; 004bd66a | g_CScriptInstance
    CALL core_script.cpp_CScript_process_FUN_005216e0 ; 004bd66b
        ;   XREF to: 005216e0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_process_FUN_005216e0(CScript * this_ptr)
    MOV EAX,[0x00616494]                ; 004bd670 | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x228]     ; 004bd675 | g_CGameInstance.profile_mode
    ADD ESP,0x4                         ; 004bd67b
    CMP EDX,0x1                         ; 004bd67e
    JNZ 0x004bd6d8                      ; 004bd681
        ;   XREF to: 004bd6d8 (CONDITIONAL_JUMP)  ; LAB_004bd6d8
    CALL wincore_winrun.cpp_getTime_FUN_0058e9e0 ; 004bd683
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_0058e9e0()
    MOV ECX,dword ptr [0x01cb8118]      ; 004bd688 | DAT_01cb8118
    SUB EAX,ECX                         ; 004bd68e
    MOV dword ptr [ESP + 0x8],EAX       ; 004bd690
    FILD dword ptr [ESP + 0x8]          ; 004bd694
    FMUL double ptr [0x005d8913]        ; 004bd698 | DAT_005d8913
    MOV EAX,[0x00616494]                ; 004bd69e | g_CGamePtr
    FMUL double ptr [0x005d891b]        ; 004bd6a3 | DAT_005d891b
    FLD float ptr [EAX + 0x284]         ; 004bd6a9 | g_CGameInstance.delta_time_float
    FXCH                                ; 004bd6af
    FMUL double ptr [0x005d8923]        ; 004bd6b1 | DAT_005d8923
    FDIVRP                              ; 004bd6b7
    SUB ESP,0x8                         ; 004bd6b9
    FSTP double ptr [ESP]               ; 004bd6bc
    PUSH 0x5d8890                       ; 004bd6bf | = "gScript->process()"
    PUSH 0x5d884f                       ; 004bd6c4 | s_G_s_3_2f_ms_005d884e+1
    MOV EDI,dword ptr [0x00609ed0]      ; 004bd6c9 | g_CConsolePtr
    PUSH EDI                            ; 004bd6cf | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 004bd6d0
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0x14                        ; 004bd6d5
    CMP dword ptr [EBX + 0xe0],0x0      ; 004bd6d8
        ;   Label: LAB_004bd6d8
    JZ 0x004bd6f4                       ; 004bd6df
        ;   XREF to: 004bd6f4 (CONDITIONAL_JUMP)  ; LAB_004bd6f4
    MOV EAX,dword ptr [EBX + 0x244]     ; 004bd6e1
    TEST EAX,EAX                        ; 004bd6e7
    JZ 0x004bda74                       ; 004bd6e9
        ;   XREF to: 004bda74 (CONDITIONAL_JUMP)  ; LAB_004bda74
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 004bd6ef
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    MOV EAX,[0x00616494]                ; 004bd6f4 | g_CGamePtr
        ;   Label: LAB_004bd6f4
    CMP dword ptr [EAX + 0x228],0x1     ; 004bd6f9 | g_CGameInstance.profile_mode
    JNZ 0x004bd70c                      ; 004bd700
        ;   XREF to: 004bd70c (CONDITIONAL_JUMP)  ; LAB_004bd70c
    CALL wincore_winrun.cpp_getTime_FUN_0058e9e0 ; 004bd702
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_0058e9e0()
    MOV [0x01cb8118],EAX                ; 004bd707 | DAT_01cb8118
    MOV EAX,[0x0061b5a8]                ; 004bd70c | g_CDemonSetPtr
        ;   Label: LAB_004bd70c
    PUSH EAX                            ; 004bd711 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_process_FUN_00533010 ; 004bd712
        ;   XREF to: 00533010 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_process_FUN_00533010(CDemonSet * this_ptr)
    MOV EAX,[0x00616494]                ; 004bd717 | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x228]     ; 004bd71c | g_CGameInstance.profile_mode
    ADD ESP,0x4                         ; 004bd722
    CMP EDX,0x1                         ; 004bd725
    JNZ 0x004bd77f                      ; 004bd728
        ;   XREF to: 004bd77f (CONDITIONAL_JUMP)  ; LAB_004bd77f
    CALL wincore_winrun.cpp_getTime_FUN_0058e9e0 ; 004bd72a
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_0058e9e0()
    MOV ECX,dword ptr [0x01cb8118]      ; 004bd72f | DAT_01cb8118
    SUB EAX,ECX                         ; 004bd735
    MOV dword ptr [ESP + 0x8],EAX       ; 004bd737
    FILD dword ptr [ESP + 0x8]          ; 004bd73b
    FMUL double ptr [0x005d8913]        ; 004bd73f | DAT_005d8913
    MOV EAX,[0x00616494]                ; 004bd745 | g_CGamePtr
    FMUL double ptr [0x005d891b]        ; 004bd74a | DAT_005d891b
    FLD float ptr [EAX + 0x284]         ; 004bd750 | g_CGameInstance.delta_time_float
    FXCH                                ; 004bd756
    FMUL double ptr [0x005d8923]        ; 004bd758 | DAT_005d8923
    FDIVRP                              ; 004bd75e
    SUB ESP,0x8                         ; 004bd760
    FSTP double ptr [ESP]               ; 004bd763
    PUSH 0x5d88a3                       ; 004bd766 | = "gSet->process()"
    PUSH 0x5d884f                       ; 004bd76b | s_G_s_3_2f_ms_005d884e+1
    MOV EDI,dword ptr [0x00609ed0]      ; 004bd770 | g_CConsolePtr
    PUSH EDI                            ; 004bd776 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 004bd777
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0x14                        ; 004bd77c
    MOV EAX,[0x00616494]                ; 004bd77f | g_CGamePtr
        ;   Label: LAB_004bd77f
    CMP dword ptr [EAX + 0x228],0x1     ; 004bd784 | g_CGameInstance.profile_mode
    JNZ 0x004bd797                      ; 004bd78b
        ;   XREF to: 004bd797 (CONDITIONAL_JUMP)  ; LAB_004bd797
    CALL wincore_winrun.cpp_getTime_FUN_0058e9e0 ; 004bd78d
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_0058e9e0()
    MOV [0x01cb8118],EAX                ; 004bd792 | DAT_01cb8118
    MOV EAX,[0x006167e0]                ; 004bd797 | g_CGorePtr
        ;   Label: LAB_004bd797
    PUSH EAX                            ; 004bd79c
    CALL core_gore.cpp_CGore_process_FUN_004c9670 ; 004bd79d
        ;   XREF to: 004c9670 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_process_FUN_004c9670(CGore * this_ptr)
    MOV EAX,[0x00616494]                ; 004bd7a2 | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x228]     ; 004bd7a7 | g_CGameInstance.profile_mode
    ADD ESP,0x4                         ; 004bd7ad
    CMP EDX,0x1                         ; 004bd7b0
    JNZ 0x004bd80a                      ; 004bd7b3
        ;   XREF to: 004bd80a (CONDITIONAL_JUMP)  ; LAB_004bd80a
    CALL wincore_winrun.cpp_getTime_FUN_0058e9e0 ; 004bd7b5
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_0058e9e0()
    MOV ECX,dword ptr [0x01cb8118]      ; 004bd7ba | DAT_01cb8118
    SUB EAX,ECX                         ; 004bd7c0
    MOV dword ptr [ESP + 0x8],EAX       ; 004bd7c2
    FILD dword ptr [ESP + 0x8]          ; 004bd7c6
    FMUL double ptr [0x005d8913]        ; 004bd7ca | DAT_005d8913
    MOV EAX,[0x00616494]                ; 004bd7d0 | g_CGamePtr
    FMUL double ptr [0x005d891b]        ; 004bd7d5 | DAT_005d891b
    FLD float ptr [EAX + 0x284]         ; 004bd7db | g_CGameInstance.delta_time_float
    FXCH                                ; 004bd7e1
    FMUL double ptr [0x005d8923]        ; 004bd7e3 | DAT_005d8923
    FDIVRP                              ; 004bd7e9
    SUB ESP,0x8                         ; 004bd7eb
    FSTP double ptr [ESP]               ; 004bd7ee
    PUSH 0x5d88b3                       ; 004bd7f1 | = "gGore->process()"
    PUSH 0x5d884f                       ; 004bd7f6 | s_G_s_3_2f_ms_005d884e+1
    MOV EDI,dword ptr [0x00609ed0]      ; 004bd7fb | g_CConsolePtr
    PUSH EDI                            ; 004bd801 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 004bd802
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0x14                        ; 004bd807
    MOV EBP,dword ptr [0x0061e520]      ; 004bd80a | g_CWaterPtr
        ;   Label: LAB_004bd80a
    PUSH EBP                            ; 004bd810 | g_CWaterInstance
    CALL core_water.cpp_CWater_process_FUN_00585e60 ; 004bd811
        ;   XREF to: 00585e60 (UNCONDITIONAL_CALL)  ; void core_water.cpp_CWater_process_FUN_00585e60(CWater * this_ptr)
    MOV EAX,[0x00616494]                ; 004bd816 | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x228]     ; 004bd81b | g_CGameInstance.profile_mode
    ADD ESP,0x4                         ; 004bd821
    CMP EDX,0x1                         ; 004bd824
    JNZ 0x004bd833                      ; 004bd827
        ;   XREF to: 004bd833 (CONDITIONAL_JUMP)  ; LAB_004bd833
    CALL wincore_winrun.cpp_getTime_FUN_0058e9e0 ; 004bd829
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_0058e9e0()
    MOV [0x01cb8118],EAX                ; 004bd82e | DAT_01cb8118
    MOV ECX,dword ptr [0x00614d30]      ; 004bd833 | DAT_00614d30
        ;   Label: LAB_004bd833
    PUSH ECX                            ; 004bd839
    CALL core_fire.cpp_CFireEffect_process_FUN_0049c430 ; 004bd83a
        ;   XREF to: 0049c430 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_process_FUN_0049c430(CFireEffect * this_ptr)
    MOV EAX,[0x00616494]                ; 004bd83f | g_CGamePtr
    ADD ESP,0x4                         ; 004bd844
    MOV EDI,dword ptr [0x0061ebfc]      ; 004bd847 | g_CSimpleParticleSystemPtr
    SUB ESP,0x4                         ; 004bd84d
    MOV EDX,dword ptr [EAX + 0x284]     ; 004bd850 | g_CGameInstance.delta_time_float
    MOV dword ptr [ESP],EDX             ; 004bd856
    PUSH EDI                            ; 004bd859
    CALL core_bwspart.cpp_CSimpleParticleSystem_process_FUN_005a8180 ; 004bd85a
        ;   XREF to: 005a8180 (UNCONDITIONAL_CALL)  ; void core_bwspart.cpp_CSimpleParticleSystem_process_FUN_005a8180(CSimpleParticleSystem * this_ptr, float param_2)
    MOV EAX,[0x00616494]                ; 004bd85f | g_CGamePtr
    MOV EBP,dword ptr [EAX + 0x228]     ; 004bd864 | g_CGameInstance.profile_mode
    ADD ESP,0x8                         ; 004bd86a
    CMP EBP,0x1                         ; 004bd86d
    JNZ 0x004bd8c7                      ; 004bd870
        ;   XREF to: 004bd8c7 (CONDITIONAL_JUMP)  ; LAB_004bd8c7
    CALL wincore_winrun.cpp_getTime_FUN_0058e9e0 ; 004bd872
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_0058e9e0()
    MOV EDX,dword ptr [0x01cb8118]      ; 004bd877 | DAT_01cb8118
    SUB EAX,EDX                         ; 004bd87d
    MOV dword ptr [ESP + 0x8],EAX       ; 004bd87f
    FILD dword ptr [ESP + 0x8]          ; 004bd883
    FMUL double ptr [0x005d8913]        ; 004bd887 | DAT_005d8913
    MOV EAX,[0x00616494]                ; 004bd88d | g_CGamePtr
    FMUL double ptr [0x005d891b]        ; 004bd892 | DAT_005d891b
    FLD float ptr [EAX + 0x284]         ; 004bd898 | g_CGameInstance.delta_time_float
    FXCH                                ; 004bd89e
    FMUL double ptr [0x005d8923]        ; 004bd8a0 | DAT_005d8923
    FDIVRP                              ; 004bd8a6
    SUB ESP,0x8                         ; 004bd8a8
    FSTP double ptr [ESP]               ; 004bd8ab
    PUSH 0x5d88c4                       ; 004bd8ae | = "gFire->process()"
    PUSH 0x5d884f                       ; 004bd8b3 | s_G_s_3_2f_ms_005d884e+1
    MOV ECX,dword ptr [0x00609ed0]      ; 004bd8b8 | g_CConsolePtr
    PUSH ECX                            ; 004bd8be | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 004bd8bf
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0x14                        ; 004bd8c4
    MOV EAX,[0x00616494]                ; 004bd8c7 | g_CGamePtr
        ;   Label: LAB_004bd8c7
    CMP dword ptr [EAX + 0x228],0x1     ; 004bd8cc | g_CGameInstance.profile_mode
    JNZ 0x004bd8df                      ; 004bd8d3
        ;   XREF to: 004bd8df (CONDITIONAL_JUMP)  ; LAB_004bd8df
    CALL wincore_winrun.cpp_getTime_FUN_0058e9e0 ; 004bd8d5
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_0058e9e0()
    MOV [0x01cb8118],EAX                ; 004bd8da | DAT_01cb8118
    MOV EBP,dword ptr [0x006141f0]      ; 004bd8df | DAT_006141f0
        ;   Label: LAB_004bd8df
    PUSH EBP                            ; 004bd8e5
    CALL core_event.cpp_CEventList_process_FUN_004893d0 ; 004bd8e6
        ;   XREF to: 004893d0 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_process_FUN_004893d0(CEventList * this_ptr)
    MOV EAX,[0x00616494]                ; 004bd8eb | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x228]     ; 004bd8f0 | g_CGameInstance.profile_mode
    ADD ESP,0x4                         ; 004bd8f6
    CMP EDX,0x1                         ; 004bd8f9
    JNZ 0x004bd953                      ; 004bd8fc
        ;   XREF to: 004bd953 (CONDITIONAL_JUMP)  ; LAB_004bd953
    CALL wincore_winrun.cpp_getTime_FUN_0058e9e0 ; 004bd8fe
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_0058e9e0()
    MOV ECX,dword ptr [0x01cb8118]      ; 004bd903 | DAT_01cb8118
    SUB EAX,ECX                         ; 004bd909
    MOV dword ptr [ESP + 0x8],EAX       ; 004bd90b
    FILD dword ptr [ESP + 0x8]          ; 004bd90f
    FMUL double ptr [0x005d8913]        ; 004bd913 | DAT_005d8913
    MOV EAX,[0x00616494]                ; 004bd919 | g_CGamePtr
    FMUL double ptr [0x005d891b]        ; 004bd91e | DAT_005d891b
    FLD float ptr [EAX + 0x284]         ; 004bd924 | g_CGameInstance.delta_time_float
    FXCH                                ; 004bd92a
    FMUL double ptr [0x005d8923]        ; 004bd92c | DAT_005d8923
    FDIVRP                              ; 004bd932
    SUB ESP,0x8                         ; 004bd934
    FSTP double ptr [ESP]               ; 004bd937
    PUSH 0x5d88d5                       ; 004bd93a | = "gEventList->process()"
    PUSH 0x5d884f                       ; 004bd93f | s_G_s_3_2f_ms_005d884e+1
    MOV EDI,dword ptr [0x00609ed0]      ; 004bd944 | g_CConsolePtr
    PUSH EDI                            ; 004bd94a | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 004bd94b
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0x14                        ; 004bd950
    MOV EBP,dword ptr [0x0061e450]      ; 004bd953 | DAT_0061e450
        ;   Label: LAB_004bd953
    PUSH EBP                            ; 004bd959
    CALL core_terrain.cpp_CTerrain_process_FUN_0057b970 ; 004bd95a
        ;   XREF to: 0057b970 (UNCONDITIONAL_CALL)  ; void core_terrain.cpp_CTerrain_process_FUN_0057b970(CTerrain * this_ptr)
    ADD ESP,0x4                         ; 004bd95f
    MOV EAX,[0x0061e8f4]                ; 004bd962 | DAT_0061e8f4
    PUSH EAX                            ; 004bd967
    CALL core_weather.cpp_CWeather_update_FUN_0058a660 ; 004bd968
        ;   XREF to: 0058a660 (UNCONDITIONAL_CALL)  ; void core_weather.cpp_CWeather_update_FUN_0058a660(CWeather * this_ptr)
    ADD ESP,0x4                         ; 004bd96d
    PUSH EBX                            ; 004bd970
    CALL core_game.cpp_FUN_004b90d0     ; 004bd971
        ;   XREF to: 004b90d0 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004b90d0()
    ADD ESP,0x4                         ; 004bd976
    MOV EDX,dword ptr [0x00616044]      ; 004bd979 | g_CFieldNotesPtr
    PUSH EDX                            ; 004bd97f | g_CFieldNotesInstance
    CALL core_fldnotes.cpp_FUN_004a5f60 ; 004bd980
        ;   XREF to: 004a5f60 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a5f60()
    ADD ESP,0x4                         ; 004bd985
    CALL core_zombie.cpp_FUN_0059ac60   ; 004bd988
        ;   XREF to: 0059ac60 (UNCONDITIONAL_CALL)  ; undefined core_zombie.cpp_FUN_0059ac60()
    MOV ECX,dword ptr [0x0061b5a8]      ; 004bd98d | g_CDemonSetPtr
    PUSH ECX                            ; 004bd993 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_processActors_FUN_0052e940 ; 004bd994
        ;   XREF to: 0052e940 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_processActors_FUN_0052e940(CDemonSet * this_ptr)
    MOV EAX,[0x00616494]                ; 004bd999 | g_CGamePtr
    MOV EDI,dword ptr [EAX + 0x228]     ; 004bd99e | g_CGameInstance.profile_mode
    ADD ESP,0x4                         ; 004bd9a4
    CMP EDI,0x1                         ; 004bd9a7
    JNZ 0x004bd9b6                      ; 004bd9aa
        ;   XREF to: 004bd9b6 (CONDITIONAL_JUMP)  ; LAB_004bd9b6
    CALL wincore_winrun.cpp_getTime_FUN_0058e9e0 ; 004bd9ac
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_0058e9e0()
    MOV [0x01cb8118],EAX                ; 004bd9b1 | DAT_01cb8118
    MOV EBP,dword ptr [0x00618170]      ; 004bd9b6 | DAT_00618170
        ;   Label: LAB_004bd9b6
    PUSH EBP                            ; 004bd9bc
    CALL core_mission.cpp_CDemonMission_process_FUN_004fc940 ; 004bd9bd
        ;   XREF to: 004fc940 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_process_FUN_004fc940(CDemonMission * this_ptr)
    MOV EAX,[0x00616494]                ; 004bd9c2 | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x228]     ; 004bd9c7 | g_CGameInstance.profile_mode
    ADD ESP,0x4                         ; 004bd9cd
    CMP EDX,0x1                         ; 004bd9d0
    JNZ 0x004bda2a                      ; 004bd9d3
        ;   XREF to: 004bda2a (CONDITIONAL_JUMP)  ; LAB_004bda2a
    CALL wincore_winrun.cpp_getTime_FUN_0058e9e0 ; 004bd9d5
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_0058e9e0()
    MOV ECX,dword ptr [0x01cb8118]      ; 004bd9da | DAT_01cb8118
    SUB EAX,ECX                         ; 004bd9e0
    MOV dword ptr [ESP + 0x8],EAX       ; 004bd9e2
    FILD dword ptr [ESP + 0x8]          ; 004bd9e6
    FMUL double ptr [0x005d8913]        ; 004bd9ea | DAT_005d8913
    MOV EAX,[0x00616494]                ; 004bd9f0 | g_CGamePtr
    FMUL double ptr [0x005d891b]        ; 004bd9f5 | DAT_005d891b
    FLD float ptr [EAX + 0x284]         ; 004bd9fb | g_CGameInstance.delta_time_float
    FXCH                                ; 004bda01
    FMUL double ptr [0x005d8923]        ; 004bda03 | DAT_005d8923
    FDIVRP                              ; 004bda09
    SUB ESP,0x8                         ; 004bda0b
    FSTP double ptr [ESP]               ; 004bda0e
    PUSH 0x5d88eb                       ; 004bda11 | = "gSit->process()"
    PUSH 0x5d884f                       ; 004bda16 | s_G_s_3_2f_ms_005d884e+1
    MOV EDI,dword ptr [0x00609ed0]      ; 004bda1b | g_CConsolePtr
    PUSH EDI                            ; 004bda21 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 004bda22
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0x14                        ; 004bda27
    MOV EAX,[0x00616494]                ; 004bda2a | g_CGamePtr | g_CGameInstance
        ;   Label: LAB_004bda2a
    MOV dword ptr [EBX + 0x258],0x0     ; 004bda2f
    CMP dword ptr [EAX + 0x228],0x0     ; 004bda39 | g_CGameInstance.profile_mode
    JNZ 0x004bdabd                      ; 004bda40
        ;   XREF to: 004bdabd (CONDITIONAL_JUMP)  ; LAB_004bdabd
    FLD float ptr [EBX + 0x284]         ; 004bda42
        ;   Label: LAB_004bda42
    FADD float ptr [EBX + 0x270]        ; 004bda48
    FSTP float ptr [EBX + 0x270]        ; 004bda4e
    ADD ESP,0xc                         ; 004bda54
    POP EBP                             ; 004bda57
    POP EDI                             ; 004bda58
    POP ESI                             ; 004bda59
    POP EBX                             ; 004bda5a
    RET                                 ; 004bda5b
    CALL wincore_winrun.cpp_getTime_FUN_0058e9e0 ; 004bda5c
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_0058e9e0()
        ;   Label: LAB_004bda5c
    MOV ESI,EAX                         ; 004bda61
    JMP 0x004bd588                      ; 004bda63
        ;   XREF to: 004bd588 (UNCONDITIONAL_JUMP)  ; LAB_004bd588
    MOV EDI,dword ptr [EAX + 0x17c]     ; 004bda68 | g_CNetGameInstance.random_seed
        ;   Label: LAB_004bda68
    PUSH EDI                            ; 004bda6e
    JMP 0x004bd5a6                      ; 004bda6f
        ;   XREF to: 004bd5a6 (UNCONDITIONAL_JUMP)  ; LAB_004bd5a6
    MOV EDX,dword ptr [0x0061c068]      ; 004bda74 | DAT_0061c068
        ;   Label: LAB_004bda74
    PUSH EDX                            ; 004bda7a
    MOV dword ptr [EBX + 0xe0],EAX      ; 004bda7b
    CALL core_sound.cpp_FUN_0055a1d0    ; 004bda81
        ;   XREF to: 0055a1d0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_FUN_0055a1d0(CSound * this_ptr)
    ADD ESP,0x4                         ; 004bda86
    MOV EAX,[0x0061b460]                ; 004bda89 | g_CScriptPtr
    PUSH 0x2                            ; 004bda8e
    MOV ECX,dword ptr [EAX + 0xc]       ; 004bda90 | g_CScriptInstance.focus_actor
    PUSH ECX                            ; 004bda93
    MOV EDI,dword ptr [0x0061b5a8]      ; 004bda94 | g_CDemonSetPtr
    PUSH EDI                            ; 004bda9a | g_CDemonSetInstance
    CALL core_setdir.cpp_FUN_00538d10   ; 004bda9b
        ;   XREF to: 00538d10 (UNCONDITIONAL_CALL)  ; undefined core_setdir.cpp_FUN_00538d10()
    ADD ESP,0xc                         ; 004bdaa0
    PUSH EBX                            ; 004bdaa3
    CALL core_game.cpp_CGame_saveClockTime_FUN_004b3000 ; 004bdaa4
        ;   XREF to: 004b3000 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_saveClockTime_FUN_004b3000(CGame * this_ptr)
    MOV EAX,[0x0061b460]                ; 004bdaa9 | g_CScriptPtr
    ADD ESP,0x4                         ; 004bdaae
    MOV dword ptr [EAX + 0x10],0x0      ; 004bdab1 | g_CScriptInstance.focus_actor_changed
    JMP 0x004bd6f4                      ; 004bdab8
        ;   XREF to: 004bd6f4 (UNCONDITIONAL_JUMP)  ; LAB_004bd6f4
    CALL wincore_winrun.cpp_getTime_FUN_0058e9e0 ; 004bdabd
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_0058e9e0()
        ;   Label: LAB_004bdabd
    SUB EAX,ESI                         ; 004bdac2
    MOV dword ptr [ESP + 0x8],EAX       ; 004bdac4
    FILD dword ptr [ESP + 0x8]          ; 004bdac8
    FMUL double ptr [0x005d8913]        ; 004bdacc | DAT_005d8913
    MOV EAX,[0x00616494]                ; 004bdad2 | g_CGamePtr
    FMUL double ptr [0x005d891b]        ; 004bdad7 | DAT_005d891b
    FLD float ptr [EAX + 0x284]         ; 004bdadd | g_CGameInstance.delta_time_float
    FXCH                                ; 004bdae3
    FMUL double ptr [0x005d8923]        ; 004bdae5 | DAT_005d8923
    FDIVRP                              ; 004bdaeb
    SUB ESP,0x8                         ; 004bdaed
    FSTP double ptr [ESP]               ; 004bdaf0
    PUSH 0x5d88fb                       ; 004bdaf3 | = "simulate : %3.2f ms\n"
    MOV EAX,[0x00609ed0]                ; 004bdaf8 | g_CConsolePtr
    PUSH EAX                            ; 004bdafd | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 004bdafe
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0x10                        ; 004bdb03
    JMP 0x004bda42                      ; 004bdb06
        ;   XREF to: 004bda42 (UNCONDITIONAL_JUMP)  ; LAB_004bda42

