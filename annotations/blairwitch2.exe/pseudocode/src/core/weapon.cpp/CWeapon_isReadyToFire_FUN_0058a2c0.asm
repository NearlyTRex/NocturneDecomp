; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_weapon_cpp_CWeapon_isReadyToFire_FUN_0058a2c0(CWeapon *this_ptr)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0058a2c0
        ;   Label: core_weapon.cpp_CWeapon_isReadyToFire_FUN_0058a2c0
    TEST dword ptr [EAX + 0x45c],0x7fffffff ; 0058a2c4
    SETZ AL                             ; 0058a2ce
    AND EAX,0xff                        ; 0058a2d1
    RET                                 ; 0058a2d6

