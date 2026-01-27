; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_sound.cpp_CSound_killSound_FUN_005b3b90(CSound * this_ptr, uint sfx_handle)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   sfx_handle
;
; XREF[7]:
;   core_dynamite.cpp_CDynamite_process_FUN_0049cfb0 at 0049d039
;   core_flame.cpp_FUN_004c9c00 at 004c9fad
;   core_flamegun.cpp_CFlameThrower_process_FUN_004cb9b0 at 004cba8b
;   core_ghoul.cpp_CGhoul_FUN_004e6600 at 004e8037
;   core_platfrm.cpp_FUN_0054cc30 at 0054d1d2
;   core_sound.cpp_CSound_playAmbientSound_FUN_005b39b0 at 005b39be
;   core_sound.cpp_CSound_process_FUN_005b2fd0 at 005b3549
;
; Called Functions:
;   sound_sndmain.cpp_killSfx_FUN_005a9c40
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 005b3b90
        ;   Label: core_sound.cpp_CSound_killSound_FUN_005b3b90
    PUSH EDX                            ; 005b3b94
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 005b3b95
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 005b3b9a
    RET                                 ; 005b3b9d

