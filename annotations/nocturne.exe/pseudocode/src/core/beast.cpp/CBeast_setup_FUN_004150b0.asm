; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_beast_cpp_CBeast_setup_FUN_004150b0(CBeast *this_ptr)
;
; Parameters:
; CBeast *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_004796b0
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004150b0
        ;   Label: core_beast.cpp_CBeast_setup_FUN_004150b0
    ADD EAX,0x150                       ; 004150b4
    PUSH EAX                            ; 004150b9
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0 ; 004150ba
        ;   XREF to: 0051dcd0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004150bf
    MOV EDX,dword ptr [ESP + 0x4]       ; 004150c2
    PUSH EDX                            ; 004150c6
    CALL core_enemy.cpp_CEnemy_setup_FUN_004796b0 ; 004150c7
        ;   XREF to: 004796b0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_004796b0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004150cc
    RET                                 ; 004150cf

