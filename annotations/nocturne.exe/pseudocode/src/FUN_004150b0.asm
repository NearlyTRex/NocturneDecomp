; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004150b0(int param_1)
;
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_004796b0
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004150b0
        ;   Label: FUN_004150b0
    ADD EAX,0x150                       ; 004150b4
    PUSH EAX                            ; 004150b9
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0 ; 004150ba
        ;   XREF to: 0051dcd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0()
    ADD ESP,0x4                         ; 004150bf
    MOV EDX,dword ptr [ESP + 0x4]       ; 004150c2
    PUSH EDX                            ; 004150c6
    CALL core_enemy.cpp_CEnemy_setup_FUN_004796b0 ; 004150c7
        ;   XREF to: 004796b0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_setup_FUN_004796b0()
    ADD ESP,0x4                         ; 004150cc
    RET                                 ; 004150cf

