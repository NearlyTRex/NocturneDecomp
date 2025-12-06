; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20(int channel_index, int enable_state)
;
; Parameters:
; int              Stack[0x4]:4   channel_index
; int              Stack[0x8]:4   enable_state
;
; XREF[6]:
;   core_menu.cpp_configureSoundOptions_FUN_00511e50 at 00512841
;   core_sound.cpp_CSound_init_FUN_005b2dd0 at 005b2e76
;   core_sound.cpp_CSound_process_FUN_005b2fd0 at 005b3231
;   core_sound.cpp_syncChannel3WithChannel0_FUN_005b2d70 at 005b2d85
;   sound_sndmain.cpp_readIni_FUN_005abf20 at 005ac18e
;   sound_sndmain.cpp_resetSoundSystemDefaults_FUN_005aae00 at 005aae14
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_00650aac
;   TerminatedCString s_enableSfxChannel_invalid_00650ac1
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   CSfxSlot[64] g_SfxSlots
;   undefined4 g_SfxSlots[1].status
;   int[32] g_SfxChannelEnabled
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60
;   sound_sndmain.cpp_lockSound_FUN_005abd30
;   sound_sndmain.cpp_unlockSound_FUN_005abdc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a9e20
        ;   Label: sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20
    PUSH ESI                            ; 005a9e21
    MOV ESI,dword ptr [ESP + 0xc]       ; 005a9e22
    MOV EBX,dword ptr [ESP + 0x10]      ; 005a9e26
    TEST ESI,ESI                        ; 005a9e2a
    JL 0x005a9e33                       ; 005a9e2c | LAB_005a9e33
        ;   XREF to: 005a9e33 (CONDITIONAL_JUMP)
    CMP ESI,0x20                        ; 005a9e2e
    JL 0x005a9e57                       ; 005a9e31 | LAB_005a9e57
        ;   XREF to: 005a9e57 (CONDITIONAL_JUMP)
    PUSH ESI                            ; 005a9e33
        ;   Label: LAB_005a9e33
    MOV EDX,0x650aac                    ; 005a9e34 | = "..\\sound\\sndmain.cpp" | s_sound_sndmain_cpp_00650aac = ..\sound\sndmain.cpp
    MOV ECX,0xfa1                       ; 005a9e39
    PUSH 0x650ac1                       ; 005a9e3e | = "enableSfxChannel - invalid channel in..." | s_enableSfxChannel_invalid_00650ac1 = enableSfxChannel - invalid channel index: %d
    MOV dword ptr [0x02f0ca48],EDX      ; 005a9e43 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 005a9e49 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a9e4f | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005a9e54
    MOV dword ptr [ESI*0x4 + 0x3f68928],EBX ; 005a9e57 | int[32] g_SfxChannelEnabled
        ;   Label: LAB_005a9e57
    TEST EBX,EBX                        ; 005a9e5e
    JNZ 0x005a9e92                      ; 005a9e60 | LAB_005a9e92
        ;   XREF to: 005a9e92 (CONDITIONAL_JUMP)
    CALL sound_sndmain.cpp_lockSound_FUN_005abd30 ; 005a9e62 | void sound_sndmain.cpp_lockSound_FUN_005abd30()
        ;   XREF to: 005abd30 (UNCONDITIONAL_CALL)
    CMP ESI,dword ptr [EBX + 0x3f5daa4] ; 005a9e67 | CSfxSlot[64] g_SfxSlots
        ;   Label: LAB_005a9e67
    JNZ 0x005a9e7f                      ; 005a9e6d | LAB_005a9e7f
        ;   XREF to: 005a9e7f (CONDITIONAL_JUMP)
    MOV EAX,0x3f5daa4                   ; 005a9e6f | CSfxSlot[64] g_SfxSlots
    ADD EAX,EBX                         ; 005a9e74
    PUSH EAX                            ; 005a9e76
    CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60 ; 005a9e77 | void sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60(CSfxSlot * slot)
        ;   XREF to: 005a7e60 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005a9e7c
    ADD EBX,0x128                       ; 005a9e7f
        ;   Label: LAB_005a9e7f
    CMP EBX,0x4a00                      ; 005a9e85
    JNZ 0x005a9e67                      ; 005a9e8b | LAB_005a9e67
        ;   XREF to: 005a9e67 (CONDITIONAL_JUMP)
    CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0 ; 005a9e8d | void sound_sndmain.cpp_unlockSound_FUN_005abdc0()
        ;   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
    POP ESI                             ; 005a9e92
        ;   Label: LAB_005a9e92
    POP EBX                             ; 005a9e93
    RET                                 ; 005a9e94

