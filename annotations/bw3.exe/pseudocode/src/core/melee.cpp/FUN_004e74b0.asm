; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_melee_cpp_FUN_004e74b0(CWeapon *param_1,int param_2)
;
;
; Called Functions:
;   core_weapon.cpp_CWeapon_setWeaponState_FUN_0057b7f0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004e74b0
        ;   Label: core_melee.cpp_FUN_004e74b0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004e74b4
    PUSH EDX                            ; 004e74b8
    PUSH EAX                            ; 004e74b9
    MOV dword ptr [EAX + 0x5ac],0x0     ; 004e74ba
    CALL core_weapon.cpp_CWeapon_setWeaponState_FUN_0057b7f0 ; 004e74c4
        ;   XREF to: 0057b7f0 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_setWeaponState_FUN_0057b7f0(CWeapon * this_ptr, int weapon_state)
    ADD ESP,0x8                         ; 004e74c9
    RET                                 ; 004e74cc

