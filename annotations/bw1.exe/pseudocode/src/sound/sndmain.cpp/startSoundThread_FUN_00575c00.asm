; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_startSoundThread_FUN_00575c00(double latency_seconds)
;
; Parameters:
; double           Stack[0x4]:8   latency_seconds
;
; XREF[2]:
;   sound_snddx.cpp_FUN_00577b60 at 00577be9
;   sound_sndwav.cpp_CWavOutDevice_start_FUN_0057a7f0 at 0057a88b
;
; Referenced Globals:
;   undefined4 DAT_005f4398
;   undefined4 DAT_02c807dc
;   undefined4 DAT_02c807e0
;   undefined4 DAT_02c807e4
;
; Called Functions:
;   sound_sndmain.cpp_killSoundThread_FUN_00575ca0
;   wincore_winrun.cpp_createThread_FUN_005b37d0
;   wincore_winrun.cpp_setThreadPriority_FUN_005b3800
;   wincore_winrun.cpp_sleep_FUN_005b3860
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00575c00
        ;   Label: sound_sndmain.cpp_startSoundThread_FUN_00575c00
    PUSH ESI                            ; 00575c01
    PUSH EBP                            ; 00575c02
    MOV EBP,ESP                         ; 00575c03
    AND ESP,0xfffffff8                  ; 00575c05
    CALL sound_sndmain.cpp_killSoundThread_FUN_00575ca0 ; 00575c08
        ;   XREF to: 00575ca0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSoundThread_FUN_00575ca0()
    TEST EAX,EAX                        ; 00575c0d
    JZ 0x00575c51                       ; 00575c0f
        ;   XREF to: 00575c51 (CONDITIONAL_JUMP)  ; LAB_00575c51
    MOV EAX,dword ptr [EBP + 0x10]      ; 00575c11
    FLD float ptr [EBP + 0x10]          ; 00575c14
    MOV [0x02c807dc],EAX                ; 00575c17 | DAT_02c807dc
    FCOMP double ptr [0x005f4398]       ; 00575c1c | DAT_005f4398
    FNSTSW AX                           ; 00575c22
    SAHF                                ; 00575c24
    JNC 0x00575c31                      ; 00575c25
        ;   XREF to: 00575c31 (CONDITIONAL_JUMP)  ; LAB_00575c31
    MOV dword ptr [0x02c807dc],0x3b03126f ; 00575c27 | DAT_02c807dc
    XOR ECX,ECX                         ; 00575c31
        ;   Label: LAB_00575c31
    PUSH ECX                            ; 00575c33
    PUSH 0x575bb0                       ; 00575c34
    MOV dword ptr [0x02c807e0],ECX      ; 00575c39 | DAT_02c807e0
    MOV dword ptr [0x02c807e4],ECX      ; 00575c3f | DAT_02c807e4
    CALL wincore_winrun.cpp_createThread_FUN_005b37d0 ; 00575c45
        ;   XREF to: 005b37d0 (UNCONDITIONAL_CALL)  ; HANDLE wincore_winrun.cpp_createThread_FUN_005b37d0(LPTHREAD_START_ROUTINE thread_func, LPVOID thread_param)
    ADD ESP,0x8                         ; 00575c4a
    TEST EAX,EAX                        ; 00575c4d
    JNZ 0x00575c57                      ; 00575c4f
        ;   XREF to: 00575c57 (CONDITIONAL_JUMP)  ; LAB_00575c57
    MOV ESP,EBP                         ; 00575c51
        ;   Label: LAB_00575c51
    POP EBP                             ; 00575c53
    POP ESI                             ; 00575c54
    POP EBX                             ; 00575c55
    RET                                 ; 00575c56
    PUSH 0x3                            ; 00575c57
        ;   Label: LAB_00575c57
    PUSH EAX                            ; 00575c59
    CALL wincore_winrun.cpp_setThreadPriority_FUN_005b3800 ; 00575c5a
        ;   XREF to: 005b3800 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_setThreadPriority_FUN_005b3800(HANDLE hThread, int priority_level)
    ADD ESP,0x8                         ; 00575c5f
    TEST EAX,EAX                        ; 00575c62
    JZ 0x00575c51                       ; 00575c64
        ;   XREF to: 00575c51 (CONDITIONAL_JUMP)  ; LAB_00575c51
    MOV ESI,dword ptr [0x02c807e0]      ; 00575c66 | DAT_02c807e0
    XOR EBX,EBX                         ; 00575c6c
    TEST ESI,ESI                        ; 00575c6e
    JNZ 0x00575c93                      ; 00575c70
        ;   XREF to: 00575c93 (CONDITIONAL_JUMP)  ; LAB_00575c93
    PUSH 0x3f847ae1                     ; 00575c72
        ;   Label: LAB_00575c72
    PUSH 0x47ae147b                     ; 00575c77
    INC EBX                             ; 00575c7c
    CALL wincore_winrun.cpp_sleep_FUN_005b3860 ; 00575c7d
        ;   XREF to: 005b3860 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_sleep_FUN_005b3860(double seconds)
    ADD ESP,0x8                         ; 00575c82
    CMP EBX,0x64                        ; 00575c85
    JGE 0x00575c93                      ; 00575c88
        ;   XREF to: 00575c93 (CONDITIONAL_JUMP)  ; LAB_00575c93
    CMP dword ptr [0x02c807e0],0x0      ; 00575c8a | DAT_02c807e0
    JZ 0x00575c72                       ; 00575c91
        ;   XREF to: 00575c72 (CONDITIONAL_JUMP)  ; LAB_00575c72
    MOV EAX,[0x02c807e0]                ; 00575c93 | DAT_02c807e0
        ;   Label: LAB_00575c93
    MOV ESP,EBP                         ; 00575c98
    POP EBP                             ; 00575c9a
    POP ESI                             ; 00575c9b
    POP EBX                             ; 00575c9c
    RET                                 ; 00575c9d

