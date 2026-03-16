; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; DWORD __stdcall sound_sndmain_cpp_audioThreadProc_FUN_005abba0(LPVOID lpThreadParam)
;
; Parameters:
; LPVOID           Stack[0x4]:4   lpThreadParam
;
; XREF[1]:
;   sound_sndmain.cpp_startSoundThread_FUN_005abc00 at 005abc47
;
; Referenced Globals:
;   double g_AudioLatencySeconds
;   int g_AudioThreadRunning
;   int g_AudioThreadShutdownFlag
;
; Called Functions:
;   sound_sndmain.cpp_processAudio_FUN_005abe20
;   wincore_winrun.cpp_sleep_FUN_005f40e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005abba0
        ;   Label: sound_sndmain.cpp_audioThreadProc_FUN_005abba0
    PUSH ESI                            ; 005abba1
    PUSH EDI                            ; 005abba2
    MOV EDX,0x1                         ; 005abba3
    MOV ECX,dword ptr [0x03f69404]      ; 005abba8 | g_AudioThreadShutdownFlag
    MOV dword ptr [0x03f69400],EDX      ; 005abbae | g_AudioThreadRunning
    TEST ECX,ECX                        ; 005abbb4
    JNZ 0x005abbc6                      ; 005abbb6
        ;   XREF to: 005abbc6 (CONDITIONAL_JUMP)  ; LAB_005abbc6
        ;   Label: LAB_005abbb6
    CALL sound_sndmain.cpp_processAudio_FUN_005abe20 ; 005abbb8
        ;   XREF to: 005abe20 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_processAudio_FUN_005abe20()
    CMP dword ptr [0x03f69404],0x0      ; 005abbbd | g_AudioThreadShutdownFlag
    JZ 0x005abbd1                       ; 005abbc4
        ;   XREF to: 005abbd1 (CONDITIONAL_JUMP)  ; LAB_005abbd1
    XOR EAX,EAX                         ; 005abbc6
        ;   Label: LAB_005abbc6
    MOV [0x03f69400],EAX                ; 005abbc8 | g_AudioThreadRunning
    POP EDI                             ; 005abbcd
    POP ESI                             ; 005abbce
    POP EBX                             ; 005abbcf
    RET                                 ; 005abbd0
    SUB ESP,0x8                         ; 005abbd1
        ;   Label: LAB_005abbd1
    FLD double ptr [0x03f693f8]         ; 005abbd4 | g_AudioLatencySeconds
    FSTP double ptr [ESP]               ; 005abbda
    NOP                                 ; 005abbdd
    NOP                                 ; 005abbde
    CALL wincore_winrun.cpp_sleep_FUN_005f40e0 ; 005abbdf
        ;   XREF to: 005f40e0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_sleep_FUN_005f40e0(double seconds)
    MOV EDI,dword ptr [0x03f69404]      ; 005abbe4 | g_AudioThreadShutdownFlag
    ADD ESP,0x8                         ; 005abbea
    TEST EDI,EDI                        ; 005abbed
    JMP 0x005abbb6                      ; 005abbef
        ;   XREF to: 005abbb6 (UNCONDITIONAL_JUMP)  ; LAB_005abbb6

