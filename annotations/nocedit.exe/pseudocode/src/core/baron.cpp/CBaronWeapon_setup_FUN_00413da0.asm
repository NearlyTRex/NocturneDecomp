; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_baron_cpp_CBaronWeapon_setup_FUN_00413da0(CBaronWeapon *this_ptr)
;
; Parameters:
; CBaronWeapon *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_baron_dfm_006150ab
;
; Called Functions:
;   core_skeleton.cpp_getDeformableModel_FUN_005a1cf0
;   core_weapon.cpp_CWeapon_setup_FUN_005edff0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00413da0
        ;   Label: core_baron.cpp_CBaronWeapon_setup_FUN_00413da0
    PUSH EDX                            ; 00413da4
    CALL core_weapon.cpp_CWeapon_setup_FUN_005edff0 ; 00413da5
        ;   XREF to: 005edff0 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_setup_FUN_005edff0(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 00413daa
    PUSH 0x6150ab                       ; 00413dad | = "baron.dfm"
    CALL core_skeleton.cpp_getDeformableModel_FUN_005a1cf0 ; 00413db2
        ;   XREF to: 005a1cf0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_getDeformableModel_FUN_005a1cf0(char * model_filename)
    ADD ESP,0x4                         ; 00413db7
    RET                                 ; 00413dba

