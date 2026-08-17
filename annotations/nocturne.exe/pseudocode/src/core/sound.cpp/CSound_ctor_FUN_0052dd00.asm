; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSound * __cdecl core_sound_cpp_CSound_ctor_FUN_0052dd00(CSound *this_ptr)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_sound.cpp_staticInit_FUN_0052c8c0 at 0052c8c5
;
; Called Functions:
;   sound_sndmain.cpp_resetSoundSystemDefaults_FUN_00527d80
;   sound_sndmain.cpp_setNumberOfSfxChannels_FUN_005273d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052dd00
        ;   Label: core_sound.cpp_CSound_ctor_FUN_0052dd00
    MOV EBX,dword ptr [ESP + 0x8]       ; 0052dd01
    PUSH 0x3                            ; 0052dd05
    MOV dword ptr [EBX],0x1400          ; 0052dd07
    CALL sound_sndmain.cpp_setNumberOfSfxChannels_FUN_005273d0 ; 0052dd0d
        ;   XREF to: 005273d0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNumberOfSfxChannels_FUN_005273d0(int channel_count)
    ADD ESP,0x4                         ; 0052dd12
    CALL sound_sndmain.cpp_resetSoundSystemDefaults_FUN_00527d80 ; 0052dd15
        ;   XREF to: 00527d80 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_resetSoundSystemDefaults_FUN_00527d80()
    MOV EAX,EBX                         ; 0052dd1a
    POP EBX                             ; 0052dd1c
    RET                                 ; 0052dd1d

