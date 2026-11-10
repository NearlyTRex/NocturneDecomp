; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_CSound_killSound_FUN_0057d9d0(CSound *this_ptr,uint sfx_handle)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   sfx_handle
;
; XREF[9]:
;   core_djien.cpp_CDjien_process_FUN_00460230 at 004603a7
;   core_dynamite.cpp_CDynamite_process_FUN_004926d0 at 0049275e
;   core_flame.cpp_CFlame_process_FUN_004b7b90 at 004b7f7f
;   core_flamegun.cpp_CFlameThrower_process_FUN_004b9710 at 004b97eb
;   core_ghoul.cpp_CGhoul_process_FUN_004de330 at 004dffac
;   core_platfrm.cpp_CPlatform_process_FUN_00539810 at 00539dd2
;   core_sound.cpp_CSound_playAmbientSound_FUN_0057d810 at 0057d81e
;   core_sound.cpp_CSound_process_FUN_0057ce10 at 0057d454
;   core_xform.cpp_FUN_005b9170 at 005b9205
;
; Called Functions:
;   sound_sndmain.cpp_killSfx_FUN_00573a80
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0057d9d0
        ;   Label: core_sound.cpp_CSound_killSound_FUN_0057d9d0
    PUSH EDX                            ; 0057d9d4
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 0057d9d5
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 0057d9da
    RET                                 ; 0057d9dd

