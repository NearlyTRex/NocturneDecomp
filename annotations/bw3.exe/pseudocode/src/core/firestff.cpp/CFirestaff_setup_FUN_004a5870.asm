; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_firestff_cpp_CFirestaff_setup_FUN_004a5870(CFirestaff *this_ptr)
;
; Parameters:
; CFirestaff *     Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005fc5a0
;
; Called Functions:
;   core_fire.cpp_CFireEffect_preloadRingAssets_FUN_004a42c0
;   core_flame.cpp_FUN_004a5ad0
;   core_weapon.cpp_CWeapon_setup_FUN_0057af40
;   sound_sndmain.cpp_preloadSfx_FUN_00556230
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004a5870
        ;   Label: core_firestff.cpp_CFirestaff_setup_FUN_004a5870
    PUSH EDX                            ; 004a5874
    CALL core_weapon.cpp_CWeapon_setup_FUN_0057af40 ; 004a5875
        ;   XREF to: 0057af40 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_setup_FUN_0057af40(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 004a587a
    PUSH 0x5c0b5f                       ; 004a587d
    CALL sound_sndmain.cpp_preloadSfx_FUN_00556230 ; 004a5882
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_preloadSfx_FUN_00556230(char * filename)
    ADD ESP,0x4                         ; 004a5887
    PUSH 0x5c0b6d                       ; 004a588a
    CALL sound_sndmain.cpp_preloadSfx_FUN_00556230 ; 004a588f
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_preloadSfx_FUN_00556230(char * filename)
    ADD ESP,0x4                         ; 004a5894
    PUSH 0x5c0b7e                       ; 004a5897
    CALL sound_sndmain.cpp_preloadSfx_FUN_00556230 ; 004a589c
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_preloadSfx_FUN_00556230(char * filename)
    ADD ESP,0x4                         ; 004a58a1
    PUSH 0x0                            ; 004a58a4
    MOV ECX,dword ptr [0x005fc5a0]      ; 004a58a6 | DAT_005fc5a0
    PUSH ECX                            ; 004a58ac
    CALL core_fire.cpp_CFireEffect_preloadRingAssets_FUN_004a42c0 ; 004a58ad
        ;   XREF to: 004a42c0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_preloadRingAssets_FUN_004a42c0(CFireEffect * this_ptr, int variant)
    ADD ESP,0x8                         ; 004a58b2
    PUSH 0x0                            ; 004a58b5
    CALL core_flame.cpp_FUN_004a5ad0    ; 004a58b7
        ;   XREF to: 004a5ad0 (UNCONDITIONAL_CALL)  ; undefined core_flame.cpp_FUN_004a5ad0()
    ADD ESP,0x4                         ; 004a58bc
    RET                                 ; 004a58bf

