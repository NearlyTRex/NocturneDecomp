; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl HANDLE sound_sndmain.cpp_startSoundThread_FUN_005abc00(double latency_seconds)
;
; Parameters:
; double           Stack[0x4]:8   latency_seconds
;
; XREF[2]:
;   sound_snddx.cpp_CDirectSoundDevice_start_FUN_005ae340 at 005ae3ce
;   sound_sndwav.cpp_CWavOutDevice_start_FUN_005b08f0 at 005b098b
;
; Referenced Globals:
;   double g_AudioLatencySecondsMin = 0.00200000000000000
;   double g_AudioLatencySeconds
;   undefined4 g_AudioLatencySeconds+4
;   int g_AudioThreadRunning
;   int g_AudioThreadShutdownFlag
;
; Called Functions:
;   sound_sndmain.cpp_killSoundThread_FUN_005abcb0
;   wincore_winrun.cpp_createThread_FUN_005f4070
;   wincore_winrun.cpp_setThreadPriority_FUN_005f40a0
;   wincore_winrun.cpp_sleep_FUN_005f40e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005abc00
        ;   Label: sound_sndmain.cpp_startSoundThread_FUN_005abc00
    PUSH EBP                            ; 005abc01
    MOV EBP,ESP                         ; 005abc02
    AND ESP,0xfffffff8                  ; 005abc04
    CALL sound_sndmain.cpp_killSoundThread_FUN_005abcb0 ; 005abc07
        ;   XREF to: 005abcb0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSoundThread_FUN_005abcb0()
    TEST EAX,EAX                        ; 005abc0c
    JZ 0x005abc64                       ; 005abc0e
        ;   XREF to: 005abc64 (CONDITIONAL_JUMP)  ; LAB_005abc64
    MOV EAX,dword ptr [EBP + 0xc]       ; 005abc10
    MOV [0x03f693f8],EAX                ; 005abc13 | g_AudioLatencySeconds
    MOV EAX,dword ptr [EBP + 0x10]      ; 005abc18
    FLD double ptr [EBP + 0xc]          ; 005abc1b
    MOV [0x03f693fc],EAX                ; 005abc1e | g_AudioLatencySeconds+4
    FCOMP double ptr [0x00650dff]       ; 005abc23 | g_AudioLatencySecondsMin
    FNSTSW AX                           ; 005abc29
    SAHF                                ; 005abc2b
    JNC 0x005abc44                      ; 005abc2c
        ;   XREF to: 005abc44 (CONDITIONAL_JUMP)  ; LAB_005abc44
    MOV EDX,0xd2f1a9fc                  ; 005abc2e
    MOV ECX,0x3f60624d                  ; 005abc33
    MOV dword ptr [0x03f693f8],EDX      ; 005abc38 | g_AudioLatencySeconds
    MOV dword ptr [0x03f693fc],ECX      ; 005abc3e | g_AudioLatencySeconds+4
    XOR EBX,EBX                         ; 005abc44
        ;   Label: LAB_005abc44
    PUSH EBX                            ; 005abc46
    PUSH 0x5abba0                       ; 005abc47
    MOV dword ptr [0x03f69400],EBX      ; 005abc4c | g_AudioThreadRunning
    MOV dword ptr [0x03f69404],EBX      ; 005abc52 | g_AudioThreadShutdownFlag
    CALL wincore_winrun.cpp_createThread_FUN_005f4070 ; 005abc58
        ;   XREF to: 005f4070 (UNCONDITIONAL_CALL)  ; HANDLE wincore_winrun.cpp_createThread_FUN_005f4070(LPTHREAD_START_ROUTINE thread_func, LPVOID thread_param)
    ADD ESP,0x8                         ; 005abc5d
    TEST EAX,EAX                        ; 005abc60
    JNZ 0x005abc69                      ; 005abc62
        ;   XREF to: 005abc69 (CONDITIONAL_JUMP)  ; LAB_005abc69
    MOV ESP,EBP                         ; 005abc64
        ;   Label: LAB_005abc64
    POP EBP                             ; 005abc66
    POP EBX                             ; 005abc67
    RET                                 ; 005abc68
    PUSH 0x3                            ; 005abc69
        ;   Label: LAB_005abc69
    PUSH EAX                            ; 005abc6b
    CALL wincore_winrun.cpp_setThreadPriority_FUN_005f40a0 ; 005abc6c
        ;   XREF to: 005f40a0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_setThreadPriority_FUN_005f40a0(HANDLE hThread, int priority_level)
    ADD ESP,0x8                         ; 005abc71
    TEST EAX,EAX                        ; 005abc74
    JZ 0x005abc64                       ; 005abc76
        ;   XREF to: 005abc64 (CONDITIONAL_JUMP)  ; LAB_005abc64
    CMP dword ptr [0x03f69400],0x0      ; 005abc78 | g_AudioThreadRunning
    JNZ 0x005abca2                      ; 005abc7f
        ;   XREF to: 005abca2 (CONDITIONAL_JUMP)  ; LAB_005abca2
    PUSH 0x3f847ae1                     ; 005abc81
        ;   Label: LAB_005abc81
    PUSH 0x47ae147b                     ; 005abc86
    INC EBX                             ; 005abc8b
    CALL wincore_winrun.cpp_sleep_FUN_005f40e0 ; 005abc8c
        ;   XREF to: 005f40e0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_sleep_FUN_005f40e0(double seconds)
    ADD ESP,0x8                         ; 005abc91
    CMP EBX,0x64                        ; 005abc94
    JGE 0x005abca2                      ; 005abc97
        ;   XREF to: 005abca2 (CONDITIONAL_JUMP)  ; LAB_005abca2
    CMP dword ptr [0x03f69400],0x0      ; 005abc99 | g_AudioThreadRunning
    JZ 0x005abc81                       ; 005abca0
        ;   XREF to: 005abc81 (CONDITIONAL_JUMP)  ; LAB_005abc81
    MOV EAX,[0x03f69400]                ; 005abca2 | g_AudioThreadRunning
        ;   Label: LAB_005abca2
    MOV ESP,EBP                         ; 005abca7
    POP EBP                             ; 005abca9
    POP EBX                             ; 005abcaa
    RET                                 ; 005abcab

