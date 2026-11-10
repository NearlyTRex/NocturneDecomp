; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_writeIni_FUN_005763b0(CIniFile *ini_file)
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
;   core_inivar.cpp_writeIniData_FUN_004f5760 at 004f5953
;
; Referenced Globals:
;   TerminatedCString s_DeviceName_005f453b
;   undefined4 DAT_005f4546
;   TerminatedCString s_Channels_005f454b
;   undefined4 DAT_005f4554
;   TerminatedCString s_AccelEnabled_005f4557
;   TerminatedCString s_MaxSwLatency_005f4564
;   undefined4 DAT_005f4571
;   TerminatedCString s_SfxChannel_dEnabled_005f4576
;   TerminatedCString s_SfxChannel_dVol_005f458a
;   undefined4 DAT_006232e4
;   undefined4 DAT_006232fc
;   undefined4 DAT_00623430
;   undefined4 DAT_00623434
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005bfb40
;   engine_ini.cpp_FUN_004f4d70
;   engine_ini.cpp_FUN_004f4e20
;   sound_sndmain.cpp_getAudioFormat_FUN_005751c0
;   sound_sndmain.cpp_getMaxSwLatency_FUN_00576030
;   sound_sndmain.cpp_getSfxChannelVol_FUN_00573bc0
;   sound_sndmain.cpp_getSoundDeviceCount_FUN_005752c0
;   sound_sndmain.cpp_getSoundDeviceInfo_FUN_00575350
;   sound_sndmain.cpp_isHardwareMixingEnabled_FUN_00575570
;   sound_sndmain.cpp_isSfxChannelEnabled_FUN_00573cd0
;   sound_sndmain.cpp_isSoundMuted_FUN_005735f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005763b0
        ;   Label: sound_sndmain.cpp_writeIni_FUN_005763b0
    PUSH ESI                            ; 005763b1
    PUSH EDI                            ; 005763b2
    PUSH EBP                            ; 005763b3
    SUB ESP,0x28c                       ; 005763b4
    MOV EBP,dword ptr [ESP + 0x2a0]     ; 005763ba
    MOV ECX,0x40                        ; 005763c1
    LEA EDI,[ESP + 0x118]               ; 005763c6
    MOV ESI,0x623430                    ; 005763cd | DAT_00623430
    MOV EDX,dword ptr [0x006232fc]      ; 005763d2 | DAT_006232fc
    MOVSD.REP ES:EDI,ESI                ; 005763d8 | DAT_00623430 | DAT_00623434
    TEST EDX,EDX                        ; 005763da
    JL 0x0057641c                       ; 005763dc
        ;   XREF to: 0057641c (CONDITIONAL_JUMP)  ; LAB_0057641c
    CALL sound_sndmain.cpp_getSoundDeviceCount_FUN_005752c0 ; 005763de
        ;   XREF to: 005752c0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getSoundDeviceCount_FUN_005752c0()
    MOV ECX,dword ptr [0x006232fc]      ; 005763e3 | DAT_006232fc
    CMP EAX,ECX                         ; 005763e9
    JLE 0x0057641c                      ; 005763eb
        ;   XREF to: 0057641c (CONDITIONAL_JUMP)  ; LAB_0057641c
    MOV EAX,ESP                         ; 005763ed
    PUSH EAX                            ; 005763ef
    PUSH ECX                            ; 005763f0
    CALL sound_sndmain.cpp_getSoundDeviceInfo_FUN_00575350 ; 005763f1
        ;   XREF to: 00575350 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_getSoundDeviceInfo_FUN_00575350(int device_id, SSoundDeviceInfo * device_info)
    ADD ESP,0x8                         ; 005763f6
    MOV ESI,ESP                         ; 005763f9
    LEA EDI,[ESP + 0x118]               ; 005763fb
    PUSH EDI                            ; 00576402
    MOV AL,byte ptr [ESI]               ; 00576403
        ;   Label: LAB_00576403
    MOV byte ptr [EDI],AL               ; 00576405
    CMP AL,0x0                          ; 00576407
    JZ 0x0057641b                       ; 00576409
        ;   XREF to: 0057641b (CONDITIONAL_JUMP)  ; LAB_0057641b
    MOV AL,byte ptr [ESI + 0x1]         ; 0057640b
    ADD ESI,0x2                         ; 0057640e
    MOV byte ptr [EDI + 0x1],AL         ; 00576411
    ADD EDI,0x2                         ; 00576414
    CMP AL,0x0                          ; 00576417
    JNZ 0x00576403                      ; 00576419
        ;   XREF to: 00576403 (CONDITIONAL_JUMP)  ; LAB_00576403
    POP EDI                             ; 0057641b
        ;   Label: LAB_0057641b
    LEA EAX,[ESP + 0x118]               ; 0057641c
        ;   Label: LAB_0057641c
    PUSH EAX                            ; 00576423
    PUSH 0x5f453b                       ; 00576424 | = "DeviceName"
    MOV EBX,dword ptr [EBP + 0x200]     ; 00576429
    PUSH EBP                            ; 0057642f
    CALL dword ptr [EBX + 0x8]          ; 00576430
    ADD ESP,0xc                         ; 00576433
    LEA EAX,[ESP + 0x280]               ; 00576436
    PUSH EAX                            ; 0057643d
    LEA EAX,[ESP + 0x280]               ; 0057643e
    PUSH EAX                            ; 00576445
    LEA EAX,[ESP + 0x28c]               ; 00576446
    PUSH EAX                            ; 0057644d
    CALL sound_sndmain.cpp_getAudioFormat_FUN_005751c0 ; 0057644e
        ;   XREF to: 005751c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_getAudioFormat_FUN_005751c0(int * bits_per_sample, int * channels, int * sample_rate)
    ADD ESP,0xc                         ; 00576453
    MOV ESI,dword ptr [ESP + 0x284]     ; 00576456
    PUSH ESI                            ; 0057645d
    PUSH 0x5f4546                       ; 0057645e | DAT_005f4546
    PUSH EBP                            ; 00576463
    CALL engine_ini.cpp_FUN_004f4d70    ; 00576464
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    ADD ESP,0xc                         ; 00576469
    MOV EDI,dword ptr [ESP + 0x27c]     ; 0057646c
    PUSH EDI                            ; 00576473
    PUSH 0x5f454b                       ; 00576474 | = "Channels"
    PUSH EBP                            ; 00576479
    CALL engine_ini.cpp_FUN_004f4d70    ; 0057647a
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    ADD ESP,0xc                         ; 0057647f
    MOV EAX,dword ptr [ESP + 0x280]     ; 00576482
    PUSH EAX                            ; 00576489
    PUSH 0x5f4554                       ; 0057648a | DAT_005f4554
    PUSH EBP                            ; 0057648f
    CALL engine_ini.cpp_FUN_004f4d70    ; 00576490
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    ADD ESP,0xc                         ; 00576495
    CALL sound_sndmain.cpp_isHardwareMixingEnabled_FUN_00575570 ; 00576498
        ;   XREF to: 00575570 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isHardwareMixingEnabled_FUN_00575570()
    PUSH EAX                            ; 0057649d
    PUSH 0x5f4557                       ; 0057649e | = "AccelEnabled"
    PUSH EBP                            ; 005764a3
    CALL engine_ini.cpp_FUN_004f4d70    ; 005764a4
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    ADD ESP,0xc                         ; 005764a9
    CALL sound_sndmain.cpp_getMaxSwLatency_FUN_00576030 ; 005764ac
        ;   XREF to: 00576030 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getMaxSwLatency_FUN_00576030()
    MOV dword ptr [ESP + 0x288],EAX     ; 005764b1
    FLD float ptr [ESP + 0x288]         ; 005764b8
    SUB ESP,0x4                         ; 005764bf
    FSTP float ptr [ESP]                ; 005764c2
    PUSH 0x5f4564                       ; 005764c5 | = "MaxSwLatency"
    PUSH EBP                            ; 005764ca
    CALL engine_ini.cpp_FUN_004f4e20    ; 005764cb
        ;   XREF to: 004f4e20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4e20()
    ADD ESP,0xc                         ; 005764d0
    CALL sound_sndmain.cpp_isSoundMuted_FUN_005735f0 ; 005764d3
        ;   XREF to: 005735f0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSoundMuted_FUN_005735f0()
    PUSH EAX                            ; 005764d8
    PUSH 0x5f4571                       ; 005764d9 | DAT_005f4571
    PUSH EBP                            ; 005764de
    XOR EBX,EBX                         ; 005764df
    CALL engine_ini.cpp_FUN_004f4d70    ; 005764e1
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    MOV EDX,dword ptr [0x006232e4]      ; 005764e6 | DAT_006232e4
    ADD ESP,0xc                         ; 005764ec
    TEST EDX,EDX                        ; 005764ef
    JLE 0x00576580                      ; 005764f1
        ;   XREF to: 00576580 (CONDITIONAL_JUMP)  ; LAB_00576580
    PUSH EBX                            ; 005764f7
        ;   Label: LAB_005764f7
    PUSH 0x5f4576                       ; 005764f8 | = "SfxChannel%dEnabled"
    LEA EAX,[ESP + 0x220]               ; 005764fd
    PUSH EAX                            ; 00576504
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00576505
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 0057650a
    PUSH EBX                            ; 0057650d
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_00573cd0 ; 0057650e
        ;   XREF to: 00573cd0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxChannelEnabled_FUN_00573cd0(int channel_index)
    ADD ESP,0x4                         ; 00576513
    PUSH EAX                            ; 00576516
    LEA EAX,[ESP + 0x21c]               ; 00576517
    PUSH EAX                            ; 0057651e
    PUSH EBP                            ; 0057651f
    CALL engine_ini.cpp_FUN_004f4d70    ; 00576520
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    ADD ESP,0xc                         ; 00576525
    PUSH EBX                            ; 00576528
    PUSH 0x5f458a                       ; 00576529 | = "SfxChannel%dVol"
    LEA EAX,[ESP + 0x220]               ; 0057652e
    PUSH EAX                            ; 00576535
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00576536
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 0057653b
    PUSH EBX                            ; 0057653e
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_00573bc0 ; 0057653f
        ;   XREF to: 00573bc0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getSfxChannelVol_FUN_00573bc0()
    MOV dword ptr [ESP + 0x28c],EAX     ; 00576544
    FLD float ptr [ESP + 0x28c]         ; 0057654b
    ADD ESP,0x4                         ; 00576552
    SUB ESP,0x4                         ; 00576555
    LEA EAX,[ESP + 0x21c]               ; 00576558
    FSTP float ptr [ESP]                ; 0057655f
    PUSH EAX                            ; 00576562
    PUSH EBP                            ; 00576563
    INC EBX                             ; 00576564
    CALL engine_ini.cpp_FUN_004f4e20    ; 00576565
        ;   XREF to: 004f4e20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4e20()
    MOV ECX,dword ptr [0x006232e4]      ; 0057656a | DAT_006232e4
    ADD ESP,0xc                         ; 00576570
    CMP EBX,ECX                         ; 00576573
    JL 0x005764f7                       ; 00576575
        ;   XREF to: 005764f7 (CONDITIONAL_JUMP)  ; LAB_005764f7
    LEA EAX,[EAX]                       ; 00576577
    LEA EDX,[EDX]                       ; 0057657d
    ADD ESP,0x28c                       ; 00576580
        ;   Label: LAB_00576580
    POP EBP                             ; 00576586
    POP EDI                             ; 00576587
    POP ESI                             ; 00576588
    POP EBX                             ; 00576589
    RET                                 ; 0057658a

