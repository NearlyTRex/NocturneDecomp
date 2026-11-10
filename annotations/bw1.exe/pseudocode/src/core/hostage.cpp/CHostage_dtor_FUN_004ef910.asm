; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHostage * core_hostage_cpp_CHostage_dtor_FUN_004ef910(CHostage *this_ptr,uint flags)
;
; Parameters:
; CHostage *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CHostageTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   core_armour.cpp_FUN_0040ee30
;   core_cloth.cpp_CClothList_dtor_FUN_00441ca0
;   core_path.cpp_CPathMap_dtor_FUN_00533060
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ef910
        ;   Label: core_hostage.cpp_CHostage_dtor_FUN_004ef910
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ef911
    TEST byte ptr [ESP + 0xc],0x4       ; 004ef915
    JNZ 0x004ef97d                      ; 004ef91a
        ;   XREF to: 004ef97d (CONDITIONAL_JUMP)  ; LAB_004ef97d
    PUSH 0x0                            ; 004ef91c
    ADD EBX,0xc1d0                      ; 004ef91e
    PUSH EBX                            ; 004ef924
    CALL core_path.cpp_CPathMap_dtor_FUN_00533060 ; 004ef925
        ;   XREF to: 00533060 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_CPathMap_dtor_FUN_00533060(CPathMap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004ef92a
    PUSH 0x0                            ; 004ef92d
    SUB EAX,0x8bf4                      ; 004ef92f
    PUSH EAX                            ; 004ef934
    CALL core_armour.cpp_FUN_0040ee30   ; 004ef935
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040ee30()
    ADD ESP,0x8                         ; 004ef93a
    PUSH 0x0                            ; 004ef93d
    SUB EAX,0x93c                       ; 004ef93f
    PUSH EAX                            ; 004ef944
    CALL core_cloth.cpp_CClothList_dtor_FUN_00441ca0 ; 004ef945
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_00441ca0(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004ef94a
    PUSH 0x0                            ; 004ef94d
    SUB EAX,0x2b48                      ; 004ef94f
    PUSH EAX                            ; 004ef954
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0 ; 004ef955
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004ef95a
    PUSH 0x1                            ; 004ef95d
    LEA EBX,[EAX + 0xfffffea8]          ; 004ef95f
    PUSH EBX                            ; 004ef965
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 004ef966
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004ef96b
    MOV DL,byte ptr [ESP + 0xc]         ; 004ef96e
    MOV EBX,EAX                         ; 004ef972
    TEST DL,0x2                         ; 004ef974
    JNZ 0x004ef998                      ; 004ef977
        ;   XREF to: 004ef998 (CONDITIONAL_JUMP)  ; LAB_004ef998
    MOV EAX,EBX                         ; 004ef979
    POP EBX                             ; 004ef97b
    RET                                 ; 004ef97c
    PUSH 0x6022c0                       ; 004ef97d | g_CHostageTypeInfo
        ;   Label: LAB_004ef97d
    PUSH EBX                            ; 004ef982
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 004ef983
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 004ef988
    PUSH EAX                            ; 004ef98b
    CALL crt_unknown.c_FUN_005c0336     ; 004ef98c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 004ef991
    MOV EAX,EBX                         ; 004ef994
    POP EBX                             ; 004ef996
    RET                                 ; 004ef997
    PUSH EAX                            ; 004ef998
        ;   Label: LAB_004ef998
    CALL crt_unknown.c_FUN_005c0344     ; 004ef999
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 004ef99e
    MOV EAX,EBX                         ; 004ef9a1
    POP EBX                             ; 004ef9a3
    RET                                 ; 004ef9a4

