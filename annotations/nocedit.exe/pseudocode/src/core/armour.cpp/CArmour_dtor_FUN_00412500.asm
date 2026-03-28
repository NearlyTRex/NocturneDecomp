; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CArmour * __cdecl core_armour_cpp_CArmour_dtor_FUN_00412500(CArmour *this_ptr,uint flags)
;
; Parameters:
; CArmour *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CArmourTypeInfo
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

    PUSH EBX                            ; 00412500
        ;   Label: core_armour.cpp_CArmour_dtor_FUN_00412500
    MOV EBX,dword ptr [ESP + 0x8]       ; 00412501
    TEST byte ptr [ESP + 0xc],0x4       ; 00412505
    JNZ 0x00412591                      ; 0041250a
        ;   XREF to: 00412591 (CONDITIONAL_JUMP)  ; LAB_00412591
    PUSH 0x0                            ; 00412510
    ADD EBX,0x33cc                      ; 00412512
    PUSH EBX                            ; 00412518
    CALL core_armour.cpp_CFlame_arrdtor_FUN_00412720 ; 00412519
        ;   XREF to: 00412720 (UNCONDITIONAL_CALL)  ; CFlame * core_armour.cpp_CFlame_arrdtor_FUN_00412720(CFlame * objs, uint flags)
    ADD ESP,0x8                         ; 0041251e
    PUSH 0x0                            ; 00412521
    SUB EAX,0x4b0                       ; 00412523
    PUSH EAX                            ; 00412528
    CALL core_armour.cpp_SFire_arrdtor_FUN_00412700 ; 00412529
        ;   XREF to: 00412700 (UNCONDITIONAL_CALL)  ; SFire * core_armour.cpp_SFire_arrdtor_FUN_00412700(SFire * objs, uint flags)
    ADD ESP,0x8                         ; 0041252e
    PUSH 0x0                            ; 00412531
    SUB EAX,0x20c                       ; 00412533
    PUSH EAX                            ; 00412538
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_004126e0 ; 00412539
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_004126e0(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 0041253e
    PUSH 0x0                            ; 00412541
    SUB EAX,0xb4                        ; 00412543
    PUSH EAX                            ; 00412548
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_004126e0 ; 00412549
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_004126e0(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 0041254e
    PUSH 0x0                            ; 00412551
    SUB EAX,0x1c8                       ; 00412553
    PUSH EAX                            ; 00412558
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043bf80 ; 00412559
        ;   XREF to: 0043bf80 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043bf80(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041255e
    PUSH 0x0                            ; 00412561
    SUB EAX,0x293c                      ; 00412563
    PUSH EAX                            ; 00412568
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 ; 00412569
        ;   XREF to: 0059de40 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041256e
    PUSH 0x1                            ; 00412571
    LEA EBX,[EAX + 0xfffffea8]          ; 00412573
    PUSH EBX                            ; 00412579
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 0041257a
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041257f
    MOV DL,byte ptr [ESP + 0xc]         ; 00412582
    MOV EBX,EAX                         ; 00412586
    TEST DL,0x2                         ; 00412588
    JNZ 0x004125ac                      ; 0041258b
        ;   XREF to: 004125ac (CONDITIONAL_JUMP)  ; LAB_004125ac
    MOV EAX,EBX                         ; 0041258d
    POP EBX                             ; 0041258f
    RET                                 ; 00412590
    PUSH 0x659ea0                       ; 00412591 | g_CArmourTypeInfo
        ;   Label: LAB_00412591
    PUSH EBX                            ; 00412596
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 00412597
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0041259c
    PUSH EAX                            ; 0041259f
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 004125a0
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 004125a5
    MOV EAX,EBX                         ; 004125a8
    POP EBX                             ; 004125aa
    RET                                 ; 004125ab
    PUSH EAX                            ; 004125ac
        ;   Label: LAB_004125ac
    CALL shape_memdbg.cpp_debugFreeChecked_FUN_0050f210 ; 004125ad
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFreeChecked_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 004125b2
    MOV EAX,EBX                         ; 004125b5
    POP EBX                             ; 004125b7
    RET                                 ; 004125b8

