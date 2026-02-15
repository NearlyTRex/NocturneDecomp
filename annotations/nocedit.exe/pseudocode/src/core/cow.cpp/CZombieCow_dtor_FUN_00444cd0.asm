; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CZombieCow * __cdecl core_cow_cpp_CZombieCow_dtor_FUN_00444cd0(CZombieCow *this_ptr,uint flags)
;
; Parameters:
; CZombieCow *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CZombieCowTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   core_armour.cpp_CFlame_arrdtor_FUN_00412720
;   core_armour.cpp_CVector3f_arrdtor_FUN_004126e0
;   core_armour.cpp_SFire_arrdtor_FUN_00412700
;   core_cloth.cpp_CClothList_dtor_FUN_0043bf80
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00444cd0
        ;   Label: core_cow.cpp_CZombieCow_dtor_FUN_00444cd0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00444cd1
    TEST byte ptr [ESP + 0xc],0x4       ; 00444cd5
    JNZ 0x00444d61                      ; 00444cda
        ;   XREF to: 00444d61 (CONDITIONAL_JUMP)  ; LAB_00444d61
    PUSH 0x0                            ; 00444ce0
    ADD EBX,0x33cc                      ; 00444ce2
    PUSH EBX                            ; 00444ce8
    CALL core_armour.cpp_CFlame_arrdtor_FUN_00412720 ; 00444ce9
        ;   XREF to: 00412720 (UNCONDITIONAL_CALL)  ; CFlame * core_armour.cpp_CFlame_arrdtor_FUN_00412720(CFlame * objs, uint flags)
    ADD ESP,0x8                         ; 00444cee
    PUSH 0x0                            ; 00444cf1
    SUB EAX,0x4b0                       ; 00444cf3
    PUSH EAX                            ; 00444cf8
    CALL core_armour.cpp_SFire_arrdtor_FUN_00412700 ; 00444cf9
        ;   XREF to: 00412700 (UNCONDITIONAL_CALL)  ; SFire * core_armour.cpp_SFire_arrdtor_FUN_00412700(SFire * objs, uint flags)
    ADD ESP,0x8                         ; 00444cfe
    PUSH 0x0                            ; 00444d01
    SUB EAX,0x20c                       ; 00444d03
    PUSH EAX                            ; 00444d08
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_004126e0 ; 00444d09
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_004126e0(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 00444d0e
    PUSH 0x0                            ; 00444d11
    SUB EAX,0xb4                        ; 00444d13
    PUSH EAX                            ; 00444d18
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_004126e0 ; 00444d19
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_004126e0(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 00444d1e
    PUSH 0x0                            ; 00444d21
    SUB EAX,0x1c8                       ; 00444d23
    PUSH EAX                            ; 00444d28
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043bf80 ; 00444d29
        ;   XREF to: 0043bf80 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043bf80(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00444d2e
    PUSH 0x0                            ; 00444d31
    SUB EAX,0x293c                      ; 00444d33
    PUSH EAX                            ; 00444d38
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 ; 00444d39
        ;   XREF to: 0059de40 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00444d3e
    PUSH 0x1                            ; 00444d41
    LEA EBX,[EAX + 0xfffffea8]          ; 00444d43
    PUSH EBX                            ; 00444d49
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 00444d4a
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00444d4f
    MOV DL,byte ptr [ESP + 0xc]         ; 00444d52
    MOV EBX,EAX                         ; 00444d56
    TEST DL,0x2                         ; 00444d58
    JNZ 0x00444d7c                      ; 00444d5b
        ;   XREF to: 00444d7c (CONDITIONAL_JUMP)  ; LAB_00444d7c
    MOV EAX,EBX                         ; 00444d5d
    POP EBX                             ; 00444d5f
    RET                                 ; 00444d60
    PUSH 0x65c220                       ; 00444d61 | g_CZombieCowTypeInfo
        ;   Label: LAB_00444d61
    PUSH EBX                            ; 00444d66
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 00444d67
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00444d6c
    PUSH EAX                            ; 00444d6f
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 00444d70
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00444d75
    MOV EAX,EBX                         ; 00444d78
    POP EBX                             ; 00444d7a
    RET                                 ; 00444d7b
    PUSH EAX                            ; 00444d7c
        ;   Label: LAB_00444d7c
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 00444d7d
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 00444d82
    MOV EAX,EBX                         ; 00444d85
    POP EBX                             ; 00444d87
    RET                                 ; 00444d88

