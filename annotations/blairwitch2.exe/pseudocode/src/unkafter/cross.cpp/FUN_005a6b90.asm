; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_cross_cpp_FUN_005a6b90(CWeapon *param_1)
;
;
; Called Functions:
;   core_weapon.cpp_FUN_00589b50
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a6b90
        ;   Label: unkafter_cross.cpp_FUN_005a6b90
    PUSH EDX                            ; 005a6b94
    CALL core_weapon.cpp_FUN_00589b50   ; 005a6b95
        ;   XREF to: 00589b50 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_FUN_00589b50(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 005a6b9a
    RET                                 ; 005a6b9d

