; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int sound_sndmain.cpp_killSoundThread_FUN_005abcb0(void)
;
;
; XREF[3]:
;   sound_snddx.cpp_CDirectSoundDevice_reset_FUN_005ae4b0 at 005ae548
;   sound_sndmain.cpp_startSoundThread_FUN_005abc00 at 005abc07
;   sound_sndwav.cpp_CWavOutDevice_reset_FUN_005b09c0 at 005b09f6
;
; Referenced Globals:
;   TerminatedCString s_killSoundThread_failed_00650e07
;   int g_AudioThreadRunning
;   int g_AudioThreadShutdownFlag
;
; Called Functions:
;   sound_sndmain.cpp_logSoundError_FUN_005adba0
;   wincore_winrun.cpp_sleep_FUN_005f40e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005abcb0
        ;   Label: sound_sndmain.cpp_killSoundThread_FUN_005abcb0
    PUSH EBP                            ; 005abcb1
    MOV EBP,ESP                         ; 005abcb2
    AND ESP,0xfffffff8                  ; 005abcb4
    MOV EDX,0x1                         ; 005abcb7
    MOV ECX,dword ptr [0x03f69400]      ; 005abcbc | int g_AudioThreadRunning
    XOR EBX,EBX                         ; 005abcc2
    MOV dword ptr [0x03f69404],EDX      ; 005abcc4 | int g_AudioThreadShutdownFlag
    TEST ECX,ECX                        ; 005abcca
    JZ 0x005abcef                       ; 005abccc | LAB_005abcef
        ;   XREF to: 005abcef (CONDITIONAL_JUMP)
    PUSH 0x3f847ae1                     ; 005abcce
        ;   Label: LAB_005abcce
    PUSH 0x47ae147b                     ; 005abcd3
    INC EBX                             ; 005abcd8
    CALL wincore_winrun.cpp_sleep_FUN_005f40e0 ; 005abcd9 | void wincore_winrun.cpp_sleep_FUN_005f40e0(double seconds)
        ;   XREF to: 005f40e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005abcde
    CMP EBX,0x64                        ; 005abce1
    JGE 0x005abcef                      ; 005abce4 | LAB_005abcef
        ;   XREF to: 005abcef (CONDITIONAL_JUMP)
    CMP dword ptr [0x03f69400],0x0      ; 005abce6 | int g_AudioThreadRunning
    JNZ 0x005abcce                      ; 005abced | LAB_005abcce
        ;   XREF to: 005abcce (CONDITIONAL_JUMP)
    CMP dword ptr [0x03f69400],0x0      ; 005abcef | int g_AudioThreadRunning
        ;   Label: LAB_005abcef
    JNZ 0x005abd0c                      ; 005abcf6 | LAB_005abd0c
        ;   XREF to: 005abd0c (CONDITIONAL_JUMP)
    CMP dword ptr [0x03f69400],0x0      ; 005abcf8 | int g_AudioThreadRunning
    SETZ AL                             ; 005abcff
    AND EAX,0xff                        ; 005abd02
    MOV ESP,EBP                         ; 005abd07
    POP EBP                             ; 005abd09
    POP EBX                             ; 005abd0a
    RET                                 ; 005abd0b
    PUSH 0x650e07                       ; 005abd0c | = "killSoundThread - failed!\n" | s_killSoundThread_failed_00650e07 = killSoundThread - failed!

        ;   Label: LAB_005abd0c
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005abd11 | void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005abd16
    CMP dword ptr [0x03f69400],0x0      ; 005abd19 | int g_AudioThreadRunning
    SETZ AL                             ; 005abd20
    AND EAX,0xff                        ; 005abd23
    MOV ESP,EBP                         ; 005abd28
    POP EBP                             ; 005abd2a
    POP EBX                             ; 005abd2b
    RET                                 ; 005abd2c

