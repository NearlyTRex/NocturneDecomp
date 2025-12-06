; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_sound.cpp_CSound_isSoundPlaying_FUN_005b3b80(CSound * this_ptr, uint sfx_handle)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   sfx_handle
;
; XREF[10]:
;   core_boxactor.cpp_CBoxActor_process_FUN_004219e0 at 00421bb2
;   core_cow.cpp_FUN_00444310 at 004446da
;   core_cow.cpp_FUN_00444b40 at 00444b8e
;   core_dog.cpp_CZombieDog_FUN_0047f820 at 0047f863
;   core_dog.cpp_CZombieDog_process_FUN_0047f140 at 0047f47d
;   core_flame.cpp_FUN_004c9c00 at 004c9d8b
;   core_flamegun.cpp_FUN_004cb9b0 at 004cba0c
;   core_ghoul.cpp_CGhoul_FUN_004e6600 at 004e696d
;   core_platfrm.cpp_FUN_0054cc30 at 0054ce0e
;   core_sound.cpp_CSound_process_FUN_005b2fd0 at 005b3096
;
; Called Functions:
;   sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 005b3b80
        ;   Label: core_sound.cpp_CSound_isSoundPlaying_FUN_005b3b80
    PUSH EDX                            ; 005b3b84
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 005b3b85 | int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005b3b8a
    RET                                 ; 005b3b8d

