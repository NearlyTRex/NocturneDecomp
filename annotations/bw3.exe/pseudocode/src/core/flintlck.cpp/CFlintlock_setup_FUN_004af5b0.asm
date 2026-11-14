; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flintlck_cpp_CFlintlock_setup_FUN_004af5b0(CFlintlock *this_ptr)
;
; Parameters:
; CFlintlock *     Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_weapon.cpp_CWeapon_setup_FUN_0057af40
;   sound_sndmain.cpp_preloadSfx_FUN_00556230
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004af5b0
        ;   Label: core_flintlck.cpp_CFlintlock_setup_FUN_004af5b0
    PUSH EDX                            ; 004af5b4
    CALL core_weapon.cpp_CWeapon_setup_FUN_0057af40 ; 004af5b5
        ;   XREF to: 0057af40 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_setup_FUN_0057af40(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 004af5ba
    PUSH 0x5c1d59                       ; 004af5bd
    CALL sound_sndmain.cpp_preloadSfx_FUN_00556230 ; 004af5c2
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_preloadSfx_FUN_00556230(char * filename)
    ADD ESP,0x4                         ; 004af5c7
    PUSH 0x5c1d67                       ; 004af5ca
    CALL sound_sndmain.cpp_preloadSfx_FUN_00556230 ; 004af5cf
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_preloadSfx_FUN_00556230(char * filename)
    ADD ESP,0x4                         ; 004af5d4
    PUSH 0x5c1d74                       ; 004af5d7
    CALL sound_sndmain.cpp_preloadSfx_FUN_00556230 ; 004af5dc
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_preloadSfx_FUN_00556230(char * filename)
    ADD ESP,0x4                         ; 004af5e1
    PUSH 0x5c1d81                       ; 004af5e4
    CALL sound_sndmain.cpp_preloadSfx_FUN_00556230 ; 004af5e9
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_preloadSfx_FUN_00556230(char * filename)
    ADD ESP,0x4                         ; 004af5ee
    PUSH 0x5c1d8e                       ; 004af5f1
    CALL sound_sndmain.cpp_preloadSfx_FUN_00556230 ; 004af5f6
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_preloadSfx_FUN_00556230(char * filename)
    ADD ESP,0x4                         ; 004af5fb
    PUSH 0x5c1d9b                       ; 004af5fe
    CALL sound_sndmain.cpp_preloadSfx_FUN_00556230 ; 004af603
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_preloadSfx_FUN_00556230(char * filename)
    ADD ESP,0x4                         ; 004af608
    PUSH 0x5c1da8                       ; 004af60b
    CALL sound_sndmain.cpp_preloadSfx_FUN_00556230 ; 004af610
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_preloadSfx_FUN_00556230(char * filename)
    ADD ESP,0x4                         ; 004af615
    PUSH 0x5c1db3                       ; 004af618
    CALL sound_sndmain.cpp_preloadSfx_FUN_00556230 ; 004af61d
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_preloadSfx_FUN_00556230(char * filename)
    ADD ESP,0x4                         ; 004af622
    RET                                 ; 004af625

