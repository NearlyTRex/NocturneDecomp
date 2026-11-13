; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_readIni_FUN_005760b0(CIniFile *ini_file)
;
; Parameters:
; CIniFile *       Stack[0x4]:4   ini_file
; Local Variables:
; undefined        Stack[-0x194]:1  local_194
;
; XREF[1]:
;   core_inivar.cpp_readIniData_FUN_004f4f50 at 004f51b0
;
; Referenced Globals:
;   undefined4 s_DeviceName_005f44c7+1
;   TerminatedCString s_RecordingDeviceName_005f44d3
;   TerminatedCString s_AccelEnabled_005f44e7
;   TerminatedCString s_MaxSwLatency_005f44f4
;   undefined4 DAT_005f4501
;   TerminatedCString s_Channels_005f4506
;   undefined4 DAT_005f450f
;   undefined4 DAT_005f4512
;   TerminatedCString s_SfxChannel_dEnabled_005f4517
;   TerminatedCString s_SfxChannel_dVol_005f452b
;   undefined4 DAT_006232e4
;   undefined4 DAT_00623330
;   undefined4 DAT_00623334
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005c04e0
;   crt_unknown.c_sprintf_FUN_005bfb40
;   engine_ini.cpp_FUN_004f4d10
;   engine_ini.cpp_FUN_004f4db0
;   sound_sndmain.cpp_closeSoundDevice_FUN_00575670
;   sound_sndmain.cpp_enableHwSoundMixing_FUN_00575580
;   sound_sndmain.cpp_enableSfxChannel_FUN_00573c50
;   sound_sndmain.cpp_getAudioFormat_FUN_005751c0
;   sound_sndmain.cpp_getMaxSwLatency_FUN_00576030
;   sound_sndmain.cpp_getRecordingDeviceCount_FUN_00575730
;   sound_sndmain.cpp_getRecordingDeviceInfo_FUN_00575790
;   sound_sndmain.cpp_getSfxChannelVol_FUN_00573bc0
;   sound_sndmain.cpp_getSoundDeviceCount_FUN_005752c0
;   sound_sndmain.cpp_getSoundDeviceInfo_FUN_00575350
;   sound_sndmain.cpp_isHardwareMixingEnabled_FUN_00575570
;   ... and 9 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005760b0
        ;   Label: sound_sndmain.cpp_readIni_FUN_005760b0
    PUSH ESI                            ; 005760b1
    PUSH EDI                            ; 005760b2
    PUSH EBP                            ; 005760b3
    SUB ESP,0x3a4                       ; 005760b4
    MOV EBP,dword ptr [ESP + 0x3b8]     ; 005760ba
    MOV ECX,0x40                        ; 005760c1
    LEA EDI,[ESP + 0x220]               ; 005760c6
    PUSH 0x100                          ; 005760cd
    LEA EAX,[ESP + 0x224]               ; 005760d2
    MOV ESI,0x623330                    ; 005760d9 | DAT_00623330
    PUSH EAX                            ; 005760de
    MOVSD.REP ES:EDI,ESI                ; 005760df | DAT_00623330 | DAT_00623334
    PUSH 0x5f44c8                       ; 005760e1 | s_DeviceName_005f44c7+1
    MOV EBX,dword ptr [EBP + 0x200]     ; 005760e6
    PUSH EBP                            ; 005760ec
    CALL dword ptr [EBX + 0x4]          ; 005760ed
    ADD ESP,0x10                        ; 005760f0
    CALL sound_sndmain.cpp_closeSoundDevice_FUN_00575670 ; 005760f3
        ;   XREF to: 00575670 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_closeSoundDevice_FUN_00575670()
    XOR EBX,EBX                         ; 005760f8
    CALL sound_sndmain.cpp_getSoundDeviceCount_FUN_005752c0 ; 005760fa
        ;   XREF to: 005752c0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getSoundDeviceCount_FUN_005752c0()
        ;   Label: LAB_005760fa
    CMP EBX,EAX                         ; 005760ff
    JL 0x0057616e                       ; 00576101
        ;   XREF to: 0057616e (CONDITIONAL_JUMP)  ; LAB_0057616e
    PUSH 0x100                          ; 00576103
        ;   Label: LAB_00576103
    LEA EBX,[ESP + 0x224]               ; 00576108
    XOR AH,AH                           ; 0057610f
    PUSH EBX                            ; 00576111
    MOV byte ptr [ESP + 0x228],AH       ; 00576112
    PUSH 0x5f44d3                       ; 00576119 | = "RecordingDeviceName"
    MOV EAX,dword ptr [EBP + 0x200]     ; 0057611e
    PUSH EBP                            ; 00576124
    CALL dword ptr [EAX + 0x4]          ; 00576125
    ADD ESP,0x10                        ; 00576128
    XOR EBX,EBX                         ; 0057612b
    CALL sound_sndmain.cpp_releaseRecordingDevice_FUN_00575940 ; 0057612d
        ;   XREF to: 00575940 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_releaseRecordingDevice_FUN_00575940()
    CALL sound_sndmain.cpp_getRecordingDeviceCount_FUN_00575730 ; 00576132
        ;   XREF to: 00575730 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getRecordingDeviceCount_FUN_00575730()
        ;   Label: LAB_00576132
    CMP EBX,EAX                         ; 00576137
    JGE 0x005761aa                      ; 00576139
        ;   XREF to: 005761aa (CONDITIONAL_JUMP)  ; LAB_005761aa
    LEA EAX,[ESP + 0x118]               ; 0057613b
    PUSH EAX                            ; 00576142
    PUSH EBX                            ; 00576143
    CALL sound_sndmain.cpp_getRecordingDeviceInfo_FUN_00575790 ; 00576144
        ;   XREF to: 00575790 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_getRecordingDeviceInfo_FUN_00575790(int index, SRecordingDeviceInfo * device_info)
    ADD ESP,0x8                         ; 00576149
    LEA EAX,[ESP + 0x220]               ; 0057614c
    PUSH EAX                            ; 00576153
    LEA EAX,[ESP + 0x11c]               ; 00576154
    PUSH EAX                            ; 0057615b
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0057615c
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 00576161
    TEST EAX,EAX                        ; 00576164
    JZ 0x005761a1                       ; 00576166
        ;   XREF to: 005761a1 (CONDITIONAL_JUMP)  ; LAB_005761a1
    INC EBX                             ; 00576168
    JMP 0x00576132                      ; 00576169
        ;   XREF to: 00576132 (UNCONDITIONAL_JUMP)  ; LAB_00576132
    INC EBX                             ; 0057616b
        ;   Label: LAB_0057616b
    JMP 0x005760fa                      ; 0057616c
        ;   XREF to: 005760fa (UNCONDITIONAL_JUMP)  ; LAB_005760fa
    MOV EAX,ESP                         ; 0057616e
        ;   Label: LAB_0057616e
    PUSH EAX                            ; 00576170
    PUSH EBX                            ; 00576171
    CALL sound_sndmain.cpp_getSoundDeviceInfo_FUN_00575350 ; 00576172
        ;   XREF to: 00575350 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_getSoundDeviceInfo_FUN_00575350(int device_id, SSoundDeviceInfo * device_info)
    ADD ESP,0x8                         ; 00576177
    LEA EAX,[ESP + 0x220]               ; 0057617a
    PUSH EAX                            ; 00576181
    LEA EAX,[ESP + 0x4]                 ; 00576182
    PUSH EAX                            ; 00576186
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 00576187
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0057618c
    TEST EAX,EAX                        ; 0057618f
    JNZ 0x0057616b                      ; 00576191
        ;   XREF to: 0057616b (CONDITIONAL_JUMP)  ; LAB_0057616b
    PUSH EBX                            ; 00576193
    CALL sound_sndmain.cpp_selectSoundDevice_FUN_005754d0 ; 00576194
        ;   XREF to: 005754d0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_selectSoundDevice_FUN_005754d0(int device_id)
    ADD ESP,0x4                         ; 00576199
    JMP 0x00576103                      ; 0057619c
        ;   XREF to: 00576103 (UNCONDITIONAL_JUMP)  ; LAB_00576103
    PUSH EBX                            ; 005761a1
        ;   Label: LAB_005761a1
    CALL sound_sndmain.cpp_selectRecordingDevice_FUN_00575870 ; 005761a2
        ;   XREF to: 00575870 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_selectRecordingDevice_FUN_00575870(int device_id)
    ADD ESP,0x4                         ; 005761a7
    CALL sound_sndmain.cpp_isHardwareMixingEnabled_FUN_00575570 ; 005761aa
        ;   XREF to: 00575570 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isHardwareMixingEnabled_FUN_00575570()
        ;   Label: LAB_005761aa
    MOV dword ptr [ESP + 0x384],EAX     ; 005761af
    LEA EAX,[ESP + 0x384]               ; 005761b6
    PUSH EAX                            ; 005761bd
    PUSH 0x5f44e7                       ; 005761be | = "AccelEnabled"
    PUSH EBP                            ; 005761c3
    CALL engine_ini.cpp_FUN_004f4d10    ; 005761c4
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    ADD ESP,0xc                         ; 005761c9
    MOV EDX,dword ptr [ESP + 0x384]     ; 005761cc
    PUSH EDX                            ; 005761d3
    CALL sound_sndmain.cpp_enableHwSoundMixing_FUN_00575580 ; 005761d4
        ;   XREF to: 00575580 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_enableHwSoundMixing_FUN_00575580(int enable)
    ADD ESP,0x4                         ; 005761d9
    CALL sound_sndmain.cpp_getMaxSwLatency_FUN_00576030 ; 005761dc
        ;   XREF to: 00576030 (UNCONDITIONAL_CALL)  ; float sound_sndmain.cpp_getMaxSwLatency_FUN_00576030()
    MOV dword ptr [ESP + 0x3a0],EAX     ; 005761e1
    LEA EAX,[ESP + 0x388]               ; 005761e8
    PUSH EAX                            ; 005761ef
    PUSH 0x5f44f4                       ; 005761f0 | = "MaxSwLatency"
    FLD float ptr [ESP + 0x3a8]         ; 005761f5
    PUSH EBP                            ; 005761fc
    FSTP float ptr [ESP + 0x394]        ; 005761fd
    CALL engine_ini.cpp_FUN_004f4db0    ; 00576204
        ;   XREF to: 004f4db0 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4db0()
    ADD ESP,0xc                         ; 00576209
    PUSH dword ptr [ESP + 0x388]        ; 0057620c
    CALL sound_sndmain.cpp_setMaxSwSoundLatency_FUN_00576040 ; 00576213
        ;   XREF to: 00576040 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setMaxSwSoundLatency_FUN_00576040(float latency)
    ADD ESP,0x4                         ; 00576218
    LEA EAX,[ESP + 0x394]               ; 0057621b
    PUSH EAX                            ; 00576222
    LEA EAX,[ESP + 0x394]               ; 00576223
    PUSH EAX                            ; 0057622a
    LEA EAX,[ESP + 0x394]               ; 0057622b
    PUSH EAX                            ; 00576232
    CALL sound_sndmain.cpp_getAudioFormat_FUN_005751c0 ; 00576233
        ;   XREF to: 005751c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_getAudioFormat_FUN_005751c0(int * bits_per_sample, int * channels, int * sample_rate)
    ADD ESP,0xc                         ; 00576238
    LEA EAX,[ESP + 0x38c]               ; 0057623b
    PUSH EAX                            ; 00576242
    PUSH 0x5f4501                       ; 00576243 | DAT_005f4501
    PUSH EBP                            ; 00576248
    CALL engine_ini.cpp_FUN_004f4d10    ; 00576249
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    ADD ESP,0xc                         ; 0057624e
    LEA EAX,[ESP + 0x390]               ; 00576251
    PUSH EAX                            ; 00576258
    PUSH 0x5f4506                       ; 00576259 | = "Channels"
    PUSH EBP                            ; 0057625e
    CALL engine_ini.cpp_FUN_004f4d10    ; 0057625f
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    ADD ESP,0xc                         ; 00576264
    LEA EAX,[ESP + 0x394]               ; 00576267
    PUSH EAX                            ; 0057626e
    PUSH 0x5f450f                       ; 0057626f | DAT_005f450f
    PUSH EBP                            ; 00576274
    CALL engine_ini.cpp_FUN_004f4d10    ; 00576275
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    ADD ESP,0xc                         ; 0057627a
    MOV ECX,dword ptr [ESP + 0x394]     ; 0057627d
    PUSH ECX                            ; 00576284
    MOV EBX,dword ptr [ESP + 0x394]     ; 00576285
    PUSH EBX                            ; 0057628c
    MOV ESI,dword ptr [ESP + 0x394]     ; 0057628d
    PUSH ESI                            ; 00576294
    CALL sound_sndmain.cpp_setSoundOutputMode_FUN_00575120 ; 00576295
        ;   XREF to: 00575120 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSoundOutputMode_FUN_00575120(int bits_per_sample, int channels, int sample_rate)
    ADD ESP,0xc                         ; 0057629a
    CALL sound_sndmain.cpp_isSoundMuted_FUN_005735f0 ; 0057629d
        ;   XREF to: 005735f0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSoundMuted_FUN_005735f0()
    MOV dword ptr [ESP + 0x384],EAX     ; 005762a2
    LEA EAX,[ESP + 0x384]               ; 005762a9
    PUSH EAX                            ; 005762b0
    PUSH 0x5f4512                       ; 005762b1 | DAT_005f4512
    PUSH EBP                            ; 005762b6
    CALL engine_ini.cpp_FUN_004f4d10    ; 005762b7
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    ADD ESP,0xc                         ; 005762bc
    MOV EDI,dword ptr [ESP + 0x384]     ; 005762bf
    PUSH EDI                            ; 005762c6
    XOR EBX,EBX                         ; 005762c7
    CALL sound_sndmain.cpp_setSoundMuted_FUN_00573600 ; 005762c9
        ;   XREF to: 00573600 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSoundMuted_FUN_00573600(int muted)
    MOV EAX,[0x006232e4]                ; 005762ce | DAT_006232e4
    ADD ESP,0x4                         ; 005762d3
    TEST EAX,EAX                        ; 005762d6
    JLE 0x005763a0                      ; 005762d8
        ;   XREF to: 005763a0 (CONDITIONAL_JUMP)  ; LAB_005763a0
    PUSH EBX                            ; 005762de
        ;   Label: LAB_005762de
    PUSH 0x5f4517                       ; 005762df | = "SfxChannel%dEnabled"
    LEA EAX,[ESP + 0x328]               ; 005762e4
    PUSH EAX                            ; 005762eb
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 005762ec
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 005762f1
    PUSH EBX                            ; 005762f4
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_00573cd0 ; 005762f5
        ;   XREF to: 00573cd0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxChannelEnabled_FUN_00573cd0(int channel_index)
    ADD ESP,0x4                         ; 005762fa
    MOV dword ptr [ESP + 0x398],EAX     ; 005762fd
    LEA EAX,[ESP + 0x398]               ; 00576304
    PUSH EAX                            ; 0057630b
    LEA EAX,[ESP + 0x324]               ; 0057630c
    PUSH EAX                            ; 00576313
    PUSH EBP                            ; 00576314
    CALL engine_ini.cpp_FUN_004f4d10    ; 00576315
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    ADD ESP,0xc                         ; 0057631a
    MOV EDX,dword ptr [ESP + 0x398]     ; 0057631d
    PUSH EDX                            ; 00576324
    PUSH EBX                            ; 00576325
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_00573c50 ; 00576326
        ;   XREF to: 00573c50 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_enableSfxChannel_FUN_00573c50(int channel_index, int enable_state)
    ADD ESP,0x8                         ; 0057632b
    PUSH EBX                            ; 0057632e
    PUSH 0x5f452b                       ; 0057632f | = "SfxChannel%dVol"
    LEA EAX,[ESP + 0x328]               ; 00576334
    PUSH EAX                            ; 0057633b
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0057633c
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 00576341
    PUSH EBX                            ; 00576344
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_00573bc0 ; 00576345
        ;   XREF to: 00573bc0 (UNCONDITIONAL_CALL)  ; float sound_sndmain.cpp_getSfxChannelVol_FUN_00573bc0(int channel_index)
    MOV dword ptr [ESP + 0x3a4],EAX     ; 0057634a
    FLD float ptr [ESP + 0x3a4]         ; 00576351
    ADD ESP,0x4                         ; 00576358
    LEA EAX,[ESP + 0x39c]               ; 0057635b
    PUSH EAX                            ; 00576362
    LEA EAX,[ESP + 0x324]               ; 00576363
    PUSH EAX                            ; 0057636a
    PUSH EBP                            ; 0057636b
    FSTP float ptr [ESP + 0x3a8]        ; 0057636c
    CALL engine_ini.cpp_FUN_004f4db0    ; 00576373
        ;   XREF to: 004f4db0 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4db0()
    ADD ESP,0xc                         ; 00576378
    PUSH dword ptr [ESP + 0x39c]        ; 0057637b
    PUSH EBX                            ; 00576382
    CALL sound_sndmain.cpp_setSfxChannelVol_FUN_00573b30 ; 00576383
        ;   XREF to: 00573b30 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setSfxChannelVol_FUN_00573b30(int channel_index, float volume)
    MOV ECX,dword ptr [0x006232e4]      ; 00576388 | DAT_006232e4
    INC EBX                             ; 0057638e
    ADD ESP,0x8                         ; 0057638f
    CMP EBX,ECX                         ; 00576392
    JL 0x005762de                       ; 00576394
        ;   XREF to: 005762de (CONDITIONAL_JUMP)  ; LAB_005762de
    LEA EAX,[EAX]                       ; 0057639a
    ADD ESP,0x3a4                       ; 005763a0
        ;   Label: LAB_005763a0
    POP EBP                             ; 005763a6
    POP EDI                             ; 005763a7
    POP ESI                             ; 005763a8
    POP EBX                             ; 005763a9
    RET                                 ; 005763aa

