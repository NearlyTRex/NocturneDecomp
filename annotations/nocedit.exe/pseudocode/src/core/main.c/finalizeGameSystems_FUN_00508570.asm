; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_main_c_finalizeGameSystems_FUN_00508570(void)
;
; Local Variables:
; undefined1       Stack[-0x110]:1  local_110
;
; XREF[1]:
;   wincore_winrun.cpp_winMain_FUN_005f3680 at 005f3905
;
; Referenced Globals:
;   TerminatedCString s_load_d_006355e6
;   TerminatedCString s_In_stores_10_26_99_006355ed
;   TerminatedCString s_www_nocturnegame_com_00635600
;   TerminatedCString s_Press_any_key_to_continu_00635615
;   TerminatedCString s_core_main_c_00635632
;   TerminatedCString s_rb_00635641
;   TerminatedCString s_enemy_pod_00635644
;   char s_EmptyChar_0063564e = \x00
;   TerminatedCString s_core_main_c_0063564f
;   TerminatedCString s_core_main_c_0063565e
;   CKeys* g_CKeysPtr = 02dcd7d4
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CNetGame* g_CNetGamePtr = 02f7c740
;   void* PTR_g_SpecialBitmapsInstance_00680b80 = 02fd8a80
;   CDemonPod* g_CDemonPodPtr = 030e5090
;   ... and 12 more
;
; Called Functions:
;   core_dfont.cpp_freeFonts_FUN_004710a0
;   core_dmodel.cpp_freeAllModels_FUN_00478cb0
;   core_inivar.cpp_writeIniData_FUN_004fc510
;   core_mission.cpp_CDemonMission_checkMemory_FUN_00522d20
;   core_netgame.cpp_CNetGame_FUN_0053f830
;   core_skeleton.cpp_freeAllModels_FUN_005a1dc0
;   core_skeleton.cpp_freeAllSkeletons_FUN_005a1ea0
;   core_sound.cpp_CSound_dtor_FUN_005aaeb0
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   crt_stdlib.c_rand_FUN_005feb5c
;   engine_2d.c_cleanupGraphicsSystem_FUN_005ecd90
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950
;   engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0
;   ... and 17 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00508570
        ;   Label: core_main.c_finalizeGameSystems_FUN_00508570
    PUSH ESI                            ; 00508571
    PUSH EDI                            ; 00508572
    PUSH EBP                            ; 00508573
    SUB ESP,0x100                       ; 00508574
    PUSH 0x4f9                          ; 0050857a
    PUSH 0x635632                       ; 0050857f | = "..\\core\\main.c"
    CALL shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0 ; 00508584
        ;   XREF to: 0050efe0 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0(char * filename, int context)
    ADD ESP,0x8                         ; 00508589
    PUSH 0x635641                       ; 0050858c | = "rb"
    PUSH 0x635644                       ; 00508591 | = "enemy.pod"
    PUSH 0x63564e                       ; 00508596 | s_EmptyChar_0063564e
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 0050859b
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 005085a0
    TEST EAX,EAX                        ; 005085a3
    JNZ 0x00508843                      ; 005085a5
        ;   XREF to: 00508843 (CONDITIONAL_JUMP)  ; LAB_00508843
    PUSH 0x58                           ; 005085ab
    MOV EDX,dword ptr [0x020a5720]      ; 005085ad | g_ThemeFont
    PUSH EDX                            ; 005085b3
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 005085b4
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 005085b9
    MOV ESI,EAX                         ; 005085bc
    MOV EDI,EAX                         ; 005085be
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 005085c0
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 005085c5
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 005085ca
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005feb5c()
    AND EAX,0x3                         ; 005085cf
    INC EAX                             ; 005085d2
    PUSH EAX                            ; 005085d3
    PUSH 0x6355e6                       ; 005085d4 | = "load%d"
    LEA EAX,[ESP + 0x8]                 ; 005085d9
    PUSH EAX                            ; 005085dd
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005085de
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005085e3
    PUSH 0x1e0                          ; 005085e6
    PUSH 0x280                          ; 005085eb
    LEA EAX,[ESP + 0x8]                 ; 005085f0
    PUSH EAX                            ; 005085f4
    PUSH 0x2f0ca54                      ; 005085f5 | g_LoadingScreenBitmap1
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 ; 005085fa
        ;   XREF to: 004105d0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 005085ff
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00508602
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    PUSH 0xffff                         ; 00508607
    PUSH 0x0                            ; 0050860c
    PUSH 0x0                            ; 0050860e
    PUSH 0x2f0ca54                      ; 00508610 | g_LoadingScreenBitmap1
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950 ; 00508615
        ;   XREF to: 00410950 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 0050861a
    PUSH 0x6355ed                       ; 0050861d | = "In stores 10/26/99"
    MOV ECX,dword ptr [0x020a5718]      ; 00508622 | g_MediumFont
    PUSH ECX                            ; 00508628
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80 ; 00508629
        ;   XREF to: 004cfe80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont * this_ptr, char * text)
    MOV EDX,EAX                         ; 0050862e
    SAR EDX,0x1f                        ; 00508630
    SUB EAX,EDX                         ; 00508633
    SAR EAX,0x1                         ; 00508635
    ADD ESP,0x8                         ; 00508637
    PUSH 0x0                            ; 0050863a
    PUSH 0x7                            ; 0050863c
    MOV EDX,0x140                       ; 0050863e
    PUSH 0xdc                           ; 00508643
    SUB EDX,EAX                         ; 00508648
    PUSH EDX                            ; 0050864a
    PUSH 0x6355ed                       ; 0050864b | = "In stores 10/26/99"
    MOV EBX,dword ptr [0x020a5718]      ; 00508650 | g_MediumFont
    PUSH EBX                            ; 00508656
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 00508657
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
    ADD ESP,0x18                        ; 0050865c
    MOV EBX,0x1e0                       ; 0050865f
    PUSH 0x635600                       ; 00508664 | = "www.nocturnegame.com"
    SUB EBX,ESI                         ; 00508669
    MOV ESI,dword ptr [0x020a5718]      ; 0050866b | g_MediumFont
    PUSH ESI                            ; 00508671
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80 ; 00508672
        ;   XREF to: 004cfe80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont * this_ptr, char * text)
    MOV EDX,EAX                         ; 00508677
    SAR EDX,0x1f                        ; 00508679
    SUB EAX,EDX                         ; 0050867c
    SAR EAX,0x1                         ; 0050867e
    ADD ESP,0x8                         ; 00508680
    PUSH 0x0                            ; 00508683
    PUSH 0x7                            ; 00508685
    MOV EDX,0x140                       ; 00508687
    PUSH EBX                            ; 0050868c
    SUB EDX,EAX                         ; 0050868d
    PUSH EDX                            ; 0050868f
    PUSH 0x635600                       ; 00508690 | = "www.nocturnegame.com"
    MOV EBP,dword ptr [0x020a5718]      ; 00508695 | g_MediumFont
    PUSH EBP                            ; 0050869b
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 0050869c
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
    ADD ESP,0x18                        ; 005086a1
    MOV EBX,0xa0000                     ; 005086a4
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 005086a9
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 005086ae
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    MOV ESI,EAX                         ; 005086b3
    XOR EBP,EBP                         ; 005086b5
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 005086b7
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   Label: LAB_005086b7
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 005086bc
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    MOV ECX,EAX                         ; 005086c1
    SUB EAX,ESI                         ; 005086c3
    MOV EDX,EAX                         ; 005086c5
    MOV ESI,0x12                        ; 005086c7
    SAR EDX,0x1f                        ; 005086cc
    IDIV ESI                            ; 005086cf
    MOV [0x02cf6a80],EAX                ; 005086d1 | g_GlobalDeltaTimeInt
    CMP EBP,EAX                         ; 005086d6
    JLE 0x005086e0                      ; 005086d8
        ;   XREF to: 005086e0 (CONDITIONAL_JUMP)  ; LAB_005086e0
    MOV dword ptr [0x02cf6a80],EBP      ; 005086da | g_GlobalDeltaTimeInt
    MOV EDX,dword ptr [0x02cf6a80]      ; 005086e0 | g_GlobalDeltaTimeInt
        ;   Label: LAB_005086e0
    MOV ESI,ECX                         ; 005086e6
    CMP EDX,0x4000                      ; 005086e8
    JLE 0x005086fa                      ; 005086ee
        ;   XREF to: 005086fa (CONDITIONAL_JUMP)  ; LAB_005086fa
    MOV dword ptr [0x02cf6a80],0x4000   ; 005086f0 | g_GlobalDeltaTimeInt
    MOV EAX,[0x02cf6a80]                ; 005086fa | g_GlobalDeltaTimeInt
        ;   Label: LAB_005086fa
    PUSH 0x2a                           ; 005086ff
    SUB EBX,EAX                         ; 00508701
    MOV EAX,[0x0067cf44]                ; 00508703 | g_CKeysPtr
    PUSH EAX                            ; 00508708 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 00508709 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 0050870b
    ADD ESP,0x8                         ; 0050870d
    TEST EAX,EAX                        ; 00508710
    JZ 0x00508727                       ; 00508712
        ;   XREF to: 00508727 (CONDITIONAL_JUMP)  ; LAB_00508727
    PUSH 0x1                            ; 00508714
    MOV EAX,[0x0067cf44]                ; 00508716 | g_CKeysPtr
    PUSH EAX                            ; 0050871b | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0050871c | g_CKeysInstance
    CALL dword ptr [EDX]                ; 0050871e
    ADD ESP,0x8                         ; 00508720
    TEST EAX,EAX                        ; 00508723
    JNZ 0x0050872b                      ; 00508725
        ;   XREF to: 0050872b (CONDITIONAL_JUMP)  ; LAB_0050872b
    TEST EBX,EBX                        ; 00508727
        ;   Label: LAB_00508727
    JG 0x005086b7                       ; 00508729
        ;   XREF to: 005086b7 (CONDITIONAL_JUMP)  ; LAB_005086b7
    MOV EAX,0x1e0                       ; 0050872b
        ;   Label: LAB_0050872b
    LEA ESI,[EDI + EDI*0x1]             ; 00508730
    SUB EAX,ESI                         ; 00508733
    PUSH 0x635615                       ; 00508735 | = "Press any key to continue..."
    MOV ESI,EAX                         ; 0050873a
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 0050873c
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00508741
    PUSH EAX                            ; 00508744
    MOV EDX,dword ptr [0x020a5718]      ; 00508745 | g_MediumFont
    PUSH EDX                            ; 0050874b
    MOV EBX,EAX                         ; 0050874c
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80 ; 0050874e
        ;   XREF to: 004cfe80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont * this_ptr, char * text)
    MOV EDX,EAX                         ; 00508753
    SAR EDX,0x1f                        ; 00508755
    SUB EAX,EDX                         ; 00508758
    SAR EAX,0x1                         ; 0050875a
    ADD ESP,0x8                         ; 0050875c
    PUSH 0x0                            ; 0050875f
    PUSH 0x7                            ; 00508761
    MOV EDX,0x140                       ; 00508763
    PUSH ESI                            ; 00508768
    SUB EDX,EAX                         ; 00508769
    PUSH EDX                            ; 0050876b
    PUSH EBX                            ; 0050876c
    MOV ECX,dword ptr [0x020a5718]      ; 0050876d | g_MediumFont
    PUSH ECX                            ; 00508773
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 00508774
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
    ADD ESP,0x18                        ; 00508779
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0050877c
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00508781
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 00508786
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0050878b
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    PUSH 0x2f0ca54                      ; 00508790 | g_LoadingScreenBitmap1
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560 ; 00508795
        ;   XREF to: 00410560 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 0050879a
    PUSH 0x2f0ca68                      ; 0050879d | g_LoadingScreenBitmap2
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560 ; 005087a2
        ;   XREF to: 00410560 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 005087a7
    MOV EBX,dword ptr [0x00680a00]      ; 005087aa | g_CNetGameInstance | g_CNetGamePtr
        ;   Label: LAB_005087aa
    PUSH EBX                            ; 005087b0 | g_CNetGameInstance
    CALL core_netgame.cpp_CNetGame_FUN_0053f830 ; 005087b1
        ;   XREF to: 0053f830 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_CNetGame_FUN_0053f830()
    ADD ESP,0x4                         ; 005087b6
    MOV ESI,dword ptr [0x00680b80]      ; 005087b9 | PTR_g_SpecialBitmapsInstance_00680b80
    PUSH ESI                            ; 005087bf | g_CMouseInstance
    CALL support_newmsg.cpp_doNothing_FUN_00544500 ; 005087c0
        ;   XREF to: 00544500 (UNCONDITIONAL_CALL)  ; void support_newmsg.cpp_doNothing_FUN_00544500()
    ADD ESP,0x4                         ; 005087c5
    MOV EDI,dword ptr [0x0067d550]      ; 005087c8 | g_CDemonMissionPtr
    PUSH EDI                            ; 005087ce | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_checkMemory_FUN_00522d20 ; 005087cf
        ;   XREF to: 00522d20 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_checkMemory_FUN_00522d20(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 005087d4
    MOV EBP,dword ptr [0x00681ef8]      ; 005087d7 | g_CSoundPtr
    PUSH EBP                            ; 005087dd | g_CSoundInstance
    CALL core_sound.cpp_CSound_dtor_FUN_005aaeb0 ; 005087de
        ;   XREF to: 005b2d60 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_dtor_FUN_005aaeb0()
    ADD ESP,0x4                         ; 005087e3
    CALL core_dmodel.cpp_freeAllModels_FUN_00478cb0 ; 005087e6
        ;   XREF to: 00478cb0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_freeAllModels_FUN_00478cb0()
    CALL core_skeleton.cpp_freeAllModels_FUN_005a1dc0 ; 005087eb
        ;   XREF to: 005a1dc0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_freeAllModels_FUN_005a1dc0()
    CALL core_skeleton.cpp_freeAllSkeletons_FUN_005a1ea0 ; 005087f0
        ;   XREF to: 005a1ea0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_freeAllSkeletons_FUN_005a1ea0()
    CALL engine_matrix.c_doNothing_FUN_0050c5b0 ; 005087f5
        ;   XREF to: 0050c5b0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_doNothing_FUN_0050c5b0()
    CALL wincore_winrun.cpp_endPeriod_FUN_005f2db0 ; 005087fa
        ;   XREF to: 005f2db0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_endPeriod_FUN_005f2db0()
    CALL engine_2d.c_cleanupGraphicsSystem_FUN_005ecd90 ; 005087ff
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_cleanupGraphicsSystem_FUN_005ecd90()
    CALL wincore_wddvmem.cpp_freeTextureCache_FUN_005dd7a0 ; 00508804
        ;   XREF to: 004037a0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_freeTextureCache_FUN_005dd7a0()
    CALL core_dfont.cpp_freeFonts_FUN_004710a0 ; 00508809
        ;   XREF to: 004710a0 (UNCONDITIONAL_CALL)  ; void core_dfont.cpp_freeFonts_FUN_004710a0()
    CALL wincore_winrun.cpp_doNothing_FUN_005f4380 ; 0050880e
        ;   XREF to: 005f4380 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_doNothing_FUN_005f4380()
    MOV EAX,[0x00680cdc]                ; 00508813 | g_CDemonPodInstance | g_CDemonPodPtr
    PUSH EAX                            ; 00508818 | g_CDemonPodInstance
    CALL engine_pod.cpp_CPod_cleanup_FUN_00550c80 ; 00508819
        ;   XREF to: 00550c80 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPod_cleanup_FUN_00550c80(CPod * this_ptr)
    ADD ESP,0x4                         ; 0050881e
    CALL core_inivar.cpp_writeIniData_FUN_004fc510 ; 00508821
        ;   XREF to: 004fc510 (UNCONDITIONAL_CALL)  ; void core_inivar.cpp_writeIniData_FUN_004fc510()
    PUSH 0x530                          ; 00508826
    PUSH 0x63565e                       ; 0050882b | = "..\\core\\main.c"
    CALL shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0 ; 00508830
        ;   XREF to: 0050efe0 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0(char * filename, int context)
    ADD ESP,0x8                         ; 00508835
    ADD ESP,0x100                       ; 00508838
    POP EBP                             ; 0050883e
    POP EDI                             ; 0050883f
    POP ESI                             ; 00508840
    POP EBX                             ; 00508841
    RET                                 ; 00508842
    PUSH 0x503                          ; 00508843
        ;   Label: LAB_00508843
    PUSH 0x63564f                       ; 00508848 | = "..\\core\\main.c"
    PUSH EAX                            ; 0050884d
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0050884e
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00508853
    JMP 0x005087aa                      ; 00508856
        ;   XREF to: 005087aa (UNCONDITIONAL_JUMP)  ; LAB_005087aa

