; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weapon_cpp_CWeapon_pickup_FUN_00554300(CWeapon *this_ptr,CDemonActor *carrier)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   carrier
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00554300
        ;   Label: core_weapon.cpp_CWeapon_pickup_FUN_00554300
    MOV EAX,dword ptr [ESP + 0x8]       ; 00554304
    MOV dword ptr [EDX + 0x2fc],EAX     ; 00554308
    RET                                 ; 0055430e

