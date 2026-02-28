; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_releaseRecordingDevice_FUN_005ab930(void)
;
;
; XREF[3]:
;   sound_sndmain.cpp_initializeRecordingDevice_FUN_005ab8d0 at 005ab8d0
;   sound_sndmain.cpp_readIni_FUN_005abf20 at 005abf95
;   sound_sndmain.cpp_shutdownSoundSystem_FUN_005aaeb0 at 005aaed3
;
; Referenced Globals:
;   CSoundDevice* g_RecordingDeviceInterface
;
; Called Functions:
;   sound_sndmain.cpp_stopRecordingDevice_FUN_005abb60
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_stopRecordingDevice_FUN_005abb60 ; 005ab930
        ;   XREF to: 005abb60 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_stopRecordingDevice_FUN_005abb60()
        ;   Label: sound_sndmain.cpp_releaseRecordingDevice_FUN_005ab930
    TEST EAX,EAX                        ; 005ab935
    JZ 0x005ab948                       ; 005ab937
        ;   XREF to: 005ab948 (CONDITIONAL_JUMP)  ; LAB_005ab948
    MOV EDX,dword ptr [0x03f69c54]      ; 005ab939 | g_RecordingDeviceInterface
    TEST EDX,EDX                        ; 005ab93f
    JNZ 0x005ab949                      ; 005ab941
        ;   XREF to: 005ab949 (CONDITIONAL_JUMP)  ; LAB_005ab949
    MOV EAX,0x1                         ; 005ab943
    RET                                 ; 005ab948
        ;   Label: LAB_005ab948
    MOV EAX,EDX                         ; 005ab949
        ;   Label: LAB_005ab949
    PUSH EAX                            ; 005ab94b
    MOV EDX,dword ptr [EDX]             ; 005ab94c
    CALL dword ptr [EDX]                ; 005ab94e
    ADD ESP,0x4                         ; 005ab950
    TEST EAX,EAX                        ; 005ab953
    JZ 0x005ab948                       ; 005ab955
        ;   XREF to: 005ab948 (CONDITIONAL_JUMP)  ; LAB_005ab948
    XOR ECX,ECX                         ; 005ab957
    MOV EAX,0x1                         ; 005ab959
    MOV dword ptr [0x03f69c54],ECX      ; 005ab95e | g_RecordingDeviceInterface
    RET                                 ; 005ab964

