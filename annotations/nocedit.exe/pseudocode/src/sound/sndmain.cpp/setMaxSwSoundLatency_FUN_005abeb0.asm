; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl sound_sndmain_cpp_setMaxSwSoundLatency_FUN_005abeb0(float latency)
;
; Parameters:
; float            Stack[0x4]:4   latency
;
; XREF[1]:
;   sound_sndmain.cpp_readIni_FUN_005abf20 at 005ac07b
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_00650ed7
;   TerminatedCString s_setMaxSwSoundLatency_can_00650eec
;   double g_MinLatencyThreshold = 0.0500000000000000
;   double g_MaxLatencyThreshold = 2
;   float g_MaxSoftwareLatency = 0.5
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   sound_sndmain.cpp_isSoundBusy_FUN_005ab540
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_isSoundBusy_FUN_005ab540 ; 005abeb0
        ;   XREF to: 005ab540 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSoundBusy_FUN_005ab540()
        ;   Label: sound_sndmain.cpp_setMaxSwSoundLatency_FUN_005abeb0
    TEST EAX,EAX                        ; 005abeb5
    JNZ 0x005abee9                      ; 005abeb7
        ;   XREF to: 005abee9 (CONDITIONAL_JUMP)  ; LAB_005abee9
    FLD float ptr [ESP + 0x4]           ; 005abeb9
        ;   Label: LAB_005abeb9
    FCOMP double ptr [0x00650f27]       ; 005abebd | g_MinLatencyThreshold
    FNSTSW AX                           ; 005abec3
    SAHF                                ; 005abec5
    JNC 0x005abed0                      ; 005abec6
        ;   XREF to: 005abed0 (CONDITIONAL_JUMP)  ; LAB_005abed0
    MOV dword ptr [ESP + 0x4],0x3d4ccccd ; 005abec8
    FLD float ptr [ESP + 0x4]           ; 005abed0
        ;   Label: LAB_005abed0
    FCOMP double ptr [0x00650f2f]       ; 005abed4 | g_MaxLatencyThreshold
    FNSTSW AX                           ; 005abeda
    SAHF                                ; 005abedc
    JA 0x005abf0e                       ; 005abedd
        ;   XREF to: 005abf0e (CONDITIONAL_JUMP)  ; LAB_005abf0e
    MOV EAX,dword ptr [ESP + 0x4]       ; 005abedf
    MOV [0x00681b48],EAX                ; 005abee3 | g_MaxSoftwareLatency
    RET                                 ; 005abee8
    MOV EDX,0x650ed7                    ; 005abee9 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005abee9
    MOV ECX,0x15a2                      ; 005abeee
    PUSH 0x650eec                       ; 005abef3 | = "setMaxSwSoundLatency - can't do this ..."
    MOV dword ptr [0x02f0ca48],EDX      ; 005abef8 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 005abefe | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005abf04
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005abf09
    JMP 0x005abeb9                      ; 005abf0c
        ;   XREF to: 005abeb9 (UNCONDITIONAL_JUMP)  ; LAB_005abeb9
    MOV dword ptr [ESP + 0x4],0x40000000 ; 005abf0e
        ;   Label: LAB_005abf0e
    MOV EAX,dword ptr [ESP + 0x4]       ; 005abf16
    MOV [0x00681b48],EAX                ; 005abf1a | g_MaxSoftwareLatency
    RET                                 ; 005abf1f

