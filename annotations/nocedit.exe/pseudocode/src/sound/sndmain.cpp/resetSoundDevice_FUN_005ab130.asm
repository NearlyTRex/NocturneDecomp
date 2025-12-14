; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int sound_sndmain.cpp_resetSoundDevice_FUN_005ab130(void)
;
;
; XREF[13]:
;   core_game.cpp_CGame_rollCredits_FUN_004e4010 at 004e40f4
;   core_menu.cpp_configureSoundOptions_FUN_00511e50 at 00512b66
;   core_setedit.cpp_DementedFogEditor_FUN_00580730 at 00581161
;   core_skeledit.cpp_FUN_00589b10 at 00589b8e
;   core_skeledit.cpp_FUN_00589c20 at 00589eb2
;   core_skeledit.cpp_FUN_0058c190 at 0058d25c
;   core_sound.cpp_CSound_reset_FUN_005b39a0 at 005b39a0
;   core_sound.cpp_CSound_shutdown_FUN_005b2f70 at 005b2fb4
;   sound_sndmain.cpp_closeSoundDevice_FUN_005ab660 at 005ab662
;   sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0 at 005aaf1e
;   ... and 3 more
;
; Referenced Globals:
;   CSoundDevice* g_CSoundDevicePtr
;   int g_SoundBusyFlag
;
; Called Functions:
;   sound_sndmain.cpp_freeMixBuffers_FUN_005a5900
;   sound_sndmain.cpp_killAllSfx_FUN_005a9cc0
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_killAllSfx_FUN_005a9cc0 ; 005ab130
        ;   XREF to: 005a9cc0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_killAllSfx_FUN_005a9cc0()
        ;   Label: sound_sndmain.cpp_resetSoundDevice_FUN_005ab130
    MOV EDX,dword ptr [0x03f69268]      ; 005ab135 | g_CSoundDevicePtr
    TEST EDX,EDX                        ; 005ab13b
    JZ 0x005ab14f                       ; 005ab13d
        ;   XREF to: 005ab14f (CONDITIONAL_JUMP)  ; LAB_005ab14f
    MOV EAX,EDX                         ; 005ab13f
    PUSH EAX                            ; 005ab141
    MOV EDX,dword ptr [EDX]             ; 005ab142
    CALL dword ptr [EDX + 0x8]          ; 005ab144
    ADD ESP,0x4                         ; 005ab147
    TEST EAX,EAX                        ; 005ab14a
    JNZ 0x005ab14f                      ; 005ab14c
        ;   XREF to: 005ab14f (CONDITIONAL_JUMP)  ; LAB_005ab14f
    RET                                 ; 005ab14e
    XOR ECX,ECX                         ; 005ab14f
        ;   Label: LAB_005ab14f
    MOV dword ptr [0x03f6926c],ECX      ; 005ab151 | g_SoundBusyFlag
    CALL sound_sndmain.cpp_freeMixBuffers_FUN_005a5900 ; 005ab157
        ;   XREF to: 005a5900 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_freeMixBuffers_FUN_005a5900()
    MOV EAX,0x1                         ; 005ab15c
        ;   Label: LAB_005ab15c
    RET                                 ; 005ab161

