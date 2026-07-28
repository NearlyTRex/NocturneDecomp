; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_00525c40(CSfxSample *this_ptr)
;
; Parameters:
; CSfxSample *     Stack[0x4]:4   this_ptr
;
; XREF[10]:
;   sound_snddx.cpp_CDirectSoundDevice_getSfxPlaybackPos_FUN_0052b880 at 0052b8ed
;   sound_snddx.cpp_CDirectSoundDevice_lockSample_FUN_0052adc0 at 0052adf5
;   sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_00523910 at 00523a07
;   sound_sndmain.cpp_CSfxSample_lock_FUN_00523ba0 at 00523c2a
;   sound_sndmain.cpp_CSfxSample_pollStream_FUN_00523ea0 at 00523faa
;   sound_sndmain.cpp_CSfxSample_seek_FUN_00523d10 at 00523dbc
;   sound_sndmain.cpp_FUN_00529a00 at 00529a05
;   sound_sndmain.cpp_ensureSoundMemoryAvailable_FUN_00521ca0 at 00521d0e
;   sound_sndmain.cpp_getSfxSample_FUN_00522480 at 0052277a
;   sound_sndmain.cpp_getSoundMemoryStats_FUN_00527c70 at 00527d32
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00525c40
        ;   Label: sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_00525c40
    MOV ECX,dword ptr [EAX + 0x108]     ; 00525c44
    MOV EDX,dword ptr [EAX + 0x104]     ; 00525c4a
    IMUL EDX,ECX                        ; 00525c50
    MOV EAX,EDX                         ; 00525c53
    SAR EDX,0x1f                        ; 00525c55
    SHL EDX,0x3                         ; 00525c58
    SBB EAX,EDX                         ; 00525c5b
    SAR EAX,0x3                         ; 00525c5d
    RET                                 ; 00525c60

