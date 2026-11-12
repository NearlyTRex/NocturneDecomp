; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_readIni_FUN_00559220(CIniFile *ini_file)
;
; Parameters:
; CIniFile *       Stack[0x4]:4   ini_file
; Local Variables:
; undefined        Stack[-0x194]:1  local_194
;
; XREF[1]:
;   core_inivar.cpp_readIniData_FUN_004d8e70 at 004d907b
;
; Referenced Globals:
;   undefined4 s_DeviceName_005d3dc1+1
;   TerminatedCString s_RecordingDeviceName_005d3dcd
;   TerminatedCString s_AccelEnabled_005d3de1
;   TerminatedCString s_MaxSwLatency_005d3dee
;   undefined4 DAT_005d3dfb
;   TerminatedCString s_Channels_005d3e00
;   undefined4 DAT_005d3e09
;   undefined4 DAT_005d3e0c
;   TerminatedCString s_SfxChannel_dEnabled_005d3e11
;   TerminatedCString s_SfxChannel_dVol_005d3e25
;   undefined4 DAT_00604224
;   undefined4 DAT_00604268
;   undefined4 DAT_0060426c
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005a3260
;   crt_unknown.c_sprintf_FUN_005a28c0
;   engine_ini.cpp_FUN_004d8c30
;   engine_ini.cpp_FUN_004d8cd0
;   sound_sndmain.cpp_closeSoundDevice_FUN_005587e0
;   sound_sndmain.cpp_enableSfxChannel_FUN_00556db0
;   sound_sndmain.cpp_FUN_005586f0
;   sound_sndmain.cpp_getAudioFormat_FUN_00558330
;   sound_sndmain.cpp_getMaxSwLatency_FUN_005591a0
;   sound_sndmain.cpp_getRecordingDeviceCount_FUN_005588a0
;   sound_sndmain.cpp_getRecordingDeviceInfo_FUN_00558900
;   sound_sndmain.cpp_getSfxChannelVol_FUN_00556d20
;   sound_sndmain.cpp_getSoundDeviceCount_FUN_00558430
;   sound_sndmain.cpp_getSoundDeviceInfo_FUN_005584c0
;   sound_sndmain.cpp_isHardwareMixingEnabled_FUN_005586e0
;   ... and 9 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00559220
        ;   Label: sound_sndmain.cpp_readIni_FUN_00559220
    PUSH ESI                            ; 00559221
    PUSH EDI                            ; 00559222
    PUSH EBP                            ; 00559223
    SUB ESP,0x3a4                       ; 00559224
    MOV EBP,dword ptr [ESP + 0x3b8]     ; 0055922a
    MOV ECX,0x40                        ; 00559231
    LEA EDI,[ESP + 0x220]               ; 00559236
    PUSH 0x100                          ; 0055923d
    LEA EAX,[ESP + 0x224]               ; 00559242
    MOV ESI,0x604268                    ; 00559249 | DAT_00604268
    PUSH EAX                            ; 0055924e
    MOVSD.REP ES:EDI,ESI                ; 0055924f | DAT_00604268 | DAT_0060426c
    PUSH 0x5d3dc2                       ; 00559251 | s_DeviceName_005d3dc1+1
    MOV EBX,dword ptr [EBP + 0x200]     ; 00559256
    PUSH EBP                            ; 0055925c
    CALL dword ptr [EBX + 0x4]          ; 0055925d
    ADD ESP,0x10                        ; 00559260
    CALL sound_sndmain.cpp_closeSoundDevice_FUN_005587e0 ; 00559263
        ;   XREF to: 005587e0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_closeSoundDevice_FUN_005587e0()
    XOR EBX,EBX                         ; 00559268
    CALL sound_sndmain.cpp_getSoundDeviceCount_FUN_00558430 ; 0055926a
        ;   XREF to: 00558430 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getSoundDeviceCount_FUN_00558430()
        ;   Label: LAB_0055926a
    CMP EBX,EAX                         ; 0055926f
    JL 0x005592de                       ; 00559271
        ;   XREF to: 005592de (CONDITIONAL_JUMP)  ; LAB_005592de
    PUSH 0x100                          ; 00559273
        ;   Label: LAB_00559273
    LEA EBX,[ESP + 0x224]               ; 00559278
    XOR AH,AH                           ; 0055927f
    PUSH EBX                            ; 00559281
    MOV byte ptr [ESP + 0x228],AH       ; 00559282
    PUSH 0x5d3dcd                       ; 00559289 | = "RecordingDeviceName"
    MOV EAX,dword ptr [EBP + 0x200]     ; 0055928e
    PUSH EBP                            ; 00559294
    CALL dword ptr [EAX + 0x4]          ; 00559295
    ADD ESP,0x10                        ; 00559298
    XOR EBX,EBX                         ; 0055929b
    CALL sound_sndmain.cpp_releaseRecordingDevice_FUN_00558ab0 ; 0055929d
        ;   XREF to: 00558ab0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_releaseRecordingDevice_FUN_00558ab0()
    CALL sound_sndmain.cpp_getRecordingDeviceCount_FUN_005588a0 ; 005592a2
        ;   XREF to: 005588a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getRecordingDeviceCount_FUN_005588a0()
        ;   Label: LAB_005592a2
    CMP EBX,EAX                         ; 005592a7
    JGE 0x0055931a                      ; 005592a9
        ;   XREF to: 0055931a (CONDITIONAL_JUMP)  ; LAB_0055931a
    LEA EAX,[ESP + 0x118]               ; 005592ab
    PUSH EAX                            ; 005592b2
    PUSH EBX                            ; 005592b3
    CALL sound_sndmain.cpp_getRecordingDeviceInfo_FUN_00558900 ; 005592b4
        ;   XREF to: 00558900 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_getRecordingDeviceInfo_FUN_00558900(int index, SRecordingDeviceInfo * device_info)
    ADD ESP,0x8                         ; 005592b9
    LEA EAX,[ESP + 0x220]               ; 005592bc
    PUSH EAX                            ; 005592c3
    LEA EAX,[ESP + 0x11c]               ; 005592c4
    PUSH EAX                            ; 005592cb
    CALL crt_string.c__stricmp_FUN_005a3260 ; 005592cc
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 005592d1
    TEST EAX,EAX                        ; 005592d4
    JZ 0x00559311                       ; 005592d6
        ;   XREF to: 00559311 (CONDITIONAL_JUMP)  ; LAB_00559311
    INC EBX                             ; 005592d8
    JMP 0x005592a2                      ; 005592d9
        ;   XREF to: 005592a2 (UNCONDITIONAL_JUMP)  ; LAB_005592a2
    INC EBX                             ; 005592db
        ;   Label: LAB_005592db
    JMP 0x0055926a                      ; 005592dc
        ;   XREF to: 0055926a (UNCONDITIONAL_JUMP)  ; LAB_0055926a
    MOV EAX,ESP                         ; 005592de
        ;   Label: LAB_005592de
    PUSH EAX                            ; 005592e0
    PUSH EBX                            ; 005592e1
    CALL sound_sndmain.cpp_getSoundDeviceInfo_FUN_005584c0 ; 005592e2
        ;   XREF to: 005584c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_getSoundDeviceInfo_FUN_005584c0(int device_id, SSoundDeviceInfo * device_info)
    ADD ESP,0x8                         ; 005592e7
    LEA EAX,[ESP + 0x220]               ; 005592ea
    PUSH EAX                            ; 005592f1
    LEA EAX,[ESP + 0x4]                 ; 005592f2
    PUSH EAX                            ; 005592f6
    CALL crt_string.c__stricmp_FUN_005a3260 ; 005592f7
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 005592fc
    TEST EAX,EAX                        ; 005592ff
    JNZ 0x005592db                      ; 00559301
        ;   XREF to: 005592db (CONDITIONAL_JUMP)  ; LAB_005592db
    PUSH EBX                            ; 00559303
    CALL sound_sndmain.cpp_selectSoundDevice_FUN_00558640 ; 00559304
        ;   XREF to: 00558640 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_selectSoundDevice_FUN_00558640(int device_id)
    ADD ESP,0x4                         ; 00559309
    JMP 0x00559273                      ; 0055930c
        ;   XREF to: 00559273 (UNCONDITIONAL_JUMP)  ; LAB_00559273
    PUSH EBX                            ; 00559311
        ;   Label: LAB_00559311
    CALL sound_sndmain.cpp_selectRecordingDevice_FUN_005589e0 ; 00559312
        ;   XREF to: 005589e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_selectRecordingDevice_FUN_005589e0(int device_id)
    ADD ESP,0x4                         ; 00559317
    CALL sound_sndmain.cpp_isHardwareMixingEnabled_FUN_005586e0 ; 0055931a
        ;   XREF to: 005586e0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isHardwareMixingEnabled_FUN_005586e0()
        ;   Label: LAB_0055931a
    MOV dword ptr [ESP + 0x384],EAX     ; 0055931f
    LEA EAX,[ESP + 0x384]               ; 00559326
    PUSH EAX                            ; 0055932d
    PUSH 0x5d3de1                       ; 0055932e | = "AccelEnabled"
    PUSH EBP                            ; 00559333
    CALL engine_ini.cpp_FUN_004d8c30    ; 00559334
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    ADD ESP,0xc                         ; 00559339
    MOV EDX,dword ptr [ESP + 0x384]     ; 0055933c
    PUSH EDX                            ; 00559343
    CALL sound_sndmain.cpp_FUN_005586f0 ; 00559344
        ;   XREF to: 005586f0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005586f0()
    ADD ESP,0x4                         ; 00559349
    CALL sound_sndmain.cpp_getMaxSwLatency_FUN_005591a0 ; 0055934c
        ;   XREF to: 005591a0 (UNCONDITIONAL_CALL)  ; float sound_sndmain.cpp_getMaxSwLatency_FUN_005591a0()
    MOV dword ptr [ESP + 0x3a0],EAX     ; 00559351
    LEA EAX,[ESP + 0x388]               ; 00559358
    PUSH EAX                            ; 0055935f
    PUSH 0x5d3dee                       ; 00559360 | = "MaxSwLatency"
    FLD float ptr [ESP + 0x3a8]         ; 00559365
    PUSH EBP                            ; 0055936c
    FSTP float ptr [ESP + 0x394]        ; 0055936d
    CALL engine_ini.cpp_FUN_004d8cd0    ; 00559374
        ;   XREF to: 004d8cd0 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8cd0()
    ADD ESP,0xc                         ; 00559379
    PUSH dword ptr [ESP + 0x388]        ; 0055937c
    CALL sound_sndmain.cpp_setMaxSwSoundLatency_FUN_005591b0 ; 00559383
        ;   XREF to: 005591b0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setMaxSwSoundLatency_FUN_005591b0(float latency)
    ADD ESP,0x4                         ; 00559388
    LEA EAX,[ESP + 0x394]               ; 0055938b
    PUSH EAX                            ; 00559392
    LEA EAX,[ESP + 0x394]               ; 00559393
    PUSH EAX                            ; 0055939a
    LEA EAX,[ESP + 0x394]               ; 0055939b
    PUSH EAX                            ; 005593a2
    CALL sound_sndmain.cpp_getAudioFormat_FUN_00558330 ; 005593a3
        ;   XREF to: 00558330 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_getAudioFormat_FUN_00558330(int * bits_per_sample, int * channels, int * sample_rate)
    ADD ESP,0xc                         ; 005593a8
    LEA EAX,[ESP + 0x38c]               ; 005593ab
    PUSH EAX                            ; 005593b2
    PUSH 0x5d3dfb                       ; 005593b3 | DAT_005d3dfb
    PUSH EBP                            ; 005593b8
    CALL engine_ini.cpp_FUN_004d8c30    ; 005593b9
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    ADD ESP,0xc                         ; 005593be
    LEA EAX,[ESP + 0x390]               ; 005593c1
    PUSH EAX                            ; 005593c8
    PUSH 0x5d3e00                       ; 005593c9 | = "Channels"
    PUSH EBP                            ; 005593ce
    CALL engine_ini.cpp_FUN_004d8c30    ; 005593cf
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    ADD ESP,0xc                         ; 005593d4
    LEA EAX,[ESP + 0x394]               ; 005593d7
    PUSH EAX                            ; 005593de
    PUSH 0x5d3e09                       ; 005593df | DAT_005d3e09
    PUSH EBP                            ; 005593e4
    CALL engine_ini.cpp_FUN_004d8c30    ; 005593e5
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    ADD ESP,0xc                         ; 005593ea
    MOV ECX,dword ptr [ESP + 0x394]     ; 005593ed
    PUSH ECX                            ; 005593f4
    MOV EBX,dword ptr [ESP + 0x394]     ; 005593f5
    PUSH EBX                            ; 005593fc
    MOV ESI,dword ptr [ESP + 0x394]     ; 005593fd
    PUSH ESI                            ; 00559404
    CALL sound_sndmain.cpp_setSoundOutputMode_FUN_00558290 ; 00559405
        ;   XREF to: 00558290 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSoundOutputMode_FUN_00558290(int bits_per_sample, int channels, int sample_rate)
    ADD ESP,0xc                         ; 0055940a
    CALL sound_sndmain.cpp_isSoundMuted_FUN_00556750 ; 0055940d
        ;   XREF to: 00556750 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSoundMuted_FUN_00556750()
    MOV dword ptr [ESP + 0x384],EAX     ; 00559412
    LEA EAX,[ESP + 0x384]               ; 00559419
    PUSH EAX                            ; 00559420
    PUSH 0x5d3e0c                       ; 00559421 | DAT_005d3e0c
    PUSH EBP                            ; 00559426
    CALL engine_ini.cpp_FUN_004d8c30    ; 00559427
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    ADD ESP,0xc                         ; 0055942c
    MOV EDI,dword ptr [ESP + 0x384]     ; 0055942f
    PUSH EDI                            ; 00559436
    XOR EBX,EBX                         ; 00559437
    CALL sound_sndmain.cpp_setSoundMuted_FUN_00556760 ; 00559439
        ;   XREF to: 00556760 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSoundMuted_FUN_00556760(int muted)
    MOV EAX,[0x00604224]                ; 0055943e | DAT_00604224
    ADD ESP,0x4                         ; 00559443
    TEST EAX,EAX                        ; 00559446
    JLE 0x00559510                      ; 00559448
        ;   XREF to: 00559510 (CONDITIONAL_JUMP)  ; LAB_00559510
    PUSH EBX                            ; 0055944e
        ;   Label: LAB_0055944e
    PUSH 0x5d3e11                       ; 0055944f | = "SfxChannel%dEnabled"
    LEA EAX,[ESP + 0x328]               ; 00559454
    PUSH EAX                            ; 0055945b
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0055945c
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00559461
    PUSH EBX                            ; 00559464
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_00556e30 ; 00559465
        ;   XREF to: 00556e30 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxChannelEnabled_FUN_00556e30(int channel_index)
    ADD ESP,0x4                         ; 0055946a
    MOV dword ptr [ESP + 0x398],EAX     ; 0055946d
    LEA EAX,[ESP + 0x398]               ; 00559474
    PUSH EAX                            ; 0055947b
    LEA EAX,[ESP + 0x324]               ; 0055947c
    PUSH EAX                            ; 00559483
    PUSH EBP                            ; 00559484
    CALL engine_ini.cpp_FUN_004d8c30    ; 00559485
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    ADD ESP,0xc                         ; 0055948a
    MOV EDX,dword ptr [ESP + 0x398]     ; 0055948d
    PUSH EDX                            ; 00559494
    PUSH EBX                            ; 00559495
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_00556db0 ; 00559496
        ;   XREF to: 00556db0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_enableSfxChannel_FUN_00556db0(int channel_index, int enable_state)
    ADD ESP,0x8                         ; 0055949b
    PUSH EBX                            ; 0055949e
    PUSH 0x5d3e25                       ; 0055949f | = "SfxChannel%dVol"
    LEA EAX,[ESP + 0x328]               ; 005594a4
    PUSH EAX                            ; 005594ab
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 005594ac
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005594b1
    PUSH EBX                            ; 005594b4
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_00556d20 ; 005594b5
        ;   XREF to: 00556d20 (UNCONDITIONAL_CALL)  ; float sound_sndmain.cpp_getSfxChannelVol_FUN_00556d20(int channel_index)
    MOV dword ptr [ESP + 0x3a4],EAX     ; 005594ba
    FLD float ptr [ESP + 0x3a4]         ; 005594c1
    ADD ESP,0x4                         ; 005594c8
    LEA EAX,[ESP + 0x39c]               ; 005594cb
    PUSH EAX                            ; 005594d2
    LEA EAX,[ESP + 0x324]               ; 005594d3
    PUSH EAX                            ; 005594da
    PUSH EBP                            ; 005594db
    FSTP float ptr [ESP + 0x3a8]        ; 005594dc
    CALL engine_ini.cpp_FUN_004d8cd0    ; 005594e3
        ;   XREF to: 004d8cd0 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8cd0()
    ADD ESP,0xc                         ; 005594e8
    PUSH dword ptr [ESP + 0x39c]        ; 005594eb
    PUSH EBX                            ; 005594f2
    CALL sound_sndmain.cpp_setSfxChannelVol_FUN_00556c90 ; 005594f3
        ;   XREF to: 00556c90 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setSfxChannelVol_FUN_00556c90(int channel_index, float volume)
    MOV ECX,dword ptr [0x00604224]      ; 005594f8 | DAT_00604224
    INC EBX                             ; 005594fe
    ADD ESP,0x8                         ; 005594ff
    CMP EBX,ECX                         ; 00559502
    JL 0x0055944e                       ; 00559504
        ;   XREF to: 0055944e (CONDITIONAL_JUMP)  ; LAB_0055944e
    LEA EAX,[EAX]                       ; 0055950a
    ADD ESP,0x3a4                       ; 00559510
        ;   Label: LAB_00559510
    POP EBP                             ; 00559516
    POP EDI                             ; 00559517
    POP ESI                             ; 00559518
    POP EBX                             ; 00559519
    RET                                 ; 0055951a

