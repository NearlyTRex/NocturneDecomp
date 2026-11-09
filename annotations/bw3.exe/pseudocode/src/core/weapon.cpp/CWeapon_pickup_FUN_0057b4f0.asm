; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weapon_cpp_CWeapon_pickup_FUN_0057b4f0(CWeapon *this_ptr,CDemonActor *carrier)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   carrier
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0057b4f0
        ;   Label: core_weapon.cpp_CWeapon_pickup_FUN_0057b4f0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0057b4f4
    MOV dword ptr [EDX + 0x304],EAX     ; 0057b4f8
    RET                                 ; 0057b4fe

