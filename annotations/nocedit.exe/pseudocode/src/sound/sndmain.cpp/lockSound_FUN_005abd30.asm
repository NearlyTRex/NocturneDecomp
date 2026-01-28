; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl sound_sndmain_cpp_lockSound_FUN_005abd30(void)
;
;
; XREF[20]:
;   core_tommygun.cpp_CTommyGun_process_FUN_005de360 at 005de46d
;   sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20 at 005a9e62
;   sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0 at 005aaf28
;   sound_sndmain.cpp_formatActiveSounds_FUN_005a9f80 at 005a9f84
;   sound_sndmain.cpp_freeAllSamples_FUN_005aa660 at 005aa662
;   sound_sndmain.cpp_freeSampleByName_FUN_005aa360 at 005aa367
;   sound_sndmain.cpp_getChannelLevels_FUN_005ac990 at 005ac9d7
;   sound_sndmain.cpp_getRecordingDeviceCaps_FUN_005abb10 at 005abb10
;   sound_sndmain.cpp_getRecordingDeviceCount_FUN_005ab720 at 005ab736
;   sound_sndmain.cpp_getSampleInfo_FUN_005aa3f0 at 005aa401
;   ... and 10 more
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_00650e22
;   TerminatedCString s_lockSound_unable_to_crea_00650e37
;   TerminatedCString s_sound_sndmain_cpp_00650e61
;   TerminatedCString s_lockSound_lock_imbalance_00650e76
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   HANDLE g_SoundMutex
;   int g_SoundLockCount
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   wincore_winrun.cpp_createMutex_FUN_005f3fe0
;   wincore_winrun.cpp_waitForMutex_FUN_005f3ff0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005abd30
        ;   Label: sound_sndmain.cpp_lockSound_FUN_005abd30
    PUSH EDI                            ; 005abd31
    CMP dword ptr [0x03f69408],0x0      ; 005abd32 | g_SoundMutex
    JNZ 0x005abd6e                      ; 005abd39
        ;   XREF to: 005abd6e (CONDITIONAL_JUMP)  ; LAB_005abd6e
    CALL wincore_winrun.cpp_createMutex_FUN_005f3fe0 ; 005abd3b
        ;   XREF to: 005f3fe0 (UNCONDITIONAL_CALL)  ; HANDLE wincore_winrun.cpp_createMutex_FUN_005f3fe0()
    MOV [0x03f69408],EAX                ; 005abd40 | g_SoundMutex
    TEST EAX,EAX                        ; 005abd45
    JNZ 0x005abd6e                      ; 005abd47
        ;   XREF to: 005abd6e (CONDITIONAL_JUMP)  ; LAB_005abd6e
    PUSH EBX                            ; 005abd49
    MOV ECX,0x650e22                    ; 005abd4a | = "..\\sound\\sndmain.cpp"
    MOV EBX,0x1575                      ; 005abd4f
    PUSH 0x650e37                       ; 005abd54 | = "lockSound - unable to create mutex ob..."
    MOV dword ptr [0x02f0ca48],ECX      ; 005abd59 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 005abd5f | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005abd65
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005abd6a
    POP EBX                             ; 005abd6d
    MOV ESI,dword ptr [0x03f69408]      ; 005abd6e | g_SoundMutex
        ;   Label: LAB_005abd6e
    PUSH ESI                            ; 005abd74
    CALL wincore_winrun.cpp_waitForMutex_FUN_005f3ff0 ; 005abd75
        ;   XREF to: 005f3ff0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_waitForMutex_FUN_005f3ff0(HANDLE mutex_handle)
    MOV EDI,dword ptr [0x03f6940c]      ; 005abd7a | g_SoundLockCount
    INC EDI                             ; 005abd80
    ADD ESP,0x4                         ; 005abd81
    MOV dword ptr [0x03f6940c],EDI      ; 005abd84 | g_SoundLockCount
    CMP EDI,0x63                        ; 005abd8a
    JG 0x005abd92                       ; 005abd8d
        ;   XREF to: 005abd92 (CONDITIONAL_JUMP)  ; LAB_005abd92
    POP EDI                             ; 005abd8f
    POP ESI                             ; 005abd90
    RET                                 ; 005abd91
    MOV EAX,0x650e61                    ; 005abd92 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005abd92
    MOV EDX,0x157f                      ; 005abd97
    PUSH 0x650e76                       ; 005abd9c | = "lockSound - lock imbalance?"
    MOV [0x02f0ca48],EAX                ; 005abda1 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 005abda6 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005abdac
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005abdb1
    POP EDI                             ; 005abdb4
    POP ESI                             ; 005abdb5
    RET                                 ; 005abdb6

