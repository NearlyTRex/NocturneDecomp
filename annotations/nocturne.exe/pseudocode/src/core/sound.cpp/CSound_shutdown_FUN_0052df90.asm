; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_CSound_shutdown_FUN_0052df90(CSound *this_ptr)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_game.cpp_CGame_processHotkeys_FUN_0049f930 at 0049f9b4
;   core_game.cpp_CGame_runGameSession_FUN_0049da10 at 0049dfb3
;
; Referenced Globals:
;   int g_SoundAudioInitialized
;   uint g_TrainRailNoiseHandle
;   uint g_TrainExteriorAmbientHandle
;
; Called Functions:
;   sound_sndmain.cpp_killSfx_FUN_00527230
;   sound_sndmain.cpp_resetSoundDevice_FUN_00528080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052df90
        ;   Label: core_sound.cpp_CSound_shutdown_FUN_0052df90
    PUSH ESI                            ; 0052df91
    XOR EDX,EDX                         ; 0052df92
    XOR EBX,EBX                         ; 0052df94
    MOV dword ptr [0x02dc9c94],EDX      ; 0052df96 | g_SoundAudioInitialized
    MOV ECX,dword ptr [EBX + 0x2dc9cb0] ; 0052df9c
        ;   Label: LAB_0052df9c
    PUSH ECX                            ; 0052dfa2
    ADD EBX,0x10                        ; 0052dfa3
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 0052dfa6
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00527230(uint sfx_handle)
    ADD ESP,0x4                         ; 0052dfab
    CMP EBX,0xa0                        ; 0052dfae
    JNZ 0x0052df9c                      ; 0052dfb4
        ;   XREF to: 0052df9c (CONDITIONAL_JUMP)  ; LAB_0052df9c
    MOV EBX,dword ptr [0x02dc9d58]      ; 0052dfb6 | g_TrainRailNoiseHandle
    PUSH EBX                            ; 0052dfbc
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 0052dfbd
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00527230(uint sfx_handle)
    ADD ESP,0x4                         ; 0052dfc2
    MOV ESI,dword ptr [0x02dc9d5c]      ; 0052dfc5 | g_TrainExteriorAmbientHandle
    PUSH ESI                            ; 0052dfcb
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 0052dfcc
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00527230(uint sfx_handle)
    ADD ESP,0x4                         ; 0052dfd1
    CALL sound_sndmain.cpp_resetSoundDevice_FUN_00528080 ; 0052dfd4
        ;   XREF to: 00528080 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_resetSoundDevice_FUN_00528080()
    POP ESI                             ; 0052dfd9
    POP EBX                             ; 0052dfda
    RET                                 ; 0052dfdb

