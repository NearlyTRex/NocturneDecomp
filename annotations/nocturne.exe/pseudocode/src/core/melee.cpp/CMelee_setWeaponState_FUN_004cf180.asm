; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_melee_cpp_CMelee_setWeaponState_FUN_004cf180(CMelee *this_ptr,int weapon_state)
;
; Parameters:
; CMelee *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   weapon_state
;
; Called Functions:
;   core_weapon.cpp_CWeapon_setWeaponState_FUN_00554560
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004cf180
        ;   Label: core_melee.cpp_CMelee_setWeaponState_FUN_004cf180
    MOV EDX,dword ptr [ESP + 0x8]       ; 004cf184
    PUSH EDX                            ; 004cf188
    PUSH EAX                            ; 004cf189
    MOV dword ptr [EAX + 0x588],0x0     ; 004cf18a
    CALL core_weapon.cpp_CWeapon_setWeaponState_FUN_00554560 ; 004cf194
        ;   XREF to: 00554560 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_setWeaponState_FUN_00554560(CWeapon * this_ptr, int weapon_state)
    ADD ESP,0x8                         ; 004cf199
    RET                                 ; 004cf19c

