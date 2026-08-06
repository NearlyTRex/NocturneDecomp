; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CZombieCow * __cdecl core_cow_cpp_CZombieCow_dtor_FUN_0043c6f0(CZombieCow *this_ptr,uint flags)
;
; Parameters:
; CZombieCow *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CZombieCowTypeInfo_0059b9f0
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   core_armour.cpp_CFlame_arrdtor_FUN_0040fe50
;   core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10
;   core_armour.cpp_SFire_arrdtor_FUN_0040fe30
;   core_cloth.cpp_CClothList_dtor_FUN_00438250
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_memory.c_operator_delete_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043c6f0
        ;   Label: core_cow.cpp_CZombieCow_dtor_FUN_0043c6f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043c6f1
    TEST byte ptr [ESP + 0xc],0x4       ; 0043c6f5
    JNZ 0x0043c781                      ; 0043c6fa
        ;   XREF to: 0043c781 (CONDITIONAL_JUMP)  ; LAB_0043c781
    PUSH 0x0                            ; 0043c700
    ADD EBX,0x33c4                      ; 0043c702
    PUSH EBX                            ; 0043c708
    CALL core_armour.cpp_CFlame_arrdtor_FUN_0040fe50 ; 0043c709
        ;   XREF to: 0040fe50 (UNCONDITIONAL_CALL)  ; CFlame * core_armour.cpp_CFlame_arrdtor_FUN_0040fe50(CFlame * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0043c70e
    PUSH 0x0                            ; 0043c711
    SUB EAX,0x4b0                       ; 0043c713
    PUSH EAX                            ; 0043c718
    CALL core_armour.cpp_SFire_arrdtor_FUN_0040fe30 ; 0043c719
        ;   XREF to: 0040fe30 (UNCONDITIONAL_CALL)  ; SFire * core_armour.cpp_SFire_arrdtor_FUN_0040fe30(SFire * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0043c71e
    PUSH 0x0                            ; 0043c721
    SUB EAX,0x20c                       ; 0043c723
    PUSH EAX                            ; 0043c728
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10 ; 0043c729
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10(CVector3f * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0043c72e
    PUSH 0x0                            ; 0043c731
    SUB EAX,0xb4                        ; 0043c733
    PUSH EAX                            ; 0043c738
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10 ; 0043c739
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10(CVector3f * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0043c73e
    PUSH 0x0                            ; 0043c741
    SUB EAX,0x1c8                       ; 0043c743
    PUSH EAX                            ; 0043c748
    CALL core_cloth.cpp_CClothList_dtor_FUN_00438250 ; 0043c749
        ;   XREF to: 00438250 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_00438250(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0043c74e
    PUSH 0x0                            ; 0043c751
    SUB EAX,0x293c                      ; 0043c753
    PUSH EAX                            ; 0043c758
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0 ; 0043c759
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0043c75e
    PUSH 0x1                            ; 0043c761
    LEA EBX,[EAX + 0xfffffeb0]          ; 0043c763
    PUSH EBX                            ; 0043c769
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 0043c76a
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0043c76f
    MOV DL,byte ptr [ESP + 0xc]         ; 0043c772
    MOV EBX,EAX                         ; 0043c776
    TEST DL,0x2                         ; 0043c778
    JNZ 0x0043c79c                      ; 0043c77b
        ;   XREF to: 0043c79c (CONDITIONAL_JUMP)  ; LAB_0043c79c
    MOV EAX,EBX                         ; 0043c77d
    POP EBX                             ; 0043c77f
    RET                                 ; 0043c780
    PUSH 0x59b9f0                       ; 0043c781 | g_CZombieCowTypeInfo_0059b9f0
        ;   Label: LAB_0043c781
    PUSH EBX                            ; 0043c786
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 0043c787
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0043c78c
    PUSH EAX                            ; 0043c78f
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 0043c790
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 0043c795
    MOV EAX,EBX                         ; 0043c798
    POP EBX                             ; 0043c79a
    RET                                 ; 0043c79b
    PUSH EAX                            ; 0043c79c
        ;   Label: LAB_0043c79c
    CALL crt_memory.c_operator_delete_FUN_00564494 ; 0043c79d
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; void crt_memory.c_operator_delete_FUN_00564494(void * ptr)
    ADD ESP,0x4                         ; 0043c7a2
    MOV EAX,EBX                         ; 0043c7a5
    POP EBX                             ; 0043c7a7
    RET                                 ; 0043c7a8

