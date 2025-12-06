; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CSound * core_sound.cpp_CSound_ctor_FUN_005b2ce0(CSound * this_ptr)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_sound.cpp_staticInit_FUN_005b1760 at 005b1765
;
; Called Functions:
;   sound_sndmain.cpp_resetSoundSystemDefaults_FUN_005aae00
;   sound_sndmain.cpp_setNumberOfSfxChannels_FUN_005a9de0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b2ce0
        ;   Label: core_sound.cpp_CSound_ctor_FUN_005b2ce0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005b2ce1
    PUSH 0x3                            ; 005b2ce5
    MOV dword ptr [EBX],0x1400          ; 005b2ce7
    CALL sound_sndmain.cpp_setNumberOfSfxChannels_FUN_005a9de0 ; 005b2ced | void sound_sndmain.cpp_setNumberOfSfxChannels_FUN_005a9de0(int channel_count)
        ;   XREF to: 005a9de0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005b2cf2
    CALL sound_sndmain.cpp_resetSoundSystemDefaults_FUN_005aae00 ; 005b2cf5 | void sound_sndmain.cpp_resetSoundSystemDefaults_FUN_005aae00()
        ;   XREF to: 005aae00 (UNCONDITIONAL_CALL)
    MOV EAX,EBX                         ; 005b2cfa
    POP EBX                             ; 005b2cfc
    RET                                 ; 005b2cfd

