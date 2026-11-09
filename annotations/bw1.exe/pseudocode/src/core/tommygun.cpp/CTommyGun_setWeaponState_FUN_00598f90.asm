; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_tommygun_cpp_CTommyGun_setWeaponState_FUN_00598f90(CTommyGun *this_ptr,int weapon_state)
;
; Parameters:
; CTommyGun *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   weapon_state
;
; Called Functions:
;   core_weapon.cpp_CWeapon_setWeaponState_FUN_005add50
;   sound_sndmain.cpp_killSfx_FUN_00573a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00598f90
        ;   Label: core_tommygun.cpp_CTommyGun_setWeaponState_FUN_00598f90
    MOV EAX,dword ptr [ESP + 0x8]       ; 00598f91
    MOV EDX,dword ptr [EAX + 0x57c]     ; 00598f95
    PUSH EDX                            ; 00598f9b
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 00598f9c
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 00598fa1
    MOV ECX,dword ptr [ESP + 0xc]       ; 00598fa4
    PUSH ECX                            ; 00598fa8
    MOV EBX,dword ptr [ESP + 0xc]       ; 00598fa9
    PUSH EBX                            ; 00598fad
    CALL core_weapon.cpp_CWeapon_setWeaponState_FUN_005add50 ; 00598fae
        ;   XREF to: 005add50 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_setWeaponState_FUN_005add50(CWeapon * this_ptr, int weapon_state)
    ADD ESP,0x8                         ; 00598fb3
    POP EBX                             ; 00598fb6
    RET                                 ; 00598fb7

