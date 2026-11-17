; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_initializeRecordingDevice_FUN_005758e0(void)
;
;
; Referenced Globals:
;   int g_CurrentRecordingDevice = -0x1
;   CSoundDevice* g_RecordingDeviceInterface
;
; Called Functions:
;   sound_sndmain.cpp_releaseRecordingDevice_FUN_00575940
;   sound_sndmain.cpp_selectRecordingDevice_FUN_00575870
;   sound_sndwav.cpp_getWavInDevice_FUN_0057b500
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_releaseRecordingDevice_FUN_00575940 ; 005758e0
        ;   XREF to: 00575940 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_releaseRecordingDevice_FUN_00575940()
        ;   Label: sound_sndmain.cpp_initializeRecordingDevice_FUN_005758e0
    TEST EAX,EAX                        ; 005758e5
    JNZ 0x005758ea                      ; 005758e7
        ;   XREF to: 005758ea (CONDITIONAL_JUMP)  ; LAB_005758ea
    RET                                 ; 005758e9
    MOV EDX,dword ptr [0x0062331c]      ; 005758ea | g_CurrentRecordingDevice
        ;   Label: LAB_005758ea
    PUSH EDX                            ; 005758f0
    CALL sound_sndmain.cpp_selectRecordingDevice_FUN_00575870 ; 005758f1
        ;   XREF to: 00575870 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_selectRecordingDevice_FUN_00575870(int device_id)
    MOV ECX,dword ptr [0x0062331c]      ; 005758f6 | g_CurrentRecordingDevice
    ADD ESP,0x4                         ; 005758fc
    TEST ECX,ECX                        ; 005758ff
    JL 0x00575939                       ; 00575901
        ;   XREF to: 00575939 (CONDITIONAL_JUMP)  ; LAB_00575939
    MOV EAX,ECX                         ; 00575903
    SHL EAX,0x5                         ; 00575905
    ADD EAX,ECX                         ; 00575908
    SHL EAX,0x3                         ; 0057590a
    CMP dword ptr [EAX + 0x2c808f8],0x0 ; 0057590d
    JNZ 0x0057592c                      ; 00575914
        ;   XREF to: 0057592c (CONDITIONAL_JUMP)  ; LAB_0057592c
    PUSH ESI                            ; 00575916
    MOV ESI,dword ptr [EAX + 0x2c808fc] ; 00575917
    PUSH ESI                            ; 0057591d
    CALL sound_sndwav.cpp_getWavInDevice_FUN_0057b500 ; 0057591e
        ;   XREF to: 0057b500 (UNCONDITIONAL_CALL)  ; CWavInDevice * sound_sndwav.cpp_getWavInDevice_FUN_0057b500(UINT device_id)
    ADD ESP,0x4                         ; 00575923
    MOV [0x02c81038],EAX                ; 00575926 | g_RecordingDeviceInterface
    POP ESI                             ; 0057592b
    CMP dword ptr [0x02c81038],0x0      ; 0057592c | g_RecordingDeviceInterface
        ;   Label: LAB_0057592c
    JNZ 0x0057510c                      ; 00575933
        ;   XREF to: 0057510c (CONDITIONAL_JUMP)  ; LAB_0057510c
    XOR EAX,EAX                         ; 00575939
        ;   Label: LAB_00575939
    RET                                 ; 0057593b

