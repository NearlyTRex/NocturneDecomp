; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0(int channel_index, float volume)
;
; Parameters:
; int              Stack[0x4]:4   channel_index
; float            Stack[0x8]:4   volume
;
; XREF[7]:
;   core_menu.cpp_configureSoundOptions_FUN_00511e50 at 00512980
;   core_sound.cpp_CSound_configure_FUN_005b3830 at 005b38a6
;   core_sound.cpp_CSound_init_FUN_005b2dd0 at 005b2e9d
;   core_sound.cpp_CSound_process_FUN_005b2fd0 at 005b325f
;   core_sound.cpp_syncChannel3WithChannel0_FUN_005b2d70 at 005b2dad
;   sound_sndmain.cpp_readIni_FUN_005abf20 at 005ac1eb
;   sound_sndmain.cpp_resetSoundSystemDefaults_FUN_005aae00 at 005aae09
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_006509f0
;   TerminatedCString s_setSfxChannelVol_invalid_00650a05
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   CSfxSlot[64] g_SfxSlots
;   undefined4 DAT_03f5db14
;   undefined4 g_SfxSlots[0].field7_0x74
;   undefined4 g_SfxSlots[1].status
;   undefined4 g_SfxSlots[1].dsound_buffer
;   undefined4 DAT_03f5dc40
;   int g_SfxLastSlot
;   float[32] g_SfxChannelVolumes
;   CSoundDevice* g_CSoundDevicePtr
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   sound_sndmain.cpp_hasHardware3DSound_FUN_005ab5a0
;   sound_sndmain.cpp_lockSound_FUN_005abd30
;   sound_sndmain.cpp_unlockSound_FUN_005abdc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a9cf0
        ;   Label: sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0
    PUSH ESI                            ; 005a9cf1
    MOV ESI,dword ptr [ESP + 0xc]       ; 005a9cf2
    TEST ESI,ESI                        ; 005a9cf6
    JL 0x005a9cff                       ; 005a9cf8 | LAB_005a9cff
        ;   XREF to: 005a9cff (CONDITIONAL_JUMP)
    CMP ESI,0x20                        ; 005a9cfa
    JL 0x005a9d23                       ; 005a9cfd | LAB_005a9d23
        ;   XREF to: 005a9d23 (CONDITIONAL_JUMP)
    PUSH ESI                            ; 005a9cff
        ;   Label: LAB_005a9cff
    MOV EDX,0x6509f0                    ; 005a9d00 | = "..\\sound\\sndmain.cpp" | s_sound_sndmain_cpp_006509f0 = ..\sound\sndmain.cpp
    MOV ECX,0xf81                       ; 005a9d05
    PUSH 0x650a05                       ; 005a9d0a | = "setSfxChannelVol - invalid channel in..." | s_setSfxChannelVol_invalid_00650a05 = setSfxChannelVol - invalid channel index: %d
    MOV dword ptr [0x02f0ca48],EDX      ; 005a9d0f | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 005a9d15 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a9d1b | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005a9d20
    MOV EDX,dword ptr [ESP + 0x10]      ; 005a9d23
        ;   Label: LAB_005a9d23
    MOV EBX,dword ptr [0x03f69268]      ; 005a9d27 | CSoundDevice * g_CSoundDevicePtr
    MOV dword ptr [ESI*0x4 + 0x3f688a8],EDX ; 005a9d2d | float[32] g_SfxChannelVolumes
    TEST EBX,EBX                        ; 005a9d34
    JNZ 0x005a9d3b                      ; 005a9d36 | LAB_005a9d3b
        ;   XREF to: 005a9d3b (CONDITIONAL_JUMP)
    POP ESI                             ; 005a9d38
        ;   Label: LAB_005a9d38
    POP EBX                             ; 005a9d39
    RET                                 ; 005a9d3a
    CALL sound_sndmain.cpp_hasHardware3DSound_FUN_005ab5a0 ; 005a9d3b | uint sound_sndmain.cpp_hasHardware3DSound_FUN_005ab5a0()
        ;   Label: LAB_005a9d3b
        ;   XREF to: 005ab5a0 (UNCONDITIONAL_CALL)
    TEST EAX,EAX                        ; 005a9d40
    JZ 0x005a9d38                       ; 005a9d42 | LAB_005a9d38
        ;   XREF to: 005a9d38 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 005a9d44
    MOV EBX,0x3f5daa4                   ; 005a9d45 | CSfxSlot[64] g_SfxSlots
    CALL sound_sndmain.cpp_lockSound_FUN_005abd30 ; 005a9d4a | void sound_sndmain.cpp_lockSound_FUN_005abd30()
        ;   XREF to: 005abd30 (UNCONDITIONAL_CALL)
    LEA EDI,[EBX + 0x4a00]              ; 005a9d4f | int g_SfxLastSlot
    CMP dword ptr [EBX + 0x74],0x0      ; 005a9d55 | g_SfxSlots[0].field7_0x74
        ;   Label: LAB_005a9d55
    JNZ 0x005a9d6e                      ; 005a9d59 | LAB_005a9d6e
        ;   XREF to: 005a9d6e (CONDITIONAL_JUMP)
    ADD EBX,0x128                       ; 005a9d5b
        ;   Label: LAB_005a9d5b
    CMP EBX,EDI                         ; 005a9d61
    JNZ 0x005a9d55                      ; 005a9d63 | LAB_005a9d55
        ;   XREF to: 005a9d55 (CONDITIONAL_JUMP)
    CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0 ; 005a9d65 | void sound_sndmain.cpp_unlockSound_FUN_005abdc0()
        ;   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
    POP EDI                             ; 005a9d6a
    POP ESI                             ; 005a9d6b
    POP EBX                             ; 005a9d6c
    RET                                 ; 005a9d6d
    CMP dword ptr [EBX + 0x70],0x0      ; 005a9d6e | DAT_03f5db14
        ;   Label: LAB_005a9d6e
    JZ 0x005a9d5b                       ; 005a9d72 | LAB_005a9d5b
        ;   XREF to: 005a9d5b (CONDITIONAL_JUMP)
    CMP ESI,dword ptr [EBX]             ; 005a9d74 | CSfxSlot[64] g_SfxSlots
    JNZ 0x005a9d5b                      ; 005a9d76 | LAB_005a9d5b
        ;   XREF to: 005a9d5b (CONDITIONAL_JUMP)
    PUSH 0x8                            ; 005a9d78
    MOV EAX,[0x03f69268]                ; 005a9d7a | CSoundDevice * g_CSoundDevicePtr
    PUSH EBX                            ; 005a9d7f | CSfxSlot[64] g_SfxSlots
    MOV EDX,dword ptr [EAX]             ; 005a9d80
    PUSH EAX                            ; 005a9d82
    CALL dword ptr [EDX + 0x40]         ; 005a9d83
    ADD ESP,0xc                         ; 005a9d86
    JMP 0x005a9d5b                      ; 005a9d89 | LAB_005a9d5b
        ;   XREF to: 005a9d5b (UNCONDITIONAL_JUMP)

