; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl sound_sndmain_cpp_startSfx_FUN_005a8e90(char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; Local Variables:
; char[256]        Stack[-0x390]:256  local_390
; char[256]        Stack[-0x290]:256  local_290
; char[256]        Stack[-0x190]:256  local_190
; CSfxOptions      Stack[-0x90]:112  local_90
; uint             Stack[-0x20]:4  local_20
; uint             Stack[-0x1c]:4  local_1c
; CSfxSample *     Stack[-0x18]:4  local_18
; CSfxSample *     Stack[-0x14]:4  local_14
;
; XREF[24]:
;   core_dracbrid.cpp_CDraculaBride_startFreakySound_FUN_004864c0 at 00486975
;   core_event.cpp_CEventList_restartSfxEntries_FUN_004b0f00 at 004b0f59
;   core_fire.cpp_CFireball_onCollision_FUN_004c1690 at 004c1736
;   core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004d1f20 at 004d1f5f
;   core_game.cpp_CGame_rollCredits_FUN_004e4010 at 004e43a8
;   core_lightgun.cpp_CLightGun_process_FUN_00506450 at 00506641
;   core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_0050aba0 at 0050ad04
;   core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_0050ad40 at 0050adba
;   core_manpuz.cpp_updateGemHumChannel_FUN_0050a4f0 at 0050a5e3
;   core_menu.cpp_configureSoundOptions_FUN_00511e50 at 00512877
;   ... and 14 more
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_0064f54e
;   TerminatedCString s_SfxSlot_kill_must_be_loc_0064f563
;   TerminatedCString s_sound_0064fa53
;   TerminatedCString s_mp3_0064fa59
;   TerminatedCString s_mp3_0064fa5d
;   TerminatedCString s_mp3_0064fa62
;   TerminatedCString s_mp3_0064fa66
;   TerminatedCString s_sound_0064fa6b
;   TerminatedCString s_sound_sndmain_cpp_0064fa71
;   TerminatedCString s_sound_sndmain_cpp_0064fa86
;   TerminatedCString s_Out_of_memory_0064fa9b
;   TerminatedCString s_rb_0064faaa
;   TerminatedCString s_sound_0064faad
;   TerminatedCString s_startSfx_can_t_get_sampl_0065098e
;   float FLOAT_00663164 = 2
;   ... and 34 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_math.c_round_FUN_005fe6b0
;   crt_stdio.c_ftell_FUN_00601560
;   crt_string.c__stricmp_FUN_005fe7f0
;   engine_dosio.c_getFile_FUN_00481a50
;   engine_dosio.c_getFileSize_FUN_00481880
;   engine_dosio.c_splitPath_FUN_00481f20
;   shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0
;   sound_mp3.cpp_CMP3Decoder_ctor_FUN_005344f0
;   sound_mp3.cpp_CMP3Decoder_openFile_FUN_00534550
;   sound_sndmain.cpp_CSfxOptions_reset_FUN_005a8830
;   sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_005a6170
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0
;   sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_005a45c0
;   sound_sndmain.cpp_CSfxSample_pollStream_FUN_005a6730
;   ... and 12 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a8e90
        ;   Label: sound_sndmain.cpp_startSfx_FUN_005a8e90
    PUSH ESI                            ; 005a8e91
    PUSH EDI                            ; 005a8e92
    PUSH EBP                            ; 005a8e93
    SUB ESP,0x380                       ; 005a8e94
    MOV EBX,dword ptr [0x03f62828]      ; 005a8e9a | g_LastSampleAccessIndex
    MOV ESI,dword ptr [ESP + 0x394]     ; 005a8ea0
    TEST ESI,ESI                        ; 005a8ea7
    JZ 0x005a8eb0                       ; 005a8ea9
        ;   XREF to: 005a8eb0 (CONDITIONAL_JUMP)  ; LAB_005a8eb0
    CMP byte ptr [ESI],0x0              ; 005a8eab
    JNZ 0x005a8ec3                      ; 005a8eae
        ;   XREF to: 005a8ec3 (CONDITIONAL_JUMP)  ; LAB_005a8ec3
    XOR EAX,EAX                         ; 005a8eb0
        ;   Label: LAB_005a8eb0
    MOV EBX,dword ptr [0x03f62828]      ; 005a8eb2 | g_LastSampleAccessIndex
        ;   Label: LAB_005a8eb2
    ADD ESP,0x380                       ; 005a8eb8
    POP EBP                             ; 005a8ebe
    POP EDI                             ; 005a8ebf
    POP ESI                             ; 005a8ec0
    POP EBX                             ; 005a8ec1
    RET                                 ; 005a8ec2
    CALL sound_sndmain.cpp_isSoundBusy_FUN_005ab540 ; 005a8ec3
        ;   XREF to: 005ab540 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSoundBusy_FUN_005ab540()
        ;   Label: LAB_005a8ec3
    TEST EAX,EAX                        ; 005a8ec8
    JZ 0x005a8eb2                       ; 005a8eca
        ;   XREF to: 005a8eb2 (CONDITIONAL_JUMP)  ; LAB_005a8eb2
    LEA EAX,[ESP + 0x300]               ; 005a8ecc
    PUSH EAX                            ; 005a8ed3
    CALL sound_sndmain.cpp_CSfxOptions_reset_FUN_005a8830 ; 005a8ed4
        ;   XREF to: 005a8830 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxOptions_reset_FUN_005a8830(CSfxOptions * this_ptr)
    ADD ESP,0x4                         ; 005a8ed9
    MOV EDI,ESP                         ; 005a8edc
    PUSH EDI                            ; 005a8ede
    MOV AL,byte ptr [ESI]               ; 005a8edf
        ;   Label: LAB_005a8edf
    MOV byte ptr [EDI],AL               ; 005a8ee1
    CMP AL,0x0                          ; 005a8ee3
    JZ 0x005a8ef7                       ; 005a8ee5
        ;   XREF to: 005a8ef7 (CONDITIONAL_JUMP)  ; LAB_005a8ef7
    MOV AL,byte ptr [ESI + 0x1]         ; 005a8ee7
    ADD ESI,0x2                         ; 005a8eea
    MOV byte ptr [EDI + 0x1],AL         ; 005a8eed
    ADD EDI,0x2                         ; 005a8ef0
    CMP AL,0x0                          ; 005a8ef3
    JNZ 0x005a8edf                      ; 005a8ef5
        ;   XREF to: 005a8edf (CONDITIONAL_JUMP)  ; LAB_005a8edf
    POP EDI                             ; 005a8ef7
        ;   Label: LAB_005a8ef7
    MOV EAX,[0x03f624a4]                ; 005a8ef8 | g_SfxLastSlot
    SHL EAX,0x4                         ; 005a8efd
    MOV EDX,EAX                         ; 005a8f00
    SHL EAX,0x3                         ; 005a8f02
    SUB EAX,EDX                         ; 005a8f05
    MOV ECX,0x1c                        ; 005a8f07
    LEA EDI,[ESP + 0x300]               ; 005a8f0c
    LEA ESI,[EAX + 0x3f624a8]           ; 005a8f13 | g_SfxOptions
    MOVSD.REP ES:EDI,ESI                ; 005a8f19 | g_SfxOptions | g_SfxLastSlot.volume
    MOV EDX,dword ptr [ESP + 0x300]     ; 005a8f1b
    PUSH EDX                            ; 005a8f22
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0 ; 005a8f23
        ;   XREF to: 005a9ea0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0(int channel_index)
    ADD ESP,0x4                         ; 005a8f28
    TEST EAX,EAX                        ; 005a8f2b
    JZ 0x005a8eb2                       ; 005a8f2d
        ;   XREF to: 005a8eb2 (CONDITIONAL_JUMP)  ; LAB_005a8eb2
    CALL sound_sndmain.cpp_lockSound_FUN_005abd30 ; 005a8f2f
        ;   XREF to: 005abd30 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_005abd30()
    CMP dword ptr [0x03f6940c],0x0      ; 005a8f34 | g_SoundLockCount
    JLE 0x005a916c                      ; 005a8f3b
        ;   XREF to: 005a916c (CONDITIONAL_JUMP)  ; LAB_005a916c
    MOV EBP,dword ptr [0x03f5db18]      ; 005a8f41 | g_SfxSlots[0].field7_0x74
        ;   Label: LAB_005a8f41
    MOV EBX,dword ptr [0x03f62828]      ; 005a8f47 | g_LastSampleAccessIndex
    XOR EAX,EAX                         ; 005a8f4d
    XOR EDX,EDX                         ; 005a8f4f
    TEST EBP,EBP                        ; 005a8f51
    JZ 0x005a8f6f                       ; 005a8f53
        ;   XREF to: 005a8f6f (CONDITIONAL_JUMP)  ; LAB_005a8f6f
    ADD EAX,0x128                       ; 005a8f55
        ;   Label: LAB_005a8f55
    INC EDX                             ; 005a8f5a
    CMP EAX,0x4a00                      ; 005a8f5b
    JGE 0x005a9194                      ; 005a8f60
        ;   XREF to: 005a9194 (CONDITIONAL_JUMP)  ; LAB_005a9194
    CMP dword ptr [EAX + 0x3f5db18],0x0 ; 005a8f66 | g_SfxSlots[1].playback_state | g_SfxSlots[2].field_116
    JNZ 0x005a8f55                      ; 005a8f6d
        ;   XREF to: 005a8f55 (CONDITIONAL_JUMP)  ; LAB_005a8f55
    MOV dword ptr [ESP + 0x374],EDX     ; 005a8f6f
        ;   Label: LAB_005a8f6f
    MOV dword ptr [0x03f62828],EBX      ; 005a8f76 | g_LastSampleAccessIndex
    TEST EDX,EDX                        ; 005a8f7c
    JL 0x005a919e                       ; 005a8f7e
        ;   XREF to: 005a919e (CONDITIONAL_JUMP)  ; LAB_005a919e
    LEA EAX,[EDX*0x8 + 0x0]             ; 005a8f84
    ADD EAX,EDX                         ; 005a8f8b
    SHL EAX,0x2                         ; 005a8f8d
    ADD EAX,EDX                         ; 005a8f90
    MOV EBP,0x3f5daa4                   ; 005a8f92 | g_SfxSlots
    SHL EAX,0x3                         ; 005a8f97
    ADD EBP,EAX                         ; 005a8f9a
    MOV EAX,ESP                         ; 005a8f9c
    MOV ECX,0x1c                        ; 005a8f9e
    PUSH EAX                            ; 005a8fa3
    LEA ESI,[ESP + 0x304]               ; 005a8fa4
    MOV EDI,EBP                         ; 005a8fab
    PUSH 0x64fa53                       ; 005a8fad | = "sound"
    MOVSD.REP ES:EDI,ESI                ; 005a8fb2 | DAT_03f5d97c | g_SfxSlots[1].status | g_SfxSlots[1].sample_data
    CALL engine_dosio.c_getFileSize_FUN_00481880 ; 005a8fb4
        ;   XREF to: 00481880 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_getFileSize_FUN_00481880(char * directory, char * filename)
    ADD ESP,0x8                         ; 005a8fb9
    CMP EAX,0x200000                    ; 005a8fbc
    JLE 0x005a91b6                      ; 005a8fc1
        ;   XREF to: 005a91b6 (CONDITIONAL_JUMP)  ; LAB_005a91b6
    MOV EAX,dword ptr [ESP + 0x374]     ; 005a8fc7
        ;   Label: LAB_005a8fc7
    MOV ESI,ESP                         ; 005a8fce
    MOV EBX,dword ptr [0x03f62828]      ; 005a8fd0 | g_LastSampleAccessIndex
    XOR EDX,EDX                         ; 005a8fd6
    MOV dword ptr [ESP + 0x370],EAX     ; 005a8fd8
    XOR EDI,EDI                         ; 005a8fdf
    INC EBX                             ; 005a8fe1
        ;   Label: LAB_005a8fe1
    CMP EBX,0x40                        ; 005a8fe2
    JL 0x005a8fe9                       ; 005a8fe5
        ;   XREF to: 005a8fe9 (CONDITIONAL_JUMP)  ; LAB_005a8fe9
    MOV EBX,EDI                         ; 005a8fe7
    IMUL EAX,EBX,0x180                  ; 005a8fe9
        ;   Label: LAB_005a8fe9
    CMP EDI,dword ptr [EAX + 0x3f6297c] ; 005a8fef | g_SfxSamples[0].taken | g_SfxSamples[1].taken
    JZ 0x005a921b                       ; 005a8ff5
        ;   XREF to: 005a921b (CONDITIONAL_JUMP)  ; LAB_005a921b
    INC EDX                             ; 005a8ffb
        ;   Label: LAB_005a8ffb
    CMP EDX,0x40                        ; 005a8ffc
    JL 0x005a8fe1                       ; 005a8fff
        ;   XREF to: 005a8fe1 (CONDITIONAL_JUMP)  ; LAB_005a8fe1
    XOR EDI,EDI                         ; 005a9001
    MOV dword ptr [ESP + 0x378],EDI     ; 005a9003
    MOV EAX,dword ptr [ESP + 0x378]     ; 005a900a | g_SfxSamples[1].sample_info.name[0]
        ;   Label: LAB_005a900a
    MOV dword ptr [0x03f62828],EBX      ; 005a9011 | g_LastSampleAccessIndex
    MOV dword ptr [ESP + 0x37c],EAX     ; 005a9017 | g_SfxSamples[1].sample_info.name[0]
    TEST EAX,EAX                        ; 005a901e
    JNZ 0x005a923a                      ; 005a9020
        ;   XREF to: 005a923a (CONDITIONAL_JUMP)  ; LAB_005a923a
    MOV dword ptr [EBP + 0x78],EAX      ; 005a9026 | g_SfxSlots[1].sample | g_SfxSamples[1].sample_info.name[0]
        ;   Label: LAB_005a9026
    MOV EDX,dword ptr [EBP + 0x78]      ; 005a9029 | g_SfxSamples[1].sample_info.name[0] | g_SfxSlots[1].sample
    TEST EDX,EDX                        ; 005a902c
    JZ 0x005a9513                       ; 005a902e
        ;   XREF to: 005a9513 (CONDITIONAL_JUMP)  ; LAB_005a9513
    MOV ECX,dword ptr [EDX + 0x154]     ; 005a9034 | g_SfxSamples[1].ref_count
    INC ECX                             ; 005a903a
    PUSH EBP                            ; 005a903b | g_SfxSlots[1].status
    MOV dword ptr [EDX + 0x154],ECX     ; 005a903c | g_SfxSamples[1].ref_count
    CALL sound_sndmain.cpp_CSfxSlot_seek_FUN_005a8390 ; 005a9042
        ;   XREF to: 005a8390 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_seek_FUN_005a8390(CSfxSlot * this_ptr)
    MOV dword ptr [EBP + 0x118],0x0     ; 005a9047 | g_SfxSlots[1].is_active
    FLD float ptr [EBP + 0x44]          ; 005a9051 | g_SfxSlots[1].field_20[48]
    MOV dword ptr [EBP + 0x110],0xbf800000 ; 005a9054 | g_SfxSlots[1].field_124[148]
    ADD ESP,0x4                         ; 005a905e
    MOV dword ptr [EBP + 0x114],0x0     ; 005a9061 | g_SfxSlots[1].field_124[152]
    MOV EAX,EBP                         ; 005a906b
    FSTP float ptr [EBP + 0x10c]        ; 005a906d | g_SfxSlots[1].field_124[144]
    LEA EDX,[EBP + 0x20]                ; 005a9073 | g_SfxSlots[1].field_20[12]
    ADD EAX,0x4                         ; 005a9076
        ;   Label: LAB_005a9076
    MOV dword ptr [EAX + 0xdc],0xffffffff ; 005a9079 | g_SfxSlots[1].field_124[100] | g_SfxSlots[1].field_124[104]
    CMP EAX,EDX                         ; 005a9083
    JNZ 0x005a9076                      ; 005a9085
        ;   XREF to: 005a9076 (CONDITIONAL_JUMP)  ; LAB_005a9076
    MOV EAX,dword ptr [EBP + 0x78]      ; 005a9087 | g_SfxSlots[1].sample
    MOV ESI,dword ptr [0x00681af0]      ; 005a908a | g_SfxPlaybackStateCounter
    FLD float ptr [EAX + 0x114]         ; 005a9090
    INC ESI                             ; 005a9096
    MOV EAX,dword ptr [EBP + 0x78]      ; 005a9097 | g_SfxSlots[1].sample
    FSTP float ptr [EBP + 0x100]        ; 005a909a | g_SfxSlots[1].field_124[132]
    MOV dword ptr [0x00681af0],ESI      ; 005a90a0 | g_SfxPlaybackStateCounter
    FLD float ptr [EAX + 0x118]         ; 005a90a6
    MOV EAX,dword ptr [EBP + 0x78]      ; 005a90ac | g_SfxSlots[1].sample
    FSTP float ptr [EBP + 0x104]        ; 005a90af | g_SfxSlots[1].field_124[136]
    MOV EDX,dword ptr [EAX + 0x11c]     ; 005a90b5
    MOV dword ptr [EBP + 0x108],EDX     ; 005a90bb | g_SfxSlots[1].field_124[140]
    CMP ESI,0xffffff                    ; 005a90c1
    JL 0x005a90d3                       ; 005a90c7
        ;   XREF to: 005a90d3 (CONDITIONAL_JUMP)  ; LAB_005a90d3
    MOV dword ptr [0x00681af0],0x1      ; 005a90c9 | g_SfxPlaybackStateCounter
    PUSH 0x4479c000                     ; 005a90d3
        ;   Label: LAB_005a90d3
    PUSH 0x4479c000                     ; 005a90d8
    MOV EDX,dword ptr [EBP + 0x78]      ; 005a90dd | g_SfxSlots[1].sample
    MOV ESI,dword ptr [0x00681af0]      ; 005a90e0 | g_SfxPlaybackStateCounter
    PUSH EDX                            ; 005a90e6
    MOV dword ptr [EBP + 0x74],ESI      ; 005a90e7 | g_SfxSlots[1].playback_state
    CALL sound_sndmain.cpp_CSfxSample_pollStream_FUN_005a6730 ; 005a90ea
        ;   XREF to: 005a6730 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_pollStream_FUN_005a6730(CSfxSample * this_ptr, float time_window, float update_interval)
    ADD ESP,0xc                         ; 005a90ef
    TEST EAX,EAX                        ; 005a90f2
    JZ 0x005a9523                       ; 005a90f4
        ;   XREF to: 005a9523 (CONDITIONAL_JUMP)  ; LAB_005a9523
    PUSH 0x0                            ; 005a90fa
    PUSH EBP                            ; 005a90fc | g_SfxSlots[1].status
    CALL sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100 ; 005a90fd
        ;   XREF to: 005a7100 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100(CSfxSlot * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005a9102
    CALL sound_sndmain.cpp_hasHardware3DSound_FUN_005ab5a0 ; 005a9105
        ;   XREF to: 005ab5a0 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_hasHardware3DSound_FUN_005ab5a0()
    TEST EAX,EAX                        ; 005a910a
    JZ 0x005a9148                       ; 005a910c
        ;   XREF to: 005a9148 (CONDITIONAL_JUMP)  ; LAB_005a9148
    MOV EDI,dword ptr [EBP + 0x78]      ; 005a910e | g_SfxSlots[1].sample
    MOV ECX,dword ptr [EDI + 0x158]     ; 005a9111
    MOV EAX,[0x03f69268]                ; 005a9117 | g_CSoundDevicePtr
    PUSH ECX                            ; 005a911c
    MOV EDX,dword ptr [EAX]             ; 005a911d
    PUSH EAX                            ; 005a911f
    CALL dword ptr [EDX + 0x3c]         ; 005a9120
    ADD ESP,0x8                         ; 005a9123
    MOV dword ptr [EBP + 0x70],EAX      ; 005a9126 | g_SfxSlots[1].dsound_buffer
    TEST EAX,EAX                        ; 005a9129
    JZ 0x005a9523                       ; 005a912b
        ;   XREF to: 005a9523 (CONDITIONAL_JUMP)  ; LAB_005a9523
    PUSH EBP                            ; 005a9131 | g_SfxSlots[1].status
    MOV EAX,[0x03f69268]                ; 005a9132 | g_CSoundDevicePtr
    PUSH EAX                            ; 005a9137
    MOV EDX,dword ptr [EAX]             ; 005a9138
    CALL dword ptr [EDX + 0x48]         ; 005a913a
    ADD ESP,0x8                         ; 005a913d
    TEST EAX,EAX                        ; 005a9140
    JZ 0x005a9523                       ; 005a9142
        ;   XREF to: 005a9523 (CONDITIONAL_JUMP)  ; LAB_005a9523
    CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0 ; 005a9148
        ;   XREF to: 005abdc0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_005abdc0()
        ;   Label: LAB_005a9148
    MOV EAX,ESI                         ; 005a914d
    MOV EBP,dword ptr [ESP + 0x374]     ; 005a914f
    SHL EAX,0x6                         ; 005a9156
    OR EAX,EBP                          ; 005a9159
    MOV EBX,dword ptr [0x03f62828]      ; 005a915b | g_LastSampleAccessIndex
    ADD ESP,0x380                       ; 005a9161
    POP EBP                             ; 005a9167
    POP EDI                             ; 005a9168
    POP ESI                             ; 005a9169
    POP EBX                             ; 005a916a
    RET                                 ; 005a916b
    MOV ESI,0x64f54e                    ; 005a916c | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005a916c
    MOV EDI,0x1f6                       ; 005a9171
    PUSH 0x64f563                       ; 005a9176 | = "SfxSlot::kill - must be locked!"
    MOV dword ptr [0x02f0ca48],ESI      ; 005a917b | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 005a9181 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a9187
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005a918c
    JMP 0x005a8f41                      ; 005a918f
        ;   XREF to: 005a8f41 (UNCONDITIONAL_JUMP)  ; LAB_005a8f41
    MOV EDX,0xffffffff                  ; 005a9194
        ;   Label: LAB_005a9194
    JMP 0x005a8f6f                      ; 005a9199
        ;   XREF to: 005a8f6f (UNCONDITIONAL_JUMP)  ; LAB_005a8f6f
    CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0 ; 005a919e
        ;   XREF to: 005abdc0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_005abdc0()
        ;   Label: LAB_005a919e
    XOR EAX,EAX                         ; 005a91a3
    MOV EBX,dword ptr [0x03f62828]      ; 005a91a5 | g_LastSampleAccessIndex
    ADD ESP,0x380                       ; 005a91ab
    POP EBP                             ; 005a91b1
    POP EDI                             ; 005a91b2
    POP ESI                             ; 005a91b3
    POP EBX                             ; 005a91b4
    RET                                 ; 005a91b5
    LEA EAX,[ESP + 0x200]               ; 005a91b6
        ;   Label: LAB_005a91b6
    PUSH EAX                            ; 005a91bd
    PUSH 0x0                            ; 005a91be
    PUSH 0x0                            ; 005a91c0
    PUSH 0x0                            ; 005a91c2
    LEA EAX,[ESP + 0x10]                ; 005a91c4
    PUSH EAX                            ; 005a91c8
    CALL engine_dosio.c_splitPath_FUN_00481f20 ; 005a91c9
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 005a91ce
    PUSH 0x64fa59                       ; 005a91d1 | = "mp3"
    LEA EAX,[ESP + 0x204]               ; 005a91d6
    PUSH EAX                            ; 005a91dd
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 005a91de
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005a91e3
    TEST EAX,EAX                        ; 005a91e6
    JZ 0x005a8fc7                       ; 005a91e8
        ;   XREF to: 005a8fc7 (CONDITIONAL_JUMP)  ; LAB_005a8fc7
    PUSH 0x64fa5d                       ; 005a91ee | = ".mp3"
    LEA EAX,[ESP + 0x204]               ; 005a91f3
    PUSH EAX                            ; 005a91fa
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 005a91fb
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005a9200
    TEST EAX,EAX                        ; 005a9203
    JZ 0x005a8fc7                       ; 005a9205
        ;   XREF to: 005a8fc7 (CONDITIONAL_JUMP)  ; LAB_005a8fc7
    MOV EAX,ESP                         ; 005a920b
    PUSH EAX                            ; 005a920d
    CALL sound_sndmain.cpp_getSfxSample_FUN_005a4c80 ; 005a920e
        ;   XREF to: 005a4c80 (UNCONDITIONAL_CALL)  ; CSfxSample * sound_sndmain.cpp_getSfxSample_FUN_005a4c80(char * filename)
    ADD ESP,0x4                         ; 005a9213
    JMP 0x005a9026                      ; 005a9216
        ;   XREF to: 005a9026 (UNCONDITIONAL_JUMP)  ; LAB_005a9026
    CMP EDI,dword ptr [EAX + 0x3f62980] ; 005a921b | g_SfxSamples[1].ref_count
        ;   Label: LAB_005a921b
    JNZ 0x005a8ffb                      ; 005a9221
        ;   XREF to: 005a8ffb (CONDITIONAL_JUMP)  ; LAB_005a8ffb
    MOV EDX,0x3f6282c                   ; 005a9227 | g_SfxSamples
    ADD EDX,EAX                         ; 005a922c
    MOV dword ptr [ESP + 0x378],EDX     ; 005a922e | g_SfxSamples[1].sample_info.name[0]
    JMP 0x005a900a                      ; 005a9235
        ;   XREF to: 005a900a (UNCONDITIONAL_JUMP)  ; LAB_005a900a
    LEA EAX,[ESP + 0x100]               ; 005a923a
        ;   Label: LAB_005a923a
    PUSH EAX                            ; 005a9241
    PUSH 0x0                            ; 005a9242
    PUSH 0x0                            ; 005a9244
    PUSH 0x0                            ; 005a9246
    PUSH ESI                            ; 005a9248
    CALL engine_dosio.c_splitPath_FUN_00481f20 ; 005a9249
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 005a924e
    PUSH 0x64fa62                       ; 005a9251 | = "mp3"
    LEA EAX,[ESP + 0x104]               ; 005a9256
    PUSH EAX                            ; 005a925d
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 005a925e
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005a9263
    TEST EAX,EAX                        ; 005a9266
    JNZ 0x005a93e0                      ; 005a9268
        ;   XREF to: 005a93e0 (CONDITIONAL_JUMP)  ; LAB_005a93e0
    PUSH ESI                            ; 005a926e
        ;   Label: LAB_005a926e
    PUSH 0x64fa6b                       ; 005a926f | = "sound"
    CALL engine_dosio.c_getFileSize_FUN_00481880 ; 005a9274
        ;   XREF to: 00481880 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_getFileSize_FUN_00481880(char * directory, char * filename)
    ADD ESP,0x8                         ; 005a9279
    TEST EAX,EAX                        ; 005a927c
    JLE 0x005a94fc                      ; 005a927e
        ;   XREF to: 005a94fc (CONDITIONAL_JUMP)  ; LAB_005a94fc
    PUSH 0x3c5                          ; 005a9284
    PUSH 0x64fa71                       ; 005a9289 | = "..\\sound\\sndmain.cpp"
    PUSH 0x8630                         ; 005a928e
    CALL shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0 ; 005a9293
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 005a9298
    TEST EAX,EAX                        ; 005a929b
    JZ 0x005a92a8                       ; 005a929d
        ;   XREF to: 005a92a8 (CONDITIONAL_JUMP)  ; LAB_005a92a8
    PUSH EAX                            ; 005a929f
    CALL sound_mp3.cpp_CMP3Decoder_ctor_FUN_005344f0 ; 005a92a0
        ;   XREF to: 005344f0 (UNCONDITIONAL_CALL)  ; CMP3Decoder * sound_mp3.cpp_CMP3Decoder_ctor_FUN_005344f0(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 005a92a5
    MOV EDX,dword ptr [ESP + 0x37c]     ; 005a92a8
        ;   Label: LAB_005a92a8
    MOV dword ptr [EDX + 0x16c],EAX     ; 005a92af
    TEST EAX,EAX                        ; 005a92b5
    JNZ 0x005a92db                      ; 005a92b7
        ;   XREF to: 005a92db (CONDITIONAL_JUMP)  ; LAB_005a92db
    MOV EDI,0x64fa86                    ; 005a92b9 | = "..\\sound\\sndmain.cpp"
    MOV EAX,0x3c6                       ; 005a92be
    PUSH 0x64fa9b                       ; 005a92c3 | = "Out of memory."
    MOV dword ptr [0x02f0ca48],EDI      ; 005a92c8 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 005a92ce | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a92d3
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005a92d8
    MOV EAX,dword ptr [ESP + 0x37c]     ; 005a92db
        ;   Label: LAB_005a92db
    PUSH ESI                            ; 005a92e2
    MOV EDX,dword ptr [EAX + 0x16c]     ; 005a92e3
    PUSH EDX                            ; 005a92e9
    CALL sound_mp3.cpp_CMP3Decoder_openFile_FUN_00534550 ; 005a92ea
        ;   XREF to: 00534550 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_openFile_FUN_00534550(CMP3Decoder * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005a92ef
    MOV EDI,dword ptr [ESP + 0x37c]     ; 005a92f2
    PUSH EDI                            ; 005a92f9
    MOV AL,byte ptr [ESI]               ; 005a92fa
        ;   Label: LAB_005a92fa
    MOV byte ptr [EDI],AL               ; 005a92fc
    CMP AL,0x0                          ; 005a92fe
    JZ 0x005a9312                       ; 005a9300
        ;   XREF to: 005a9312 (CONDITIONAL_JUMP)  ; LAB_005a9312
    MOV AL,byte ptr [ESI + 0x1]         ; 005a9302
    ADD ESI,0x2                         ; 005a9305
    MOV byte ptr [EDI + 0x1],AL         ; 005a9308
    ADD EDI,0x2                         ; 005a930b
    CMP AL,0x0                          ; 005a930e
    JNZ 0x005a92fa                      ; 005a9310
        ;   XREF to: 005a92fa (CONDITIONAL_JUMP)  ; LAB_005a92fa
    POP EDI                             ; 005a9312
        ;   Label: LAB_005a9312
    MOV dword ptr [EDI + 0x100],0x1     ; 005a9313
    MOV EAX,dword ptr [EDI + 0x16c]     ; 005a931d
    MOV dword ptr [EDI + 0x104],0x10    ; 005a9323
    MOV EAX,dword ptr [EAX + 0x104]     ; 005a932d
    MOV dword ptr [EDI + 0x108],EAX     ; 005a9333
    MOV EAX,dword ptr [EDI + 0x16c]     ; 005a9339
    MOV EAX,dword ptr [EAX + 0x100]     ; 005a933f
    MOV dword ptr [EDI + 0x110],0xffffffff ; 005a9345
    PUSH EDI                            ; 005a934f
    MOV dword ptr [EDI + 0x10c],EAX     ; 005a9350
    CALL sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_005a45c0 ; 005a9356
        ;   XREF to: 005a45c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_005a45c0(CSfxSample * this_ptr)
    MOV dword ptr [EDI + 0x150],0x0     ; 005a935b
    MOV dword ptr [EDI + 0x154],0x0     ; 005a9365
    FILD dword ptr [EDI + 0x10c]        ; 005a936f
    MOV dword ptr [EDI + 0x158],0x0     ; 005a9375
    FMUL float ptr [0x00663164]         ; 005a937f | FLOAT_00663164
    MOV dword ptr [EDI + 0x164],0x0     ; 005a9385
    ADD ESP,0x4                         ; 005a938f
    MOV dword ptr [EDI + 0x168],0x0     ; 005a9392
    MOV EAX,dword ptr [ESP + 0x370]     ; 005a939c
    PUSH EDI                            ; 005a93a3
    CALL crt_math.c_round_FUN_005fe6b0  ; 005a93a4
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EDI + 0x160]       ; 005a93a9
    MOV dword ptr [EDI + 0x15c],EAX     ; 005a93af
    CALL sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_005a6170 ; 005a93b5
        ;   XREF to: 005a6170 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_005a6170(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 005a93ba
    TEST EAX,EAX                        ; 005a93bd
    JZ 0x005a94fc                       ; 005a93bf
        ;   XREF to: 005a94fc (CONDITIONAL_JUMP)  ; LAB_005a94fc
    PUSH 0x0                            ; 005a93c5
        ;   Label: LAB_005a93c5
    PUSH 0x0                            ; 005a93c7
    MOV EDI,dword ptr [ESP + 0x384]     ; 005a93c9
    PUSH EDI                            ; 005a93d0
    CALL sound_sndmain.cpp_CSfxSample_seek_FUN_005a65a0 ; 005a93d1
        ;   XREF to: 005a65a0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_seek_FUN_005a65a0(CSfxSample * this_ptr, int playback_position, int dest_buffer_offset)
    ADD ESP,0xc                         ; 005a93d6
    MOV EAX,EDI                         ; 005a93d9
    JMP 0x005a9026                      ; 005a93db
        ;   XREF to: 005a9026 (UNCONDITIONAL_JUMP)  ; LAB_005a9026
    PUSH 0x64fa66                       ; 005a93e0 | = ".mp3"
        ;   Label: LAB_005a93e0
    LEA EAX,[ESP + 0x104]               ; 005a93e5
    PUSH EAX                            ; 005a93ec
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 005a93ed
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005a93f2
    TEST EAX,EAX                        ; 005a93f5
    JZ 0x005a926e                       ; 005a93f7
        ;   XREF to: 005a926e (CONDITIONAL_JUMP)  ; LAB_005a926e
    PUSH 0x64faaa                       ; 005a93fd | = "rb"
    PUSH ESI                            ; 005a9402
    PUSH 0x64faad                       ; 005a9403 | = "sound"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 005a9408
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 005a940d
    MOV EDX,dword ptr [ESP + 0x378]     ; 005a9410
    MOV dword ptr [EDX + 0x174],EAX     ; 005a9417
    TEST EAX,EAX                        ; 005a941d
    JZ 0x005a94fc                       ; 005a941f
        ;   XREF to: 005a94fc (CONDITIONAL_JUMP)  ; LAB_005a94fc
    MOV EDI,EDX                         ; 005a9425
    PUSH EDI                            ; 005a9427
    MOV AL,byte ptr [ESI]               ; 005a9428
        ;   Label: LAB_005a9428
    MOV byte ptr [EDI],AL               ; 005a942a
    CMP AL,0x0                          ; 005a942c
    JZ 0x005a9440                       ; 005a942e
        ;   XREF to: 005a9440 (CONDITIONAL_JUMP)  ; LAB_005a9440
    MOV AL,byte ptr [ESI + 0x1]         ; 005a9430
    ADD ESI,0x2                         ; 005a9433
    MOV byte ptr [EDI + 0x1],AL         ; 005a9436
    ADD EDI,0x2                         ; 005a9439
    CMP AL,0x0                          ; 005a943c
    JNZ 0x005a9428                      ; 005a943e
        ;   XREF to: 005a9428 (CONDITIONAL_JUMP)  ; LAB_005a9428
    POP EDI                             ; 005a9440
        ;   Label: LAB_005a9440
    MOV ECX,dword ptr [EDX + 0x174]     ; 005a9441
    PUSH ECX                            ; 005a9447
    CALL crt_stdio.c_ftell_FUN_00601560 ; 005a9448
        ;   XREF to: 00601560 (UNCONDITIONAL_CALL)  ; long crt_stdio.c_ftell_FUN_00601560(_FILE * file_handle)
    ADD ESP,0x4                         ; 005a944d
    MOV EDX,EDI                         ; 005a9450
    PUSH EDI                            ; 005a9452
    MOV dword ptr [EDX + 0x170],EAX     ; 005a9453
    LEA EAX,[EDI + 0x170]               ; 005a9459
    PUSH EAX                            ; 005a945f
    MOV EDI,dword ptr [EDI + 0x174]     ; 005a9460
    PUSH EDI                            ; 005a9466
    CALL sound_sndmain.cpp_parseWavFile_FUN_005a3fe0 ; 005a9467
        ;   XREF to: 005a3fe0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_parseWavFile_FUN_005a3fe0(_FILE * file_handle, int * file_offset_ptr, CSfxSample * sfx_sample)
    ADD ESP,0xc                         ; 005a946c
    TEST EAX,EAX                        ; 005a946f
    JZ 0x005a94fc                       ; 005a9471
        ;   XREF to: 005a94fc (CONDITIONAL_JUMP)  ; LAB_005a94fc
    MOV EAX,dword ptr [ESP + 0x378]     ; 005a9477
    PUSH EAX                            ; 005a947e
    CALL sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_005a45c0 ; 005a947f
        ;   XREF to: 005a45c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_005a45c0(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 005a9484
    MOV EAX,dword ptr [ESP + 0x378]     ; 005a9487
    FILD dword ptr [EAX + 0x10c]        ; 005a948e
    MOV dword ptr [EAX + 0x150],0x0     ; 005a9494
    FMUL float ptr [0x00663164]         ; 005a949e | FLOAT_00663164
    MOV dword ptr [EAX + 0x154],0x0     ; 005a94a4
    MOV EDX,dword ptr [ESP + 0x378]     ; 005a94ae
    MOV dword ptr [EAX + 0x158],0x0     ; 005a94b5
    CALL crt_math.c_round_FUN_005fe6b0  ; 005a94bf
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EAX + 0x160]       ; 005a94c4
    MOV dword ptr [EDX + 0x164],0x0     ; 005a94ca
    MOV EAX,dword ptr [ESP + 0x370]     ; 005a94d4
    MOV dword ptr [EDX + 0x168],0x0     ; 005a94db
    PUSH EDX                            ; 005a94e5
    MOV dword ptr [EDX + 0x15c],EAX     ; 005a94e6
    CALL sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_005a6170 ; 005a94ec
        ;   XREF to: 005a6170 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_005a6170(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 005a94f1
    TEST EAX,EAX                        ; 005a94f4
    JNZ 0x005a93c5                      ; 005a94f6
        ;   XREF to: 005a93c5 (CONDITIONAL_JUMP)  ; LAB_005a93c5
    MOV EAX,dword ptr [ESP + 0x37c]     ; 005a94fc
        ;   Label: LAB_005a94fc
    PUSH EAX                            ; 005a9503
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0 ; 005a9504
        ;   XREF to: 005a62c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 005a9509
    XOR EAX,EAX                         ; 005a950c
    JMP 0x005a9026                      ; 005a950e
        ;   XREF to: 005a9026 (UNCONDITIONAL_JUMP)  ; LAB_005a9026
    MOV EAX,ESP                         ; 005a9513
        ;   Label: LAB_005a9513
    PUSH EAX                            ; 005a9515
    PUSH 0x65098e                       ; 005a9516 | = "startSfx - can't get sample %s\n"
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005a951b
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x8                         ; 005a9520
    PUSH EBP                            ; 005a9523 | g_SfxSlots[1].status
        ;   Label: LAB_005a9523
    CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60 ; 005a9524
        ;   XREF to: 005a7e60 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60(CSfxSlot * slot)
    ADD ESP,0x4                         ; 005a9529
    CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0 ; 005a952c
        ;   XREF to: 005abdc0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_005abdc0()
    XOR EAX,EAX                         ; 005a9531
    MOV EBX,dword ptr [0x03f62828]      ; 005a9533 | g_LastSampleAccessIndex
    ADD ESP,0x380                       ; 005a9539
    POP EBP                             ; 005a953f
    POP EDI                             ; 005a9540
    POP ESI                             ; 005a9541
    POP EBX                             ; 005a9542
    RET                                 ; 005a9543

