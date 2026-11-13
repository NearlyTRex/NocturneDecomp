; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_sound_cpp_CSound_isSoundPlaying_FUN_00560af0(CSound *this_ptr,uint sfx_handle)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   sfx_handle
;
; XREF[17]:
;   core_boxactor.cpp_CBoxActor_process_FUN_0041f360 at 0041f57c
;   core_cow.cpp_CZombieCow_processDamage_FUN_004459b0 at 004459fe
;   core_cow.cpp_CZombieCow_process_FUN_00445130 at 00445550
;   core_dog.cpp_CZombieDog_processDamage_FUN_004634d0 at 00463539
;   core_dog.cpp_CZombieDog_process_FUN_004628b0 at 00462c70
;   core_flame.cpp_CFlame_process_FUN_004a5b10 at 004a5cac
;   core_ghoul.cpp_CGhoul_process_FUN_004c6eb0 at 004c7273
;   core_inv.cpp_FUN_004d9fc0 at 004d9fd1
;   core_inv.cpp_FUN_004da020 at 004da15e
;   core_inv.cpp_FUN_004dcdb0 at 004dd10a
;   ... and 7 more
;
; Called Functions:
;   sound_sndmain.cpp_isSfxPlaying_FUN_00556700
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00560af0
        ;   Label: core_sound.cpp_CSound_isSoundPlaying_FUN_00560af0
    PUSH EDX                            ; 00560af4
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00556700 ; 00560af5
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 00560afa
    RET                                 ; 00560afd

