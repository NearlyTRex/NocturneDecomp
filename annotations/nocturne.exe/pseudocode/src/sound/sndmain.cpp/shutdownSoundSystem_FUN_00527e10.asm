; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_shutdownSoundSystem_FUN_00527e10(CSound *this_ptr)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_sound.cpp_FUN_0052dd80 at 0052dd80
;
; Referenced Globals:
;   undefined4 DAT_02dbd34c
;
; Called Functions:
;   sound_sndmain.cpp_freeAllSamples_FUN_00527c30
;   sound_sndmain.cpp_resetSoundDevice_FUN_00528080
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02dbd34c]      ; 00527e10 | DAT_02dbd34c
        ;   Label: sound_sndmain.cpp_shutdownSoundSystem_FUN_00527e10
    TEST EDX,EDX                        ; 00527e16
    JLE 0x00527e1b                      ; 00527e18
        ;   XREF to: 00527e1b (CONDITIONAL_JUMP)  ; LAB_00527e1b
    RET                                 ; 00527e1a
    LEA ECX,[EDX + 0x1]                 ; 00527e1b
        ;   Label: LAB_00527e1b
    MOV dword ptr [0x02dbd34c],ECX      ; 00527e1e | DAT_02dbd34c
    CALL sound_sndmain.cpp_resetSoundDevice_FUN_00528080 ; 00527e24
        ;   XREF to: 00528080 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_resetSoundDevice_FUN_00528080()
    CALL sound_sndmain.cpp_freeAllSamples_FUN_00527c30 ; 00527e29
        ;   XREF to: 00527c30 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_freeAllSamples_FUN_00527c30()
    DEC dword ptr [0x02dbd34c]          ; 00527e2e | DAT_02dbd34c
    RET                                 ; 00527e34

