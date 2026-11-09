; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_armour_cpp_FUN_0040eee0(CEnemy *param_1)
;
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_00487eb0
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0040eee0
        ;   Label: core_armour.cpp_FUN_0040eee0
    PUSH EDX                            ; 0040eee4
    CALL core_enemy.cpp_CEnemy_setup_FUN_00487eb0 ; 0040eee5
        ;   XREF to: 00487eb0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_00487eb0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0040eeea
    MOV EAX,dword ptr [ESP + 0x4]       ; 0040eeed
    ADD EAX,0x2b4                       ; 0040eef1
    PUSH EAX                            ; 0040eef6
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480 ; 0040eef7
        ;   XREF to: 00547480 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0040eefc
    RET                                 ; 0040eeff

