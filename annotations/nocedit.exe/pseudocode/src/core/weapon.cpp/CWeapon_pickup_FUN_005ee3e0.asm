; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_weapon_cpp_CWeapon_pickup_FUN_005ee3e0(CWeapon *this_ptr,CDemonActor *carrier)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   carrier
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005ee3e0
        ;   Label: core_weapon.cpp_CWeapon_pickup_FUN_005ee3e0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005ee3e4
    MOV dword ptr [EDX + 0x304],EAX     ; 005ee3e8
    RET                                 ; 005ee3ee

