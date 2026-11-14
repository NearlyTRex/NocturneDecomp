; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_processAudio_FUN_00575fb0(void)
;
; Local Variables:
; undefined8       Stack[-0x8]:8  local_8
;
; XREF[2]:
;   core_moon.cpp_CMoon_render_FUN_00521e40 at 00521e4b
;   sound_sndmain.cpp_audioThreadProc_FUN_00575bb0 at 00575bc7
;
; Referenced Globals:
;   undefined4 DAT_005f4464
;   undefined4 DAT_02c80650
;   undefined4 DAT_02c807dc
;   undefined4 DAT_02c807e8
;   undefined4 DAT_02c807ec
;
; Called Functions:
;   sound_sndmain.cpp_pollAllStreams_FUN_00577040
;   wincore_winrun.cpp_releaseMutex_FUN_005b37b0
;   wincore_winrun.cpp_waitForMutexTimeout_FUN_005b3770
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02c80650],0x0      ; 00575fb0 | DAT_02c80650
        ;   Label: sound_sndmain.cpp_processAudio_FUN_00575fb0
    JNZ 0x00575fba                      ; 00575fb7
        ;   XREF to: 00575fba (CONDITIONAL_JUMP)  ; LAB_00575fba
    RET                                 ; 00575fb9
        ;   Label: LAB_00575fb9
    FLD float ptr [0x02c807dc]          ; 00575fba | DAT_02c807dc
        ;   Label: LAB_00575fba
    FMUL float ptr [0x005f4464]         ; 00575fc0 | DAT_005f4464
    SUB ESP,0x8                         ; 00575fc6
    MOV ECX,dword ptr [0x02c807e8]      ; 00575fc9 | DAT_02c807e8
    FSTP double ptr [ESP]               ; 00575fcf
    PUSH ECX                            ; 00575fd2
    CALL wincore_winrun.cpp_waitForMutexTimeout_FUN_005b3770 ; 00575fd3
        ;   XREF to: 005b3770 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_waitForMutexTimeout_FUN_005b3770(HANDLE mutex_handle, double timeout_seconds)
    ADD ESP,0xc                         ; 00575fd8
    TEST EAX,EAX                        ; 00575fdb
    JZ 0x00575fb9                       ; 00575fdd
        ;   XREF to: 00575fb9 (CONDITIONAL_JUMP)  ; LAB_00575fb9
    PUSH EDI                            ; 00575fdf
    PUSH ESI                            ; 00575fe0
    PUSH EBX                            ; 00575fe1
    MOV EAX,[0x02c80650]                ; 00575fe2 | DAT_02c80650
    MOV EBX,dword ptr [0x02c807ec]      ; 00575fe7 | DAT_02c807ec
    PUSH EAX                            ; 00575fed
    INC EBX                             ; 00575fee
    MOV EDX,dword ptr [EAX]             ; 00575fef
    MOV dword ptr [0x02c807ec],EBX      ; 00575ff1 | DAT_02c807ec
    CALL dword ptr [EDX + 0x10]         ; 00575ff7
    ADD ESP,0x4                         ; 00575ffa
    PUSH 0x0                            ; 00575ffd
    CALL sound_sndmain.cpp_pollAllStreams_FUN_00577040 ; 00575fff
        ;   XREF to: 00577040 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pollAllStreams_FUN_00577040(int paused_mode)
    MOV EDI,dword ptr [0x02c807ec]      ; 00576004 | DAT_02c807ec
    ADD ESP,0x4                         ; 0057600a
    MOV ESI,dword ptr [0x02c807e8]      ; 0057600d | DAT_02c807e8
    DEC EDI                             ; 00576013
    PUSH ESI                            ; 00576014
    MOV dword ptr [0x02c807ec],EDI      ; 00576015 | DAT_02c807ec
    CALL wincore_winrun.cpp_releaseMutex_FUN_005b37b0 ; 0057601b
        ;   XREF to: 005b37b0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_releaseMutex_FUN_005b37b0(HANDLE mutex_handle)
    ADD ESP,0x4                         ; 00576020
    POP EBX                             ; 00576023
    POP ESI                             ; 00576024
    POP EDI                             ; 00576025
    RET                                 ; 00576026

