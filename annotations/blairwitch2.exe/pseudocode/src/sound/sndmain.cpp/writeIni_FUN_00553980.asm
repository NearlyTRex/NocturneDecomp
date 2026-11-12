; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_writeIni_FUN_00553980(CIniFile *ini_file)
;
; Parameters:
; CIniFile *       Stack[0x4]:4   ini_file
; Local Variables:
; undefined1       Stack[-0x29c]:1  local_29c
; undefined1       Stack[-0x29b]:1  local_29b
; undefined        Stack[-0x184]:1  local_184
; undefined1       Stack[-0x183]:1  local_183
;
; XREF[1]:
;   core_inivar.cpp_writeIniData_FUN_004d94d0 at 004d96ed
;
; Referenced Globals:
;   TerminatedCString s_DeviceName_005e9341
;   undefined4 DAT_005e934c
;   TerminatedCString s_Channels_005e9351
;   undefined4 DAT_005e935a
;   TerminatedCString s_AccelEnabled_005e935d
;   TerminatedCString s_MaxSwLatency_005e936a
;   undefined4 DAT_005e9377
;   TerminatedCString s_SfxChannel_dEnabled_005e937c
;   TerminatedCString s_SfxChannel_dVol_005e9390
;   undefined4 DAT_0061bc94
;   undefined4 DAT_0061bcac
;   undefined4 DAT_0061bde0
;   undefined4 DAT_0061bde4
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005b7790
;   engine_ini.cpp_FUN_004d8b80
;   engine_ini.cpp_FUN_004d8c30
;   sound_sndmain.cpp_getAudioFormat_FUN_00552790
;   sound_sndmain.cpp_getMaxSwLatency_FUN_00553600
;   sound_sndmain.cpp_getSfxChannelVol_FUN_00551190
;   sound_sndmain.cpp_getSoundDeviceCount_FUN_00552890
;   sound_sndmain.cpp_getSoundDeviceInfo_FUN_00552920
;   sound_sndmain.cpp_isHardwareMixingEnabled_FUN_00552b40
;   sound_sndmain.cpp_isSfxChannelEnabled_FUN_005512a0
;   sound_sndmain.cpp_isSoundMuted_FUN_00550bc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00553980
        ;   Label: sound_sndmain.cpp_writeIni_FUN_00553980
    PUSH ESI                            ; 00553981
    PUSH EDI                            ; 00553982
    PUSH EBP                            ; 00553983
    SUB ESP,0x28c                       ; 00553984
    MOV EBP,dword ptr [ESP + 0x2a0]     ; 0055398a
    MOV ECX,0x40                        ; 00553991
    LEA EDI,[ESP + 0x118]               ; 00553996
    MOV ESI,0x61bde0                    ; 0055399d | DAT_0061bde0
    MOV EDX,dword ptr [0x0061bcac]      ; 005539a2 | DAT_0061bcac
    MOVSD.REP ES:EDI,ESI                ; 005539a8 | DAT_0061bde0 | DAT_0061bde4
    TEST EDX,EDX                        ; 005539aa
    JL 0x005539ec                       ; 005539ac
        ;   XREF to: 005539ec (CONDITIONAL_JUMP)  ; LAB_005539ec
    CALL sound_sndmain.cpp_getSoundDeviceCount_FUN_00552890 ; 005539ae
        ;   XREF to: 00552890 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getSoundDeviceCount_FUN_00552890()
    MOV ECX,dword ptr [0x0061bcac]      ; 005539b3 | DAT_0061bcac
    CMP EAX,ECX                         ; 005539b9
    JLE 0x005539ec                      ; 005539bb
        ;   XREF to: 005539ec (CONDITIONAL_JUMP)  ; LAB_005539ec
    MOV EAX,ESP                         ; 005539bd
    PUSH EAX                            ; 005539bf
    PUSH ECX                            ; 005539c0
    CALL sound_sndmain.cpp_getSoundDeviceInfo_FUN_00552920 ; 005539c1
        ;   XREF to: 00552920 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_getSoundDeviceInfo_FUN_00552920(int device_id, SSoundDeviceInfo * device_info)
    ADD ESP,0x8                         ; 005539c6
    MOV ESI,ESP                         ; 005539c9
    LEA EDI,[ESP + 0x118]               ; 005539cb
    PUSH EDI                            ; 005539d2
    MOV AL,byte ptr [ESI]               ; 005539d3
        ;   Label: LAB_005539d3
    MOV byte ptr [EDI],AL               ; 005539d5
    CMP AL,0x0                          ; 005539d7
    JZ 0x005539eb                       ; 005539d9
        ;   XREF to: 005539eb (CONDITIONAL_JUMP)  ; LAB_005539eb
    MOV AL,byte ptr [ESI + 0x1]         ; 005539db
    ADD ESI,0x2                         ; 005539de
    MOV byte ptr [EDI + 0x1],AL         ; 005539e1
    ADD EDI,0x2                         ; 005539e4
    CMP AL,0x0                          ; 005539e7
    JNZ 0x005539d3                      ; 005539e9
        ;   XREF to: 005539d3 (CONDITIONAL_JUMP)  ; LAB_005539d3
    POP EDI                             ; 005539eb
        ;   Label: LAB_005539eb
    LEA EAX,[ESP + 0x118]               ; 005539ec
        ;   Label: LAB_005539ec
    PUSH EAX                            ; 005539f3
    PUSH 0x5e9341                       ; 005539f4 | = "DeviceName"
    MOV EBX,dword ptr [EBP + 0x200]     ; 005539f9
    PUSH EBP                            ; 005539ff
    CALL dword ptr [EBX + 0x8]          ; 00553a00
    ADD ESP,0xc                         ; 00553a03
    LEA EAX,[ESP + 0x280]               ; 00553a06
    PUSH EAX                            ; 00553a0d
    LEA EAX,[ESP + 0x280]               ; 00553a0e
    PUSH EAX                            ; 00553a15
    LEA EAX,[ESP + 0x28c]               ; 00553a16
    PUSH EAX                            ; 00553a1d
    CALL sound_sndmain.cpp_getAudioFormat_FUN_00552790 ; 00553a1e
        ;   XREF to: 00552790 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_getAudioFormat_FUN_00552790(int * bits_per_sample, int * channels, int * sample_rate)
    ADD ESP,0xc                         ; 00553a23
    MOV ESI,dword ptr [ESP + 0x284]     ; 00553a26
    PUSH ESI                            ; 00553a2d
    PUSH 0x5e934c                       ; 00553a2e | DAT_005e934c
    PUSH EBP                            ; 00553a33
    CALL engine_ini.cpp_FUN_004d8b80    ; 00553a34
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b80()
    ADD ESP,0xc                         ; 00553a39
    MOV EDI,dword ptr [ESP + 0x27c]     ; 00553a3c
    PUSH EDI                            ; 00553a43
    PUSH 0x5e9351                       ; 00553a44 | = "Channels"
    PUSH EBP                            ; 00553a49
    CALL engine_ini.cpp_FUN_004d8b80    ; 00553a4a
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b80()
    ADD ESP,0xc                         ; 00553a4f
    MOV EAX,dword ptr [ESP + 0x280]     ; 00553a52
    PUSH EAX                            ; 00553a59
    PUSH 0x5e935a                       ; 00553a5a | DAT_005e935a
    PUSH EBP                            ; 00553a5f
    CALL engine_ini.cpp_FUN_004d8b80    ; 00553a60
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b80()
    ADD ESP,0xc                         ; 00553a65
    CALL sound_sndmain.cpp_isHardwareMixingEnabled_FUN_00552b40 ; 00553a68
        ;   XREF to: 00552b40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isHardwareMixingEnabled_FUN_00552b40()
    PUSH EAX                            ; 00553a6d
    PUSH 0x5e935d                       ; 00553a6e | = "AccelEnabled"
    PUSH EBP                            ; 00553a73
    CALL engine_ini.cpp_FUN_004d8b80    ; 00553a74
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b80()
    ADD ESP,0xc                         ; 00553a79
    CALL sound_sndmain.cpp_getMaxSwLatency_FUN_00553600 ; 00553a7c
        ;   XREF to: 00553600 (UNCONDITIONAL_CALL)  ; float sound_sndmain.cpp_getMaxSwLatency_FUN_00553600()
    MOV dword ptr [ESP + 0x288],EAX     ; 00553a81
    FLD float ptr [ESP + 0x288]         ; 00553a88
    SUB ESP,0x4                         ; 00553a8f
    FSTP float ptr [ESP]                ; 00553a92
    PUSH 0x5e936a                       ; 00553a95 | = "MaxSwLatency"
    PUSH EBP                            ; 00553a9a
    CALL engine_ini.cpp_FUN_004d8c30    ; 00553a9b
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    ADD ESP,0xc                         ; 00553aa0
    CALL sound_sndmain.cpp_isSoundMuted_FUN_00550bc0 ; 00553aa3
        ;   XREF to: 00550bc0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSoundMuted_FUN_00550bc0()
    PUSH EAX                            ; 00553aa8
    PUSH 0x5e9377                       ; 00553aa9 | DAT_005e9377
    PUSH EBP                            ; 00553aae
    XOR EBX,EBX                         ; 00553aaf
    CALL engine_ini.cpp_FUN_004d8b80    ; 00553ab1
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b80()
    MOV EDX,dword ptr [0x0061bc94]      ; 00553ab6 | DAT_0061bc94
    ADD ESP,0xc                         ; 00553abc
    TEST EDX,EDX                        ; 00553abf
    JLE 0x00553b50                      ; 00553ac1
        ;   XREF to: 00553b50 (CONDITIONAL_JUMP)  ; LAB_00553b50
    PUSH EBX                            ; 00553ac7
        ;   Label: LAB_00553ac7
    PUSH 0x5e937c                       ; 00553ac8 | = "SfxChannel%dEnabled"
    LEA EAX,[ESP + 0x220]               ; 00553acd
    PUSH EAX                            ; 00553ad4
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00553ad5
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 00553ada
    PUSH EBX                            ; 00553add
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_005512a0 ; 00553ade
        ;   XREF to: 005512a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxChannelEnabled_FUN_005512a0(int channel_index)
    ADD ESP,0x4                         ; 00553ae3
    PUSH EAX                            ; 00553ae6
    LEA EAX,[ESP + 0x21c]               ; 00553ae7
    PUSH EAX                            ; 00553aee
    PUSH EBP                            ; 00553aef
    CALL engine_ini.cpp_FUN_004d8b80    ; 00553af0
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b80()
    ADD ESP,0xc                         ; 00553af5
    PUSH EBX                            ; 00553af8
    PUSH 0x5e9390                       ; 00553af9 | = "SfxChannel%dVol"
    LEA EAX,[ESP + 0x220]               ; 00553afe
    PUSH EAX                            ; 00553b05
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00553b06
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 00553b0b
    PUSH EBX                            ; 00553b0e
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_00551190 ; 00553b0f
        ;   XREF to: 00551190 (UNCONDITIONAL_CALL)  ; float sound_sndmain.cpp_getSfxChannelVol_FUN_00551190(int channel_index)
    MOV dword ptr [ESP + 0x28c],EAX     ; 00553b14
    FLD float ptr [ESP + 0x28c]         ; 00553b1b
    ADD ESP,0x4                         ; 00553b22
    SUB ESP,0x4                         ; 00553b25
    LEA EAX,[ESP + 0x21c]               ; 00553b28
    FSTP float ptr [ESP]                ; 00553b2f
    PUSH EAX                            ; 00553b32
    PUSH EBP                            ; 00553b33
    INC EBX                             ; 00553b34
    CALL engine_ini.cpp_FUN_004d8c30    ; 00553b35
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    MOV ECX,dword ptr [0x0061bc94]      ; 00553b3a | DAT_0061bc94
    ADD ESP,0xc                         ; 00553b40
    CMP EBX,ECX                         ; 00553b43
    JL 0x00553ac7                       ; 00553b45
        ;   XREF to: 00553ac7 (CONDITIONAL_JUMP)  ; LAB_00553ac7
    LEA EAX,[EAX]                       ; 00553b47
    LEA EDX,[EDX]                       ; 00553b4d
    ADD ESP,0x28c                       ; 00553b50
        ;   Label: LAB_00553b50
    POP EBP                             ; 00553b56
    POP EDI                             ; 00553b57
    POP ESI                             ; 00553b58
    POP EBX                             ; 00553b59
    RET                                 ; 00553b5a

