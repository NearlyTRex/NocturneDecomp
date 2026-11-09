; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_FUN_00560b00(CSound *this_ptr,uint sfx_handle)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   sfx_handle
;
; XREF[6]:
;   core_dynamite.cpp_FUN_0047b270 at 0047b2fe
;   core_flame.cpp_FUN_004a5b10 at 004a5f04
;   core_ghoul.cpp_FUN_004c6eb0 at 004c8b3b
;   core_platfrm.cpp_FUN_005114f0 at 00511ab2
;   core_sound.cpp_CSound_playAmbientSound_FUN_00560940 at 0056094e
;   core_sound.cpp_FUN_0055ff40 at 00560584
;
; Called Functions:
;   sound_sndmain.cpp_killSfx_FUN_00556be0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00560b00
        ;   Label: core_sound.cpp_FUN_00560b00
    PUSH EDX                            ; 00560b04
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 00560b05
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 00560b0a
    RET                                 ; 00560b0d

