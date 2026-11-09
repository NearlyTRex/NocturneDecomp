; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weapon_cpp_FUN_0058a200(CWeapon *this_ptr,int weapon_state)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   weapon_state
;
; XREF[3]:
;   core_baron.cpp_CBaronWeapon_setWeaponState_FUN_00410a30 at 00410a3d
;   core_melee.cpp_CMelee_setWeaponState_FUN_004ead10 at 004ead24
;   core_tommygun.cpp_FUN_00576370 at 0057638e
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0058a200
        ;   Label: core_weapon.cpp_FUN_0058a200
    MOV EAX,dword ptr [ESP + 0x8]       ; 0058a204
    MOV dword ptr [EDX + 0x430],EAX     ; 0058a208
    RET                                 ; 0058a20e

