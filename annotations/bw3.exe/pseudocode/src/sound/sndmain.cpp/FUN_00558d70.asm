; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int sound_sndmain_cpp_FUN_00558d70(float param_1)
;
;
; XREF[2]:
;   sound_snddx.cpp_FUN_0055acd0 at 0055ad59
;   sound_sndwav.cpp_CWavOutDevice_start_FUN_0055d920 at 0055d9bb
;
; Referenced Globals:
;   undefined4 DAT_005d3c92
;   undefined4 DAT_02cf340c
;   undefined4 DAT_02cf3410
;   undefined4 DAT_02cf3414
;
; Called Functions:
;   sound_sndmain.cpp_killSoundThread_FUN_00558e10
;   wincore_winrun.cpp_createThread_FUN_005819b0
;   wincore_winrun.cpp_setThreadPriority_FUN_005819e0
;   wincore_winrun.cpp_sleep_FUN_00581a40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00558d70
        ;   Label: sound_sndmain.cpp_FUN_00558d70
    PUSH ESI                            ; 00558d71
    PUSH EBP                            ; 00558d72
    MOV EBP,ESP                         ; 00558d73
    AND ESP,0xfffffff8                  ; 00558d75
    CALL sound_sndmain.cpp_killSoundThread_FUN_00558e10 ; 00558d78
        ;   XREF to: 00558e10 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSoundThread_FUN_00558e10()
    TEST EAX,EAX                        ; 00558d7d
    JZ 0x00558dc1                       ; 00558d7f
        ;   XREF to: 00558dc1 (CONDITIONAL_JUMP)  ; LAB_00558dc1
    MOV EAX,dword ptr [EBP + 0x10]      ; 00558d81
    FLD float ptr [EBP + 0x10]          ; 00558d84
    MOV [0x02cf340c],EAX                ; 00558d87 | DAT_02cf340c
    FCOMP double ptr [0x005d3c92]       ; 00558d8c | DAT_005d3c92
    FNSTSW AX                           ; 00558d92
    SAHF                                ; 00558d94
    JNC 0x00558da1                      ; 00558d95
        ;   XREF to: 00558da1 (CONDITIONAL_JUMP)  ; LAB_00558da1
    MOV dword ptr [0x02cf340c],0x3b03126f ; 00558d97 | DAT_02cf340c
    XOR ECX,ECX                         ; 00558da1
        ;   Label: LAB_00558da1
    PUSH ECX                            ; 00558da3
    PUSH 0x558d20                       ; 00558da4
    MOV dword ptr [0x02cf3410],ECX      ; 00558da9 | DAT_02cf3410
    MOV dword ptr [0x02cf3414],ECX      ; 00558daf | DAT_02cf3414
    CALL wincore_winrun.cpp_createThread_FUN_005819b0 ; 00558db5
        ;   XREF to: 005819b0 (UNCONDITIONAL_CALL)  ; HANDLE wincore_winrun.cpp_createThread_FUN_005819b0(LPTHREAD_START_ROUTINE thread_func, LPVOID thread_param)
    ADD ESP,0x8                         ; 00558dba
    TEST EAX,EAX                        ; 00558dbd
    JNZ 0x00558dc7                      ; 00558dbf
        ;   XREF to: 00558dc7 (CONDITIONAL_JUMP)  ; LAB_00558dc7
    MOV ESP,EBP                         ; 00558dc1
        ;   Label: LAB_00558dc1
    POP EBP                             ; 00558dc3
    POP ESI                             ; 00558dc4
    POP EBX                             ; 00558dc5
    RET                                 ; 00558dc6
    PUSH 0x3                            ; 00558dc7
        ;   Label: LAB_00558dc7
    PUSH EAX                            ; 00558dc9
    CALL wincore_winrun.cpp_setThreadPriority_FUN_005819e0 ; 00558dca
        ;   XREF to: 005819e0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_setThreadPriority_FUN_005819e0(HANDLE hThread, int priority_level)
    ADD ESP,0x8                         ; 00558dcf
    TEST EAX,EAX                        ; 00558dd2
    JZ 0x00558dc1                       ; 00558dd4
        ;   XREF to: 00558dc1 (CONDITIONAL_JUMP)  ; LAB_00558dc1
    MOV ESI,dword ptr [0x02cf3410]      ; 00558dd6 | DAT_02cf3410
    XOR EBX,EBX                         ; 00558ddc
    TEST ESI,ESI                        ; 00558dde
    JNZ 0x00558e03                      ; 00558de0
        ;   XREF to: 00558e03 (CONDITIONAL_JUMP)  ; LAB_00558e03
    PUSH 0x3f847ae1                     ; 00558de2
        ;   Label: LAB_00558de2
    PUSH 0x47ae147b                     ; 00558de7
    INC EBX                             ; 00558dec
    CALL wincore_winrun.cpp_sleep_FUN_00581a40 ; 00558ded
        ;   XREF to: 00581a40 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_sleep_FUN_00581a40(double seconds)
    ADD ESP,0x8                         ; 00558df2
    CMP EBX,0x64                        ; 00558df5
    JGE 0x00558e03                      ; 00558df8
        ;   XREF to: 00558e03 (CONDITIONAL_JUMP)  ; LAB_00558e03
    CMP dword ptr [0x02cf3410],0x0      ; 00558dfa | DAT_02cf3410
    JZ 0x00558de2                       ; 00558e01
        ;   XREF to: 00558de2 (CONDITIONAL_JUMP)  ; LAB_00558de2
    MOV EAX,[0x02cf3410]                ; 00558e03 | DAT_02cf3410
        ;   Label: LAB_00558e03
    MOV ESP,EBP                         ; 00558e08
    POP EBP                             ; 00558e0a
    POP ESI                             ; 00558e0b
    POP EBX                             ; 00558e0c
    RET                                 ; 00558e0d

