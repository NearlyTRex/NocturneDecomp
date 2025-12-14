; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_larva.cpp_FUN_00503020()
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_enemy.cpp_CEnemy_FUN_004a9650
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00503020
        ;   Label: core_larva.cpp_FUN_00503020
    PUSH ESI                            ; 00503021
    SUB ESP,0x4                         ; 00503022
    MOV ESI,dword ptr [ESP + 0x10]      ; 00503025
    LEA EBX,[ESI + 0x158]               ; 00503029
    PUSH EBX                            ; 0050302f
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450 ; 00503030
        ;   XREF to: 005a0450 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00503035
    PUSH EBX                            ; 00503038
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 00503039
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0050303e
    PUSH ESI                            ; 00503041
    MOV dword ptr [ESI + 0xbebc],0x0    ; 00503042
    CALL core_enemy.cpp_CEnemy_FUN_004a9650 ; 0050304c
        ;   XREF to: 004a9650 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_FUN_004a9650(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00503051
    PUSH 0x41f00000                     ; 00503054
    PUSH 0x0                            ; 00503059
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 0050305b
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)

