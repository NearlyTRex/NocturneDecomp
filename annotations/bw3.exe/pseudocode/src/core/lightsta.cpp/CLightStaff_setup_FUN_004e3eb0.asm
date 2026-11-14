; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_lightsta_cpp_CLightStaff_setup_FUN_004e3eb0(CLightStaff *this_ptr)
;
; Parameters:
; CLightStaff *    Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005fc5a0
;
; Called Functions:
;   core_charactr.cpp_FUN_0042f280
;   core_fire.cpp_CFireEffect_preloadLightningBoltStyle_FUN_004a4130
;   core_weapon.cpp_CWeapon_setup_FUN_0057af40
;   sound_sndmain.cpp_preloadSfx_FUN_00556230
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004e3eb0
        ;   Label: core_lightsta.cpp_CLightStaff_setup_FUN_004e3eb0
    PUSH EDX                            ; 004e3eb4
    CALL core_weapon.cpp_CWeapon_setup_FUN_0057af40 ; 004e3eb5
        ;   XREF to: 0057af40 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_setup_FUN_0057af40(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 004e3eba
    PUSH 0x5c6aae                       ; 004e3ebd
    CALL sound_sndmain.cpp_preloadSfx_FUN_00556230 ; 004e3ec2
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_preloadSfx_FUN_00556230(char * filename)
    ADD ESP,0x4                         ; 004e3ec7
    PUSH 0x5c6abc                       ; 004e3eca
    CALL sound_sndmain.cpp_preloadSfx_FUN_00556230 ; 004e3ecf
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_preloadSfx_FUN_00556230(char * filename)
    ADD ESP,0x4                         ; 004e3ed4
    PUSH 0x5c6ad2                       ; 004e3ed7
    CALL sound_sndmain.cpp_preloadSfx_FUN_00556230 ; 004e3edc
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_preloadSfx_FUN_00556230(char * filename)
    ADD ESP,0x4                         ; 004e3ee1
    PUSH 0x5c6aed                       ; 004e3ee4
    CALL sound_sndmain.cpp_preloadSfx_FUN_00556230 ; 004e3ee9
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_preloadSfx_FUN_00556230(char * filename)
    ADD ESP,0x4                         ; 004e3eee
    PUSH 0x3                            ; 004e3ef1
    MOV ECX,dword ptr [0x005fc5a0]      ; 004e3ef3 | DAT_005fc5a0
    PUSH ECX                            ; 004e3ef9
    CALL core_fire.cpp_CFireEffect_preloadLightningBoltStyle_FUN_004a4130 ; 004e3efa
        ;   XREF to: 004a4130 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_preloadLightningBoltStyle_FUN_004a4130(CFireEffect * this_ptr, int bolt_style)
    ADD ESP,0x8                         ; 004e3eff
    PUSH 0x1                            ; 004e3f02
    CALL core_charactr.cpp_FUN_0042f280 ; 004e3f04
        ;   XREF to: 0042f280 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042f280()
    ADD ESP,0x4                         ; 004e3f09
    RET                                 ; 004e3f0c

