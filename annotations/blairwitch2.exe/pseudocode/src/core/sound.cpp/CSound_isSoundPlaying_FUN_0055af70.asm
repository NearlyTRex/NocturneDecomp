; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_sound_cpp_CSound_isSoundPlaying_FUN_0055af70(CSound *this_ptr,uint sfx_handle)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   sfx_handle
;
; XREF[10]:
;   core_boxactor.cpp_CBoxActor_process_FUN_0041c090 at 0041c293
;   core_cow.cpp_CZombieCow_processDamage_FUN_00439b30 at 00439b7e
;   core_cow.cpp_CZombieCow_process_FUN_004392b0 at 004396c7
;   core_dog.cpp_CZombieDog_processDamage_FUN_0045eb20 at 0045eb63
;   core_dog.cpp_CZombieDog_process_FUN_0045e360 at 0045e71a
;   core_flame.cpp_CFlame_process_FUN_0049f2e0 at 0049f47c
;   core_flamegun.cpp_CFlameThrower_process_FUN_004a0e60 at 004a0ebc
;   core_ghoul.cpp_CGhoul_process_FUN_004c1bb0 at 004c1f6c
;   core_platfrm.cpp_CPlatform_process_FUN_005184c0 at 0051869e
;   core_sound.cpp_CSound_process_FUN_0055a3c0 at 0055a486
;
; Called Functions:
;   sound_sndmain.cpp_FUN_00550b70
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0055af70
        ;   Label: core_sound.cpp_CSound_isSoundPlaying_FUN_0055af70
    PUSH EDX                            ; 0055af74
    CALL sound_sndmain.cpp_FUN_00550b70 ; 0055af75
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 0055af7a
    RET                                 ; 0055af7d

