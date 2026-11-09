; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_FUN_0055af80(CSound *this_ptr,uint sfx_handle)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   sfx_handle
;
; XREF[7]:
;   core_dynamite.cpp_FUN_0047a1e0 at 0047a26e
;   core_flame.cpp_CFlame_process_FUN_0049f2e0 at 0049f6cf
;   core_flamegun.cpp_FUN_004a0e60 at 004a0f3b
;   core_ghoul.cpp_FUN_004c1bb0 at 004c382c
;   core_platfrm.cpp_FUN_005184c0 at 00518a82
;   core_sound.cpp_CSound_playAmbientSound_FUN_0055adc0 at 0055adce
;   core_sound.cpp_FUN_0055a3c0 at 0055a95c
;
; Called Functions:
;   sound_sndmain.cpp_killSfx_FUN_00551050
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0055af80
        ;   Label: core_sound.cpp_FUN_0055af80
    PUSH EDX                            ; 0055af84
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 0055af85
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 0055af8a
    RET                                 ; 0055af8d

