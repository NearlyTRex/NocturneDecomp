; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cross_cpp_CCross_setup_FUN_005a6b90(CCross *this_ptr)
;
; Parameters:
; CCross *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_weapon.cpp_CWeapon_setup_FUN_00589b50
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a6b90
        ;   Label: core_cross.cpp_CCross_setup_FUN_005a6b90
    PUSH EDX                            ; 005a6b94
    CALL core_weapon.cpp_CWeapon_setup_FUN_00589b50 ; 005a6b95
        ;   XREF to: 00589b50 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_setup_FUN_00589b50(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 005a6b9a
    RET                                 ; 005a6b9d

