; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_weapon_cpp_CWeapon_isReadyToFire_FUN_005ade10(CWeapon *this_ptr)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005ade10
        ;   Label: core_weapon.cpp_CWeapon_isReadyToFire_FUN_005ade10
    TEST dword ptr [EAX + 0x300],0x7fffffff ; 005ade14
    SETZ AL                             ; 005ade1e
    AND EAX,0xff                        ; 005ade21
    RET                                 ; 005ade26

