; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVampireBoss * __cdecl core_vampboss_cpp_CVampireBoss_dtor_FUN_005e7700(CVampireBoss *this_ptr,uint flags)
;
; Parameters:
; CVampireBoss *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CVampireBossTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   core_armour.cpp_CFlame_arrdtor_FUN_00412720
;   core_armour.cpp_CVector3f_arrdtor_FUN_004126e0
;   core_armour.cpp_SFire_arrdtor_FUN_00412700
;   core_cloth.cpp_CCloth_dtor_FUN_00438c00
;   core_cloth.cpp_CClothList_dtor_FUN_0043bf80
;   core_morph.cpp_CMorph_dtor_FUN_0052b330
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e7700
        ;   Label: core_vampboss.cpp_CVampireBoss_dtor_FUN_005e7700
    MOV EBX,dword ptr [ESP + 0x8]       ; 005e7701
    TEST byte ptr [ESP + 0xc],0x4       ; 005e7705
    JNZ 0x005e77e1                      ; 005e770a
        ;   XREF to: 005e77e1 (CONDITIONAL_JUMP)  ; LAB_005e77e1
    PUSH 0x0                            ; 005e7710
    ADD EBX,0xcdcc4                     ; 005e7712
    PUSH EBX                            ; 005e7718
    CALL core_morph.cpp_CMorph_dtor_FUN_0052b330 ; 005e7719
        ;   XREF to: 0052b330 (UNCONDITIONAL_CALL)  ; CMorph * core_morph.cpp_CMorph_dtor_FUN_0052b330(CMorph * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005e771e
    PUSH 0x0                            ; 005e7721
    SUB EAX,0x3fe74                     ; 005e7723
    PUSH EAX                            ; 005e7728
    CALL core_cloth.cpp_CCloth_dtor_FUN_00438c00 ; 005e7729
        ;   XREF to: 00438c00 (UNCONDITIONAL_CALL)  ; CCloth * core_cloth.cpp_CCloth_dtor_FUN_00438c00(CCloth * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005e772e
    PUSH 0x0                            ; 005e7731
    SUB EAX,0x3fe70                     ; 005e7733
    PUSH EAX                            ; 005e7738
    CALL core_cloth.cpp_CCloth_dtor_FUN_00438c00 ; 005e7739
        ;   XREF to: 00438c00 (UNCONDITIONAL_CALL)  ; CCloth * core_cloth.cpp_CCloth_dtor_FUN_00438c00(CCloth * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005e773e
    PUSH 0x0                            ; 005e7741
    SUB EAX,0x3fe70                     ; 005e7743
    PUSH EAX                            ; 005e7748
    CALL core_cloth.cpp_CCloth_dtor_FUN_00438c00 ; 005e7749
        ;   XREF to: 00438c00 (UNCONDITIONAL_CALL)  ; CCloth * core_cloth.cpp_CCloth_dtor_FUN_00438c00(CCloth * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005e774e
    PUSH 0x0                            ; 005e7751
    SUB EAX,0x22b4                      ; 005e7753
    PUSH EAX                            ; 005e7758
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 ; 005e7759
        ;   XREF to: 0059de40 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005e775e
    PUSH 0x0                            ; 005e7761
    SUB EAX,0x8af0                      ; 005e7763
    PUSH EAX                            ; 005e7768
    CALL core_armour.cpp_CFlame_arrdtor_FUN_00412720 ; 005e7769
        ;   XREF to: 00412720 (UNCONDITIONAL_CALL)  ; CFlame * core_armour.cpp_CFlame_arrdtor_FUN_00412720(CFlame * objs, uint flags)
    ADD ESP,0x8                         ; 005e776e
    PUSH 0x0                            ; 005e7771
    SUB EAX,0x4b0                       ; 005e7773
    PUSH EAX                            ; 005e7778
    CALL core_armour.cpp_SFire_arrdtor_FUN_00412700 ; 005e7779
        ;   XREF to: 00412700 (UNCONDITIONAL_CALL)  ; SFire * core_armour.cpp_SFire_arrdtor_FUN_00412700(SFire * objs, uint flags)
    ADD ESP,0x8                         ; 005e777e
    PUSH 0x0                            ; 005e7781
    SUB EAX,0x20c                       ; 005e7783
    PUSH EAX                            ; 005e7788
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_004126e0 ; 005e7789
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_004126e0(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 005e778e
    PUSH 0x0                            ; 005e7791
    SUB EAX,0xb4                        ; 005e7793
    PUSH EAX                            ; 005e7798
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_004126e0 ; 005e7799
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_004126e0(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 005e779e
    PUSH 0x0                            ; 005e77a1
    SUB EAX,0x1c8                       ; 005e77a3
    PUSH EAX                            ; 005e77a8
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043bf80 ; 005e77a9
        ;   XREF to: 0043bf80 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043bf80(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005e77ae
    PUSH 0x0                            ; 005e77b1
    SUB EAX,0x293c                      ; 005e77b3
    PUSH EAX                            ; 005e77b8
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 ; 005e77b9
        ;   XREF to: 0059de40 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005e77be
    LEA EBX,[EAX + 0xfffffea8]          ; 005e77c1
    PUSH 0x1                            ; 005e77c7
    PUSH EBX                            ; 005e77c9
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 005e77ca
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005e77cf
    MOV DL,byte ptr [ESP + 0xc]         ; 005e77d2
    MOV EBX,EAX                         ; 005e77d6
    TEST DL,0x2                         ; 005e77d8
    JNZ 0x005e77fc                      ; 005e77db
        ;   XREF to: 005e77fc (CONDITIONAL_JUMP)  ; LAB_005e77fc
    MOV EAX,EBX                         ; 005e77dd
    POP EBX                             ; 005e77df
    RET                                 ; 005e77e0
    PUSH 0x665000                       ; 005e77e1 | g_CVampireBossTypeInfo
        ;   Label: LAB_005e77e1
    PUSH EBX                            ; 005e77e6
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 005e77e7
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005e77ec
    PUSH EAX                            ; 005e77ef
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 005e77f0
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005e77f5
    MOV EAX,EBX                         ; 005e77f8
    POP EBX                             ; 005e77fa
    RET                                 ; 005e77fb
    PUSH EAX                            ; 005e77fc
        ;   Label: LAB_005e77fc
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 005e77fd
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 005e7802
    MOV EAX,EBX                         ; 005e7805
    POP EBX                             ; 005e7807
    RET                                 ; 005e7808

