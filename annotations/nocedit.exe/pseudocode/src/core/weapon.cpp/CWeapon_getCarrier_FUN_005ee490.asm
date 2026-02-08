; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActor * __cdecl core_weapon_cpp_CWeapon_getCarrier_FUN_005ee490(CWeapon *this_ptr)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005ee490
        ;   Label: core_weapon.cpp_CWeapon_getCarrier_FUN_005ee490
    MOV EAX,dword ptr [EAX + 0x304]     ; 005ee494
    RET                                 ; 005ee49a

