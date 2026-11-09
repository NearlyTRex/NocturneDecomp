; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CEnemy * core_armour_cpp_CEnemy_dtor_FUN_0040ed50(CEnemy *this_ptr,uint flags)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CEnemyTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   core_cloth.cpp_FUN_00441ca0
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;   unkafter_armour.cpp_FUN_0040ee30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040ed50
        ;   Label: core_armour.cpp_CEnemy_dtor_FUN_0040ed50
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040ed51
    TEST byte ptr [ESP + 0xc],0x4       ; 0040ed55
    JNZ 0x0040edad                      ; 0040ed5a
        ;   XREF to: 0040edad (CONDITIONAL_JUMP)  ; LAB_0040edad
    PUSH 0x0                            ; 0040ed5c
    ADD EBX,0x35dc                      ; 0040ed5e
    PUSH EBX                            ; 0040ed64
    CALL unkafter_armour.cpp_FUN_0040ee30 ; 0040ed65
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined unkafter_armour.cpp_FUN_0040ee30()
    ADD ESP,0x8                         ; 0040ed6a
    PUSH 0x0                            ; 0040ed6d
    SUB EAX,0x93c                       ; 0040ed6f
    PUSH EAX                            ; 0040ed74
    CALL core_cloth.cpp_FUN_00441ca0    ; 0040ed75
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_FUN_00441ca0(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0040ed7a
    PUSH 0x0                            ; 0040ed7d
    SUB EAX,0x2b48                      ; 0040ed7f
    PUSH EAX                            ; 0040ed84
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0 ; 0040ed85
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0040ed8a
    PUSH 0x1                            ; 0040ed8d
    LEA EBX,[EAX + 0xfffffea8]          ; 0040ed8f
    PUSH EBX                            ; 0040ed95
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 0040ed96
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0040ed9b
    MOV DL,byte ptr [ESP + 0xc]         ; 0040ed9e
    MOV EBX,EAX                         ; 0040eda2
    TEST DL,0x2                         ; 0040eda4
    JNZ 0x0040edc8                      ; 0040eda7
        ;   XREF to: 0040edc8 (CONDITIONAL_JUMP)  ; LAB_0040edc8
    MOV EAX,EBX                         ; 0040eda9
    POP EBX                             ; 0040edab
    RET                                 ; 0040edac
    PUSH 0x5fb940                       ; 0040edad | g_CEnemyTypeInfo
        ;   Label: LAB_0040edad
    PUSH EBX                            ; 0040edb2
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 0040edb3
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 0040edb8
    PUSH EAX                            ; 0040edbb
    CALL crt_unknown.c_FUN_005c0336     ; 0040edbc
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 0040edc1
    MOV EAX,EBX                         ; 0040edc4
    POP EBX                             ; 0040edc6
    RET                                 ; 0040edc7
    PUSH EAX                            ; 0040edc8
        ;   Label: LAB_0040edc8
    CALL crt_unknown.c_FUN_005c0344     ; 0040edc9
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 0040edce
    MOV EAX,EBX                         ; 0040edd1
    POP EBX                             ; 0040edd3
    RET                                 ; 0040edd4

