; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_weapon.cpp_CWeapon_FUN_005ee640(CWeapon * this_ptr)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_baron.cpp_CBaronWeapon_setWeaponState_FUN_00413e90 at 00413e9d
;   core_melee.cpp_FUN_0050ecd0 at 0050ece4
;   core_tommygun.cpp_FUN_005de5a0 at 005de5be
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005ee640
        ;   Label: core_weapon.cpp_CWeapon_FUN_005ee640
    MOV EAX,dword ptr [ESP + 0x8]       ; 005ee644
    MOV dword ptr [EDX + 0x2d4],EAX     ; 005ee648
    RET                                 ; 005ee64e

