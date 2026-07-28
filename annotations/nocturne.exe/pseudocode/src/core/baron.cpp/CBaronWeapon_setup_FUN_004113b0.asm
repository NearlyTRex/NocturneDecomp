; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_baron_cpp_CBaronWeapon_setup_FUN_004113b0(CWeapon *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_baron_dfm_005786c8
;
; Called Functions:
;   core_skeleton.cpp_getDeformableModel_FUN_0051f570
;   core_weapon.cpp_CWeapon_setup_FUN_00553f10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004113b0
        ;   Label: core_baron.cpp_CBaronWeapon_setup_FUN_004113b0
    PUSH EDX                            ; 004113b4
    CALL core_weapon.cpp_CWeapon_setup_FUN_00553f10 ; 004113b5
        ;   XREF to: 00553f10 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_setup_FUN_00553f10(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 004113ba
    PUSH 0x5786c8                       ; 004113bd | = "baron.dfm"
    CALL core_skeleton.cpp_getDeformableModel_FUN_0051f570 ; 004113c2
        ;   XREF to: 0051f570 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_getDeformableModel_FUN_0051f570(char * model_filename)
    ADD ESP,0x4                         ; 004113c7
    RET                                 ; 004113ca

