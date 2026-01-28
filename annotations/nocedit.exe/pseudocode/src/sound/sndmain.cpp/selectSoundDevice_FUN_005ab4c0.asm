; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl sound_sndmain_cpp_selectSoundDevice_FUN_005ab4c0(int device_id)
;
; Parameters:
; int              Stack[0x4]:4   device_id
;
; XREF[4]:
;   core_menu.cpp_configureSoundOptions_FUN_00511e50 at 00512cab
;   sound_sndmain.cpp_initializeSoundDevice_FUN_005ab5b0 at 005ab5c3
;   sound_sndmain.cpp_readIni_FUN_005abf20 at 005abffc
;   sound_sndmain.cpp_resetSoundSystemDefaults_FUN_005aae00 at 005aae94
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_00650c9b
;   TerminatedCString s_selectSoundDevice_device_00650cb0
;   int g_CurrentSoundDevice = -0x1
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   sound_sndmain.cpp_findBestSoundDevice_FUN_005ab3d0
;   sound_sndmain.cpp_getSoundDeviceCount_FUN_005ab2e0
;   sound_sndmain.cpp_isSoundSystemActive_FUN_005ab530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ab4c0
        ;   Label: sound_sndmain.cpp_selectSoundDevice_FUN_005ab4c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005ab4c1
    CALL sound_sndmain.cpp_isSoundSystemActive_FUN_005ab530 ; 005ab4c5
        ;   XREF to: 005ab530 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_isSoundSystemActive_FUN_005ab530()
    TEST EAX,EAX                        ; 005ab4ca
    JNZ 0x005ab4f0                      ; 005ab4cc
        ;   XREF to: 005ab4f0 (CONDITIONAL_JUMP)  ; LAB_005ab4f0
    TEST EBX,EBX                        ; 005ab4ce
        ;   Label: LAB_005ab4ce
    JGE 0x005ab4d8                      ; 005ab4d0
        ;   XREF to: 005ab4d8 (CONDITIONAL_JUMP)  ; LAB_005ab4d8
    MOV EBX,dword ptr [0x00681b24]      ; 005ab4d2 | g_CurrentSoundDevice
    CALL sound_sndmain.cpp_getSoundDeviceCount_FUN_005ab2e0 ; 005ab4d8
        ;   XREF to: 005ab2e0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getSoundDeviceCount_FUN_005ab2e0()
        ;   Label: LAB_005ab4d8
    CMP EBX,EAX                         ; 005ab4dd
    JL 0x005ab515                       ; 005ab4df
        ;   XREF to: 005ab515 (CONDITIONAL_JUMP)  ; LAB_005ab515
    CALL sound_sndmain.cpp_findBestSoundDevice_FUN_005ab3d0 ; 005ab4e1
        ;   XREF to: 005ab3d0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_findBestSoundDevice_FUN_005ab3d0()
        ;   Label: LAB_005ab4e1
    MOV EBX,EAX                         ; 005ab4e6
    MOV dword ptr [0x00681b24],EBX      ; 005ab4e8 | g_CurrentSoundDevice
    POP EBX                             ; 005ab4ee
    RET                                 ; 005ab4ef
    MOV EDX,0x650c9b                    ; 005ab4f0 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005ab4f0
    MOV ECX,0x1335                      ; 005ab4f5
    PUSH 0x650cb0                       ; 005ab4fa | = "selectSoundDevice - device already open."
    MOV dword ptr [0x02f0ca48],EDX      ; 005ab4ff | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 005ab505 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005ab50b
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005ab510
    JMP 0x005ab4ce                      ; 005ab513
        ;   XREF to: 005ab4ce (UNCONDITIONAL_JUMP)  ; LAB_005ab4ce
    TEST EBX,EBX                        ; 005ab515
        ;   Label: LAB_005ab515
    JL 0x005ab4e1                       ; 005ab517
        ;   XREF to: 005ab4e1 (CONDITIONAL_JUMP)  ; LAB_005ab4e1
    MOV dword ptr [0x00681b24],EBX      ; 005ab519 | g_CurrentSoundDevice
    POP EBX                             ; 005ab51f
    RET                                 ; 005ab520

