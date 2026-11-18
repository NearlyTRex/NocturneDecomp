; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_processAudio_FUN_00559120(void)
;
; Local Variables:
; undefined8       Stack[-0x8]:8  local_8
;
; XREF[2]:
;   core_moon.cpp_CMoon_render_FUN_004f9670 at 004f967b
;   sound_sndmain.cpp_audioThreadProc_FUN_00558d20 at 00558d37
;
; Referenced Globals:
;   float g_FLOAT_005d3d5e = 3
;   CSoundDevice* g_CSoundDevicePtr
;   float g_FLOAT_02cf340c
;   HANDLE g_SoundMutex
;   int g_SoundLockCount
;
; Called Functions:
;   sound_sndmain.cpp_pollAllStreams_FUN_0055a1b0
;   wincore_winrun.cpp_releaseMutex_FUN_00581990
;   wincore_winrun.cpp_waitForMutexTimeout_FUN_00581950
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02cf3280],0x0      ; 00559120 | g_CSoundDevicePtr
        ;   Label: sound_sndmain.cpp_processAudio_FUN_00559120
    JNZ 0x0055912a                      ; 00559127
        ;   XREF to: 0055912a (CONDITIONAL_JUMP)  ; LAB_0055912a
    RET                                 ; 00559129
        ;   Label: LAB_00559129
    FLD float ptr [0x02cf340c]          ; 0055912a | g_FLOAT_02cf340c
        ;   Label: LAB_0055912a
    FMUL float ptr [0x005d3d5e]         ; 00559130 | g_FLOAT_005d3d5e
    SUB ESP,0x8                         ; 00559136
    MOV ECX,dword ptr [0x02cf3418]      ; 00559139 | g_SoundMutex
    FSTP double ptr [ESP]               ; 0055913f
    PUSH ECX                            ; 00559142
    CALL wincore_winrun.cpp_waitForMutexTimeout_FUN_00581950 ; 00559143
        ;   XREF to: 00581950 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_waitForMutexTimeout_FUN_00581950(HANDLE mutex_handle, double timeout_seconds)
    ADD ESP,0xc                         ; 00559148
    TEST EAX,EAX                        ; 0055914b
    JZ 0x00559129                       ; 0055914d
        ;   XREF to: 00559129 (CONDITIONAL_JUMP)  ; LAB_00559129
    PUSH EDI                            ; 0055914f
    PUSH ESI                            ; 00559150
    PUSH EBX                            ; 00559151
    MOV EAX,[0x02cf3280]                ; 00559152 | g_CSoundDevicePtr
    MOV EBX,dword ptr [0x02cf341c]      ; 00559157 | g_SoundLockCount
    PUSH EAX                            ; 0055915d
    INC EBX                             ; 0055915e
    MOV EDX,dword ptr [EAX]             ; 0055915f
    MOV dword ptr [0x02cf341c],EBX      ; 00559161 | g_SoundLockCount
    CALL dword ptr [EDX + 0x10]         ; 00559167
    ADD ESP,0x4                         ; 0055916a
    PUSH 0x0                            ; 0055916d
    CALL sound_sndmain.cpp_pollAllStreams_FUN_0055a1b0 ; 0055916f
        ;   XREF to: 0055a1b0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pollAllStreams_FUN_0055a1b0(int paused_mode)
    MOV EDI,dword ptr [0x02cf341c]      ; 00559174 | g_SoundLockCount
    ADD ESP,0x4                         ; 0055917a
    MOV ESI,dword ptr [0x02cf3418]      ; 0055917d | g_SoundMutex
    DEC EDI                             ; 00559183
    PUSH ESI                            ; 00559184
    MOV dword ptr [0x02cf341c],EDI      ; 00559185 | g_SoundLockCount
    CALL wincore_winrun.cpp_releaseMutex_FUN_00581990 ; 0055918b
        ;   XREF to: 00581990 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_releaseMutex_FUN_00581990(HANDLE mutex_handle)
    ADD ESP,0x4                         ; 00559190
    POP EBX                             ; 00559193
    POP ESI                             ; 00559194
    POP EDI                             ; 00559195
    RET                                 ; 00559196

