; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBatman * __cdecl core_batman_cpp_CBatman_dtor_FUN_00417d60(CBatman *this_ptr,uint flags)
;
; Parameters:
; CBatman *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CBatmanTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   core_armour.cpp_CFlame_arrdtor_FUN_00412720
;   core_armour.cpp_CVector3f_arrdtor_FUN_004126e0
;   core_armour.cpp_SFire_arrdtor_FUN_00412700
;   core_cloth.cpp_CClothList_dtor_FUN_0043bf80
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFreeChecked_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00417d60
        ;   Label: core_batman.cpp_CBatman_dtor_FUN_00417d60
    MOV EBX,dword ptr [ESP + 0x8]       ; 00417d61
    TEST byte ptr [ESP + 0xc],0x4       ; 00417d65
    JNZ 0x00417df1                      ; 00417d6a
        ;   XREF to: 00417df1 (CONDITIONAL_JUMP)  ; LAB_00417df1
    PUSH 0x0                            ; 00417d70
    ADD EBX,0x33cc                      ; 00417d72
    PUSH EBX                            ; 00417d78
    CALL core_armour.cpp_CFlame_arrdtor_FUN_00412720 ; 00417d79
        ;   XREF to: 00412720 (UNCONDITIONAL_CALL)  ; CFlame * core_armour.cpp_CFlame_arrdtor_FUN_00412720(CFlame * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00417d7e
    PUSH 0x0                            ; 00417d81
    SUB EAX,0x4b0                       ; 00417d83
    PUSH EAX                            ; 00417d88
    CALL core_armour.cpp_SFire_arrdtor_FUN_00412700 ; 00417d89
        ;   XREF to: 00412700 (UNCONDITIONAL_CALL)  ; SFire * core_armour.cpp_SFire_arrdtor_FUN_00412700(SFire * objs, uint flags)
    ADD ESP,0x8                         ; 00417d8e
    PUSH 0x0                            ; 00417d91
    SUB EAX,0x20c                       ; 00417d93
    PUSH EAX                            ; 00417d98
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_004126e0 ; 00417d99
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_004126e0(CVector3f * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00417d9e
    PUSH 0x0                            ; 00417da1
    SUB EAX,0xb4                        ; 00417da3
    PUSH EAX                            ; 00417da8
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_004126e0 ; 00417da9
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_004126e0(CVector3f * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00417dae
    PUSH 0x0                            ; 00417db1
    SUB EAX,0x1c8                       ; 00417db3
    PUSH EAX                            ; 00417db8
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043bf80 ; 00417db9
        ;   XREF to: 0043bf80 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043bf80(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00417dbe
    PUSH 0x0                            ; 00417dc1
    SUB EAX,0x293c                      ; 00417dc3
    PUSH EAX                            ; 00417dc8
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 ; 00417dc9
        ;   XREF to: 0059de40 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00417dce
    PUSH 0x1                            ; 00417dd1
    LEA EBX,[EAX + 0xfffffea8]          ; 00417dd3
    PUSH EBX                            ; 00417dd9
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 00417dda
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00417ddf
    MOV DL,byte ptr [ESP + 0xc]         ; 00417de2
    MOV EBX,EAX                         ; 00417de6
    TEST DL,0x2                         ; 00417de8
    JNZ 0x00417e0c                      ; 00417deb
        ;   XREF to: 00417e0c (CONDITIONAL_JUMP)  ; LAB_00417e0c
    MOV EAX,EBX                         ; 00417ded
    POP EBX                             ; 00417def
    RET                                 ; 00417df0
    PUSH 0x65a8f0                       ; 00417df1 | g_CBatmanTypeInfo
        ;   Label: LAB_00417df1
    PUSH EBX                            ; 00417df6
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 00417df7
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00417dfc
    PUSH EAX                            ; 00417dff
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 00417e00
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00417e05
    MOV EAX,EBX                         ; 00417e08
    POP EBX                             ; 00417e0a
    RET                                 ; 00417e0b
    PUSH EAX                            ; 00417e0c
        ;   Label: LAB_00417e0c
    CALL shape_memdbg.cpp_debugFreeChecked_FUN_0050f210 ; 00417e0d
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFreeChecked_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 00417e12
    MOV EAX,EBX                         ; 00417e15
    POP EBX                             ; 00417e17
    RET                                 ; 00417e18

