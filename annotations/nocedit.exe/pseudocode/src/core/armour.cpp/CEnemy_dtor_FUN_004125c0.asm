; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CEnemy * __cdecl core_armour_cpp_CEnemy_dtor_FUN_004125c0(CEnemy *this_ptr,uint flags)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CEnemyTypeInfo
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

    PUSH EBX                            ; 004125c0
        ;   Label: core_armour.cpp_CEnemy_dtor_FUN_004125c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004125c1
    TEST byte ptr [ESP + 0xc],0x4       ; 004125c5
    JNZ 0x00412651                      ; 004125ca
        ;   XREF to: 00412651 (CONDITIONAL_JUMP)  ; LAB_00412651
    PUSH 0x0                            ; 004125d0
    ADD EBX,0x33cc                      ; 004125d2
    PUSH EBX                            ; 004125d8
    CALL core_armour.cpp_CFlame_arrdtor_FUN_00412720 ; 004125d9
        ;   XREF to: 00412720 (UNCONDITIONAL_CALL)  ; CFlame * core_armour.cpp_CFlame_arrdtor_FUN_00412720(CFlame * objs, uint flags)
    ADD ESP,0x8                         ; 004125de
    PUSH 0x0                            ; 004125e1
    SUB EAX,0x4b0                       ; 004125e3
    PUSH EAX                            ; 004125e8
    CALL core_armour.cpp_SFire_arrdtor_FUN_00412700 ; 004125e9
        ;   XREF to: 00412700 (UNCONDITIONAL_CALL)  ; SFire * core_armour.cpp_SFire_arrdtor_FUN_00412700(SFire * objs, uint flags)
    ADD ESP,0x8                         ; 004125ee
    PUSH 0x0                            ; 004125f1
    SUB EAX,0x20c                       ; 004125f3
    PUSH EAX                            ; 004125f8
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_004126e0 ; 004125f9
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_004126e0(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 004125fe
    PUSH 0x0                            ; 00412601
    SUB EAX,0xb4                        ; 00412603
    PUSH EAX                            ; 00412608
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_004126e0 ; 00412609
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_004126e0(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 0041260e
    PUSH 0x0                            ; 00412611
    SUB EAX,0x1c8                       ; 00412613
    PUSH EAX                            ; 00412618
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043bf80 ; 00412619
        ;   XREF to: 0043bf80 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043bf80(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041261e
    PUSH 0x0                            ; 00412621
    SUB EAX,0x293c                      ; 00412623
    PUSH EAX                            ; 00412628
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 ; 00412629
        ;   XREF to: 0059de40 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041262e
    PUSH 0x1                            ; 00412631
    LEA EBX,[EAX + 0xfffffea8]          ; 00412633
    PUSH EBX                            ; 00412639
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 0041263a
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041263f
    MOV DL,byte ptr [ESP + 0xc]         ; 00412642
    MOV EBX,EAX                         ; 00412646
    TEST DL,0x2                         ; 00412648
    JNZ 0x0041266c                      ; 0041264b
        ;   XREF to: 0041266c (CONDITIONAL_JUMP)  ; LAB_0041266c
    MOV EAX,EBX                         ; 0041264d
    POP EBX                             ; 0041264f
    RET                                 ; 00412650
    PUSH 0x659ec0                       ; 00412651 | g_CEnemyTypeInfo
        ;   Label: LAB_00412651
    PUSH EBX                            ; 00412656
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 00412657
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0041265c
    PUSH EAX                            ; 0041265f
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 00412660
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00412665
    MOV EAX,EBX                         ; 00412668
    POP EBX                             ; 0041266a
    RET                                 ; 0041266b
    PUSH EAX                            ; 0041266c
        ;   Label: LAB_0041266c
    CALL shape_memdbg.cpp_debugFreeChecked_FUN_0050f210 ; 0041266d
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFreeChecked_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 00412672
    MOV EAX,EBX                         ; 00412675
    POP EBX                             ; 00412677
    RET                                 ; 00412678

