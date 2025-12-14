; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_sndmain.cpp_writeIni_FUN_005ac220(CIniFile * ini_file)
;
; Parameters:
; CIniFile *       Stack[0x4]:4   ini_file
; Local Variables:
; undefined4       Stack[-0x2a0]:4  local_2a0
; undefined1       Stack[-0x29c]:1  local_29c
; undefined1       Stack[-0x29b]:1  local_29b
; undefined1       Stack[-0x184]:1  local_184
; undefined1       Stack[-0x183]:1  local_183
; undefined1       Stack[-0x84]:1  local_84
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_inivar.cpp_writeIniData_FUN_004fc510 at 004fc6bf
;
; Referenced Globals:
;   TerminatedCString s_DeviceName_00650fad
;   TerminatedCString s_Bits_00650fb8
;   TerminatedCString s_Channels_00650fbd
;   TerminatedCString s_Hz_00650fc6
;   TerminatedCString s_HwMixingEnabled_00650fc9
;   TerminatedCString s_MaxSwLatency_00650fd9
;   TerminatedCString s_Mute_00650fe6
;   TerminatedCString s_SfxChannel_dEnabled_00650feb
;   TerminatedCString s_SfxChannel_dVol_00650fff
;   int g_MaxSoundChannels = 0x20
;   int g_CurrentSoundDevice = -0x1
;   char[256] g_DefaultDeviceName
;   undefined4 s__00681c64
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_ini.cpp_CIniFile_setFloatValue_FUN_004fbd30
;   engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
;   engine_ini.cpp_CIniFile_setString_FUN_004fbbb0
;   sound_sndmain.cpp_getAudioFormat_FUN_005ab210
;   sound_sndmain.cpp_getMaxSwLatency_FUN_005abea0
;   sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90
;   sound_sndmain.cpp_getSoundDeviceCount_FUN_005ab2e0
;   sound_sndmain.cpp_getSoundDeviceInfo_FUN_005ab370
;   sound_sndmain.cpp_isHardwareMixingEnabled_FUN_005ab590
;   sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0
;   sound_sndmain.cpp_isSoundEnabled_FUN_005a96b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ac220
        ;   Label: sound_sndmain.cpp_writeIni_FUN_005ac220
    PUSH ESI                            ; 005ac221
    PUSH EDI                            ; 005ac222
    PUSH EBP                            ; 005ac223
    SUB ESP,0x28c                       ; 005ac224
    MOV EBP,dword ptr [ESP + 0x2a0]     ; 005ac22a
    MOV ECX,0x40                        ; 005ac231
    LEA EDI,[ESP + 0x118]               ; 005ac236
    MOV ESI,0x681c60                    ; 005ac23d | g_DefaultDeviceName
    MOV EDX,dword ptr [0x00681b24]      ; 005ac242 | g_CurrentSoundDevice
    MOVSD.REP ES:EDI,ESI                ; 005ac248 | g_DefaultDeviceName | s__00681c64
    TEST EDX,EDX                        ; 005ac24a
    JL 0x005ac28c                       ; 005ac24c
        ;   XREF to: 005ac28c (CONDITIONAL_JUMP)  ; LAB_005ac28c
    CALL sound_sndmain.cpp_getSoundDeviceCount_FUN_005ab2e0 ; 005ac24e
        ;   XREF to: 005ab2e0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getSoundDeviceCount_FUN_005ab2e0()
    MOV ECX,dword ptr [0x00681b24]      ; 005ac253 | g_CurrentSoundDevice
    CMP EAX,ECX                         ; 005ac259
    JLE 0x005ac28c                      ; 005ac25b
        ;   XREF to: 005ac28c (CONDITIONAL_JUMP)  ; LAB_005ac28c
    MOV EAX,ESP                         ; 005ac25d
    PUSH EAX                            ; 005ac25f
    PUSH ECX                            ; 005ac260
    CALL sound_sndmain.cpp_getSoundDeviceInfo_FUN_005ab370 ; 005ac261
        ;   XREF to: 005ab370 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_getSoundDeviceInfo_FUN_005ab370(int device_id, SSoundDeviceInfo * device_info)
    ADD ESP,0x8                         ; 005ac266
    MOV ESI,ESP                         ; 005ac269
    LEA EDI,[ESP + 0x118]               ; 005ac26b
    PUSH EDI                            ; 005ac272
    MOV AL,byte ptr [ESI]               ; 005ac273
        ;   Label: LAB_005ac273
    MOV byte ptr [EDI],AL               ; 005ac275
    CMP AL,0x0                          ; 005ac277
    JZ 0x005ac28b                       ; 005ac279
        ;   XREF to: 005ac28b (CONDITIONAL_JUMP)  ; LAB_005ac28b
    MOV AL,byte ptr [ESI + 0x1]         ; 005ac27b
    ADD ESI,0x2                         ; 005ac27e
    MOV byte ptr [EDI + 0x1],AL         ; 005ac281
    ADD EDI,0x2                         ; 005ac284
    CMP AL,0x0                          ; 005ac287
    JNZ 0x005ac273                      ; 005ac289
        ;   XREF to: 005ac273 (CONDITIONAL_JUMP)  ; LAB_005ac273
    POP EDI                             ; 005ac28b
        ;   Label: LAB_005ac28b
    LEA EAX,[ESP + 0x118]               ; 005ac28c
        ;   Label: LAB_005ac28c
    PUSH EAX                            ; 005ac293
    PUSH 0x650fad                       ; 005ac294 | = "DeviceName"
    PUSH EBP                            ; 005ac299
    CALL engine_ini.cpp_CIniFile_setString_FUN_004fbbb0 ; 005ac29a
        ;   XREF to: 004fbbb0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setString_FUN_004fbbb0(CIniFile * this, char * key, char * value)
    ADD ESP,0xc                         ; 005ac29f
    LEA EAX,[ESP + 0x280]               ; 005ac2a2
    PUSH EAX                            ; 005ac2a9
    LEA EAX,[ESP + 0x280]               ; 005ac2aa
    PUSH EAX                            ; 005ac2b1
    LEA EAX,[ESP + 0x28c]               ; 005ac2b2
    PUSH EAX                            ; 005ac2b9
    CALL sound_sndmain.cpp_getAudioFormat_FUN_005ab210 ; 005ac2ba
        ;   XREF to: 005ab210 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_getAudioFormat_FUN_005ab210(int * bits_per_sample, int * channels, int * sample_rate)
    ADD ESP,0xc                         ; 005ac2bf
    MOV ESI,dword ptr [ESP + 0x284]     ; 005ac2c2
    PUSH ESI                            ; 005ac2c9
    PUSH 0x650fb8                       ; 005ac2ca | = "Bits"
    PUSH EBP                            ; 005ac2cf
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 005ac2d0
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    ADD ESP,0xc                         ; 005ac2d5
    MOV EDI,dword ptr [ESP + 0x27c]     ; 005ac2d8
    PUSH EDI                            ; 005ac2df
    PUSH 0x650fbd                       ; 005ac2e0 | = "Channels"
    PUSH EBP                            ; 005ac2e5
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 005ac2e6
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    ADD ESP,0xc                         ; 005ac2eb
    MOV EAX,dword ptr [ESP + 0x280]     ; 005ac2ee
    PUSH EAX                            ; 005ac2f5
    PUSH 0x650fc6                       ; 005ac2f6 | = "Hz"
    PUSH EBP                            ; 005ac2fb
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 005ac2fc
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    ADD ESP,0xc                         ; 005ac301
    CALL sound_sndmain.cpp_isHardwareMixingEnabled_FUN_005ab590 ; 005ac304
        ;   XREF to: 005ab590 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isHardwareMixingEnabled_FUN_005ab590()
    PUSH EAX                            ; 005ac309
    PUSH 0x650fc9                       ; 005ac30a | = "HwMixingEnabled"
    PUSH EBP                            ; 005ac30f
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 005ac310
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    ADD ESP,0xc                         ; 005ac315
    CALL sound_sndmain.cpp_getMaxSwLatency_FUN_005abea0 ; 005ac318
        ;   XREF to: 005abea0 (UNCONDITIONAL_CALL)  ; float sound_sndmain.cpp_getMaxSwLatency_FUN_005abea0()
    MOV dword ptr [ESP + 0x288],EAX     ; 005ac31d
    FLD float ptr [ESP + 0x288]         ; 005ac324
    SUB ESP,0x4                         ; 005ac32b
    FSTP float ptr [ESP]                ; 005ac32e
    PUSH 0x650fd9                       ; 005ac331 | = "MaxSwLatency"
    PUSH EBP                            ; 005ac336
    CALL engine_ini.cpp_CIniFile_setFloatValue_FUN_004fbd30 ; 005ac337
        ;   XREF to: 004fbd30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setFloatValue_FUN_004fbd30(CIniFile * this, char * key, float value)
    ADD ESP,0xc                         ; 005ac33c
    CALL sound_sndmain.cpp_isSoundEnabled_FUN_005a96b0 ; 005ac33f
        ;   XREF to: 005a96b0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSoundEnabled_FUN_005a96b0()
    PUSH EAX                            ; 005ac344
    PUSH 0x650fe6                       ; 005ac345 | = "Mute"
    PUSH EBP                            ; 005ac34a
    XOR EBX,EBX                         ; 005ac34b
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 005ac34d
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    MOV EDX,dword ptr [0x00681b10]      ; 005ac352 | g_MaxSoundChannels
    ADD ESP,0xc                         ; 005ac358
    TEST EDX,EDX                        ; 005ac35b
    JLE 0x005ac3f0                      ; 005ac35d
        ;   XREF to: 005ac3f0 (CONDITIONAL_JUMP)  ; LAB_005ac3f0
    PUSH EBX                            ; 005ac363
        ;   Label: LAB_005ac363
    PUSH 0x650feb                       ; 005ac364 | = "SfxChannel%dEnabled"
    LEA EAX,[ESP + 0x220]               ; 005ac369
    PUSH EAX                            ; 005ac370
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005ac371
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005ac376
    PUSH EBX                            ; 005ac379
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0 ; 005ac37a
        ;   XREF to: 005a9ea0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0(int channel_index)
    ADD ESP,0x4                         ; 005ac37f
    PUSH EAX                            ; 005ac382
    LEA EAX,[ESP + 0x21c]               ; 005ac383
    PUSH EAX                            ; 005ac38a
    PUSH EBP                            ; 005ac38b
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 005ac38c
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    ADD ESP,0xc                         ; 005ac391
    PUSH EBX                            ; 005ac394
    PUSH 0x650fff                       ; 005ac395 | = "SfxChannel%dVol"
    LEA EAX,[ESP + 0x220]               ; 005ac39a
    PUSH EAX                            ; 005ac3a1
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005ac3a2
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005ac3a7
    PUSH EBX                            ; 005ac3aa
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90 ; 005ac3ab
        ;   XREF to: 005a9d90 (UNCONDITIONAL_CALL)  ; float sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90(int channel_index)
    MOV dword ptr [ESP + 0x28c],EAX     ; 005ac3b0
    FLD float ptr [ESP + 0x28c]         ; 005ac3b7
    ADD ESP,0x4                         ; 005ac3be
    SUB ESP,0x4                         ; 005ac3c1
    LEA EAX,[ESP + 0x21c]               ; 005ac3c4
    FSTP float ptr [ESP]                ; 005ac3cb
    PUSH EAX                            ; 005ac3ce
    PUSH EBP                            ; 005ac3cf
    INC EBX                             ; 005ac3d0
    CALL engine_ini.cpp_CIniFile_setFloatValue_FUN_004fbd30 ; 005ac3d1
        ;   XREF to: 004fbd30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setFloatValue_FUN_004fbd30(CIniFile * this, char * key, float value)
    MOV ECX,dword ptr [0x00681b10]      ; 005ac3d6 | g_MaxSoundChannels
    ADD ESP,0xc                         ; 005ac3dc
    CMP EBX,ECX                         ; 005ac3df
    JL 0x005ac363                       ; 005ac3e1
        ;   XREF to: 005ac363 (CONDITIONAL_JUMP)  ; LAB_005ac363
    LEA EAX,[EAX]                       ; 005ac3e3
    LEA EDX,[EDX]                       ; 005ac3e9
    NOP                                 ; 005ac3ef
    ADD ESP,0x28c                       ; 005ac3f0
        ;   Label: LAB_005ac3f0
    POP EBP                             ; 005ac3f6
    POP EDI                             ; 005ac3f7
    POP ESI                             ; 005ac3f8
    POP EBX                             ; 005ac3f9
    RET                                 ; 005ac3fa

