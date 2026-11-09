; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weapon_cpp_CWeapon_setWeaponState_FUN_005add50(CWeapon *this_ptr,int weapon_state)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   weapon_state
;
; XREF[3]:
;   core_baron.cpp_CBaronWeapon_setWeaponState_FUN_004105b0 at 004105bd
;   core_melee.cpp_CMelee_setWeaponState_FUN_00509a70 at 00509a84
;   core_tommygun.cpp_CTommyGun_setWeaponState_FUN_00598f90 at 00598fae
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005add50
        ;   Label: core_weapon.cpp_CWeapon_setWeaponState_FUN_005add50
    MOV EAX,dword ptr [ESP + 0x8]       ; 005add54
    MOV dword ptr [EDX + 0x2d4],EAX     ; 005add58
    RET                                 ; 005add5e

