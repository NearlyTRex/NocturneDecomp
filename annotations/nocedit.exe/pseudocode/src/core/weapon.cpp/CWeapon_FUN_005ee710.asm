; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_weapon_cpp_CWeapon_FUN_005ee710(CWeapon *this_ptr)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005ee710
        ;   Label: core_weapon.cpp_CWeapon_FUN_005ee710
    TEST dword ptr [EAX + 0x300],0x7fffffff ; 005ee714
    SETZ AL                             ; 005ee71e
    AND EAX,0xff                        ; 005ee721
    RET                                 ; 005ee726

