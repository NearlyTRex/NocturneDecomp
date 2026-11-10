; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_beast_cpp_CBeast_setup_FUN_00414750(CBeast *this_ptr)
;
; Parameters:
; CBeast *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_004a0510
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00414750
        ;   Label: core_beast.cpp_CBeast_setup_FUN_00414750
    ADD EAX,0x158                       ; 00414754
    PUSH EAX                            ; 00414759
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20 ; 0041475a
        ;   XREF to: 00569b20 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0041475f
    MOV EDX,dword ptr [ESP + 0x4]       ; 00414762
    PUSH EDX                            ; 00414766
    CALL core_enemy.cpp_CEnemy_setup_FUN_004a0510 ; 00414767
        ;   XREF to: 004a0510 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_004a0510(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0041476c
    RET                                 ; 0041476f

