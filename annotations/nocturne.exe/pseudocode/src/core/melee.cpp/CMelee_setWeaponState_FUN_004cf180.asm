; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_melee_cpp_CMelee_setWeaponState_FUN_004cf180(int param_1,undefined4 param_2)
;
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
        ;   XREF to: 00554560 (UNCONDITIONAL_CALL)  ; undefined core_weapon.cpp_CWeapon_setWeaponState_FUN_00554560()
    ADD ESP,0x8                         ; 004cf199
    RET                                 ; 004cf19c

