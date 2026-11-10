; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_shutdownSoundSystem_FUN_00558010(void)
;
;
; XREF[1]:
;   sound_sndmain.cpp_shutdownSoundSystem_FUN_0055fcc0 at 0055fcc0
;
; Referenced Globals:
;   undefined4 DAT_02ce71ec
;
; Called Functions:
;   sound_sndmain.cpp_closeSoundDevice_FUN_005587e0
;   sound_sndmain.cpp_freeAllSamples_FUN_00557800
;   sound_sndmain.cpp_releaseRecordingDevice_FUN_00558ab0
;   sound_sndmain.cpp_resetSoundDevice_FUN_00558250
;   sound_sndmain.cpp_stopRecordingDevice_FUN_00558ce0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02ce71ec]      ; 00558010 | DAT_02ce71ec
        ;   Label: sound_sndmain.cpp_shutdownSoundSystem_FUN_00558010
    TEST EDX,EDX                        ; 00558016
    JLE 0x0055801b                      ; 00558018
        ;   XREF to: 0055801b (CONDITIONAL_JUMP)  ; LAB_0055801b
    RET                                 ; 0055801a
    LEA ECX,[EDX + 0x1]                 ; 0055801b
        ;   Label: LAB_0055801b
    MOV dword ptr [0x02ce71ec],ECX      ; 0055801e | DAT_02ce71ec
    CALL sound_sndmain.cpp_resetSoundDevice_FUN_00558250 ; 00558024
        ;   XREF to: 00558250 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_resetSoundDevice_FUN_00558250()
    CALL sound_sndmain.cpp_closeSoundDevice_FUN_005587e0 ; 00558029
        ;   XREF to: 005587e0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_closeSoundDevice_FUN_005587e0()
    CALL sound_sndmain.cpp_stopRecordingDevice_FUN_00558ce0 ; 0055802e
        ;   XREF to: 00558ce0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_stopRecordingDevice_FUN_00558ce0()
    CALL sound_sndmain.cpp_releaseRecordingDevice_FUN_00558ab0 ; 00558033
        ;   XREF to: 00558ab0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_releaseRecordingDevice_FUN_00558ab0()
    CALL sound_sndmain.cpp_freeAllSamples_FUN_00557800 ; 00558038
        ;   XREF to: 00557800 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_freeAllSamples_FUN_00557800()
    DEC dword ptr [0x02ce71ec]          ; 0055803d | DAT_02ce71ec
    RET                                 ; 00558043

