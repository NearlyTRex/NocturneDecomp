; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSound * __cdecl core_sound_cpp_CSound_ctor_FUN_0057cb10(CSound *this_ptr)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_sound.cpp_staticInit_FUN_0057b670 at 0057b675
;
; Called Functions:
;   sound_sndmain.cpp_resetSoundSystemDefaults_FUN_00574e00
;   sound_sndmain.cpp_setNumberOfSfxChannels_FUN_00573c10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057cb10
        ;   Label: core_sound.cpp_CSound_ctor_FUN_0057cb10
    MOV EBX,dword ptr [ESP + 0x8]       ; 0057cb11
    PUSH 0x3                            ; 0057cb15
    MOV dword ptr [EBX],0x1400          ; 0057cb17
    CALL sound_sndmain.cpp_setNumberOfSfxChannels_FUN_00573c10 ; 0057cb1d
        ;   XREF to: 00573c10 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNumberOfSfxChannels_FUN_00573c10(int channel_count)
    ADD ESP,0x4                         ; 0057cb22
    CALL sound_sndmain.cpp_resetSoundSystemDefaults_FUN_00574e00 ; 0057cb25
        ;   XREF to: 00574e00 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_resetSoundSystemDefaults_FUN_00574e00()
    MOV EAX,EBX                         ; 0057cb2a
    POP EBX                             ; 0057cb2c
    RET                                 ; 0057cb2d

