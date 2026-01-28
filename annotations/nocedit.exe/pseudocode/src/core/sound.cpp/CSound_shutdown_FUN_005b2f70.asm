; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_sound_cpp_CSound_shutdown_FUN_005b2f70(CSound *this_ptr)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004db754
;   core_game.cpp_SaveRelated_FUN_004dcee0 at 004dcf63
;   core_msnedit.cpp_FUN_0053eb40 at 0053ec32
;
; Referenced Globals:
;   int g_SoundAudioInitialized
;   undefined4 DAT_03f6b7c8
;   undefined4 DAT_03f6b7d8
;   uint g_TrainRailNoiseHandle
;   uint g_TrainExteriorAmbientHandle
;
; Called Functions:
;   sound_sndmain.cpp_killSfx_FUN_005a9c40
;   sound_sndmain.cpp_resetSoundDevice_FUN_005ab130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b2f70
        ;   Label: core_sound.cpp_CSound_shutdown_FUN_005b2f70
    PUSH ESI                            ; 005b2f71
    XOR EDX,EDX                         ; 005b2f72
    XOR EBX,EBX                         ; 005b2f74
    MOV dword ptr [0x03f6b7ac],EDX      ; 005b2f76 | g_SoundAudioInitialized
    MOV ECX,dword ptr [EBX + 0x3f6b7c8] ; 005b2f7c | DAT_03f6b7c8 | DAT_03f6b7d8
        ;   Label: LAB_005b2f7c
    PUSH ECX                            ; 005b2f82
    ADD EBX,0x10                        ; 005b2f83
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 005b2f86
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 005b2f8b
    CMP EBX,0xa0                        ; 005b2f8e
    JNZ 0x005b2f7c                      ; 005b2f94
        ;   XREF to: 005b2f7c (CONDITIONAL_JUMP)  ; LAB_005b2f7c
    MOV EBX,dword ptr [0x03f6b870]      ; 005b2f96 | g_TrainRailNoiseHandle
    PUSH EBX                            ; 005b2f9c
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 005b2f9d
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 005b2fa2
    MOV ESI,dword ptr [0x03f6b874]      ; 005b2fa5 | g_TrainExteriorAmbientHandle
    PUSH ESI                            ; 005b2fab
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 005b2fac
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 005b2fb1
    CALL sound_sndmain.cpp_resetSoundDevice_FUN_005ab130 ; 005b2fb4
        ;   XREF to: 005ab130 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_resetSoundDevice_FUN_005ab130()
    POP ESI                             ; 005b2fb9
    POP EBX                             ; 005b2fba
    RET                                 ; 005b2fbb

