; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl sound_sndmain_cpp_setNumberOfSfxChannels_FUN_005a9de0(int channel_count)
;
; Parameters:
; int              Stack[0x4]:4   channel_count
;
; XREF[1]:
;   core_sound.cpp_CSound_ctor_FUN_005b2ce0 at 005b2ced
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_00650a74
;   TerminatedCString s_setNumberOfSfxChannels_t_00650a89
;   int g_MaxSoundChannels = 0x20
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0x4],0x20      ; 005a9de0
        ;   Label: sound_sndmain.cpp_setNumberOfSfxChannels_FUN_005a9de0
    JG 0x005a9df1                       ; 005a9de5
        ;   XREF to: 005a9df1 (CONDITIONAL_JUMP)  ; LAB_005a9df1
    MOV EAX,dword ptr [ESP + 0x4]       ; 005a9de7
    MOV [0x00681b10],EAX                ; 005a9deb | g_MaxSoundChannels
    RET                                 ; 005a9df0
    PUSH EBX                            ; 005a9df1
        ;   Label: LAB_005a9df1
    MOV ECX,0x650a74                    ; 005a9df2 | = "..\\sound\\sndmain.cpp"
    MOV EBX,0xf9b                       ; 005a9df7
    PUSH 0x650a89                       ; 005a9dfc | = "setNumberOfSfxChannels - too many!"
    MOV dword ptr [0x02f0ca48],ECX      ; 005a9e01 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 005a9e07 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a9e0d
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005a9e12
    POP EBX                             ; 005a9e15
    MOV EAX,dword ptr [ESP + 0x4]       ; 005a9e16
    MOV [0x00681b10],EAX                ; 005a9e1a | g_MaxSoundChannels
    RET                                 ; 005a9e1f

