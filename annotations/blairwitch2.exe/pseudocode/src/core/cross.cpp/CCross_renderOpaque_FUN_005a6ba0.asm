; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_cross_cpp_CCross_renderOpaque_FUN_005a6ba0(CCross *this_ptr)
;
; Parameters:
; CCross *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_weapon.cpp_CWeapon_renderOpaque_FUN_00589b90
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a6ba0
        ;   Label: core_cross.cpp_CCross_renderOpaque_FUN_005a6ba0
    PUSH EDX                            ; 005a6ba4
    CALL core_weapon.cpp_CWeapon_renderOpaque_FUN_00589b90 ; 005a6ba5
        ;   XREF to: 00589b90 (UNCONDITIONAL_CALL)  ; int core_weapon.cpp_CWeapon_renderOpaque_FUN_00589b90(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 005a6baa
    TEST EAX,EAX                        ; 005a6bad
    SETNZ AL                            ; 005a6baf
    AND EAX,0xff                        ; 005a6bb2
    RET                                 ; 005a6bb7

