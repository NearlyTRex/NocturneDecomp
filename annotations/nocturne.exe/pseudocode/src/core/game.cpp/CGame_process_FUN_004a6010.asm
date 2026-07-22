; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_process_FUN_004a6010(int param_1)
;
; Local Variables:
; undefined8       Stack[-0x24]:8  local_24
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0049cc10 at 0049cc88
;
; Referenced Globals:
;   TerminatedCString s_s_3_2f_ms_00584486
;   TerminatedCString s_gFilterFX_process_005844b2
;   string s_gScript->process()_005844c7
;   string s_gSet->process()_005844da
;   string s_gGore->process()_005844ea
;   string s_gFire->process()_005844fb
;   string s_gEventList->process()_0058450c
;   string s_gSit->process()_00584522
;   string s_simulate_:_%3.2f_ms_00584532
;   double DOUBLE_0058454a = 0.0555555555555556
;   double DOUBLE_00584552 = 0.0000152587890625
;   double DOUBLE_0058455a = 1000
;   void* PTR_DAT_005ad350 = 0077ad0c
;   undefined4 DAT_005ad550
;   undefined4 DAT_005b7650
;   ... and 22 more
;
; Called Functions:
;   core_actor.cpp_setRandomSeed_FUN_0040dd20
;   core_dfilter.cpp_CFilterFX_process_FUN_0044c4a0
;   core_event.cpp_CEventList_process_FUN_0047aa50
;   core_fire.cpp_CFireEffect_process_FUN_0048a390
;   core_game.cpp_CGame_processCheatCodes_FUN_004a0550
;   core_game.cpp_CGame_saveClockTime_FUN_0049a890
;   core_game.cpp_CGame_updateFadeTransition_FUN_004a3880
;   core_gore.cpp_CGore_process_FUN_004b0030
;   core_mission.cpp_CDemonMission_process_FUN_004d92a0
;   core_script.cpp_CScript_process_FUN_004fe5b0
;   core_set.cpp_CDemonSet_process_FUN_0050d040
;   core_set.cpp_CDemonSet_processActors_FUN_00509140
;   core_sound.cpp_CSound_init_FUN_0052ddf0
;   core_terrain.cpp_CTerrain_process_FUN_00549410
;   core_water.cpp_CWater_process_FUN_00550860
;   ... and 6 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a6010
        ;   Label: core_game.cpp_CGame_process_FUN_004a6010
    PUSH ESI                            ; 004a6011
    PUSH EDI                            ; 004a6012
    PUSH EBP                            ; 004a6013
    SUB ESP,0xc                         ; 004a6014
    MOV EBX,dword ptr [ESP + 0x20]      ; 004a6017
    CMP dword ptr [EBX + 0x20c],0x0     ; 004a601b
    JNZ 0x004a64bd                      ; 004a6022
        ;   XREF to: 004a64bd (CONDITIONAL_JUMP)  ; LAB_004a64bd
    MOV EAX,[0x005bdee0]                ; 004a6028 | DAT_005bdee0
        ;   Label: LAB_004a6028
    MOV dword ptr [EBX + 0x23c],0x1     ; 004a602d
    CMP dword ptr [EAX],0x0             ; 004a6037 | DAT_01cea280
    JNZ 0x004a64c9                      ; 004a603a
        ;   XREF to: 004a64c9 (CONDITIONAL_JUMP)  ; LAB_004a64c9
    CALL crt_stdlib.c_rand_FUN_0056488c ; 004a6040
        ;   XREF to: 0056488c (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c_rand_FUN_0056488c()
    PUSH EAX                            ; 004a6045
    CALL core_actor.cpp_setRandomSeed_FUN_0040dd20 ; 004a6046
        ;   XREF to: 0040dd20 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_setRandomSeed_FUN_0040dd20()
        ;   Label: LAB_004a6046
    ADD ESP,0x4                         ; 004a604b
    PUSH EBX                            ; 004a604e
    CALL core_game.cpp_CGame_updateFadeTransition_FUN_004a3880 ; 004a604f
        ;   XREF to: 004a3880 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_CGame_updateFadeTransition_FUN_004a3880()
    MOV EAX,[0x005b9354]                ; 004a6054 | DAT_005b9354
    MOV EBP,dword ptr [EAX + 0x20c]     ; 004a6059 | DAT_01c777f8
    ADD ESP,0x4                         ; 004a605f
    CMP EBP,0x1                         ; 004a6062
    JNZ 0x004a6071                      ; 004a6065
        ;   XREF to: 004a6071 (CONDITIONAL_JUMP)  ; LAB_004a6071
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 004a6067
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_00558a30()
    MOV [0x01c78b14],EAX                ; 004a606c | DAT_01c78b14
    MOV EAX,[0x005ad550]                ; 004a6071 | DAT_005ad550
        ;   Label: LAB_004a6071
    PUSH EAX                            ; 004a6076
    CALL core_dfilter.cpp_CFilterFX_process_FUN_0044c4a0 ; 004a6077
        ;   XREF to: 0044c4a0 (UNCONDITIONAL_CALL)  ; undefined core_dfilter.cpp_CFilterFX_process_FUN_0044c4a0()
    MOV EAX,[0x005b9354]                ; 004a607c | DAT_005b9354
    MOV EDX,dword ptr [EAX + 0x20c]     ; 004a6081 | DAT_01c777f8
    ADD ESP,0x4                         ; 004a6087
    CMP EDX,0x1                         ; 004a608a
    JNZ 0x004a60e4                      ; 004a608d
        ;   XREF to: 004a60e4 (CONDITIONAL_JUMP)  ; LAB_004a60e4
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 004a608f
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_00558a30()
    MOV ECX,dword ptr [0x01c78b14]      ; 004a6094 | DAT_01c78b14
    SUB EAX,ECX                         ; 004a609a
    MOV dword ptr [ESP + 0x8],EAX       ; 004a609c
    FILD dword ptr [ESP + 0x8]          ; 004a60a0
    FMUL double ptr [0x0058454a]        ; 004a60a4 | DOUBLE_0058454a
    MOV EAX,[0x005b9354]                ; 004a60aa | DAT_005b9354
    FMUL double ptr [0x00584552]        ; 004a60af | DOUBLE_00584552
    FLD float ptr [EAX + 0x264]         ; 004a60b5 | DAT_01c77850
    FXCH                                ; 004a60bb
    FMUL double ptr [0x0058455a]        ; 004a60bd | DOUBLE_0058455a
    FDIVRP                              ; 004a60c3
    SUB ESP,0x8                         ; 004a60c5
    FSTP double ptr [ESP]               ; 004a60c8
    PUSH 0x5844b2                       ; 004a60cb | = "gFilterFX->process()"
    PUSH 0x584486                       ; 004a60d0 | = "%s : %3.2f ms\n"
    MOV EDI,dword ptr [0x005ad350]      ; 004a60d5 | PTR_DAT_005ad350
    PUSH EDI                            ; 004a60db | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 004a60dc
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    ADD ESP,0x14                        ; 004a60e1
    MOV EAX,[0x005b9354]                ; 004a60e4 | DAT_005b9354
        ;   Label: LAB_004a60e4
    CMP dword ptr [EAX + 0x20c],0x1     ; 004a60e9 | DAT_01c777f8
    JNZ 0x004a60fc                      ; 004a60f0
        ;   XREF to: 004a60fc (CONDITIONAL_JUMP)  ; LAB_004a60fc
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 004a60f2
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_00558a30()
    MOV [0x01c78b14],EAX                ; 004a60f7 | DAT_01c78b14
    MOV EAX,[0x005be220]                ; 004a60fc | DAT_005be220
        ;   Label: LAB_004a60fc
    PUSH EAX                            ; 004a6101 | DAT_01e56da0
    CALL core_script.cpp_CScript_process_FUN_004fe5b0 ; 004a6102
        ;   XREF to: 004fe5b0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_process_FUN_004fe5b0()
    MOV EAX,[0x005b9354]                ; 004a6107 | DAT_005b9354
    MOV EDX,dword ptr [EAX + 0x20c]     ; 004a610c | DAT_01c777f8
    ADD ESP,0x4                         ; 004a6112
    CMP EDX,0x1                         ; 004a6115
    JNZ 0x004a616f                      ; 004a6118
        ;   XREF to: 004a616f (CONDITIONAL_JUMP)  ; LAB_004a616f
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 004a611a
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_00558a30()
    MOV ECX,dword ptr [0x01c78b14]      ; 004a611f | DAT_01c78b14
    SUB EAX,ECX                         ; 004a6125
    MOV dword ptr [ESP + 0x8],EAX       ; 004a6127
    FILD dword ptr [ESP + 0x8]          ; 004a612b
    FMUL double ptr [0x0058454a]        ; 004a612f | DOUBLE_0058454a
    MOV EAX,[0x005b9354]                ; 004a6135 | DAT_005b9354
    FMUL double ptr [0x00584552]        ; 004a613a | DOUBLE_00584552
    FLD float ptr [EAX + 0x264]         ; 004a6140 | DAT_01c77850
    FXCH                                ; 004a6146
    FMUL double ptr [0x0058455a]        ; 004a6148 | DOUBLE_0058455a
    FDIVRP                              ; 004a614e
    SUB ESP,0x8                         ; 004a6150
    FSTP double ptr [ESP]               ; 004a6153
    PUSH 0x5844c7                       ; 004a6156 | = "gScript->process()"
    PUSH 0x584486                       ; 004a615b | = "%s : %3.2f ms\n"
    MOV EDI,dword ptr [0x005ad350]      ; 004a6160 | PTR_DAT_005ad350
    PUSH EDI                            ; 004a6166 | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 004a6167
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    ADD ESP,0x14                        ; 004a616c
    CMP dword ptr [EBX + 0xcc],0x0      ; 004a616f
        ;   Label: LAB_004a616f
    JZ 0x004a618b                       ; 004a6176
        ;   XREF to: 004a618b (CONDITIONAL_JUMP)  ; LAB_004a618b
    MOV EAX,dword ptr [EBX + 0x228]     ; 004a6178
    TEST EAX,EAX                        ; 004a617e
    JZ 0x004a64d5                       ; 004a6180
        ;   XREF to: 004a64d5 (CONDITIONAL_JUMP)  ; LAB_004a64d5
    CALL engine_2d.c_clearInputAndWait_FUN_00403f50 ; 004a6186
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_clearInputAndWait_FUN_00403f50()
    MOV EAX,[0x005b9354]                ; 004a618b | DAT_005b9354
        ;   Label: LAB_004a618b
    CMP dword ptr [EAX + 0x20c],0x1     ; 004a6190 | DAT_01c777f8
    JNZ 0x004a61a3                      ; 004a6197
        ;   XREF to: 004a61a3 (CONDITIONAL_JUMP)  ; LAB_004a61a3
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 004a6199
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_00558a30()
    MOV [0x01c78b14],EAX                ; 004a619e | DAT_01c78b14
    MOV EAX,[0x005be368]                ; 004a61a3 | DAT_005be368
        ;   Label: LAB_004a61a3
    PUSH EAX                            ; 004a61a8 | DAT_01e57284
    CALL core_set.cpp_CDemonSet_process_FUN_0050d040 ; 004a61a9
        ;   XREF to: 0050d040 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_process_FUN_0050d040()
    MOV EAX,[0x005b9354]                ; 004a61ae | DAT_005b9354
    MOV EDX,dword ptr [EAX + 0x20c]     ; 004a61b3 | DAT_01c777f8
    ADD ESP,0x4                         ; 004a61b9
    CMP EDX,0x1                         ; 004a61bc
    JNZ 0x004a6216                      ; 004a61bf
        ;   XREF to: 004a6216 (CONDITIONAL_JUMP)  ; LAB_004a6216
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 004a61c1
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_00558a30()
    MOV ECX,dword ptr [0x01c78b14]      ; 004a61c6 | DAT_01c78b14
    SUB EAX,ECX                         ; 004a61cc
    MOV dword ptr [ESP + 0x8],EAX       ; 004a61ce
    FILD dword ptr [ESP + 0x8]          ; 004a61d2
    FMUL double ptr [0x0058454a]        ; 004a61d6 | DOUBLE_0058454a
    MOV EAX,[0x005b9354]                ; 004a61dc | DAT_005b9354
    FMUL double ptr [0x00584552]        ; 004a61e1 | DOUBLE_00584552
    FLD float ptr [EAX + 0x264]         ; 004a61e7 | DAT_01c77850
    FXCH                                ; 004a61ed
    FMUL double ptr [0x0058455a]        ; 004a61ef | DOUBLE_0058455a
    FDIVRP                              ; 004a61f5
    SUB ESP,0x8                         ; 004a61f7
    FSTP double ptr [ESP]               ; 004a61fa
    PUSH 0x5844da                       ; 004a61fd | = "gSet->process()"
    PUSH 0x584486                       ; 004a6202 | = "%s : %3.2f ms\n"
    MOV EDI,dword ptr [0x005ad350]      ; 004a6207 | PTR_DAT_005ad350
    PUSH EDI                            ; 004a620d | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 004a620e
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    ADD ESP,0x14                        ; 004a6213
    MOV EAX,[0x005b9354]                ; 004a6216 | DAT_005b9354
        ;   Label: LAB_004a6216
    CMP dword ptr [EAX + 0x20c],0x1     ; 004a621b | DAT_01c777f8
    JNZ 0x004a622e                      ; 004a6222
        ;   XREF to: 004a622e (CONDITIONAL_JUMP)  ; LAB_004a622e
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 004a6224
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_00558a30()
    MOV [0x01c78b14],EAX                ; 004a6229 | DAT_01c78b14
    MOV EAX,[0x005b96c4]                ; 004a622e | DAT_005b96c4
        ;   Label: LAB_004a622e
    PUSH EAX                            ; 004a6233
    CALL core_gore.cpp_CGore_process_FUN_004b0030 ; 004a6234
        ;   XREF to: 004b0030 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_CGore_process_FUN_004b0030()
    MOV EAX,[0x005b9354]                ; 004a6239 | DAT_005b9354
    MOV EDX,dword ptr [EAX + 0x20c]     ; 004a623e | DAT_01c777f8
    ADD ESP,0x4                         ; 004a6244
    CMP EDX,0x1                         ; 004a6247
    JNZ 0x004a62a1                      ; 004a624a
        ;   XREF to: 004a62a1 (CONDITIONAL_JUMP)  ; LAB_004a62a1
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 004a624c
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_00558a30()
    MOV ECX,dword ptr [0x01c78b14]      ; 004a6251 | DAT_01c78b14
    SUB EAX,ECX                         ; 004a6257
    MOV dword ptr [ESP + 0x8],EAX       ; 004a6259
    FILD dword ptr [ESP + 0x8]          ; 004a625d
    FMUL double ptr [0x0058454a]        ; 004a6261 | DOUBLE_0058454a
    MOV EAX,[0x005b9354]                ; 004a6267 | DAT_005b9354
    FMUL double ptr [0x00584552]        ; 004a626c | DOUBLE_00584552
    FLD float ptr [EAX + 0x264]         ; 004a6272 | DAT_01c77850
    FXCH                                ; 004a6278
    FMUL double ptr [0x0058455a]        ; 004a627a | DOUBLE_0058455a
    FDIVRP                              ; 004a6280
    SUB ESP,0x8                         ; 004a6282
    FSTP double ptr [ESP]               ; 004a6285
    PUSH 0x5844ea                       ; 004a6288 | = "gGore->process()"
    PUSH 0x584486                       ; 004a628d | = "%s : %3.2f ms\n"
    MOV EDI,dword ptr [0x005ad350]      ; 004a6292 | PTR_DAT_005ad350
    PUSH EDI                            ; 004a6298 | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 004a6299
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    ADD ESP,0x14                        ; 004a629e
    MOV EBP,dword ptr [0x005c11ec]      ; 004a62a1 | DAT_005c11ec
        ;   Label: LAB_004a62a1
    PUSH EBP                            ; 004a62a7 | DAT_02dd1210
    CALL core_water.cpp_CWater_process_FUN_00550860 ; 004a62a8
        ;   XREF to: 00550860 (UNCONDITIONAL_CALL)  ; undefined core_water.cpp_CWater_process_FUN_00550860()
    MOV EAX,[0x005b9354]                ; 004a62ad | DAT_005b9354
    MOV EDX,dword ptr [EAX + 0x20c]     ; 004a62b2 | DAT_01c777f8
    ADD ESP,0x4                         ; 004a62b8
    CMP EDX,0x1                         ; 004a62bb
    JNZ 0x004a62ca                      ; 004a62be
        ;   XREF to: 004a62ca (CONDITIONAL_JUMP)  ; LAB_004a62ca
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 004a62c0
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_00558a30()
    MOV [0x01c78b14],EAX                ; 004a62c5 | DAT_01c78b14
    MOV ECX,dword ptr [0x005b80f0]      ; 004a62ca | DAT_005b80f0
        ;   Label: LAB_004a62ca
    PUSH ECX                            ; 004a62d0
    CALL core_fire.cpp_CFireEffect_process_FUN_0048a390 ; 004a62d1
        ;   XREF to: 0048a390 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CFireEffect_process_FUN_0048a390()
    MOV EAX,[0x005b9354]                ; 004a62d6 | DAT_005b9354
    MOV EDI,dword ptr [EAX + 0x20c]     ; 004a62db | DAT_01c777f8
    ADD ESP,0x4                         ; 004a62e1
    CMP EDI,0x1                         ; 004a62e4
    JNZ 0x004a633d                      ; 004a62e7
        ;   XREF to: 004a633d (CONDITIONAL_JUMP)  ; LAB_004a633d
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 004a62e9
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_00558a30()
    MOV EBP,dword ptr [0x01c78b14]      ; 004a62ee | DAT_01c78b14
    SUB EAX,EBP                         ; 004a62f4
    MOV dword ptr [ESP + 0x8],EAX       ; 004a62f6
    FILD dword ptr [ESP + 0x8]          ; 004a62fa
    FMUL double ptr [0x0058454a]        ; 004a62fe | DOUBLE_0058454a
    MOV EAX,[0x005b9354]                ; 004a6304 | DAT_005b9354
    FMUL double ptr [0x00584552]        ; 004a6309 | DOUBLE_00584552
    FLD float ptr [EAX + 0x264]         ; 004a630f | DAT_01c77850
    FXCH                                ; 004a6315
    FMUL double ptr [0x0058455a]        ; 004a6317 | DOUBLE_0058455a
    FDIVRP                              ; 004a631d
    SUB ESP,0x8                         ; 004a631f
    FSTP double ptr [ESP]               ; 004a6322
    PUSH 0x5844fb                       ; 004a6325 | = "gFire->process()"
    PUSH 0x584486                       ; 004a632a | = "%s : %3.2f ms\n"
    MOV EAX,[0x005ad350]                ; 004a632f | PTR_DAT_005ad350
    PUSH EAX                            ; 004a6334 | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 004a6335
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    ADD ESP,0x14                        ; 004a633a
    MOV EAX,[0x005b9354]                ; 004a633d | DAT_005b9354
        ;   Label: LAB_004a633d
    CMP dword ptr [EAX + 0x20c],0x1     ; 004a6342 | DAT_01c777f8
    JNZ 0x004a6355                      ; 004a6349
        ;   XREF to: 004a6355 (CONDITIONAL_JUMP)  ; LAB_004a6355
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 004a634b
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_00558a30()
    MOV [0x01c78b14],EAX                ; 004a6350 | DAT_01c78b14
    MOV ECX,dword ptr [0x005b7650]      ; 004a6355 | DAT_005b7650
        ;   Label: LAB_004a6355
    PUSH ECX                            ; 004a635b
    CALL core_event.cpp_CEventList_process_FUN_0047aa50 ; 004a635c
        ;   XREF to: 0047aa50 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_CEventList_process_FUN_0047aa50()
    MOV EAX,[0x005b9354]                ; 004a6361 | DAT_005b9354
    MOV EDI,dword ptr [EAX + 0x20c]     ; 004a6366 | DAT_01c777f8
    ADD ESP,0x4                         ; 004a636c
    CMP EDI,0x1                         ; 004a636f
    JNZ 0x004a63c8                      ; 004a6372
        ;   XREF to: 004a63c8 (CONDITIONAL_JUMP)  ; LAB_004a63c8
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 004a6374
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_00558a30()
    MOV EBP,dword ptr [0x01c78b14]      ; 004a6379 | DAT_01c78b14
    SUB EAX,EBP                         ; 004a637f
    MOV dword ptr [ESP + 0x8],EAX       ; 004a6381
    FILD dword ptr [ESP + 0x8]          ; 004a6385
    FMUL double ptr [0x0058454a]        ; 004a6389 | DOUBLE_0058454a
    MOV EAX,[0x005b9354]                ; 004a638f | DAT_005b9354
    FMUL double ptr [0x00584552]        ; 004a6394 | DOUBLE_00584552
    FLD float ptr [EAX + 0x264]         ; 004a639a | DAT_01c77850
    FXCH                                ; 004a63a0
    FMUL double ptr [0x0058455a]        ; 004a63a2 | DOUBLE_0058455a
    FDIVRP                              ; 004a63a8
    SUB ESP,0x8                         ; 004a63aa
    FSTP double ptr [ESP]               ; 004a63ad
    PUSH 0x58450c                       ; 004a63b0 | = "gEventList->process()"
    PUSH 0x584486                       ; 004a63b5 | = "%s : %3.2f ms\n"
    MOV EAX,[0x005ad350]                ; 004a63ba | PTR_DAT_005ad350
    PUSH EAX                            ; 004a63bf | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 004a63c0
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    ADD ESP,0x14                        ; 004a63c5
    MOV EDX,dword ptr [0x005c1144]      ; 004a63c8 | DAT_005c1144
        ;   Label: LAB_004a63c8
    PUSH EDX                            ; 004a63ce
    CALL core_terrain.cpp_CTerrain_process_FUN_00549410 ; 004a63cf
        ;   XREF to: 00549410 (UNCONDITIONAL_CALL)  ; undefined core_terrain.cpp_CTerrain_process_FUN_00549410()
    ADD ESP,0x4                         ; 004a63d4
    MOV ECX,dword ptr [0x005c15b8]      ; 004a63d7 | DAT_005c15b8
    PUSH ECX                            ; 004a63dd
    CALL core_weather.cpp_CWeather_update_FUN_00554980 ; 004a63de
        ;   XREF to: 00554980 (UNCONDITIONAL_CALL)  ; undefined core_weather.cpp_CWeather_update_FUN_00554980()
    ADD ESP,0x4                         ; 004a63e3
    PUSH EBX                            ; 004a63e6
    CALL core_game.cpp_CGame_processCheatCodes_FUN_004a0550 ; 004a63e7
        ;   XREF to: 004a0550 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_CGame_processCheatCodes_FUN_004a0550()
    ADD ESP,0x4                         ; 004a63ec
    MOV EDI,dword ptr [0x005be368]      ; 004a63ef | DAT_005be368
    PUSH EDI                            ; 004a63f5 | DAT_01e57284
    CALL core_set.cpp_CDemonSet_processActors_FUN_00509140 ; 004a63f6
        ;   XREF to: 00509140 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_processActors_FUN_00509140()
    MOV EAX,[0x005b9354]                ; 004a63fb | DAT_005b9354
    MOV EBP,dword ptr [EAX + 0x20c]     ; 004a6400 | DAT_01c777f8
    ADD ESP,0x4                         ; 004a6406
    CMP EBP,0x1                         ; 004a6409
    JNZ 0x004a6418                      ; 004a640c
        ;   XREF to: 004a6418 (CONDITIONAL_JUMP)  ; LAB_004a6418
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 004a640e
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_00558a30()
    MOV [0x01c78b14],EAX                ; 004a6413 | DAT_01c78b14
    MOV EAX,[0x005baf90]                ; 004a6418 | DAT_005baf90
        ;   Label: LAB_004a6418
    PUSH EAX                            ; 004a641d
    CALL core_mission.cpp_CDemonMission_process_FUN_004d92a0 ; 004a641e
        ;   XREF to: 004d92a0 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_CDemonMission_process_FUN_004d92a0()
    MOV EAX,[0x005b9354]                ; 004a6423 | DAT_005b9354
    MOV EDX,dword ptr [EAX + 0x20c]     ; 004a6428 | DAT_01c777f8
    ADD ESP,0x4                         ; 004a642e
    CMP EDX,0x1                         ; 004a6431
    JNZ 0x004a648b                      ; 004a6434
        ;   XREF to: 004a648b (CONDITIONAL_JUMP)  ; LAB_004a648b
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 004a6436
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_00558a30()
    MOV ECX,dword ptr [0x01c78b14]      ; 004a643b | DAT_01c78b14
    SUB EAX,ECX                         ; 004a6441
    MOV dword ptr [ESP + 0x8],EAX       ; 004a6443
    FILD dword ptr [ESP + 0x8]          ; 004a6447
    FMUL double ptr [0x0058454a]        ; 004a644b | DOUBLE_0058454a
    MOV EAX,[0x005b9354]                ; 004a6451 | DAT_005b9354
    FMUL double ptr [0x00584552]        ; 004a6456 | DOUBLE_00584552
    FLD float ptr [EAX + 0x264]         ; 004a645c | DAT_01c77850
    FXCH                                ; 004a6462
    FMUL double ptr [0x0058455a]        ; 004a6464 | DOUBLE_0058455a
    FDIVRP                              ; 004a646a
    SUB ESP,0x8                         ; 004a646c
    FSTP double ptr [ESP]               ; 004a646f
    PUSH 0x584522                       ; 004a6472 | = "gSit->process()"
    PUSH 0x584486                       ; 004a6477 | = "%s : %3.2f ms\n"
    MOV EDI,dword ptr [0x005ad350]      ; 004a647c | PTR_DAT_005ad350
    PUSH EDI                            ; 004a6482 | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 004a6483
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    ADD ESP,0x14                        ; 004a6488
    MOV EAX,[0x005b9354]                ; 004a648b | DAT_005b9354
        ;   Label: LAB_004a648b
    MOV dword ptr [EBX + 0x23c],0x0     ; 004a6490
    CMP dword ptr [EAX + 0x20c],0x0     ; 004a649a | DAT_01c777f8
    JNZ 0x004a651e                      ; 004a64a1
        ;   XREF to: 004a651e (CONDITIONAL_JUMP)  ; LAB_004a651e
    FLD float ptr [EBX + 0x264]         ; 004a64a3
        ;   Label: LAB_004a64a3
    FADD float ptr [EBX + 0x250]        ; 004a64a9
    FSTP float ptr [EBX + 0x250]        ; 004a64af
    ADD ESP,0xc                         ; 004a64b5
    POP EBP                             ; 004a64b8
    POP EDI                             ; 004a64b9
    POP ESI                             ; 004a64ba
    POP EBX                             ; 004a64bb
    RET                                 ; 004a64bc
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 004a64bd
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_00558a30()
        ;   Label: LAB_004a64bd
    MOV ESI,EAX                         ; 004a64c2
    JMP 0x004a6028                      ; 004a64c4
        ;   XREF to: 004a6028 (UNCONDITIONAL_JUMP)  ; LAB_004a6028
    MOV EDI,dword ptr [EAX + 0x16c]     ; 004a64c9 | DAT_01cea3ec
        ;   Label: LAB_004a64c9
    PUSH EDI                            ; 004a64cf
    JMP 0x004a6046                      ; 004a64d0
        ;   XREF to: 004a6046 (UNCONDITIONAL_JUMP)  ; LAB_004a6046
    MOV EDX,dword ptr [0x005bed68]      ; 004a64d5 | DAT_005bed68
        ;   Label: LAB_004a64d5
    PUSH EDX                            ; 004a64db
    MOV dword ptr [EBX + 0xcc],EAX      ; 004a64dc
    CALL core_sound.cpp_CSound_init_FUN_0052ddf0 ; 004a64e2
        ;   XREF to: 0052ddf0 (UNCONDITIONAL_CALL)  ; undefined core_sound.cpp_CSound_init_FUN_0052ddf0()
    ADD ESP,0x4                         ; 004a64e7
    MOV EAX,[0x005be220]                ; 004a64ea | DAT_005be220
    PUSH 0x2                            ; 004a64ef
    MOV ECX,dword ptr [EAX + 0xc]       ; 004a64f1 | DAT_01e56dac
    PUSH ECX                            ; 004a64f4
    MOV EDI,dword ptr [0x005be368]      ; 004a64f5 | DAT_005be368
    PUSH EDI                            ; 004a64fb | DAT_01e57284
    CALL FUN_005125a0                   ; 004a64fc
        ;   XREF to: 005125a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005125a0()
    ADD ESP,0xc                         ; 004a6501
    PUSH EBX                            ; 004a6504
    CALL core_game.cpp_CGame_saveClockTime_FUN_0049a890 ; 004a6505
        ;   XREF to: 0049a890 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_CGame_saveClockTime_FUN_0049a890()
    MOV EAX,[0x005be220]                ; 004a650a | DAT_005be220
    ADD ESP,0x4                         ; 004a650f
    MOV dword ptr [EAX + 0x10],0x0      ; 004a6512 | DAT_01e56db0
    JMP 0x004a618b                      ; 004a6519
        ;   XREF to: 004a618b (UNCONDITIONAL_JUMP)  ; LAB_004a618b
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 004a651e
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_00558a30()
        ;   Label: LAB_004a651e
    SUB EAX,ESI                         ; 004a6523
    MOV dword ptr [ESP + 0x8],EAX       ; 004a6525
    FILD dword ptr [ESP + 0x8]          ; 004a6529
    FMUL double ptr [0x0058454a]        ; 004a652d | DOUBLE_0058454a
    MOV EAX,[0x005b9354]                ; 004a6533 | DAT_005b9354
    FMUL double ptr [0x00584552]        ; 004a6538 | DOUBLE_00584552
    FLD float ptr [EAX + 0x264]         ; 004a653e | DAT_01c77850
    FXCH                                ; 004a6544
    FMUL double ptr [0x0058455a]        ; 004a6546 | DOUBLE_0058455a
    FDIVRP                              ; 004a654c
    SUB ESP,0x8                         ; 004a654e
    FSTP double ptr [ESP]               ; 004a6551
    PUSH 0x584532                       ; 004a6554 | = "simulate : %3.2f ms\n"
    MOV EAX,[0x005ad350]                ; 004a6559 | PTR_DAT_005ad350
    PUSH EAX                            ; 004a655e | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 004a655f
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    ADD ESP,0x10                        ; 004a6564
    JMP 0x004a64a3                      ; 004a6567
        ;   XREF to: 004a64a3 (UNCONDITIONAL_JUMP)  ; LAB_004a64a3

