; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_melee_cpp_CMelee_setWeaponState_FUN_00509a70(CMelee *this_ptr,int weapon_state)
;
; Parameters:
; CMelee *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   weapon_state
;
; Called Functions:
;   core_weapon.cpp_CWeapon_setWeaponState_FUN_005add50
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00509a70
        ;   Label: core_melee.cpp_CMelee_setWeaponState_FUN_00509a70
    MOV EDX,dword ptr [ESP + 0x8]       ; 00509a74
    PUSH EDX                            ; 00509a78
    PUSH EAX                            ; 00509a79
    MOV dword ptr [EAX + 0x590],0x0     ; 00509a7a
    CALL core_weapon.cpp_CWeapon_setWeaponState_FUN_005add50 ; 00509a84
        ;   XREF to: 005add50 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_setWeaponState_FUN_005add50(CWeapon * this_ptr, int weapon_state)
    ADD ESP,0x8                         ; 00509a89
    RET                                 ; 00509a8c

