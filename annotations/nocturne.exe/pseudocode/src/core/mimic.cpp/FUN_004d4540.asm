; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * core_mimic_cpp_FUN_004d4540(CDemonActor *param_1,byte param_2)
;
;
; Referenced Globals:
;   CEnemy_full_vtable g_CMimicVTable
;   WatcomTypeInfo g_CMimicTypeInfo_005a0740
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   core_armour.cpp_CFlame_arrdtor_FUN_0040fe50
;   core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10
;   core_armour.cpp_SFire_arrdtor_FUN_0040fe30
;   core_cloth.cpp_CCloth_dtor_FUN_00435160
;   core_cloth.cpp_CClothList_dtor_FUN_00438250
;   core_morph.cpp_CMorph_dtor_FUN_004e0070
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d4540
        ;   Label: core_mimic.cpp_FUN_004d4540
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d4541
    TEST byte ptr [ESP + 0xc],0x4       ; 004d4545
    JNZ 0x004d4621                      ; 004d454a
        ;   XREF to: 004d4621 (CONDITIONAL_JUMP)  ; LAB_004d4621
    MOV EAX,dword ptr [EBX + 0x4757c]   ; 004d4550
    MOV dword ptr [EBX + 0x14c],0x5a05f4 ; 004d4556 | g_CMimicVTable
    TEST EAX,EAX                        ; 004d4560
    JZ 0x004d4576                       ; 004d4562
        ;   XREF to: 004d4576 (CONDITIONAL_JUMP)  ; LAB_004d4576
    PUSH 0x2                            ; 004d4564
    MOV EDX,dword ptr [EAX + 0x14c]     ; 004d4566
    PUSH EAX                            ; 004d456c
    CALL dword ptr [EDX + 0xc8]         ; 004d456d
    ADD ESP,0x8                         ; 004d4573
    PUSH 0x0                            ; 004d4576
        ;   Label: LAB_004d4576
    ADD EBX,0x4694c                     ; 004d4578
    PUSH EBX                            ; 004d457e
    MOV dword ptr [EBX + 0xc30],0x0     ; 004d457f
    CALL core_morph.cpp_CMorph_dtor_FUN_004e0070 ; 004d4589
        ;   XREF to: 004e0070 (UNCONDITIONAL_CALL)  ; CMorph * core_morph.cpp_CMorph_dtor_FUN_004e0070(CMorph * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d458e
    PUSH 0x0                            ; 004d4591
    SUB EAX,0x3ab60                     ; 004d4593
    PUSH EAX                            ; 004d4598
    CALL core_cloth.cpp_CCloth_dtor_FUN_00435160 ; 004d4599
        ;   XREF to: 00435160 (UNCONDITIONAL_CALL)  ; CCloth * core_cloth.cpp_CCloth_dtor_FUN_00435160(CCloth * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d459e
    PUSH 0x0                            ; 004d45a1
    SUB EAX,0x8a28                      ; 004d45a3
    PUSH EAX                            ; 004d45a8
    CALL core_armour.cpp_CFlame_arrdtor_FUN_0040fe50 ; 004d45a9
        ;   XREF to: 0040fe50 (UNCONDITIONAL_CALL)  ; CFlame * core_armour.cpp_CFlame_arrdtor_FUN_0040fe50(CFlame * objs, uint flags)
    ADD ESP,0x8                         ; 004d45ae
    PUSH 0x0                            ; 004d45b1
    SUB EAX,0x4b0                       ; 004d45b3
    PUSH EAX                            ; 004d45b8
    CALL core_armour.cpp_SFire_arrdtor_FUN_0040fe30 ; 004d45b9
        ;   XREF to: 0040fe30 (UNCONDITIONAL_CALL)  ; SFire * core_armour.cpp_SFire_arrdtor_FUN_0040fe30(SFire * objs, uint flags)
    ADD ESP,0x8                         ; 004d45be
    PUSH 0x0                            ; 004d45c1
    SUB EAX,0x20c                       ; 004d45c3
    PUSH EAX                            ; 004d45c8
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10 ; 004d45c9
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 004d45ce
    PUSH 0x0                            ; 004d45d1
    SUB EAX,0xb4                        ; 004d45d3
    PUSH EAX                            ; 004d45d8
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10 ; 004d45d9
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 004d45de
    PUSH 0x0                            ; 004d45e1
    SUB EAX,0x1c8                       ; 004d45e3
    PUSH EAX                            ; 004d45e8
    CALL core_cloth.cpp_CClothList_dtor_FUN_00438250 ; 004d45e9
        ;   XREF to: 00438250 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_00438250(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d45ee
    PUSH 0x0                            ; 004d45f1
    SUB EAX,0x293c                      ; 004d45f3
    PUSH EAX                            ; 004d45f8
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0 ; 004d45f9
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d45fe
    PUSH 0x1                            ; 004d4601
    LEA EBX,[EAX + 0xfffffeb0]          ; 004d4603
    PUSH EBX                            ; 004d4609
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 004d460a
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d460f
    MOV DL,byte ptr [ESP + 0xc]         ; 004d4612
    MOV EBX,EAX                         ; 004d4616
    TEST DL,0x2                         ; 004d4618
    JNZ 0x004d463c                      ; 004d461b
        ;   XREF to: 004d463c (CONDITIONAL_JUMP)  ; LAB_004d463c
    MOV EAX,EBX                         ; 004d461d
    POP EBX                             ; 004d461f
    RET                                 ; 004d4620
    PUSH 0x5a0740                       ; 004d4621 | g_CMimicTypeInfo_005a0740
        ;   Label: LAB_004d4621
    PUSH EBX                            ; 004d4626
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 004d4627
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004d462c
    PUSH EAX                            ; 004d462f
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 004d4630
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 004d4635
    MOV EAX,EBX                         ; 004d4638
    POP EBX                             ; 004d463a
    RET                                 ; 004d463b
    PUSH EAX                            ; 004d463c
        ;   Label: LAB_004d463c
    CALL crt_unknown.c_FUN_00564494     ; 004d463d
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 004d4642
    MOV EAX,EBX                         ; 004d4645
    POP EBX                             ; 004d4647
    RET                                 ; 004d4648

