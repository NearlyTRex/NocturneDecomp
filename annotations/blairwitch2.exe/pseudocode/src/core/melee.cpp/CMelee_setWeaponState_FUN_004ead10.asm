; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_melee_cpp_CMelee_setWeaponState_FUN_004ead10(CMelee *this_ptr,int weapon_state)
;
; Parameters:
; CMelee *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   weapon_state
;
; Called Functions:
;   core_weapon.cpp_CWeapon_setWeaponState_FUN_0058a200
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ead10
        ;   Label: core_melee.cpp_CMelee_setWeaponState_FUN_004ead10
    MOV EDX,dword ptr [ESP + 0x8]       ; 004ead14
    PUSH EDX                            ; 004ead18
    PUSH EAX                            ; 004ead19
    MOV dword ptr [EAX + 0x6ec],0x0     ; 004ead1a
    CALL core_weapon.cpp_CWeapon_setWeaponState_FUN_0058a200 ; 004ead24
        ;   XREF to: 0058a200 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_setWeaponState_FUN_0058a200(CWeapon * this_ptr, int weapon_state)
    ADD ESP,0x8                         ; 004ead29
    RET                                 ; 004ead2c

