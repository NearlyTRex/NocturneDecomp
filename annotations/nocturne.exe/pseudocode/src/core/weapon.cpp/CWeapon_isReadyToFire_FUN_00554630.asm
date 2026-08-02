; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_weapon_cpp_CWeapon_isReadyToFire_FUN_00554630(CWeapon *this_ptr)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00554630
        ;   Label: core_weapon.cpp_CWeapon_isReadyToFire_FUN_00554630
    TEST dword ptr [EAX + 0x2f8],0x7fffffff ; 00554634
    SETZ AL                             ; 0055463e
    AND EAX,0xff                        ; 00554641
    RET                                 ; 00554646

