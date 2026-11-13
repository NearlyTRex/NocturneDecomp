; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_setNextSfxDelay_FUN_005729d0(float delay_seconds)
;
; Parameters:
; float            Stack[0x4]:4   delay_seconds
;
; XREF[2]:
;   core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_0057d940 at 0057d94e
;   core_sound.cpp_CSound_playTrackedActorSoundWithDelay_FUN_0057d980 at 0057d98a
;
; Referenced Globals:
;   undefined4 DAT_02c78cec
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02c78cec]      ; 005729d0 | DAT_02c78cec
        ;   Label: sound_sndmain.cpp_setNextSfxDelay_FUN_005729d0
    LEA EAX,[EDX*0x4 + 0x0]             ; 005729d6
    SUB EAX,EDX                         ; 005729dd
    SHL EAX,0x5                         ; 005729df
    MOV EDX,dword ptr [ESP + 0x4]       ; 005729e2
    MOV dword ptr [EAX + 0x2c78d30],EDX ; 005729e6
    RET                                 ; 005729ec

