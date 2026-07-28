; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weapon_cpp_CWeapon_setWeaponState_FUN_00554560(CWeapon *this_ptr,int weapon_state)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   weapon_state
;
; XREF[3]:
;   core_baron.cpp_CBaronWeapon_setWeaponState_FUN_004114a0 at 004114ad
;   core_melee.cpp_CMelee_setWeaponState_FUN_004cf180 at 004cf194
;   core_tommygun.cpp_CTommyGun_setWeaponState_FUN_00546740 at 0054675e
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00554560
        ;   Label: core_weapon.cpp_CWeapon_setWeaponState_FUN_00554560
    MOV EAX,dword ptr [ESP + 0x8]       ; 00554564
    MOV dword ptr [EDX + 0x2cc],EAX     ; 00554568
    RET                                 ; 0055456e

