; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_freeAllSamples_FUN_005aa660(void)
;
;
; XREF[2]:
;   core_sound.cpp_CSound_reset_FUN_005b39a0 at 005b39a5
;   sound_sndmain.cpp_shutdownSoundSystem_FUN_005aaeb0 at 005aaed8
;
; Referenced Globals:
;   CSfxSample[64] g_SfxSamples
;   undefined4 g_SfxSamples[1].sample_info.name[0]
;   CSfxSample* g_SfxSamplesEnd
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0
;   sound_sndmain.cpp_killAllSfx_FUN_005a9cc0
;   sound_sndmain.cpp_lockSound_FUN_005abd30
;   sound_sndmain.cpp_unlockSound_FUN_005abdc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aa660
        ;   Label: sound_sndmain.cpp_freeAllSamples_FUN_005aa660
    PUSH ESI                            ; 005aa661
    CALL sound_sndmain.cpp_lockSound_FUN_005abd30 ; 005aa662
        ;   XREF to: 005abd30 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_005abd30()
    MOV EBX,0x3f6282c                   ; 005aa667 | g_SfxSamples
    CALL sound_sndmain.cpp_killAllSfx_FUN_005a9cc0 ; 005aa66c
        ;   XREF to: 005a9cc0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_killAllSfx_FUN_005a9cc0()
    LEA ESI,[EBX + 0x6000]              ; 005aa671 | g_SfxSamplesEnd
    PUSH EBX                            ; 005aa677 | g_SfxSamples | g_SfxSamples[1].sample_info.name[0]
        ;   Label: LAB_005aa677
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0 ; 005aa678
        ;   XREF to: 005a62c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0(CSfxSample * this_ptr)
    ADD EBX,0x180                       ; 005aa67d
    ADD ESP,0x4                         ; 005aa683
    CMP EBX,ESI                         ; 005aa686
    JNZ 0x005aa677                      ; 005aa688
        ;   XREF to: 005aa677 (CONDITIONAL_JUMP)  ; LAB_005aa677
    CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0 ; 005aa68a
        ;   XREF to: 005abdc0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_005abdc0()
    POP ESI                             ; 005aa68f
    POP EBX                             ; 005aa690
    RET                                 ; 005aa691

