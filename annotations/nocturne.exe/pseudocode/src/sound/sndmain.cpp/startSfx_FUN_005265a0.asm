; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl sound_sndmain_cpp_startSfx_FUN_005265a0(char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; Local Variables:
; undefined1       Stack[-0x38c]:1  local_38c
; undefined1       Stack[-0x38b]:1  local_38b
; undefined        Stack[-0x28c]:1  local_28c
; undefined        Stack[-0x18c]:1  local_18c
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[15]:
;   core_dracbrid.cpp_CDraculaBride_FUN_0045ab40 at 0045aff5
;   core_event.cpp_CEventList_restartSfxEntries_FUN_00480eb0 at 00480f09
;   core_fire.cpp_CFireball_onCollision_FUN_00484b60 at 00484c06
;   core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30 at 00494e6f
;   core_game.cpp_CGame_rollCredits_FUN_004a6e90 at 004a7212
;   core_lightgun.cpp_CLightGun_process_FUN_004c79a0 at 004c7c36
;   core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_004cb5a0 at 004cb704
;   core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_004cb740 at 004cb7ba
;   core_manpuz.cpp_updateGemHumChannel_FUN_004caef0 at 004cafe3
;   core_menu.cpp_configureSoundOptions_FUN_004d12e0 at 004d1d07
;   ... and 5 more
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005922b0
;   TerminatedCString s_SfxSlot_kill_must_be_loc_005922c5
;   TerminatedCString s_sound_00592778
;   TerminatedCString s_mp3_0059277e
;   TerminatedCString s_mp3_00592782
;   TerminatedCString s_mp3_00592787
;   TerminatedCString s_mp3_0059278b
;   TerminatedCString s_sound_00592790
;   TerminatedCString s_sound_sndmain_cpp_00592796
;   TerminatedCString s_Out_of_memory_005927ab
;   TerminatedCString s_rb_005927ba
;   TerminatedCString s_sound_005927bd
;   TerminatedCString s_startSfx_can_t_get_sampl_0059356d
;   float FLOAT_005a2174 = 2
;   int g_INT_005bea40 = 0x1
;   ... and 14 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   crt_math.c_round_FUN_00563a30
;   crt_memory.c_operator_new_FUN_0056497c
;   crt_stdio.c_ftell_FUN_00566e70
;   crt_string.c__stricmp_FUN_00564520
;   crt_string.c_splitpath_FUN_00566498
;   engine_dosio.cpp_getFile_FUN_00456a60
;   engine_dosio.cpp_getFileSize_FUN_004568c0
;   sound_mp3.cpp_CMP3Decoder_ctor_FUN_004e7d90
;   sound_mp3.cpp_CMP3Decoder_openFile_FUN_004e7df0
;   sound_sndmain.cpp_CSfxOptions_reset_FUN_00525eb0
;   sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_00523910
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00523a60
;   sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_00521e10
;   sound_sndmain.cpp_CSfxSample_pollStream_FUN_00523ea0
;   ... and 12 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005265a0
        ;   Label: sound_sndmain.cpp_startSfx_FUN_005265a0
    PUSH ESI                            ; 005265a1
    PUSH EDI                            ; 005265a2
    PUSH EBP                            ; 005265a3
    SUB ESP,0x37c                       ; 005265a4
    MOV EBX,dword ptr [0x02dc1ed8]      ; 005265aa | DAT_02dc1ed8
    MOV ESI,dword ptr [ESP + 0x390]     ; 005265b0
    TEST ESI,ESI                        ; 005265b7
    JZ 0x005265c0                       ; 005265b9
        ;   XREF to: 005265c0 (CONDITIONAL_JUMP)  ; LAB_005265c0
    CMP byte ptr [ESI],0x0              ; 005265bb
    JNZ 0x005265d3                      ; 005265be
        ;   XREF to: 005265d3 (CONDITIONAL_JUMP)  ; LAB_005265d3
    XOR EAX,EAX                         ; 005265c0
        ;   Label: LAB_005265c0
    MOV EBX,dword ptr [0x02dc1ed8]      ; 005265c2 | DAT_02dc1ed8
        ;   Label: LAB_005265c2
    ADD ESP,0x37c                       ; 005265c8
    POP EBP                             ; 005265ce
    POP EDI                             ; 005265cf
    POP ESI                             ; 005265d0
    POP EBX                             ; 005265d1
    RET                                 ; 005265d2
    CALL sound_sndmain.cpp_isSoundBusy_FUN_00528490 ; 005265d3
        ;   XREF to: 00528490 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSoundBusy_FUN_00528490()
        ;   Label: LAB_005265d3
    TEST EAX,EAX                        ; 005265d8
    JZ 0x005265c2                       ; 005265da
        ;   XREF to: 005265c2 (CONDITIONAL_JUMP)  ; LAB_005265c2
    LEA EAX,[ESP + 0x300]               ; 005265dc
    PUSH EAX                            ; 005265e3
    CALL sound_sndmain.cpp_CSfxOptions_reset_FUN_00525eb0 ; 005265e4
        ;   XREF to: 00525eb0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxOptions_reset_FUN_00525eb0(CSfxOptions * this_ptr)
    ADD ESP,0x4                         ; 005265e9
    MOV EDI,ESP                         ; 005265ec
    PUSH EDI                            ; 005265ee
    MOV AL,byte ptr [ESI]               ; 005265ef
        ;   Label: LAB_005265ef
    MOV byte ptr [EDI],AL               ; 005265f1
    CMP AL,0x0                          ; 005265f3
    JZ 0x00526607                       ; 005265f5
        ;   XREF to: 00526607 (CONDITIONAL_JUMP)  ; LAB_00526607
    MOV AL,byte ptr [ESI + 0x1]         ; 005265f7
    ADD ESI,0x2                         ; 005265fa
    MOV byte ptr [EDI + 0x1],AL         ; 005265fd
    ADD EDI,0x2                         ; 00526600
    CMP AL,0x0                          ; 00526603
    JNZ 0x005265ef                      ; 00526605
        ;   XREF to: 005265ef (CONDITIONAL_JUMP)  ; LAB_005265ef
    POP EDI                             ; 00526607
        ;   Label: LAB_00526607
    MOV EDX,dword ptr [0x02dc1b74]      ; 00526608 | DAT_02dc1b74
    LEA EAX,[EDX*0x4 + 0x0]             ; 0052660e
    SUB EAX,EDX                         ; 00526615
    SHL EAX,0x2                         ; 00526617
    MOV EDX,EAX                         ; 0052661a
    MOV ECX,0x1b                        ; 0052661c
    LEA EDI,[ESP + 0x300]               ; 00526621
    LEA ESI,[EDX + EAX*0x8 + 0x2dc1b78] ; 00526628
    MOVSD.REP ES:EDI,ESI                ; 0052662f
    MOV EDX,dword ptr [ESP + 0x300]     ; 00526631
    PUSH EDX                            ; 00526638
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_00527490 ; 00526639
        ;   XREF to: 00527490 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxChannelEnabled_FUN_00527490(int channel_index)
    ADD ESP,0x4                         ; 0052663e
    TEST EAX,EAX                        ; 00526641
    JZ 0x005265c2                       ; 00526643
        ;   XREF to: 005265c2 (CONDITIONAL_JUMP)  ; LAB_005265c2
    CALL sound_sndmain.cpp_lockSound_FUN_00528800 ; 00526649
        ;   XREF to: 00528800 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_00528800()
    CMP dword ptr [0x02dc84bc],0x0      ; 0052664e | DAT_02dc84bc
    JLE 0x00526881                      ; 00526655
        ;   XREF to: 00526881 (CONDITIONAL_JUMP)  ; LAB_00526881
    MOV EBP,dword ptr [0x02dbd3e4]      ; 0052665b | g_CSfxSlot_ARRAY_02dbd374[0].playback_state
        ;   Label: LAB_0052665b
    MOV EBX,dword ptr [0x02dc1ed8]      ; 00526661 | DAT_02dc1ed8
    XOR EAX,EAX                         ; 00526667
    XOR EDX,EDX                         ; 00526669
    TEST EBP,EBP                        ; 0052666b
    JZ 0x00526689                       ; 0052666d
        ;   XREF to: 00526689 (CONDITIONAL_JUMP)  ; LAB_00526689
    ADD EAX,0x120                       ; 0052666f
        ;   Label: LAB_0052666f
    INC EDX                             ; 00526674
    CMP EAX,0x4800                      ; 00526675
    JGE 0x005268a9                      ; 0052667a
        ;   XREF to: 005268a9 (CONDITIONAL_JUMP)  ; LAB_005268a9
    CMP dword ptr [EAX + 0x2dbd3e4],0x0 ; 00526680 | g_CSfxSlot_ARRAY_02dbd374[1].playback_state
    JNZ 0x0052666f                      ; 00526687
        ;   XREF to: 0052666f (CONDITIONAL_JUMP)  ; LAB_0052666f
    MOV dword ptr [ESP + 0x370],EDX     ; 00526689
        ;   Label: LAB_00526689
    MOV dword ptr [0x02dc1ed8],EBX      ; 00526690 | DAT_02dc1ed8
    TEST EDX,EDX                        ; 00526696
    JL 0x005268b3                       ; 00526698
        ;   XREF to: 005268b3 (CONDITIONAL_JUMP)  ; LAB_005268b3
    LEA EAX,[EDX*0x8 + 0x0]             ; 0052669e
    ADD EAX,EDX                         ; 005266a5
    MOV EBP,0x2dbd374                   ; 005266a7
    SHL EAX,0x5                         ; 005266ac
    ADD EBP,EAX                         ; 005266af
    MOV EAX,ESP                         ; 005266b1
    MOV ECX,0x1b                        ; 005266b3
    PUSH EAX                            ; 005266b8
    LEA ESI,[ESP + 0x304]               ; 005266b9
    MOV EDI,EBP                         ; 005266c0
    PUSH 0x592778                       ; 005266c2 | = "sound"
    MOVSD.REP ES:EDI,ESI                ; 005266c7 | g_CSfxSlot_ARRAY_02dbd374[1].options.channel_index | g_CMP3Decoder_02db4d18.synthesis_history[1][28][11]
    CALL engine_dosio.cpp_getFileSize_FUN_004568c0 ; 005266c9
        ;   XREF to: 004568c0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_004568c0(char * directory, char * filename)
    ADD ESP,0x8                         ; 005266ce
    CMP EAX,0x200000                    ; 005266d1
    JLE 0x005268cb                      ; 005266d6
        ;   XREF to: 005268cb (CONDITIONAL_JUMP)  ; LAB_005268cb
    MOV EAX,dword ptr [ESP + 0x370]     ; 005266dc
        ;   Label: LAB_005266dc
    MOV ESI,ESP                         ; 005266e3
    MOV EBX,dword ptr [0x02dc1ed8]      ; 005266e5 | DAT_02dc1ed8
    XOR EDX,EDX                         ; 005266eb
    MOV dword ptr [ESP + 0x36c],EAX     ; 005266ed
    XOR EDI,EDI                         ; 005266f4
    INC EBX                             ; 005266f6
        ;   Label: LAB_005266f6
    CMP EBX,0x40                        ; 005266f7
    JL 0x005266fe                       ; 005266fa
        ;   XREF to: 005266fe (CONDITIONAL_JUMP)  ; LAB_005266fe
    MOV EBX,EDI                         ; 005266fc
    IMUL EAX,EBX,0x168                  ; 005266fe
        ;   Label: LAB_005266fe
    CMP EDI,dword ptr [EAX + 0x2dc2004] ; 00526704 | g_CSfxSample_ARRAY_02dc1edc[1].taken
    JZ 0x00526930                       ; 0052670a
        ;   XREF to: 00526930 (CONDITIONAL_JUMP)  ; LAB_00526930
    INC EDX                             ; 00526710
        ;   Label: LAB_00526710
    CMP EDX,0x40                        ; 00526711
    JL 0x005266f6                       ; 00526714
        ;   XREF to: 005266f6 (CONDITIONAL_JUMP)  ; LAB_005266f6
    XOR EDI,EDI                         ; 00526716
    MOV dword ptr [ESP + 0x374],EDI     ; 00526718
    MOV EAX,dword ptr [ESP + 0x374]     ; 0052671f
        ;   Label: LAB_0052671f
    MOV dword ptr [0x02dc1ed8],EBX      ; 00526726 | DAT_02dc1ed8
    MOV dword ptr [ESP + 0x378],EAX     ; 0052672c
    TEST EAX,EAX                        ; 00526733
    JNZ 0x0052694f                      ; 00526735
        ;   XREF to: 0052694f (CONDITIONAL_JUMP)  ; LAB_0052694f
    MOV dword ptr [EBP + 0x74],EAX      ; 0052673b | g_CSfxSlot_ARRAY_02dbd374[1].sample
        ;   Label: LAB_0052673b
    MOV EDX,dword ptr [EBP + 0x74]      ; 0052673e | g_CSfxSlot_ARRAY_02dbd374[1].sample
    TEST EDX,EDX                        ; 00526741
    JZ 0x00526c1e                       ; 00526743
        ;   XREF to: 00526c1e (CONDITIONAL_JUMP)  ; LAB_00526c1e
    MOV ECX,dword ptr [EDX + 0x12c]     ; 00526749 | g_CSfxSample_ARRAY_02dc1edc[1].ref_count
    INC ECX                             ; 0052674f
    PUSH EBP                            ; 00526750 | g_CSfxSlot_ARRAY_02dbd374[1].options.channel_index
    MOV dword ptr [EDX + 0x12c],ECX     ; 00526751 | g_CSfxSample_ARRAY_02dc1edc[1].ref_count
    CALL sound_sndmain.cpp_CSfxSlot_seek_FUN_00525a80 ; 00526757
        ;   XREF to: 00525a80 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_seek_FUN_00525a80(CSfxSlot * this_ptr)
    MOV dword ptr [EBP + 0x114],0x0     ; 0052675c
    FLD float ptr [EBP + 0x44]          ; 00526766
    MOV dword ptr [EBP + 0x10c],0xbf800000 ; 00526769
    ADD ESP,0x4                         ; 00526773
    MOV dword ptr [EBP + 0x110],0x0     ; 00526776
    MOV EAX,EBP                         ; 00526780
    FSTP float ptr [EBP + 0x108]        ; 00526782
    LEA EDX,[EBP + 0x20]                ; 00526788
    ADD EAX,0x4                         ; 0052678b
        ;   Label: LAB_0052678b
    MOV dword ptr [EAX + 0xd8],0xffffffff ; 0052678e
    CMP EAX,EDX                         ; 00526798
    JNZ 0x0052678b                      ; 0052679a
        ;   XREF to: 0052678b (CONDITIONAL_JUMP)  ; LAB_0052678b
    MOV EAX,dword ptr [EBP + 0x74]      ; 0052679c | g_CSfxSlot_ARRAY_02dbd374[1].sample
    MOV ESI,dword ptr [0x005bea40]      ; 0052679f | g_INT_005bea40
    FLD float ptr [EAX + 0x114]         ; 005267a5
    INC ESI                             ; 005267ab
    MOV EAX,dword ptr [EBP + 0x74]      ; 005267ac | g_CSfxSlot_ARRAY_02dbd374[1].sample
    FSTP float ptr [EBP + 0xfc]         ; 005267af
    MOV dword ptr [0x005bea40],ESI      ; 005267b5 | g_INT_005bea40
    FLD float ptr [EAX + 0x118]         ; 005267bb
    MOV EAX,dword ptr [EBP + 0x74]      ; 005267c1 | g_CSfxSlot_ARRAY_02dbd374[1].sample
    FSTP float ptr [EBP + 0x100]        ; 005267c4
    MOV EDX,dword ptr [EAX + 0x11c]     ; 005267ca
    MOV dword ptr [EBP + 0x104],EDX     ; 005267d0
    CMP ESI,0xffffff                    ; 005267d6
    JL 0x005267e8                       ; 005267dc
        ;   XREF to: 005267e8 (CONDITIONAL_JUMP)  ; LAB_005267e8
    MOV dword ptr [0x005bea40],0x1      ; 005267de | g_INT_005bea40
    PUSH 0x4479c000                     ; 005267e8
        ;   Label: LAB_005267e8
    PUSH 0x4479c000                     ; 005267ed
    MOV EDX,dword ptr [EBP + 0x74]      ; 005267f2 | g_CSfxSlot_ARRAY_02dbd374[1].sample
    MOV ESI,dword ptr [0x005bea40]      ; 005267f5 | g_INT_005bea40
    PUSH EDX                            ; 005267fb
    MOV dword ptr [EBP + 0x70],ESI      ; 005267fc | g_CSfxSlot_ARRAY_02dbd374[1].playback_state
    CALL sound_sndmain.cpp_CSfxSample_pollStream_FUN_00523ea0 ; 005267ff
        ;   XREF to: 00523ea0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_pollStream_FUN_00523ea0(CSfxSample * this_ptr, float time_window, float update_interval)
    ADD ESP,0xc                         ; 00526804
    TEST EAX,EAX                        ; 00526807
    JZ 0x00526c2e                       ; 00526809
        ;   XREF to: 00526c2e (CONDITIONAL_JUMP)  ; LAB_00526c2e
    PUSH 0x0                            ; 0052680f
    PUSH EBP                            ; 00526811 | g_CSfxSlot_ARRAY_02dbd374[1].options.channel_index
    CALL sound_sndmain.cpp_CSfxSlot_compute_FUN_00524830 ; 00526812
        ;   XREF to: 00524830 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSlot_compute_FUN_00524830(CSfxSlot * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00526817
    CALL sound_sndmain.cpp_hasHardware3DSound_FUN_005284f0 ; 0052681a
        ;   XREF to: 005284f0 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_hasHardware3DSound_FUN_005284f0()
    TEST EAX,EAX                        ; 0052681f
    JZ 0x0052685d                       ; 00526821
        ;   XREF to: 0052685d (CONDITIONAL_JUMP)  ; LAB_0052685d
    MOV EDI,dword ptr [EBP + 0x74]      ; 00526823 | g_CSfxSlot_ARRAY_02dbd374[1].sample
    MOV ECX,dword ptr [EDI + 0x130]     ; 00526826
    MOV EAX,[0x02dc8318]                ; 0052682c | DAT_02dc8318
    PUSH ECX                            ; 00526831
    MOV EDX,dword ptr [EAX]             ; 00526832
    PUSH EAX                            ; 00526834
    CALL dword ptr [EDX + 0x3c]         ; 00526835
    ADD ESP,0x8                         ; 00526838
    MOV dword ptr [EBP + 0x6c],EAX      ; 0052683b | g_CSfxSlot_ARRAY_02dbd374[1].hardware_buffer_handle
    TEST EAX,EAX                        ; 0052683e
    JZ 0x00526c2e                       ; 00526840
        ;   XREF to: 00526c2e (CONDITIONAL_JUMP)  ; LAB_00526c2e
    PUSH EBP                            ; 00526846 | g_CSfxSlot_ARRAY_02dbd374[1].options.channel_index
    MOV EAX,[0x02dc8318]                ; 00526847 | DAT_02dc8318
    PUSH EAX                            ; 0052684c
    MOV EDX,dword ptr [EAX]             ; 0052684d
    CALL dword ptr [EDX + 0x48]         ; 0052684f
    ADD ESP,0x8                         ; 00526852
    TEST EAX,EAX                        ; 00526855
    JZ 0x00526c2e                       ; 00526857
        ;   XREF to: 00526c2e (CONDITIONAL_JUMP)  ; LAB_00526c2e
    CALL sound_sndmain.cpp_unlockSound_FUN_00528890 ; 0052685d
        ;   XREF to: 00528890 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00528890()
        ;   Label: LAB_0052685d
    MOV EAX,ESI                         ; 00526862
    MOV EBP,dword ptr [ESP + 0x370]     ; 00526864
    SHL EAX,0x6                         ; 0052686b
    OR EAX,EBP                          ; 0052686e
    MOV EBX,dword ptr [0x02dc1ed8]      ; 00526870 | DAT_02dc1ed8
    ADD ESP,0x37c                       ; 00526876
    POP EBP                             ; 0052687c
    POP EDI                             ; 0052687d
    POP ESI                             ; 0052687e
    POP EBX                             ; 0052687f
    RET                                 ; 00526880
    MOV ESI,0x5922b0                    ; 00526881 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00526881
    MOV EDI,0x1f6                       ; 00526886
    PUSH 0x5922c5                       ; 0052688b | = "SfxSlot::kill - must be locked!"
    MOV dword ptr [0x01cc4800],ESI      ; 00526890 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDI      ; 00526896 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0052689c
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 005268a1
    JMP 0x0052665b                      ; 005268a4
        ;   XREF to: 0052665b (UNCONDITIONAL_JUMP)  ; LAB_0052665b
    MOV EDX,0xffffffff                  ; 005268a9
        ;   Label: LAB_005268a9
    JMP 0x00526689                      ; 005268ae
        ;   XREF to: 00526689 (UNCONDITIONAL_JUMP)  ; LAB_00526689
    CALL sound_sndmain.cpp_unlockSound_FUN_00528890 ; 005268b3
        ;   XREF to: 00528890 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00528890()
        ;   Label: LAB_005268b3
    XOR EAX,EAX                         ; 005268b8
    MOV EBX,dword ptr [0x02dc1ed8]      ; 005268ba | DAT_02dc1ed8
    ADD ESP,0x37c                       ; 005268c0
    POP EBP                             ; 005268c6
    POP EDI                             ; 005268c7
    POP ESI                             ; 005268c8
    POP EBX                             ; 005268c9
    RET                                 ; 005268ca
    LEA EAX,[ESP + 0x200]               ; 005268cb
        ;   Label: LAB_005268cb
    PUSH EAX                            ; 005268d2
    PUSH 0x0                            ; 005268d3
    PUSH 0x0                            ; 005268d5
    PUSH 0x0                            ; 005268d7
    LEA EAX,[ESP + 0x10]                ; 005268d9
    PUSH EAX                            ; 005268dd
    CALL crt_string.c_splitpath_FUN_00566498 ; 005268de
        ;   XREF to: 00566498 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_00566498(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 005268e3
    PUSH 0x59277e                       ; 005268e6 | = "mp3"
    LEA EAX,[ESP + 0x204]               ; 005268eb
    PUSH EAX                            ; 005268f2
    CALL crt_string.c__stricmp_FUN_00564520 ; 005268f3
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 005268f8
    TEST EAX,EAX                        ; 005268fb
    JZ 0x005266dc                       ; 005268fd
        ;   XREF to: 005266dc (CONDITIONAL_JUMP)  ; LAB_005266dc
    PUSH 0x592782                       ; 00526903 | = ".mp3"
    LEA EAX,[ESP + 0x204]               ; 00526908
    PUSH EAX                            ; 0052690f
    CALL crt_string.c__stricmp_FUN_00564520 ; 00526910
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 00526915
    TEST EAX,EAX                        ; 00526918
    JZ 0x005266dc                       ; 0052691a
        ;   XREF to: 005266dc (CONDITIONAL_JUMP)  ; LAB_005266dc
    MOV EAX,ESP                         ; 00526920
    PUSH EAX                            ; 00526922
    CALL sound_sndmain.cpp_getSfxSample_FUN_00522480 ; 00526923
        ;   XREF to: 00522480 (UNCONDITIONAL_CALL)  ; CSfxSample * sound_sndmain.cpp_getSfxSample_FUN_00522480(char * filename)
    ADD ESP,0x4                         ; 00526928
    JMP 0x0052673b                      ; 0052692b
        ;   XREF to: 0052673b (UNCONDITIONAL_JUMP)  ; LAB_0052673b
    CMP EDI,dword ptr [EAX + 0x2dc2008] ; 00526930 | g_CSfxSample_ARRAY_02dc1edc[1].ref_count
        ;   Label: LAB_00526930
    JNZ 0x00526710                      ; 00526936
        ;   XREF to: 00526710 (CONDITIONAL_JUMP)  ; LAB_00526710
    MOV EDX,0x2dc1edc                   ; 0052693c
    ADD EDX,EAX                         ; 00526941
    MOV dword ptr [ESP + 0x374],EDX     ; 00526943
    JMP 0x0052671f                      ; 0052694a
        ;   XREF to: 0052671f (UNCONDITIONAL_JUMP)  ; LAB_0052671f
    LEA EAX,[ESP + 0x100]               ; 0052694f
        ;   Label: LAB_0052694f
    PUSH EAX                            ; 00526956
    PUSH 0x0                            ; 00526957
    PUSH 0x0                            ; 00526959
    PUSH 0x0                            ; 0052695b
    PUSH ESI                            ; 0052695d
    CALL crt_string.c_splitpath_FUN_00566498 ; 0052695e
        ;   XREF to: 00566498 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_00566498(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 00526963
    PUSH 0x592787                       ; 00526966 | = "mp3"
    LEA EAX,[ESP + 0x104]               ; 0052696b
    PUSH EAX                            ; 00526972
    CALL crt_string.c__stricmp_FUN_00564520 ; 00526973
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 00526978
    TEST EAX,EAX                        ; 0052697b
    JNZ 0x00526aeb                      ; 0052697d
        ;   XREF to: 00526aeb (CONDITIONAL_JUMP)  ; LAB_00526aeb
    PUSH ESI                            ; 00526983
        ;   Label: LAB_00526983
    PUSH 0x592790                       ; 00526984 | = "sound"
    CALL engine_dosio.cpp_getFileSize_FUN_004568c0 ; 00526989
        ;   XREF to: 004568c0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_004568c0(char * directory, char * filename)
    ADD ESP,0x8                         ; 0052698e
    TEST EAX,EAX                        ; 00526991
    JLE 0x00526c07                      ; 00526993
        ;   XREF to: 00526c07 (CONDITIONAL_JUMP)  ; LAB_00526c07
    PUSH 0x8630                         ; 00526999
    CALL crt_memory.c_operator_new_FUN_0056497c ; 0052699e
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; void * crt_memory.c_operator_new_FUN_0056497c(ulong size)
    ADD ESP,0x4                         ; 005269a3
    TEST EAX,EAX                        ; 005269a6
    JZ 0x005269b3                       ; 005269a8
        ;   XREF to: 005269b3 (CONDITIONAL_JUMP)  ; LAB_005269b3
    PUSH EAX                            ; 005269aa
    CALL sound_mp3.cpp_CMP3Decoder_ctor_FUN_004e7d90 ; 005269ab
        ;   XREF to: 004e7d90 (UNCONDITIONAL_CALL)  ; CMP3Decoder * sound_mp3.cpp_CMP3Decoder_ctor_FUN_004e7d90(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 005269b0
    MOV EDX,dword ptr [ESP + 0x378]     ; 005269b3
        ;   Label: LAB_005269b3
    MOV dword ptr [EDX + 0x144],EAX     ; 005269ba
    TEST EAX,EAX                        ; 005269c0
    JNZ 0x005269e6                      ; 005269c2
        ;   XREF to: 005269e6 (CONDITIONAL_JUMP)  ; LAB_005269e6
    MOV EDI,0x592796                    ; 005269c4 | = "..\\sound\\sndmain.cpp"
    MOV EAX,0x3c8                       ; 005269c9
    PUSH 0x5927ab                       ; 005269ce | = "Out of memory."
    MOV dword ptr [0x01cc4800],EDI      ; 005269d3 | g_CurrentFilename
    MOV [0x01cc4804],EAX                ; 005269d9 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 005269de
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 005269e3
    MOV EAX,dword ptr [ESP + 0x378]     ; 005269e6
        ;   Label: LAB_005269e6
    PUSH ESI                            ; 005269ed
    MOV EDX,dword ptr [EAX + 0x144]     ; 005269ee
    PUSH EDX                            ; 005269f4
    CALL sound_mp3.cpp_CMP3Decoder_openFile_FUN_004e7df0 ; 005269f5
        ;   XREF to: 004e7df0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_openFile_FUN_004e7df0(CMP3Decoder * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005269fa
    MOV EDI,dword ptr [ESP + 0x378]     ; 005269fd
    PUSH EDI                            ; 00526a04
    MOV AL,byte ptr [ESI]               ; 00526a05
        ;   Label: LAB_00526a05
    MOV byte ptr [EDI],AL               ; 00526a07
    CMP AL,0x0                          ; 00526a09
    JZ 0x00526a1d                       ; 00526a0b
        ;   XREF to: 00526a1d (CONDITIONAL_JUMP)  ; LAB_00526a1d
    MOV AL,byte ptr [ESI + 0x1]         ; 00526a0d
    ADD ESI,0x2                         ; 00526a10
    MOV byte ptr [EDI + 0x1],AL         ; 00526a13
    ADD EDI,0x2                         ; 00526a16
    CMP AL,0x0                          ; 00526a19
    JNZ 0x00526a05                      ; 00526a1b
        ;   XREF to: 00526a05 (CONDITIONAL_JUMP)  ; LAB_00526a05
    POP EDI                             ; 00526a1d
        ;   Label: LAB_00526a1d
    MOV dword ptr [EDI + 0x100],0x1     ; 00526a1e
    MOV EAX,dword ptr [EDI + 0x144]     ; 00526a28
    MOV dword ptr [EDI + 0x104],0x10    ; 00526a2e
    MOV EAX,dword ptr [EAX + 0x104]     ; 00526a38
    MOV dword ptr [EDI + 0x108],EAX     ; 00526a3e
    MOV EAX,dword ptr [EDI + 0x144]     ; 00526a44
    MOV EAX,dword ptr [EAX + 0x100]     ; 00526a4a
    MOV dword ptr [EDI + 0x110],0xffffffff ; 00526a50
    PUSH EDI                            ; 00526a5a
    MOV dword ptr [EDI + 0x10c],EAX     ; 00526a5b
    CALL sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_00521e10 ; 00526a61
        ;   XREF to: 00521e10 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_00521e10(CSfxSample * this_ptr)
    MOV dword ptr [EDI + 0x128],0x0     ; 00526a66
    MOV dword ptr [EDI + 0x12c],0x0     ; 00526a70
    FILD dword ptr [EDI + 0x10c]        ; 00526a7a
    MOV dword ptr [EDI + 0x130],0x0     ; 00526a80
    FMUL float ptr [0x005a2174]         ; 00526a8a | FLOAT_005a2174
    MOV dword ptr [EDI + 0x13c],0x0     ; 00526a90
    ADD ESP,0x4                         ; 00526a9a
    MOV dword ptr [EDI + 0x140],0x0     ; 00526a9d
    MOV EAX,dword ptr [ESP + 0x36c]     ; 00526aa7
    PUSH EDI                            ; 00526aae
    CALL crt_math.c_round_FUN_00563a30  ; 00526aaf
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [EDI + 0x138]       ; 00526ab4
    MOV dword ptr [EDI + 0x134],EAX     ; 00526aba
    CALL sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_00523910 ; 00526ac0
        ;   XREF to: 00523910 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_00523910(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 00526ac5
    TEST EAX,EAX                        ; 00526ac8
    JZ 0x00526c07                       ; 00526aca
        ;   XREF to: 00526c07 (CONDITIONAL_JUMP)  ; LAB_00526c07
    PUSH 0x0                            ; 00526ad0
        ;   Label: LAB_00526ad0
    PUSH 0x0                            ; 00526ad2
    MOV EDI,dword ptr [ESP + 0x380]     ; 00526ad4
    PUSH EDI                            ; 00526adb
    CALL sound_sndmain.cpp_CSfxSample_seek_FUN_00523d10 ; 00526adc
        ;   XREF to: 00523d10 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_seek_FUN_00523d10(CSfxSample * this_ptr, int playback_position, int dest_buffer_offset)
    ADD ESP,0xc                         ; 00526ae1
    MOV EAX,EDI                         ; 00526ae4
    JMP 0x0052673b                      ; 00526ae6
        ;   XREF to: 0052673b (UNCONDITIONAL_JUMP)  ; LAB_0052673b
    PUSH 0x59278b                       ; 00526aeb | = ".mp3"
        ;   Label: LAB_00526aeb
    LEA EAX,[ESP + 0x104]               ; 00526af0
    PUSH EAX                            ; 00526af7
    CALL crt_string.c__stricmp_FUN_00564520 ; 00526af8
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 00526afd
    TEST EAX,EAX                        ; 00526b00
    JZ 0x00526983                       ; 00526b02
        ;   XREF to: 00526983 (CONDITIONAL_JUMP)  ; LAB_00526983
    PUSH 0x5927ba                       ; 00526b08 | = "rb"
    PUSH ESI                            ; 00526b0d
    PUSH 0x5927bd                       ; 00526b0e | = "sound"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 00526b13
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00456a60(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00526b18
    MOV EDX,dword ptr [ESP + 0x374]     ; 00526b1b
    MOV dword ptr [EDX + 0x14c],EAX     ; 00526b22
    TEST EAX,EAX                        ; 00526b28
    JZ 0x00526c07                       ; 00526b2a
        ;   XREF to: 00526c07 (CONDITIONAL_JUMP)  ; LAB_00526c07
    MOV EDI,EDX                         ; 00526b30
    PUSH EDI                            ; 00526b32
    MOV AL,byte ptr [ESI]               ; 00526b33
        ;   Label: LAB_00526b33
    MOV byte ptr [EDI],AL               ; 00526b35
    CMP AL,0x0                          ; 00526b37
    JZ 0x00526b4b                       ; 00526b39
        ;   XREF to: 00526b4b (CONDITIONAL_JUMP)  ; LAB_00526b4b
    MOV AL,byte ptr [ESI + 0x1]         ; 00526b3b
    ADD ESI,0x2                         ; 00526b3e
    MOV byte ptr [EDI + 0x1],AL         ; 00526b41
    ADD EDI,0x2                         ; 00526b44
    CMP AL,0x0                          ; 00526b47
    JNZ 0x00526b33                      ; 00526b49
        ;   XREF to: 00526b33 (CONDITIONAL_JUMP)  ; LAB_00526b33
    POP EDI                             ; 00526b4b
        ;   Label: LAB_00526b4b
    MOV ECX,dword ptr [EDX + 0x14c]     ; 00526b4c
    PUSH ECX                            ; 00526b52
    CALL crt_stdio.c_ftell_FUN_00566e70 ; 00526b53
        ;   XREF to: 00566e70 (UNCONDITIONAL_CALL)  ; long crt_stdio.c_ftell_FUN_00566e70(_FILE * file_handle)
    ADD ESP,0x4                         ; 00526b58
    MOV EDX,EDI                         ; 00526b5b
    PUSH EDI                            ; 00526b5d
    MOV dword ptr [EDX + 0x148],EAX     ; 00526b5e
    LEA EAX,[EDI + 0x148]               ; 00526b64
    PUSH EAX                            ; 00526b6a
    MOV EDI,dword ptr [EDI + 0x14c]     ; 00526b6b
    PUSH EDI                            ; 00526b71
    CALL sound_sndmain.cpp_parseWavFile_FUN_00521830 ; 00526b72
        ;   XREF to: 00521830 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_parseWavFile_FUN_00521830(_FILE * file_handle, int * file_offset_ptr, CSfxSample * sfx_sample)
    ADD ESP,0xc                         ; 00526b77
    TEST EAX,EAX                        ; 00526b7a
    JZ 0x00526c07                       ; 00526b7c
        ;   XREF to: 00526c07 (CONDITIONAL_JUMP)  ; LAB_00526c07
    MOV EAX,dword ptr [ESP + 0x374]     ; 00526b82
    PUSH EAX                            ; 00526b89
    CALL sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_00521e10 ; 00526b8a
        ;   XREF to: 00521e10 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_00521e10(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 00526b8f
    MOV EAX,dword ptr [ESP + 0x374]     ; 00526b92
    FILD dword ptr [EAX + 0x10c]        ; 00526b99
    MOV dword ptr [EAX + 0x128],0x0     ; 00526b9f
    FMUL float ptr [0x005a2174]         ; 00526ba9 | FLOAT_005a2174
    MOV dword ptr [EAX + 0x12c],0x0     ; 00526baf
    MOV EDX,dword ptr [ESP + 0x374]     ; 00526bb9
    MOV dword ptr [EAX + 0x130],0x0     ; 00526bc0
    CALL crt_math.c_round_FUN_00563a30  ; 00526bca
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [EAX + 0x138]       ; 00526bcf
    MOV dword ptr [EDX + 0x13c],0x0     ; 00526bd5
    MOV EAX,dword ptr [ESP + 0x36c]     ; 00526bdf
    MOV dword ptr [EDX + 0x140],0x0     ; 00526be6
    PUSH EDX                            ; 00526bf0
    MOV dword ptr [EDX + 0x134],EAX     ; 00526bf1
    CALL sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_00523910 ; 00526bf7
        ;   XREF to: 00523910 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_00523910(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 00526bfc
    TEST EAX,EAX                        ; 00526bff
    JNZ 0x00526ad0                      ; 00526c01
        ;   XREF to: 00526ad0 (CONDITIONAL_JUMP)  ; LAB_00526ad0
    MOV EAX,dword ptr [ESP + 0x378]     ; 00526c07
        ;   Label: LAB_00526c07
    PUSH EAX                            ; 00526c0e
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00523a60 ; 00526c0f
        ;   XREF to: 00523a60 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00523a60(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 00526c14
    XOR EAX,EAX                         ; 00526c17
    JMP 0x0052673b                      ; 00526c19
        ;   XREF to: 0052673b (UNCONDITIONAL_JUMP)  ; LAB_0052673b
    MOV EAX,ESP                         ; 00526c1e
        ;   Label: LAB_00526c1e
    PUSH EAX                            ; 00526c20
    PUSH 0x59356d                       ; 00526c21 | = "startSfx - can't get sample %s\n"
    CALL sound_sndmain.cpp_logSoundError_FUN_00529980 ; 00526c26
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_00529980(char * format)
    ADD ESP,0x8                         ; 00526c2b
    PUSH EBP                            ; 00526c2e | g_CSfxSlot_ARRAY_02dbd374[1].options.channel_index
        ;   Label: LAB_00526c2e
    CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_00525570 ; 00526c2f
        ;   XREF to: 00525570 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_kill_FUN_00525570(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 00526c34
    CALL sound_sndmain.cpp_unlockSound_FUN_00528890 ; 00526c37
        ;   XREF to: 00528890 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00528890()
    XOR EAX,EAX                         ; 00526c3c
    MOV EBX,dword ptr [0x02dc1ed8]      ; 00526c3e | DAT_02dc1ed8
    ADD ESP,0x37c                       ; 00526c44
    POP EBP                             ; 00526c4a
    POP EDI                             ; 00526c4b
    POP ESI                             ; 00526c4c
    POP EBX                             ; 00526c4d
    RET                                 ; 00526c4e

