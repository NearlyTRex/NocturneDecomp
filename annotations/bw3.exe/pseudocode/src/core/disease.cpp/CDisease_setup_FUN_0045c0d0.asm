; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_disease_cpp_CDisease_setup_FUN_0045c0d0(CDisease *this_ptr)
;
; Parameters:
; CDisease *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005fc5a0
;
; Called Functions:
;   core_fire.cpp_FUN_004a4340
;   core_weapon.cpp_CWeapon_setup_FUN_0057af40
;   sound_sndmain.cpp_FUN_00556230
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0045c0d0
        ;   Label: core_disease.cpp_CDisease_setup_FUN_0045c0d0
    PUSH EDX                            ; 0045c0d4
    CALL core_weapon.cpp_CWeapon_setup_FUN_0057af40 ; 0045c0d5
        ;   XREF to: 0057af40 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_setup_FUN_0057af40(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 0045c0da
    PUSH 0x5bb1d9                       ; 0045c0dd
    CALL sound_sndmain.cpp_FUN_00556230 ; 0045c0e2
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 0045c0e7
    PUSH 0x5bb1e7                       ; 0045c0ea
    CALL sound_sndmain.cpp_FUN_00556230 ; 0045c0ef
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 0045c0f4
    PUSH 0x2                            ; 0045c0f7
    MOV ECX,dword ptr [0x005fc5a0]      ; 0045c0f9 | DAT_005fc5a0
    PUSH ECX                            ; 0045c0ff
    CALL core_fire.cpp_FUN_004a4340     ; 0045c100
        ;   XREF to: 004a4340 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a4340()
    ADD ESP,0x8                         ; 0045c105
    RET                                 ; 0045c108

