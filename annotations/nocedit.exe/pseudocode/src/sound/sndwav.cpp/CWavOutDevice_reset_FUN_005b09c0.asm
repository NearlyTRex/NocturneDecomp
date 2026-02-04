; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl sound_sndwav_cpp_CWavOutDevice_reset_FUN_005b09c0(CWavOutDevice *this_ptr)
;
; Parameters:
; CWavOutDevice *  Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   WAVE_OUT_RESET_FUNC* g_waveOutResetFunc = 0021196a
;   WAVE_OUT_UNPREPARE_HEADER_FUNC* g_waveOutUnprepareHeaderFunc = 0021197a
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
    MOV EDX,dword ptr [0x03f6ad34]      ; 005b09c3 | g_WaveOutHandle
    MOV ESI,0x1                         ; 005b09c9
    TEST EDX,EDX                        ; 005b09ce
    JNZ 0x005b0a05                      ; 005b09d0
        ;   XREF to: 005b0a05 (CONDITIONAL_JUMP)  ; LAB_005b0a05
    XOR EBX,EBX                         ; 005b09d2
        ;   Label: LAB_005b09d2
    MOV EDI,dword ptr [EBX + 0x3f6ad58] ; 005b09d4 | g_WaveOutHeaders | DAT_03f6ad5c
        ;   Label: LAB_005b09d4
    TEST EDI,EDI                        ; 005b09da
    JZ 0x005b09ee                       ; 005b09dc
        ;   XREF to: 005b09ee (CONDITIONAL_JUMP)  ; LAB_005b09ee
    PUSH 0x20                           ; 005b09de
    PUSH EDI                            ; 005b09e0
    MOV EAX,[0x03f6ad34]                ; 005b09e1 | g_WaveOutHandle
    PUSH EAX                            ; 005b09e6
    CALL dword ptr CS:[0x611454]        ; 005b09e7 | g_waveOutUnprepareHeaderFunc
    ADD EBX,0x4                         ; 005b09ee
        ;   Label: LAB_005b09ee
    CMP EBX,0x20                        ; 005b09f1
    JNZ 0x005b09d4                      ; 005b09f4
        ;   XREF to: 005b09d4 (CONDITIONAL_JUMP)  ; LAB_005b09d4
    CALL sound_sndmain.cpp_killSoundThread_FUN_005abcb0 ; 005b09f6
        ;   XREF to: 005abcb0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSoundThread_FUN_005abcb0()
    TEST EAX,EAX                        ; 005b09fb
    JZ 0x005b0a22                       ; 005b09fd
        ;   XREF to: 005b0a22 (CONDITIONAL_JUMP)  ; LAB_005b0a22
    MOV EAX,ESI                         ; 005b09ff
    POP EDI                             ; 005b0a01
    POP ESI                             ; 005b0a02
    POP EBX                             ; 005b0a03
    RET                                 ; 005b0a04
    PUSH EDX                            ; 005b0a05
        ;   Label: LAB_005b0a05
    CALL dword ptr CS:[0x611450]        ; 005b0a06 | g_waveOutResetFunc
    TEST EAX,EAX                        ; 005b0a0d
    JZ 0x005b09d2                       ; 005b0a0f
        ;   XREF to: 005b09d2 (CONDITIONAL_JUMP)  ; LAB_005b09d2
    PUSH 0x65238f                       ; 005b0a11 | = "waveOutReset failed!"
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005b0a16
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    XOR ESI,ESI                         ; 005b0a1b
    ADD ESP,0x4                         ; 005b0a1d
    JMP 0x005b09d2                      ; 005b0a20
        ;   XREF to: 005b09d2 (UNCONDITIONAL_JUMP)  ; LAB_005b09d2
    XOR ESI,ESI                         ; 005b0a22
        ;   Label: LAB_005b0a22
    MOV EAX,ESI                         ; 005b0a24
    POP EDI                             ; 005b0a26
    POP ESI                             ; 005b0a27
    POP EBX                             ; 005b0a28
    RET                                 ; 005b0a29

