; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int sound_sndwav.cpp_CWavOutDevice_reset_FUN_005b09c0(CWavOutDevice * this_ptr)
;
; Parameters:
; CWavOutDevice *  Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   waveOutReset* waveOutReset = 0021196a
;   waveOutUnprepareHeader* waveOutUnprepareHeader = 0021197a
;   TerminatedCString s_waveOutReset_failed_0065238f
;   HWAVEOUT g_WaveOutHandle
;   LPWAVEHDR[8] g_WaveOutHeaders
;   undefined4 DAT_03f6ad5c
;
; Called Functions:
;   sound_sndmain.cpp_killSoundThread_FUN_005abcb0
;   sound_sndmain.cpp_logSoundError_FUN_005adba0
;   waveOutReset
;   waveOutUnprepareHeader
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b09c0
        ;   Label: sound_sndwav.cpp_CWavOutDevice_reset_FUN_005b09c0
    PUSH ESI                            ; 005b09c1
    PUSH EDI                            ; 005b09c2
    MOV EDX,dword ptr [0x03f6ad34]      ; 005b09c3 | HWAVEOUT g_WaveOutHandle
    MOV ESI,0x1                         ; 005b09c9
    TEST EDX,EDX                        ; 005b09ce
    JNZ 0x005b0a05                      ; 005b09d0 | LAB_005b0a05
        ;   XREF to: 005b0a05 (CONDITIONAL_JUMP)
    XOR EBX,EBX                         ; 005b09d2
        ;   Label: LAB_005b09d2
    MOV EDI,dword ptr [EBX + 0x3f6ad58] ; 005b09d4 | LPWAVEHDR[8] g_WaveOutHeaders
        ;   Label: LAB_005b09d4
    TEST EDI,EDI                        ; 005b09da
    JZ 0x005b09ee                       ; 005b09dc | LAB_005b09ee
        ;   XREF to: 005b09ee (CONDITIONAL_JUMP)
    PUSH 0x20                           ; 005b09de
    PUSH EDI                            ; 005b09e0
    MOV EAX,[0x03f6ad34]                ; 005b09e1 | HWAVEOUT g_WaveOutHandle
    PUSH EAX                            ; 005b09e6
    CALL dword ptr CS:[0x611454]        ; 005b09e7 | waveOutUnprepareHeader * waveOutUnprepareHeader
    ADD EBX,0x4                         ; 005b09ee
        ;   Label: LAB_005b09ee
    CMP EBX,0x20                        ; 005b09f1
    JNZ 0x005b09d4                      ; 005b09f4 | LAB_005b09d4
        ;   XREF to: 005b09d4 (CONDITIONAL_JUMP)
    CALL sound_sndmain.cpp_killSoundThread_FUN_005abcb0 ; 005b09f6 | int sound_sndmain.cpp_killSoundThread_FUN_005abcb0()
        ;   XREF to: 005abcb0 (UNCONDITIONAL_CALL)
    TEST EAX,EAX                        ; 005b09fb
    JZ 0x005b0a22                       ; 005b09fd | LAB_005b0a22
        ;   XREF to: 005b0a22 (CONDITIONAL_JUMP)
    MOV EAX,ESI                         ; 005b09ff
    POP EDI                             ; 005b0a01
    POP ESI                             ; 005b0a02
    POP EBX                             ; 005b0a03
    RET                                 ; 005b0a04
    PUSH EDX                            ; 005b0a05
        ;   Label: LAB_005b0a05
    CALL dword ptr CS:[0x611450]        ; 005b0a06 | waveOutReset * waveOutReset
    TEST EAX,EAX                        ; 005b0a0d
    JZ 0x005b09d2                       ; 005b0a0f | LAB_005b09d2
        ;   XREF to: 005b09d2 (CONDITIONAL_JUMP)
    PUSH 0x65238f                       ; 005b0a11 | = "waveOutReset failed!" | s_waveOutReset_failed_0065238f = waveOutReset failed!
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005b0a16 | void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)
    XOR ESI,ESI                         ; 005b0a1b
    ADD ESP,0x4                         ; 005b0a1d
    JMP 0x005b09d2                      ; 005b0a20 | LAB_005b09d2
        ;   XREF to: 005b09d2 (UNCONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 005b0a22
        ;   Label: LAB_005b0a22
    MOV EAX,ESI                         ; 005b0a24
    POP EDI                             ; 005b0a26
    POP ESI                             ; 005b0a27
    POP EBX                             ; 005b0a28
    RET                                 ; 005b0a29

