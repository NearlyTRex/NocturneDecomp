; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_exorcism_cpp_CExorcism_setup_FUN_0048b690(CExorcism *this_ptr)
;
; Parameters:
; CExorcism *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005fc5a0
;
; Called Functions:
;   core_charactr.cpp_FUN_0042f280
;   core_fire.cpp_CFireEffect_preloadGunFlameStyle_FUN_004a41d0
;   core_fire.cpp_CFireEffect_preloadLightningBoltStyle_FUN_004a4130
;   core_weapon.cpp_CWeapon_setup_FUN_0057af40
;   sound_sndmain.cpp_preloadSfx_FUN_00556230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048b690
        ;   Label: core_exorcism.cpp_CExorcism_setup_FUN_0048b690
    MOV EDX,dword ptr [ESP + 0x8]       ; 0048b691
    PUSH EDX                            ; 0048b695
    CALL core_weapon.cpp_CWeapon_setup_FUN_0057af40 ; 0048b696
        ;   XREF to: 0057af40 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_setup_FUN_0057af40(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 0048b69b
    PUSH 0x5bdd9a                       ; 0048b69e
    CALL sound_sndmain.cpp_preloadSfx_FUN_00556230 ; 0048b6a3
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_preloadSfx_FUN_00556230(char * filename)
    ADD ESP,0x4                         ; 0048b6a8
    PUSH 0x5bdda8                       ; 0048b6ab
    CALL sound_sndmain.cpp_preloadSfx_FUN_00556230 ; 0048b6b0
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_preloadSfx_FUN_00556230(char * filename)
    ADD ESP,0x4                         ; 0048b6b5
    PUSH 0x4                            ; 0048b6b8
    MOV ECX,dword ptr [0x005fc5a0]      ; 0048b6ba | DAT_005fc5a0
    PUSH ECX                            ; 0048b6c0
    CALL core_fire.cpp_CFireEffect_preloadLightningBoltStyle_FUN_004a4130 ; 0048b6c1
        ;   XREF to: 004a4130 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_preloadLightningBoltStyle_FUN_004a4130(CFireEffect * this_ptr, int bolt_style)
    ADD ESP,0x8                         ; 0048b6c6
    PUSH 0x2                            ; 0048b6c9
    MOV EBX,dword ptr [0x005fc5a0]      ; 0048b6cb | DAT_005fc5a0
    PUSH EBX                            ; 0048b6d1
    CALL core_fire.cpp_CFireEffect_preloadGunFlameStyle_FUN_004a41d0 ; 0048b6d2
        ;   XREF to: 004a41d0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_preloadGunFlameStyle_FUN_004a41d0(CFireEffect * this_ptr, int flame_style)
    ADD ESP,0x8                         ; 0048b6d7
    PUSH 0x2                            ; 0048b6da
    CALL core_charactr.cpp_FUN_0042f280 ; 0048b6dc
        ;   XREF to: 0042f280 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042f280()
    ADD ESP,0x4                         ; 0048b6e1
    POP EBX                             ; 0048b6e4
    RET                                 ; 0048b6e5

