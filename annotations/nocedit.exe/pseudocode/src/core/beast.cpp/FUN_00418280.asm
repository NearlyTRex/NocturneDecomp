; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_beast.cpp_FUN_00418280()
;
;
; Called Functions:
;   core_enemy.cpp_CEnemy_FUN_004a9650
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00418280
        ;   Label: core_beast.cpp_FUN_00418280
    ADD EAX,0x158                       ; 00418284
    PUSH EAX                            ; 00418289
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450 ; 0041828a | void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450(CDeformableModelInstance * this_ptr)
        ;   XREF to: 005a0450 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0041828f
    MOV EDX,dword ptr [ESP + 0x4]       ; 00418292
    PUSH EDX                            ; 00418296
    CALL core_enemy.cpp_CEnemy_FUN_004a9650 ; 00418297 | void core_enemy.cpp_CEnemy_FUN_004a9650(CEnemy * this_ptr)
        ;   XREF to: 004a9650 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0041829c
    RET                                 ; 0041829f

