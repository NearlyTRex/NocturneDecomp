; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_processAudio_FUN_005abe20(void)
;
; Local Variables:
; undefined8       Stack[-0x8]:8  local_8
;
; XREF[2]:
;   core_moon.cpp_CMoon_render_FUN_00529ed0 at 00529edc
;   sound_sndmain.cpp_audioThreadProc_FUN_005abba0 at 005abbb8
;
; Referenced Globals:
;   double g_AudioLatencyMultiplier = 3
;   CSoundDevice* g_CSoundDevicePtr
;   double g_AudioLatencySeconds
;   HANDLE g_SoundMutex
;   int g_SoundLockCount
;
; Called Functions:
;   sound_sndmain.cpp_pollAllStreams_FUN_005ace90
;   wincore_winrun.cpp_releaseMutex_FUN_005f4050
;   wincore_winrun.cpp_waitForMutexTimeout_FUN_005f4010
;
; *****************************************************************************

section .text

    CMP dword ptr [0x03f69268],0x0      ; 005abe20 | g_CSoundDevicePtr
        ;   Label: sound_sndmain.cpp_processAudio_FUN_005abe20
    JNZ 0x005abe2a                      ; 005abe27
        ;   XREF to: 005abe2a (CONDITIONAL_JUMP)  ; LAB_005abe2a
    RET                                 ; 005abe29
        ;   Label: LAB_005abe29
    FLD double ptr [0x03f693f8]         ; 005abe2a | g_AudioLatencySeconds
        ;   Label: LAB_005abe2a
    FMUL double ptr [0x00650ecf]        ; 005abe30 | g_AudioLatencyMultiplier
    SUB ESP,0x8                         ; 005abe36
    MOV ECX,dword ptr [0x03f69408]      ; 005abe39 | g_SoundMutex
    FSTP double ptr [ESP]               ; 005abe3f
    PUSH ECX                            ; 005abe42
    CALL wincore_winrun.cpp_waitForMutexTimeout_FUN_005f4010 ; 005abe43
        ;   XREF to: 005f4010 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_waitForMutexTimeout_FUN_005f4010(HANDLE mutex_handle, double timeout_seconds)
    ADD ESP,0xc                         ; 005abe48
    TEST EAX,EAX                        ; 005abe4b
    JZ 0x005abe29                       ; 005abe4d
        ;   XREF to: 005abe29 (CONDITIONAL_JUMP)  ; LAB_005abe29
    PUSH EDI                            ; 005abe4f
    PUSH ESI                            ; 005abe50
    PUSH EBX                            ; 005abe51
    MOV EAX,[0x03f69268]                ; 005abe52 | g_CSoundDevicePtr
    MOV EBX,dword ptr [0x03f6940c]      ; 005abe57 | g_SoundLockCount
    PUSH EAX                            ; 005abe5d
    INC EBX                             ; 005abe5e
    MOV EDX,dword ptr [EAX]             ; 005abe5f
    MOV dword ptr [0x03f6940c],EBX      ; 005abe61 | g_SoundLockCount
    CALL dword ptr [EDX + 0x10]         ; 005abe67
    ADD ESP,0x4                         ; 005abe6a
    PUSH 0x0                            ; 005abe6d
    CALL sound_sndmain.cpp_pollAllStreams_FUN_005ace90 ; 005abe6f
        ;   XREF to: 005ace90 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pollAllStreams_FUN_005ace90(int paused_mode)
    MOV EDI,dword ptr [0x03f6940c]      ; 005abe74 | g_SoundLockCount
    ADD ESP,0x4                         ; 005abe7a
    MOV ESI,dword ptr [0x03f69408]      ; 005abe7d | g_SoundMutex
    DEC EDI                             ; 005abe83
    PUSH ESI                            ; 005abe84
    MOV dword ptr [0x03f6940c],EDI      ; 005abe85 | g_SoundLockCount
    CALL wincore_winrun.cpp_releaseMutex_FUN_005f4050 ; 005abe8b
        ;   XREF to: 005f4050 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_releaseMutex_FUN_005f4050(HANDLE mutex_handle)
    ADD ESP,0x4                         ; 005abe90
    POP EBX                             ; 005abe93
    POP ESI                             ; 005abe94
    POP EDI                             ; 005abe95
    RET                                 ; 005abe96

