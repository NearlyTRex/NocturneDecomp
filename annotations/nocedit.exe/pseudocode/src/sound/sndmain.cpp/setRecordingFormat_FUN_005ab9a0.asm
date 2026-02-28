; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_setRecordingFormat_FUN_005ab9a0(int bits_per_sample,int channels,int sample_rate,int signed_samples)
;
; Parameters:
; int              Stack[0x4]:4   bits_per_sample
; int              Stack[0x8]:4   channels
; int              Stack[0xc]:4   sample_rate
; int              Stack[0x10]:4   signed_samples
;
; XREF[1]:
;   sound_sndmain.cpp_startRecording_FUN_005aba90 at 005abad0
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_00650daa
;   TerminatedCString s_setRecordingFormat_can_t_00650dbf
;   int g_RecordingBitsPerSample = 0x8
;   int g_RecordingChannelCount = 0x1
;   int g_RecordingSampleRate = 0x2b11
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   CSoundDevice* g_RecordingDeviceInterface
;   int g_RecordingSamplesSigned
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   sound_sndmain.cpp_isRecordingStarted_FUN_005ab980
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ab9a0
        ;   Label: sound_sndmain.cpp_setRecordingFormat_FUN_005ab9a0
    PUSH ESI                            ; 005ab9a1
    PUSH EDI                            ; 005ab9a2
    PUSH EBP                            ; 005ab9a3
    CALL sound_sndmain.cpp_isRecordingStarted_FUN_005ab980 ; 005ab9a4
        ;   XREF to: 005ab980 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isRecordingStarted_FUN_005ab980()
    TEST EAX,EAX                        ; 005ab9a9
    JNZ 0x005ab9ef                      ; 005ab9ab
        ;   XREF to: 005ab9ef (CONDITIONAL_JUMP)  ; LAB_005ab9ef
    MOV EAX,dword ptr [ESP + 0x14]      ; 005ab9ad
        ;   Label: LAB_005ab9ad
    MOV [0x00681b54],EAX                ; 005ab9b1 | g_RecordingBitsPerSample
    MOV EAX,dword ptr [ESP + 0x18]      ; 005ab9b6
    MOV [0x00681b58],EAX                ; 005ab9ba | g_RecordingChannelCount
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005ab9bf
    MOV EBX,dword ptr [ESP + 0x20]      ; 005ab9c3
    MOV [0x00681b5c],EAX                ; 005ab9c7 | g_RecordingSampleRate
    TEST EBX,EBX                        ; 005ab9cc
    SETNZ AL                            ; 005ab9ce
    AND EAX,0xff                        ; 005ab9d1
    MOV ESI,dword ptr [0x03f69c54]      ; 005ab9d6 | g_RecordingDeviceInterface
    MOV [0x03f69c5c],EAX                ; 005ab9dc | g_RecordingSamplesSigned
    TEST ESI,ESI                        ; 005ab9e1
    JNZ 0x005aba14                      ; 005ab9e3
        ;   XREF to: 005aba14 (CONDITIONAL_JUMP)  ; LAB_005aba14
    MOV EAX,0x1                         ; 005ab9e5
        ;   Label: LAB_005ab9e5
    POP EBP                             ; 005ab9ea
    POP EDI                             ; 005ab9eb
    POP ESI                             ; 005ab9ec
    POP EBX                             ; 005ab9ed
    RET                                 ; 005ab9ee
    MOV EDX,0x650daa                    ; 005ab9ef | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005ab9ef
    MOV ECX,0x14ad                      ; 005ab9f4
    PUSH 0x650dbf                       ; 005ab9f9 | = "setRecordingFormat - can't do this wh..."
    MOV dword ptr [0x02f0ca48],EDX      ; 005ab9fe | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 005aba04 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005aba0a
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005aba0f
    JMP 0x005ab9ad                      ; 005aba12
        ;   XREF to: 005ab9ad (UNCONDITIONAL_JUMP)  ; LAB_005ab9ad
    PUSH EAX                            ; 005aba14
        ;   Label: LAB_005aba14
    MOV EDI,dword ptr [0x00681b5c]      ; 005aba15 | g_RecordingSampleRate
    PUSH EDI                            ; 005aba1b
    MOV EBP,dword ptr [0x00681b58]      ; 005aba1c | g_RecordingChannelCount
    PUSH EBP                            ; 005aba22
    MOV EAX,[0x00681b54]                ; 005aba23 | g_RecordingBitsPerSample
    PUSH EAX                            ; 005aba28
    MOV ECX,dword ptr [ESI]             ; 005aba29
    PUSH ESI                            ; 005aba2b
    CALL dword ptr [ECX + 0xc]          ; 005aba2c
    ADD ESP,0x14                        ; 005aba2f
    TEST EAX,EAX                        ; 005aba32
    JNZ 0x005ab9e5                      ; 005aba34
        ;   XREF to: 005ab9e5 (CONDITIONAL_JUMP)  ; LAB_005ab9e5
    POP EBP                             ; 005aba36
    POP EDI                             ; 005aba37
    POP ESI                             ; 005aba38
    POP EBX                             ; 005aba39
    RET                                 ; 005aba3a

