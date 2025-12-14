; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_sndmain.cpp_unlockSound_FUN_005abdc0(void)
;
;
; XREF[36]:
;   core_tommygun.cpp_CTommyGun_process_FUN_005de360 at 005de574
;   sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20 at 005a9e8d
;   sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0 at 005ab10d
;   sound_sndmain.cpp_formatActiveSounds_FUN_005a9f80 at 005a9fa6
;   sound_sndmain.cpp_freeAllSamples_FUN_005aa660 at 005aa68a
;   sound_sndmain.cpp_freeSampleByName_FUN_005aa360 at 005aa3aa
;   sound_sndmain.cpp_getChannelLevels_FUN_005ac990 at 005aca20
;   sound_sndmain.cpp_getRecordingDeviceCaps_FUN_005abb10 at 005abb28
;   sound_sndmain.cpp_getRecordingDeviceCount_FUN_005ab720 at 005ab73b
;   sound_sndmain.cpp_getSampleInfo_FUN_005aa3f0 at 005aa463
;   ... and 26 more
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_00650e92
;   TerminatedCString s_unlockSound_sound_was_no_00650ea7
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   HANDLE g_SoundMutex
;   int g_SoundLockCount
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   wincore_winrun.cpp_releaseMutex_FUN_005f4050
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005abdc0
        ;   Label: sound_sndmain.cpp_unlockSound_FUN_005abdc0
    PUSH EDI                            ; 005abdc1
    CMP dword ptr [0x03f6940c],0x1      ; 005abdc2 | g_SoundLockCount
    JL 0x005abdea                       ; 005abdc9
        ;   XREF to: 005abdea (CONDITIONAL_JUMP)  ; LAB_005abdea
    MOV EDI,dword ptr [0x03f6940c]      ; 005abdcb | g_SoundLockCount
        ;   Label: LAB_005abdcb
    MOV ESI,dword ptr [0x03f69408]      ; 005abdd1 | g_SoundMutex
    DEC EDI                             ; 005abdd7
    PUSH ESI                            ; 005abdd8
    MOV dword ptr [0x03f6940c],EDI      ; 005abdd9 | g_SoundLockCount
    CALL wincore_winrun.cpp_releaseMutex_FUN_005f4050 ; 005abddf
        ;   XREF to: 005f4050 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_releaseMutex_FUN_005f4050(HANDLE mutex_handle)
    ADD ESP,0x4                         ; 005abde4
    POP EDI                             ; 005abde7
    POP ESI                             ; 005abde8
    RET                                 ; 005abde9
    PUSH EBX                            ; 005abdea
        ;   Label: LAB_005abdea
    MOV ECX,0x650e92                    ; 005abdeb | = "..\\sound\\sndmain.cpp"
    MOV EBX,0x1586                      ; 005abdf0
    PUSH 0x650ea7                       ; 005abdf5 | = "unlockSound - sound was not locked!"
    MOV dword ptr [0x02f0ca48],ECX      ; 005abdfa | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 005abe00 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005abe06
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005abe0b
    POP EBX                             ; 005abe0e
    JMP 0x005abdcb                      ; 005abe0f
        ;   XREF to: 005abdcb (UNCONDITIONAL_JUMP)  ; LAB_005abdcb

