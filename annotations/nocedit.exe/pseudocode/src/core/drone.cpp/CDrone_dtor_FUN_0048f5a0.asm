; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDrone * __cdecl core_drone_cpp_CDrone_dtor_FUN_0048f5a0(CDrone *this_ptr,uint flags)
;
; Parameters:
; CDrone *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CDroneTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   core_armour.cpp_CFlame_arrdtor50_FUN_00412720
;   core_armour.cpp_CVector3f_arrdtor15_FUN_004126e0
;   core_armour.cpp_SFire_arrdtor50_FUN_00412700
;   core_cloth.cpp_CClothList_dtor_FUN_0043bf80
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFreeChecked_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048f5a0
        ;   Label: core_drone.cpp_CDrone_dtor_FUN_0048f5a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0048f5a1
    TEST byte ptr [ESP + 0xc],0x4       ; 0048f5a5
    JNZ 0x0048f631                      ; 0048f5aa
        ;   XREF to: 0048f631 (CONDITIONAL_JUMP)  ; LAB_0048f631
    PUSH 0x0                            ; 0048f5b0
    ADD EBX,0x33cc                      ; 0048f5b2
    PUSH EBX                            ; 0048f5b8
    CALL core_armour.cpp_CFlame_arrdtor50_FUN_00412720 ; 0048f5b9
        ;   XREF to: 00412720 (UNCONDITIONAL_CALL)  ; CFlame * core_armour.cpp_CFlame_arrdtor50_FUN_00412720(CFlame * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0048f5be
    PUSH 0x0                            ; 0048f5c1
    SUB EAX,0x4b0                       ; 0048f5c3
    PUSH EAX                            ; 0048f5c8
    CALL core_armour.cpp_SFire_arrdtor50_FUN_00412700 ; 0048f5c9
        ;   XREF to: 00412700 (UNCONDITIONAL_CALL)  ; SFire * core_armour.cpp_SFire_arrdtor50_FUN_00412700(SFire * objs, uint flags)
    ADD ESP,0x8                         ; 0048f5ce
    PUSH 0x0                            ; 0048f5d1
    SUB EAX,0x20c                       ; 0048f5d3
    PUSH EAX                            ; 0048f5d8
    CALL core_armour.cpp_CVector3f_arrdtor15_FUN_004126e0 ; 0048f5d9
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor15_FUN_004126e0(CVector3f * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0048f5de
    PUSH 0x0                            ; 0048f5e1
    SUB EAX,0xb4                        ; 0048f5e3
    PUSH EAX                            ; 0048f5e8
    CALL core_armour.cpp_CVector3f_arrdtor15_FUN_004126e0 ; 0048f5e9
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor15_FUN_004126e0(CVector3f * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0048f5ee
    PUSH 0x0                            ; 0048f5f1
    SUB EAX,0x1c8                       ; 0048f5f3
    PUSH EAX                            ; 0048f5f8
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043bf80 ; 0048f5f9
        ;   XREF to: 0043bf80 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043bf80(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0048f5fe
    PUSH 0x0                            ; 0048f601
    SUB EAX,0x293c                      ; 0048f603
    PUSH EAX                            ; 0048f608
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 ; 0048f609
        ;   XREF to: 0059de40 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0048f60e
    PUSH 0x1                            ; 0048f611
    LEA EBX,[EAX + 0xfffffea8]          ; 0048f613
    PUSH EBX                            ; 0048f619
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 0048f61a
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0048f61f
    MOV DL,byte ptr [ESP + 0xc]         ; 0048f622
    MOV EBX,EAX                         ; 0048f626
    TEST DL,0x2                         ; 0048f628
    JNZ 0x0048f64c                      ; 0048f62b
        ;   XREF to: 0048f64c (CONDITIONAL_JUMP)  ; LAB_0048f64c
    MOV EAX,EBX                         ; 0048f62d
    POP EBX                             ; 0048f62f
    RET                                 ; 0048f630
    PUSH 0x65d230                       ; 0048f631 | g_CDroneTypeInfo
        ;   Label: LAB_0048f631
    PUSH EBX                            ; 0048f636
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 0048f637
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0048f63c
    PUSH EAX                            ; 0048f63f
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 0048f640
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 0048f645
    MOV EAX,EBX                         ; 0048f648
    POP EBX                             ; 0048f64a
    RET                                 ; 0048f64b
    PUSH EAX                            ; 0048f64c
        ;   Label: LAB_0048f64c
    CALL shape_memdbg.cpp_debugFreeChecked_FUN_0050f210 ; 0048f64d
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFreeChecked_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 0048f652
    MOV EAX,EBX                         ; 0048f655
    POP EBX                             ; 0048f657
    RET                                 ; 0048f658

