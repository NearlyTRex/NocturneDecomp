; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_weapon_cpp_CWeapon_getCarrier_FUN_00589fc0(CWeapon *this_ptr)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00589fc0
        ;   Label: core_weapon.cpp_CWeapon_getCarrier_FUN_00589fc0
    MOV EAX,dword ptr [EAX + 0x460]     ; 00589fc4
    RET                                 ; 00589fca

