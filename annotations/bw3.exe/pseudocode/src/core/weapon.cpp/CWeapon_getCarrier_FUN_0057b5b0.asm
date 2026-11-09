; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_weapon_cpp_CWeapon_getCarrier_FUN_0057b5b0(CWeapon *this_ptr)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0057b5b0
        ;   Label: core_weapon.cpp_CWeapon_getCarrier_FUN_0057b5b0
    MOV EAX,dword ptr [EAX + 0x304]     ; 0057b5b4
    RET                                 ; 0057b5ba

