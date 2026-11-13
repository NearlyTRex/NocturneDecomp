; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_burncrss_cpp_CBurncross_setup_FUN_004253d0(CBurncross *this_ptr)
;
; Parameters:
; CBurncross *     Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005fc5a0
;
; Called Functions:
;   core_fire.cpp_FUN_004a41d0
;   core_flame.cpp_FUN_004a5ad0
;   core_weapon.cpp_CWeapon_setup_FUN_0057af40
;   sound_sndmain.cpp_preloadSfx_FUN_00556230
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004253d0
        ;   Label: core_burncrss.cpp_CBurncross_setup_FUN_004253d0
    PUSH EDX                            ; 004253d4
    CALL core_weapon.cpp_CWeapon_setup_FUN_0057af40 ; 004253d5
        ;   XREF to: 0057af40 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_setup_FUN_0057af40(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 004253da
    PUSH 0x5b793a                       ; 004253dd
    CALL sound_sndmain.cpp_preloadSfx_FUN_00556230 ; 004253e2
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_preloadSfx_FUN_00556230(char * filename)
    ADD ESP,0x4                         ; 004253e7
    PUSH 0x5b7948                       ; 004253ea
    CALL sound_sndmain.cpp_preloadSfx_FUN_00556230 ; 004253ef
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_preloadSfx_FUN_00556230(char * filename)
    ADD ESP,0x4                         ; 004253f4
    PUSH 0x5b795c                       ; 004253f7
    CALL sound_sndmain.cpp_preloadSfx_FUN_00556230 ; 004253fc
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_preloadSfx_FUN_00556230(char * filename)
    ADD ESP,0x4                         ; 00425401
    PUSH 0x0                            ; 00425404
    MOV ECX,dword ptr [0x005fc5a0]      ; 00425406 | DAT_005fc5a0
    PUSH ECX                            ; 0042540c
    CALL core_fire.cpp_FUN_004a41d0     ; 0042540d
        ;   XREF to: 004a41d0 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a41d0()
    ADD ESP,0x8                         ; 00425412
    PUSH 0x0                            ; 00425415
    CALL core_flame.cpp_FUN_004a5ad0    ; 00425417
        ;   XREF to: 004a5ad0 (UNCONDITIONAL_CALL)  ; undefined core_flame.cpp_FUN_004a5ad0()
    ADD ESP,0x4                         ; 0042541c
    RET                                 ; 0042541f

