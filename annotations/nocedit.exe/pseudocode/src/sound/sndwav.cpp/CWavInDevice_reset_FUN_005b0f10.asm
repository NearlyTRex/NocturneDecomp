; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndwav_cpp_CWavInDevice_reset_FUN_005b0f10(CWavInDevice *this_ptr)
;
; Parameters:
; CWavInDevice *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   WAVE_IN_RESET_FUNC* g_waveInResetFunc = 002118ea
;   WAVE_IN_UNPREPARE_HEADER_FUNC* g_waveInUnprepareHeaderFunc = 00211906
;   TerminatedCString s_waveInReset_failed_00652462
;   HWAVEIN g_WaveInHandle
;   LPWAVEHDR[20] g_WaveInHeaders
;   undefined4 DAT_03f6ae24
;
; Called Functions:
;   sound_sndmain.cpp_logSoundError_FUN_005adba0
;   waveInReset
;   waveInUnprepareHeader
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b0f10
        ;   Label: sound_sndwav.cpp_CWavInDevice_reset_FUN_005b0f10
    PUSH ESI                            ; 005b0f11
    PUSH EDI                            ; 005b0f12
    MOV EDX,dword ptr [0x03f6adcc]      ; 005b0f13 | g_WaveInHandle
    MOV ESI,0x1                         ; 005b0f19
    TEST EDX,EDX                        ; 005b0f1e
    JNZ 0x005b0f4c                      ; 005b0f20
        ;   XREF to: 005b0f4c (CONDITIONAL_JUMP)  ; LAB_005b0f4c
    XOR EBX,EBX                         ; 005b0f22
        ;   Label: LAB_005b0f22
    MOV EDI,dword ptr [EBX + 0x3f6ae20] ; 005b0f24 | g_WaveInHeaders | DAT_03f6ae24
        ;   Label: LAB_005b0f24
    TEST EDI,EDI                        ; 005b0f2a
    JZ 0x005b0f3e                       ; 005b0f2c
        ;   XREF to: 005b0f3e (CONDITIONAL_JUMP)  ; LAB_005b0f3e
    PUSH 0x20                           ; 005b0f2e
    PUSH EDI                            ; 005b0f30
    MOV EAX,[0x03f6adcc]                ; 005b0f31 | g_WaveInHandle
    PUSH EAX                            ; 005b0f36
    CALL dword ptr CS:[0x61143c]        ; 005b0f37 | g_waveInUnprepareHeaderFunc
    ADD EBX,0x4                         ; 005b0f3e
        ;   Label: LAB_005b0f3e
    CMP EBX,0x50                        ; 005b0f41
    JNZ 0x005b0f24                      ; 005b0f44
        ;   XREF to: 005b0f24 (CONDITIONAL_JUMP)  ; LAB_005b0f24
    MOV EAX,ESI                         ; 005b0f46
    POP EDI                             ; 005b0f48
    POP ESI                             ; 005b0f49
    POP EBX                             ; 005b0f4a
    RET                                 ; 005b0f4b
    PUSH EDX                            ; 005b0f4c
        ;   Label: LAB_005b0f4c
    CALL dword ptr CS:[0x611434]        ; 005b0f4d | g_waveInResetFunc
    TEST EAX,EAX                        ; 005b0f54
    JZ 0x005b0f22                       ; 005b0f56
        ;   XREF to: 005b0f22 (CONDITIONAL_JUMP)  ; LAB_005b0f22
    PUSH 0x652462                       ; 005b0f58 | = "waveInReset failed!"
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005b0f5d
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    XOR ESI,ESI                         ; 005b0f62
    ADD ESP,0x4                         ; 005b0f64
    JMP 0x005b0f22                      ; 005b0f67
        ;   XREF to: 005b0f22 (UNCONDITIONAL_JUMP)  ; LAB_005b0f22

