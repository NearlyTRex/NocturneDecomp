; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005289f0(undefined4 param_1)
;
; Local Variables:
; undefined        Stack[-0x2ac]:1  local_2ac
; undefined        Stack[-0x194]:1  local_194
; undefined        Stack[-0x94]:1  local_94
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
;   FUN_004bdb80 at 004bddc9
;
; Referenced Globals:
;   TerminatedCString s_DeviceName_00593a1e
;   TerminatedCString s_Bits_00593a29
;   string s_Channels_00593a2e
;   TerminatedCString s_Hz_00593a37
;   string s_HwMixingEnabled_00593a3a
;   string s_MaxSwLatency_00593a4a
;   TerminatedCString s_Mute_00593a57
;   string s_SfxChannel%dEnabled_00593a5c
;   string s_SfxChannel%dVol_00593a70
;   undefined4 DAT_005bea60
;   undefined4 DAT_005bea74
;   undefined4 DAT_005beaa0
;   undefined4 DAT_005beaa4
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_00563c90
;   crt_string.c__stricmp_FUN_00564520
;   engine_ini.cpp_CIniFile_getFloat_FUN_004bdac0
;   engine_ini.cpp_CIniFile_getInteger_FUN_004bda20
;   engine_ini.cpp_CIniFile_getString_FUN_004bd910
;   sound_sndmain.cpp_enableHwSoundMixing_FUN_005284a0
;   sound_sndmain.cpp_enableSfxChannel_FUN_00527410
;   sound_sndmain.cpp_getAudioFormat_FUN_00528160
;   sound_sndmain.cpp_getMaxSwLatency_FUN_00528970
;   sound_sndmain.cpp_getSfxChannelVol_FUN_00527380
;   sound_sndmain.cpp_getSoundDeviceCount_FUN_00528230
;   sound_sndmain.cpp_getSoundDeviceInfo_FUN_005282c0
;   sound_sndmain.cpp_isHardwareMixingEnabled_FUN_005284e0
;   sound_sndmain.cpp_isSfxChannelEnabled_FUN_00527490
;   sound_sndmain.cpp_isSoundEnabled_FUN_00526ca0
;   ... and 5 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005289f0
        ;   Label: FUN_005289f0
    PUSH ESI                            ; 005289f1
    PUSH EDI                            ; 005289f2
    PUSH EBP                            ; 005289f3
    SUB ESP,0x29c                       ; 005289f4
    MOV EBP,dword ptr [ESP + 0x2b0]     ; 005289fa
    PUSH 0x100                          ; 00528a01
    LEA EAX,[ESP + 0x11c]               ; 00528a06
    PUSH EAX                            ; 00528a0d
    MOV ECX,0x40                        ; 00528a0e
    LEA EDI,[ESP + 0x120]               ; 00528a13
    PUSH 0x593a1e                       ; 00528a1a | = "DeviceName"
    MOV ESI,0x5beaa0                    ; 00528a1f | DAT_005beaa0
    XOR EBX,EBX                         ; 00528a24
    PUSH EBP                            ; 00528a26
    MOVSD.REP ES:EDI,ESI                ; 00528a27 | DAT_005beaa0 | DAT_005beaa4
    CALL engine_ini.cpp_CIniFile_getString_FUN_004bd910 ; 00528a29
        ;   XREF to: 004bd910 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_getString_FUN_004bd910()
    MOV EDX,0xffffffff                  ; 00528a2e
    ADD ESP,0x10                        ; 00528a33
    MOV dword ptr [0x005bea74],EDX      ; 00528a36 | DAT_005bea74
    CALL sound_sndmain.cpp_getSoundDeviceCount_FUN_00528230 ; 00528a3c
        ;   XREF to: 00528230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getSoundDeviceCount_FUN_00528230()
        ;   Label: LAB_00528a3c
    CMP EBX,EAX                         ; 00528a41
    JGE 0x00528a76                      ; 00528a43
        ;   XREF to: 00528a76 (CONDITIONAL_JUMP)  ; LAB_00528a76
    MOV EAX,ESP                         ; 00528a45
    PUSH EAX                            ; 00528a47
    PUSH EBX                            ; 00528a48
    CALL sound_sndmain.cpp_getSoundDeviceInfo_FUN_005282c0 ; 00528a49
        ;   XREF to: 005282c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getSoundDeviceInfo_FUN_005282c0()
    ADD ESP,0x8                         ; 00528a4e
    LEA EAX,[ESP + 0x118]               ; 00528a51
    PUSH EAX                            ; 00528a58
    LEA EAX,[ESP + 0x4]                 ; 00528a59
    PUSH EAX                            ; 00528a5d
    CALL crt_string.c__stricmp_FUN_00564520 ; 00528a5e
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 00528a63
    TEST EAX,EAX                        ; 00528a66
    JZ 0x00528a6d                       ; 00528a68
        ;   XREF to: 00528a6d (CONDITIONAL_JUMP)  ; LAB_00528a6d
    INC EBX                             ; 00528a6a
    JMP 0x00528a3c                      ; 00528a6b
        ;   XREF to: 00528a3c (UNCONDITIONAL_JUMP)  ; LAB_00528a3c
    PUSH EBX                            ; 00528a6d
        ;   Label: LAB_00528a6d
    CALL sound_sndmain.cpp_selectSoundDevice_FUN_00528410 ; 00528a6e
        ;   XREF to: 00528410 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_selectSoundDevice_FUN_00528410()
    ADD ESP,0x4                         ; 00528a73
    LEA EAX,[ESP + 0x284]               ; 00528a76
        ;   Label: LAB_00528a76
    PUSH EAX                            ; 00528a7d
    LEA EAX,[ESP + 0x284]               ; 00528a7e
    PUSH EAX                            ; 00528a85
    LEA EAX,[ESP + 0x284]               ; 00528a86
    PUSH EAX                            ; 00528a8d
    CALL sound_sndmain.cpp_getAudioFormat_FUN_00528160 ; 00528a8e
        ;   XREF to: 00528160 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getAudioFormat_FUN_00528160()
    ADD ESP,0xc                         ; 00528a93
    LEA EAX,[ESP + 0x27c]               ; 00528a96
    PUSH EAX                            ; 00528a9d
    PUSH 0x593a29                       ; 00528a9e | = "Bits"
    PUSH EBP                            ; 00528aa3
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 00528aa4
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_getInteger_FUN_004bda20()
    ADD ESP,0xc                         ; 00528aa9
    LEA EAX,[ESP + 0x280]               ; 00528aac
    PUSH EAX                            ; 00528ab3
    PUSH 0x593a2e                       ; 00528ab4 | = "Channels"
    PUSH EBP                            ; 00528ab9
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 00528aba
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_getInteger_FUN_004bda20()
    ADD ESP,0xc                         ; 00528abf
    LEA EAX,[ESP + 0x284]               ; 00528ac2
    PUSH EAX                            ; 00528ac9
    PUSH 0x593a37                       ; 00528aca | = "Hz"
    PUSH EBP                            ; 00528acf
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 00528ad0
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_getInteger_FUN_004bda20()
    ADD ESP,0xc                         ; 00528ad5
    CALL sound_sndmain.cpp_isHardwareMixingEnabled_FUN_005284e0 ; 00528ad8
        ;   XREF to: 005284e0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isHardwareMixingEnabled_FUN_005284e0()
    MOV dword ptr [ESP + 0x288],EAX     ; 00528add
    LEA EAX,[ESP + 0x288]               ; 00528ae4
    PUSH EAX                            ; 00528aeb
    PUSH 0x593a3a                       ; 00528aec | = "HwMixingEnabled"
    PUSH EBP                            ; 00528af1
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 00528af2
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_getInteger_FUN_004bda20()
    ADD ESP,0xc                         ; 00528af7
    MOV ECX,dword ptr [ESP + 0x288]     ; 00528afa
    PUSH ECX                            ; 00528b01
    CALL sound_sndmain.cpp_enableHwSoundMixing_FUN_005284a0 ; 00528b02
        ;   XREF to: 005284a0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_enableHwSoundMixing_FUN_005284a0()
    ADD ESP,0x4                         ; 00528b07
    CALL sound_sndmain.cpp_getMaxSwLatency_FUN_00528970 ; 00528b0a
        ;   XREF to: 00528970 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getMaxSwLatency_FUN_00528970()
    MOV dword ptr [ESP + 0x298],EAX     ; 00528b0f
    LEA EAX,[ESP + 0x28c]               ; 00528b16
    PUSH EAX                            ; 00528b1d
    PUSH 0x593a4a                       ; 00528b1e | = "MaxSwLatency"
    FLD float ptr [ESP + 0x2a0]         ; 00528b23
    PUSH EBP                            ; 00528b2a
    FSTP float ptr [ESP + 0x298]        ; 00528b2b
    CALL engine_ini.cpp_CIniFile_getFloat_FUN_004bdac0 ; 00528b32
        ;   XREF to: 004bdac0 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_getFloat_FUN_004bdac0()
    ADD ESP,0xc                         ; 00528b37
    PUSH dword ptr [ESP + 0x28c]        ; 00528b3a
    CALL sound_sndmain.cpp_setMaxSwSoundLatency_FUN_00528980 ; 00528b41
        ;   XREF to: 00528980 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_setMaxSwSoundLatency_FUN_00528980()
    ADD ESP,0x4                         ; 00528b46
    MOV EBX,dword ptr [ESP + 0x284]     ; 00528b49
    PUSH EBX                            ; 00528b50
    MOV ESI,dword ptr [ESP + 0x284]     ; 00528b51
    PUSH ESI                            ; 00528b58
    MOV EDI,dword ptr [ESP + 0x284]     ; 00528b59
    PUSH EDI                            ; 00528b60
    CALL sound_sndmain.cpp_setSoundOutputMode_FUN_005280c0 ; 00528b61
        ;   XREF to: 005280c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_setSoundOutputMode_FUN_005280c0()
    ADD ESP,0xc                         ; 00528b66
    CALL sound_sndmain.cpp_isSoundEnabled_FUN_00526ca0 ; 00528b69
        ;   XREF to: 00526ca0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isSoundEnabled_FUN_00526ca0()
    MOV dword ptr [ESP + 0x288],EAX     ; 00528b6e
    LEA EAX,[ESP + 0x288]               ; 00528b75
    PUSH EAX                            ; 00528b7c
    PUSH 0x593a57                       ; 00528b7d | = "Mute"
    PUSH EBP                            ; 00528b82
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 00528b83
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_getInteger_FUN_004bda20()
    ADD ESP,0xc                         ; 00528b88
    MOV EAX,dword ptr [ESP + 0x288]     ; 00528b8b
    PUSH EAX                            ; 00528b92
    XOR EBX,EBX                         ; 00528b93
    CALL sound_sndmain.cpp_setSoundEnabled_FUN_00526cb0 ; 00528b95
        ;   XREF to: 00526cb0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_setSoundEnabled_FUN_00526cb0()
    MOV EDX,dword ptr [0x005bea60]      ; 00528b9a | DAT_005bea60
    ADD ESP,0x4                         ; 00528ba0
    TEST EDX,EDX                        ; 00528ba3
    JLE 0x00528c70                      ; 00528ba5
        ;   XREF to: 00528c70 (CONDITIONAL_JUMP)  ; LAB_00528c70
    PUSH EBX                            ; 00528bab
        ;   Label: LAB_00528bab
    PUSH 0x593a5c                       ; 00528bac | = "SfxChannel%dEnabled"
    LEA EAX,[ESP + 0x220]               ; 00528bb1
    PUSH EAX                            ; 00528bb8
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00528bb9
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 00528bbe
    PUSH EBX                            ; 00528bc1
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_00527490 ; 00528bc2
        ;   XREF to: 00527490 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isSfxChannelEnabled_FUN_00527490()
    ADD ESP,0x4                         ; 00528bc7
    MOV dword ptr [ESP + 0x290],EAX     ; 00528bca
    LEA EAX,[ESP + 0x290]               ; 00528bd1
    PUSH EAX                            ; 00528bd8
    LEA EAX,[ESP + 0x21c]               ; 00528bd9
    PUSH EAX                            ; 00528be0
    PUSH EBP                            ; 00528be1
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 00528be2
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_getInteger_FUN_004bda20()
    ADD ESP,0xc                         ; 00528be7
    MOV ECX,dword ptr [ESP + 0x290]     ; 00528bea
    PUSH ECX                            ; 00528bf1
    PUSH EBX                            ; 00528bf2
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_00527410 ; 00528bf3
        ;   XREF to: 00527410 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_enableSfxChannel_FUN_00527410()
    ADD ESP,0x8                         ; 00528bf8
    PUSH EBX                            ; 00528bfb
    PUSH 0x593a70                       ; 00528bfc | = "SfxChannel%dVol"
    LEA EAX,[ESP + 0x220]               ; 00528c01
    PUSH EAX                            ; 00528c08
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00528c09
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 00528c0e
    PUSH EBX                            ; 00528c11
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_00527380 ; 00528c12
        ;   XREF to: 00527380 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getSfxChannelVol_FUN_00527380()
    MOV dword ptr [ESP + 0x29c],EAX     ; 00528c17
    FLD float ptr [ESP + 0x29c]         ; 00528c1e
    ADD ESP,0x4                         ; 00528c25
    LEA EAX,[ESP + 0x294]               ; 00528c28
    PUSH EAX                            ; 00528c2f
    LEA EAX,[ESP + 0x21c]               ; 00528c30
    PUSH EAX                            ; 00528c37
    PUSH EBP                            ; 00528c38
    FSTP float ptr [ESP + 0x2a0]        ; 00528c39
    CALL engine_ini.cpp_CIniFile_getFloat_FUN_004bdac0 ; 00528c40
        ;   XREF to: 004bdac0 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_CIniFile_getFloat_FUN_004bdac0()
    ADD ESP,0xc                         ; 00528c45
    PUSH dword ptr [ESP + 0x294]        ; 00528c48
    PUSH EBX                            ; 00528c4f
    CALL sound_sndmain.cpp_setSfxChannelVol_FUN_005272e0 ; 00528c50
        ;   XREF to: 005272e0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_setSfxChannelVol_FUN_005272e0()
    MOV ESI,dword ptr [0x005bea60]      ; 00528c55 | DAT_005bea60
    INC EBX                             ; 00528c5b
    ADD ESP,0x8                         ; 00528c5c
    CMP EBX,ESI                         ; 00528c5f
    JL 0x00528bab                       ; 00528c61
        ;   XREF to: 00528bab (CONDITIONAL_JUMP)  ; LAB_00528bab
    LEA EAX,[EAX]                       ; 00528c67
    LEA EDX,[EDX]                       ; 00528c6d
    ADD ESP,0x29c                       ; 00528c70
        ;   Label: LAB_00528c70
    POP EBP                             ; 00528c76
    POP EDI                             ; 00528c77
    POP ESI                             ; 00528c78
    POP EBX                             ; 00528c79
    RET                                 ; 00528c7a

