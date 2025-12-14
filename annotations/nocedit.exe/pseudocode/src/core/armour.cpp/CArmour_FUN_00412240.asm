; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_armour.cpp_CArmour_FUN_00412240(CArmour * this_ptr)
;
; Parameters:
; CArmour *        Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_enemy.cpp_CEnemy_FUN_004a9650
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00412240
        ;   Label: core_armour.cpp_CArmour_FUN_00412240
    PUSH EDX                            ; 00412244
    CALL core_enemy.cpp_CEnemy_FUN_004a9650 ; 00412245
        ;   XREF to: 004a9650 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_FUN_004a9650(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0041224a
    MOV EAX,dword ptr [ESP + 0x4]       ; 0041224d
    ADD EAX,0x158                       ; 00412251
    PUSH EAX                            ; 00412256
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450 ; 00412257
        ;   XREF to: 005a0450 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0041225c
    RET                                 ; 0041225f

