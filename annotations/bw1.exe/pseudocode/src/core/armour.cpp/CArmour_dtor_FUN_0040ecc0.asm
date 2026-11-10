; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CArmour * core_armour_cpp_CArmour_dtor_FUN_0040ecc0(CArmour *this_ptr,uint flags)
;
; Parameters:
; CArmour *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CArmourTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   core_armour.cpp_FUN_0040ee30
;   core_cloth.cpp_CClothList_dtor_FUN_00441ca0
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040ecc0
        ;   Label: core_armour.cpp_CArmour_dtor_FUN_0040ecc0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040ecc1
    TEST byte ptr [ESP + 0xc],0x4       ; 0040ecc5
    JNZ 0x0040ed1d                      ; 0040ecca
        ;   XREF to: 0040ed1d (CONDITIONAL_JUMP)  ; LAB_0040ed1d
    PUSH 0x0                            ; 0040eccc
    ADD EBX,0x35dc                      ; 0040ecce
    PUSH EBX                            ; 0040ecd4
    CALL core_armour.cpp_FUN_0040ee30   ; 0040ecd5
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040ee30()
    ADD ESP,0x8                         ; 0040ecda
    PUSH 0x0                            ; 0040ecdd
    SUB EAX,0x93c                       ; 0040ecdf
    PUSH EAX                            ; 0040ece4
    CALL core_cloth.cpp_CClothList_dtor_FUN_00441ca0 ; 0040ece5
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_00441ca0(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0040ecea
    PUSH 0x0                            ; 0040eced
    SUB EAX,0x2b48                      ; 0040ecef
    PUSH EAX                            ; 0040ecf4
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0 ; 0040ecf5
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0040ecfa
    PUSH 0x1                            ; 0040ecfd
    LEA EBX,[EAX + 0xfffffea8]          ; 0040ecff
    PUSH EBX                            ; 0040ed05
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 0040ed06
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0040ed0b
    MOV DL,byte ptr [ESP + 0xc]         ; 0040ed0e
    MOV EBX,EAX                         ; 0040ed12
    TEST DL,0x2                         ; 0040ed14
    JNZ 0x0040ed38                      ; 0040ed17
        ;   XREF to: 0040ed38 (CONDITIONAL_JUMP)  ; LAB_0040ed38
    MOV EAX,EBX                         ; 0040ed19
    POP EBX                             ; 0040ed1b
    RET                                 ; 0040ed1c
    PUSH 0x5fb920                       ; 0040ed1d | g_CArmourTypeInfo
        ;   Label: LAB_0040ed1d
    PUSH EBX                            ; 0040ed22
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 0040ed23
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 0040ed28
    PUSH EAX                            ; 0040ed2b
    CALL crt_unknown.c_FUN_005c0336     ; 0040ed2c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 0040ed31
    MOV EAX,EBX                         ; 0040ed34
    POP EBX                             ; 0040ed36
    RET                                 ; 0040ed37
    PUSH EAX                            ; 0040ed38
        ;   Label: LAB_0040ed38
    CALL crt_unknown.c_FUN_005c0344     ; 0040ed39
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 0040ed3e
    MOV EAX,EBX                         ; 0040ed41
    POP EBX                             ; 0040ed43
    RET                                 ; 0040ed44

