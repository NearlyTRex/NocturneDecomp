; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weapon_cpp_CWeapon_setWeaponState_FUN_0057b7f0(CWeapon *this_ptr,int weapon_state)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   weapon_state
;
; XREF[6]:
;   core_burncrss.cpp_CBurncross_setWeaponState_FUN_00425300 at 0042534b
;   core_exorcism.cpp_CExorcism_setWeaponState_FUN_0048b640 at 0048b683
;   core_firestff.cpp_CFirestaff_setWeaponState_FUN_004a5770 at 004a57a7
;   core_lightsta.cpp_CLightStaff_setWeaponState_FUN_004e3e60 at 004e3ea1
;   core_melee.cpp_CMelee_setWeaponState_FUN_004e74b0 at 004e74c4
;   core_tommygun.cpp_CTommyGun_setWeaponState_FUN_0056bf80 at 0056bf9e
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0057b7f0
        ;   Label: core_weapon.cpp_CWeapon_setWeaponState_FUN_0057b7f0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0057b7f4
    MOV dword ptr [EDX + 0x2d4],EAX     ; 0057b7f8
    RET                                 ; 0057b7fe

