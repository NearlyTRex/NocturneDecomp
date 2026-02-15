; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_005a8550(CSfxSample *this_ptr)
;
; Parameters:
; CSfxSample *     Stack[0x4]:4   this_ptr
;
; XREF[9]:
;   sound_snddx.cpp_CDirectSoundDevice_getSfxPlaybackPos_FUN_005afd60 at 005afdcd
;   sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_005a6170 at 005a6267
;   sound_sndmain.cpp_CSfxSample_getStreamingBufferSizeBytes_FUN_005add90 at 005add95
;   sound_sndmain.cpp_CSfxSample_lock_FUN_005a6430 at 005a64ba
;   sound_sndmain.cpp_CSfxSample_pollStream_FUN_005a6730 at 005a6889
;   sound_sndmain.cpp_CSfxSample_seek_FUN_005a65a0 at 005a664c
;   sound_sndmain.cpp_ensureSoundMemoryAvailable_FUN_005a4450 at 005a44f2
;   sound_sndmain.cpp_getSfxSample_FUN_005a4c80 at 005a4f84
;   sound_sndmain.cpp_getSoundMemoryStats_FUN_005aa6a0 at 005aa762
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a8550
        ;   Label: sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_005a8550
    MOV ECX,dword ptr [EAX + 0x108]     ; 005a8554
    MOV EDX,dword ptr [EAX + 0x104]     ; 005a855a
    IMUL EDX,ECX                        ; 005a8560
    MOV EAX,EDX                         ; 005a8563
    SAR EDX,0x1f                        ; 005a8565
    SHL EDX,0x3                         ; 005a8568
    SBB EAX,EDX                         ; 005a856b
    SAR EAX,0x3                         ; 005a856d
    RET                                 ; 005a8570

