; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_baron.cpp_FUN_CBaronWeapon_00413de0(CBaronWeapon * this_ptr)
;
; Parameters:
; CBaronWeapon *   Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_weapon.cpp_CWeapon_FUN_005ee030
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00413de0
        ;   Label: core_baron.cpp_FUN_CBaronWeapon_00413de0
    PUSH EDX                            ; 00413de4
    CALL core_weapon.cpp_CWeapon_FUN_005ee030 ; 00413de5
        ;   XREF to: 005ee030 (UNCONDITIONAL_CALL)  ; int core_weapon.cpp_CWeapon_FUN_005ee030(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 00413dea
    RET                                 ; 00413ded

