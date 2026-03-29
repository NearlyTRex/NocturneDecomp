; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CZombie * __cdecl core_zombie_cpp_CZombie_dtor_FUN_005fcc50(CZombie *this_ptr,uint flags)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CZombieTypeInfo
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

    PUSH EBX                            ; 005fcc50
        ;   Label: core_zombie.cpp_CZombie_dtor_FUN_005fcc50
    MOV EBX,dword ptr [ESP + 0x8]       ; 005fcc51
    TEST byte ptr [ESP + 0xc],0x4       ; 005fcc55
    JNZ 0x005fcce1                      ; 005fcc5a
        ;   XREF to: 005fcce1 (CONDITIONAL_JUMP)  ; LAB_005fcce1
    PUSH 0x0                            ; 005fcc60
    ADD EBX,0x33cc                      ; 005fcc62
    PUSH EBX                            ; 005fcc68
    CALL core_armour.cpp_CFlame_arrdtor_FUN_00412720 ; 005fcc69
        ;   XREF to: 00412720 (UNCONDITIONAL_CALL)  ; CFlame * core_armour.cpp_CFlame_arrdtor_FUN_00412720(CFlame * objs, uint flags)
    ADD ESP,0x8                         ; 005fcc6e
    PUSH 0x0                            ; 005fcc71
    SUB EAX,0x4b0                       ; 005fcc73
    PUSH EAX                            ; 005fcc78
    CALL core_armour.cpp_SFire_arrdtor_FUN_00412700 ; 005fcc79
        ;   XREF to: 00412700 (UNCONDITIONAL_CALL)  ; SFire * core_armour.cpp_SFire_arrdtor_FUN_00412700(SFire * objs, uint flags)
    ADD ESP,0x8                         ; 005fcc7e
    PUSH 0x0                            ; 005fcc81
    SUB EAX,0x20c                       ; 005fcc83
    PUSH EAX                            ; 005fcc88
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_004126e0 ; 005fcc89
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_004126e0(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 005fcc8e
    PUSH 0x0                            ; 005fcc91
    SUB EAX,0xb4                        ; 005fcc93
    PUSH EAX                            ; 005fcc98
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_004126e0 ; 005fcc99
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_004126e0(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 005fcc9e
    PUSH 0x0                            ; 005fcca1
    SUB EAX,0x1c8                       ; 005fcca3
    PUSH EAX                            ; 005fcca8
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043bf80 ; 005fcca9
        ;   XREF to: 0043bf80 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043bf80(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005fccae
    PUSH 0x0                            ; 005fccb1
    SUB EAX,0x293c                      ; 005fccb3
    PUSH EAX                            ; 005fccb8
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 ; 005fccb9
        ;   XREF to: 0059de40 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005fccbe
    PUSH 0x1                            ; 005fccc1
    LEA EBX,[EAX + 0xfffffea8]          ; 005fccc3
    PUSH EBX                            ; 005fccc9
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 005fccca
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005fcccf
    MOV DL,byte ptr [ESP + 0xc]         ; 005fccd2
    MOV EBX,EAX                         ; 005fccd6
    TEST DL,0x2                         ; 005fccd8
    JNZ 0x005fccfc                      ; 005fccdb
        ;   XREF to: 005fccfc (CONDITIONAL_JUMP)  ; LAB_005fccfc
    MOV EAX,EBX                         ; 005fccdd
    POP EBX                             ; 005fccdf
    RET                                 ; 005fcce0
    PUSH 0x665b50                       ; 005fcce1 | g_CZombieTypeInfo
        ;   Label: LAB_005fcce1
    PUSH EBX                            ; 005fcce6
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 005fcce7
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005fccec
    PUSH EAX                            ; 005fccef
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 005fccf0
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005fccf5
    MOV EAX,EBX                         ; 005fccf8
    POP EBX                             ; 005fccfa
    RET                                 ; 005fccfb
    PUSH EAX                            ; 005fccfc
        ;   Label: LAB_005fccfc
    CALL shape_memdbg.cpp_debugFreeChecked_FUN_0050f210 ; 005fccfd
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFreeChecked_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 005fcd02
    MOV EAX,EBX                         ; 005fcd05
    POP EBX                             ; 005fcd07
    RET                                 ; 005fcd08

