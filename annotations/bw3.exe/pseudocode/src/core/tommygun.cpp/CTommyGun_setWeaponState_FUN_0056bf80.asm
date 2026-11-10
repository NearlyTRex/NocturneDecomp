; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_tommygun_cpp_CTommyGun_setWeaponState_FUN_0056bf80(CTommyGun *this_ptr,int weapon_state)
;
; Parameters:
; CTommyGun *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   weapon_state
;
; Called Functions:
;   core_weapon.cpp_CWeapon_setWeaponState_FUN_0057b7f0
;   sound_sndmain.cpp_killSfx_FUN_00556be0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056bf80
        ;   Label: core_tommygun.cpp_CTommyGun_setWeaponState_FUN_0056bf80
    MOV EAX,dword ptr [ESP + 0x8]       ; 0056bf81
    MOV EDX,dword ptr [EAX + 0x598]     ; 0056bf85
    PUSH EDX                            ; 0056bf8b
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 0056bf8c
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 0056bf91
    MOV ECX,dword ptr [ESP + 0xc]       ; 0056bf94
    PUSH ECX                            ; 0056bf98
    MOV EBX,dword ptr [ESP + 0xc]       ; 0056bf99
    PUSH EBX                            ; 0056bf9d
    CALL core_weapon.cpp_CWeapon_setWeaponState_FUN_0057b7f0 ; 0056bf9e
        ;   XREF to: 0057b7f0 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_setWeaponState_FUN_0057b7f0(CWeapon * this_ptr, int weapon_state)
    ADD ESP,0x8                         ; 0056bfa3
    POP EBX                             ; 0056bfa6
    RET                                 ; 0056bfa7

