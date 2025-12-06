; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_sndmain.cpp_enableHwSoundMixing_FUN_005ab550(int enable)
;
; Parameters:
; int              Stack[0x4]:4   enable
;
; XREF[2]:
;   core_menu.cpp_configureSoundOptions_FUN_00511e50 at 00512d0a
;   sound_sndmain.cpp_readIni_FUN_005abf20 at 005ac03c
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_00650cd9
;   TerminatedCString s_enableHwSoundMixing_Can__00650cee
;   int g_HardwareMixingEnabled = 0x1
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   sound_sndmain.cpp_isSoundSystemActive_FUN_005ab530
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_isSoundSystemActive_FUN_005ab530 ; 005ab550 | uint sound_sndmain.cpp_isSoundSystemActive_FUN_005ab530()
        ;   Label: sound_sndmain.cpp_enableHwSoundMixing_FUN_005ab550
        ;   XREF to: 005ab530 (UNCONDITIONAL_CALL)
    TEST EAX,EAX                        ; 005ab555
    JNZ 0x005ab563                      ; 005ab557 | LAB_005ab563
        ;   XREF to: 005ab563 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x4]       ; 005ab559
    MOV [0x00681b28],EAX                ; 005ab55d | int g_HardwareMixingEnabled
    RET                                 ; 005ab562
    MOV EDX,0x650cd9                    ; 005ab563 | = "..\\sound\\sndmain.cpp" | s_sound_sndmain_cpp_00650cd9 = ..\sound\sndmain.cpp
        ;   Label: LAB_005ab563
    MOV ECX,0x135b                      ; 005ab568
    PUSH 0x650cee                       ; 005ab56d | = "enableHwSoundMixing - Can't do this w..." | s_enableHwSoundMixing_Can__00650cee = enableHwSoundMixing - Can't do this while the device is open.
    MOV dword ptr [0x02f0ca48],EDX      ; 005ab572 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 005ab578 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005ab57e | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005ab583
    MOV EAX,dword ptr [ESP + 0x4]       ; 005ab586
    MOV [0x00681b28],EAX                ; 005ab58a | int g_HardwareMixingEnabled
    RET                                 ; 005ab58f

