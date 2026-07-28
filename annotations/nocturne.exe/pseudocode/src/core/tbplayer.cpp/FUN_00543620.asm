; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * core_tbplayer_cpp_FUN_00543620(CDemonActor *param_1,byte param_2)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CDrummerTypeInfo_005a2e80
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   core_armour.cpp_CFlame_arrdtor_FUN_0040fe50
;   core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10
;   core_armour.cpp_SFire_arrdtor_FUN_0040fe30
;   core_cloth.cpp_CClothList_dtor_FUN_00438250
;   core_path.cpp_CPathMap_dtor_FUN_004efdd0
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00543620
        ;   Label: core_tbplayer.cpp_FUN_00543620
    MOV EBX,dword ptr [ESP + 0x8]       ; 00543621
    TEST byte ptr [ESP + 0xc],0x4       ; 00543625
    JNZ 0x005436c1                      ; 0054362a
        ;   XREF to: 005436c1 (CONDITIONAL_JUMP)  ; LAB_005436c1
    PUSH 0x0                            ; 00543630
    ADD EBX,0xbc8c                      ; 00543632
    PUSH EBX                            ; 00543638
    CALL core_path.cpp_CPathMap_dtor_FUN_004efdd0 ; 00543639
        ;   XREF to: 004efdd0 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_CPathMap_dtor_FUN_004efdd0(CPathMap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054363e
    PUSH 0x0                            ; 00543641
    SUB EAX,0x88c8                      ; 00543643
    PUSH EAX                            ; 00543648
    CALL core_armour.cpp_CFlame_arrdtor_FUN_0040fe50 ; 00543649
        ;   XREF to: 0040fe50 (UNCONDITIONAL_CALL)  ; CFlame * core_armour.cpp_CFlame_arrdtor_FUN_0040fe50(CFlame * objs, uint flags)
    ADD ESP,0x8                         ; 0054364e
    PUSH 0x0                            ; 00543651
    SUB EAX,0x4b0                       ; 00543653
    PUSH EAX                            ; 00543658
    CALL core_armour.cpp_SFire_arrdtor_FUN_0040fe30 ; 00543659
        ;   XREF to: 0040fe30 (UNCONDITIONAL_CALL)  ; SFire * core_armour.cpp_SFire_arrdtor_FUN_0040fe30(SFire * objs, uint flags)
    ADD ESP,0x8                         ; 0054365e
    PUSH 0x0                            ; 00543661
    SUB EAX,0x20c                       ; 00543663
    PUSH EAX                            ; 00543668
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10 ; 00543669
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 0054366e
    PUSH 0x0                            ; 00543671
    SUB EAX,0xb4                        ; 00543673
    PUSH EAX                            ; 00543678
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10 ; 00543679
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 0054367e
    PUSH 0x0                            ; 00543681
    SUB EAX,0x1c8                       ; 00543683
    PUSH EAX                            ; 00543688
    CALL core_cloth.cpp_CClothList_dtor_FUN_00438250 ; 00543689
        ;   XREF to: 00438250 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_00438250(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054368e
    PUSH 0x0                            ; 00543691
    SUB EAX,0x293c                      ; 00543693
    PUSH EAX                            ; 00543698
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0 ; 00543699
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054369e
    PUSH 0x1                            ; 005436a1
    LEA EBX,[EAX + 0xfffffeb0]          ; 005436a3
    PUSH EBX                            ; 005436a9
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 005436aa
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005436af
    MOV DL,byte ptr [ESP + 0xc]         ; 005436b2
    MOV EBX,EAX                         ; 005436b6
    TEST DL,0x2                         ; 005436b8
    JNZ 0x005436dc                      ; 005436bb
        ;   XREF to: 005436dc (CONDITIONAL_JUMP)  ; LAB_005436dc
    MOV EAX,EBX                         ; 005436bd
    POP EBX                             ; 005436bf
    RET                                 ; 005436c0
    PUSH 0x5a2e80                       ; 005436c1 | g_CDrummerTypeInfo_005a2e80
        ;   Label: LAB_005436c1
    PUSH EBX                            ; 005436c6
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 005436c7
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005436cc
    PUSH EAX                            ; 005436cf
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 005436d0
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 005436d5
    MOV EAX,EBX                         ; 005436d8
    POP EBX                             ; 005436da
    RET                                 ; 005436db
    PUSH EAX                            ; 005436dc
        ;   Label: LAB_005436dc
    CALL crt_unknown.c_FUN_00564494     ; 005436dd
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 005436e2
    MOV EAX,EBX                         ; 005436e5
    POP EBX                             ; 005436e7
    RET                                 ; 005436e8

