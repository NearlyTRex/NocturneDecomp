; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_sound_cpp_CSound_isSoundPlaying_FUN_0052eba0(CSound *this_ptr,uint sfx_handle)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   sfx_handle
;
; XREF[10]:
;   core_boxactor.cpp_CBoxActor_process_FUN_0041e5e0 at 0041e7b2
;   core_cow.cpp_CZombieCow_processDamage_FUN_0043c5e0 at 0043c62e
;   core_cow.cpp_CZombieCow_process_FUN_0043bdb0 at 0043c17a
;   core_dog.cpp_CZombieDog_processDamage_FUN_00454e30 at 00454e73
;   core_dog.cpp_CZombieDog_process_FUN_00454750 at 00454a8d
;   core_flame.cpp_CFlame_process_FUN_0048d0c0 at 0048d24b
;   core_flamegun.cpp_CFlameThrower_process_FUN_0048eb30 at 0048ebc8
;   core_ghoul.cpp_CGhoul_process_FUN_004a9270 at 004a95dd
;   core_platfrm.cpp_CPlatform_process_FUN_004f6170 at 004f634e
;   core_sound.cpp_FUN_0052dff0 at 0052e0b6
;
; Called Functions:
;   sound_sndmain.cpp_isSfxPlaying_FUN_00526c50
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0052eba0
        ;   Label: core_sound.cpp_CSound_isSoundPlaying_FUN_0052eba0
    PUSH EDX                            ; 0052eba4
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 0052eba5
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)
    ADD ESP,0x4                         ; 0052ebaa
    RET                                 ; 0052ebad

