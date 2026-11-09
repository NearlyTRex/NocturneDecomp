; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_weapon_cpp_CWeapon_getCarrier_FUN_005adb10(CWeapon *this_ptr)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005adb10
        ;   Label: core_weapon.cpp_CWeapon_getCarrier_FUN_005adb10
    MOV EAX,dword ptr [EAX + 0x304]     ; 005adb14
    RET                                 ; 005adb1a

