; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CZombieDog * core_dog_cpp_CZombieDog_dtor_FUN_0045ec60(CZombieDog *this_ptr,uint flags)
;
; Parameters:
; CZombieDog *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CZombieDogTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   core_armour.cpp_FUN_0040f2b0
;   core_cloth.cpp_CClothList_dtor_FUN_005b1480
;   core_muzzle.cpp_FUN_0059df70
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045ec60
        ;   Label: core_dog.cpp_CZombieDog_dtor_FUN_0045ec60
    MOV EBX,dword ptr [ESP + 0x8]       ; 0045ec61
    TEST byte ptr [ESP + 0xc],0x4       ; 0045ec65
    JNZ 0x0045eccd                      ; 0045ec6a
        ;   XREF to: 0045eccd (CONDITIONAL_JUMP)  ; LAB_0045eccd
    PUSH 0x0                            ; 0045ec6c
    ADD EBX,0x3a20                      ; 0045ec6e
    PUSH EBX                            ; 0045ec74
    CALL core_armour.cpp_FUN_0040f2b0   ; 0045ec75
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040f2b0()
    ADD ESP,0x8                         ; 0045ec7a
    PUSH 0x0                            ; 0045ec7d
    SUB EAX,0x9c8                       ; 0045ec7f
    PUSH EAX                            ; 0045ec84
    CALL core_muzzle.cpp_FUN_0059df70   ; 0045ec85
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059df70()
    ADD ESP,0x8                         ; 0045ec8a
    PUSH 0x0                            ; 0045ec8d
    SUB EAX,0x34c                       ; 0045ec8f
    PUSH EAX                            ; 0045ec94
    CALL core_cloth.cpp_CClothList_dtor_FUN_005b1480 ; 0045ec95
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_005b1480(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0045ec9a
    PUSH 0x0                            ; 0045ec9d
    SUB EAX,0x2a58                      ; 0045ec9f
    PUSH EAX                            ; 0045eca4
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50 ; 0045eca5
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0045ecaa
    PUSH 0x1                            ; 0045ecad
    LEA EBX,[EAX + 0xfffffd4c]          ; 0045ecaf
    PUSH EBX                            ; 0045ecb5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 0045ecb6
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0045ecbb
    MOV DL,byte ptr [ESP + 0xc]         ; 0045ecbe
    MOV EBX,EAX                         ; 0045ecc2
    TEST DL,0x2                         ; 0045ecc4
    JNZ 0x0045ece8                      ; 0045ecc7
        ;   XREF to: 0045ece8 (CONDITIONAL_JUMP)  ; LAB_0045ece8
    MOV EAX,EBX                         ; 0045ecc9
    POP EBX                             ; 0045eccb
    RET                                 ; 0045eccc
    PUSH 0x5f54a0                       ; 0045eccd | g_CZombieDogTypeInfo
        ;   Label: LAB_0045eccd
    PUSH EBX                            ; 0045ecd2
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 0045ecd3
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 0045ecd8
    PUSH EAX                            ; 0045ecdb
    CALL crt_unknown.c_FUN_005b7fce     ; 0045ecdc
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 0045ece1
    MOV EAX,EBX                         ; 0045ece4
    POP EBX                             ; 0045ece6
    RET                                 ; 0045ece7
    PUSH EAX                            ; 0045ece8
        ;   Label: LAB_0045ece8
    CALL crt_unknown.c_FUN_005b7fdc     ; 0045ece9
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 0045ecee
    MOV EAX,EBX                         ; 0045ecf1
    POP EBX                             ; 0045ecf3
    RET                                 ; 0045ecf4

