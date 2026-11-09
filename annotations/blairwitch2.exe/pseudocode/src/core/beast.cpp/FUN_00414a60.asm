; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_beast_cpp_FUN_00414a60(CEnemy *param_1)
;
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_00487eb0
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00414a60
        ;   Label: core_beast.cpp_FUN_00414a60
    ADD EAX,0x2b4                       ; 00414a64
    PUSH EAX                            ; 00414a69
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480 ; 00414a6a
        ;   XREF to: 00547480 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00414a6f
    MOV EDX,dword ptr [ESP + 0x4]       ; 00414a72
    PUSH EDX                            ; 00414a76
    CALL core_enemy.cpp_CEnemy_setup_FUN_00487eb0 ; 00414a77
        ;   XREF to: 00487eb0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_00487eb0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00414a7c
    RET                                 ; 00414a7f

