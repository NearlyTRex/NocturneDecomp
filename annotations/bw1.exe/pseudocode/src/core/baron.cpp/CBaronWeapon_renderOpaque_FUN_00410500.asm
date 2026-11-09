; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_baron_cpp_CBaronWeapon_renderOpaque_FUN_00410500(CBaronWeapon *this_ptr)
;
; Parameters:
; CBaronWeapon *   Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_weapon.cpp_FUN_005ad680
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00410500
        ;   Label: core_baron.cpp_CBaronWeapon_renderOpaque_FUN_00410500
    PUSH EDX                            ; 00410504
    CALL core_weapon.cpp_FUN_005ad680   ; 00410505
        ;   XREF to: 005ad680 (UNCONDITIONAL_CALL)  ; int core_weapon.cpp_FUN_005ad680(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 0041050a
    RET                                 ; 0041050d

