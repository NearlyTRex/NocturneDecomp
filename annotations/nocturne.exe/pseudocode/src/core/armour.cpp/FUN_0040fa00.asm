; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_armour_cpp_FUN_0040fa00(int param_1)
;
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_004796b0
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0040fa00
        ;   Label: core_armour.cpp_FUN_0040fa00
    PUSH EDX                            ; 0040fa04
    CALL core_enemy.cpp_CEnemy_setup_FUN_004796b0 ; 0040fa05
        ;   XREF to: 004796b0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_setup_FUN_004796b0()
    ADD ESP,0x4                         ; 0040fa0a
    MOV EAX,dword ptr [ESP + 0x4]       ; 0040fa0d
    ADD EAX,0x150                       ; 0040fa11
    PUSH EAX                            ; 0040fa16
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0 ; 0040fa17
        ;   XREF to: 0051dcd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0()
    ADD ESP,0x4                         ; 0040fa1c
    RET                                 ; 0040fa1f

