; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CZombie * __cdecl core_zombie_cpp_CZombie_dtor_FUN_00562550(CZombie *this_ptr,uint flags)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CZombieTypeInfo_005a46a0
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   core_armour.cpp_CFlame_arrdtor50_FUN_0040fe50
;   core_armour.cpp_CVector3f_arrdtor15_FUN_0040fe10
;   core_armour.cpp_SFire_arrdtor50_FUN_0040fe30
;   core_cloth.cpp_CClothList_dtor_FUN_00438250
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_memory.c_operator_delete_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00562550
        ;   Label: core_zombie.cpp_CZombie_dtor_FUN_00562550
    MOV EBX,dword ptr [ESP + 0x8]       ; 00562551
    TEST byte ptr [ESP + 0xc],0x4       ; 00562555
    JNZ 0x005625e1                      ; 0056255a
        ;   XREF to: 005625e1 (CONDITIONAL_JUMP)  ; LAB_005625e1
    PUSH 0x0                            ; 00562560
    ADD EBX,0x33c4                      ; 00562562
    PUSH EBX                            ; 00562568
    CALL core_armour.cpp_CFlame_arrdtor50_FUN_0040fe50 ; 00562569
        ;   XREF to: 0040fe50 (UNCONDITIONAL_CALL)  ; CFlame * core_armour.cpp_CFlame_arrdtor50_FUN_0040fe50(CFlame * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0056256e
    PUSH 0x0                            ; 00562571
    SUB EAX,0x4b0                       ; 00562573
    PUSH EAX                            ; 00562578
    CALL core_armour.cpp_SFire_arrdtor50_FUN_0040fe30 ; 00562579
        ;   XREF to: 0040fe30 (UNCONDITIONAL_CALL)  ; SFire * core_armour.cpp_SFire_arrdtor50_FUN_0040fe30(SFire * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0056257e
    PUSH 0x0                            ; 00562581
    SUB EAX,0x20c                       ; 00562583
    PUSH EAX                            ; 00562588
    CALL core_armour.cpp_CVector3f_arrdtor15_FUN_0040fe10 ; 00562589
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor15_FUN_0040fe10(CVector3f * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0056258e
    PUSH 0x0                            ; 00562591
    SUB EAX,0xb4                        ; 00562593
    PUSH EAX                            ; 00562598
    CALL core_armour.cpp_CVector3f_arrdtor15_FUN_0040fe10 ; 00562599
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor15_FUN_0040fe10(CVector3f * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0056259e
    PUSH 0x0                            ; 005625a1
    SUB EAX,0x1c8                       ; 005625a3
    PUSH EAX                            ; 005625a8
    CALL core_cloth.cpp_CClothList_dtor_FUN_00438250 ; 005625a9
        ;   XREF to: 00438250 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_00438250(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005625ae
    PUSH 0x0                            ; 005625b1
    SUB EAX,0x293c                      ; 005625b3
    PUSH EAX                            ; 005625b8
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0 ; 005625b9
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005625be
    PUSH 0x1                            ; 005625c1
    LEA EBX,[EAX + 0xfffffeb0]          ; 005625c3
    PUSH EBX                            ; 005625c9
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 005625ca
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005625cf
    MOV DL,byte ptr [ESP + 0xc]         ; 005625d2
    MOV EBX,EAX                         ; 005625d6
    TEST DL,0x2                         ; 005625d8
    JNZ 0x005625fc                      ; 005625db
        ;   XREF to: 005625fc (CONDITIONAL_JUMP)  ; LAB_005625fc
    MOV EAX,EBX                         ; 005625dd
    POP EBX                             ; 005625df
    RET                                 ; 005625e0
    PUSH 0x5a46a0                       ; 005625e1 | g_CZombieTypeInfo_005a46a0
        ;   Label: LAB_005625e1
    PUSH EBX                            ; 005625e6
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 005625e7
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005625ec
    PUSH EAX                            ; 005625ef
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 005625f0
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 005625f5
    MOV EAX,EBX                         ; 005625f8
    POP EBX                             ; 005625fa
    RET                                 ; 005625fb
    PUSH EAX                            ; 005625fc
        ;   Label: LAB_005625fc
    CALL crt_memory.c_operator_delete_FUN_00564494 ; 005625fd
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; void crt_memory.c_operator_delete_FUN_00564494(void * ptr)
    ADD ESP,0x4                         ; 00562602
    MOV EAX,EBX                         ; 00562605
    POP EBX                             ; 00562607
    RET                                 ; 00562608

