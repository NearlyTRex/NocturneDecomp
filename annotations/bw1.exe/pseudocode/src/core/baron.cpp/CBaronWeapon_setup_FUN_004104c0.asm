; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_baron_cpp_CBaronWeapon_setup_FUN_004104c0(CBaronWeapon *this_ptr)
;
; Parameters:
; CBaronWeapon *   Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_skeleton.cpp_FUN_0056b520
;   core_weapon.cpp_CWeapon_setup_FUN_005ad640
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004104c0
        ;   Label: core_baron.cpp_CBaronWeapon_setup_FUN_004104c0
    PUSH EDX                            ; 004104c4
    CALL core_weapon.cpp_CWeapon_setup_FUN_005ad640 ; 004104c5
        ;   XREF to: 005ad640 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_setup_FUN_005ad640(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 004104ca
    PUSH 0x5d3512                       ; 004104cd
    CALL core_skeleton.cpp_FUN_0056b520 ; 004104d2
        ;   XREF to: 0056b520 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0056b520()
    ADD ESP,0x4                         ; 004104d7
    RET                                 ; 004104da

