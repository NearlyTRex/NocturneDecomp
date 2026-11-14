; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weapon_cpp_CWeapon_pickup_FUN_00589f00(CWeapon *this_ptr,CDemonActor *carrier)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   carrier
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00589f00
        ;   Label: core_weapon.cpp_CWeapon_pickup_FUN_00589f00
    MOV EAX,dword ptr [ESP + 0x8]       ; 00589f04
    MOV dword ptr [EDX + 0x460],EAX     ; 00589f08
    RET                                 ; 00589f0e

