; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_holycrss_cpp_CHolycross_setup_FUN_004d52e0(CHolycross *this_ptr)
;
; Parameters:
; CHolycross *     Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_weapon.cpp_CWeapon_setup_FUN_0057af40
;   sound_sndmain.cpp_preloadSfx_FUN_00556230
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004d52e0
        ;   Label: core_holycrss.cpp_CHolycross_setup_FUN_004d52e0
    PUSH EDX                            ; 004d52e4
    CALL core_weapon.cpp_CWeapon_setup_FUN_0057af40 ; 004d52e5
        ;   XREF to: 0057af40 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_setup_FUN_0057af40(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 004d52ea
    PUSH 0x5c5200                       ; 004d52ed
    CALL sound_sndmain.cpp_preloadSfx_FUN_00556230 ; 004d52f2
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_preloadSfx_FUN_00556230(char * filename)
    ADD ESP,0x4                         ; 004d52f7
    PUSH 0x5c520f                       ; 004d52fa
    CALL sound_sndmain.cpp_preloadSfx_FUN_00556230 ; 004d52ff
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_preloadSfx_FUN_00556230(char * filename)
    ADD ESP,0x4                         ; 004d5304
    PUSH 0x5c5220                       ; 004d5307
    CALL sound_sndmain.cpp_preloadSfx_FUN_00556230 ; 004d530c
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_preloadSfx_FUN_00556230(char * filename)
    ADD ESP,0x4                         ; 004d5311
    RET                                 ; 004d5314

