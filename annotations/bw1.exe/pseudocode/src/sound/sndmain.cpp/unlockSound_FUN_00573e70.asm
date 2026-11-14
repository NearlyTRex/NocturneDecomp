; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_unlockSound_FUN_00573e70(void)
;
;
; XREF[38]:
;   core_tommygun.cpp_CTommyGun_process_FUN_00598d50 at 00598f64
;   sound_sndmain.cpp_createUserSample_FUN_00574100 at 0057414c
;   sound_sndmain.cpp_enableSfxChannel_FUN_00573c50 at 00573cbd
;   sound_sndmain.cpp_enableSoundSystem_FUN_00574ee0 at 005750b8
;   sound_sndmain.cpp_freeAllSamples_FUN_005746a0 at 005746ca
;   sound_sndmain.cpp_freeSampleByName_FUN_00574380 at 005743ca
;   sound_sndmain.cpp_getChannelLevels_FUN_00576b20 at 00576bb0
;   sound_sndmain.cpp_getRecordingDeviceCount_FUN_00575730 at 0057574b
;   sound_sndmain.cpp_getSampleInfo_FUN_00574410 at 0057443f
;   sound_sndmain.cpp_getSfxPlaybackPosition_FUN_00573660 at 005736c8
;   ... and 28 more
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005f442b
;   TerminatedCString s_unlockSound_sound_was_no_005f4440
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_02c807e8
;   undefined4 DAT_02c807ec
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   sound_sndmain.cpp_flushSoundChanges_FUN_00575db0
;   wincore_winrun.cpp_releaseMutex_FUN_005b37b0
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00573e70
        ;   Label: sound_sndmain.cpp_unlockSound_FUN_00573e70
    PUSH EBP                            ; 00573e71
    CMP dword ptr [0x02c807ec],0x1      ; 00573e72 | DAT_02c807ec
    JL 0x00575f71                       ; 00573e79
        ;   XREF to: 00575f71 (CONDITIONAL_JUMP)  ; LAB_00575f71
    CMP dword ptr [0x02c807ec],0x1      ; 00573e7f | DAT_02c807ec
        ;   Label: LAB_00573e7f
    JZ 0x00575f9b                       ; 00573e86
        ;   XREF to: 00575f9b (CONDITIONAL_JUMP)  ; LAB_00575f9b
    MOV EBP,dword ptr [0x02c807ec]      ; 00573e8c | DAT_02c807ec
        ;   Label: LAB_00573e8c
    MOV EDI,dword ptr [0x02c807e8]      ; 00573e92 | DAT_02c807e8
    DEC EBP                             ; 00573e98
    PUSH EDI                            ; 00573e99
    MOV dword ptr [0x02c807ec],EBP      ; 00573e9a | DAT_02c807ec
    CALL wincore_winrun.cpp_releaseMutex_FUN_005b37b0 ; 00573ea0
        ;   XREF to: 005b37b0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_releaseMutex_FUN_005b37b0(HANDLE mutex_handle)
    ADD ESP,0x4                         ; 00573ea5
    POP EBP                             ; 00573ea8
    POP EDI                             ; 00573ea9
    RET                                 ; 00573eaa
    PUSH EBX                            ; 00575f71
        ;   Label: LAB_00575f71
    MOV ECX,0x5f442b                    ; 00575f72 | = "..\\sound\\sndmain.cpp"
    MOV EBX,0x183c                      ; 00575f77
    PUSH 0x5f4440                       ; 00575f7c | = "unlockSound - sound was not locked!"
    MOV dword ptr [0x01d1d400],ECX      ; 00575f81 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 00575f87 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00575f8d
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00575f92
    POP EBX                             ; 00575f95
    JMP 0x00573e7f                      ; 00575f96
        ;   XREF to: 00573e7f (UNCONDITIONAL_JUMP)  ; LAB_00573e7f
    CALL sound_sndmain.cpp_flushSoundChanges_FUN_00575db0 ; 00575f9b
        ;   XREF to: 00575db0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_flushSoundChanges_FUN_00575db0()
        ;   Label: LAB_00575f9b
    JMP 0x00573e8c                      ; 00575fa0
        ;   XREF to: 00573e8c (UNCONDITIONAL_JUMP)  ; LAB_00573e8c

