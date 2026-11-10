; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_armour_cpp_CArmour_setup_FUN_0040ea80(CArmour *this_ptr)
;
; Parameters:
; CArmour *        Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_004a0510
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0040ea80
        ;   Label: core_armour.cpp_CArmour_setup_FUN_0040ea80
    PUSH EDX                            ; 0040ea84
    CALL core_enemy.cpp_CEnemy_setup_FUN_004a0510 ; 0040ea85
        ;   XREF to: 004a0510 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_004a0510(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0040ea8a
    MOV EAX,dword ptr [ESP + 0x4]       ; 0040ea8d
    ADD EAX,0x158                       ; 0040ea91
    PUSH EAX                            ; 0040ea96
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20 ; 0040ea97
        ;   XREF to: 00569b20 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0040ea9c
    RET                                 ; 0040ea9f

