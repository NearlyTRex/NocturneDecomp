; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weapon_cpp_CWeapon_pickup_FUN_005ada50(CWeapon *this_ptr,CDemonActor *carrier)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   carrier
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005ada50
        ;   Label: core_weapon.cpp_CWeapon_pickup_FUN_005ada50
    MOV EAX,dword ptr [ESP + 0x8]       ; 005ada54
    MOV dword ptr [EDX + 0x304],EAX     ; 005ada58
    RET                                 ; 005ada5e

