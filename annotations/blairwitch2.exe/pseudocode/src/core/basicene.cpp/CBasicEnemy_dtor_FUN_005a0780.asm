; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_basicene_cpp_CBasicEnemy_dtor_FUN_005a0780(CBasicEnemy *this_ptr)
;
; Parameters:
; CBasicEnemy *    Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   core_armour.cpp_FUN_0040f2b0
;   core_cloth.cpp_CClothList_dtor_FUN_005b1480
;   core_muzzle.cpp_FUN_0059df70
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a0780
        ;   Label: core_basicene.cpp_CBasicEnemy_dtor_FUN_005a0780
    PUSH 0x0                            ; 005a0784
    ADD EAX,0x3a20                      ; 005a0786
    PUSH EAX                            ; 005a078b
    CALL core_armour.cpp_FUN_0040f2b0   ; 005a078c
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040f2b0()
    ADD ESP,0x8                         ; 005a0791
    PUSH 0x0                            ; 005a0794
    SUB EAX,0x9c8                       ; 005a0796
    PUSH EAX                            ; 005a079b
    CALL core_muzzle.cpp_FUN_0059df70   ; 005a079c
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059df70()
    ADD ESP,0x8                         ; 005a07a1
    PUSH 0x0                            ; 005a07a4
    SUB EAX,0x34c                       ; 005a07a6
    PUSH EAX                            ; 005a07ab
    CALL core_cloth.cpp_CClothList_dtor_FUN_005b1480 ; 005a07ac
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_005b1480(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005a07b1
    PUSH 0x0                            ; 005a07b4
    SUB EAX,0x2a58                      ; 005a07b6
    PUSH EAX                            ; 005a07bb
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50 ; 005a07bc
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005a07c1
    PUSH 0x1                            ; 005a07c4
    SUB EAX,0x2b4                       ; 005a07c6
    PUSH EAX                            ; 005a07cb
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 005a07cc
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005a07d1
    RET                                 ; 005a07d4

