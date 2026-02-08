; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl sound_sndmain_cpp_readIni_FUN_005abf20(CIniFile *ini_file)
;
; Parameters:
; CIniFile *       Stack[0x4]:4   ini_file
; Local Variables:
; undefined1       Stack[-0x3b4]:1  local_3b4
; undefined1       Stack[-0x29c]:1  local_29c
; undefined1       Stack[-0x194]:1  local_194
; undefined1       Stack[-0x94]:1  local_94
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_inivar.cpp_readIniData_FUN_004fbd90 at 004fbfd9
;
; Referenced Globals:
;   TerminatedCString s_DeviceName_00650f37
;   TerminatedCString s_RecordingDeviceName_00650f42
;   TerminatedCString s_HwMixingEnabled_00650f56
;   TerminatedCString s_MaxSwLatency_00650f66
;   TerminatedCString s_Bits_00650f73
;   TerminatedCString s_Channels_00650f78
;   TerminatedCString s_Hz_00650f81
;   TerminatedCString s_Mute_00650f84
;   TerminatedCString s_SfxChannel_dEnabled_00650f89
;   TerminatedCString s_SfxChannel_dVol_00650f9d
;   int g_MaxSoundChannels = 0x20
;   char[256] g_DefaultRecordingDeviceName
;   undefined4 s__00681b64
;
; Called Functions:
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   crt_string.c_stricmp_FUN_005fe7f0
;   engine_ini.cpp_CIniFile_getFloat_FUN_004fbcd0
;   engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
;   engine_ini.cpp_CIniFile_getString_FUN_004fbb20
;   sound_sndmain.cpp_closeSoundDevice_FUN_005ab660
;   sound_sndmain.cpp_enableHwSoundMixing_FUN_005ab550
;   sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20
;   sound_sndmain.cpp_getAudioFormat_FUN_005ab210
;   sound_sndmain.cpp_getMaxSwLatency_FUN_005abea0
;   sound_sndmain.cpp_getRecordingDeviceCount_FUN_005ab720
;   sound_sndmain.cpp_getRecordingDeviceInfo_FUN_005ab780
;   sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90
;   sound_sndmain.cpp_getSoundDeviceCount_FUN_005ab2e0
;   sound_sndmain.cpp_getSoundDeviceInfo_FUN_005ab370
;   ... and 10 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005abf20
        ;   Label: sound_sndmain.cpp_readIni_FUN_005abf20
    PUSH ESI                            ; 005abf21
    PUSH EDI                            ; 005abf22
    PUSH EBP                            ; 005abf23
    SUB ESP,0x3a4                       ; 005abf24
    MOV EBP,dword ptr [ESP + 0x3b8]     ; 005abf2a
    PUSH 0x100                          ; 005abf31
    LEA EAX,[ESP + 0x224]               ; 005abf36
    PUSH EAX                            ; 005abf3d
    MOV ECX,0x40                        ; 005abf3e
    PUSH 0x650f37                       ; 005abf43 | = "DeviceName"
    LEA EDI,[ESP + 0x22c]               ; 005abf48
    MOV ESI,0x681b60                    ; 005abf4f | g_DefaultRecordingDeviceName
    PUSH EBP                            ; 005abf54
    MOVSD.REP ES:EDI,ESI                ; 005abf55 | g_DefaultRecordingDeviceName | s__00681b64
    CALL engine_ini.cpp_CIniFile_getString_FUN_004fbb20 ; 005abf57
        ;   XREF to: 004fbb20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getString_FUN_004fbb20(CIniFile * this_ptr, char * key, char * output_buffer, int buffer_size, ...)
    ADD ESP,0x10                        ; 005abf5c
    XOR EBX,EBX                         ; 005abf5f
    CALL sound_sndmain.cpp_closeSoundDevice_FUN_005ab660 ; 005abf61
        ;   XREF to: 005ab660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_closeSoundDevice_FUN_005ab660()
    CALL sound_sndmain.cpp_getSoundDeviceCount_FUN_005ab2e0 ; 005abf66
        ;   XREF to: 005ab2e0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getSoundDeviceCount_FUN_005ab2e0()
        ;   Label: LAB_005abf66
    CMP EBX,EAX                         ; 005abf6b
    JL 0x005abfd6                       ; 005abf6d
        ;   XREF to: 005abfd6 (CONDITIONAL_JUMP)  ; LAB_005abfd6
    XOR AH,AH                           ; 005abf6f
        ;   Label: LAB_005abf6f
    PUSH 0x100                          ; 005abf71
    MOV byte ptr [ESP + 0x224],AH       ; 005abf76
    LEA EAX,[ESP + 0x224]               ; 005abf7d
    PUSH EAX                            ; 005abf84
    PUSH 0x650f42                       ; 005abf85 | = "RecordingDeviceName"
    PUSH EBP                            ; 005abf8a
    CALL engine_ini.cpp_CIniFile_getString_FUN_004fbb20 ; 005abf8b
        ;   XREF to: 004fbb20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getString_FUN_004fbb20(CIniFile * this_ptr, char * key, char * output_buffer, int buffer_size, ...)
    ADD ESP,0x10                        ; 005abf90
    XOR EBX,EBX                         ; 005abf93
    CALL sound_sndmain.cpp_releaseRecordingDevice_FUN_005ab930 ; 005abf95
        ;   XREF to: 005ab930 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_releaseRecordingDevice_FUN_005ab930()
    CALL sound_sndmain.cpp_getRecordingDeviceCount_FUN_005ab720 ; 005abf9a
        ;   XREF to: 005ab720 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getRecordingDeviceCount_FUN_005ab720()
        ;   Label: LAB_005abf9a
    CMP EBX,EAX                         ; 005abf9f
    JGE 0x005ac012                      ; 005abfa1
        ;   XREF to: 005ac012 (CONDITIONAL_JUMP)  ; LAB_005ac012
    LEA EAX,[ESP + 0x118]               ; 005abfa3
    PUSH EAX                            ; 005abfaa
    PUSH EBX                            ; 005abfab
    CALL sound_sndmain.cpp_getRecordingDeviceInfo_FUN_005ab780 ; 005abfac
        ;   XREF to: 005ab780 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_getRecordingDeviceInfo_FUN_005ab780(int index, SRecordingDeviceInfo * device_info)
    ADD ESP,0x8                         ; 005abfb1
    LEA EAX,[ESP + 0x220]               ; 005abfb4
    PUSH EAX                            ; 005abfbb
    LEA EAX,[ESP + 0x11c]               ; 005abfbc
    PUSH EAX                            ; 005abfc3
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 005abfc4
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005abfc9
    TEST EAX,EAX                        ; 005abfcc
    JZ 0x005ac009                       ; 005abfce
        ;   XREF to: 005ac009 (CONDITIONAL_JUMP)  ; LAB_005ac009
    INC EBX                             ; 005abfd0
    JMP 0x005abf9a                      ; 005abfd1
        ;   XREF to: 005abf9a (UNCONDITIONAL_JUMP)  ; LAB_005abf9a
    INC EBX                             ; 005abfd3
        ;   Label: LAB_005abfd3
    JMP 0x005abf66                      ; 005abfd4
        ;   XREF to: 005abf66 (UNCONDITIONAL_JUMP)  ; LAB_005abf66
    MOV EAX,ESP                         ; 005abfd6
        ;   Label: LAB_005abfd6
    PUSH EAX                            ; 005abfd8
    PUSH EBX                            ; 005abfd9
    CALL sound_sndmain.cpp_getSoundDeviceInfo_FUN_005ab370 ; 005abfda
        ;   XREF to: 005ab370 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_getSoundDeviceInfo_FUN_005ab370(int device_id, SSoundDeviceInfo * device_info)
    ADD ESP,0x8                         ; 005abfdf
    LEA EAX,[ESP + 0x220]               ; 005abfe2
    PUSH EAX                            ; 005abfe9
    LEA EAX,[ESP + 0x4]                 ; 005abfea
    PUSH EAX                            ; 005abfee
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 005abfef
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005abff4
    TEST EAX,EAX                        ; 005abff7
    JNZ 0x005abfd3                      ; 005abff9
        ;   XREF to: 005abfd3 (CONDITIONAL_JUMP)  ; LAB_005abfd3
    PUSH EBX                            ; 005abffb
    CALL sound_sndmain.cpp_selectSoundDevice_FUN_005ab4c0 ; 005abffc
        ;   XREF to: 005ab4c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_selectSoundDevice_FUN_005ab4c0(int device_id)
    ADD ESP,0x4                         ; 005ac001
    JMP 0x005abf6f                      ; 005ac004
        ;   XREF to: 005abf6f (UNCONDITIONAL_JUMP)  ; LAB_005abf6f
    PUSH EBX                            ; 005ac009
        ;   Label: LAB_005ac009
    CALL sound_sndmain.cpp_selectRecordingDevice_FUN_005ab860 ; 005ac00a
        ;   XREF to: 005ab860 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_selectRecordingDevice_FUN_005ab860(int device_id)
    ADD ESP,0x4                         ; 005ac00f
    CALL sound_sndmain.cpp_isHardwareMixingEnabled_FUN_005ab590 ; 005ac012
        ;   XREF to: 005ab590 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isHardwareMixingEnabled_FUN_005ab590()
        ;   Label: LAB_005ac012
    MOV dword ptr [ESP + 0x394],EAX     ; 005ac017
    LEA EAX,[ESP + 0x394]               ; 005ac01e
    PUSH EAX                            ; 005ac025
    PUSH 0x650f56                       ; 005ac026 | = "HwMixingEnabled"
    PUSH EBP                            ; 005ac02b
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 005ac02c
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    ADD ESP,0xc                         ; 005ac031
    MOV EDX,dword ptr [ESP + 0x394]     ; 005ac034
    PUSH EDX                            ; 005ac03b
    CALL sound_sndmain.cpp_enableHwSoundMixing_FUN_005ab550 ; 005ac03c
        ;   XREF to: 005ab550 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_enableHwSoundMixing_FUN_005ab550(int enable)
    ADD ESP,0x4                         ; 005ac041
    CALL sound_sndmain.cpp_getMaxSwLatency_FUN_005abea0 ; 005ac044
        ;   XREF to: 005abea0 (UNCONDITIONAL_CALL)  ; float sound_sndmain.cpp_getMaxSwLatency_FUN_005abea0()
    MOV dword ptr [ESP + 0x3a0],EAX     ; 005ac049
    LEA EAX,[ESP + 0x384]               ; 005ac050
    PUSH EAX                            ; 005ac057
    PUSH 0x650f66                       ; 005ac058 | = "MaxSwLatency"
    FLD float ptr [ESP + 0x3a8]         ; 005ac05d
    PUSH EBP                            ; 005ac064
    FSTP float ptr [ESP + 0x390]        ; 005ac065
    CALL engine_ini.cpp_CIniFile_getFloat_FUN_004fbcd0 ; 005ac06c
        ;   XREF to: 004fbcd0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getFloat_FUN_004fbcd0(CIniFile * this_ptr, char * key, float * output)
    ADD ESP,0xc                         ; 005ac071
    PUSH dword ptr [ESP + 0x384]        ; 005ac074
    CALL sound_sndmain.cpp_setMaxSwSoundLatency_FUN_005abeb0 ; 005ac07b
        ;   XREF to: 005abeb0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setMaxSwSoundLatency_FUN_005abeb0(float latency)
    ADD ESP,0x4                         ; 005ac080
    LEA EAX,[ESP + 0x38c]               ; 005ac083
    PUSH EAX                            ; 005ac08a
    LEA EAX,[ESP + 0x38c]               ; 005ac08b
    PUSH EAX                            ; 005ac092
    LEA EAX,[ESP + 0x398]               ; 005ac093
    PUSH EAX                            ; 005ac09a
    CALL sound_sndmain.cpp_getAudioFormat_FUN_005ab210 ; 005ac09b
        ;   XREF to: 005ab210 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_getAudioFormat_FUN_005ab210(int * bits_per_sample, int * channels, int * sample_rate)
    ADD ESP,0xc                         ; 005ac0a0
    LEA EAX,[ESP + 0x390]               ; 005ac0a3
    PUSH EAX                            ; 005ac0aa
    PUSH 0x650f73                       ; 005ac0ab | = "Bits"
    PUSH EBP                            ; 005ac0b0
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 005ac0b1
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    ADD ESP,0xc                         ; 005ac0b6
    LEA EAX,[ESP + 0x388]               ; 005ac0b9
    PUSH EAX                            ; 005ac0c0
    PUSH 0x650f78                       ; 005ac0c1 | = "Channels"
    PUSH EBP                            ; 005ac0c6
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 005ac0c7
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    ADD ESP,0xc                         ; 005ac0cc
    LEA EAX,[ESP + 0x38c]               ; 005ac0cf
    PUSH EAX                            ; 005ac0d6
    PUSH 0x650f81                       ; 005ac0d7 | = "Hz"
    PUSH EBP                            ; 005ac0dc
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 005ac0dd
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    ADD ESP,0xc                         ; 005ac0e2
    MOV ECX,dword ptr [ESP + 0x38c]     ; 005ac0e5
    PUSH ECX                            ; 005ac0ec
    MOV EBX,dword ptr [ESP + 0x38c]     ; 005ac0ed
    PUSH EBX                            ; 005ac0f4
    MOV ESI,dword ptr [ESP + 0x398]     ; 005ac0f5
    PUSH ESI                            ; 005ac0fc
    CALL sound_sndmain.cpp_setSoundOutputMode_FUN_005ab170 ; 005ac0fd
        ;   XREF to: 005ab170 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSoundOutputMode_FUN_005ab170(int bits_per_sample, int channels, int sample_rate)
    ADD ESP,0xc                         ; 005ac102
    CALL sound_sndmain.cpp_isSoundEnabled_FUN_005a96b0 ; 005ac105
        ;   XREF to: 005a96b0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSoundEnabled_FUN_005a96b0()
    MOV dword ptr [ESP + 0x394],EAX     ; 005ac10a
    LEA EAX,[ESP + 0x394]               ; 005ac111
    PUSH EAX                            ; 005ac118
    PUSH 0x650f84                       ; 005ac119 | = "Mute"
    PUSH EBP                            ; 005ac11e
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 005ac11f
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    ADD ESP,0xc                         ; 005ac124
    MOV EDI,dword ptr [ESP + 0x394]     ; 005ac127
    PUSH EDI                            ; 005ac12e
    XOR EBX,EBX                         ; 005ac12f
    CALL sound_sndmain.cpp_setSoundEnabled_FUN_005a96c0 ; 005ac131
        ;   XREF to: 005a96c0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSoundEnabled_FUN_005a96c0(int enable)
    MOV EAX,[0x00681b10]                ; 005ac136 | g_MaxSoundChannels
    ADD ESP,0x4                         ; 005ac13b
    TEST EAX,EAX                        ; 005ac13e
    JLE 0x005ac210                      ; 005ac140
        ;   XREF to: 005ac210 (CONDITIONAL_JUMP)  ; LAB_005ac210
    PUSH EBX                            ; 005ac146
        ;   Label: LAB_005ac146
    PUSH 0x650f89                       ; 005ac147 | = "SfxChannel%dEnabled"
    LEA EAX,[ESP + 0x328]               ; 005ac14c
    PUSH EAX                            ; 005ac153
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005ac154
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005ac159
    PUSH EBX                            ; 005ac15c
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0 ; 005ac15d
        ;   XREF to: 005a9ea0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0(int channel_index)
    ADD ESP,0x4                         ; 005ac162
    MOV dword ptr [ESP + 0x398],EAX     ; 005ac165
    LEA EAX,[ESP + 0x398]               ; 005ac16c
    PUSH EAX                            ; 005ac173
    LEA EAX,[ESP + 0x324]               ; 005ac174
    PUSH EAX                            ; 005ac17b
    PUSH EBP                            ; 005ac17c
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 005ac17d
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    ADD ESP,0xc                         ; 005ac182
    MOV EDX,dword ptr [ESP + 0x398]     ; 005ac185
    PUSH EDX                            ; 005ac18c
    PUSH EBX                            ; 005ac18d
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20 ; 005ac18e
        ;   XREF to: 005a9e20 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20(int channel_index, int enable_state)
    ADD ESP,0x8                         ; 005ac193
    PUSH EBX                            ; 005ac196
    PUSH 0x650f9d                       ; 005ac197 | = "SfxChannel%dVol"
    LEA EAX,[ESP + 0x328]               ; 005ac19c
    PUSH EAX                            ; 005ac1a3
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005ac1a4
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005ac1a9
    PUSH EBX                            ; 005ac1ac
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90 ; 005ac1ad
        ;   XREF to: 005a9d90 (UNCONDITIONAL_CALL)  ; float sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90(int channel_index)
    MOV dword ptr [ESP + 0x3a4],EAX     ; 005ac1b2
    FLD float ptr [ESP + 0x3a4]         ; 005ac1b9
    ADD ESP,0x4                         ; 005ac1c0
    LEA EAX,[ESP + 0x39c]               ; 005ac1c3
    PUSH EAX                            ; 005ac1ca
    LEA EAX,[ESP + 0x324]               ; 005ac1cb
    PUSH EAX                            ; 005ac1d2
    PUSH EBP                            ; 005ac1d3
    FSTP float ptr [ESP + 0x3a8]        ; 005ac1d4
    CALL engine_ini.cpp_CIniFile_getFloat_FUN_004fbcd0 ; 005ac1db
        ;   XREF to: 004fbcd0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getFloat_FUN_004fbcd0(CIniFile * this_ptr, char * key, float * output)
    ADD ESP,0xc                         ; 005ac1e0
    PUSH dword ptr [ESP + 0x39c]        ; 005ac1e3
    PUSH EBX                            ; 005ac1ea
    CALL sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0 ; 005ac1eb
        ;   XREF to: 005a9cf0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0(int channel_index, float volume)
    MOV ECX,dword ptr [0x00681b10]      ; 005ac1f0 | g_MaxSoundChannels
    INC EBX                             ; 005ac1f6
    ADD ESP,0x8                         ; 005ac1f7
    CMP EBX,ECX                         ; 005ac1fa
    JL 0x005ac146                       ; 005ac1fc
        ;   XREF to: 005ac146 (CONDITIONAL_JUMP)  ; LAB_005ac146
    LEA EAX,[EAX]                       ; 005ac202
    LEA EDX,[EDX]                       ; 005ac208
    MOV EAX,EAX                         ; 005ac20e
    ADD ESP,0x3a4                       ; 005ac210
        ;   Label: LAB_005ac210
    POP EBP                             ; 005ac216
    POP EDI                             ; 005ac217
    POP ESI                             ; 005ac218
    POP EBX                             ; 005ac219
    RET                                 ; 005ac21a

