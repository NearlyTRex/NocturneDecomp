; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl sound_sndmain_cpp_logSoundError_FUN_005adba0(char *format,...)
;
; Parameters:
; char *           Stack[0x4]:4   format
; Local Variables:
; undefined1       Stack[-0x528]:1  local_528
; undefined1       Stack[-0x128]:1  local_128
; undefined4       Stack[-0x10]:4  local_10
; undefined1       Stack[-0xc]:1  local_c
;
; XREF[39]:
;   sound_snddx.cpp_CDirectSoundDevice_allocateSample_FUN_005aef40 at 005af112
;   sound_snddx.cpp_CDirectSoundDevice_allocateSfx_FUN_005af410 at 005af663
;   sound_snddx.cpp_CDirectSoundDevice_getSfxPlaybackPos_FUN_005afd60 at 005afe56
;   sound_snddx.cpp_CDirectSoundDevice_initPropertySet_FUN_005ae660 at 005ae7b8
;   sound_snddx.cpp_CDirectSoundDevice_isSfxPlaying_FUN_005afcc0 at 005afd4e
;   sound_snddx.cpp_CDirectSoundDevice_killSfx_FUN_005b0030 at 005b0107
;   sound_snddx.cpp_CDirectSoundDevice_lockSample_FUN_005af220 at 005af308
;   sound_snddx.cpp_CDirectSoundDevice_poll_FUN_005aed50 at 005aedf9
;   sound_snddx.cpp_CDirectSoundDevice_reset_FUN_005ae4b0 at 005ae5a3
;   sound_snddx.cpp_CDirectSoundDevice_setMode_FUN_005ae830 at 005aec61
;   ... and 29 more
;
; Referenced Globals:
;   TerminatedCString s_s_0065140c
;   TerminatedCString s_sound_sndmain_cpp_00651410
;   TerminatedCString s_at_00651425
;   TerminatedCString s_q_xfer_fletch_sounderr_t_00651428
;   TerminatedCString s_anon_00651445
;   TerminatedCString s_Msg_s_00651487
;   TerminatedCString s_Time_s_00651490
;   TerminatedCString s_USERNAME_00651499
;   TerminatedCString s_USERNAME_s_006514a2
;   TerminatedCString s_COMPUTERNAME_006514b0
;   TerminatedCString s_COMPUTERNAME_s_006514bd
;   TerminatedCString s_selectedDeviceIndex_d_006514cf
;   TerminatedCString s_Device_s_006514e8
;   TerminatedCString s_No_device_selected_006514f5
;   TerminatedCString s_Bits_d_0065150a
;   ... and 5 more
;
; Called Functions:
;   crt_env.c_getenv_FUN_006013f0
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   crt_stdio.c_vsprintf_FUN_005fdba8
;   crt_time.c_asctime_FUN_00601768
;   crt_time.c_localtime_FUN_00600288
;   crt_time.c_time_FUN_006001f0
;   engine_console.cpp_CConsole_printf_FUN_00441890
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;   sound_sndmain.cpp_getAudioBitDepth_FUN_005ab250
;   sound_sndmain.cpp_getAudioChannelCount_FUN_005ab270
;   sound_sndmain.cpp_getAudioSampleRate_FUN_005ab260
;   sound_sndmain.cpp_getCurrentSoundDevice_FUN_005ab6c0
;   sound_sndmain.cpp_getSoundDeviceInfo_FUN_005ab370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005adba0
        ;   Label: sound_sndmain.cpp_logSoundError_FUN_005adba0
    PUSH ESI                            ; 005adba1
    SUB ESP,0x520                       ; 005adba2
    LEA EAX,[ESP + 0x530]               ; 005adba8
    MOV dword ptr [ESP + 0x518],EAX     ; 005adbaf
    LEA EAX,[ESP + 0x518]               ; 005adbb6
    PUSH EAX                            ; 005adbbd
    MOV EDX,dword ptr [ESP + 0x530]     ; 005adbbe
    PUSH EDX                            ; 005adbc5
    LEA EAX,[ESP + 0x8]                 ; 005adbc6
    PUSH EAX                            ; 005adbca
    CALL crt_stdio.c_vsprintf_FUN_005fdba8 ; 005adbcb
        ;   XREF to: 005fdba8 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_005fdba8(char * buffer, char * format, va_list_t * args)
    ADD ESP,0xc                         ; 005adbd0
    MOV EAX,ESP                         ; 005adbd3
    PUSH EAX                            ; 005adbd5
    PUSH 0x65140c                       ; 005adbd6 | = "%s\n"
    MOV EBX,dword ptr [0x0066e8e0]      ; 005adbdb | g_ConsolePtr | g_CConsolePtr
    XOR ECX,ECX                         ; 005adbe1
    PUSH EBX                            ; 005adbe3 | g_ConsolePtr
    MOV dword ptr [ESP + 0x524],ECX     ; 005adbe4
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005adbeb
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 005adbf0
    PUSH 0x186e                         ; 005adbf3
    PUSH 0x651410                       ; 005adbf8 | = "..\\sound\\sndmain.cpp"
    PUSH 0x651425                       ; 005adbfd | = "at"
    PUSH 0x0                            ; 005adc02
    PUSH 0x651428                       ; 005adc04 | = "\\\\q\\xfer\\fletch\\sounderr.txt"
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 005adc09
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    MOV ESI,EAX                         ; 005adc0e
    ADD ESP,0x14                        ; 005adc10
    MOV EBX,EAX                         ; 005adc13
    TEST EAX,EAX                        ; 005adc15
    JNZ 0x005adc22                      ; 005adc17
        ;   XREF to: 005adc22 (CONDITIONAL_JUMP)  ; LAB_005adc22
    ADD ESP,0x520                       ; 005adc19
    POP ESI                             ; 005adc1f
    POP EBX                             ; 005adc20
    RET                                 ; 005adc21
    PUSH 0x651445                       ; 005adc22 | = "-------------------------------------..."
        ;   Label: LAB_005adc22
    PUSH EAX                            ; 005adc27
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005adc28
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 005adc2d
    LEA EAX,[ESP + 0x51c]               ; 005adc30
    PUSH EAX                            ; 005adc37
    CALL crt_time.c_time_FUN_006001f0   ; 005adc38
        ;   XREF to: 006001f0 (UNCONDITIONAL_CALL)  ; time_t crt_time.c_time_FUN_006001f0(time_t * optional_output)
    ADD ESP,0x4                         ; 005adc3d
    MOV EAX,ESP                         ; 005adc40
    PUSH EAX                            ; 005adc42
    PUSH 0x651487                       ; 005adc43 | = "Msg: %s\n"
    PUSH ESI                            ; 005adc48
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005adc49
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 005adc4e
    LEA EAX,[ESP + 0x51c]               ; 005adc51
    PUSH EAX                            ; 005adc58
    CALL crt_time.c_localtime_FUN_00600288 ; 005adc59
        ;   XREF to: 00600288 (UNCONDITIONAL_CALL)  ; _tm * crt_time.c_localtime_FUN_00600288(time_t * timer)
    ADD ESP,0x4                         ; 005adc5e
    PUSH EAX                            ; 005adc61
    CALL crt_time.c_asctime_FUN_00601768 ; 005adc62
        ;   XREF to: 00601768 (UNCONDITIONAL_CALL)  ; char * crt_time.c_asctime_FUN_00601768(_tm * timeptr)
    ADD ESP,0x4                         ; 005adc67
    PUSH EAX                            ; 005adc6a
    PUSH 0x651490                       ; 005adc6b | = "Time: %s"
    PUSH ESI                            ; 005adc70
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005adc71
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 005adc76
    PUSH 0x651499                       ; 005adc79 | = "USERNAME"
    CALL crt_env.c_getenv_FUN_006013f0  ; 005adc7e
        ;   XREF to: 006013f0 (UNCONDITIONAL_CALL)  ; char * crt_env.c_getenv_FUN_006013f0(char * name)
    ADD ESP,0x4                         ; 005adc83
    TEST EAX,EAX                        ; 005adc86
    JZ 0x005adc99                       ; 005adc88
        ;   XREF to: 005adc99 (CONDITIONAL_JUMP)  ; LAB_005adc99
    PUSH EAX                            ; 005adc8a
    PUSH 0x6514a2                       ; 005adc8b | = "USERNAME: %s\n"
    PUSH ESI                            ; 005adc90
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005adc91
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 005adc96
    PUSH 0x6514b0                       ; 005adc99 | = "COMPUTERNAME"
        ;   Label: LAB_005adc99
    CALL crt_env.c_getenv_FUN_006013f0  ; 005adc9e
        ;   XREF to: 006013f0 (UNCONDITIONAL_CALL)  ; char * crt_env.c_getenv_FUN_006013f0(char * name)
    ADD ESP,0x4                         ; 005adca3
    TEST EAX,EAX                        ; 005adca6
    JZ 0x005adcb9                       ; 005adca8
        ;   XREF to: 005adcb9 (CONDITIONAL_JUMP)  ; LAB_005adcb9
    PUSH EAX                            ; 005adcaa
    PUSH 0x6514bd                       ; 005adcab | = "COMPUTERNAME: %s\n"
    PUSH EBX                            ; 005adcb0
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005adcb1
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 005adcb6
    CALL sound_sndmain.cpp_getCurrentSoundDevice_FUN_005ab6c0 ; 005adcb9
        ;   XREF to: 005ab6c0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getCurrentSoundDevice_FUN_005ab6c0()
        ;   Label: LAB_005adcb9
    PUSH EAX                            ; 005adcbe
    PUSH 0x6514cf                       ; 005adcbf | = "selectedDeviceIndex: %d\n"
    PUSH EBX                            ; 005adcc4
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005adcc5
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 005adcca
    CALL sound_sndmain.cpp_getCurrentSoundDevice_FUN_005ab6c0 ; 005adccd
        ;   XREF to: 005ab6c0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getCurrentSoundDevice_FUN_005ab6c0()
    TEST EAX,EAX                        ; 005adcd2
    JL 0x005add5e                       ; 005adcd4
        ;   XREF to: 005add5e (CONDITIONAL_JUMP)  ; LAB_005add5e
    LEA EAX,[ESP + 0x400]               ; 005adcda
    PUSH EAX                            ; 005adce1
    CALL sound_sndmain.cpp_getCurrentSoundDevice_FUN_005ab6c0 ; 005adce2
        ;   XREF to: 005ab6c0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getCurrentSoundDevice_FUN_005ab6c0()
    PUSH EAX                            ; 005adce7
    CALL sound_sndmain.cpp_getSoundDeviceInfo_FUN_005ab370 ; 005adce8
        ;   XREF to: 005ab370 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_getSoundDeviceInfo_FUN_005ab370(int device_id, SSoundDeviceInfo * device_info)
    ADD ESP,0x8                         ; 005adced
    LEA EAX,[ESP + 0x400]               ; 005adcf0
    PUSH EAX                            ; 005adcf7
    PUSH 0x6514e8                       ; 005adcf8 | = "Device: %s.\n"
    PUSH EBX                            ; 005adcfd
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005adcfe
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 005add03
    CALL sound_sndmain.cpp_getAudioBitDepth_FUN_005ab250 ; 005add06
        ;   XREF to: 005ab250 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getAudioBitDepth_FUN_005ab250()
        ;   Label: LAB_005add06
    PUSH EAX                            ; 005add0b
    PUSH 0x65150a                       ; 005add0c | = "Bits: %d\n"
    PUSH EBX                            ; 005add11
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005add12
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 005add17
    CALL sound_sndmain.cpp_getAudioChannelCount_FUN_005ab270 ; 005add1a
        ;   XREF to: 005ab270 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getAudioChannelCount_FUN_005ab270()
    PUSH EAX                            ; 005add1f
    PUSH 0x651514                       ; 005add20 | = "Channels: %d\n"
    PUSH EBX                            ; 005add25
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005add26
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 005add2b
    CALL sound_sndmain.cpp_getAudioSampleRate_FUN_005ab260 ; 005add2e
        ;   XREF to: 005ab260 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getAudioSampleRate_FUN_005ab260()
    PUSH EAX                            ; 005add33
    PUSH 0x651522                       ; 005add34 | = "Hz: %d\n"
    PUSH EBX                            ; 005add39
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005add3a
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 005add3f
    PUSH 0x188b                         ; 005add42
    PUSH 0x65152a                       ; 005add47 | = "..\\sound\\sndmain.cpp"
    PUSH EBX                            ; 005add4c
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 005add4d
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 005add52
    ADD ESP,0x520                       ; 005add55
    POP ESI                             ; 005add5b
    POP EBX                             ; 005add5c
    RET                                 ; 005add5d
    PUSH 0x6514f5                       ; 005add5e | = "No device selected.\n"
        ;   Label: LAB_005add5e
    PUSH EBX                            ; 005add63
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005add64
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 005add69
    JMP 0x005add06                      ; 005add6c
        ;   XREF to: 005add06 (UNCONDITIONAL_JUMP)  ; LAB_005add06

