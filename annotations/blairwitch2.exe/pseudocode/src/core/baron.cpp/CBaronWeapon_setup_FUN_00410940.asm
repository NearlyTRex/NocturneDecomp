; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_baron_cpp_CBaronWeapon_setup_FUN_00410940(CBaronWeapon *this_ptr)
;
; Parameters:
; CBaronWeapon *   Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_skeleton.cpp_getDeformableModel_FUN_00548e80
;   core_weapon.cpp_CWeapon_setup_FUN_00589b50
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00410940
        ;   Label: core_baron.cpp_CBaronWeapon_setup_FUN_00410940
    PUSH EDX                            ; 00410944
    CALL core_weapon.cpp_CWeapon_setup_FUN_00589b50 ; 00410945
        ;   XREF to: 00589b50 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_setup_FUN_00589b50(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 0041094a
    PUSH 0x5cb5a7                       ; 0041094d
    CALL core_skeleton.cpp_getDeformableModel_FUN_00548e80 ; 00410952
        ;   XREF to: 00548e80 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_getDeformableModel_FUN_00548e80(char * model_filename)
    ADD ESP,0x4                         ; 00410957
    RET                                 ; 0041095a

