; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_unlockSound_FUN_00556fd0(void)
;
;
; XREF[37]:
;   core_tommygun.cpp_CTommyGun_process_FUN_0056bd40 at 0056bf54
;   sound_sndmain.cpp_createUserSample_FUN_00557260 at 005572ac
;   sound_sndmain.cpp_enableSfxChannel_FUN_00556db0 at 00556e1d
;   sound_sndmain.cpp_enableSoundSystem_FUN_00558050 at 00558228
;   sound_sndmain.cpp_freeAllSamples_FUN_00557800 at 0055782a
;   sound_sndmain.cpp_freeSampleByName_FUN_005574e0 at 0055752a
;   sound_sndmain.cpp_getChannelLevels_FUN_00559c90 at 00559d20
;   sound_sndmain.cpp_getRecordingDeviceCount_FUN_005588a0 at 005588bb
;   sound_sndmain.cpp_getSampleInfo_FUN_00557570 at 0055759f
;   sound_sndmain.cpp_getSfxPlaybackPosition_FUN_005567c0 at 00556828
;   ... and 27 more
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005d3d25
;   TerminatedCString s_unlockSound_sound_was_no_005d3d3a
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_02cf3418
;   undefined4 DAT_02cf341c
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   sound_sndmain.cpp_flushSoundChanges_FUN_00558f20
;   wincore_winrun.cpp_releaseMutex_FUN_00581990
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00556fd0
        ;   Label: sound_sndmain.cpp_unlockSound_FUN_00556fd0
    PUSH EBP                            ; 00556fd1
    CMP dword ptr [0x02cf341c],0x1      ; 00556fd2 | DAT_02cf341c
    JL 0x005590e1                       ; 00556fd9
        ;   XREF to: 005590e1 (CONDITIONAL_JUMP)  ; LAB_005590e1
    CMP dword ptr [0x02cf341c],0x1      ; 00556fdf | DAT_02cf341c
        ;   Label: LAB_00556fdf
    JZ 0x0055910b                       ; 00556fe6
        ;   XREF to: 0055910b (CONDITIONAL_JUMP)  ; LAB_0055910b
    MOV EBP,dword ptr [0x02cf341c]      ; 00556fec | DAT_02cf341c
        ;   Label: LAB_00556fec
    MOV EDI,dword ptr [0x02cf3418]      ; 00556ff2 | DAT_02cf3418
    DEC EBP                             ; 00556ff8
    PUSH EDI                            ; 00556ff9
    MOV dword ptr [0x02cf341c],EBP      ; 00556ffa | DAT_02cf341c
    CALL wincore_winrun.cpp_releaseMutex_FUN_00581990 ; 00557000
        ;   XREF to: 00581990 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_releaseMutex_FUN_00581990(HANDLE mutex_handle)
    ADD ESP,0x4                         ; 00557005
    POP EBP                             ; 00557008
    POP EDI                             ; 00557009
    RET                                 ; 0055700a
    PUSH EBX                            ; 005590e1
        ;   Label: LAB_005590e1
    MOV ECX,0x5d3d25                    ; 005590e2 | = "..\\sound\\sndmain.cpp"
    MOV EBX,0x184f                      ; 005590e7
    PUSH 0x5d3d3a                       ; 005590ec | = "unlockSound - sound was not locked!"
    MOV dword ptr [0x01d71de0],ECX      ; 005590f1 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 005590f7 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 005590fd
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00559102
    POP EBX                             ; 00559105
    JMP 0x00556fdf                      ; 00559106
        ;   XREF to: 00556fdf (UNCONDITIONAL_JUMP)  ; LAB_00556fdf
    CALL sound_sndmain.cpp_flushSoundChanges_FUN_00558f20 ; 0055910b
        ;   XREF to: 00558f20 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_flushSoundChanges_FUN_00558f20()
        ;   Label: LAB_0055910b
    JMP 0x00556fec                      ; 00559110
        ;   XREF to: 00556fec (UNCONDITIONAL_JUMP)  ; LAB_00556fec

