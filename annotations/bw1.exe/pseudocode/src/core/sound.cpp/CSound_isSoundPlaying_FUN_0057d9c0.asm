; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_sound_cpp_CSound_isSoundPlaying_FUN_0057d9c0(CSound *this_ptr,uint sfx_handle)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   sfx_handle
;
; XREF[18]:
;   core_boxactor.cpp_CBoxActor_process_FUN_00422000 at 00422203
;   core_cow.cpp_CZombieCow_processDamage_FUN_00448df0 at 00448e3e
;   core_cow.cpp_CZombieCow_process_FUN_00448570 at 00448987
;   core_djien.cpp_CDjien_process_FUN_00460230 at 004606e3
;   core_djien.cpp_FUN_004609c0 at 00460c6c
;   core_dog.cpp_CZombieDog_processDamage_FUN_00477060 at 004770a3
;   core_dog.cpp_CZombieDog_process_FUN_004768a0 at 00476c5a
;   core_flame.cpp_CFlame_process_FUN_004b7b90 at 004b7d2c
;   core_flamegun.cpp_CFlameThrower_process_FUN_004b9710 at 004b976c
;   core_ghoul.cpp_CGhoul_process_FUN_004de330 at 004de6ec
;   ... and 8 more
;
; Called Functions:
;   sound_sndmain.cpp_FUN_005735a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0057d9c0
        ;   Label: core_sound.cpp_CSound_isSoundPlaying_FUN_0057d9c0
    PUSH EDX                            ; 0057d9c4
    CALL sound_sndmain.cpp_FUN_005735a0 ; 0057d9c5
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 0057d9ca
    RET                                 ; 0057d9cd

