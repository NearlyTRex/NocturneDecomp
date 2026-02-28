; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_initializeRecordingDevice_FUN_005ab8d0(void)
;
;
; Referenced Globals:
;   int g_CurrentRecordingDevice = -0x1
;   int g_SoundLockCount
;   int g_SoundStartTime
;   CSoundDevice* g_RecordingDeviceInterface
;
; Called Functions:
;   sound_sndmain.cpp_releaseRecordingDevice_FUN_005ab930
;   sound_sndmain.cpp_selectRecordingDevice_FUN_005ab860
;   sound_sndwav.cpp_getWavInDevice_FUN_005b1600
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_releaseRecordingDevice_FUN_005ab930 ; 005ab8d0
        ;   XREF to: 005ab930 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_releaseRecordingDevice_FUN_005ab930()
        ;   Label: sound_sndmain.cpp_initializeRecordingDevice_FUN_005ab8d0
    TEST EAX,EAX                        ; 005ab8d5
    JNZ 0x005ab8da                      ; 005ab8d7
        ;   XREF to: 005ab8da (CONDITIONAL_JUMP)  ; LAB_005ab8da
    RET                                 ; 005ab8d9
    MOV EDX,dword ptr [0x00681b50]      ; 005ab8da | g_CurrentRecordingDevice
        ;   Label: LAB_005ab8da
    PUSH EDX                            ; 005ab8e0
    CALL sound_sndmain.cpp_selectRecordingDevice_FUN_005ab860 ; 005ab8e1
        ;   XREF to: 005ab860 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_selectRecordingDevice_FUN_005ab860(int device_id)
    MOV ECX,dword ptr [0x00681b50]      ; 005ab8e6 | g_CurrentRecordingDevice
    ADD ESP,0x4                         ; 005ab8ec
    TEST ECX,ECX                        ; 005ab8ef
    JL 0x005ab929                       ; 005ab8f1
        ;   XREF to: 005ab929 (CONDITIONAL_JUMP)  ; LAB_005ab929
    MOV EAX,ECX                         ; 005ab8f3
    SHL EAX,0x5                         ; 005ab8f5
    ADD EAX,ECX                         ; 005ab8f8
    SHL EAX,0x3                         ; 005ab8fa
    CMP dword ptr [EAX + 0x3f69514],0x0 ; 005ab8fd | g_SoundLockCount
    JNZ 0x005ab91c                      ; 005ab904
        ;   XREF to: 005ab91c (CONDITIONAL_JUMP)  ; LAB_005ab91c
    PUSH ESI                            ; 005ab906
    MOV ESI,dword ptr [EAX + 0x3f69518] ; 005ab907 | g_SoundStartTime
    PUSH ESI                            ; 005ab90d
    CALL sound_sndwav.cpp_getWavInDevice_FUN_005b1600 ; 005ab90e
        ;   XREF to: 005b1600 (UNCONDITIONAL_CALL)  ; CWavInDevice * sound_sndwav.cpp_getWavInDevice_FUN_005b1600(UINT device_id)
    ADD ESP,0x4                         ; 005ab913
    MOV [0x03f69c54],EAX                ; 005ab916 | g_RecordingDeviceInterface
    POP ESI                             ; 005ab91b
    CMP dword ptr [0x03f69c54],0x0      ; 005ab91c | g_RecordingDeviceInterface
        ;   Label: LAB_005ab91c
    JNZ 0x005ab15c                      ; 005ab923
        ;   XREF to: 005ab15c (CONDITIONAL_JUMP)  ; LAB_005ab15c
    XOR EAX,EAX                         ; 005ab929
        ;   Label: LAB_005ab929
    RET                                 ; 005ab92b

